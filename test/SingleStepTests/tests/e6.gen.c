#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_E6, _E6_0000) {
    const struct CPU_State initial_cpu = {.pc=0x7341, .a=0xba, .x=0x99, .y=0x9e, .sp=0xda, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x44}, {.addr=0x7341, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7342, .a=0x44, .x=0x99, .y=0x9e, .sp=0xda, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x44}, {.addr=0x7341, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7341, .value=0xe6, .type=IO_READ},
        {.addr=0x7342, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0001) {
    const struct CPU_State initial_cpu = {.pc=0x0f1f, .a=0x8a, .x=0x63, .y=0x67, .sp=0xa3, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x21}, {.addr=0x0f1f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0f20, .a=0x21, .x=0x63, .y=0x67, .sp=0xa3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x21}, {.addr=0x0f1f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0f1f, .value=0xe6, .type=IO_READ},
        {.addr=0x0f20, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0002) {
    const struct CPU_State initial_cpu = {.pc=0xaaa0, .a=0xce, .x=0x69, .y=0xc2, .sp=0xb1, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x69}, {.addr=0xaaa0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaaa1, .a=0x69, .x=0x69, .y=0xc2, .sp=0xb1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x69}, {.addr=0xaaa0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaaa0, .value=0xe6, .type=IO_READ},
        {.addr=0xaaa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0003) {
    const struct CPU_State initial_cpu = {.pc=0xfdb1, .a=0x61, .x=0x84, .y=0xf0, .sp=0x11, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xf9}, {.addr=0xfdb1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfdb2, .a=0xf9, .x=0x84, .y=0xf0, .sp=0x11, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xf9}, {.addr=0xfdb1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfdb1, .value=0xe6, .type=IO_READ},
        {.addr=0xfdb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0004) {
    const struct CPU_State initial_cpu = {.pc=0x8d0f, .a=0x05, .x=0x9b, .y=0x95, .sp=0x38, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x34}, {.addr=0x8d0f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8d10, .a=0x34, .x=0x9b, .y=0x95, .sp=0x38, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x34}, {.addr=0x8d0f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8d0f, .value=0xe6, .type=IO_READ},
        {.addr=0x8d10, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0ff8, .a=0x4d, .x=0x4b, .y=0x69, .sp=0x99, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x88}, {.addr=0x0ff8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0ff9, .a=0x88, .x=0x4b, .y=0x69, .sp=0x99, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x88}, {.addr=0x0ff8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0ff8, .value=0xe6, .type=IO_READ},
        {.addr=0x0ff9, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0006) {
    const struct CPU_State initial_cpu = {.pc=0x7b91, .a=0x82, .x=0x85, .y=0x50, .sp=0xf3, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xe3}, {.addr=0x7b91, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7b92, .a=0xe3, .x=0x85, .y=0x50, .sp=0xf3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xe3}, {.addr=0x7b91, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7b91, .value=0xe6, .type=IO_READ},
        {.addr=0x7b92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0007) {
    const struct CPU_State initial_cpu = {.pc=0xcd8f, .a=0xd2, .x=0x2b, .y=0x8b, .sp=0x10, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x0c}, {.addr=0xcd8f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcd90, .a=0x0c, .x=0x2b, .y=0x8b, .sp=0x10, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x0c}, {.addr=0xcd8f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcd8f, .value=0xe6, .type=IO_READ},
        {.addr=0xcd90, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0008) {
    const struct CPU_State initial_cpu = {.pc=0x158f, .a=0x6a, .x=0x65, .y=0xd4, .sp=0x1d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xa9}, {.addr=0x158f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1590, .a=0xa9, .x=0x65, .y=0xd4, .sp=0x1d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xa9}, {.addr=0x158f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x158f, .value=0xe6, .type=IO_READ},
        {.addr=0x1590, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0009) {
    const struct CPU_State initial_cpu = {.pc=0x185b, .a=0xb8, .x=0xc7, .y=0x8b, .sp=0xe4, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x16}, {.addr=0x185b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x185c, .a=0x16, .x=0xc7, .y=0x8b, .sp=0xe4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x16}, {.addr=0x185b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x185b, .value=0xe6, .type=IO_READ},
        {.addr=0x185c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_000A) {
    const struct CPU_State initial_cpu = {.pc=0x089c, .a=0x68, .x=0xc3, .y=0xe3, .sp=0x9f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x55}, {.addr=0x089c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x089d, .a=0x55, .x=0xc3, .y=0xe3, .sp=0x9f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x55}, {.addr=0x089c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x089c, .value=0xe6, .type=IO_READ},
        {.addr=0x089d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_000B) {
    const struct CPU_State initial_cpu = {.pc=0x60a3, .a=0x20, .x=0x96, .y=0xcf, .sp=0x12, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x72}, {.addr=0x60a3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x60a4, .a=0x72, .x=0x96, .y=0xcf, .sp=0x12, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x72}, {.addr=0x60a3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x60a3, .value=0xe6, .type=IO_READ},
        {.addr=0x60a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_000C) {
    const struct CPU_State initial_cpu = {.pc=0x8426, .a=0x86, .x=0x0c, .y=0x94, .sp=0xc5, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x89}, {.addr=0x8426, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8427, .a=0x89, .x=0x0c, .y=0x94, .sp=0xc5, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x89}, {.addr=0x8426, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8426, .value=0xe6, .type=IO_READ},
        {.addr=0x8427, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_000D) {
    const struct CPU_State initial_cpu = {.pc=0xc7ba, .a=0x64, .x=0xd8, .y=0x3b, .sp=0x12, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x91}, {.addr=0xc7ba, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc7bb, .a=0x91, .x=0xd8, .y=0x3b, .sp=0x12, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x91}, {.addr=0xc7ba, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc7ba, .value=0xe6, .type=IO_READ},
        {.addr=0xc7bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_000E) {
    const struct CPU_State initial_cpu = {.pc=0x328a, .a=0xa9, .x=0x77, .y=0x6a, .sp=0x35, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x13}, {.addr=0x328a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x328b, .a=0x13, .x=0x77, .y=0x6a, .sp=0x35, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x13}, {.addr=0x328a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x328a, .value=0xe6, .type=IO_READ},
        {.addr=0x328b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_000F) {
    const struct CPU_State initial_cpu = {.pc=0x67b3, .a=0x36, .x=0xe4, .y=0xcc, .sp=0xe1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x61}, {.addr=0x67b3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x67b4, .a=0x61, .x=0xe4, .y=0xcc, .sp=0xe1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x61}, {.addr=0x67b3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x67b3, .value=0xe6, .type=IO_READ},
        {.addr=0x67b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0010) {
    const struct CPU_State initial_cpu = {.pc=0x3bd8, .a=0x43, .x=0x30, .y=0x55, .sp=0xd3, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xd1}, {.addr=0x3bd8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3bd9, .a=0xd1, .x=0x30, .y=0x55, .sp=0xd3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xd1}, {.addr=0x3bd8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3bd8, .value=0xe6, .type=IO_READ},
        {.addr=0x3bd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0011) {
    const struct CPU_State initial_cpu = {.pc=0x2ad2, .a=0x6b, .x=0x8a, .y=0xad, .sp=0x86, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xc8}, {.addr=0x2ad2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ad3, .a=0xc8, .x=0x8a, .y=0xad, .sp=0x86, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xc8}, {.addr=0x2ad2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ad2, .value=0xe6, .type=IO_READ},
        {.addr=0x2ad3, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0012) {
    const struct CPU_State initial_cpu = {.pc=0x983f, .a=0x7c, .x=0xcb, .y=0xa4, .sp=0xab, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x7b}, {.addr=0x983f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9840, .a=0x7b, .x=0xcb, .y=0xa4, .sp=0xab, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x7b}, {.addr=0x983f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x983f, .value=0xe6, .type=IO_READ},
        {.addr=0x9840, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0013) {
    const struct CPU_State initial_cpu = {.pc=0xcd07, .a=0x40, .x=0x67, .y=0xc3, .sp=0x9d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x7c}, {.addr=0xcd07, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcd08, .a=0x7c, .x=0x67, .y=0xc3, .sp=0x9d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x7c}, {.addr=0xcd07, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcd07, .value=0xe6, .type=IO_READ},
        {.addr=0xcd08, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0014) {
    const struct CPU_State initial_cpu = {.pc=0x5017, .a=0xba, .x=0xa4, .y=0xd1, .sp=0xab, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x59}, {.addr=0x5017, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5018, .a=0x59, .x=0xa4, .y=0xd1, .sp=0xab, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x59}, {.addr=0x5017, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5017, .value=0xe6, .type=IO_READ},
        {.addr=0x5018, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0015) {
    const struct CPU_State initial_cpu = {.pc=0x5fd6, .a=0xf3, .x=0x4b, .y=0x7b, .sp=0x9d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xe7}, {.addr=0x5fd6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5fd7, .a=0xe7, .x=0x4b, .y=0x7b, .sp=0x9d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xe7}, {.addr=0x5fd6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5fd6, .value=0xe6, .type=IO_READ},
        {.addr=0x5fd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0016) {
    const struct CPU_State initial_cpu = {.pc=0x2ae9, .a=0x02, .x=0xbb, .y=0x35, .sp=0x09, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x0a}, {.addr=0x2ae9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2aea, .a=0x0a, .x=0xbb, .y=0x35, .sp=0x09, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x0a}, {.addr=0x2ae9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ae9, .value=0xe6, .type=IO_READ},
        {.addr=0x2aea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0017) {
    const struct CPU_State initial_cpu = {.pc=0x8429, .a=0x83, .x=0xdd, .y=0xbc, .sp=0xc5, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xf6}, {.addr=0x8429, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x842a, .a=0xf6, .x=0xdd, .y=0xbc, .sp=0xc5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xf6}, {.addr=0x8429, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8429, .value=0xe6, .type=IO_READ},
        {.addr=0x842a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0018) {
    const struct CPU_State initial_cpu = {.pc=0xc048, .a=0xb4, .x=0x3b, .y=0x24, .sp=0x74, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xaf}, {.addr=0xc048, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc049, .a=0xaf, .x=0x3b, .y=0x24, .sp=0x74, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xaf}, {.addr=0xc048, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc048, .value=0xe6, .type=IO_READ},
        {.addr=0xc049, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0019) {
    const struct CPU_State initial_cpu = {.pc=0xba94, .a=0x50, .x=0x87, .y=0xde, .sp=0xc2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x04}, {.addr=0xba94, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xba95, .a=0x04, .x=0x87, .y=0xde, .sp=0xc2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x04}, {.addr=0xba94, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xba94, .value=0xe6, .type=IO_READ},
        {.addr=0xba95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_001A) {
    const struct CPU_State initial_cpu = {.pc=0x3918, .a=0xc3, .x=0x1a, .y=0xf5, .sp=0x11, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x2a}, {.addr=0x3918, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3919, .a=0x2a, .x=0x1a, .y=0xf5, .sp=0x11, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0x2a}, {.addr=0x3918, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3918, .value=0xe6, .type=IO_READ},
        {.addr=0x3919, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_001B) {
    const struct CPU_State initial_cpu = {.pc=0x1896, .a=0x24, .x=0xe0, .y=0xfc, .sp=0xc9, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0xb6}, {.addr=0x1896, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1897, .a=0xb6, .x=0xe0, .y=0xfc, .sp=0xc9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xb6}, {.addr=0x1896, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1896, .value=0xe6, .type=IO_READ},
        {.addr=0x1897, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_001C) {
    const struct CPU_State initial_cpu = {.pc=0xd694, .a=0xaf, .x=0x48, .y=0xa2, .sp=0x2f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x89}, {.addr=0xd694, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd695, .a=0x89, .x=0x48, .y=0xa2, .sp=0x2f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x89}, {.addr=0xd694, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd694, .value=0xe6, .type=IO_READ},
        {.addr=0xd695, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5303, .a=0xe0, .x=0xbd, .y=0x9b, .sp=0x87, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x76}, {.addr=0x5303, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5304, .a=0x76, .x=0xbd, .y=0x9b, .sp=0x87, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x76}, {.addr=0x5303, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5303, .value=0xe6, .type=IO_READ},
        {.addr=0x5304, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_001E) {
    const struct CPU_State initial_cpu = {.pc=0xe76d, .a=0x94, .x=0x9f, .y=0x24, .sp=0xb2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xc1}, {.addr=0xe76d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe76e, .a=0xc1, .x=0x9f, .y=0x24, .sp=0xb2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xc1}, {.addr=0xe76d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe76d, .value=0xe6, .type=IO_READ},
        {.addr=0xe76e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_001F) {
    const struct CPU_State initial_cpu = {.pc=0xb42f, .a=0xe1, .x=0xef, .y=0xa6, .sp=0x5b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x37}, {.addr=0xb42f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb430, .a=0x37, .x=0xef, .y=0xa6, .sp=0x5b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x37}, {.addr=0xb42f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb42f, .value=0xe6, .type=IO_READ},
        {.addr=0xb430, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0020) {
    const struct CPU_State initial_cpu = {.pc=0x6b5b, .a=0x58, .x=0x31, .y=0x70, .sp=0x70, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x40}, {.addr=0x6b5b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6b5c, .a=0x40, .x=0x31, .y=0x70, .sp=0x70, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x40}, {.addr=0x6b5b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6b5b, .value=0xe6, .type=IO_READ},
        {.addr=0x6b5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0021) {
    const struct CPU_State initial_cpu = {.pc=0x42a3, .a=0x21, .x=0xc8, .y=0x89, .sp=0xc7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x30}, {.addr=0x42a3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x42a4, .a=0x30, .x=0xc8, .y=0x89, .sp=0xc7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x30}, {.addr=0x42a3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x42a3, .value=0xe6, .type=IO_READ},
        {.addr=0x42a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0022) {
    const struct CPU_State initial_cpu = {.pc=0xa086, .a=0x8a, .x=0xd7, .y=0x8c, .sp=0x70, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xdc}, {.addr=0xa086, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa087, .a=0xdc, .x=0xd7, .y=0x8c, .sp=0x70, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xdc}, {.addr=0xa086, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa086, .value=0xe6, .type=IO_READ},
        {.addr=0xa087, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0023) {
    const struct CPU_State initial_cpu = {.pc=0x35af, .a=0x23, .x=0x82, .y=0x8a, .sp=0x2d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x5d}, {.addr=0x35af, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x35b0, .a=0x5d, .x=0x82, .y=0x8a, .sp=0x2d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x5d}, {.addr=0x35af, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x35af, .value=0xe6, .type=IO_READ},
        {.addr=0x35b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0024) {
    const struct CPU_State initial_cpu = {.pc=0x1ee6, .a=0x7f, .x=0x7c, .y=0x17, .sp=0x08, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xf6}, {.addr=0x1ee6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1ee7, .a=0xf6, .x=0x7c, .y=0x17, .sp=0x08, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xf6}, {.addr=0x1ee6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1ee6, .value=0xe6, .type=IO_READ},
        {.addr=0x1ee7, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0025) {
    const struct CPU_State initial_cpu = {.pc=0x8082, .a=0x44, .x=0xbc, .y=0x42, .sp=0xe2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x5a}, {.addr=0x8082, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8083, .a=0x5a, .x=0xbc, .y=0x42, .sp=0xe2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x5a}, {.addr=0x8082, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8082, .value=0xe6, .type=IO_READ},
        {.addr=0x8083, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0026) {
    const struct CPU_State initial_cpu = {.pc=0x404a, .a=0xb7, .x=0x36, .y=0x8e, .sp=0xed, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x32}, {.addr=0x404a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x404b, .a=0x32, .x=0x36, .y=0x8e, .sp=0xed, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x32}, {.addr=0x404a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x404a, .value=0xe6, .type=IO_READ},
        {.addr=0x404b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0027) {
    const struct CPU_State initial_cpu = {.pc=0x2aef, .a=0xcd, .x=0x70, .y=0x59, .sp=0x23, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0xcc}, {.addr=0x2aef, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2af0, .a=0xcc, .x=0x70, .y=0x59, .sp=0x23, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0xcc}, {.addr=0x2aef, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2aef, .value=0xe6, .type=IO_READ},
        {.addr=0x2af0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0028) {
    const struct CPU_State initial_cpu = {.pc=0xc886, .a=0x60, .x=0xe7, .y=0x87, .sp=0x62, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x1c}, {.addr=0xc886, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc887, .a=0x1c, .x=0xe7, .y=0x87, .sp=0x62, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x1c}, {.addr=0xc886, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc886, .value=0xe6, .type=IO_READ},
        {.addr=0xc887, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0029) {
    const struct CPU_State initial_cpu = {.pc=0x6a77, .a=0x44, .x=0xf2, .y=0x32, .sp=0x7d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x70}, {.addr=0x6a77, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6a78, .a=0x70, .x=0xf2, .y=0x32, .sp=0x7d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x70}, {.addr=0x6a77, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6a77, .value=0xe6, .type=IO_READ},
        {.addr=0x6a78, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_002A) {
    const struct CPU_State initial_cpu = {.pc=0xe19d, .a=0x11, .x=0xc8, .y=0xd3, .sp=0xb9, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x6c}, {.addr=0xe19d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe19e, .a=0x6c, .x=0xc8, .y=0xd3, .sp=0xb9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x6c}, {.addr=0xe19d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe19d, .value=0xe6, .type=IO_READ},
        {.addr=0xe19e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_002B) {
    const struct CPU_State initial_cpu = {.pc=0x6307, .a=0xea, .x=0x13, .y=0xd8, .sp=0x77, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x74}, {.addr=0x6307, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6308, .a=0x74, .x=0x13, .y=0xd8, .sp=0x77, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x74}, {.addr=0x6307, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6307, .value=0xe6, .type=IO_READ},
        {.addr=0x6308, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_002C) {
    const struct CPU_State initial_cpu = {.pc=0x6707, .a=0xf1, .x=0x07, .y=0xc8, .sp=0x22, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x78}, {.addr=0x6707, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6708, .a=0x78, .x=0x07, .y=0xc8, .sp=0x22, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x78}, {.addr=0x6707, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6707, .value=0xe6, .type=IO_READ},
        {.addr=0x6708, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_002D) {
    const struct CPU_State initial_cpu = {.pc=0x9574, .a=0xcc, .x=0x88, .y=0xcc, .sp=0x3c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xce}, {.addr=0x9574, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9575, .a=0xce, .x=0x88, .y=0xcc, .sp=0x3c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xce}, {.addr=0x9574, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9574, .value=0xe6, .type=IO_READ},
        {.addr=0x9575, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_002E) {
    const struct CPU_State initial_cpu = {.pc=0xbaeb, .a=0x9a, .x=0x02, .y=0xb9, .sp=0x53, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xf8}, {.addr=0xbaeb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbaec, .a=0xf8, .x=0x02, .y=0xb9, .sp=0x53, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xf8}, {.addr=0xbaeb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbaeb, .value=0xe6, .type=IO_READ},
        {.addr=0xbaec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_002F) {
    const struct CPU_State initial_cpu = {.pc=0xb66c, .a=0x5d, .x=0xac, .y=0xe6, .sp=0xfc, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x0f}, {.addr=0xb66c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb66d, .a=0x0f, .x=0xac, .y=0xe6, .sp=0xfc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x0f}, {.addr=0xb66c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb66c, .value=0xe6, .type=IO_READ},
        {.addr=0xb66d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0030) {
    const struct CPU_State initial_cpu = {.pc=0xbfba, .a=0x84, .x=0x1e, .y=0x0b, .sp=0x9d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x32}, {.addr=0xbfba, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbfbb, .a=0x32, .x=0x1e, .y=0x0b, .sp=0x9d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x32}, {.addr=0xbfba, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbfba, .value=0xe6, .type=IO_READ},
        {.addr=0xbfbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0031) {
    const struct CPU_State initial_cpu = {.pc=0x3ae0, .a=0x07, .x=0x55, .y=0xac, .sp=0xba, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x4a}, {.addr=0x3ae0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3ae1, .a=0x4a, .x=0x55, .y=0xac, .sp=0xba, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x4a}, {.addr=0x3ae0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3ae0, .value=0xe6, .type=IO_READ},
        {.addr=0x3ae1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0032) {
    const struct CPU_State initial_cpu = {.pc=0x0259, .a=0xeb, .x=0x01, .y=0xf8, .sp=0x33, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x85}, {.addr=0x0259, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x025a, .a=0x85, .x=0x01, .y=0xf8, .sp=0x33, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x85}, {.addr=0x0259, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0259, .value=0xe6, .type=IO_READ},
        {.addr=0x025a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0033) {
    const struct CPU_State initial_cpu = {.pc=0x1831, .a=0xab, .x=0x9d, .y=0xee, .sp=0xa9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x71}, {.addr=0x1831, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1832, .a=0x71, .x=0x9d, .y=0xee, .sp=0xa9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x71}, {.addr=0x1831, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1831, .value=0xe6, .type=IO_READ},
        {.addr=0x1832, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0034) {
    const struct CPU_State initial_cpu = {.pc=0xfd0a, .a=0x4a, .x=0xf3, .y=0xdc, .sp=0xd0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x46}, {.addr=0xfd0a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfd0b, .a=0x46, .x=0xf3, .y=0xdc, .sp=0xd0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x46}, {.addr=0xfd0a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfd0a, .value=0xe6, .type=IO_READ},
        {.addr=0xfd0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0035) {
    const struct CPU_State initial_cpu = {.pc=0x78cc, .a=0x32, .x=0xb1, .y=0xf3, .sp=0xc7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x01}, {.addr=0x78cc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x78cd, .a=0x01, .x=0xb1, .y=0xf3, .sp=0xc7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x01}, {.addr=0x78cc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x78cc, .value=0xe6, .type=IO_READ},
        {.addr=0x78cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0037) {
    const struct CPU_State initial_cpu = {.pc=0x4165, .a=0x35, .x=0x22, .y=0xd2, .sp=0xb4, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x5b}, {.addr=0x4165, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4166, .a=0x5b, .x=0x22, .y=0xd2, .sp=0xb4, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x5b}, {.addr=0x4165, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4165, .value=0xe6, .type=IO_READ},
        {.addr=0x4166, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0038) {
    const struct CPU_State initial_cpu = {.pc=0xae19, .a=0x7a, .x=0x1b, .y=0x7b, .sp=0x39, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x2f}, {.addr=0xae19, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xae1a, .a=0x2f, .x=0x1b, .y=0x7b, .sp=0x39, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x2f}, {.addr=0xae19, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xae19, .value=0xe6, .type=IO_READ},
        {.addr=0xae1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0039) {
    const struct CPU_State initial_cpu = {.pc=0x768c, .a=0x91, .x=0x81, .y=0x7c, .sp=0xe7, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x7d}, {.addr=0x768c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x768d, .a=0x7d, .x=0x81, .y=0x7c, .sp=0xe7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x7d}, {.addr=0x768c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x768c, .value=0xe6, .type=IO_READ},
        {.addr=0x768d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_003A) {
    const struct CPU_State initial_cpu = {.pc=0x8ae5, .a=0x28, .x=0x97, .y=0x6f, .sp=0xa1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x60}, {.addr=0x8ae5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8ae6, .a=0x60, .x=0x97, .y=0x6f, .sp=0xa1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x60}, {.addr=0x8ae5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8ae5, .value=0xe6, .type=IO_READ},
        {.addr=0x8ae6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_003B) {
    const struct CPU_State initial_cpu = {.pc=0xc403, .a=0x47, .x=0x8c, .y=0x58, .sp=0x27, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0xc9}, {.addr=0xc403, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc404, .a=0xc9, .x=0x8c, .y=0x58, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xc9}, {.addr=0xc403, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc403, .value=0xe6, .type=IO_READ},
        {.addr=0xc404, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_003C) {
    const struct CPU_State initial_cpu = {.pc=0x7c37, .a=0x4e, .x=0x38, .y=0xbc, .sp=0xe8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x31}, {.addr=0x7c37, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7c38, .a=0x31, .x=0x38, .y=0xbc, .sp=0xe8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x31}, {.addr=0x7c37, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7c37, .value=0xe6, .type=IO_READ},
        {.addr=0x7c38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_003D) {
    const struct CPU_State initial_cpu = {.pc=0x11fc, .a=0xf1, .x=0xc1, .y=0x95, .sp=0x04, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x5c}, {.addr=0x11fc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x11fd, .a=0x5c, .x=0xc1, .y=0x95, .sp=0x04, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x5c}, {.addr=0x11fc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x11fc, .value=0xe6, .type=IO_READ},
        {.addr=0x11fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_003E) {
    const struct CPU_State initial_cpu = {.pc=0x5f22, .a=0x24, .x=0x91, .y=0x84, .sp=0xcc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x2e}, {.addr=0x5f22, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f23, .a=0x2e, .x=0x91, .y=0x84, .sp=0xcc, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x2e}, {.addr=0x5f22, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f22, .value=0xe6, .type=IO_READ},
        {.addr=0x5f23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_003F) {
    const struct CPU_State initial_cpu = {.pc=0xfbf9, .a=0x54, .x=0x8e, .y=0x71, .sp=0x02, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x92}, {.addr=0xfbf9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfbfa, .a=0x92, .x=0x8e, .y=0x71, .sp=0x02, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x92}, {.addr=0xfbf9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfbf9, .value=0xe6, .type=IO_READ},
        {.addr=0xfbfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0040) {
    const struct CPU_State initial_cpu = {.pc=0x1aa8, .a=0x2b, .x=0x3c, .y=0x32, .sp=0x61, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xbb}, {.addr=0x1aa8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1aa9, .a=0xbb, .x=0x3c, .y=0x32, .sp=0x61, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xbb}, {.addr=0x1aa8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1aa8, .value=0xe6, .type=IO_READ},
        {.addr=0x1aa9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0041) {
    const struct CPU_State initial_cpu = {.pc=0xa317, .a=0xc3, .x=0x68, .y=0x34, .sp=0xee, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x8a}, {.addr=0xa317, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa318, .a=0x8a, .x=0x68, .y=0x34, .sp=0xee, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x8a}, {.addr=0xa317, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa317, .value=0xe6, .type=IO_READ},
        {.addr=0xa318, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0042) {
    const struct CPU_State initial_cpu = {.pc=0xfc15, .a=0xae, .x=0x90, .y=0x0c, .sp=0xa3, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x50}, {.addr=0xfc15, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfc16, .a=0x50, .x=0x90, .y=0x0c, .sp=0xa3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x50}, {.addr=0xfc15, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfc15, .value=0xe6, .type=IO_READ},
        {.addr=0xfc16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0043) {
    const struct CPU_State initial_cpu = {.pc=0xe847, .a=0x77, .x=0xef, .y=0x67, .sp=0xd7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x17}, {.addr=0xe847, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe848, .a=0x17, .x=0xef, .y=0x67, .sp=0xd7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x17}, {.addr=0xe847, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe847, .value=0xe6, .type=IO_READ},
        {.addr=0xe848, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0044) {
    const struct CPU_State initial_cpu = {.pc=0x03a7, .a=0xf8, .x=0xab, .y=0x1a, .sp=0xea, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xf7}, {.addr=0x03a7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x03a8, .a=0xf7, .x=0xab, .y=0x1a, .sp=0xea, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xf7}, {.addr=0x03a7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x03a7, .value=0xe6, .type=IO_READ},
        {.addr=0x03a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0045) {
    const struct CPU_State initial_cpu = {.pc=0xcb8b, .a=0xba, .x=0x1a, .y=0x43, .sp=0xe0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x25}, {.addr=0xcb8b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcb8c, .a=0x25, .x=0x1a, .y=0x43, .sp=0xe0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x25}, {.addr=0xcb8b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcb8b, .value=0xe6, .type=IO_READ},
        {.addr=0xcb8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0046) {
    const struct CPU_State initial_cpu = {.pc=0x33b2, .a=0x7f, .x=0x69, .y=0xcd, .sp=0xbd, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x08}, {.addr=0x33b2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x33b3, .a=0x08, .x=0x69, .y=0xcd, .sp=0xbd, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x08}, {.addr=0x33b2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x33b2, .value=0xe6, .type=IO_READ},
        {.addr=0x33b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2c58, .a=0xa9, .x=0xb8, .y=0x4f, .sp=0x95, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x02}, {.addr=0x2c58, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2c59, .a=0x02, .x=0xb8, .y=0x4f, .sp=0x95, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x02}, {.addr=0x2c58, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2c58, .value=0xe6, .type=IO_READ},
        {.addr=0x2c59, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0048) {
    const struct CPU_State initial_cpu = {.pc=0x12da, .a=0xcb, .x=0x4a, .y=0xba, .sp=0xf4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x35}, {.addr=0x12da, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x12db, .a=0x35, .x=0x4a, .y=0xba, .sp=0xf4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x35}, {.addr=0x12da, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x12da, .value=0xe6, .type=IO_READ},
        {.addr=0x12db, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0049) {
    const struct CPU_State initial_cpu = {.pc=0x8ec8, .a=0xb4, .x=0x4c, .y=0x06, .sp=0x7d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xb2}, {.addr=0x8ec8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8ec9, .a=0xb2, .x=0x4c, .y=0x06, .sp=0x7d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xb2}, {.addr=0x8ec8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8ec8, .value=0xe6, .type=IO_READ},
        {.addr=0x8ec9, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_004A) {
    const struct CPU_State initial_cpu = {.pc=0xa02c, .a=0x54, .x=0xd2, .y=0xb1, .sp=0x9f, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x60}, {.addr=0xa02c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa02d, .a=0x60, .x=0xd2, .y=0xb1, .sp=0x9f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x60}, {.addr=0xa02c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa02c, .value=0xe6, .type=IO_READ},
        {.addr=0xa02d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_004B) {
    const struct CPU_State initial_cpu = {.pc=0x1786, .a=0x98, .x=0xad, .y=0xaf, .sp=0x02, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x1a}, {.addr=0x1786, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1787, .a=0x1a, .x=0xad, .y=0xaf, .sp=0x02, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x1a}, {.addr=0x1786, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1786, .value=0xe6, .type=IO_READ},
        {.addr=0x1787, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_004C) {
    const struct CPU_State initial_cpu = {.pc=0xa606, .a=0x82, .x=0xd5, .y=0x32, .sp=0x9d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x05}, {.addr=0xa606, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa607, .a=0x05, .x=0xd5, .y=0x32, .sp=0x9d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x05}, {.addr=0xa606, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa606, .value=0xe6, .type=IO_READ},
        {.addr=0xa607, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_004D) {
    const struct CPU_State initial_cpu = {.pc=0xc857, .a=0x4d, .x=0x33, .y=0xad, .sp=0x3f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x08}, {.addr=0xc857, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc858, .a=0x08, .x=0x33, .y=0xad, .sp=0x3f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x08}, {.addr=0xc857, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc857, .value=0xe6, .type=IO_READ},
        {.addr=0xc858, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_004E) {
    const struct CPU_State initial_cpu = {.pc=0xb8e2, .a=0xed, .x=0xc5, .y=0x37, .sp=0xec, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xed}, {.addr=0xb8e2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb8e3, .a=0xed, .x=0xc5, .y=0x37, .sp=0xec, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xed}, {.addr=0xb8e2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb8e2, .value=0xe6, .type=IO_READ},
        {.addr=0xb8e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_004F) {
    const struct CPU_State initial_cpu = {.pc=0xe593, .a=0x68, .x=0x72, .y=0xa0, .sp=0xf2, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xb0}, {.addr=0xe593, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe594, .a=0xb0, .x=0x72, .y=0xa0, .sp=0xf2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xb0}, {.addr=0xe593, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe593, .value=0xe6, .type=IO_READ},
        {.addr=0xe594, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0050) {
    const struct CPU_State initial_cpu = {.pc=0xd212, .a=0xfc, .x=0x0b, .y=0xbc, .sp=0xb1, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x85}, {.addr=0xd212, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd213, .a=0x85, .x=0x0b, .y=0xbc, .sp=0xb1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x85}, {.addr=0xd212, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd212, .value=0xe6, .type=IO_READ},
        {.addr=0xd213, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0051) {
    const struct CPU_State initial_cpu = {.pc=0x78b3, .a=0x36, .x=0xd3, .y=0x99, .sp=0xf2, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x19}, {.addr=0x78b3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x78b4, .a=0x19, .x=0xd3, .y=0x99, .sp=0xf2, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x19}, {.addr=0x78b3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x78b3, .value=0xe6, .type=IO_READ},
        {.addr=0x78b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0052) {
    const struct CPU_State initial_cpu = {.pc=0x022b, .a=0x8d, .x=0x20, .y=0xf1, .sp=0x11, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x58}, {.addr=0x022b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x022c, .a=0x58, .x=0x20, .y=0xf1, .sp=0x11, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x58}, {.addr=0x022b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x022b, .value=0xe6, .type=IO_READ},
        {.addr=0x022c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0053) {
    const struct CPU_State initial_cpu = {.pc=0xbae1, .a=0xa5, .x=0xbd, .y=0x88, .sp=0x82, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x13}, {.addr=0xbae1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbae2, .a=0x13, .x=0xbd, .y=0x88, .sp=0x82, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x13}, {.addr=0xbae1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbae1, .value=0xe6, .type=IO_READ},
        {.addr=0xbae2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0054) {
    const struct CPU_State initial_cpu = {.pc=0x710f, .a=0x8a, .x=0xfa, .y=0xca, .sp=0x09, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x08}, {.addr=0x710f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7110, .a=0x08, .x=0xfa, .y=0xca, .sp=0x09, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x08}, {.addr=0x710f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x710f, .value=0xe6, .type=IO_READ},
        {.addr=0x7110, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0055) {
    const struct CPU_State initial_cpu = {.pc=0x21ba, .a=0xc4, .x=0xa8, .y=0x08, .sp=0xd3, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0x20}, {.addr=0x21ba, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x21bb, .a=0x20, .x=0xa8, .y=0x08, .sp=0xd3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0x20}, {.addr=0x21ba, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x21ba, .value=0xe6, .type=IO_READ},
        {.addr=0x21bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0056) {
    const struct CPU_State initial_cpu = {.pc=0x799a, .a=0x7f, .x=0xcc, .y=0x5a, .sp=0xb0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x81}, {.addr=0x799a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x799b, .a=0x81, .x=0xcc, .y=0x5a, .sp=0xb0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x81}, {.addr=0x799a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x799a, .value=0xe6, .type=IO_READ},
        {.addr=0x799b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0057) {
    const struct CPU_State initial_cpu = {.pc=0xa769, .a=0x45, .x=0x53, .y=0x5c, .sp=0x33, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x6b}, {.addr=0xa769, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa76a, .a=0x6b, .x=0x53, .y=0x5c, .sp=0x33, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x6b}, {.addr=0xa769, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa769, .value=0xe6, .type=IO_READ},
        {.addr=0xa76a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0058) {
    const struct CPU_State initial_cpu = {.pc=0xe9b2, .a=0xfa, .x=0x97, .y=0xe0, .sp=0xd6, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x06}, {.addr=0xe9b2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe9b3, .a=0x06, .x=0x97, .y=0xe0, .sp=0xd6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x06}, {.addr=0xe9b2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe9b2, .value=0xe6, .type=IO_READ},
        {.addr=0xe9b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0059) {
    const struct CPU_State initial_cpu = {.pc=0x5ee0, .a=0x0b, .x=0xa6, .y=0xbb, .sp=0xb8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0xd2}, {.addr=0x5ee0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5ee1, .a=0xd2, .x=0xa6, .y=0xbb, .sp=0xb8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xd2}, {.addr=0x5ee0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5ee0, .value=0xe6, .type=IO_READ},
        {.addr=0x5ee1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_005A) {
    const struct CPU_State initial_cpu = {.pc=0x6951, .a=0x8e, .x=0x2a, .y=0x5c, .sp=0x98, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xd9}, {.addr=0x6951, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6952, .a=0xd9, .x=0x2a, .y=0x5c, .sp=0x98, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xd9}, {.addr=0x6951, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6951, .value=0xe6, .type=IO_READ},
        {.addr=0x6952, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_005B) {
    const struct CPU_State initial_cpu = {.pc=0x1bcb, .a=0xc8, .x=0x93, .y=0x4c, .sp=0xe4, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x80}, {.addr=0x1bcb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1bcc, .a=0x80, .x=0x93, .y=0x4c, .sp=0xe4, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x80}, {.addr=0x1bcb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1bcb, .value=0xe6, .type=IO_READ},
        {.addr=0x1bcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_005C) {
    const struct CPU_State initial_cpu = {.pc=0x539c, .a=0x8b, .x=0x31, .y=0xc7, .sp=0x81, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x5f}, {.addr=0x539c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x539d, .a=0x5f, .x=0x31, .y=0xc7, .sp=0x81, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x5f}, {.addr=0x539c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x539c, .value=0xe6, .type=IO_READ},
        {.addr=0x539d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_005D) {
    const struct CPU_State initial_cpu = {.pc=0xd157, .a=0xc9, .x=0x62, .y=0xe8, .sp=0x86, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xc7}, {.addr=0xd157, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd158, .a=0xc7, .x=0x62, .y=0xe8, .sp=0x86, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xc7}, {.addr=0xd157, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd157, .value=0xe6, .type=IO_READ},
        {.addr=0xd158, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_005E) {
    const struct CPU_State initial_cpu = {.pc=0xff7c, .a=0x31, .x=0x3c, .y=0xec, .sp=0xb6, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xfb}, {.addr=0xff7c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xff7d, .a=0xfb, .x=0x3c, .y=0xec, .sp=0xb6, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xfb}, {.addr=0xff7c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xff7c, .value=0xe6, .type=IO_READ},
        {.addr=0xff7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_005F) {
    const struct CPU_State initial_cpu = {.pc=0xc63e, .a=0x7d, .x=0x23, .y=0x5e, .sp=0x37, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x0b}, {.addr=0xc63e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc63f, .a=0x0b, .x=0x23, .y=0x5e, .sp=0x37, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x0b}, {.addr=0xc63e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc63e, .value=0xe6, .type=IO_READ},
        {.addr=0xc63f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0060) {
    const struct CPU_State initial_cpu = {.pc=0x7d2c, .a=0xef, .x=0xae, .y=0x0e, .sp=0x2c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x15}, {.addr=0x7d2c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7d2d, .a=0x15, .x=0xae, .y=0x0e, .sp=0x2c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x15}, {.addr=0x7d2c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7d2c, .value=0xe6, .type=IO_READ},
        {.addr=0x7d2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0061) {
    const struct CPU_State initial_cpu = {.pc=0xaab8, .a=0x05, .x=0xe8, .y=0xc6, .sp=0xe8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xb4}, {.addr=0xaab8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaab9, .a=0xb4, .x=0xe8, .y=0xc6, .sp=0xe8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xb4}, {.addr=0xaab8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaab8, .value=0xe6, .type=IO_READ},
        {.addr=0xaab9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0062) {
    const struct CPU_State initial_cpu = {.pc=0x3c71, .a=0x7a, .x=0x16, .y=0x9b, .sp=0x02, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0xf2}, {.addr=0x3c71, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3c72, .a=0xf2, .x=0x16, .y=0x9b, .sp=0x02, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0xf2}, {.addr=0x3c71, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3c71, .value=0xe6, .type=IO_READ},
        {.addr=0x3c72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0064) {
    const struct CPU_State initial_cpu = {.pc=0x49b5, .a=0x56, .x=0x44, .y=0x24, .sp=0x8c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x2b}, {.addr=0x49b5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x49b6, .a=0x2b, .x=0x44, .y=0x24, .sp=0x8c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x2b}, {.addr=0x49b5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x49b5, .value=0xe6, .type=IO_READ},
        {.addr=0x49b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0065) {
    const struct CPU_State initial_cpu = {.pc=0xe2df, .a=0xa2, .x=0x1b, .y=0x56, .sp=0x23, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x6d}, {.addr=0xe2df, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe2e0, .a=0x6d, .x=0x1b, .y=0x56, .sp=0x23, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x6d}, {.addr=0xe2df, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe2df, .value=0xe6, .type=IO_READ},
        {.addr=0xe2e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0066) {
    const struct CPU_State initial_cpu = {.pc=0x76c3, .a=0xdf, .x=0x1c, .y=0x4f, .sp=0x34, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xe9}, {.addr=0x76c3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x76c4, .a=0xe9, .x=0x1c, .y=0x4f, .sp=0x34, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xe9}, {.addr=0x76c3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x76c3, .value=0xe6, .type=IO_READ},
        {.addr=0x76c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf206, .a=0x27, .x=0x21, .y=0x08, .sp=0xa2, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x9d}, {.addr=0xf206, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf207, .a=0x9d, .x=0x21, .y=0x08, .sp=0xa2, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x9d}, {.addr=0xf206, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf206, .value=0xe6, .type=IO_READ},
        {.addr=0xf207, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0068) {
    const struct CPU_State initial_cpu = {.pc=0xe95e, .a=0x64, .x=0x5e, .y=0x50, .sp=0xd0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x05}, {.addr=0xe95e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe95f, .a=0x05, .x=0x5e, .y=0x50, .sp=0xd0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x05}, {.addr=0xe95e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe95e, .value=0xe6, .type=IO_READ},
        {.addr=0xe95f, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0069) {
    const struct CPU_State initial_cpu = {.pc=0xcda9, .a=0x6b, .x=0x4f, .y=0xf1, .sp=0x03, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xbf}, {.addr=0xcda9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcdaa, .a=0xbf, .x=0x4f, .y=0xf1, .sp=0x03, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xbf}, {.addr=0xcda9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcda9, .value=0xe6, .type=IO_READ},
        {.addr=0xcdaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_006A) {
    const struct CPU_State initial_cpu = {.pc=0x17de, .a=0xbf, .x=0x8e, .y=0x46, .sp=0xdf, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x84}, {.addr=0x17de, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x17df, .a=0x84, .x=0x8e, .y=0x46, .sp=0xdf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x84}, {.addr=0x17de, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x17de, .value=0xe6, .type=IO_READ},
        {.addr=0x17df, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_006B) {
    const struct CPU_State initial_cpu = {.pc=0x85d1, .a=0x7a, .x=0x8c, .y=0xdd, .sp=0x8b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x19}, {.addr=0x85d1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x85d2, .a=0x19, .x=0x8c, .y=0xdd, .sp=0x8b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x19}, {.addr=0x85d1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x85d1, .value=0xe6, .type=IO_READ},
        {.addr=0x85d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_006C) {
    const struct CPU_State initial_cpu = {.pc=0x0506, .a=0x9b, .x=0xe6, .y=0x18, .sp=0x52, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x83}, {.addr=0x0506, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0507, .a=0x83, .x=0xe6, .y=0x18, .sp=0x52, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x83}, {.addr=0x0506, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0506, .value=0xe6, .type=IO_READ},
        {.addr=0x0507, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_006D) {
    const struct CPU_State initial_cpu = {.pc=0x4722, .a=0x88, .x=0xaf, .y=0x8d, .sp=0x30, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xcb}, {.addr=0x4722, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4723, .a=0xcb, .x=0xaf, .y=0x8d, .sp=0x30, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xcb}, {.addr=0x4722, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4722, .value=0xe6, .type=IO_READ},
        {.addr=0x4723, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_006E) {
    const struct CPU_State initial_cpu = {.pc=0x798c, .a=0x3e, .x=0x92, .y=0xc2, .sp=0x4a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0xb0}, {.addr=0x798c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x798d, .a=0xb0, .x=0x92, .y=0xc2, .sp=0x4a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xb0}, {.addr=0x798c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x798c, .value=0xe6, .type=IO_READ},
        {.addr=0x798d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_006F) {
    const struct CPU_State initial_cpu = {.pc=0x14c9, .a=0xe1, .x=0x8a, .y=0x65, .sp=0xcd, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xcb}, {.addr=0x14c9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x14ca, .a=0xcb, .x=0x8a, .y=0x65, .sp=0xcd, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xcb}, {.addr=0x14c9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x14c9, .value=0xe6, .type=IO_READ},
        {.addr=0x14ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0070) {
    const struct CPU_State initial_cpu = {.pc=0x1272, .a=0xb5, .x=0x40, .y=0xdc, .sp=0x9e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xb6}, {.addr=0x1272, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1273, .a=0xb6, .x=0x40, .y=0xdc, .sp=0x9e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xb6}, {.addr=0x1272, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1272, .value=0xe6, .type=IO_READ},
        {.addr=0x1273, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0071) {
    const struct CPU_State initial_cpu = {.pc=0x9e69, .a=0xe0, .x=0x88, .y=0x8c, .sp=0x38, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x5d}, {.addr=0x9e69, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9e6a, .a=0x5d, .x=0x88, .y=0x8c, .sp=0x38, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x5d}, {.addr=0x9e69, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9e69, .value=0xe6, .type=IO_READ},
        {.addr=0x9e6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0072) {
    const struct CPU_State initial_cpu = {.pc=0x647c, .a=0x0d, .x=0x3d, .y=0x34, .sp=0x9c, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x62}, {.addr=0x647c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0x62, .x=0x3d, .y=0x34, .sp=0x9c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x62}, {.addr=0x647c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x647c, .value=0xe6, .type=IO_READ},
        {.addr=0x647d, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb803, .a=0x44, .x=0x05, .y=0x3a, .sp=0x20, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x8d}, {.addr=0xb803, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb804, .a=0x8d, .x=0x05, .y=0x3a, .sp=0x20, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x8d}, {.addr=0xb803, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb803, .value=0xe6, .type=IO_READ},
        {.addr=0xb804, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0074) {
    const struct CPU_State initial_cpu = {.pc=0xa852, .a=0x45, .x=0x81, .y=0x92, .sp=0x25, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x0e}, {.addr=0xa852, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa853, .a=0x0e, .x=0x81, .y=0x92, .sp=0x25, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x0e}, {.addr=0xa852, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa852, .value=0xe6, .type=IO_READ},
        {.addr=0xa853, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0075) {
    const struct CPU_State initial_cpu = {.pc=0xae52, .a=0x3d, .x=0x65, .y=0x8d, .sp=0xaa, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x55}, {.addr=0xae52, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xae53, .a=0x55, .x=0x65, .y=0x8d, .sp=0xaa, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x55}, {.addr=0xae52, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xae52, .value=0xe6, .type=IO_READ},
        {.addr=0xae53, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0076) {
    const struct CPU_State initial_cpu = {.pc=0x0cd8, .a=0xbd, .x=0x25, .y=0x94, .sp=0x22, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xfa}, {.addr=0x0cd8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0cd9, .a=0xfa, .x=0x25, .y=0x94, .sp=0x22, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xfa}, {.addr=0x0cd8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0cd8, .value=0xe6, .type=IO_READ},
        {.addr=0x0cd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0077) {
    const struct CPU_State initial_cpu = {.pc=0x2ce0, .a=0x81, .x=0x0a, .y=0x07, .sp=0x7d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x94}, {.addr=0x2ce0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ce1, .a=0x94, .x=0x0a, .y=0x07, .sp=0x7d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x94}, {.addr=0x2ce0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ce0, .value=0xe6, .type=IO_READ},
        {.addr=0x2ce1, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0078) {
    const struct CPU_State initial_cpu = {.pc=0x2cf0, .a=0xeb, .x=0xdf, .y=0xe3, .sp=0x05, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xb0}, {.addr=0x2cf0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2cf1, .a=0xb0, .x=0xdf, .y=0xe3, .sp=0x05, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xb0}, {.addr=0x2cf0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2cf0, .value=0xe6, .type=IO_READ},
        {.addr=0x2cf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0079) {
    const struct CPU_State initial_cpu = {.pc=0x28a9, .a=0xd1, .x=0x4e, .y=0x5b, .sp=0xb7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x0f}, {.addr=0x28a9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x28aa, .a=0x0f, .x=0x4e, .y=0x5b, .sp=0xb7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x0f}, {.addr=0x28a9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x28a9, .value=0xe6, .type=IO_READ},
        {.addr=0x28aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_007A) {
    const struct CPU_State initial_cpu = {.pc=0xf031, .a=0xad, .x=0x35, .y=0xfe, .sp=0xad, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xef}, {.addr=0xf031, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf032, .a=0xef, .x=0x35, .y=0xfe, .sp=0xad, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0xef}, {.addr=0xf031, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf031, .value=0xe6, .type=IO_READ},
        {.addr=0xf032, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_007B) {
    const struct CPU_State initial_cpu = {.pc=0x5d48, .a=0x13, .x=0x45, .y=0x4e, .sp=0x34, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xa3}, {.addr=0x5d48, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5d49, .a=0xa3, .x=0x45, .y=0x4e, .sp=0x34, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xa3}, {.addr=0x5d48, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5d48, .value=0xe6, .type=IO_READ},
        {.addr=0x5d49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_007C) {
    const struct CPU_State initial_cpu = {.pc=0x2e88, .a=0x64, .x=0x46, .y=0xb3, .sp=0xa4, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xe4}, {.addr=0x2e88, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2e89, .a=0xe4, .x=0x46, .y=0xb3, .sp=0xa4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xe4}, {.addr=0x2e88, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2e88, .value=0xe6, .type=IO_READ},
        {.addr=0x2e89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_007D) {
    const struct CPU_State initial_cpu = {.pc=0xd5c0, .a=0xa0, .x=0x66, .y=0xfc, .sp=0x62, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x57}, {.addr=0xd5c0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd5c1, .a=0x57, .x=0x66, .y=0xfc, .sp=0x62, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x57}, {.addr=0xd5c0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd5c0, .value=0xe6, .type=IO_READ},
        {.addr=0xd5c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_007E) {
    const struct CPU_State initial_cpu = {.pc=0x8d22, .a=0xbe, .x=0x4c, .y=0x3c, .sp=0x49, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x4e}, {.addr=0x8d22, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8d23, .a=0x4e, .x=0x4c, .y=0x3c, .sp=0x49, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x4e}, {.addr=0x8d22, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8d22, .value=0xe6, .type=IO_READ},
        {.addr=0x8d23, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_007F) {
    const struct CPU_State initial_cpu = {.pc=0xa016, .a=0x23, .x=0x4e, .y=0x78, .sp=0x97, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x88}, {.addr=0xa016, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa017, .a=0x88, .x=0x4e, .y=0x78, .sp=0x97, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x88}, {.addr=0xa016, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa016, .value=0xe6, .type=IO_READ},
        {.addr=0xa017, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0080) {
    const struct CPU_State initial_cpu = {.pc=0xcfbe, .a=0x26, .x=0x1b, .y=0x5e, .sp=0x2c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x46}, {.addr=0xcfbe, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcfbf, .a=0x46, .x=0x1b, .y=0x5e, .sp=0x2c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x46}, {.addr=0xcfbe, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcfbe, .value=0xe6, .type=IO_READ},
        {.addr=0xcfbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0081) {
    const struct CPU_State initial_cpu = {.pc=0x1320, .a=0x1a, .x=0x59, .y=0x1e, .sp=0xdb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xfa}, {.addr=0x1320, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1321, .a=0xfa, .x=0x59, .y=0x1e, .sp=0xdb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xfa}, {.addr=0x1320, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1320, .value=0xe6, .type=IO_READ},
        {.addr=0x1321, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0082) {
    const struct CPU_State initial_cpu = {.pc=0x2104, .a=0x98, .x=0x99, .y=0x3b, .sp=0xc0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x1d}, {.addr=0x2104, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2105, .a=0x1d, .x=0x99, .y=0x3b, .sp=0xc0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x1d}, {.addr=0x2104, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2104, .value=0xe6, .type=IO_READ},
        {.addr=0x2105, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0083) {
    const struct CPU_State initial_cpu = {.pc=0x3aa3, .a=0x9b, .x=0x3c, .y=0x80, .sp=0x66, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x2f}, {.addr=0x3aa3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3aa4, .a=0x2f, .x=0x3c, .y=0x80, .sp=0x66, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x2f}, {.addr=0x3aa3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3aa3, .value=0xe6, .type=IO_READ},
        {.addr=0x3aa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0084) {
    const struct CPU_State initial_cpu = {.pc=0x3908, .a=0x48, .x=0xdf, .y=0x81, .sp=0x98, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xba}, {.addr=0x3908, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3909, .a=0xba, .x=0xdf, .y=0x81, .sp=0x98, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xba}, {.addr=0x3908, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3908, .value=0xe6, .type=IO_READ},
        {.addr=0x3909, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0085) {
    const struct CPU_State initial_cpu = {.pc=0x5ee7, .a=0x01, .x=0x15, .y=0x97, .sp=0xd8, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x11}, {.addr=0x5ee7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5ee8, .a=0x11, .x=0x15, .y=0x97, .sp=0xd8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x11}, {.addr=0x5ee7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5ee7, .value=0xe6, .type=IO_READ},
        {.addr=0x5ee8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0086) {
    const struct CPU_State initial_cpu = {.pc=0x2d41, .a=0xa4, .x=0x65, .y=0xa0, .sp=0x5a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xaa}, {.addr=0x2d41, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2d42, .a=0xaa, .x=0x65, .y=0xa0, .sp=0x5a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xaa}, {.addr=0x2d41, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2d41, .value=0xe6, .type=IO_READ},
        {.addr=0x2d42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0087) {
    const struct CPU_State initial_cpu = {.pc=0x467e, .a=0x6d, .x=0x2b, .y=0x4a, .sp=0xe9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x80}, {.addr=0x467e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x467f, .a=0x80, .x=0x2b, .y=0x4a, .sp=0xe9, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x80}, {.addr=0x467e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x467e, .value=0xe6, .type=IO_READ},
        {.addr=0x467f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0088) {
    const struct CPU_State initial_cpu = {.pc=0x714e, .a=0x9a, .x=0x9a, .y=0x2c, .sp=0xd0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x10}, {.addr=0x714e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x714f, .a=0x10, .x=0x9a, .y=0x2c, .sp=0xd0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x10}, {.addr=0x714e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x714e, .value=0xe6, .type=IO_READ},
        {.addr=0x714f, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0089) {
    const struct CPU_State initial_cpu = {.pc=0x1197, .a=0x05, .x=0xfb, .y=0x25, .sp=0x10, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x59}, {.addr=0x1197, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1198, .a=0x59, .x=0xfb, .y=0x25, .sp=0x10, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x59}, {.addr=0x1197, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1197, .value=0xe6, .type=IO_READ},
        {.addr=0x1198, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_008A) {
    const struct CPU_State initial_cpu = {.pc=0x4d05, .a=0x20, .x=0x2b, .y=0xb6, .sp=0x31, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xe1}, {.addr=0x4d05, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4d06, .a=0xe1, .x=0x2b, .y=0xb6, .sp=0x31, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xe1}, {.addr=0x4d05, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4d05, .value=0xe6, .type=IO_READ},
        {.addr=0x4d06, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_008B) {
    const struct CPU_State initial_cpu = {.pc=0x11fb, .a=0x13, .x=0x6e, .y=0x7f, .sp=0xf7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0x7d}, {.addr=0x11fb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x11fc, .a=0x7d, .x=0x6e, .y=0x7f, .sp=0xf7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0x7d}, {.addr=0x11fb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x11fb, .value=0xe6, .type=IO_READ},
        {.addr=0x11fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_008C) {
    const struct CPU_State initial_cpu = {.pc=0xe681, .a=0x6c, .x=0xa4, .y=0x5d, .sp=0x77, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x96}, {.addr=0xe681, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe682, .a=0x96, .x=0xa4, .y=0x5d, .sp=0x77, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x96}, {.addr=0xe681, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe681, .value=0xe6, .type=IO_READ},
        {.addr=0xe682, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_008D) {
    const struct CPU_State initial_cpu = {.pc=0x720a, .a=0xe1, .x=0x58, .y=0x02, .sp=0xc0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x3b}, {.addr=0x720a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x720b, .a=0x3b, .x=0x58, .y=0x02, .sp=0xc0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x3b}, {.addr=0x720a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x720a, .value=0xe6, .type=IO_READ},
        {.addr=0x720b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_008E) {
    const struct CPU_State initial_cpu = {.pc=0xa21f, .a=0x8c, .x=0x77, .y=0x21, .sp=0xa8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x3c}, {.addr=0xa21f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa220, .a=0x3c, .x=0x77, .y=0x21, .sp=0xa8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x3c}, {.addr=0xa21f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa21f, .value=0xe6, .type=IO_READ},
        {.addr=0xa220, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_008F) {
    const struct CPU_State initial_cpu = {.pc=0xc0eb, .a=0xf9, .x=0xbd, .y=0x08, .sp=0x28, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x4a}, {.addr=0xc0eb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc0ec, .a=0x4a, .x=0xbd, .y=0x08, .sp=0x28, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x4a}, {.addr=0xc0eb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc0eb, .value=0xe6, .type=IO_READ},
        {.addr=0xc0ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0090) {
    const struct CPU_State initial_cpu = {.pc=0xefab, .a=0x29, .x=0x85, .y=0x79, .sp=0xcd, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x56}, {.addr=0xefab, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xefac, .a=0x56, .x=0x85, .y=0x79, .sp=0xcd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x56}, {.addr=0xefab, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xefab, .value=0xe6, .type=IO_READ},
        {.addr=0xefac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0091) {
    const struct CPU_State initial_cpu = {.pc=0x6878, .a=0x87, .x=0x97, .y=0x72, .sp=0x85, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x25}, {.addr=0x6878, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6879, .a=0x25, .x=0x97, .y=0x72, .sp=0x85, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x25}, {.addr=0x6878, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6878, .value=0xe6, .type=IO_READ},
        {.addr=0x6879, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0092) {
    const struct CPU_State initial_cpu = {.pc=0xd02a, .a=0x92, .x=0xc3, .y=0xc4, .sp=0xba, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x08}, {.addr=0xd02a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd02b, .a=0x08, .x=0xc3, .y=0xc4, .sp=0xba, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x08}, {.addr=0xd02a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd02a, .value=0xe6, .type=IO_READ},
        {.addr=0xd02b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0093) {
    const struct CPU_State initial_cpu = {.pc=0x5110, .a=0x3a, .x=0xe9, .y=0x52, .sp=0x36, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xa7}, {.addr=0x5110, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5111, .a=0xa7, .x=0xe9, .y=0x52, .sp=0x36, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xa7}, {.addr=0x5110, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5110, .value=0xe6, .type=IO_READ},
        {.addr=0x5111, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0094) {
    const struct CPU_State initial_cpu = {.pc=0x06c5, .a=0xb6, .x=0xd3, .y=0x37, .sp=0x67, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x94}, {.addr=0x06c5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x06c6, .a=0x94, .x=0xd3, .y=0x37, .sp=0x67, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x94}, {.addr=0x06c5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x06c5, .value=0xe6, .type=IO_READ},
        {.addr=0x06c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0095) {
    const struct CPU_State initial_cpu = {.pc=0x02fa, .a=0x9f, .x=0x68, .y=0x27, .sp=0xe1, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xb9}, {.addr=0x02fa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x02fb, .a=0xb9, .x=0x68, .y=0x27, .sp=0xe1, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xb9}, {.addr=0x02fa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x02fa, .value=0xe6, .type=IO_READ},
        {.addr=0x02fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0096) {
    const struct CPU_State initial_cpu = {.pc=0x61f9, .a=0xa4, .x=0x49, .y=0x7a, .sp=0x47, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x90}, {.addr=0x61f9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x61fa, .a=0x90, .x=0x49, .y=0x7a, .sp=0x47, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x90}, {.addr=0x61f9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x61f9, .value=0xe6, .type=IO_READ},
        {.addr=0x61fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0097) {
    const struct CPU_State initial_cpu = {.pc=0x5ea5, .a=0x0a, .x=0x2f, .y=0xa3, .sp=0xdc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x0c}, {.addr=0x5ea5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5ea6, .a=0x0c, .x=0x2f, .y=0xa3, .sp=0xdc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x0c}, {.addr=0x5ea5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5ea5, .value=0xe6, .type=IO_READ},
        {.addr=0x5ea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0099) {
    const struct CPU_State initial_cpu = {.pc=0x9f78, .a=0xcd, .x=0x90, .y=0xeb, .sp=0x35, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x1d}, {.addr=0x9f78, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9f79, .a=0x1d, .x=0x90, .y=0xeb, .sp=0x35, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x1d}, {.addr=0x9f78, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9f78, .value=0xe6, .type=IO_READ},
        {.addr=0x9f79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_009A) {
    const struct CPU_State initial_cpu = {.pc=0x8c0f, .a=0xb4, .x=0x39, .y=0xe7, .sp=0x4e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x5a}, {.addr=0x8c0f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8c10, .a=0x5a, .x=0x39, .y=0xe7, .sp=0x4e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x5a}, {.addr=0x8c0f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8c0f, .value=0xe6, .type=IO_READ},
        {.addr=0x8c10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_009B) {
    const struct CPU_State initial_cpu = {.pc=0x0d7b, .a=0x39, .x=0x34, .y=0x6a, .sp=0xe4, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xa9}, {.addr=0x0d7b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0d7c, .a=0xa9, .x=0x34, .y=0x6a, .sp=0xe4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xa9}, {.addr=0x0d7b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0d7b, .value=0xe6, .type=IO_READ},
        {.addr=0x0d7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_009C) {
    const struct CPU_State initial_cpu = {.pc=0xf1c4, .a=0x0c, .x=0xc9, .y=0x65, .sp=0x6b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x3b}, {.addr=0xf1c4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf1c5, .a=0x3b, .x=0xc9, .y=0x65, .sp=0x6b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x3b}, {.addr=0xf1c4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf1c4, .value=0xe6, .type=IO_READ},
        {.addr=0xf1c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_009D) {
    const struct CPU_State initial_cpu = {.pc=0xed7f, .a=0x47, .x=0x0a, .y=0xae, .sp=0x53, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x30}, {.addr=0xed7f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xed80, .a=0x30, .x=0x0a, .y=0xae, .sp=0x53, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x30}, {.addr=0xed7f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xed7f, .value=0xe6, .type=IO_READ},
        {.addr=0xed80, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_009E) {
    const struct CPU_State initial_cpu = {.pc=0x77f6, .a=0x7f, .x=0xd7, .y=0x58, .sp=0x79, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x5b}, {.addr=0x77f6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x77f7, .a=0x5b, .x=0xd7, .y=0x58, .sp=0x79, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x5b}, {.addr=0x77f6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x77f6, .value=0xe6, .type=IO_READ},
        {.addr=0x77f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_009F) {
    const struct CPU_State initial_cpu = {.pc=0xca64, .a=0x8a, .x=0x61, .y=0x3a, .sp=0x71, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x3e}, {.addr=0xca64, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xca65, .a=0x3e, .x=0x61, .y=0x3a, .sp=0x71, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x3e}, {.addr=0xca64, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xca64, .value=0xe6, .type=IO_READ},
        {.addr=0xca65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xa850, .a=0x98, .x=0x73, .y=0x77, .sp=0x2a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x7f}, {.addr=0xa850, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa851, .a=0x7f, .x=0x73, .y=0x77, .sp=0x2a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x7f}, {.addr=0xa850, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa850, .value=0xe6, .type=IO_READ},
        {.addr=0xa851, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xeece, .a=0x5d, .x=0x9b, .y=0xab, .sp=0x2a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xee}, {.addr=0xeece, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xeecf, .a=0xee, .x=0x9b, .y=0xab, .sp=0x2a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xee}, {.addr=0xeece, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xeece, .value=0xe6, .type=IO_READ},
        {.addr=0xeecf, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xead6, .a=0xa7, .x=0x94, .y=0x0f, .sp=0x96, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xbd}, {.addr=0xead6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xead7, .a=0xbd, .x=0x94, .y=0x0f, .sp=0x96, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xbd}, {.addr=0xead6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xead6, .value=0xe6, .type=IO_READ},
        {.addr=0xead7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x86d4, .a=0xf7, .x=0x28, .y=0x92, .sp=0x9e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xde}, {.addr=0x86d4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x86d5, .a=0xde, .x=0x28, .y=0x92, .sp=0x9e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xde}, {.addr=0x86d4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x86d4, .value=0xe6, .type=IO_READ},
        {.addr=0x86d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xbea7, .a=0xd5, .x=0xcf, .y=0xbd, .sp=0x07, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xb2}, {.addr=0xbea7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbea8, .a=0xb2, .x=0xcf, .y=0xbd, .sp=0x07, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xb2}, {.addr=0xbea7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbea7, .value=0xe6, .type=IO_READ},
        {.addr=0xbea8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x91fd, .a=0x93, .x=0xca, .y=0x9a, .sp=0xf6, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x2b}, {.addr=0x91fd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x91fe, .a=0x2b, .x=0xca, .y=0x9a, .sp=0xf6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x2b}, {.addr=0x91fd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x91fd, .value=0xe6, .type=IO_READ},
        {.addr=0x91fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xd141, .a=0xbf, .x=0xd5, .y=0xa3, .sp=0xa3, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xe3}, {.addr=0xd141, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd142, .a=0xe3, .x=0xd5, .y=0xa3, .sp=0xa3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xe3}, {.addr=0xd141, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd141, .value=0xe6, .type=IO_READ},
        {.addr=0xd142, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x9fdb, .a=0x17, .x=0x29, .y=0x5a, .sp=0x64, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xe0}, {.addr=0x9fdb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9fdc, .a=0xe0, .x=0x29, .y=0x5a, .sp=0x64, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xe0}, {.addr=0x9fdb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9fdb, .value=0xe6, .type=IO_READ},
        {.addr=0x9fdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x11aa, .a=0x9e, .x=0xfb, .y=0xb5, .sp=0xdb, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xf3}, {.addr=0x11aa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x11ab, .a=0xf3, .x=0xfb, .y=0xb5, .sp=0xdb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xf3}, {.addr=0x11aa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x11aa, .value=0xe6, .type=IO_READ},
        {.addr=0x11ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x93e4, .a=0x05, .x=0xa9, .y=0x23, .sp=0x05, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x41}, {.addr=0x93e4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x93e5, .a=0x41, .x=0xa9, .y=0x23, .sp=0x05, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x41}, {.addr=0x93e4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x93e4, .value=0xe6, .type=IO_READ},
        {.addr=0x93e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x93b1, .a=0x25, .x=0x7c, .y=0x90, .sp=0xc3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x76}, {.addr=0x93b1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x93b2, .a=0x76, .x=0x7c, .y=0x90, .sp=0xc3, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x76}, {.addr=0x93b1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x93b1, .value=0xe6, .type=IO_READ},
        {.addr=0x93b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xd415, .a=0x3b, .x=0x01, .y=0x56, .sp=0xe2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x92}, {.addr=0xd415, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd416, .a=0x92, .x=0x01, .y=0x56, .sp=0xe2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x92}, {.addr=0xd415, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd415, .value=0xe6, .type=IO_READ},
        {.addr=0xd416, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x5471, .a=0x4b, .x=0x23, .y=0x93, .sp=0xc9, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x2b}, {.addr=0x5471, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5472, .a=0x2b, .x=0x23, .y=0x93, .sp=0xc9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x2b}, {.addr=0x5471, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5471, .value=0xe6, .type=IO_READ},
        {.addr=0x5472, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x9af2, .a=0x0a, .x=0x81, .y=0x0e, .sp=0x21, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x86}, {.addr=0x9af2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9af3, .a=0x86, .x=0x81, .y=0x0e, .sp=0x21, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x86}, {.addr=0x9af2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9af2, .value=0xe6, .type=IO_READ},
        {.addr=0x9af3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xb4d6, .a=0xe9, .x=0x65, .y=0xdd, .sp=0x0a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xb2}, {.addr=0xb4d6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb4d7, .a=0xb2, .x=0x65, .y=0xdd, .sp=0x0a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xb2}, {.addr=0xb4d6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb4d6, .value=0xe6, .type=IO_READ},
        {.addr=0xb4d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x6581, .a=0x11, .x=0x49, .y=0x8f, .sp=0xe6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x28}, {.addr=0x6581, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6582, .a=0x28, .x=0x49, .y=0x8f, .sp=0xe6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x28}, {.addr=0x6581, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6581, .value=0xe6, .type=IO_READ},
        {.addr=0x6582, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x0480, .a=0xe8, .x=0x82, .y=0xe5, .sp=0xee, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xef}, {.addr=0x0480, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0481, .a=0xef, .x=0x82, .y=0xe5, .sp=0xee, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xef}, {.addr=0x0480, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0480, .value=0xe6, .type=IO_READ},
        {.addr=0x0481, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xf39e, .a=0x3e, .x=0x67, .y=0xff, .sp=0x64, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x5f}, {.addr=0xf39e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf39f, .a=0x5f, .x=0x67, .y=0xff, .sp=0x64, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x5f}, {.addr=0xf39e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf39e, .value=0xe6, .type=IO_READ},
        {.addr=0xf39f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x62bf, .a=0x91, .x=0xa4, .y=0xff, .sp=0xdf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x09}, {.addr=0x62bf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x62c0, .a=0x09, .x=0xa4, .y=0xff, .sp=0xdf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x09}, {.addr=0x62bf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x62bf, .value=0xe6, .type=IO_READ},
        {.addr=0x62c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xcc5e, .a=0xb4, .x=0xe6, .y=0x09, .sp=0xd9, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x4d}, {.addr=0xcc5e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcc5f, .a=0x4d, .x=0xe6, .y=0x09, .sp=0xd9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x4d}, {.addr=0xcc5e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcc5e, .value=0xe6, .type=IO_READ},
        {.addr=0xcc5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x585c, .a=0xa8, .x=0x10, .y=0x70, .sp=0x29, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xf2}, {.addr=0x585c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x585d, .a=0xf2, .x=0x10, .y=0x70, .sp=0x29, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0xf2}, {.addr=0x585c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x585c, .value=0xe6, .type=IO_READ},
        {.addr=0x585d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xcaa3, .a=0x21, .x=0x2e, .y=0x71, .sp=0x85, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x5b}, {.addr=0xcaa3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcaa4, .a=0x5b, .x=0x2e, .y=0x71, .sp=0x85, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x5b}, {.addr=0xcaa3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcaa3, .value=0xe6, .type=IO_READ},
        {.addr=0xcaa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xd3ec, .a=0x3f, .x=0x83, .y=0x4e, .sp=0xad, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x76}, {.addr=0xd3ec, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd3ed, .a=0x76, .x=0x83, .y=0x4e, .sp=0xad, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x76}, {.addr=0xd3ec, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd3ec, .value=0xe6, .type=IO_READ},
        {.addr=0xd3ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x2d92, .a=0xb2, .x=0x9a, .y=0x30, .sp=0xeb, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xfb}, {.addr=0x2d92, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2d93, .a=0xfb, .x=0x9a, .y=0x30, .sp=0xeb, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xfb}, {.addr=0x2d92, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2d92, .value=0xe6, .type=IO_READ},
        {.addr=0x2d93, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xf8a9, .a=0x39, .x=0xd9, .y=0xa9, .sp=0x67, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x68}, {.addr=0xf8a9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf8aa, .a=0x68, .x=0xd9, .y=0xa9, .sp=0x67, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x68}, {.addr=0xf8a9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf8a9, .value=0xe6, .type=IO_READ},
        {.addr=0xf8aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x0e53, .a=0x65, .x=0x9a, .y=0xa7, .sp=0x07, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x98}, {.addr=0x0e53, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0e54, .a=0x98, .x=0x9a, .y=0xa7, .sp=0x07, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x98}, {.addr=0x0e53, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0e53, .value=0xe6, .type=IO_READ},
        {.addr=0x0e54, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x509e, .a=0x6a, .x=0x1d, .y=0x61, .sp=0x32, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x8c}, {.addr=0x509e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x509f, .a=0x8c, .x=0x1d, .y=0x61, .sp=0x32, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x8c}, {.addr=0x509e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x509e, .value=0xe6, .type=IO_READ},
        {.addr=0x509f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x8d87, .a=0xb9, .x=0xad, .y=0xec, .sp=0x41, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x2d}, {.addr=0x8d87, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8d88, .a=0x2d, .x=0xad, .y=0xec, .sp=0x41, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x2d}, {.addr=0x8d87, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8d87, .value=0xe6, .type=IO_READ},
        {.addr=0x8d88, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xfbff, .a=0xf6, .x=0x2e, .y=0x4b, .sp=0x9c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xa5}, {.addr=0xfbff, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfc00, .a=0xa5, .x=0x2e, .y=0x4b, .sp=0x9c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xa5}, {.addr=0xfbff, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfbff, .value=0xe6, .type=IO_READ},
        {.addr=0xfc00, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x7d7f, .a=0x3d, .x=0x8e, .y=0xb5, .sp=0x1e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xd6}, {.addr=0x7d7f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7d80, .a=0xd6, .x=0x8e, .y=0xb5, .sp=0x1e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xd6}, {.addr=0x7d7f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7d7f, .value=0xe6, .type=IO_READ},
        {.addr=0x7d80, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x8ca1, .a=0x21, .x=0xc4, .y=0x8a, .sp=0x75, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x6c}, {.addr=0x8ca1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8ca2, .a=0x6c, .x=0xc4, .y=0x8a, .sp=0x75, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x6c}, {.addr=0x8ca1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8ca1, .value=0xe6, .type=IO_READ},
        {.addr=0x8ca2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x4f68, .a=0x81, .x=0x4c, .y=0x13, .sp=0x79, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xb2}, {.addr=0x4f68, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4f69, .a=0xb2, .x=0x4c, .y=0x13, .sp=0x79, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xb2}, {.addr=0x4f68, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4f68, .value=0xe6, .type=IO_READ},
        {.addr=0x4f69, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x9674, .a=0xe1, .x=0x5f, .y=0xad, .sp=0xd8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x5d}, {.addr=0x9674, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9675, .a=0x5d, .x=0x5f, .y=0xad, .sp=0xd8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x5d}, {.addr=0x9674, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9674, .value=0xe6, .type=IO_READ},
        {.addr=0x9675, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xcf71, .a=0x67, .x=0x25, .y=0xb0, .sp=0x27, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xa6}, {.addr=0xcf71, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcf72, .a=0xa6, .x=0x25, .y=0xb0, .sp=0x27, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xa6}, {.addr=0xcf71, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcf71, .value=0xe6, .type=IO_READ},
        {.addr=0xcf72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xb512, .a=0xa8, .x=0x25, .y=0xf2, .sp=0xcb, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x1c}, {.addr=0xb512, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb513, .a=0x1c, .x=0x25, .y=0xf2, .sp=0xcb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x1c}, {.addr=0xb512, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb512, .value=0xe6, .type=IO_READ},
        {.addr=0xb513, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xc21b, .a=0xa0, .x=0x8f, .y=0x8f, .sp=0xbd, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x8b}, {.addr=0xc21b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc21c, .a=0x8b, .x=0x8f, .y=0x8f, .sp=0xbd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x8b}, {.addr=0xc21b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc21b, .value=0xe6, .type=IO_READ},
        {.addr=0xc21c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xe7cb, .a=0x55, .x=0xa5, .y=0xef, .sp=0xc6, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0xb8}, {.addr=0xe7cb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe7cc, .a=0xb8, .x=0xa5, .y=0xef, .sp=0xc6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0xb8}, {.addr=0xe7cb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe7cb, .value=0xe6, .type=IO_READ},
        {.addr=0xe7cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x0236, .a=0xc7, .x=0x6c, .y=0xbd, .sp=0x4a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x03}, {.addr=0x0236, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0237, .a=0x03, .x=0x6c, .y=0xbd, .sp=0x4a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x03}, {.addr=0x0236, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0236, .value=0xe6, .type=IO_READ},
        {.addr=0x0237, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x3314, .a=0x13, .x=0xc9, .y=0xef, .sp=0x56, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x83}, {.addr=0x3314, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3315, .a=0x83, .x=0xc9, .y=0xef, .sp=0x56, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x83}, {.addr=0x3314, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3314, .value=0xe6, .type=IO_READ},
        {.addr=0x3315, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x5f85, .a=0x76, .x=0x56, .y=0x37, .sp=0xd8, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x2d}, {.addr=0x5f85, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f86, .a=0x2d, .x=0x56, .y=0x37, .sp=0xd8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x2d}, {.addr=0x5f85, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f85, .value=0xe6, .type=IO_READ},
        {.addr=0x5f86, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x0c90, .a=0x8d, .x=0x39, .y=0x8b, .sp=0x3c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x7e}, {.addr=0x0c90, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0c91, .a=0x7e, .x=0x39, .y=0x8b, .sp=0x3c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x7e}, {.addr=0x0c90, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0c90, .value=0xe6, .type=IO_READ},
        {.addr=0x0c91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xbfec, .a=0xb5, .x=0x14, .y=0x4b, .sp=0x90, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xed}, {.addr=0xbfec, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbfed, .a=0xed, .x=0x14, .y=0x4b, .sp=0x90, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xed}, {.addr=0xbfec, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbfec, .value=0xe6, .type=IO_READ},
        {.addr=0xbfed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xb4ae, .a=0x13, .x=0x87, .y=0x5c, .sp=0x26, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xfd}, {.addr=0xb4ae, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb4af, .a=0xfd, .x=0x87, .y=0x5c, .sp=0x26, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xfd}, {.addr=0xb4ae, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb4ae, .value=0xe6, .type=IO_READ},
        {.addr=0xb4af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa5a9, .a=0xce, .x=0x83, .y=0xdf, .sp=0x6f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x9b}, {.addr=0xa5a9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa5aa, .a=0x9b, .x=0x83, .y=0xdf, .sp=0x6f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x9b}, {.addr=0xa5a9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa5a9, .value=0xe6, .type=IO_READ},
        {.addr=0xa5aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xf7ab, .a=0xa6, .x=0x70, .y=0x1e, .sp=0x53, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x3f}, {.addr=0xf7ab, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf7ac, .a=0x3f, .x=0x70, .y=0x1e, .sp=0x53, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x3f}, {.addr=0xf7ab, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf7ab, .value=0xe6, .type=IO_READ},
        {.addr=0xf7ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xd848, .a=0x29, .x=0xa3, .y=0x43, .sp=0x23, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x6c}, {.addr=0xd848, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd849, .a=0x6c, .x=0xa3, .y=0x43, .sp=0x23, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x6c}, {.addr=0xd848, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd848, .value=0xe6, .type=IO_READ},
        {.addr=0xd849, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xd4ee, .a=0xe7, .x=0xa5, .y=0xeb, .sp=0x3e, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xde}, {.addr=0xd4ee, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd4ef, .a=0xde, .x=0xa5, .y=0xeb, .sp=0x3e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xde}, {.addr=0xd4ee, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd4ee, .value=0xe6, .type=IO_READ},
        {.addr=0xd4ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xc260, .a=0x99, .x=0xa2, .y=0x82, .sp=0x37, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x2c}, {.addr=0xc260, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc261, .a=0x2c, .x=0xa2, .y=0x82, .sp=0x37, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x2c}, {.addr=0xc260, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc260, .value=0xe6, .type=IO_READ},
        {.addr=0xc261, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xbd63, .a=0xab, .x=0x54, .y=0x01, .sp=0x91, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xa7}, {.addr=0xbd63, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbd64, .a=0xa7, .x=0x54, .y=0x01, .sp=0x91, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xa7}, {.addr=0xbd63, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbd63, .value=0xe6, .type=IO_READ},
        {.addr=0xbd64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x589d, .a=0x07, .x=0x8b, .y=0x6d, .sp=0x0d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xb9}, {.addr=0x589d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x589e, .a=0xb9, .x=0x8b, .y=0x6d, .sp=0x0d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xb9}, {.addr=0x589d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x589d, .value=0xe6, .type=IO_READ},
        {.addr=0x589e, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x9719, .a=0xcf, .x=0x4c, .y=0x3e, .sp=0x36, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xf2}, {.addr=0x9719, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x971a, .a=0xf2, .x=0x4c, .y=0x3e, .sp=0x36, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xf2}, {.addr=0x9719, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9719, .value=0xe6, .type=IO_READ},
        {.addr=0x971a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xc293, .a=0x67, .x=0x29, .y=0x23, .sp=0xd6, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x53}, {.addr=0xc293, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc294, .a=0x53, .x=0x29, .y=0x23, .sp=0xd6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x53}, {.addr=0xc293, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc293, .value=0xe6, .type=IO_READ},
        {.addr=0xc294, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xa1c8, .a=0x7e, .x=0xc5, .y=0x48, .sp=0x9d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x11}, {.addr=0xa1c8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa1c9, .a=0x11, .x=0xc5, .y=0x48, .sp=0x9d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x11}, {.addr=0xa1c8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa1c8, .value=0xe6, .type=IO_READ},
        {.addr=0xa1c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x81cf, .a=0xbc, .x=0xb2, .y=0x6d, .sp=0x2b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xd3}, {.addr=0x81cf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x81d0, .a=0xd3, .x=0xb2, .y=0x6d, .sp=0x2b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xd3}, {.addr=0x81cf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x81cf, .value=0xe6, .type=IO_READ},
        {.addr=0x81d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x2411, .a=0x3d, .x=0x88, .y=0xac, .sp=0xf0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x53}, {.addr=0x2411, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2412, .a=0x53, .x=0x88, .y=0xac, .sp=0xf0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x53}, {.addr=0x2411, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2411, .value=0xe6, .type=IO_READ},
        {.addr=0x2412, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xc3c2, .a=0xae, .x=0xc0, .y=0x4e, .sp=0xd5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x77}, {.addr=0xc3c2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc3c3, .a=0x77, .x=0xc0, .y=0x4e, .sp=0xd5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x77}, {.addr=0xc3c2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc3c2, .value=0xe6, .type=IO_READ},
        {.addr=0xc3c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb669, .a=0x41, .x=0x90, .y=0x68, .sp=0xe8, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0xea}, {.addr=0xb669, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb66a, .a=0xea, .x=0x90, .y=0x68, .sp=0xe8, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0xea}, {.addr=0xb669, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb669, .value=0xe6, .type=IO_READ},
        {.addr=0xb66a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb14b, .a=0xce, .x=0x82, .y=0x7c, .sp=0xfd, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x93}, {.addr=0xb14b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb14c, .a=0x93, .x=0x82, .y=0x7c, .sp=0xfd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x93}, {.addr=0xb14b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb14b, .value=0xe6, .type=IO_READ},
        {.addr=0xb14c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xb0f4, .a=0x2f, .x=0xcd, .y=0xc5, .sp=0xec, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x96}, {.addr=0xb0f4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb0f5, .a=0x96, .x=0xcd, .y=0xc5, .sp=0xec, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x96}, {.addr=0xb0f4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb0f4, .value=0xe6, .type=IO_READ},
        {.addr=0xb0f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xe08a, .a=0x8e, .x=0xcc, .y=0x8e, .sp=0xbe, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x8b}, {.addr=0xe08a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe08b, .a=0x8b, .x=0xcc, .y=0x8e, .sp=0xbe, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x8b}, {.addr=0xe08a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe08a, .value=0xe6, .type=IO_READ},
        {.addr=0xe08b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xa79a, .a=0xb4, .x=0x30, .y=0x0e, .sp=0x57, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x0c}, {.addr=0xa79a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa79b, .a=0x0c, .x=0x30, .y=0x0e, .sp=0x57, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x0c}, {.addr=0xa79a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa79a, .value=0xe6, .type=IO_READ},
        {.addr=0xa79b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb578, .a=0x2d, .x=0x27, .y=0xe7, .sp=0xb2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x15}, {.addr=0xb578, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb579, .a=0x15, .x=0x27, .y=0xe7, .sp=0xb2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x15}, {.addr=0xb578, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb578, .value=0xe6, .type=IO_READ},
        {.addr=0xb579, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xff44, .a=0x1d, .x=0x2a, .y=0x9d, .sp=0xa4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xd1}, {.addr=0xff44, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xff45, .a=0xd1, .x=0x2a, .y=0x9d, .sp=0xa4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xd1}, {.addr=0xff44, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xff44, .value=0xe6, .type=IO_READ},
        {.addr=0xff45, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x3950, .a=0xe3, .x=0xd3, .y=0x28, .sp=0x88, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x02}, {.addr=0x3950, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3951, .a=0x02, .x=0xd3, .y=0x28, .sp=0x88, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x02}, {.addr=0x3950, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3950, .value=0xe6, .type=IO_READ},
        {.addr=0x3951, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xb35d, .a=0xdf, .x=0x65, .y=0x3f, .sp=0xa3, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x3a}, {.addr=0xb35d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb35e, .a=0x3a, .x=0x65, .y=0x3f, .sp=0xa3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x3a}, {.addr=0xb35d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb35d, .value=0xe6, .type=IO_READ},
        {.addr=0xb35e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x6c6d, .a=0x79, .x=0xba, .y=0xa6, .sp=0x29, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x5a}, {.addr=0x6c6d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6c6e, .a=0x5a, .x=0xba, .y=0xa6, .sp=0x29, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x5a}, {.addr=0x6c6d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6c6d, .value=0xe6, .type=IO_READ},
        {.addr=0x6c6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x887a, .a=0x77, .x=0x86, .y=0x5d, .sp=0xf6, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x31}, {.addr=0x887a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x887b, .a=0x31, .x=0x86, .y=0x5d, .sp=0xf6, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x31}, {.addr=0x887a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x887a, .value=0xe6, .type=IO_READ},
        {.addr=0x887b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x5f73, .a=0x84, .x=0x0d, .y=0xb2, .sp=0x13, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x88}, {.addr=0x5f73, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f74, .a=0x88, .x=0x0d, .y=0xb2, .sp=0x13, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x88}, {.addr=0x5f73, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f73, .value=0xe6, .type=IO_READ},
        {.addr=0x5f74, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xe1b6, .a=0x6f, .x=0x2d, .y=0x1e, .sp=0x51, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xfa}, {.addr=0xe1b6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe1b7, .a=0xfa, .x=0x2d, .y=0x1e, .sp=0x51, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xfa}, {.addr=0xe1b6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe1b6, .value=0xe6, .type=IO_READ},
        {.addr=0xe1b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x46b4, .a=0x55, .x=0xd7, .y=0xae, .sp=0xb9, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x90}, {.addr=0x46b4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x46b5, .a=0x90, .x=0xd7, .y=0xae, .sp=0xb9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x90}, {.addr=0x46b4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x46b4, .value=0xe6, .type=IO_READ},
        {.addr=0x46b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xf959, .a=0x90, .x=0x5f, .y=0x1f, .sp=0xe3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xa8}, {.addr=0xf959, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf95a, .a=0xa8, .x=0x5f, .y=0x1f, .sp=0xe3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xa8}, {.addr=0xf959, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf959, .value=0xe6, .type=IO_READ},
        {.addr=0xf95a, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x41a0, .a=0xec, .x=0x99, .y=0x3a, .sp=0x4f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x7b}, {.addr=0x41a0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x41a1, .a=0x7b, .x=0x99, .y=0x3a, .sp=0x4f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x7b}, {.addr=0x41a0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x41a0, .value=0xe6, .type=IO_READ},
        {.addr=0x41a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xabf6, .a=0x29, .x=0x34, .y=0x66, .sp=0x31, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x34}, {.addr=0xabf6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xabf7, .a=0x34, .x=0x34, .y=0x66, .sp=0x31, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x34}, {.addr=0xabf6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xabf6, .value=0xe6, .type=IO_READ},
        {.addr=0xabf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x13b9, .a=0x81, .x=0x53, .y=0x4d, .sp=0x57, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x72}, {.addr=0x13b9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x13ba, .a=0x72, .x=0x53, .y=0x4d, .sp=0x57, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x72}, {.addr=0x13b9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x13b9, .value=0xe6, .type=IO_READ},
        {.addr=0x13ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x2a28, .a=0x4f, .x=0x34, .y=0x22, .sp=0xb7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x86}, {.addr=0x2a28, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2a29, .a=0x86, .x=0x34, .y=0x22, .sp=0xb7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x86}, {.addr=0x2a28, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2a28, .value=0xe6, .type=IO_READ},
        {.addr=0x2a29, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xd942, .a=0x7f, .x=0x54, .y=0x08, .sp=0x6e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xaf}, {.addr=0xd942, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd943, .a=0xaf, .x=0x54, .y=0x08, .sp=0x6e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xaf}, {.addr=0xd942, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd942, .value=0xe6, .type=IO_READ},
        {.addr=0xd943, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x421d, .a=0x25, .x=0x78, .y=0xc3, .sp=0x94, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x38}, {.addr=0x421d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x421e, .a=0x38, .x=0x78, .y=0xc3, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x38}, {.addr=0x421d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x421d, .value=0xe6, .type=IO_READ},
        {.addr=0x421e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x16b9, .a=0x10, .x=0x3f, .y=0xc4, .sp=0x70, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xc5}, {.addr=0x16b9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x16ba, .a=0xc5, .x=0x3f, .y=0xc4, .sp=0x70, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xc5}, {.addr=0x16b9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x16b9, .value=0xe6, .type=IO_READ},
        {.addr=0x16ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x4061, .a=0x08, .x=0x1f, .y=0x9d, .sp=0xf0, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x35}, {.addr=0x4061, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4062, .a=0x35, .x=0x1f, .y=0x9d, .sp=0xf0, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x35}, {.addr=0x4061, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4061, .value=0xe6, .type=IO_READ},
        {.addr=0x4062, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xae77, .a=0x74, .x=0xa4, .y=0xf0, .sp=0xe1, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x1a}, {.addr=0xae77, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xae78, .a=0x1a, .x=0xa4, .y=0xf0, .sp=0xe1, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x1a}, {.addr=0xae77, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xae77, .value=0xe6, .type=IO_READ},
        {.addr=0xae78, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x658d, .a=0xa7, .x=0x42, .y=0x0e, .sp=0x23, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x4a}, {.addr=0x658d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x658e, .a=0x4a, .x=0x42, .y=0x0e, .sp=0x23, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x4a}, {.addr=0x658d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x658d, .value=0xe6, .type=IO_READ},
        {.addr=0x658e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x62f9, .a=0x81, .x=0x96, .y=0x7c, .sp=0xbb, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x5b}, {.addr=0x62f9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x62fa, .a=0x5b, .x=0x96, .y=0x7c, .sp=0xbb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x5b}, {.addr=0x62f9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x62f9, .value=0xe6, .type=IO_READ},
        {.addr=0x62fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x9e19, .a=0xc8, .x=0x73, .y=0xf8, .sp=0x74, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xff}, {.addr=0x9e19, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9e1a, .a=0xff, .x=0x73, .y=0xf8, .sp=0x74, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xff}, {.addr=0x9e19, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9e19, .value=0xe6, .type=IO_READ},
        {.addr=0x9e1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x26a8, .a=0xc8, .x=0xe7, .y=0xfa, .sp=0xdc, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x95}, {.addr=0x26a8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x26a9, .a=0x95, .x=0xe7, .y=0xfa, .sp=0xdc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x95}, {.addr=0x26a8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x26a8, .value=0xe6, .type=IO_READ},
        {.addr=0x26a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x5607, .a=0xf5, .x=0xe7, .y=0x1b, .sp=0xe8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x24}, {.addr=0x5607, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5608, .a=0x24, .x=0xe7, .y=0x1b, .sp=0xe8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x24}, {.addr=0x5607, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5607, .value=0xe6, .type=IO_READ},
        {.addr=0x5608, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xcf68, .a=0x83, .x=0xd1, .y=0x9c, .sp=0x2f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x1d}, {.addr=0xcf68, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcf69, .a=0x1d, .x=0xd1, .y=0x9c, .sp=0x2f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x1d}, {.addr=0xcf68, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcf68, .value=0xe6, .type=IO_READ},
        {.addr=0xcf69, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x90d1, .a=0x40, .x=0xc3, .y=0x7f, .sp=0x2b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xfa}, {.addr=0x90d1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x90d2, .a=0xfa, .x=0xc3, .y=0x7f, .sp=0x2b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xfa}, {.addr=0x90d1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x90d1, .value=0xe6, .type=IO_READ},
        {.addr=0x90d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xee84, .a=0xec, .x=0x44, .y=0x02, .sp=0x6a, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x8b}, {.addr=0xee84, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xee85, .a=0x8b, .x=0x44, .y=0x02, .sp=0x6a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x8b}, {.addr=0xee84, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xee84, .value=0xe6, .type=IO_READ},
        {.addr=0xee85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xb5af, .a=0xff, .x=0x9f, .y=0x51, .sp=0xb9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x12}, {.addr=0xb5af, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb5b0, .a=0x12, .x=0x9f, .y=0x51, .sp=0xb9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x12}, {.addr=0xb5af, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb5af, .value=0xe6, .type=IO_READ},
        {.addr=0xb5b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x4378, .a=0x1c, .x=0xd6, .y=0x00, .sp=0x38, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x5a}, {.addr=0x4378, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4379, .a=0x5a, .x=0xd6, .y=0x00, .sp=0x38, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x5a}, {.addr=0x4378, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4378, .value=0xe6, .type=IO_READ},
        {.addr=0x4379, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x80cd, .a=0x29, .x=0x25, .y=0x40, .sp=0x7b, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x53}, {.addr=0x80cd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x80ce, .a=0x53, .x=0x25, .y=0x40, .sp=0x7b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x53}, {.addr=0x80cd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x80cd, .value=0xe6, .type=IO_READ},
        {.addr=0x80ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xba70, .a=0x62, .x=0xf3, .y=0xe5, .sp=0x83, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xe2}, {.addr=0xba70, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xba71, .a=0xe2, .x=0xf3, .y=0xe5, .sp=0x83, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xe2}, {.addr=0xba70, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xba70, .value=0xe6, .type=IO_READ},
        {.addr=0xba71, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x5437, .a=0x1e, .x=0x61, .y=0x50, .sp=0xdd, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x94}, {.addr=0x5437, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5438, .a=0x94, .x=0x61, .y=0x50, .sp=0xdd, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x94}, {.addr=0x5437, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5437, .value=0xe6, .type=IO_READ},
        {.addr=0x5438, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0100) {
    const struct CPU_State initial_cpu = {.pc=0x1491, .a=0xb3, .x=0x11, .y=0x79, .sp=0xaa, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x52}, {.addr=0x1491, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1492, .a=0x52, .x=0x11, .y=0x79, .sp=0xaa, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x52}, {.addr=0x1491, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1491, .value=0xe6, .type=IO_READ},
        {.addr=0x1492, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0101) {
    const struct CPU_State initial_cpu = {.pc=0xa7dd, .a=0x8a, .x=0x3a, .y=0x6a, .sp=0x1f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xcb}, {.addr=0xa7dd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa7de, .a=0xcb, .x=0x3a, .y=0x6a, .sp=0x1f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xcb}, {.addr=0xa7dd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa7dd, .value=0xe6, .type=IO_READ},
        {.addr=0xa7de, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0e35, .a=0x70, .x=0x0d, .y=0x50, .sp=0x0a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0x0e35, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0e36, .a=0x00, .x=0x0d, .y=0x50, .sp=0x0a, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0x0e35, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0e35, .value=0xe6, .type=IO_READ},
        {.addr=0x0e36, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0103) {
    const struct CPU_State initial_cpu = {.pc=0x260b, .a=0x51, .x=0xa3, .y=0x29, .sp=0x15, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0xc9}, {.addr=0x260b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x260c, .a=0xc9, .x=0xa3, .y=0x29, .sp=0x15, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0xc9}, {.addr=0x260b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x260b, .value=0xe6, .type=IO_READ},
        {.addr=0x260c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0104) {
    const struct CPU_State initial_cpu = {.pc=0x4998, .a=0x00, .x=0x12, .y=0x19, .sp=0xb3, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0xa0}, {.addr=0x4998, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4999, .a=0xa0, .x=0x12, .y=0x19, .sp=0xb3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0xa0}, {.addr=0x4998, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4998, .value=0xe6, .type=IO_READ},
        {.addr=0x4999, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6b23, .a=0x62, .x=0x7f, .y=0xec, .sp=0xd6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x68}, {.addr=0x6b23, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6b24, .a=0x68, .x=0x7f, .y=0xec, .sp=0xd6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x68}, {.addr=0x6b23, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6b23, .value=0xe6, .type=IO_READ},
        {.addr=0x6b24, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0106) {
    const struct CPU_State initial_cpu = {.pc=0x1794, .a=0x4b, .x=0xc1, .y=0x68, .sp=0x17, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x01}, {.addr=0x1794, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1795, .a=0x01, .x=0xc1, .y=0x68, .sp=0x17, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x01}, {.addr=0x1794, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1794, .value=0xe6, .type=IO_READ},
        {.addr=0x1795, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0107) {
    const struct CPU_State initial_cpu = {.pc=0xb621, .a=0xfd, .x=0x44, .y=0xf1, .sp=0xf2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xd8}, {.addr=0xb621, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb622, .a=0xd8, .x=0x44, .y=0xf1, .sp=0xf2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xd8}, {.addr=0xb621, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb621, .value=0xe6, .type=IO_READ},
        {.addr=0xb622, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0108) {
    const struct CPU_State initial_cpu = {.pc=0x0285, .a=0x85, .x=0x7c, .y=0xe2, .sp=0x70, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x36}, {.addr=0x0285, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0286, .a=0x36, .x=0x7c, .y=0xe2, .sp=0x70, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x36}, {.addr=0x0285, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0285, .value=0xe6, .type=IO_READ},
        {.addr=0x0286, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0109) {
    const struct CPU_State initial_cpu = {.pc=0x33c3, .a=0x29, .x=0x80, .y=0x2d, .sp=0xee, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x67}, {.addr=0x33c3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x33c4, .a=0x67, .x=0x80, .y=0x2d, .sp=0xee, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x67}, {.addr=0x33c3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x33c3, .value=0xe6, .type=IO_READ},
        {.addr=0x33c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_010A) {
    const struct CPU_State initial_cpu = {.pc=0xda5b, .a=0xf1, .x=0xa9, .y=0xb2, .sp=0xf2, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xb2}, {.addr=0xda5b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xda5c, .a=0xb2, .x=0xa9, .y=0xb2, .sp=0xf2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xb2}, {.addr=0xda5b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xda5b, .value=0xe6, .type=IO_READ},
        {.addr=0xda5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_010B) {
    const struct CPU_State initial_cpu = {.pc=0x91bd, .a=0xf2, .x=0x03, .y=0xc6, .sp=0xcb, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xd4}, {.addr=0x91bd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x91be, .a=0xd4, .x=0x03, .y=0xc6, .sp=0xcb, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xd4}, {.addr=0x91bd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x91bd, .value=0xe6, .type=IO_READ},
        {.addr=0x91be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_010C) {
    const struct CPU_State initial_cpu = {.pc=0x31e5, .a=0xe9, .x=0xbc, .y=0x61, .sp=0xed, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x6e}, {.addr=0x31e5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x31e6, .a=0x6e, .x=0xbc, .y=0x61, .sp=0xed, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x6e}, {.addr=0x31e5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x31e5, .value=0xe6, .type=IO_READ},
        {.addr=0x31e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_010D) {
    const struct CPU_State initial_cpu = {.pc=0x58db, .a=0x8b, .x=0x8f, .y=0x3b, .sp=0x5a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x48}, {.addr=0x58db, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x58dc, .a=0x48, .x=0x8f, .y=0x3b, .sp=0x5a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x48}, {.addr=0x58db, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x58db, .value=0xe6, .type=IO_READ},
        {.addr=0x58dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_010E) {
    const struct CPU_State initial_cpu = {.pc=0xfbf2, .a=0x39, .x=0xb2, .y=0x90, .sp=0x96, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xe3}, {.addr=0xfbf2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfbf3, .a=0xe3, .x=0xb2, .y=0x90, .sp=0x96, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xe3}, {.addr=0xfbf2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfbf2, .value=0xe6, .type=IO_READ},
        {.addr=0xfbf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_010F) {
    const struct CPU_State initial_cpu = {.pc=0xee45, .a=0xa9, .x=0xef, .y=0x44, .sp=0xe5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xe2}, {.addr=0xee45, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xee46, .a=0xe2, .x=0xef, .y=0x44, .sp=0xe5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xe2}, {.addr=0xee45, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xee45, .value=0xe6, .type=IO_READ},
        {.addr=0xee46, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0110) {
    const struct CPU_State initial_cpu = {.pc=0x77a9, .a=0x72, .x=0xd5, .y=0x81, .sp=0x77, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xa9}, {.addr=0x77a9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x77aa, .a=0xa9, .x=0xd5, .y=0x81, .sp=0x77, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xa9}, {.addr=0x77a9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x77a9, .value=0xe6, .type=IO_READ},
        {.addr=0x77aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0111) {
    const struct CPU_State initial_cpu = {.pc=0x77d5, .a=0xcf, .x=0x7a, .y=0x9a, .sp=0xa6, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0xc6}, {.addr=0x77d5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0xc6, .x=0x7a, .y=0x9a, .sp=0xa6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0xc6}, {.addr=0x77d5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x77d5, .value=0xe6, .type=IO_READ},
        {.addr=0x77d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0112) {
    const struct CPU_State initial_cpu = {.pc=0x421f, .a=0x79, .x=0xbd, .y=0x62, .sp=0x40, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xc3}, {.addr=0x421f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4220, .a=0xc3, .x=0xbd, .y=0x62, .sp=0x40, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xc3}, {.addr=0x421f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x421f, .value=0xe6, .type=IO_READ},
        {.addr=0x4220, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0113) {
    const struct CPU_State initial_cpu = {.pc=0x7d9d, .a=0xef, .x=0x01, .y=0x5e, .sp=0x6e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x21}, {.addr=0x7d9d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7d9e, .a=0x21, .x=0x01, .y=0x5e, .sp=0x6e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x21}, {.addr=0x7d9d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7d9d, .value=0xe6, .type=IO_READ},
        {.addr=0x7d9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf3fc, .a=0x7d, .x=0x41, .y=0xc9, .sp=0xe4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xe1}, {.addr=0xf3fc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf3fd, .a=0xe1, .x=0x41, .y=0xc9, .sp=0xe4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xe1}, {.addr=0xf3fc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf3fc, .value=0xe6, .type=IO_READ},
        {.addr=0xf3fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0115) {
    const struct CPU_State initial_cpu = {.pc=0x3dca, .a=0x25, .x=0x6c, .y=0x2d, .sp=0x64, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xe3}, {.addr=0x3dca, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3dcb, .a=0xe3, .x=0x6c, .y=0x2d, .sp=0x64, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xe3}, {.addr=0x3dca, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3dca, .value=0xe6, .type=IO_READ},
        {.addr=0x3dcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0116) {
    const struct CPU_State initial_cpu = {.pc=0xaed9, .a=0xdd, .x=0xfc, .y=0x3f, .sp=0x95, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xe3}, {.addr=0xaed9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaeda, .a=0xe3, .x=0xfc, .y=0x3f, .sp=0x95, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xe3}, {.addr=0xaed9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaed9, .value=0xe6, .type=IO_READ},
        {.addr=0xaeda, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0117) {
    const struct CPU_State initial_cpu = {.pc=0xfb23, .a=0xee, .x=0xce, .y=0x4f, .sp=0xee, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x82}, {.addr=0xfb23, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfb24, .a=0x82, .x=0xce, .y=0x4f, .sp=0xee, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x82}, {.addr=0xfb23, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfb23, .value=0xe6, .type=IO_READ},
        {.addr=0xfb24, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0118) {
    const struct CPU_State initial_cpu = {.pc=0xc743, .a=0x58, .x=0xb3, .y=0x39, .sp=0xf8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x58}, {.addr=0xc743, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc744, .a=0x58, .x=0xb3, .y=0x39, .sp=0xf8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x58}, {.addr=0xc743, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc743, .value=0xe6, .type=IO_READ},
        {.addr=0xc744, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0119) {
    const struct CPU_State initial_cpu = {.pc=0xca99, .a=0x84, .x=0xb4, .y=0xba, .sp=0xdd, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xbd}, {.addr=0xca99, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xca9a, .a=0xbd, .x=0xb4, .y=0xba, .sp=0xdd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xbd}, {.addr=0xca99, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xca99, .value=0xe6, .type=IO_READ},
        {.addr=0xca9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_011A) {
    const struct CPU_State initial_cpu = {.pc=0x5dfd, .a=0x95, .x=0xd4, .y=0x51, .sp=0x9d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x3d}, {.addr=0x5dfd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5dfe, .a=0x3d, .x=0xd4, .y=0x51, .sp=0x9d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x3d}, {.addr=0x5dfd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5dfd, .value=0xe6, .type=IO_READ},
        {.addr=0x5dfe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_011B) {
    const struct CPU_State initial_cpu = {.pc=0x6ab5, .a=0x58, .x=0x5d, .y=0x96, .sp=0xe0, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xdf}, {.addr=0x6ab5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6ab6, .a=0xdf, .x=0x5d, .y=0x96, .sp=0xe0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xdf}, {.addr=0x6ab5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6ab5, .value=0xe6, .type=IO_READ},
        {.addr=0x6ab6, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_011C) {
    const struct CPU_State initial_cpu = {.pc=0xbc7a, .a=0xd5, .x=0x60, .y=0xe1, .sp=0x5a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x4f}, {.addr=0xbc7a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbc7b, .a=0x4f, .x=0x60, .y=0xe1, .sp=0x5a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x4f}, {.addr=0xbc7a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbc7a, .value=0xe6, .type=IO_READ},
        {.addr=0xbc7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_011D) {
    const struct CPU_State initial_cpu = {.pc=0x3931, .a=0xaa, .x=0x17, .y=0x39, .sp=0x12, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x7b}, {.addr=0x3931, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3932, .a=0x7b, .x=0x17, .y=0x39, .sp=0x12, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x7b}, {.addr=0x3931, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3931, .value=0xe6, .type=IO_READ},
        {.addr=0x3932, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_011E) {
    const struct CPU_State initial_cpu = {.pc=0xf50a, .a=0x62, .x=0x5b, .y=0x86, .sp=0xad, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x14}, {.addr=0xf50a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf50b, .a=0x14, .x=0x5b, .y=0x86, .sp=0xad, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x14}, {.addr=0xf50a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf50a, .value=0xe6, .type=IO_READ},
        {.addr=0xf50b, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_011F) {
    const struct CPU_State initial_cpu = {.pc=0x1ca8, .a=0xf9, .x=0xe0, .y=0x63, .sp=0x5d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0xc5}, {.addr=0x1ca8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1ca9, .a=0xc5, .x=0xe0, .y=0x63, .sp=0x5d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xc5}, {.addr=0x1ca8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1ca8, .value=0xe6, .type=IO_READ},
        {.addr=0x1ca9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0120) {
    const struct CPU_State initial_cpu = {.pc=0x1bc4, .a=0xb8, .x=0x35, .y=0xda, .sp=0x82, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x42}, {.addr=0x1bc4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1bc5, .a=0x42, .x=0x35, .y=0xda, .sp=0x82, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x42}, {.addr=0x1bc4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1bc4, .value=0xe6, .type=IO_READ},
        {.addr=0x1bc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0121) {
    const struct CPU_State initial_cpu = {.pc=0xccc8, .a=0x0d, .x=0x55, .y=0x35, .sp=0x0f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x26}, {.addr=0xccc8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xccc9, .a=0x26, .x=0x55, .y=0x35, .sp=0x0f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x26}, {.addr=0xccc8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xccc8, .value=0xe6, .type=IO_READ},
        {.addr=0xccc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0122) {
    const struct CPU_State initial_cpu = {.pc=0x1344, .a=0x1a, .x=0x0b, .y=0xd1, .sp=0xca, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x80}, {.addr=0x1344, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1345, .a=0x80, .x=0x0b, .y=0xd1, .sp=0xca, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x80}, {.addr=0x1344, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1344, .value=0xe6, .type=IO_READ},
        {.addr=0x1345, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0123) {
    const struct CPU_State initial_cpu = {.pc=0x9d10, .a=0x6b, .x=0x3d, .y=0xf8, .sp=0x2e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0xb0}, {.addr=0x9d10, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9d11, .a=0xb0, .x=0x3d, .y=0xf8, .sp=0x2e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0xb0}, {.addr=0x9d10, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9d10, .value=0xe6, .type=IO_READ},
        {.addr=0x9d11, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0124) {
    const struct CPU_State initial_cpu = {.pc=0xc56b, .a=0xbb, .x=0xc3, .y=0x75, .sp=0xba, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x18}, {.addr=0xc56b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc56c, .a=0x18, .x=0xc3, .y=0x75, .sp=0xba, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x18}, {.addr=0xc56b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc56b, .value=0xe6, .type=IO_READ},
        {.addr=0xc56c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0125) {
    const struct CPU_State initial_cpu = {.pc=0xc111, .a=0x07, .x=0x6e, .y=0xcf, .sp=0xc6, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xba}, {.addr=0xc111, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc112, .a=0xba, .x=0x6e, .y=0xcf, .sp=0xc6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xba}, {.addr=0xc111, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc111, .value=0xe6, .type=IO_READ},
        {.addr=0xc112, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0126) {
    const struct CPU_State initial_cpu = {.pc=0xbb1e, .a=0x63, .x=0xd3, .y=0xb7, .sp=0x7b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xe3}, {.addr=0xbb1e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbb1f, .a=0xe3, .x=0xd3, .y=0xb7, .sp=0x7b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xe3}, {.addr=0xbb1e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbb1e, .value=0xe6, .type=IO_READ},
        {.addr=0xbb1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0127) {
    const struct CPU_State initial_cpu = {.pc=0xf82f, .a=0x3f, .x=0xb1, .y=0xb9, .sp=0xd6, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x17}, {.addr=0xf82f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf830, .a=0x17, .x=0xb1, .y=0xb9, .sp=0xd6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x17}, {.addr=0xf82f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf82f, .value=0xe6, .type=IO_READ},
        {.addr=0xf830, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0128) {
    const struct CPU_State initial_cpu = {.pc=0x2e07, .a=0x83, .x=0xc5, .y=0x7d, .sp=0xdd, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xa5}, {.addr=0x2e07, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2e08, .a=0xa5, .x=0xc5, .y=0x7d, .sp=0xdd, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xa5}, {.addr=0x2e07, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2e07, .value=0xe6, .type=IO_READ},
        {.addr=0x2e08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0129) {
    const struct CPU_State initial_cpu = {.pc=0xbd17, .a=0x0f, .x=0xea, .y=0x84, .sp=0xf9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xc2}, {.addr=0xbd17, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbd18, .a=0xc2, .x=0xea, .y=0x84, .sp=0xf9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xc2}, {.addr=0xbd17, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbd17, .value=0xe6, .type=IO_READ},
        {.addr=0xbd18, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_012A) {
    const struct CPU_State initial_cpu = {.pc=0x939b, .a=0x68, .x=0xe0, .y=0x03, .sp=0xfe, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x94}, {.addr=0x939b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x939c, .a=0x94, .x=0xe0, .y=0x03, .sp=0xfe, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x94}, {.addr=0x939b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x939b, .value=0xe6, .type=IO_READ},
        {.addr=0x939c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_012B) {
    const struct CPU_State initial_cpu = {.pc=0x1dbf, .a=0xfe, .x=0x6d, .y=0x8d, .sp=0x1e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0xeb}, {.addr=0x1dbf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1dc0, .a=0xeb, .x=0x6d, .y=0x8d, .sp=0x1e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0xeb}, {.addr=0x1dbf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1dbf, .value=0xe6, .type=IO_READ},
        {.addr=0x1dc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_012C) {
    const struct CPU_State initial_cpu = {.pc=0xd793, .a=0xd9, .x=0x61, .y=0x25, .sp=0x5e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xea}, {.addr=0xd793, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd794, .a=0xea, .x=0x61, .y=0x25, .sp=0x5e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xea}, {.addr=0xd793, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd793, .value=0xe6, .type=IO_READ},
        {.addr=0xd794, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_012D) {
    const struct CPU_State initial_cpu = {.pc=0x3e75, .a=0x6e, .x=0x59, .y=0x3d, .sp=0xd3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x53}, {.addr=0x3e75, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3e76, .a=0x53, .x=0x59, .y=0x3d, .sp=0xd3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x53}, {.addr=0x3e75, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3e75, .value=0xe6, .type=IO_READ},
        {.addr=0x3e76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_012E) {
    const struct CPU_State initial_cpu = {.pc=0x22f6, .a=0x4c, .x=0x81, .y=0x79, .sp=0x29, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xd6}, {.addr=0x22f6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x22f7, .a=0xd6, .x=0x81, .y=0x79, .sp=0x29, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xd6}, {.addr=0x22f6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x22f6, .value=0xe6, .type=IO_READ},
        {.addr=0x22f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_012F) {
    const struct CPU_State initial_cpu = {.pc=0xd69f, .a=0xe4, .x=0x93, .y=0xf9, .sp=0x2c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x2f}, {.addr=0xd69f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd6a0, .a=0x2f, .x=0x93, .y=0xf9, .sp=0x2c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x2f}, {.addr=0xd69f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd69f, .value=0xe6, .type=IO_READ},
        {.addr=0xd6a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0130) {
    const struct CPU_State initial_cpu = {.pc=0xb753, .a=0xc9, .x=0x6e, .y=0xd0, .sp=0x7e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xde}, {.addr=0xb753, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb754, .a=0xde, .x=0x6e, .y=0xd0, .sp=0x7e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xde}, {.addr=0xb753, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb753, .value=0xe6, .type=IO_READ},
        {.addr=0xb754, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0131) {
    const struct CPU_State initial_cpu = {.pc=0xefbc, .a=0xe9, .x=0xe9, .y=0x11, .sp=0x7e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x87}, {.addr=0xefbc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xefbd, .a=0x87, .x=0xe9, .y=0x11, .sp=0x7e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x87}, {.addr=0xefbc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xefbc, .value=0xe6, .type=IO_READ},
        {.addr=0xefbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0132) {
    const struct CPU_State initial_cpu = {.pc=0xb77a, .a=0x36, .x=0x30, .y=0x9c, .sp=0x55, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x61}, {.addr=0xb77a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb77b, .a=0x61, .x=0x30, .y=0x9c, .sp=0x55, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x61}, {.addr=0xb77a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb77a, .value=0xe6, .type=IO_READ},
        {.addr=0xb77b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0133) {
    const struct CPU_State initial_cpu = {.pc=0xc27a, .a=0x84, .x=0x77, .y=0x91, .sp=0x47, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x25}, {.addr=0xc27a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc27b, .a=0x25, .x=0x77, .y=0x91, .sp=0x47, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x25}, {.addr=0xc27a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc27a, .value=0xe6, .type=IO_READ},
        {.addr=0xc27b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0134) {
    const struct CPU_State initial_cpu = {.pc=0x5789, .a=0x2b, .x=0xe4, .y=0xd4, .sp=0xa6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x86}, {.addr=0x5789, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x578a, .a=0x86, .x=0xe4, .y=0xd4, .sp=0xa6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x86}, {.addr=0x5789, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5789, .value=0xe6, .type=IO_READ},
        {.addr=0x578a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0135) {
    const struct CPU_State initial_cpu = {.pc=0xc716, .a=0xb4, .x=0x56, .y=0xab, .sp=0xaa, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xa6}, {.addr=0xc716, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc717, .a=0xa6, .x=0x56, .y=0xab, .sp=0xaa, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xa6}, {.addr=0xc716, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc716, .value=0xe6, .type=IO_READ},
        {.addr=0xc717, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0136) {
    const struct CPU_State initial_cpu = {.pc=0x0e14, .a=0xe3, .x=0xa8, .y=0xfe, .sp=0x7f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xa6}, {.addr=0x0e14, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0e15, .a=0xa6, .x=0xa8, .y=0xfe, .sp=0x7f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xa6}, {.addr=0x0e14, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0e14, .value=0xe6, .type=IO_READ},
        {.addr=0x0e15, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0137) {
    const struct CPU_State initial_cpu = {.pc=0x538c, .a=0x03, .x=0x97, .y=0x18, .sp=0x02, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x65}, {.addr=0x538c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x538d, .a=0x65, .x=0x97, .y=0x18, .sp=0x02, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x65}, {.addr=0x538c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x538c, .value=0xe6, .type=IO_READ},
        {.addr=0x538d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0138) {
    const struct CPU_State initial_cpu = {.pc=0x7541, .a=0x17, .x=0xce, .y=0xd4, .sp=0xef, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x35}, {.addr=0x7541, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7542, .a=0x35, .x=0xce, .y=0xd4, .sp=0xef, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x35}, {.addr=0x7541, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7541, .value=0xe6, .type=IO_READ},
        {.addr=0x7542, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0139) {
    const struct CPU_State initial_cpu = {.pc=0xac10, .a=0xd8, .x=0x6a, .y=0xff, .sp=0x9d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x70}, {.addr=0xac10, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xac11, .a=0x70, .x=0x6a, .y=0xff, .sp=0x9d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x70}, {.addr=0xac10, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xac10, .value=0xe6, .type=IO_READ},
        {.addr=0xac11, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_013B) {
    const struct CPU_State initial_cpu = {.pc=0x0943, .a=0x51, .x=0x74, .y=0xa9, .sp=0x7e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x7b}, {.addr=0x0943, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0944, .a=0x7b, .x=0x74, .y=0xa9, .sp=0x7e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x7b}, {.addr=0x0943, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0943, .value=0xe6, .type=IO_READ},
        {.addr=0x0944, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_013C) {
    const struct CPU_State initial_cpu = {.pc=0x1ea8, .a=0xc4, .x=0x41, .y=0xcd, .sp=0x03, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x90}, {.addr=0x1ea8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1ea9, .a=0x90, .x=0x41, .y=0xcd, .sp=0x03, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x90}, {.addr=0x1ea8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1ea8, .value=0xe6, .type=IO_READ},
        {.addr=0x1ea9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_013D) {
    const struct CPU_State initial_cpu = {.pc=0xed46, .a=0x07, .x=0x25, .y=0x85, .sp=0xb5, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xe5}, {.addr=0xed46, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xed47, .a=0xe5, .x=0x25, .y=0x85, .sp=0xb5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xe5}, {.addr=0xed46, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xed46, .value=0xe6, .type=IO_READ},
        {.addr=0xed47, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_013E) {
    const struct CPU_State initial_cpu = {.pc=0x03bd, .a=0xb0, .x=0x08, .y=0x7e, .sp=0x4e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xc2}, {.addr=0x03bd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x03be, .a=0xc2, .x=0x08, .y=0x7e, .sp=0x4e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xc2}, {.addr=0x03bd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x03bd, .value=0xe6, .type=IO_READ},
        {.addr=0x03be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_013F) {
    const struct CPU_State initial_cpu = {.pc=0x2672, .a=0x7e, .x=0xaf, .y=0x25, .sp=0xca, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x4c}, {.addr=0x2672, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2673, .a=0x4c, .x=0xaf, .y=0x25, .sp=0xca, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x4c}, {.addr=0x2672, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2672, .value=0xe6, .type=IO_READ},
        {.addr=0x2673, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0140) {
    const struct CPU_State initial_cpu = {.pc=0xd4a4, .a=0x2b, .x=0x05, .y=0x78, .sp=0x67, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xf2}, {.addr=0xd4a4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd4a5, .a=0xf2, .x=0x05, .y=0x78, .sp=0x67, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xf2}, {.addr=0xd4a4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd4a4, .value=0xe6, .type=IO_READ},
        {.addr=0xd4a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0141) {
    const struct CPU_State initial_cpu = {.pc=0xbe02, .a=0x2d, .x=0x23, .y=0xca, .sp=0xb2, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x9b}, {.addr=0xbe02, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbe03, .a=0x9b, .x=0x23, .y=0xca, .sp=0xb2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x9b}, {.addr=0xbe02, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbe02, .value=0xe6, .type=IO_READ},
        {.addr=0xbe03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0142) {
    const struct CPU_State initial_cpu = {.pc=0xc5d3, .a=0x63, .x=0xf0, .y=0xba, .sp=0x1d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x36}, {.addr=0xc5d3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc5d4, .a=0x36, .x=0xf0, .y=0xba, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x36}, {.addr=0xc5d3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc5d3, .value=0xe6, .type=IO_READ},
        {.addr=0xc5d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8780, .a=0x6b, .x=0x9d, .y=0xa2, .sp=0x5b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xb2}, {.addr=0x8780, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8781, .a=0xb2, .x=0x9d, .y=0xa2, .sp=0x5b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xb2}, {.addr=0x8780, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8780, .value=0xe6, .type=IO_READ},
        {.addr=0x8781, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0144) {
    const struct CPU_State initial_cpu = {.pc=0xac15, .a=0x1a, .x=0xf7, .y=0x1c, .sp=0x62, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xc0}, {.addr=0xac15, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xac16, .a=0xc0, .x=0xf7, .y=0x1c, .sp=0x62, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xc0}, {.addr=0xac15, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xac15, .value=0xe6, .type=IO_READ},
        {.addr=0xac16, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0145) {
    const struct CPU_State initial_cpu = {.pc=0xcf93, .a=0x05, .x=0x1b, .y=0x5c, .sp=0xc6, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x58}, {.addr=0xcf93, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcf94, .a=0x58, .x=0x1b, .y=0x5c, .sp=0xc6, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x58}, {.addr=0xcf93, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcf93, .value=0xe6, .type=IO_READ},
        {.addr=0xcf94, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0146) {
    const struct CPU_State initial_cpu = {.pc=0xa9e3, .a=0x5f, .x=0x43, .y=0xc0, .sp=0x48, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x67}, {.addr=0xa9e3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa9e4, .a=0x67, .x=0x43, .y=0xc0, .sp=0x48, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x67}, {.addr=0xa9e3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa9e3, .value=0xe6, .type=IO_READ},
        {.addr=0xa9e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0147) {
    const struct CPU_State initial_cpu = {.pc=0x503a, .a=0xf2, .x=0x35, .y=0x8d, .sp=0x05, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x9c}, {.addr=0x503a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x503b, .a=0x9c, .x=0x35, .y=0x8d, .sp=0x05, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x9c}, {.addr=0x503a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x503a, .value=0xe6, .type=IO_READ},
        {.addr=0x503b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0148) {
    const struct CPU_State initial_cpu = {.pc=0x2ae1, .a=0xc5, .x=0x91, .y=0xc1, .sp=0x0e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x93}, {.addr=0x2ae1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ae2, .a=0x93, .x=0x91, .y=0xc1, .sp=0x0e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x93}, {.addr=0x2ae1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ae1, .value=0xe6, .type=IO_READ},
        {.addr=0x2ae2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1913, .a=0xe0, .x=0x8e, .y=0x0f, .sp=0x08, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x91}, {.addr=0x1913, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1914, .a=0x91, .x=0x8e, .y=0x0f, .sp=0x08, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x91}, {.addr=0x1913, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1913, .value=0xe6, .type=IO_READ},
        {.addr=0x1914, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_014A) {
    const struct CPU_State initial_cpu = {.pc=0x237c, .a=0x08, .x=0xa0, .y=0xff, .sp=0x2b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xce}, {.addr=0x237c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x237d, .a=0xce, .x=0xa0, .y=0xff, .sp=0x2b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xce}, {.addr=0x237c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x237c, .value=0xe6, .type=IO_READ},
        {.addr=0x237d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_014B) {
    const struct CPU_State initial_cpu = {.pc=0x0b63, .a=0x91, .x=0xb7, .y=0x82, .sp=0xc2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x3e}, {.addr=0x0b63, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0b64, .a=0x3e, .x=0xb7, .y=0x82, .sp=0xc2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x3e}, {.addr=0x0b63, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0b63, .value=0xe6, .type=IO_READ},
        {.addr=0x0b64, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_014C) {
    const struct CPU_State initial_cpu = {.pc=0xa05c, .a=0x7b, .x=0xd1, .y=0x30, .sp=0x51, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x7c}, {.addr=0xa05c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa05d, .a=0x7c, .x=0xd1, .y=0x30, .sp=0x51, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x7c}, {.addr=0xa05c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa05c, .value=0xe6, .type=IO_READ},
        {.addr=0xa05d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_014D) {
    const struct CPU_State initial_cpu = {.pc=0x5f3e, .a=0x1b, .x=0x4a, .y=0x85, .sp=0xcc, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xea}, {.addr=0x5f3e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f3f, .a=0xea, .x=0x4a, .y=0x85, .sp=0xcc, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xea}, {.addr=0x5f3e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f3e, .value=0xe6, .type=IO_READ},
        {.addr=0x5f3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_014E) {
    const struct CPU_State initial_cpu = {.pc=0x9f5a, .a=0x81, .x=0x6d, .y=0x77, .sp=0xc3, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x31}, {.addr=0x9f5a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9f5b, .a=0x31, .x=0x6d, .y=0x77, .sp=0xc3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x31}, {.addr=0x9f5a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9f5a, .value=0xe6, .type=IO_READ},
        {.addr=0x9f5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_014F) {
    const struct CPU_State initial_cpu = {.pc=0xe997, .a=0x76, .x=0xa6, .y=0xb4, .sp=0x1c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x33}, {.addr=0xe997, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe998, .a=0x33, .x=0xa6, .y=0xb4, .sp=0x1c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x33}, {.addr=0xe997, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe997, .value=0xe6, .type=IO_READ},
        {.addr=0xe998, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0150) {
    const struct CPU_State initial_cpu = {.pc=0x686d, .a=0x0c, .x=0x10, .y=0x18, .sp=0x58, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x6e}, {.addr=0x686d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x686e, .a=0x6e, .x=0x10, .y=0x18, .sp=0x58, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x6e}, {.addr=0x686d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x686d, .value=0xe6, .type=IO_READ},
        {.addr=0x686e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0151) {
    const struct CPU_State initial_cpu = {.pc=0x3616, .a=0x4f, .x=0x69, .y=0x17, .sp=0xe9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x2a}, {.addr=0x3616, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3617, .a=0x2a, .x=0x69, .y=0x17, .sp=0xe9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x2a}, {.addr=0x3616, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3616, .value=0xe6, .type=IO_READ},
        {.addr=0x3617, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0152) {
    const struct CPU_State initial_cpu = {.pc=0xef5b, .a=0xfc, .x=0x41, .y=0x7f, .sp=0xe9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x02}, {.addr=0xef5b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xef5c, .a=0x02, .x=0x41, .y=0x7f, .sp=0xe9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x02}, {.addr=0xef5b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xef5b, .value=0xe6, .type=IO_READ},
        {.addr=0xef5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0153) {
    const struct CPU_State initial_cpu = {.pc=0xb3c9, .a=0xbb, .x=0x4b, .y=0xfc, .sp=0xd9, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xb9}, {.addr=0xb3c9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb3ca, .a=0xb9, .x=0x4b, .y=0xfc, .sp=0xd9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xb9}, {.addr=0xb3c9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb3c9, .value=0xe6, .type=IO_READ},
        {.addr=0xb3ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0154) {
    const struct CPU_State initial_cpu = {.pc=0xf542, .a=0x05, .x=0x66, .y=0x43, .sp=0xf2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x01}, {.addr=0xf542, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf543, .a=0x01, .x=0x66, .y=0x43, .sp=0xf2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x01}, {.addr=0xf542, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf542, .value=0xe6, .type=IO_READ},
        {.addr=0xf543, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0155) {
    const struct CPU_State initial_cpu = {.pc=0x97fb, .a=0xa3, .x=0xfd, .y=0xf2, .sp=0x99, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x84}, {.addr=0x97fb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x97fc, .a=0x84, .x=0xfd, .y=0xf2, .sp=0x99, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x84}, {.addr=0x97fb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x97fb, .value=0xe6, .type=IO_READ},
        {.addr=0x97fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0156) {
    const struct CPU_State initial_cpu = {.pc=0xbdeb, .a=0xa8, .x=0x78, .y=0x8a, .sp=0xf3, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x41}, {.addr=0xbdeb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbdec, .a=0x41, .x=0x78, .y=0x8a, .sp=0xf3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x41}, {.addr=0xbdeb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbdeb, .value=0xe6, .type=IO_READ},
        {.addr=0xbdec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0157) {
    const struct CPU_State initial_cpu = {.pc=0xdc30, .a=0x74, .x=0x90, .y=0x26, .sp=0x61, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x4d}, {.addr=0xdc30, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdc31, .a=0x4d, .x=0x90, .y=0x26, .sp=0x61, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x4d}, {.addr=0xdc30, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdc30, .value=0xe6, .type=IO_READ},
        {.addr=0xdc31, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0158) {
    const struct CPU_State initial_cpu = {.pc=0x45dc, .a=0x57, .x=0xfa, .y=0xa0, .sp=0x25, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x33}, {.addr=0x45dc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x45dd, .a=0x33, .x=0xfa, .y=0xa0, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x33}, {.addr=0x45dc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x45dc, .value=0xe6, .type=IO_READ},
        {.addr=0x45dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0159) {
    const struct CPU_State initial_cpu = {.pc=0x36ef, .a=0xa9, .x=0x33, .y=0x50, .sp=0xb6, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x31}, {.addr=0x36ef, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x36f0, .a=0x31, .x=0x33, .y=0x50, .sp=0xb6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x31}, {.addr=0x36ef, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x36ef, .value=0xe6, .type=IO_READ},
        {.addr=0x36f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_015A) {
    const struct CPU_State initial_cpu = {.pc=0x45b7, .a=0x8c, .x=0x8e, .y=0xe7, .sp=0xbd, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xf7}, {.addr=0x45b7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x45b8, .a=0xf7, .x=0x8e, .y=0xe7, .sp=0xbd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xf7}, {.addr=0x45b7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x45b7, .value=0xe6, .type=IO_READ},
        {.addr=0x45b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_015B) {
    const struct CPU_State initial_cpu = {.pc=0xcc8f, .a=0x18, .x=0xc0, .y=0x23, .sp=0xf2, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x38}, {.addr=0xcc8f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcc90, .a=0x38, .x=0xc0, .y=0x23, .sp=0xf2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x38}, {.addr=0xcc8f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcc8f, .value=0xe6, .type=IO_READ},
        {.addr=0xcc90, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_015C) {
    const struct CPU_State initial_cpu = {.pc=0xd87c, .a=0x1c, .x=0x42, .y=0x36, .sp=0xb3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xa5}, {.addr=0xd87c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd87d, .a=0xa5, .x=0x42, .y=0x36, .sp=0xb3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xa5}, {.addr=0xd87c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd87c, .value=0xe6, .type=IO_READ},
        {.addr=0xd87d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_015D) {
    const struct CPU_State initial_cpu = {.pc=0x57a6, .a=0x57, .x=0x4d, .y=0xe6, .sp=0x04, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xbf}, {.addr=0x57a6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x57a7, .a=0xbf, .x=0x4d, .y=0xe6, .sp=0x04, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xbf}, {.addr=0x57a6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x57a6, .value=0xe6, .type=IO_READ},
        {.addr=0x57a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_015E) {
    const struct CPU_State initial_cpu = {.pc=0xd3ea, .a=0xd9, .x=0xd9, .y=0xa3, .sp=0x55, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x24}, {.addr=0xd3ea, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd3eb, .a=0x24, .x=0xd9, .y=0xa3, .sp=0x55, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x24}, {.addr=0xd3ea, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd3ea, .value=0xe6, .type=IO_READ},
        {.addr=0xd3eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_015F) {
    const struct CPU_State initial_cpu = {.pc=0x3002, .a=0x76, .x=0x00, .y=0x26, .sp=0xd0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0xac}, {.addr=0x3002, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3003, .a=0xac, .x=0x00, .y=0x26, .sp=0xd0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xac}, {.addr=0x3002, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3002, .value=0xe6, .type=IO_READ},
        {.addr=0x3003, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0160) {
    const struct CPU_State initial_cpu = {.pc=0x6b98, .a=0x05, .x=0x3c, .y=0x42, .sp=0xac, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x64}, {.addr=0x6b98, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6b99, .a=0x64, .x=0x3c, .y=0x42, .sp=0xac, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x64}, {.addr=0x6b98, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6b98, .value=0xe6, .type=IO_READ},
        {.addr=0x6b99, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0161) {
    const struct CPU_State initial_cpu = {.pc=0x1c8e, .a=0xdc, .x=0x44, .y=0x26, .sp=0xf1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xcf}, {.addr=0x1c8e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1c8f, .a=0xcf, .x=0x44, .y=0x26, .sp=0xf1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xcf}, {.addr=0x1c8e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1c8e, .value=0xe6, .type=IO_READ},
        {.addr=0x1c8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0162) {
    const struct CPU_State initial_cpu = {.pc=0x2231, .a=0xfc, .x=0x60, .y=0xbc, .sp=0x72, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x67}, {.addr=0x2231, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2232, .a=0x67, .x=0x60, .y=0xbc, .sp=0x72, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x67}, {.addr=0x2231, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2231, .value=0xe6, .type=IO_READ},
        {.addr=0x2232, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0163) {
    const struct CPU_State initial_cpu = {.pc=0x95ca, .a=0x1f, .x=0xd8, .y=0x12, .sp=0x61, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x98}, {.addr=0x95ca, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x95cb, .a=0x98, .x=0xd8, .y=0x12, .sp=0x61, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x98}, {.addr=0x95ca, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x95ca, .value=0xe6, .type=IO_READ},
        {.addr=0x95cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0164) {
    const struct CPU_State initial_cpu = {.pc=0x75fe, .a=0x72, .x=0xbd, .y=0xaf, .sp=0xfb, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x61}, {.addr=0x75fe, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x75ff, .a=0x61, .x=0xbd, .y=0xaf, .sp=0xfb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x61}, {.addr=0x75fe, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x75fe, .value=0xe6, .type=IO_READ},
        {.addr=0x75ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0165) {
    const struct CPU_State initial_cpu = {.pc=0x7878, .a=0x48, .x=0x60, .y=0x31, .sp=0x3c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x45}, {.addr=0x7878, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7879, .a=0x45, .x=0x60, .y=0x31, .sp=0x3c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x45}, {.addr=0x7878, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7878, .value=0xe6, .type=IO_READ},
        {.addr=0x7879, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0166) {
    const struct CPU_State initial_cpu = {.pc=0x7968, .a=0x28, .x=0xe2, .y=0xbe, .sp=0x41, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x6f}, {.addr=0x7968, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7969, .a=0x6f, .x=0xe2, .y=0xbe, .sp=0x41, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x6f}, {.addr=0x7968, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7968, .value=0xe6, .type=IO_READ},
        {.addr=0x7969, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0167) {
    const struct CPU_State initial_cpu = {.pc=0x98ea, .a=0x4c, .x=0x5d, .y=0x5b, .sp=0x63, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x3a}, {.addr=0x98ea, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x98eb, .a=0x3a, .x=0x5d, .y=0x5b, .sp=0x63, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x3a}, {.addr=0x98ea, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x98ea, .value=0xe6, .type=IO_READ},
        {.addr=0x98eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0168) {
    const struct CPU_State initial_cpu = {.pc=0x992e, .a=0x88, .x=0xc4, .y=0x4d, .sp=0xe9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x3d}, {.addr=0x992e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x992f, .a=0x3d, .x=0xc4, .y=0x4d, .sp=0xe9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x3d}, {.addr=0x992e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x992e, .value=0xe6, .type=IO_READ},
        {.addr=0x992f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_016A) {
    const struct CPU_State initial_cpu = {.pc=0x148b, .a=0x02, .x=0x48, .y=0x3c, .sp=0x8d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x6c}, {.addr=0x148b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x148c, .a=0x6c, .x=0x48, .y=0x3c, .sp=0x8d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x6c}, {.addr=0x148b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x148b, .value=0xe6, .type=IO_READ},
        {.addr=0x148c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_016B) {
    const struct CPU_State initial_cpu = {.pc=0x4850, .a=0x01, .x=0x32, .y=0x1b, .sp=0xf4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0xa1}, {.addr=0x4850, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4851, .a=0xa1, .x=0x32, .y=0x1b, .sp=0xf4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xa1}, {.addr=0x4850, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4850, .value=0xe6, .type=IO_READ},
        {.addr=0x4851, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_016C) {
    const struct CPU_State initial_cpu = {.pc=0xe5cd, .a=0x70, .x=0xca, .y=0x5b, .sp=0xd4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x01}, {.addr=0xe5cd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe5ce, .a=0x01, .x=0xca, .y=0x5b, .sp=0xd4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x01}, {.addr=0xe5cd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe5cd, .value=0xe6, .type=IO_READ},
        {.addr=0xe5ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_016D) {
    const struct CPU_State initial_cpu = {.pc=0x16c0, .a=0xc9, .x=0x9a, .y=0x42, .sp=0x1e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x6c}, {.addr=0x16c0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x16c1, .a=0x6c, .x=0x9a, .y=0x42, .sp=0x1e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x6c}, {.addr=0x16c0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x16c0, .value=0xe6, .type=IO_READ},
        {.addr=0x16c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_016E) {
    const struct CPU_State initial_cpu = {.pc=0x5f59, .a=0x21, .x=0x8b, .y=0xb6, .sp=0x04, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xf4}, {.addr=0x5f59, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f5a, .a=0xf4, .x=0x8b, .y=0xb6, .sp=0x04, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xf4}, {.addr=0x5f59, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f59, .value=0xe6, .type=IO_READ},
        {.addr=0x5f5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_016F) {
    const struct CPU_State initial_cpu = {.pc=0xfe8c, .a=0x8b, .x=0x35, .y=0x7a, .sp=0xb5, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xa8}, {.addr=0xfe8c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfe8d, .a=0xa8, .x=0x35, .y=0x7a, .sp=0xb5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0xa8}, {.addr=0xfe8c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfe8c, .value=0xe6, .type=IO_READ},
        {.addr=0xfe8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0170) {
    const struct CPU_State initial_cpu = {.pc=0xfa0b, .a=0xce, .x=0x01, .y=0x9a, .sp=0xa1, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xa4}, {.addr=0xfa0b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfa0c, .a=0xa4, .x=0x01, .y=0x9a, .sp=0xa1, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xa4}, {.addr=0xfa0b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfa0b, .value=0xe6, .type=IO_READ},
        {.addr=0xfa0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0171) {
    const struct CPU_State initial_cpu = {.pc=0x0390, .a=0x34, .x=0x5b, .y=0xd0, .sp=0x01, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xc0}, {.addr=0x0390, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0391, .a=0xc0, .x=0x5b, .y=0xd0, .sp=0x01, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xc0}, {.addr=0x0390, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0390, .value=0xe6, .type=IO_READ},
        {.addr=0x0391, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0172) {
    const struct CPU_State initial_cpu = {.pc=0x11e4, .a=0x15, .x=0x64, .y=0xdb, .sp=0x54, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0xb2}, {.addr=0x11e4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x11e5, .a=0xb2, .x=0x64, .y=0xdb, .sp=0x54, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0xb2}, {.addr=0x11e4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x11e4, .value=0xe6, .type=IO_READ},
        {.addr=0x11e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0173) {
    const struct CPU_State initial_cpu = {.pc=0xe9b6, .a=0x13, .x=0x8b, .y=0x27, .sp=0xec, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x92}, {.addr=0xe9b6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe9b7, .a=0x92, .x=0x8b, .y=0x27, .sp=0xec, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x92}, {.addr=0xe9b6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe9b6, .value=0xe6, .type=IO_READ},
        {.addr=0xe9b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0174) {
    const struct CPU_State initial_cpu = {.pc=0x3b83, .a=0xcb, .x=0xab, .y=0x0c, .sp=0x01, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xab}, {.addr=0x3b83, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3b84, .a=0xab, .x=0xab, .y=0x0c, .sp=0x01, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xab}, {.addr=0x3b83, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3b83, .value=0xe6, .type=IO_READ},
        {.addr=0x3b84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8903, .a=0x43, .x=0x28, .y=0x38, .sp=0x08, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xb4}, {.addr=0x8903, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8904, .a=0xb4, .x=0x28, .y=0x38, .sp=0x08, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xb4}, {.addr=0x8903, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8903, .value=0xe6, .type=IO_READ},
        {.addr=0x8904, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1531, .a=0x32, .x=0x02, .y=0x9f, .sp=0x01, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xe8}, {.addr=0x1531, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1532, .a=0xe8, .x=0x02, .y=0x9f, .sp=0x01, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xe8}, {.addr=0x1531, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1531, .value=0xe6, .type=IO_READ},
        {.addr=0x1532, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0177) {
    const struct CPU_State initial_cpu = {.pc=0x27d8, .a=0xfa, .x=0xa0, .y=0xa7, .sp=0x8a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xdf}, {.addr=0x27d8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x27d9, .a=0xdf, .x=0xa0, .y=0xa7, .sp=0x8a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xdf}, {.addr=0x27d8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x27d8, .value=0xe6, .type=IO_READ},
        {.addr=0x27d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0178) {
    const struct CPU_State initial_cpu = {.pc=0xdee0, .a=0x13, .x=0x81, .y=0x50, .sp=0xc1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x49}, {.addr=0xdee0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdee1, .a=0x49, .x=0x81, .y=0x50, .sp=0xc1, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x49}, {.addr=0xdee0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdee0, .value=0xe6, .type=IO_READ},
        {.addr=0xdee1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0179) {
    const struct CPU_State initial_cpu = {.pc=0xa931, .a=0xca, .x=0x00, .y=0xee, .sp=0xf7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xa5}, {.addr=0xa931, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa932, .a=0xa5, .x=0x00, .y=0xee, .sp=0xf7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xa5}, {.addr=0xa931, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa931, .value=0xe6, .type=IO_READ},
        {.addr=0xa932, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_017A) {
    const struct CPU_State initial_cpu = {.pc=0x741d, .a=0x18, .x=0x82, .y=0x0d, .sp=0x7d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xd1}, {.addr=0x741d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x741e, .a=0xd1, .x=0x82, .y=0x0d, .sp=0x7d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xd1}, {.addr=0x741d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x741d, .value=0xe6, .type=IO_READ},
        {.addr=0x741e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_017B) {
    const struct CPU_State initial_cpu = {.pc=0x39dd, .a=0x5d, .x=0xe3, .y=0x61, .sp=0xee, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x45}, {.addr=0x39dd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x39de, .a=0x45, .x=0xe3, .y=0x61, .sp=0xee, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x45}, {.addr=0x39dd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x39dd, .value=0xe6, .type=IO_READ},
        {.addr=0x39de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_017C) {
    const struct CPU_State initial_cpu = {.pc=0x1c86, .a=0xe5, .x=0x63, .y=0x89, .sp=0x19, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x5d}, {.addr=0x1c86, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1c87, .a=0x5d, .x=0x63, .y=0x89, .sp=0x19, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x5d}, {.addr=0x1c86, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1c86, .value=0xe6, .type=IO_READ},
        {.addr=0x1c87, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_017D) {
    const struct CPU_State initial_cpu = {.pc=0x6065, .a=0xd2, .x=0x45, .y=0x56, .sp=0xd7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0xfe}, {.addr=0x6065, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6066, .a=0xfe, .x=0x45, .y=0x56, .sp=0xd7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0xfe}, {.addr=0x6065, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6065, .value=0xe6, .type=IO_READ},
        {.addr=0x6066, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_017E) {
    const struct CPU_State initial_cpu = {.pc=0xe2d4, .a=0x44, .x=0x81, .y=0x08, .sp=0x8d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0xb1}, {.addr=0xe2d4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe2d5, .a=0xb1, .x=0x81, .y=0x08, .sp=0x8d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xb1}, {.addr=0xe2d4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe2d4, .value=0xe6, .type=IO_READ},
        {.addr=0xe2d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_017F) {
    const struct CPU_State initial_cpu = {.pc=0xdc2e, .a=0xe9, .x=0x6c, .y=0x34, .sp=0xb2, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xdb}, {.addr=0xdc2e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdc2f, .a=0xdb, .x=0x6c, .y=0x34, .sp=0xb2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xdb}, {.addr=0xdc2e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdc2e, .value=0xe6, .type=IO_READ},
        {.addr=0xdc2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0180) {
    const struct CPU_State initial_cpu = {.pc=0x071f, .a=0xff, .x=0x56, .y=0x98, .sp=0xe8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x76}, {.addr=0x071f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0720, .a=0x76, .x=0x56, .y=0x98, .sp=0xe8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x76}, {.addr=0x071f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x071f, .value=0xe6, .type=IO_READ},
        {.addr=0x0720, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0181) {
    const struct CPU_State initial_cpu = {.pc=0x4249, .a=0xe2, .x=0xbe, .y=0xce, .sp=0x3c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xc9}, {.addr=0x4249, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x424a, .a=0xc9, .x=0xbe, .y=0xce, .sp=0x3c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xc9}, {.addr=0x4249, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4249, .value=0xe6, .type=IO_READ},
        {.addr=0x424a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0182) {
    const struct CPU_State initial_cpu = {.pc=0xfc7e, .a=0x0c, .x=0xc8, .y=0x4b, .sp=0xf2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0xa7}, {.addr=0xfc7e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfc7f, .a=0xa7, .x=0xc8, .y=0x4b, .sp=0xf2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0xa7}, {.addr=0xfc7e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfc7e, .value=0xe6, .type=IO_READ},
        {.addr=0xfc7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0183) {
    const struct CPU_State initial_cpu = {.pc=0x4ee7, .a=0x96, .x=0x80, .y=0x75, .sp=0x69, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xee}, {.addr=0x4ee7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4ee8, .a=0xee, .x=0x80, .y=0x75, .sp=0x69, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xee}, {.addr=0x4ee7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4ee7, .value=0xe6, .type=IO_READ},
        {.addr=0x4ee8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0184) {
    const struct CPU_State initial_cpu = {.pc=0x4259, .a=0x39, .x=0xd2, .y=0xd8, .sp=0xe4, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x12}, {.addr=0x4259, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x425a, .a=0x12, .x=0xd2, .y=0xd8, .sp=0xe4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x12}, {.addr=0x4259, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4259, .value=0xe6, .type=IO_READ},
        {.addr=0x425a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0185) {
    const struct CPU_State initial_cpu = {.pc=0x9337, .a=0xc6, .x=0xd1, .y=0x46, .sp=0x75, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xb9}, {.addr=0x9337, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9338, .a=0xb9, .x=0xd1, .y=0x46, .sp=0x75, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb9}, {.addr=0x9337, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9337, .value=0xe6, .type=IO_READ},
        {.addr=0x9338, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0186) {
    const struct CPU_State initial_cpu = {.pc=0x814d, .a=0x65, .x=0x9f, .y=0x29, .sp=0xf8, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xba}, {.addr=0x814d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x814e, .a=0xba, .x=0x9f, .y=0x29, .sp=0xf8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xba}, {.addr=0x814d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x814d, .value=0xe6, .type=IO_READ},
        {.addr=0x814e, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0187) {
    const struct CPU_State initial_cpu = {.pc=0xa919, .a=0x88, .x=0x6d, .y=0x19, .sp=0x47, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x30}, {.addr=0xa919, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa91a, .a=0x30, .x=0x6d, .y=0x19, .sp=0x47, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x30}, {.addr=0xa919, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa919, .value=0xe6, .type=IO_READ},
        {.addr=0xa91a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0188) {
    const struct CPU_State initial_cpu = {.pc=0x424b, .a=0xbd, .x=0x6f, .y=0x92, .sp=0x15, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x13}, {.addr=0x424b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x424c, .a=0x13, .x=0x6f, .y=0x92, .sp=0x15, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x13}, {.addr=0x424b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x424b, .value=0xe6, .type=IO_READ},
        {.addr=0x424c, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0189) {
    const struct CPU_State initial_cpu = {.pc=0xf4f4, .a=0x78, .x=0xf1, .y=0xe0, .sp=0x16, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x05}, {.addr=0xf4f4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf4f5, .a=0x05, .x=0xf1, .y=0xe0, .sp=0x16, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x05}, {.addr=0xf4f4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf4f4, .value=0xe6, .type=IO_READ},
        {.addr=0xf4f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_018A) {
    const struct CPU_State initial_cpu = {.pc=0x783c, .a=0x4d, .x=0x73, .y=0x72, .sp=0x1b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x20}, {.addr=0x783c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x783d, .a=0x20, .x=0x73, .y=0x72, .sp=0x1b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x20}, {.addr=0x783c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x783c, .value=0xe6, .type=IO_READ},
        {.addr=0x783d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_018B) {
    const struct CPU_State initial_cpu = {.pc=0x4e0e, .a=0x1a, .x=0x86, .y=0x20, .sp=0xe9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x11}, {.addr=0x4e0e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4e0f, .a=0x11, .x=0x86, .y=0x20, .sp=0xe9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x11}, {.addr=0x4e0e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4e0e, .value=0xe6, .type=IO_READ},
        {.addr=0x4e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_018C) {
    const struct CPU_State initial_cpu = {.pc=0x580d, .a=0x35, .x=0xce, .y=0x14, .sp=0x0e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x1d}, {.addr=0x580d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x580e, .a=0x1d, .x=0xce, .y=0x14, .sp=0x0e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x1d}, {.addr=0x580d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x580d, .value=0xe6, .type=IO_READ},
        {.addr=0x580e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_018D) {
    const struct CPU_State initial_cpu = {.pc=0xac9d, .a=0x11, .x=0xe9, .y=0xa0, .sp=0xba, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x21}, {.addr=0xac9d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xac9e, .a=0x21, .x=0xe9, .y=0xa0, .sp=0xba, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x21}, {.addr=0xac9d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xac9d, .value=0xe6, .type=IO_READ},
        {.addr=0xac9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_018E) {
    const struct CPU_State initial_cpu = {.pc=0x0b7e, .a=0x0f, .x=0x0e, .y=0x7f, .sp=0xc1, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xf9}, {.addr=0x0b7e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0b7f, .a=0xf9, .x=0x0e, .y=0x7f, .sp=0xc1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xf9}, {.addr=0x0b7e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0b7e, .value=0xe6, .type=IO_READ},
        {.addr=0x0b7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_018F) {
    const struct CPU_State initial_cpu = {.pc=0xd377, .a=0xeb, .x=0x6e, .y=0x42, .sp=0xf8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x12}, {.addr=0xd377, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd378, .a=0x12, .x=0x6e, .y=0x42, .sp=0xf8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x12}, {.addr=0xd377, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd377, .value=0xe6, .type=IO_READ},
        {.addr=0xd378, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0190) {
    const struct CPU_State initial_cpu = {.pc=0x34bf, .a=0xa1, .x=0x97, .y=0xf7, .sp=0x72, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x3f}, {.addr=0x34bf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x34c0, .a=0x3f, .x=0x97, .y=0xf7, .sp=0x72, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x3f}, {.addr=0x34bf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x34bf, .value=0xe6, .type=IO_READ},
        {.addr=0x34c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0191) {
    const struct CPU_State initial_cpu = {.pc=0xad45, .a=0xbb, .x=0xaf, .y=0x78, .sp=0xcd, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x11}, {.addr=0xad45, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xad46, .a=0x11, .x=0xaf, .y=0x78, .sp=0xcd, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x11}, {.addr=0xad45, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xad45, .value=0xe6, .type=IO_READ},
        {.addr=0xad46, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0192) {
    const struct CPU_State initial_cpu = {.pc=0xbed0, .a=0x8f, .x=0x82, .y=0x97, .sp=0x5c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x72}, {.addr=0xbed0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbed1, .a=0x72, .x=0x82, .y=0x97, .sp=0x5c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x72}, {.addr=0xbed0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbed0, .value=0xe6, .type=IO_READ},
        {.addr=0xbed1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0193) {
    const struct CPU_State initial_cpu = {.pc=0x9567, .a=0xd5, .x=0x5e, .y=0x47, .sp=0x37, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x3d}, {.addr=0x9567, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9568, .a=0x3d, .x=0x5e, .y=0x47, .sp=0x37, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x3d}, {.addr=0x9567, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9567, .value=0xe6, .type=IO_READ},
        {.addr=0x9568, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0194) {
    const struct CPU_State initial_cpu = {.pc=0xcf3f, .a=0x40, .x=0x3c, .y=0xee, .sp=0x1e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x89}, {.addr=0xcf3f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcf40, .a=0x89, .x=0x3c, .y=0xee, .sp=0x1e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x89}, {.addr=0xcf3f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcf3f, .value=0xe6, .type=IO_READ},
        {.addr=0xcf40, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0195) {
    const struct CPU_State initial_cpu = {.pc=0xab0a, .a=0x58, .x=0x08, .y=0x79, .sp=0x9e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xd7}, {.addr=0xab0a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xab0b, .a=0xd7, .x=0x08, .y=0x79, .sp=0x9e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xd7}, {.addr=0xab0a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xab0a, .value=0xe6, .type=IO_READ},
        {.addr=0xab0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4319, .a=0x9f, .x=0xbf, .y=0x27, .sp=0x33, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x94}, {.addr=0x4319, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x431a, .a=0x94, .x=0xbf, .y=0x27, .sp=0x33, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x94}, {.addr=0x4319, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4319, .value=0xe6, .type=IO_READ},
        {.addr=0x431a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0197) {
    const struct CPU_State initial_cpu = {.pc=0x5f4d, .a=0x9d, .x=0xdb, .y=0x59, .sp=0xd0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xfa}, {.addr=0x5f4d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f4e, .a=0xfa, .x=0xdb, .y=0x59, .sp=0xd0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xfa}, {.addr=0x5f4d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f4d, .value=0xe6, .type=IO_READ},
        {.addr=0x5f4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0198) {
    const struct CPU_State initial_cpu = {.pc=0xc398, .a=0xb9, .x=0xa1, .y=0x80, .sp=0x41, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x73}, {.addr=0xc398, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc399, .a=0x73, .x=0xa1, .y=0x80, .sp=0x41, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x73}, {.addr=0xc398, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc398, .value=0xe6, .type=IO_READ},
        {.addr=0xc399, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0199) {
    const struct CPU_State initial_cpu = {.pc=0x809e, .a=0x98, .x=0xb0, .y=0x80, .sp=0x30, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x1e}, {.addr=0x809e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x809f, .a=0x1e, .x=0xb0, .y=0x80, .sp=0x30, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x1e}, {.addr=0x809e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x809e, .value=0xe6, .type=IO_READ},
        {.addr=0x809f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_019A) {
    const struct CPU_State initial_cpu = {.pc=0x4c23, .a=0xaf, .x=0x33, .y=0x0b, .sp=0xd1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x73}, {.addr=0x4c23, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4c24, .a=0x73, .x=0x33, .y=0x0b, .sp=0xd1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x73}, {.addr=0x4c23, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4c23, .value=0xe6, .type=IO_READ},
        {.addr=0x4c24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_019B) {
    const struct CPU_State initial_cpu = {.pc=0xaf11, .a=0xd4, .x=0xeb, .y=0xdd, .sp=0x2a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x45}, {.addr=0xaf11, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaf12, .a=0x45, .x=0xeb, .y=0xdd, .sp=0x2a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x45}, {.addr=0xaf11, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaf11, .value=0xe6, .type=IO_READ},
        {.addr=0xaf12, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_019C) {
    const struct CPU_State initial_cpu = {.pc=0x96c9, .a=0x20, .x=0x51, .y=0x26, .sp=0x56, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x27}, {.addr=0x96c9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x96ca, .a=0x27, .x=0x51, .y=0x26, .sp=0x56, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x27}, {.addr=0x96c9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x96c9, .value=0xe6, .type=IO_READ},
        {.addr=0x96ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_019D) {
    const struct CPU_State initial_cpu = {.pc=0x5278, .a=0x91, .x=0xaf, .y=0xf0, .sp=0xa0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x12}, {.addr=0x5278, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5279, .a=0x12, .x=0xaf, .y=0xf0, .sp=0xa0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x12}, {.addr=0x5278, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5278, .value=0xe6, .type=IO_READ},
        {.addr=0x5279, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_019E) {
    const struct CPU_State initial_cpu = {.pc=0xdc43, .a=0xac, .x=0x11, .y=0x2c, .sp=0xe2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x53}, {.addr=0xdc43, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdc44, .a=0x53, .x=0x11, .y=0x2c, .sp=0xe2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x53}, {.addr=0xdc43, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdc43, .value=0xe6, .type=IO_READ},
        {.addr=0xdc44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_019F) {
    const struct CPU_State initial_cpu = {.pc=0x41b5, .a=0xbc, .x=0xa9, .y=0x51, .sp=0x5c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x5e}, {.addr=0x41b5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x41b6, .a=0x5e, .x=0xa9, .y=0x51, .sp=0x5c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x5e}, {.addr=0x41b5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x41b5, .value=0xe6, .type=IO_READ},
        {.addr=0x41b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xae18, .a=0x00, .x=0x3b, .y=0x2d, .sp=0x0e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x46}, {.addr=0xae18, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xae19, .a=0x46, .x=0x3b, .y=0x2d, .sp=0x0e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x46}, {.addr=0xae18, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xae18, .value=0xe6, .type=IO_READ},
        {.addr=0xae19, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5337, .a=0x71, .x=0x40, .y=0x33, .sp=0x28, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xd5}, {.addr=0x5337, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5338, .a=0xd5, .x=0x40, .y=0x33, .sp=0x28, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xd5}, {.addr=0x5337, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5337, .value=0xe6, .type=IO_READ},
        {.addr=0x5338, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x3db7, .a=0x6a, .x=0x4c, .y=0x74, .sp=0xef, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x29}, {.addr=0x3db7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3db8, .a=0x29, .x=0x4c, .y=0x74, .sp=0xef, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x29}, {.addr=0x3db7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3db7, .value=0xe6, .type=IO_READ},
        {.addr=0x3db8, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x1573, .a=0xb8, .x=0x23, .y=0xee, .sp=0x11, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x18}, {.addr=0x1573, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1574, .a=0x18, .x=0x23, .y=0xee, .sp=0x11, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x18}, {.addr=0x1573, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1573, .value=0xe6, .type=IO_READ},
        {.addr=0x1574, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x4fa3, .a=0x75, .x=0x25, .y=0xa7, .sp=0xa1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x23}, {.addr=0x4fa3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4fa4, .a=0x23, .x=0x25, .y=0xa7, .sp=0xa1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x23}, {.addr=0x4fa3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4fa3, .value=0xe6, .type=IO_READ},
        {.addr=0x4fa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x2d0b, .a=0x9a, .x=0xe0, .y=0x63, .sp=0x09, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xcc}, {.addr=0x2d0b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2d0c, .a=0xcc, .x=0xe0, .y=0x63, .sp=0x09, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xcc}, {.addr=0x2d0b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2d0b, .value=0xe6, .type=IO_READ},
        {.addr=0x2d0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x2596, .a=0x93, .x=0x6a, .y=0x58, .sp=0xb0, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xac}, {.addr=0x2596, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2597, .a=0xac, .x=0x6a, .y=0x58, .sp=0xb0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xac}, {.addr=0x2596, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2596, .value=0xe6, .type=IO_READ},
        {.addr=0x2597, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x05fe, .a=0x6f, .x=0x4f, .y=0x94, .sp=0x24, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x6b}, {.addr=0x05fe, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x05ff, .a=0x6b, .x=0x4f, .y=0x94, .sp=0x24, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x6b}, {.addr=0x05fe, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x05fe, .value=0xe6, .type=IO_READ},
        {.addr=0x05ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xf7be, .a=0x84, .x=0xdd, .y=0x3e, .sp=0xf0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x39}, {.addr=0xf7be, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf7bf, .a=0x39, .x=0xdd, .y=0x3e, .sp=0xf0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x39}, {.addr=0xf7be, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf7be, .value=0xe6, .type=IO_READ},
        {.addr=0xf7bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xe6d8, .a=0xa7, .x=0x32, .y=0x04, .sp=0x55, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x83}, {.addr=0xe6d8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe6d9, .a=0x83, .x=0x32, .y=0x04, .sp=0x55, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x83}, {.addr=0xe6d8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe6d8, .value=0xe6, .type=IO_READ},
        {.addr=0xe6d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x91aa, .a=0x29, .x=0x66, .y=0x0b, .sp=0x02, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x4e}, {.addr=0x91aa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x91ab, .a=0x4e, .x=0x66, .y=0x0b, .sp=0x02, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x4e}, {.addr=0x91aa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x91aa, .value=0xe6, .type=IO_READ},
        {.addr=0x91ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x9316, .a=0xf1, .x=0x8c, .y=0xf5, .sp=0x38, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x47}, {.addr=0x9316, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9317, .a=0x47, .x=0x8c, .y=0xf5, .sp=0x38, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x47}, {.addr=0x9316, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9316, .value=0xe6, .type=IO_READ},
        {.addr=0x9317, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xaf64, .a=0x82, .x=0xaf, .y=0x3b, .sp=0x87, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xa8}, {.addr=0xaf64, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaf65, .a=0xa8, .x=0xaf, .y=0x3b, .sp=0x87, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xa8}, {.addr=0xaf64, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaf64, .value=0xe6, .type=IO_READ},
        {.addr=0xaf65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xc224, .a=0x90, .x=0x4a, .y=0xb6, .sp=0xb3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x08}, {.addr=0xc224, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc225, .a=0x08, .x=0x4a, .y=0xb6, .sp=0xb3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x08}, {.addr=0xc224, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc224, .value=0xe6, .type=IO_READ},
        {.addr=0xc225, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xa980, .a=0x45, .x=0x38, .y=0x9a, .sp=0x03, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x65}, {.addr=0xa980, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa981, .a=0x65, .x=0x38, .y=0x9a, .sp=0x03, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x65}, {.addr=0xa980, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa980, .value=0xe6, .type=IO_READ},
        {.addr=0xa981, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x992c, .a=0x7a, .x=0x22, .y=0x19, .sp=0x97, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x8e}, {.addr=0x992c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x992d, .a=0x8e, .x=0x22, .y=0x19, .sp=0x97, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x8e}, {.addr=0x992c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x992c, .value=0xe6, .type=IO_READ},
        {.addr=0x992d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x670c, .a=0xab, .x=0x63, .y=0x62, .sp=0x0e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x5a}, {.addr=0x670c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x670d, .a=0x5a, .x=0x63, .y=0x62, .sp=0x0e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x5a}, {.addr=0x670c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x670c, .value=0xe6, .type=IO_READ},
        {.addr=0x670d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x1771, .a=0xfb, .x=0x4c, .y=0x2b, .sp=0x96, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x8e}, {.addr=0x1771, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1772, .a=0x8e, .x=0x4c, .y=0x2b, .sp=0x96, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x8e}, {.addr=0x1771, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1771, .value=0xe6, .type=IO_READ},
        {.addr=0x1772, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xc197, .a=0xd1, .x=0x5b, .y=0xc0, .sp=0xee, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xc4}, {.addr=0xc197, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc198, .a=0xc4, .x=0x5b, .y=0xc0, .sp=0xee, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xc4}, {.addr=0xc197, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc197, .value=0xe6, .type=IO_READ},
        {.addr=0xc198, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x1cb9, .a=0x6e, .x=0x8d, .y=0x55, .sp=0x22, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xc2}, {.addr=0x1cb9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1cba, .a=0xc2, .x=0x8d, .y=0x55, .sp=0x22, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xc2}, {.addr=0x1cb9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1cb9, .value=0xe6, .type=IO_READ},
        {.addr=0x1cba, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xe986, .a=0x49, .x=0x42, .y=0x69, .sp=0x60, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xda}, {.addr=0xe986, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe987, .a=0xda, .x=0x42, .y=0x69, .sp=0x60, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xda}, {.addr=0xe986, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe986, .value=0xe6, .type=IO_READ},
        {.addr=0xe987, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x3727, .a=0xdd, .x=0xa5, .y=0x77, .sp=0x5b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x99}, {.addr=0x3727, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3728, .a=0x99, .x=0xa5, .y=0x77, .sp=0x5b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x99}, {.addr=0x3727, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3727, .value=0xe6, .type=IO_READ},
        {.addr=0x3728, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x2b2b, .a=0x45, .x=0x4c, .y=0x9b, .sp=0x9c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x95}, {.addr=0x2b2b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2b2c, .a=0x95, .x=0x4c, .y=0x9b, .sp=0x9c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x95}, {.addr=0x2b2b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2b2b, .value=0xe6, .type=IO_READ},
        {.addr=0x2b2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x5207, .a=0xae, .x=0xd6, .y=0xca, .sp=0xb2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x96}, {.addr=0x5207, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5208, .a=0x96, .x=0xd6, .y=0xca, .sp=0xb2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x96}, {.addr=0x5207, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5207, .value=0xe6, .type=IO_READ},
        {.addr=0x5208, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x6d93, .a=0x58, .x=0x65, .y=0xd6, .sp=0x52, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x2e}, {.addr=0x6d93, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6d94, .a=0x2e, .x=0x65, .y=0xd6, .sp=0x52, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x2e}, {.addr=0x6d93, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6d93, .value=0xe6, .type=IO_READ},
        {.addr=0x6d94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xbfcd, .a=0x65, .x=0x2d, .y=0x6e, .sp=0x1a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x7b}, {.addr=0xbfcd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbfce, .a=0x7b, .x=0x2d, .y=0x6e, .sp=0x1a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x7b}, {.addr=0xbfcd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbfcd, .value=0xe6, .type=IO_READ},
        {.addr=0xbfce, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x217a, .a=0x28, .x=0x3a, .y=0xb9, .sp=0xd5, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xc0}, {.addr=0x217a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x217b, .a=0xc0, .x=0x3a, .y=0xb9, .sp=0xd5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xc0}, {.addr=0x217a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x217a, .value=0xe6, .type=IO_READ},
        {.addr=0x217b, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x292f, .a=0xe7, .x=0x87, .y=0xc2, .sp=0x02, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x95}, {.addr=0x292f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2930, .a=0x95, .x=0x87, .y=0xc2, .sp=0x02, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x95}, {.addr=0x292f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x292f, .value=0xe6, .type=IO_READ},
        {.addr=0x2930, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x29d5, .a=0x92, .x=0x63, .y=0x32, .sp=0x2f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x1b}, {.addr=0x29d5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x29d6, .a=0x1b, .x=0x63, .y=0x32, .sp=0x2f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x1b}, {.addr=0x29d5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x29d5, .value=0xe6, .type=IO_READ},
        {.addr=0x29d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xe24d, .a=0xf5, .x=0x14, .y=0xab, .sp=0x24, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x9d}, {.addr=0xe24d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe24e, .a=0x9d, .x=0x14, .y=0xab, .sp=0x24, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x9d}, {.addr=0xe24d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe24d, .value=0xe6, .type=IO_READ},
        {.addr=0xe24e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x2b86, .a=0x04, .x=0x0e, .y=0x2f, .sp=0x1d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xcd}, {.addr=0x2b86, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2b87, .a=0xcd, .x=0x0e, .y=0x2f, .sp=0x1d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xcd}, {.addr=0x2b86, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2b86, .value=0xe6, .type=IO_READ},
        {.addr=0x2b87, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x5179, .a=0xf2, .x=0xc4, .y=0x0a, .sp=0x54, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x16}, {.addr=0x5179, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x517a, .a=0x16, .x=0xc4, .y=0x0a, .sp=0x54, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x16}, {.addr=0x5179, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5179, .value=0xe6, .type=IO_READ},
        {.addr=0x517a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x7327, .a=0x40, .x=0xdd, .y=0xf5, .sp=0x55, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x71}, {.addr=0x7327, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7328, .a=0x71, .x=0xdd, .y=0xf5, .sp=0x55, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x71}, {.addr=0x7327, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7327, .value=0xe6, .type=IO_READ},
        {.addr=0x7328, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xbd5c, .a=0x3c, .x=0x23, .y=0x30, .sp=0x0f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x18}, {.addr=0xbd5c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbd5d, .a=0x18, .x=0x23, .y=0x30, .sp=0x0f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x18}, {.addr=0xbd5c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbd5c, .value=0xe6, .type=IO_READ},
        {.addr=0xbd5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xb0ae, .a=0xdb, .x=0x82, .y=0x69, .sp=0x11, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x2e}, {.addr=0xb0ae, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb0af, .a=0x2e, .x=0x82, .y=0x69, .sp=0x11, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x2e}, {.addr=0xb0ae, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb0ae, .value=0xe6, .type=IO_READ},
        {.addr=0xb0af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x972e, .a=0x5b, .x=0x70, .y=0x54, .sp=0x5a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xa6}, {.addr=0x972e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x972f, .a=0xa6, .x=0x70, .y=0x54, .sp=0x5a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xa6}, {.addr=0x972e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x972e, .value=0xe6, .type=IO_READ},
        {.addr=0x972f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x4bc0, .a=0x2e, .x=0x37, .y=0x5c, .sp=0x9e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x5f}, {.addr=0x4bc0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4bc1, .a=0x5f, .x=0x37, .y=0x5c, .sp=0x9e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x5f}, {.addr=0x4bc0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4bc0, .value=0xe6, .type=IO_READ},
        {.addr=0x4bc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x0094, .a=0x33, .x=0x96, .y=0xcc, .sp=0x52, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xe6}, {.addr=0x0096, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0095, .a=0xce, .x=0x96, .y=0xcc, .sp=0x52, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xe6}, {.addr=0x0096, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0094, .value=0xe6, .type=IO_READ},
        {.addr=0x0095, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x8fb8, .a=0x3c, .x=0x7b, .y=0x1a, .sp=0xe1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xa0}, {.addr=0x8fb8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8fb9, .a=0xa0, .x=0x7b, .y=0x1a, .sp=0xe1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa0}, {.addr=0x8fb8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8fb8, .value=0xe6, .type=IO_READ},
        {.addr=0x8fb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xe70e, .a=0x50, .x=0x4d, .y=0xc2, .sp=0x02, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x7c}, {.addr=0xe70e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe70f, .a=0x7c, .x=0x4d, .y=0xc2, .sp=0x02, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x7c}, {.addr=0xe70e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe70e, .value=0xe6, .type=IO_READ},
        {.addr=0xe70f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x48f4, .a=0xb4, .x=0xde, .y=0x49, .sp=0x82, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x1a}, {.addr=0x48f4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x48f5, .a=0x1a, .x=0xde, .y=0x49, .sp=0x82, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x1a}, {.addr=0x48f4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x48f4, .value=0xe6, .type=IO_READ},
        {.addr=0x48f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x091c, .a=0x4b, .x=0x58, .y=0xcb, .sp=0x16, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x3b}, {.addr=0x091c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x091d, .a=0x3b, .x=0x58, .y=0xcb, .sp=0x16, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x3b}, {.addr=0x091c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x091c, .value=0xe6, .type=IO_READ},
        {.addr=0x091d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x58bf, .a=0x66, .x=0x66, .y=0x15, .sp=0xbf, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x7e}, {.addr=0x58bf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x58c0, .a=0x7e, .x=0x66, .y=0x15, .sp=0xbf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x7e}, {.addr=0x58bf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x58bf, .value=0xe6, .type=IO_READ},
        {.addr=0x58c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x63f0, .a=0x13, .x=0xe0, .y=0x50, .sp=0x93, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x02}, {.addr=0x63f0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x63f1, .a=0x02, .x=0xe0, .y=0x50, .sp=0x93, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x02}, {.addr=0x63f0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x63f0, .value=0xe6, .type=IO_READ},
        {.addr=0x63f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xa98c, .a=0x7e, .x=0xff, .y=0x2f, .sp=0xaf, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x38}, {.addr=0xa98c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa98d, .a=0x38, .x=0xff, .y=0x2f, .sp=0xaf, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x38}, {.addr=0xa98c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa98c, .value=0xe6, .type=IO_READ},
        {.addr=0xa98d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x1b01, .a=0xc5, .x=0xf9, .y=0x41, .sp=0x1c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0xf1}, {.addr=0x1b01, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1b02, .a=0xf1, .x=0xf9, .y=0x41, .sp=0x1c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xf1}, {.addr=0x1b01, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1b01, .value=0xe6, .type=IO_READ},
        {.addr=0x1b02, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x7d53, .a=0x7c, .x=0x83, .y=0xa7, .sp=0x06, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0xb3}, {.addr=0x7d53, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7d54, .a=0xb3, .x=0x83, .y=0xa7, .sp=0x06, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xb3}, {.addr=0x7d53, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7d53, .value=0xe6, .type=IO_READ},
        {.addr=0x7d54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x33fa, .a=0xd3, .x=0x67, .y=0x7c, .sp=0x72, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x01}, {.addr=0x33fa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x33fb, .a=0x01, .x=0x67, .y=0x7c, .sp=0x72, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x01}, {.addr=0x33fa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x33fa, .value=0xe6, .type=IO_READ},
        {.addr=0x33fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x71fd, .a=0x02, .x=0xd4, .y=0xa5, .sp=0x62, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x92}, {.addr=0x71fd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x71fe, .a=0x92, .x=0xd4, .y=0xa5, .sp=0x62, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x92}, {.addr=0x71fd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x71fd, .value=0xe6, .type=IO_READ},
        {.addr=0x71fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x2893, .a=0x9e, .x=0xca, .y=0x58, .sp=0xda, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xc7}, {.addr=0x2893, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2894, .a=0xc7, .x=0xca, .y=0x58, .sp=0xda, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xc7}, {.addr=0x2893, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2893, .value=0xe6, .type=IO_READ},
        {.addr=0x2894, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xf64a, .a=0xd9, .x=0xf1, .y=0x3e, .sp=0xa3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xb9}, {.addr=0xf64a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf64b, .a=0xb9, .x=0xf1, .y=0x3e, .sp=0xa3, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xb9}, {.addr=0xf64a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf64a, .value=0xe6, .type=IO_READ},
        {.addr=0xf64b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x91f3, .a=0x1f, .x=0xd2, .y=0xca, .sp=0x84, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x1f}, {.addr=0x91f3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x91f4, .a=0x1f, .x=0xd2, .y=0xca, .sp=0x84, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x1f}, {.addr=0x91f3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x91f3, .value=0xe6, .type=IO_READ},
        {.addr=0x91f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x8167, .a=0xa2, .x=0x66, .y=0x80, .sp=0x5a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xe7}, {.addr=0x8167, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8168, .a=0xe7, .x=0x66, .y=0x80, .sp=0x5a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xe7}, {.addr=0x8167, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8167, .value=0xe6, .type=IO_READ},
        {.addr=0x8168, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xe51d, .a=0x53, .x=0x06, .y=0x43, .sp=0x52, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xd1}, {.addr=0xe51d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe51e, .a=0xd1, .x=0x06, .y=0x43, .sp=0x52, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xd1}, {.addr=0xe51d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe51d, .value=0xe6, .type=IO_READ},
        {.addr=0xe51e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x02f3, .a=0xd9, .x=0x33, .y=0xdb, .sp=0x1d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x10}, {.addr=0x02f3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x02f4, .a=0x10, .x=0x33, .y=0xdb, .sp=0x1d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x10}, {.addr=0x02f3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x02f3, .value=0xe6, .type=IO_READ},
        {.addr=0x02f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x6563, .a=0xb9, .x=0x5d, .y=0xba, .sp=0x1c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x6c}, {.addr=0x6563, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6564, .a=0x6c, .x=0x5d, .y=0xba, .sp=0x1c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x6c}, {.addr=0x6563, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6563, .value=0xe6, .type=IO_READ},
        {.addr=0x6564, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2cdf, .a=0x0a, .x=0x92, .y=0x85, .sp=0xc1, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0xa6}, {.addr=0x2cdf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ce0, .a=0xa6, .x=0x92, .y=0x85, .sp=0xc1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xa6}, {.addr=0x2cdf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2cdf, .value=0xe6, .type=IO_READ},
        {.addr=0x2ce0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xf27a, .a=0xc5, .x=0xf6, .y=0xd1, .sp=0x12, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x5c}, {.addr=0xf27a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf27b, .a=0x5c, .x=0xf6, .y=0xd1, .sp=0x12, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x5c}, {.addr=0xf27a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf27a, .value=0xe6, .type=IO_READ},
        {.addr=0xf27b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x7e12, .a=0x86, .x=0x75, .y=0xa1, .sp=0xf6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xfe}, {.addr=0x7e12, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7e13, .a=0xfe, .x=0x75, .y=0xa1, .sp=0xf6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xfe}, {.addr=0x7e12, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7e12, .value=0xe6, .type=IO_READ},
        {.addr=0x7e13, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x15c4, .a=0x3c, .x=0x94, .y=0x36, .sp=0xb3, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xe6}, {.addr=0x15c4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x15c5, .a=0xe6, .x=0x94, .y=0x36, .sp=0xb3, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xe6}, {.addr=0x15c4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x15c4, .value=0xe6, .type=IO_READ},
        {.addr=0x15c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xb246, .a=0xf9, .x=0x84, .y=0xdc, .sp=0x1d, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xa6}, {.addr=0xb246, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb247, .a=0xa6, .x=0x84, .y=0xdc, .sp=0x1d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xa6}, {.addr=0xb246, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb246, .value=0xe6, .type=IO_READ},
        {.addr=0xb247, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x5267, .a=0x99, .x=0x00, .y=0x9f, .sp=0x67, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0xb5}, {.addr=0x5267, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5268, .a=0xb5, .x=0x00, .y=0x9f, .sp=0x67, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xb5}, {.addr=0x5267, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5267, .value=0xe6, .type=IO_READ},
        {.addr=0x5268, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x9d66, .a=0x0d, .x=0x4b, .y=0x88, .sp=0x9a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x94}, {.addr=0x9d66, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9d67, .a=0x94, .x=0x4b, .y=0x88, .sp=0x9a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x94}, {.addr=0x9d66, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9d66, .value=0xe6, .type=IO_READ},
        {.addr=0x9d67, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xc7ac, .a=0x09, .x=0xa5, .y=0x09, .sp=0x32, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x3f}, {.addr=0xc7ac, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc7ad, .a=0x3f, .x=0xa5, .y=0x09, .sp=0x32, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x3f}, {.addr=0xc7ac, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc7ac, .value=0xe6, .type=IO_READ},
        {.addr=0xc7ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x55ea, .a=0xd1, .x=0x22, .y=0x44, .sp=0xe4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x4e}, {.addr=0x55ea, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x55eb, .a=0x4e, .x=0x22, .y=0x44, .sp=0xe4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x4e}, {.addr=0x55ea, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x55ea, .value=0xe6, .type=IO_READ},
        {.addr=0x55eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x4430, .a=0x12, .x=0x7c, .y=0xea, .sp=0x88, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xe8}, {.addr=0x4430, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4431, .a=0xe8, .x=0x7c, .y=0xea, .sp=0x88, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xe8}, {.addr=0x4430, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4430, .value=0xe6, .type=IO_READ},
        {.addr=0x4431, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3f34, .a=0x14, .x=0x52, .y=0x17, .sp=0x78, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x12}, {.addr=0x3f34, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3f35, .a=0x12, .x=0x52, .y=0x17, .sp=0x78, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x12}, {.addr=0x3f34, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3f34, .value=0xe6, .type=IO_READ},
        {.addr=0x3f35, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xfc44, .a=0xbf, .x=0x75, .y=0x55, .sp=0x27, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xa2}, {.addr=0xfc44, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfc45, .a=0xa2, .x=0x75, .y=0x55, .sp=0x27, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xa2}, {.addr=0xfc44, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfc44, .value=0xe6, .type=IO_READ},
        {.addr=0xfc45, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x401a, .a=0x03, .x=0xdd, .y=0x2c, .sp=0xd2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x7e}, {.addr=0x401a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x401b, .a=0x7e, .x=0xdd, .y=0x2c, .sp=0xd2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x7e}, {.addr=0x401a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x401a, .value=0xe6, .type=IO_READ},
        {.addr=0x401b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xdedb, .a=0x45, .x=0xbf, .y=0x63, .sp=0x24, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xae}, {.addr=0xdedb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdedc, .a=0xae, .x=0xbf, .y=0x63, .sp=0x24, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xae}, {.addr=0xdedb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdedb, .value=0xe6, .type=IO_READ},
        {.addr=0xdedc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x766e, .a=0x1e, .x=0xb8, .y=0xca, .sp=0x9a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x89}, {.addr=0x766e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x766f, .a=0x89, .x=0xb8, .y=0xca, .sp=0x9a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x89}, {.addr=0x766e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x766e, .value=0xe6, .type=IO_READ},
        {.addr=0x766f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xd65e, .a=0xfc, .x=0x4a, .y=0x75, .sp=0x8e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x9c}, {.addr=0xd65e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd65f, .a=0x9c, .x=0x4a, .y=0x75, .sp=0x8e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x9c}, {.addr=0xd65e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd65e, .value=0xe6, .type=IO_READ},
        {.addr=0xd65f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa07f, .a=0x59, .x=0x88, .y=0xb7, .sp=0x27, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x73}, {.addr=0xa07f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa080, .a=0x73, .x=0x88, .y=0xb7, .sp=0x27, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x73}, {.addr=0xa07f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa07f, .value=0xe6, .type=IO_READ},
        {.addr=0xa080, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xcfc9, .a=0xa9, .x=0xd2, .y=0xd9, .sp=0x9b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x46}, {.addr=0xcfc9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcfca, .a=0x46, .x=0xd2, .y=0xd9, .sp=0x9b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x46}, {.addr=0xcfc9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcfc9, .value=0xe6, .type=IO_READ},
        {.addr=0xcfca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd275, .a=0xbc, .x=0x2f, .y=0xaf, .sp=0xaf, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xfd}, {.addr=0xd275, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd276, .a=0xfd, .x=0x2f, .y=0xaf, .sp=0xaf, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xfd}, {.addr=0xd275, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd275, .value=0xe6, .type=IO_READ},
        {.addr=0xd276, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x52a0, .a=0xd0, .x=0x17, .y=0x90, .sp=0x48, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x41}, {.addr=0x52a0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x52a1, .a=0x41, .x=0x17, .y=0x90, .sp=0x48, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x41}, {.addr=0x52a0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x52a0, .value=0xe6, .type=IO_READ},
        {.addr=0x52a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x2d6d, .a=0xad, .x=0x33, .y=0x7f, .sp=0x76, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x52}, {.addr=0x2d6d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2d6e, .a=0x52, .x=0x33, .y=0x7f, .sp=0x76, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x52}, {.addr=0x2d6d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2d6d, .value=0xe6, .type=IO_READ},
        {.addr=0x2d6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x1d20, .a=0x29, .x=0x64, .y=0x01, .sp=0x6e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x34}, {.addr=0x1d20, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1d21, .a=0x34, .x=0x64, .y=0x01, .sp=0x6e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x34}, {.addr=0x1d20, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1d20, .value=0xe6, .type=IO_READ},
        {.addr=0x1d21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xf3ce, .a=0xf5, .x=0xeb, .y=0xc2, .sp=0xb7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x14}, {.addr=0xf3ce, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf3cf, .a=0x14, .x=0xeb, .y=0xc2, .sp=0xb7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x14}, {.addr=0xf3ce, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf3ce, .value=0xe6, .type=IO_READ},
        {.addr=0xf3cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xdc1f, .a=0x35, .x=0xce, .y=0xda, .sp=0x8c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x3b}, {.addr=0xdc1f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdc20, .a=0x3b, .x=0xce, .y=0xda, .sp=0x8c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x3b}, {.addr=0xdc1f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdc1f, .value=0xe6, .type=IO_READ},
        {.addr=0xdc20, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x8a06, .a=0x1e, .x=0x46, .y=0xf6, .sp=0x14, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x5d}, {.addr=0x8a06, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8a07, .a=0x5d, .x=0x46, .y=0xf6, .sp=0x14, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x5d}, {.addr=0x8a06, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8a06, .value=0xe6, .type=IO_READ},
        {.addr=0x8a07, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xed80, .a=0xe7, .x=0xca, .y=0x5d, .sp=0xf9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x42}, {.addr=0xed80, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xed81, .a=0x42, .x=0xca, .y=0x5d, .sp=0xf9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x42}, {.addr=0xed80, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xed80, .value=0xe6, .type=IO_READ},
        {.addr=0xed81, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x636b, .a=0x18, .x=0x21, .y=0xff, .sp=0xe4, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x0f}, {.addr=0x636b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x636c, .a=0x0f, .x=0x21, .y=0xff, .sp=0xe4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x0f}, {.addr=0x636b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x636b, .value=0xe6, .type=IO_READ},
        {.addr=0x636c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x7c56, .a=0xd7, .x=0x5f, .y=0x38, .sp=0x0e, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x07}, {.addr=0x7c56, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7c57, .a=0x07, .x=0x5f, .y=0x38, .sp=0x0e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x07}, {.addr=0x7c56, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7c56, .value=0xe6, .type=IO_READ},
        {.addr=0x7c57, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x7abb, .a=0x75, .x=0xe6, .y=0x12, .sp=0x7f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x2a}, {.addr=0x7abb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7abc, .a=0x2a, .x=0xe6, .y=0x12, .sp=0x7f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x2a}, {.addr=0x7abb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7abb, .value=0xe6, .type=IO_READ},
        {.addr=0x7abc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xf272, .a=0x32, .x=0xe0, .y=0xb5, .sp=0x13, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x92}, {.addr=0xf272, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf273, .a=0x92, .x=0xe0, .y=0xb5, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x92}, {.addr=0xf272, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf272, .value=0xe6, .type=IO_READ},
        {.addr=0xf273, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x32cd, .a=0xa6, .x=0xa1, .y=0x9d, .sp=0xb4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x30}, {.addr=0x32cd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x32ce, .a=0x30, .x=0xa1, .y=0x9d, .sp=0xb4, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x30}, {.addr=0x32cd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x32cd, .value=0xe6, .type=IO_READ},
        {.addr=0x32ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x574e, .a=0x02, .x=0xa7, .y=0xe2, .sp=0x51, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x66}, {.addr=0x574e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x574f, .a=0x66, .x=0xa7, .y=0xe2, .sp=0x51, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x66}, {.addr=0x574e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x574e, .value=0xe6, .type=IO_READ},
        {.addr=0x574f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x2ea8, .a=0xb7, .x=0xac, .y=0xcc, .sp=0x14, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xa2}, {.addr=0x2ea8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ea9, .a=0xa2, .x=0xac, .y=0xcc, .sp=0x14, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xa2}, {.addr=0x2ea8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ea8, .value=0xe6, .type=IO_READ},
        {.addr=0x2ea9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x9626, .a=0xf8, .x=0xd2, .y=0x84, .sp=0xef, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xe4}, {.addr=0x9626, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9627, .a=0xe4, .x=0xd2, .y=0x84, .sp=0xef, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xe4}, {.addr=0x9626, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9626, .value=0xe6, .type=IO_READ},
        {.addr=0x9627, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x6240, .a=0x59, .x=0x45, .y=0x2b, .sp=0x18, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xd2}, {.addr=0x6240, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6241, .a=0xd2, .x=0x45, .y=0x2b, .sp=0x18, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xd2}, {.addr=0x6240, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6240, .value=0xe6, .type=IO_READ},
        {.addr=0x6241, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0200) {
    const struct CPU_State initial_cpu = {.pc=0xefd6, .a=0xa3, .x=0x91, .y=0xf6, .sp=0xb5, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xb5}, {.addr=0xefd6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xefd7, .a=0xb5, .x=0x91, .y=0xf6, .sp=0xb5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xb5}, {.addr=0xefd6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xefd6, .value=0xe6, .type=IO_READ},
        {.addr=0xefd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0201) {
    const struct CPU_State initial_cpu = {.pc=0xf1ad, .a=0x31, .x=0x62, .y=0xeb, .sp=0x70, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x36}, {.addr=0xf1ad, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf1ae, .a=0x36, .x=0x62, .y=0xeb, .sp=0x70, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x36}, {.addr=0xf1ad, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf1ad, .value=0xe6, .type=IO_READ},
        {.addr=0xf1ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0202) {
    const struct CPU_State initial_cpu = {.pc=0x3ac4, .a=0xf9, .x=0xf0, .y=0x70, .sp=0x2b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xae}, {.addr=0x3ac4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3ac5, .a=0xae, .x=0xf0, .y=0x70, .sp=0x2b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xae}, {.addr=0x3ac4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3ac4, .value=0xe6, .type=IO_READ},
        {.addr=0x3ac5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0203) {
    const struct CPU_State initial_cpu = {.pc=0x5537, .a=0xea, .x=0x42, .y=0xdd, .sp=0xd3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x36}, {.addr=0x5537, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5538, .a=0x36, .x=0x42, .y=0xdd, .sp=0xd3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x36}, {.addr=0x5537, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5537, .value=0xe6, .type=IO_READ},
        {.addr=0x5538, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0204) {
    const struct CPU_State initial_cpu = {.pc=0xbdbc, .a=0x75, .x=0x44, .y=0x81, .sp=0x1b, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x04}, {.addr=0xbdbc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbdbd, .a=0x04, .x=0x44, .y=0x81, .sp=0x1b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x04}, {.addr=0xbdbc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbdbc, .value=0xe6, .type=IO_READ},
        {.addr=0xbdbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0205) {
    const struct CPU_State initial_cpu = {.pc=0xf0ad, .a=0x0d, .x=0xa3, .y=0x9b, .sp=0xc5, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x64}, {.addr=0xf0ad, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf0ae, .a=0x64, .x=0xa3, .y=0x9b, .sp=0xc5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x64}, {.addr=0xf0ad, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf0ad, .value=0xe6, .type=IO_READ},
        {.addr=0xf0ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0206) {
    const struct CPU_State initial_cpu = {.pc=0xb493, .a=0x6b, .x=0x97, .y=0x87, .sp=0xc3, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x13}, {.addr=0xb493, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb494, .a=0x13, .x=0x97, .y=0x87, .sp=0xc3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x13}, {.addr=0xb493, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb493, .value=0xe6, .type=IO_READ},
        {.addr=0xb494, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0207) {
    const struct CPU_State initial_cpu = {.pc=0x9581, .a=0xf9, .x=0xeb, .y=0x62, .sp=0xcf, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x19}, {.addr=0x9581, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9582, .a=0x19, .x=0xeb, .y=0x62, .sp=0xcf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x19}, {.addr=0x9581, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9581, .value=0xe6, .type=IO_READ},
        {.addr=0x9582, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0208) {
    const struct CPU_State initial_cpu = {.pc=0x99e1, .a=0xd6, .x=0x9d, .y=0x27, .sp=0x04, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0xfd}, {.addr=0x99e1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x99e2, .a=0xfd, .x=0x9d, .y=0x27, .sp=0x04, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0xfd}, {.addr=0x99e1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x99e1, .value=0xe6, .type=IO_READ},
        {.addr=0x99e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0209) {
    const struct CPU_State initial_cpu = {.pc=0x5883, .a=0x02, .x=0x76, .y=0x60, .sp=0xd5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x08}, {.addr=0x5883, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5884, .a=0x08, .x=0x76, .y=0x60, .sp=0xd5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x08}, {.addr=0x5883, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5883, .value=0xe6, .type=IO_READ},
        {.addr=0x5884, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_020A) {
    const struct CPU_State initial_cpu = {.pc=0xabc0, .a=0x94, .x=0x84, .y=0x18, .sp=0xf7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x85}, {.addr=0xabc0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xabc1, .a=0x85, .x=0x84, .y=0x18, .sp=0xf7, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x85}, {.addr=0xabc0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xabc0, .value=0xe6, .type=IO_READ},
        {.addr=0xabc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_020B) {
    const struct CPU_State initial_cpu = {.pc=0xb262, .a=0xfa, .x=0x7a, .y=0x79, .sp=0x5b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xc3}, {.addr=0xb262, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb263, .a=0xc3, .x=0x7a, .y=0x79, .sp=0x5b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xc3}, {.addr=0xb262, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb262, .value=0xe6, .type=IO_READ},
        {.addr=0xb263, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_020C) {
    const struct CPU_State initial_cpu = {.pc=0x7cb3, .a=0x73, .x=0x6c, .y=0xe5, .sp=0x6f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xe7}, {.addr=0x7cb3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7cb4, .a=0xe7, .x=0x6c, .y=0xe5, .sp=0x6f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xe7}, {.addr=0x7cb3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7cb3, .value=0xe6, .type=IO_READ},
        {.addr=0x7cb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_020D) {
    const struct CPU_State initial_cpu = {.pc=0x1ac8, .a=0x6c, .x=0x7f, .y=0x4d, .sp=0x71, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xcd}, {.addr=0x1ac8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1ac9, .a=0xcd, .x=0x7f, .y=0x4d, .sp=0x71, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xcd}, {.addr=0x1ac8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1ac8, .value=0xe6, .type=IO_READ},
        {.addr=0x1ac9, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_020E) {
    const struct CPU_State initial_cpu = {.pc=0xa671, .a=0x82, .x=0xab, .y=0x52, .sp=0x49, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xbb}, {.addr=0xa671, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa672, .a=0xbb, .x=0xab, .y=0x52, .sp=0x49, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xbb}, {.addr=0xa671, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa671, .value=0xe6, .type=IO_READ},
        {.addr=0xa672, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_020F) {
    const struct CPU_State initial_cpu = {.pc=0x6c68, .a=0x8e, .x=0x30, .y=0x0a, .sp=0x55, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x55}, {.addr=0x6c68, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6c69, .a=0x55, .x=0x30, .y=0x0a, .sp=0x55, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x55}, {.addr=0x6c68, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6c68, .value=0xe6, .type=IO_READ},
        {.addr=0x6c69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0210) {
    const struct CPU_State initial_cpu = {.pc=0xf0f4, .a=0x66, .x=0x65, .y=0xa9, .sp=0xa1, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xb0}, {.addr=0xf0f4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf0f5, .a=0xb0, .x=0x65, .y=0xa9, .sp=0xa1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xb0}, {.addr=0xf0f4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf0f4, .value=0xe6, .type=IO_READ},
        {.addr=0xf0f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0211) {
    const struct CPU_State initial_cpu = {.pc=0xbb9f, .a=0xe9, .x=0x4b, .y=0xa3, .sp=0xcb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x89}, {.addr=0xbb9f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbba0, .a=0x89, .x=0x4b, .y=0xa3, .sp=0xcb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x89}, {.addr=0xbb9f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbb9f, .value=0xe6, .type=IO_READ},
        {.addr=0xbba0, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0212) {
    const struct CPU_State initial_cpu = {.pc=0x2906, .a=0x46, .x=0x58, .y=0x4a, .sp=0xb1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xcc}, {.addr=0x2906, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2907, .a=0xcc, .x=0x58, .y=0x4a, .sp=0xb1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xcc}, {.addr=0x2906, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2906, .value=0xe6, .type=IO_READ},
        {.addr=0x2907, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0213) {
    const struct CPU_State initial_cpu = {.pc=0xe9f0, .a=0xaa, .x=0x20, .y=0xc4, .sp=0x7f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x1f}, {.addr=0xe9f0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe9f1, .a=0x1f, .x=0x20, .y=0xc4, .sp=0x7f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x1f}, {.addr=0xe9f0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe9f0, .value=0xe6, .type=IO_READ},
        {.addr=0xe9f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0214) {
    const struct CPU_State initial_cpu = {.pc=0x7f19, .a=0xfb, .x=0x85, .y=0xd4, .sp=0xc2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x8c}, {.addr=0x7f19, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7f1a, .a=0x8c, .x=0x85, .y=0xd4, .sp=0xc2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x8c}, {.addr=0x7f19, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7f19, .value=0xe6, .type=IO_READ},
        {.addr=0x7f1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0215) {
    const struct CPU_State initial_cpu = {.pc=0x2951, .a=0x2f, .x=0x1d, .y=0xc9, .sp=0x27, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xaf}, {.addr=0x2951, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2952, .a=0xaf, .x=0x1d, .y=0xc9, .sp=0x27, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xaf}, {.addr=0x2951, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2951, .value=0xe6, .type=IO_READ},
        {.addr=0x2952, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0216) {
    const struct CPU_State initial_cpu = {.pc=0xa776, .a=0x32, .x=0x12, .y=0x55, .sp=0xe7, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x1c}, {.addr=0xa776, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa777, .a=0x1c, .x=0x12, .y=0x55, .sp=0xe7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x1c}, {.addr=0xa776, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa776, .value=0xe6, .type=IO_READ},
        {.addr=0xa777, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0217) {
    const struct CPU_State initial_cpu = {.pc=0x0643, .a=0x0a, .x=0x0a, .y=0x40, .sp=0x59, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x02}, {.addr=0x0643, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0644, .a=0x02, .x=0x0a, .y=0x40, .sp=0x59, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x02}, {.addr=0x0643, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0643, .value=0xe6, .type=IO_READ},
        {.addr=0x0644, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0218) {
    const struct CPU_State initial_cpu = {.pc=0x6333, .a=0x15, .x=0x6c, .y=0x7f, .sp=0x23, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xb7}, {.addr=0x6333, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6334, .a=0xb7, .x=0x6c, .y=0x7f, .sp=0x23, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xb7}, {.addr=0x6333, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6333, .value=0xe6, .type=IO_READ},
        {.addr=0x6334, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7484, .a=0x4d, .x=0x8e, .y=0x01, .sp=0x84, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xad}, {.addr=0x7484, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7485, .a=0xad, .x=0x8e, .y=0x01, .sp=0x84, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xad}, {.addr=0x7484, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7484, .value=0xe6, .type=IO_READ},
        {.addr=0x7485, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_021A) {
    const struct CPU_State initial_cpu = {.pc=0x7191, .a=0xb4, .x=0x42, .y=0x47, .sp=0x93, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xc1}, {.addr=0x7191, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7192, .a=0xc1, .x=0x42, .y=0x47, .sp=0x93, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xc1}, {.addr=0x7191, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7191, .value=0xe6, .type=IO_READ},
        {.addr=0x7192, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_021B) {
    const struct CPU_State initial_cpu = {.pc=0x9e28, .a=0x69, .x=0xe9, .y=0x8d, .sp=0xbc, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x45}, {.addr=0x9e28, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9e29, .a=0x45, .x=0xe9, .y=0x8d, .sp=0xbc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x45}, {.addr=0x9e28, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9e28, .value=0xe6, .type=IO_READ},
        {.addr=0x9e29, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_021C) {
    const struct CPU_State initial_cpu = {.pc=0x6be5, .a=0x26, .x=0xd7, .y=0xf1, .sp=0x8e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xca}, {.addr=0x6be5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6be6, .a=0xca, .x=0xd7, .y=0xf1, .sp=0x8e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xca}, {.addr=0x6be5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6be5, .value=0xe6, .type=IO_READ},
        {.addr=0x6be6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_021D) {
    const struct CPU_State initial_cpu = {.pc=0x0b07, .a=0xc6, .x=0x32, .y=0x5c, .sp=0xba, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x78}, {.addr=0x0b07, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0b08, .a=0x78, .x=0x32, .y=0x5c, .sp=0xba, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x78}, {.addr=0x0b07, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0b07, .value=0xe6, .type=IO_READ},
        {.addr=0x0b08, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_021E) {
    const struct CPU_State initial_cpu = {.pc=0x2db4, .a=0xde, .x=0x87, .y=0x5d, .sp=0x74, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xbf}, {.addr=0x2db4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2db5, .a=0xbf, .x=0x87, .y=0x5d, .sp=0x74, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xbf}, {.addr=0x2db4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2db4, .value=0xe6, .type=IO_READ},
        {.addr=0x2db5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_021F) {
    const struct CPU_State initial_cpu = {.pc=0x3536, .a=0x09, .x=0xa1, .y=0x70, .sp=0x2c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0xf1}, {.addr=0x3536, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3537, .a=0xf1, .x=0xa1, .y=0x70, .sp=0x2c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0xf1}, {.addr=0x3536, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3536, .value=0xe6, .type=IO_READ},
        {.addr=0x3537, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0220) {
    const struct CPU_State initial_cpu = {.pc=0xc681, .a=0x80, .x=0x8b, .y=0xd0, .sp=0xa8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x53}, {.addr=0xc681, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc682, .a=0x53, .x=0x8b, .y=0xd0, .sp=0xa8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x53}, {.addr=0xc681, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc681, .value=0xe6, .type=IO_READ},
        {.addr=0xc682, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0221) {
    const struct CPU_State initial_cpu = {.pc=0xb9fb, .a=0x2a, .x=0xec, .y=0x48, .sp=0x2d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x7a}, {.addr=0xb9fb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb9fc, .a=0x7a, .x=0xec, .y=0x48, .sp=0x2d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x7a}, {.addr=0xb9fb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb9fb, .value=0xe6, .type=IO_READ},
        {.addr=0xb9fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0222) {
    const struct CPU_State initial_cpu = {.pc=0xfb34, .a=0x10, .x=0x0b, .y=0x9e, .sp=0xda, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xa4}, {.addr=0xfb34, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfb35, .a=0xa4, .x=0x0b, .y=0x9e, .sp=0xda, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xa4}, {.addr=0xfb34, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfb34, .value=0xe6, .type=IO_READ},
        {.addr=0xfb35, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0223) {
    const struct CPU_State initial_cpu = {.pc=0xd7e2, .a=0xb1, .x=0x9e, .y=0x83, .sp=0x90, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x3c}, {.addr=0xd7e2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd7e3, .a=0x3c, .x=0x9e, .y=0x83, .sp=0x90, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x3c}, {.addr=0xd7e2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd7e2, .value=0xe6, .type=IO_READ},
        {.addr=0xd7e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa8f1, .a=0x3a, .x=0xad, .y=0x33, .sp=0x36, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x02}, {.addr=0xa8f1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa8f2, .a=0x02, .x=0xad, .y=0x33, .sp=0x36, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x02}, {.addr=0xa8f1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa8f1, .value=0xe6, .type=IO_READ},
        {.addr=0xa8f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0225) {
    const struct CPU_State initial_cpu = {.pc=0xa152, .a=0x19, .x=0xaa, .y=0x24, .sp=0x05, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x23}, {.addr=0xa152, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa153, .a=0x23, .x=0xaa, .y=0x24, .sp=0x05, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x23}, {.addr=0xa152, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa152, .value=0xe6, .type=IO_READ},
        {.addr=0xa153, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0226) {
    const struct CPU_State initial_cpu = {.pc=0x4846, .a=0xae, .x=0xcb, .y=0x21, .sp=0xf4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x49}, {.addr=0x4846, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4847, .a=0x49, .x=0xcb, .y=0x21, .sp=0xf4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x49}, {.addr=0x4846, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4846, .value=0xe6, .type=IO_READ},
        {.addr=0x4847, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0227) {
    const struct CPU_State initial_cpu = {.pc=0xcc7c, .a=0xff, .x=0x19, .y=0xd1, .sp=0x14, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xa4}, {.addr=0xcc7c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcc7d, .a=0xa4, .x=0x19, .y=0xd1, .sp=0x14, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xa4}, {.addr=0xcc7c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcc7c, .value=0xe6, .type=IO_READ},
        {.addr=0xcc7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0228) {
    const struct CPU_State initial_cpu = {.pc=0x41bb, .a=0x60, .x=0x87, .y=0x8d, .sp=0xf0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x49}, {.addr=0x41bb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x41bc, .a=0x49, .x=0x87, .y=0x8d, .sp=0xf0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x49}, {.addr=0x41bb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x41bb, .value=0xe6, .type=IO_READ},
        {.addr=0x41bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0229) {
    const struct CPU_State initial_cpu = {.pc=0x0c3a, .a=0x44, .x=0x1a, .y=0xaa, .sp=0x9c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x2e}, {.addr=0x0c3a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0c3b, .a=0x2e, .x=0x1a, .y=0xaa, .sp=0x9c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x2e}, {.addr=0x0c3a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0c3a, .value=0xe6, .type=IO_READ},
        {.addr=0x0c3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_022A) {
    const struct CPU_State initial_cpu = {.pc=0x06cc, .a=0xe6, .x=0x3b, .y=0x8a, .sp=0x44, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xd8}, {.addr=0x06cc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x06cd, .a=0xd8, .x=0x3b, .y=0x8a, .sp=0x44, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xd8}, {.addr=0x06cc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x06cc, .value=0xe6, .type=IO_READ},
        {.addr=0x06cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_022B) {
    const struct CPU_State initial_cpu = {.pc=0x758b, .a=0xe1, .x=0x5e, .y=0xfe, .sp=0x57, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x9c}, {.addr=0x758b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x758c, .a=0x9c, .x=0x5e, .y=0xfe, .sp=0x57, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x9c}, {.addr=0x758b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x758b, .value=0xe6, .type=IO_READ},
        {.addr=0x758c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_022C) {
    const struct CPU_State initial_cpu = {.pc=0xfb69, .a=0xf1, .x=0x57, .y=0x1d, .sp=0xeb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xaa}, {.addr=0xfb69, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfb6a, .a=0xaa, .x=0x57, .y=0x1d, .sp=0xeb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xaa}, {.addr=0xfb69, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfb69, .value=0xe6, .type=IO_READ},
        {.addr=0xfb6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_022D) {
    const struct CPU_State initial_cpu = {.pc=0xbf58, .a=0xca, .x=0xca, .y=0xb9, .sp=0x92, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xcd}, {.addr=0xbf58, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbf59, .a=0xcd, .x=0xca, .y=0xb9, .sp=0x92, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xcd}, {.addr=0xbf58, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbf58, .value=0xe6, .type=IO_READ},
        {.addr=0xbf59, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_022E) {
    const struct CPU_State initial_cpu = {.pc=0x22df, .a=0x1f, .x=0x5d, .y=0xda, .sp=0xc6, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xc7}, {.addr=0x22df, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x22e0, .a=0xc7, .x=0x5d, .y=0xda, .sp=0xc6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xc7}, {.addr=0x22df, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x22df, .value=0xe6, .type=IO_READ},
        {.addr=0x22e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe258, .a=0x60, .x=0xb4, .y=0xc2, .sp=0x91, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xf5}, {.addr=0xe258, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe259, .a=0xf5, .x=0xb4, .y=0xc2, .sp=0x91, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xf5}, {.addr=0xe258, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe258, .value=0xe6, .type=IO_READ},
        {.addr=0xe259, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0230) {
    const struct CPU_State initial_cpu = {.pc=0xaf67, .a=0xcb, .x=0xef, .y=0x9d, .sp=0x3c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x8b}, {.addr=0xaf67, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaf68, .a=0x8b, .x=0xef, .y=0x9d, .sp=0x3c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x8b}, {.addr=0xaf67, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaf67, .value=0xe6, .type=IO_READ},
        {.addr=0xaf68, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0231) {
    const struct CPU_State initial_cpu = {.pc=0x690e, .a=0xf7, .x=0xe4, .y=0x2a, .sp=0x54, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x0e}, {.addr=0x690e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x690f, .a=0x0e, .x=0xe4, .y=0x2a, .sp=0x54, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x0e}, {.addr=0x690e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x690e, .value=0xe6, .type=IO_READ},
        {.addr=0x690f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0232) {
    const struct CPU_State initial_cpu = {.pc=0xf9af, .a=0x79, .x=0x19, .y=0x9b, .sp=0x12, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xb2}, {.addr=0xf9af, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf9b0, .a=0xb2, .x=0x19, .y=0x9b, .sp=0x12, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xb2}, {.addr=0xf9af, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf9af, .value=0xe6, .type=IO_READ},
        {.addr=0xf9b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0233) {
    const struct CPU_State initial_cpu = {.pc=0x21b2, .a=0xd9, .x=0xfa, .y=0x7a, .sp=0xa5, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xf0}, {.addr=0x21b2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x21b3, .a=0xf0, .x=0xfa, .y=0x7a, .sp=0xa5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xf0}, {.addr=0x21b2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x21b2, .value=0xe6, .type=IO_READ},
        {.addr=0x21b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0234) {
    const struct CPU_State initial_cpu = {.pc=0x61e2, .a=0x73, .x=0x0c, .y=0xf8, .sp=0x13, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x87}, {.addr=0x61e2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x61e3, .a=0x87, .x=0x0c, .y=0xf8, .sp=0x13, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x87}, {.addr=0x61e2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x61e2, .value=0xe6, .type=IO_READ},
        {.addr=0x61e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0235) {
    const struct CPU_State initial_cpu = {.pc=0xdd3d, .a=0x3b, .x=0x85, .y=0x1f, .sp=0x6a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xbe}, {.addr=0xdd3d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdd3e, .a=0xbe, .x=0x85, .y=0x1f, .sp=0x6a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xbe}, {.addr=0xdd3d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdd3d, .value=0xe6, .type=IO_READ},
        {.addr=0xdd3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0236) {
    const struct CPU_State initial_cpu = {.pc=0x61ec, .a=0x90, .x=0x40, .y=0xaf, .sp=0x11, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xc7}, {.addr=0x61ec, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x61ed, .a=0xc7, .x=0x40, .y=0xaf, .sp=0x11, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xc7}, {.addr=0x61ec, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x61ec, .value=0xe6, .type=IO_READ},
        {.addr=0x61ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0237) {
    const struct CPU_State initial_cpu = {.pc=0xc9fc, .a=0xfd, .x=0xd3, .y=0xd0, .sp=0x0e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x5e}, {.addr=0xc9fc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc9fd, .a=0x5e, .x=0xd3, .y=0xd0, .sp=0x0e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x5e}, {.addr=0xc9fc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc9fc, .value=0xe6, .type=IO_READ},
        {.addr=0xc9fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0238) {
    const struct CPU_State initial_cpu = {.pc=0xd325, .a=0x8d, .x=0xab, .y=0x20, .sp=0x21, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x72}, {.addr=0xd325, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd326, .a=0x72, .x=0xab, .y=0x20, .sp=0x21, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x72}, {.addr=0xd325, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd325, .value=0xe6, .type=IO_READ},
        {.addr=0xd326, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0239) {
    const struct CPU_State initial_cpu = {.pc=0xc292, .a=0x7e, .x=0x3b, .y=0x2d, .sp=0xdc, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0xad}, {.addr=0xc292, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc293, .a=0xad, .x=0x3b, .y=0x2d, .sp=0xdc, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xad}, {.addr=0xc292, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc292, .value=0xe6, .type=IO_READ},
        {.addr=0xc293, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_023A) {
    const struct CPU_State initial_cpu = {.pc=0x11af, .a=0xe7, .x=0x2f, .y=0x86, .sp=0xb2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x26}, {.addr=0x11af, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x11b0, .a=0x26, .x=0x2f, .y=0x86, .sp=0xb2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x26}, {.addr=0x11af, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x11af, .value=0xe6, .type=IO_READ},
        {.addr=0x11b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0888, .a=0xec, .x=0x80, .y=0x02, .sp=0x5f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x44}, {.addr=0x0888, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0889, .a=0x44, .x=0x80, .y=0x02, .sp=0x5f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x44}, {.addr=0x0888, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0888, .value=0xe6, .type=IO_READ},
        {.addr=0x0889, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_023C) {
    const struct CPU_State initial_cpu = {.pc=0xe7ed, .a=0x1f, .x=0xbd, .y=0xbe, .sp=0xb1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x26}, {.addr=0xe7ed, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe7ee, .a=0x26, .x=0xbd, .y=0xbe, .sp=0xb1, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x26}, {.addr=0xe7ed, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe7ed, .value=0xe6, .type=IO_READ},
        {.addr=0xe7ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_023D) {
    const struct CPU_State initial_cpu = {.pc=0x36eb, .a=0xd9, .x=0xcb, .y=0xb1, .sp=0x37, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x04}, {.addr=0x36eb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x36ec, .a=0x04, .x=0xcb, .y=0xb1, .sp=0x37, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x04}, {.addr=0x36eb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x36eb, .value=0xe6, .type=IO_READ},
        {.addr=0x36ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_023E) {
    const struct CPU_State initial_cpu = {.pc=0x829b, .a=0x89, .x=0xa3, .y=0x32, .sp=0x56, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x49}, {.addr=0x829b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x829c, .a=0x49, .x=0xa3, .y=0x32, .sp=0x56, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x49}, {.addr=0x829b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x829b, .value=0xe6, .type=IO_READ},
        {.addr=0x829c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_023F) {
    const struct CPU_State initial_cpu = {.pc=0xfd5a, .a=0x3b, .x=0xb3, .y=0x55, .sp=0xae, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x6e}, {.addr=0xfd5a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfd5b, .a=0x6e, .x=0xb3, .y=0x55, .sp=0xae, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x6e}, {.addr=0xfd5a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfd5a, .value=0xe6, .type=IO_READ},
        {.addr=0xfd5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0240) {
    const struct CPU_State initial_cpu = {.pc=0x6968, .a=0xeb, .x=0xe5, .y=0x9c, .sp=0xed, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x24}, {.addr=0x6968, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6969, .a=0x24, .x=0xe5, .y=0x9c, .sp=0xed, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x24}, {.addr=0x6968, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6968, .value=0xe6, .type=IO_READ},
        {.addr=0x6969, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0241) {
    const struct CPU_State initial_cpu = {.pc=0xee6e, .a=0x38, .x=0xbf, .y=0xca, .sp=0x39, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xc2}, {.addr=0xee6e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xee6f, .a=0xc2, .x=0xbf, .y=0xca, .sp=0x39, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xc2}, {.addr=0xee6e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xee6e, .value=0xe6, .type=IO_READ},
        {.addr=0xee6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0242) {
    const struct CPU_State initial_cpu = {.pc=0xd619, .a=0xff, .x=0x12, .y=0x9e, .sp=0x80, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x4a}, {.addr=0xd619, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd61a, .a=0x4a, .x=0x12, .y=0x9e, .sp=0x80, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x4a}, {.addr=0xd619, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd619, .value=0xe6, .type=IO_READ},
        {.addr=0xd61a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0243) {
    const struct CPU_State initial_cpu = {.pc=0x9fbe, .a=0x75, .x=0x19, .y=0x25, .sp=0xc0, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x60}, {.addr=0x9fbe, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9fbf, .a=0x60, .x=0x19, .y=0x25, .sp=0xc0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x60}, {.addr=0x9fbe, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9fbe, .value=0xe6, .type=IO_READ},
        {.addr=0x9fbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0244) {
    const struct CPU_State initial_cpu = {.pc=0xa656, .a=0xa9, .x=0x63, .y=0x50, .sp=0xc7, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x56}, {.addr=0xa656, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa657, .a=0x56, .x=0x63, .y=0x50, .sp=0xc7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x56}, {.addr=0xa656, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa656, .value=0xe6, .type=IO_READ},
        {.addr=0xa657, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0245) {
    const struct CPU_State initial_cpu = {.pc=0xa520, .a=0x72, .x=0xc2, .y=0x45, .sp=0x90, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xa8}, {.addr=0xa520, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa521, .a=0xa8, .x=0xc2, .y=0x45, .sp=0x90, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xa8}, {.addr=0xa520, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa520, .value=0xe6, .type=IO_READ},
        {.addr=0xa521, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0246) {
    const struct CPU_State initial_cpu = {.pc=0xaadb, .a=0xfc, .x=0xbf, .y=0x04, .sp=0xa1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xe3}, {.addr=0xaadb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaadc, .a=0xe3, .x=0xbf, .y=0x04, .sp=0xa1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xe3}, {.addr=0xaadb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaadb, .value=0xe6, .type=IO_READ},
        {.addr=0xaadc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6659, .a=0xa5, .x=0x06, .y=0x0e, .sp=0x2d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xab}, {.addr=0x6659, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x665a, .a=0xab, .x=0x06, .y=0x0e, .sp=0x2d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xab}, {.addr=0x6659, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6659, .value=0xe6, .type=IO_READ},
        {.addr=0x665a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0248) {
    const struct CPU_State initial_cpu = {.pc=0xf3c5, .a=0x0d, .x=0xc0, .y=0x0e, .sp=0x3c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xf0}, {.addr=0xf3c5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf3c6, .a=0xf0, .x=0xc0, .y=0x0e, .sp=0x3c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xf0}, {.addr=0xf3c5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf3c5, .value=0xe6, .type=IO_READ},
        {.addr=0xf3c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0249) {
    const struct CPU_State initial_cpu = {.pc=0xfd4a, .a=0xb2, .x=0x37, .y=0xde, .sp=0xaa, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xdc}, {.addr=0xfd4a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfd4b, .a=0xdc, .x=0x37, .y=0xde, .sp=0xaa, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xdc}, {.addr=0xfd4a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfd4a, .value=0xe6, .type=IO_READ},
        {.addr=0xfd4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_024A) {
    const struct CPU_State initial_cpu = {.pc=0xeee2, .a=0x62, .x=0x3c, .y=0xeb, .sp=0x54, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xd8}, {.addr=0xeee2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xeee3, .a=0xd8, .x=0x3c, .y=0xeb, .sp=0x54, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xd8}, {.addr=0xeee2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xeee2, .value=0xe6, .type=IO_READ},
        {.addr=0xeee3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_024B) {
    const struct CPU_State initial_cpu = {.pc=0x702a, .a=0xeb, .x=0x8b, .y=0x72, .sp=0x37, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xbb}, {.addr=0x702a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x702b, .a=0xbb, .x=0x8b, .y=0x72, .sp=0x37, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xbb}, {.addr=0x702a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x702a, .value=0xe6, .type=IO_READ},
        {.addr=0x702b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_024C) {
    const struct CPU_State initial_cpu = {.pc=0xe16a, .a=0xe9, .x=0xdb, .y=0x4a, .sp=0x5f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x88}, {.addr=0xe16a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe16b, .a=0x88, .x=0xdb, .y=0x4a, .sp=0x5f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x88}, {.addr=0xe16a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe16a, .value=0xe6, .type=IO_READ},
        {.addr=0xe16b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_024D) {
    const struct CPU_State initial_cpu = {.pc=0xac7e, .a=0xe8, .x=0xbf, .y=0x56, .sp=0x71, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x50}, {.addr=0xac7e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xac7f, .a=0x50, .x=0xbf, .y=0x56, .sp=0x71, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x50}, {.addr=0xac7e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xac7e, .value=0xe6, .type=IO_READ},
        {.addr=0xac7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_024E) {
    const struct CPU_State initial_cpu = {.pc=0xb130, .a=0xe9, .x=0x81, .y=0xb6, .sp=0x92, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x63}, {.addr=0xb130, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb131, .a=0x63, .x=0x81, .y=0xb6, .sp=0x92, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x63}, {.addr=0xb130, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb130, .value=0xe6, .type=IO_READ},
        {.addr=0xb131, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_024F) {
    const struct CPU_State initial_cpu = {.pc=0xfb99, .a=0xeb, .x=0x67, .y=0x9c, .sp=0x1d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x0b}, {.addr=0xfb99, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfb9a, .a=0x0b, .x=0x67, .y=0x9c, .sp=0x1d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x0b}, {.addr=0xfb99, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfb99, .value=0xe6, .type=IO_READ},
        {.addr=0xfb9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0250) {
    const struct CPU_State initial_cpu = {.pc=0xc2a7, .a=0xcf, .x=0x23, .y=0x2b, .sp=0x4f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x17}, {.addr=0xc2a7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc2a8, .a=0x17, .x=0x23, .y=0x2b, .sp=0x4f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x17}, {.addr=0xc2a7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc2a7, .value=0xe6, .type=IO_READ},
        {.addr=0xc2a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0251) {
    const struct CPU_State initial_cpu = {.pc=0x6b33, .a=0x11, .x=0x18, .y=0xe1, .sp=0x31, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xd3}, {.addr=0x6b33, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6b34, .a=0xd3, .x=0x18, .y=0xe1, .sp=0x31, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xd3}, {.addr=0x6b33, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6b33, .value=0xe6, .type=IO_READ},
        {.addr=0x6b34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0252) {
    const struct CPU_State initial_cpu = {.pc=0xf80d, .a=0x60, .x=0xee, .y=0xc6, .sp=0x15, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xd1}, {.addr=0xf80d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf80e, .a=0xd1, .x=0xee, .y=0xc6, .sp=0x15, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xd1}, {.addr=0xf80d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf80d, .value=0xe6, .type=IO_READ},
        {.addr=0xf80e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0253) {
    const struct CPU_State initial_cpu = {.pc=0xfa6b, .a=0x50, .x=0xa0, .y=0x97, .sp=0x6b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xf4}, {.addr=0xfa6b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfa6c, .a=0xf4, .x=0xa0, .y=0x97, .sp=0x6b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xf4}, {.addr=0xfa6b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfa6b, .value=0xe6, .type=IO_READ},
        {.addr=0xfa6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0254) {
    const struct CPU_State initial_cpu = {.pc=0xe680, .a=0x16, .x=0x10, .y=0x8a, .sp=0x9f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xff}, {.addr=0xe680, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe681, .a=0xff, .x=0x10, .y=0x8a, .sp=0x9f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0xff}, {.addr=0xe680, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe680, .value=0xe6, .type=IO_READ},
        {.addr=0xe681, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0255) {
    const struct CPU_State initial_cpu = {.pc=0x0724, .a=0xed, .x=0x0d, .y=0xe7, .sp=0x9c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x1c}, {.addr=0x0724, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0725, .a=0x1c, .x=0x0d, .y=0xe7, .sp=0x9c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x1c}, {.addr=0x0724, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0724, .value=0xe6, .type=IO_READ},
        {.addr=0x0725, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0256) {
    const struct CPU_State initial_cpu = {.pc=0xa8ab, .a=0x95, .x=0x7e, .y=0x32, .sp=0xac, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x1d}, {.addr=0xa8ab, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa8ac, .a=0x1d, .x=0x7e, .y=0x32, .sp=0xac, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x1d}, {.addr=0xa8ab, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa8ab, .value=0xe6, .type=IO_READ},
        {.addr=0xa8ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0257) {
    const struct CPU_State initial_cpu = {.pc=0xe3f3, .a=0x40, .x=0xd6, .y=0xaa, .sp=0xd0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x89}, {.addr=0xe3f3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe3f4, .a=0x89, .x=0xd6, .y=0xaa, .sp=0xd0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x89}, {.addr=0xe3f3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe3f3, .value=0xe6, .type=IO_READ},
        {.addr=0xe3f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4857, .a=0x78, .x=0xd8, .y=0xb5, .sp=0x61, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x94}, {.addr=0x4857, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4858, .a=0x94, .x=0xd8, .y=0xb5, .sp=0x61, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x94}, {.addr=0x4857, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4857, .value=0xe6, .type=IO_READ},
        {.addr=0x4858, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0259) {
    const struct CPU_State initial_cpu = {.pc=0x9790, .a=0xc5, .x=0xb0, .y=0xe3, .sp=0x39, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xfd}, {.addr=0x9790, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9791, .a=0xfd, .x=0xb0, .y=0xe3, .sp=0x39, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xfd}, {.addr=0x9790, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9790, .value=0xe6, .type=IO_READ},
        {.addr=0x9791, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_025A) {
    const struct CPU_State initial_cpu = {.pc=0xa266, .a=0x46, .x=0x66, .y=0x53, .sp=0x48, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x23}, {.addr=0xa266, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa267, .a=0x23, .x=0x66, .y=0x53, .sp=0x48, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x23}, {.addr=0xa266, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa266, .value=0xe6, .type=IO_READ},
        {.addr=0xa267, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_025C) {
    const struct CPU_State initial_cpu = {.pc=0xe818, .a=0xf0, .x=0xa9, .y=0xb6, .sp=0x55, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x68}, {.addr=0xe818, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe819, .a=0x68, .x=0xa9, .y=0xb6, .sp=0x55, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x68}, {.addr=0xe818, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe818, .value=0xe6, .type=IO_READ},
        {.addr=0xe819, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_025D) {
    const struct CPU_State initial_cpu = {.pc=0x81a5, .a=0xa9, .x=0x8c, .y=0x66, .sp=0x41, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xac}, {.addr=0x81a5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x81a6, .a=0xac, .x=0x8c, .y=0x66, .sp=0x41, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xac}, {.addr=0x81a5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x81a5, .value=0xe6, .type=IO_READ},
        {.addr=0x81a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_025E) {
    const struct CPU_State initial_cpu = {.pc=0x3335, .a=0x4f, .x=0x43, .y=0x4a, .sp=0x69, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x09}, {.addr=0x3335, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3336, .a=0x09, .x=0x43, .y=0x4a, .sp=0x69, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x09}, {.addr=0x3335, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3335, .value=0xe6, .type=IO_READ},
        {.addr=0x3336, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_025F) {
    const struct CPU_State initial_cpu = {.pc=0x89e0, .a=0xd0, .x=0xd7, .y=0x35, .sp=0x36, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x34}, {.addr=0x89e0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x89e1, .a=0x34, .x=0xd7, .y=0x35, .sp=0x36, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x34}, {.addr=0x89e0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x89e0, .value=0xe6, .type=IO_READ},
        {.addr=0x89e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0260) {
    const struct CPU_State initial_cpu = {.pc=0xf419, .a=0xf6, .x=0xe8, .y=0xb6, .sp=0xbe, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xe2}, {.addr=0xf419, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf41a, .a=0xe2, .x=0xe8, .y=0xb6, .sp=0xbe, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xe2}, {.addr=0xf419, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf419, .value=0xe6, .type=IO_READ},
        {.addr=0xf41a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0261) {
    const struct CPU_State initial_cpu = {.pc=0x4e2e, .a=0xc5, .x=0xa0, .y=0xf4, .sp=0xe6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xa7}, {.addr=0x4e2e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4e2f, .a=0xa7, .x=0xa0, .y=0xf4, .sp=0xe6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xa7}, {.addr=0x4e2e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4e2e, .value=0xe6, .type=IO_READ},
        {.addr=0x4e2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0262) {
    const struct CPU_State initial_cpu = {.pc=0x8a5e, .a=0x9e, .x=0x99, .y=0xab, .sp=0xe6, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xb0}, {.addr=0x8a5e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8a5f, .a=0xb0, .x=0x99, .y=0xab, .sp=0xe6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xb0}, {.addr=0x8a5e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8a5e, .value=0xe6, .type=IO_READ},
        {.addr=0x8a5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0263) {
    const struct CPU_State initial_cpu = {.pc=0x7437, .a=0xed, .x=0xe6, .y=0xf3, .sp=0x54, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0xc1}, {.addr=0x7437, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7438, .a=0xc1, .x=0xe6, .y=0xf3, .sp=0x54, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xc1}, {.addr=0x7437, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7437, .value=0xe6, .type=IO_READ},
        {.addr=0x7438, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0264) {
    const struct CPU_State initial_cpu = {.pc=0x52d4, .a=0x01, .x=0x0b, .y=0xc7, .sp=0x04, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0xde}, {.addr=0x52d4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x52d5, .a=0xde, .x=0x0b, .y=0xc7, .sp=0x04, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0xde}, {.addr=0x52d4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x52d4, .value=0xe6, .type=IO_READ},
        {.addr=0x52d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0265) {
    const struct CPU_State initial_cpu = {.pc=0x7a24, .a=0xd3, .x=0xd2, .y=0x95, .sp=0x6f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xe5}, {.addr=0x7a24, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7a25, .a=0xe5, .x=0xd2, .y=0x95, .sp=0x6f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xe5}, {.addr=0x7a24, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7a24, .value=0xe6, .type=IO_READ},
        {.addr=0x7a25, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0266) {
    const struct CPU_State initial_cpu = {.pc=0x291e, .a=0xee, .x=0x56, .y=0x52, .sp=0xef, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xba}, {.addr=0x291e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x291f, .a=0xba, .x=0x56, .y=0x52, .sp=0xef, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xba}, {.addr=0x291e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x291e, .value=0xe6, .type=IO_READ},
        {.addr=0x291f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0267) {
    const struct CPU_State initial_cpu = {.pc=0x4e1f, .a=0xa9, .x=0x4a, .y=0x1e, .sp=0x61, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x72}, {.addr=0x4e1f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4e20, .a=0x72, .x=0x4a, .y=0x1e, .sp=0x61, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x72}, {.addr=0x4e1f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4e1f, .value=0xe6, .type=IO_READ},
        {.addr=0x4e20, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0268) {
    const struct CPU_State initial_cpu = {.pc=0x06cd, .a=0x86, .x=0x7f, .y=0x96, .sp=0x36, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x7a}, {.addr=0x06cd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x06ce, .a=0x7a, .x=0x7f, .y=0x96, .sp=0x36, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x7a}, {.addr=0x06cd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x06cd, .value=0xe6, .type=IO_READ},
        {.addr=0x06ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0269) {
    const struct CPU_State initial_cpu = {.pc=0x38b1, .a=0x05, .x=0x34, .y=0xbe, .sp=0xdf, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xff}, {.addr=0x38b1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x38b2, .a=0xff, .x=0x34, .y=0xbe, .sp=0xdf, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xff}, {.addr=0x38b1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x38b1, .value=0xe6, .type=IO_READ},
        {.addr=0x38b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_026A) {
    const struct CPU_State initial_cpu = {.pc=0xabf1, .a=0xbd, .x=0xc8, .y=0x3e, .sp=0x31, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x59}, {.addr=0xabf1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xabf2, .a=0x59, .x=0xc8, .y=0x3e, .sp=0x31, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x59}, {.addr=0xabf1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xabf1, .value=0xe6, .type=IO_READ},
        {.addr=0xabf2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_026B) {
    const struct CPU_State initial_cpu = {.pc=0x39fc, .a=0xb6, .x=0xcc, .y=0x7f, .sp=0xf5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x6b}, {.addr=0x39fc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x39fd, .a=0x6b, .x=0xcc, .y=0x7f, .sp=0xf5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x6b}, {.addr=0x39fc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x39fc, .value=0xe6, .type=IO_READ},
        {.addr=0x39fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_026C) {
    const struct CPU_State initial_cpu = {.pc=0xcee4, .a=0x1f, .x=0x5a, .y=0x22, .sp=0x61, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x61}, {.addr=0xcee4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcee5, .a=0x61, .x=0x5a, .y=0x22, .sp=0x61, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x61}, {.addr=0xcee4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcee4, .value=0xe6, .type=IO_READ},
        {.addr=0xcee5, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_026D) {
    const struct CPU_State initial_cpu = {.pc=0xb552, .a=0x6b, .x=0x33, .y=0x14, .sp=0xe2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x62}, {.addr=0xb552, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb553, .a=0x62, .x=0x33, .y=0x14, .sp=0xe2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x62}, {.addr=0xb552, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb552, .value=0xe6, .type=IO_READ},
        {.addr=0xb553, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_026E) {
    const struct CPU_State initial_cpu = {.pc=0x851e, .a=0xe1, .x=0x07, .y=0x2b, .sp=0x12, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xa0}, {.addr=0x851e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x851f, .a=0xa0, .x=0x07, .y=0x2b, .sp=0x12, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xa0}, {.addr=0x851e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x851e, .value=0xe6, .type=IO_READ},
        {.addr=0x851f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_026F) {
    const struct CPU_State initial_cpu = {.pc=0x7239, .a=0x4f, .x=0x3e, .y=0x06, .sp=0x5a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x60}, {.addr=0x7239, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x723a, .a=0x60, .x=0x3e, .y=0x06, .sp=0x5a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x60}, {.addr=0x7239, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7239, .value=0xe6, .type=IO_READ},
        {.addr=0x723a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0270) {
    const struct CPU_State initial_cpu = {.pc=0x7dfb, .a=0x22, .x=0xeb, .y=0x37, .sp=0xc5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xa4}, {.addr=0x7dfb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7dfc, .a=0xa4, .x=0xeb, .y=0x37, .sp=0xc5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xa4}, {.addr=0x7dfb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7dfb, .value=0xe6, .type=IO_READ},
        {.addr=0x7dfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0271) {
    const struct CPU_State initial_cpu = {.pc=0xb7b7, .a=0xfe, .x=0xa3, .y=0xe7, .sp=0x3f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xc8}, {.addr=0xb7b7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb7b8, .a=0xc8, .x=0xa3, .y=0xe7, .sp=0x3f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xc8}, {.addr=0xb7b7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb7b7, .value=0xe6, .type=IO_READ},
        {.addr=0xb7b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0273) {
    const struct CPU_State initial_cpu = {.pc=0xef1a, .a=0x92, .x=0xcd, .y=0xd4, .sp=0x21, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xd8}, {.addr=0xef1a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xef1b, .a=0xd8, .x=0xcd, .y=0xd4, .sp=0x21, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xd8}, {.addr=0xef1a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xef1a, .value=0xe6, .type=IO_READ},
        {.addr=0xef1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0274) {
    const struct CPU_State initial_cpu = {.pc=0x6ffe, .a=0x5f, .x=0xf4, .y=0x0c, .sp=0xad, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xd0}, {.addr=0x6ffe, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6fff, .a=0xd0, .x=0xf4, .y=0x0c, .sp=0xad, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xd0}, {.addr=0x6ffe, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6ffe, .value=0xe6, .type=IO_READ},
        {.addr=0x6fff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7ae6, .a=0xc3, .x=0xd4, .y=0xee, .sp=0xeb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xda}, {.addr=0x7ae6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7ae7, .a=0xda, .x=0xd4, .y=0xee, .sp=0xeb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xda}, {.addr=0x7ae6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7ae6, .value=0xe6, .type=IO_READ},
        {.addr=0x7ae7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0276) {
    const struct CPU_State initial_cpu = {.pc=0xa090, .a=0x6f, .x=0x39, .y=0xa3, .sp=0xa2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x37}, {.addr=0xa090, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa091, .a=0x37, .x=0x39, .y=0xa3, .sp=0xa2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x37}, {.addr=0xa090, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa090, .value=0xe6, .type=IO_READ},
        {.addr=0xa091, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0277) {
    const struct CPU_State initial_cpu = {.pc=0xa374, .a=0x35, .x=0x80, .y=0x39, .sp=0x50, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x1b}, {.addr=0xa374, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa375, .a=0x1b, .x=0x80, .y=0x39, .sp=0x50, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x1b}, {.addr=0xa374, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa374, .value=0xe6, .type=IO_READ},
        {.addr=0xa375, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0278) {
    const struct CPU_State initial_cpu = {.pc=0x303c, .a=0x69, .x=0xaa, .y=0x41, .sp=0x84, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x47}, {.addr=0x303c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x303d, .a=0x47, .x=0xaa, .y=0x41, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x47}, {.addr=0x303c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x303c, .value=0xe6, .type=IO_READ},
        {.addr=0x303d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0279) {
    const struct CPU_State initial_cpu = {.pc=0xe7e6, .a=0x1b, .x=0xee, .y=0x9e, .sp=0x8e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x20}, {.addr=0xe7e6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe7e7, .a=0x20, .x=0xee, .y=0x9e, .sp=0x8e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x20}, {.addr=0xe7e6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe7e6, .value=0xe6, .type=IO_READ},
        {.addr=0xe7e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_027A) {
    const struct CPU_State initial_cpu = {.pc=0xd7fb, .a=0x10, .x=0xbf, .y=0x69, .sp=0x6b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xfb}, {.addr=0xd7fb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd7fc, .a=0xfb, .x=0xbf, .y=0x69, .sp=0x6b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xfb}, {.addr=0xd7fb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd7fb, .value=0xe6, .type=IO_READ},
        {.addr=0xd7fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_027B) {
    const struct CPU_State initial_cpu = {.pc=0x3c6d, .a=0xd8, .x=0x24, .y=0x4a, .sp=0xbc, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xb9}, {.addr=0x3c6d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3c6e, .a=0xb9, .x=0x24, .y=0x4a, .sp=0xbc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xb9}, {.addr=0x3c6d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3c6d, .value=0xe6, .type=IO_READ},
        {.addr=0x3c6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_027C) {
    const struct CPU_State initial_cpu = {.pc=0x90f7, .a=0xa9, .x=0x9a, .y=0xe5, .sp=0x3c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xf6}, {.addr=0x90f7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x90f8, .a=0xf6, .x=0x9a, .y=0xe5, .sp=0x3c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xf6}, {.addr=0x90f7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x90f7, .value=0xe6, .type=IO_READ},
        {.addr=0x90f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_027D) {
    const struct CPU_State initial_cpu = {.pc=0x6ebc, .a=0x05, .x=0xdc, .y=0xc7, .sp=0xe4, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x0a}, {.addr=0x6ebc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6ebd, .a=0x0a, .x=0xdc, .y=0xc7, .sp=0xe4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x0a}, {.addr=0x6ebc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6ebc, .value=0xe6, .type=IO_READ},
        {.addr=0x6ebd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_027E) {
    const struct CPU_State initial_cpu = {.pc=0xe2a8, .a=0x38, .x=0xea, .y=0x73, .sp=0xd7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x25}, {.addr=0xe2a8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe2a9, .a=0x25, .x=0xea, .y=0x73, .sp=0xd7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x25}, {.addr=0xe2a8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe2a8, .value=0xe6, .type=IO_READ},
        {.addr=0xe2a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_027F) {
    const struct CPU_State initial_cpu = {.pc=0x7580, .a=0xfc, .x=0x96, .y=0x40, .sp=0xf8, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x42}, {.addr=0x7580, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7581, .a=0x42, .x=0x96, .y=0x40, .sp=0xf8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x42}, {.addr=0x7580, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7580, .value=0xe6, .type=IO_READ},
        {.addr=0x7581, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0280) {
    const struct CPU_State initial_cpu = {.pc=0x4955, .a=0x66, .x=0x74, .y=0xd9, .sp=0x5d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xec}, {.addr=0x4955, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4956, .a=0xec, .x=0x74, .y=0xd9, .sp=0x5d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xec}, {.addr=0x4955, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4955, .value=0xe6, .type=IO_READ},
        {.addr=0x4956, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0281) {
    const struct CPU_State initial_cpu = {.pc=0x1514, .a=0x9e, .x=0xce, .y=0xb0, .sp=0x26, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x8e}, {.addr=0x1514, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1515, .a=0x8e, .x=0xce, .y=0xb0, .sp=0x26, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x8e}, {.addr=0x1514, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1514, .value=0xe6, .type=IO_READ},
        {.addr=0x1515, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0282) {
    const struct CPU_State initial_cpu = {.pc=0x9ba1, .a=0xaf, .x=0x95, .y=0xed, .sp=0x07, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x35}, {.addr=0x9ba1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9ba2, .a=0x35, .x=0x95, .y=0xed, .sp=0x07, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x35}, {.addr=0x9ba1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9ba1, .value=0xe6, .type=IO_READ},
        {.addr=0x9ba2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0283) {
    const struct CPU_State initial_cpu = {.pc=0x7e7e, .a=0x17, .x=0xb2, .y=0xe2, .sp=0xa6, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x90}, {.addr=0x7e7e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7e7f, .a=0x90, .x=0xb2, .y=0xe2, .sp=0xa6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x90}, {.addr=0x7e7e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7e7e, .value=0xe6, .type=IO_READ},
        {.addr=0x7e7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8bf4, .a=0xa5, .x=0x8b, .y=0xc3, .sp=0x5e, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x47}, {.addr=0x8bf4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8bf5, .a=0x47, .x=0x8b, .y=0xc3, .sp=0x5e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x47}, {.addr=0x8bf4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8bf4, .value=0xe6, .type=IO_READ},
        {.addr=0x8bf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0285) {
    const struct CPU_State initial_cpu = {.pc=0x544b, .a=0x9b, .x=0xb9, .y=0x25, .sp=0x3a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xc8}, {.addr=0x544b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x544c, .a=0xc8, .x=0xb9, .y=0x25, .sp=0x3a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xc8}, {.addr=0x544b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x544b, .value=0xe6, .type=IO_READ},
        {.addr=0x544c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0286) {
    const struct CPU_State initial_cpu = {.pc=0xff5b, .a=0xb4, .x=0x0a, .y=0xee, .sp=0xb6, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x14}, {.addr=0xff5b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xff5c, .a=0x14, .x=0x0a, .y=0xee, .sp=0xb6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x14}, {.addr=0xff5b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xff5b, .value=0xe6, .type=IO_READ},
        {.addr=0xff5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0287) {
    const struct CPU_State initial_cpu = {.pc=0x3c26, .a=0x0c, .x=0xed, .y=0x4a, .sp=0x66, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x50}, {.addr=0x3c26, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3c27, .a=0x50, .x=0xed, .y=0x4a, .sp=0x66, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x50}, {.addr=0x3c26, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3c26, .value=0xe6, .type=IO_READ},
        {.addr=0x3c27, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0288) {
    const struct CPU_State initial_cpu = {.pc=0xc2f9, .a=0x4d, .x=0x3c, .y=0x23, .sp=0x51, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x8d}, {.addr=0xc2f9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc2fa, .a=0x8d, .x=0x3c, .y=0x23, .sp=0x51, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x8d}, {.addr=0xc2f9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc2f9, .value=0xe6, .type=IO_READ},
        {.addr=0xc2fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0289) {
    const struct CPU_State initial_cpu = {.pc=0xf0a4, .a=0xf2, .x=0xa5, .y=0x05, .sp=0xa3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0xe2}, {.addr=0xf0a4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf0a5, .a=0xe2, .x=0xa5, .y=0x05, .sp=0xa3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0xe2}, {.addr=0xf0a4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf0a4, .value=0xe6, .type=IO_READ},
        {.addr=0xf0a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_028A) {
    const struct CPU_State initial_cpu = {.pc=0x65f2, .a=0x33, .x=0xcb, .y=0xeb, .sp=0x0e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x9c}, {.addr=0x65f2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x65f3, .a=0x9c, .x=0xcb, .y=0xeb, .sp=0x0e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x9c}, {.addr=0x65f2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x65f2, .value=0xe6, .type=IO_READ},
        {.addr=0x65f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_028B) {
    const struct CPU_State initial_cpu = {.pc=0x5d63, .a=0xb0, .x=0xbf, .y=0x52, .sp=0x2f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x47}, {.addr=0x5d63, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5d64, .a=0x47, .x=0xbf, .y=0x52, .sp=0x2f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x47}, {.addr=0x5d63, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5d63, .value=0xe6, .type=IO_READ},
        {.addr=0x5d64, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_028C) {
    const struct CPU_State initial_cpu = {.pc=0x690c, .a=0x0d, .x=0x69, .y=0x95, .sp=0x50, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x8b}, {.addr=0x690c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x690d, .a=0x8b, .x=0x69, .y=0x95, .sp=0x50, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x8b}, {.addr=0x690c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x690c, .value=0xe6, .type=IO_READ},
        {.addr=0x690d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_028D) {
    const struct CPU_State initial_cpu = {.pc=0xd40f, .a=0x0d, .x=0xef, .y=0x65, .sp=0x6f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x37}, {.addr=0xd40f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd410, .a=0x37, .x=0xef, .y=0x65, .sp=0x6f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x37}, {.addr=0xd40f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd40f, .value=0xe6, .type=IO_READ},
        {.addr=0xd410, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_028E) {
    const struct CPU_State initial_cpu = {.pc=0xd2f1, .a=0x02, .x=0xab, .y=0xd1, .sp=0x0c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x9a}, {.addr=0xd2f1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd2f2, .a=0x9a, .x=0xab, .y=0xd1, .sp=0x0c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x9a}, {.addr=0xd2f1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd2f1, .value=0xe6, .type=IO_READ},
        {.addr=0xd2f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_028F) {
    const struct CPU_State initial_cpu = {.pc=0x6423, .a=0xf7, .x=0x78, .y=0xc7, .sp=0x47, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xc3}, {.addr=0x6423, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6424, .a=0xc3, .x=0x78, .y=0xc7, .sp=0x47, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xc3}, {.addr=0x6423, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6423, .value=0xe6, .type=IO_READ},
        {.addr=0x6424, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0290) {
    const struct CPU_State initial_cpu = {.pc=0x344a, .a=0x80, .x=0x74, .y=0x9a, .sp=0x58, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x19}, {.addr=0x344a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x344b, .a=0x19, .x=0x74, .y=0x9a, .sp=0x58, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x19}, {.addr=0x344a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x344a, .value=0xe6, .type=IO_READ},
        {.addr=0x344b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0291) {
    const struct CPU_State initial_cpu = {.pc=0x9c34, .a=0x75, .x=0xe4, .y=0x51, .sp=0x06, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x02}, {.addr=0x9c34, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9c35, .a=0x02, .x=0xe4, .y=0x51, .sp=0x06, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x02}, {.addr=0x9c34, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9c34, .value=0xe6, .type=IO_READ},
        {.addr=0x9c35, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0292) {
    const struct CPU_State initial_cpu = {.pc=0x4fb9, .a=0x24, .x=0x48, .y=0xd2, .sp=0x05, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x49}, {.addr=0x4fb9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4fba, .a=0x49, .x=0x48, .y=0xd2, .sp=0x05, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x49}, {.addr=0x4fb9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4fb9, .value=0xe6, .type=IO_READ},
        {.addr=0x4fba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0293) {
    const struct CPU_State initial_cpu = {.pc=0xa566, .a=0xe2, .x=0xd5, .y=0x1a, .sp=0xbf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xf6}, {.addr=0xa566, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa567, .a=0xf6, .x=0xd5, .y=0x1a, .sp=0xbf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0xf6}, {.addr=0xa566, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa566, .value=0xe6, .type=IO_READ},
        {.addr=0xa567, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0294) {
    const struct CPU_State initial_cpu = {.pc=0x40cb, .a=0xc1, .x=0x47, .y=0xed, .sp=0xbe, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xe4}, {.addr=0x40cb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x40cc, .a=0xe4, .x=0x47, .y=0xed, .sp=0xbe, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xe4}, {.addr=0x40cb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x40cb, .value=0xe6, .type=IO_READ},
        {.addr=0x40cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0295) {
    const struct CPU_State initial_cpu = {.pc=0xefc0, .a=0x9f, .x=0x01, .y=0xca, .sp=0xa2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x2d}, {.addr=0xefc0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xefc1, .a=0x2d, .x=0x01, .y=0xca, .sp=0xa2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x2d}, {.addr=0xefc0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xefc0, .value=0xe6, .type=IO_READ},
        {.addr=0xefc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0296) {
    const struct CPU_State initial_cpu = {.pc=0x98b2, .a=0x51, .x=0x90, .y=0xac, .sp=0xf1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x78}, {.addr=0x98b2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x98b3, .a=0x78, .x=0x90, .y=0xac, .sp=0xf1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x78}, {.addr=0x98b2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x98b2, .value=0xe6, .type=IO_READ},
        {.addr=0x98b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0297) {
    const struct CPU_State initial_cpu = {.pc=0x917c, .a=0x98, .x=0xf9, .y=0xaf, .sp=0xd1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x6c}, {.addr=0x917c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x917d, .a=0x6c, .x=0xf9, .y=0xaf, .sp=0xd1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x6c}, {.addr=0x917c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x917c, .value=0xe6, .type=IO_READ},
        {.addr=0x917d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0298) {
    const struct CPU_State initial_cpu = {.pc=0xb80f, .a=0x6e, .x=0xbb, .y=0x3c, .sp=0x80, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xdc}, {.addr=0xb80f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb810, .a=0xdc, .x=0xbb, .y=0x3c, .sp=0x80, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xdc}, {.addr=0xb80f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb80f, .value=0xe6, .type=IO_READ},
        {.addr=0xb810, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0299) {
    const struct CPU_State initial_cpu = {.pc=0xcc2a, .a=0x14, .x=0x51, .y=0xe5, .sp=0x04, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0xcf}, {.addr=0xcc2a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcc2b, .a=0xcf, .x=0x51, .y=0xe5, .sp=0x04, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0xcf}, {.addr=0xcc2a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcc2a, .value=0xe6, .type=IO_READ},
        {.addr=0xcc2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_029A) {
    const struct CPU_State initial_cpu = {.pc=0xb35a, .a=0x3f, .x=0x2c, .y=0x92, .sp=0x1b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x04}, {.addr=0xb35a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb35b, .a=0x04, .x=0x2c, .y=0x92, .sp=0x1b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x04}, {.addr=0xb35a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb35a, .value=0xe6, .type=IO_READ},
        {.addr=0xb35b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_029B) {
    const struct CPU_State initial_cpu = {.pc=0xf2a8, .a=0xc5, .x=0x6c, .y=0xb4, .sp=0x46, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xef}, {.addr=0xf2a8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf2a9, .a=0xef, .x=0x6c, .y=0xb4, .sp=0x46, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xef}, {.addr=0xf2a8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf2a8, .value=0xe6, .type=IO_READ},
        {.addr=0xf2a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9501, .a=0xdb, .x=0x2a, .y=0x98, .sp=0x54, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xc7}, {.addr=0x9501, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9502, .a=0xc7, .x=0x2a, .y=0x98, .sp=0x54, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xc7}, {.addr=0x9501, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9501, .value=0xe6, .type=IO_READ},
        {.addr=0x9502, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_029D) {
    const struct CPU_State initial_cpu = {.pc=0x2ef2, .a=0xe8, .x=0xb9, .y=0xec, .sp=0x53, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x7c}, {.addr=0x2ef2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ef3, .a=0x7c, .x=0xb9, .y=0xec, .sp=0x53, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x7c}, {.addr=0x2ef2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ef2, .value=0xe6, .type=IO_READ},
        {.addr=0x2ef3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_029E) {
    const struct CPU_State initial_cpu = {.pc=0x69f2, .a=0x00, .x=0xad, .y=0x74, .sp=0x9f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x32}, {.addr=0x69f2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x69f3, .a=0x32, .x=0xad, .y=0x74, .sp=0x9f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x32}, {.addr=0x69f2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x69f2, .value=0xe6, .type=IO_READ},
        {.addr=0x69f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_029F) {
    const struct CPU_State initial_cpu = {.pc=0xc4e8, .a=0x93, .x=0xd2, .y=0x95, .sp=0xa9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xce}, {.addr=0xc4e8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc4e9, .a=0xce, .x=0xd2, .y=0x95, .sp=0xa9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xce}, {.addr=0xc4e8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc4e8, .value=0xe6, .type=IO_READ},
        {.addr=0xc4e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x4ecf, .a=0x3e, .x=0x4d, .y=0x46, .sp=0x61, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xf3}, {.addr=0x4ecf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4ed0, .a=0xf3, .x=0x4d, .y=0x46, .sp=0x61, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xf3}, {.addr=0x4ecf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4ecf, .value=0xe6, .type=IO_READ},
        {.addr=0x4ed0, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xacc6, .a=0x55, .x=0x28, .y=0x0e, .sp=0x63, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xae}, {.addr=0xacc6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xacc7, .a=0xae, .x=0x28, .y=0x0e, .sp=0x63, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xae}, {.addr=0xacc6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xacc6, .value=0xe6, .type=IO_READ},
        {.addr=0xacc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x40b8, .a=0xb1, .x=0x78, .y=0x82, .sp=0x13, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xa4}, {.addr=0x40b8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x40b9, .a=0xa4, .x=0x78, .y=0x82, .sp=0x13, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xa4}, {.addr=0x40b8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x40b8, .value=0xe6, .type=IO_READ},
        {.addr=0x40b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x8c56, .a=0x22, .x=0x41, .y=0xaf, .sp=0xcf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xcd}, {.addr=0x8c56, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8c57, .a=0xcd, .x=0x41, .y=0xaf, .sp=0xcf, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xcd}, {.addr=0x8c56, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8c56, .value=0xe6, .type=IO_READ},
        {.addr=0x8c57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xdd56, .a=0x5e, .x=0x55, .y=0x3e, .sp=0x72, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0xde}, {.addr=0xdd56, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdd57, .a=0xde, .x=0x55, .y=0x3e, .sp=0x72, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0xde}, {.addr=0xdd56, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdd56, .value=0xe6, .type=IO_READ},
        {.addr=0xdd57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x342f, .a=0xd6, .x=0xa8, .y=0xdd, .sp=0xd6, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xc3}, {.addr=0x342f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3430, .a=0xc3, .x=0xa8, .y=0xdd, .sp=0xd6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xc3}, {.addr=0x342f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x342f, .value=0xe6, .type=IO_READ},
        {.addr=0x3430, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x5ae5, .a=0xfa, .x=0xdb, .y=0xf9, .sp=0xd1, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x0a}, {.addr=0x5ae5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5ae6, .a=0x0a, .x=0xdb, .y=0xf9, .sp=0xd1, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x0a}, {.addr=0x5ae5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5ae5, .value=0xe6, .type=IO_READ},
        {.addr=0x5ae6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x64ff, .a=0x90, .x=0xe2, .y=0xad, .sp=0xbe, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xeb}, {.addr=0x64ff, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6500, .a=0xeb, .x=0xe2, .y=0xad, .sp=0xbe, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xeb}, {.addr=0x64ff, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x64ff, .value=0xe6, .type=IO_READ},
        {.addr=0x6500, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xfbb4, .a=0xa8, .x=0x5f, .y=0x64, .sp=0x3c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xa5}, {.addr=0xfbb4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfbb5, .a=0xa5, .x=0x5f, .y=0x64, .sp=0x3c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xa5}, {.addr=0xfbb4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfbb4, .value=0xe6, .type=IO_READ},
        {.addr=0xfbb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xea65, .a=0xee, .x=0xdd, .y=0x90, .sp=0x1e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x18}, {.addr=0xea65, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xea66, .a=0x18, .x=0xdd, .y=0x90, .sp=0x1e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x18}, {.addr=0xea65, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xea65, .value=0xe6, .type=IO_READ},
        {.addr=0xea66, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x3caa, .a=0xcd, .x=0x59, .y=0xfd, .sp=0x29, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x20}, {.addr=0x3caa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3cab, .a=0x20, .x=0x59, .y=0xfd, .sp=0x29, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x20}, {.addr=0x3caa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3caa, .value=0xe6, .type=IO_READ},
        {.addr=0x3cab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x4339, .a=0xd9, .x=0xfe, .y=0x3d, .sp=0x45, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x6e}, {.addr=0x4339, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x433a, .a=0x6e, .x=0xfe, .y=0x3d, .sp=0x45, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x6e}, {.addr=0x4339, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4339, .value=0xe6, .type=IO_READ},
        {.addr=0x433a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x85dd, .a=0x4d, .x=0x45, .y=0x7c, .sp=0x00, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x4b}, {.addr=0x85dd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x85de, .a=0x4b, .x=0x45, .y=0x7c, .sp=0x00, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x4b}, {.addr=0x85dd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x85dd, .value=0xe6, .type=IO_READ},
        {.addr=0x85de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x6f4b, .a=0x30, .x=0xb0, .y=0x74, .sp=0x9d, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x28}, {.addr=0x6f4b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6f4c, .a=0x28, .x=0xb0, .y=0x74, .sp=0x9d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x28}, {.addr=0x6f4b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6f4b, .value=0xe6, .type=IO_READ},
        {.addr=0x6f4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x088d, .a=0xca, .x=0x4c, .y=0xa2, .sp=0x2e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xb4}, {.addr=0x088d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x088e, .a=0xb4, .x=0x4c, .y=0xa2, .sp=0x2e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xb4}, {.addr=0x088d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x088d, .value=0xe6, .type=IO_READ},
        {.addr=0x088e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x8366, .a=0x35, .x=0x4c, .y=0x9d, .sp=0xfb, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xec}, {.addr=0x8366, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8367, .a=0xec, .x=0x4c, .y=0x9d, .sp=0xfb, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xec}, {.addr=0x8366, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8366, .value=0xe6, .type=IO_READ},
        {.addr=0x8367, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x57ed, .a=0x71, .x=0x3f, .y=0xfe, .sp=0x75, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xfa}, {.addr=0x57ed, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x57ee, .a=0xfa, .x=0x3f, .y=0xfe, .sp=0x75, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xfa}, {.addr=0x57ed, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x57ed, .value=0xe6, .type=IO_READ},
        {.addr=0x57ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xdf19, .a=0x70, .x=0xe1, .y=0x6b, .sp=0x7f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x18}, {.addr=0xdf19, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdf1a, .a=0x18, .x=0xe1, .y=0x6b, .sp=0x7f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x18}, {.addr=0xdf19, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdf19, .value=0xe6, .type=IO_READ},
        {.addr=0xdf1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x0f13, .a=0xee, .x=0x30, .y=0x57, .sp=0x61, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xb3}, {.addr=0x0f13, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0f14, .a=0xb3, .x=0x30, .y=0x57, .sp=0x61, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xb3}, {.addr=0x0f13, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0f13, .value=0xe6, .type=IO_READ},
        {.addr=0x0f14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x1665, .a=0xd3, .x=0x9c, .y=0x19, .sp=0x42, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xaa}, {.addr=0x1665, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1666, .a=0xaa, .x=0x9c, .y=0x19, .sp=0x42, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xaa}, {.addr=0x1665, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1665, .value=0xe6, .type=IO_READ},
        {.addr=0x1666, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xea5a, .a=0xbf, .x=0x76, .y=0x32, .sp=0x10, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xd4}, {.addr=0xea5a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xea5b, .a=0xd4, .x=0x76, .y=0x32, .sp=0x10, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xd4}, {.addr=0xea5a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xea5a, .value=0xe6, .type=IO_READ},
        {.addr=0xea5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xed54, .a=0x5e, .x=0xf3, .y=0x76, .sp=0xe1, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xe3}, {.addr=0xed54, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xed55, .a=0xe3, .x=0xf3, .y=0x76, .sp=0xe1, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xe3}, {.addr=0xed54, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xed54, .value=0xe6, .type=IO_READ},
        {.addr=0xed55, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x3e3a, .a=0x03, .x=0xb6, .y=0x93, .sp=0x3c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x93}, {.addr=0x3e3a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3e3b, .a=0x93, .x=0xb6, .y=0x93, .sp=0x3c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x93}, {.addr=0x3e3a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3e3a, .value=0xe6, .type=IO_READ},
        {.addr=0x3e3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x63c8, .a=0x49, .x=0xdf, .y=0x84, .sp=0x2d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xc3}, {.addr=0x63c8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x63c9, .a=0xc3, .x=0xdf, .y=0x84, .sp=0x2d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xc3}, {.addr=0x63c8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x63c8, .value=0xe6, .type=IO_READ},
        {.addr=0x63c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x1a5b, .a=0x9f, .x=0x3a, .y=0x6e, .sp=0x7e, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xab}, {.addr=0x1a5b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1a5c, .a=0xab, .x=0x3a, .y=0x6e, .sp=0x7e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xab}, {.addr=0x1a5b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1a5b, .value=0xe6, .type=IO_READ},
        {.addr=0x1a5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xc93c, .a=0x3c, .x=0x2f, .y=0xe7, .sp=0x98, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x0a}, {.addr=0xc93c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc93d, .a=0x0a, .x=0x2f, .y=0xe7, .sp=0x98, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x0a}, {.addr=0xc93c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc93c, .value=0xe6, .type=IO_READ},
        {.addr=0xc93d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xfde0, .a=0xae, .x=0x1d, .y=0x5c, .sp=0xd3, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x06}, {.addr=0xfde0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfde1, .a=0x06, .x=0x1d, .y=0x5c, .sp=0xd3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x06}, {.addr=0xfde0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfde0, .value=0xe6, .type=IO_READ},
        {.addr=0xfde1, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x43ca, .a=0x33, .x=0x43, .y=0xc1, .sp=0xa6, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x82}, {.addr=0x43ca, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x43cb, .a=0x82, .x=0x43, .y=0xc1, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x82}, {.addr=0x43ca, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x43ca, .value=0xe6, .type=IO_READ},
        {.addr=0x43cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x3e62, .a=0x8d, .x=0x22, .y=0xed, .sp=0xb8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xa1}, {.addr=0x3e62, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3e63, .a=0xa1, .x=0x22, .y=0xed, .sp=0xb8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xa1}, {.addr=0x3e62, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3e62, .value=0xe6, .type=IO_READ},
        {.addr=0x3e63, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xcfd9, .a=0x87, .x=0xd3, .y=0xc4, .sp=0x72, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xc7}, {.addr=0xcfd9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcfda, .a=0xc7, .x=0xd3, .y=0xc4, .sp=0x72, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xc7}, {.addr=0xcfd9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcfd9, .value=0xe6, .type=IO_READ},
        {.addr=0xcfda, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x4175, .a=0xa3, .x=0xcf, .y=0x88, .sp=0xbc, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xc1}, {.addr=0x4175, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4176, .a=0xc1, .x=0xcf, .y=0x88, .sp=0xbc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xc1}, {.addr=0x4175, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4175, .value=0xe6, .type=IO_READ},
        {.addr=0x4176, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xb4fa, .a=0x22, .x=0x3e, .y=0xdb, .sp=0xf5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0xf3}, {.addr=0xb4fa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb4fb, .a=0xf3, .x=0x3e, .y=0xdb, .sp=0xf5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0xf3}, {.addr=0xb4fa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb4fa, .value=0xe6, .type=IO_READ},
        {.addr=0xb4fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xd470, .a=0xd8, .x=0x5a, .y=0x39, .sp=0xc3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xe3}, {.addr=0xd470, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd471, .a=0xe3, .x=0x5a, .y=0x39, .sp=0xc3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xe3}, {.addr=0xd470, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd470, .value=0xe6, .type=IO_READ},
        {.addr=0xd471, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x2bd8, .a=0xb5, .x=0x66, .y=0x0c, .sp=0x0a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x46}, {.addr=0x2bd8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2bd9, .a=0x46, .x=0x66, .y=0x0c, .sp=0x0a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x46}, {.addr=0x2bd8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2bd8, .value=0xe6, .type=IO_READ},
        {.addr=0x2bd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xaa27, .a=0xe7, .x=0xdc, .y=0xfb, .sp=0x51, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x3f}, {.addr=0xaa27, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaa28, .a=0x3f, .x=0xdc, .y=0xfb, .sp=0x51, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x3f}, {.addr=0xaa27, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaa27, .value=0xe6, .type=IO_READ},
        {.addr=0xaa28, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xbd80, .a=0x68, .x=0x7c, .y=0xac, .sp=0x9f, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x47}, {.addr=0xbd80, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbd81, .a=0x47, .x=0x7c, .y=0xac, .sp=0x9f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x47}, {.addr=0xbd80, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbd80, .value=0xe6, .type=IO_READ},
        {.addr=0xbd81, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x01eb, .a=0x84, .x=0xa7, .y=0xf3, .sp=0xfd, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x7b}, {.addr=0x01eb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x01ec, .a=0x7b, .x=0xa7, .y=0xf3, .sp=0xfd, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x7b}, {.addr=0x01eb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x01eb, .value=0xe6, .type=IO_READ},
        {.addr=0x01ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2adc, .a=0x86, .x=0xe1, .y=0x9b, .sp=0x6a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x71}, {.addr=0x2adc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2add, .a=0x71, .x=0xe1, .y=0x9b, .sp=0x6a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x71}, {.addr=0x2adc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2adc, .value=0xe6, .type=IO_READ},
        {.addr=0x2add, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6648, .a=0x5a, .x=0xa4, .y=0x9d, .sp=0x38, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x81}, {.addr=0x6648, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6649, .a=0x81, .x=0xa4, .y=0x9d, .sp=0x38, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x81}, {.addr=0x6648, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6648, .value=0xe6, .type=IO_READ},
        {.addr=0x6649, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x39a9, .a=0xb5, .x=0xa1, .y=0x5a, .sp=0x82, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xc4}, {.addr=0x39a9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x39aa, .a=0xc4, .x=0xa1, .y=0x5a, .sp=0x82, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xc4}, {.addr=0x39a9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x39a9, .value=0xe6, .type=IO_READ},
        {.addr=0x39aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x939d, .a=0x26, .x=0x0c, .y=0x9e, .sp=0x01, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x4e}, {.addr=0x939d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x939e, .a=0x4e, .x=0x0c, .y=0x9e, .sp=0x01, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x4e}, {.addr=0x939d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x939d, .value=0xe6, .type=IO_READ},
        {.addr=0x939e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x5782, .a=0x33, .x=0x79, .y=0x08, .sp=0x88, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x6e}, {.addr=0x5782, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5783, .a=0x6e, .x=0x79, .y=0x08, .sp=0x88, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x6e}, {.addr=0x5782, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5782, .value=0xe6, .type=IO_READ},
        {.addr=0x5783, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x6c63, .a=0xaa, .x=0x96, .y=0x05, .sp=0x12, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x02}, {.addr=0x6c63, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6c64, .a=0x02, .x=0x96, .y=0x05, .sp=0x12, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x02}, {.addr=0x6c63, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6c63, .value=0xe6, .type=IO_READ},
        {.addr=0x6c64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x11bd, .a=0xb7, .x=0xff, .y=0x70, .sp=0x9e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x13}, {.addr=0x11bd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x11be, .a=0x13, .x=0xff, .y=0x70, .sp=0x9e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x13}, {.addr=0x11bd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x11bd, .value=0xe6, .type=IO_READ},
        {.addr=0x11be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xfff0, .a=0xfe, .x=0x0b, .y=0xed, .sp=0xc5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x70}, {.addr=0xfff0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfff1, .a=0x70, .x=0x0b, .y=0xed, .sp=0xc5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x70}, {.addr=0xfff0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfff0, .value=0xe6, .type=IO_READ},
        {.addr=0xfff1, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x4763, .a=0xdd, .x=0xda, .y=0xa5, .sp=0xfe, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x51}, {.addr=0x4763, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4764, .a=0x51, .x=0xda, .y=0xa5, .sp=0xfe, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x51}, {.addr=0x4763, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4763, .value=0xe6, .type=IO_READ},
        {.addr=0x4764, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xbe6c, .a=0x98, .x=0xde, .y=0x45, .sp=0x35, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xac}, {.addr=0xbe6c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbe6d, .a=0xac, .x=0xde, .y=0x45, .sp=0x35, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xac}, {.addr=0xbe6c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbe6c, .value=0xe6, .type=IO_READ},
        {.addr=0xbe6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xc428, .a=0x33, .x=0x95, .y=0x5b, .sp=0x99, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x63}, {.addr=0xc428, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc429, .a=0x63, .x=0x95, .y=0x5b, .sp=0x99, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x63}, {.addr=0xc428, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc428, .value=0xe6, .type=IO_READ},
        {.addr=0xc429, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xa950, .a=0xc2, .x=0x2e, .y=0x20, .sp=0x6e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xa4}, {.addr=0xa950, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa951, .a=0xa4, .x=0x2e, .y=0x20, .sp=0x6e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xa4}, {.addr=0xa950, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa950, .value=0xe6, .type=IO_READ},
        {.addr=0xa951, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xf0fc, .a=0xf5, .x=0xb0, .y=0xae, .sp=0x87, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x30}, {.addr=0xf0fc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf0fd, .a=0x30, .x=0xb0, .y=0xae, .sp=0x87, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x30}, {.addr=0xf0fc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf0fc, .value=0xe6, .type=IO_READ},
        {.addr=0xf0fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x1f25, .a=0x30, .x=0x0a, .y=0x58, .sp=0xd0, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xba}, {.addr=0x1f25, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1f26, .a=0xba, .x=0x0a, .y=0x58, .sp=0xd0, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xba}, {.addr=0x1f25, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1f25, .value=0xe6, .type=IO_READ},
        {.addr=0x1f26, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x5a05, .a=0x22, .x=0x6a, .y=0x1e, .sp=0xac, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xa3}, {.addr=0x5a05, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5a06, .a=0xa3, .x=0x6a, .y=0x1e, .sp=0xac, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xa3}, {.addr=0x5a05, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5a05, .value=0xe6, .type=IO_READ},
        {.addr=0x5a06, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xc52b, .a=0x55, .x=0xed, .y=0x86, .sp=0x5c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xff}, {.addr=0xc52b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc52c, .a=0xff, .x=0xed, .y=0x86, .sp=0x5c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xff}, {.addr=0xc52b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc52b, .value=0xe6, .type=IO_READ},
        {.addr=0xc52c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x6591, .a=0xc8, .x=0x95, .y=0x61, .sp=0xa7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0xc4}, {.addr=0x6591, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6592, .a=0xc4, .x=0x95, .y=0x61, .sp=0xa7, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0xc4}, {.addr=0x6591, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6591, .value=0xe6, .type=IO_READ},
        {.addr=0x6592, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xdb09, .a=0x08, .x=0x0f, .y=0x68, .sp=0x2c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xa9}, {.addr=0xdb09, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdb0a, .a=0xa9, .x=0x0f, .y=0x68, .sp=0x2c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xa9}, {.addr=0xdb09, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdb09, .value=0xe6, .type=IO_READ},
        {.addr=0xdb0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x7e11, .a=0x49, .x=0x28, .y=0x1a, .sp=0x4f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x9b}, {.addr=0x7e11, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7e12, .a=0x9b, .x=0x28, .y=0x1a, .sp=0x4f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x9b}, {.addr=0x7e11, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7e11, .value=0xe6, .type=IO_READ},
        {.addr=0x7e12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x210e, .a=0xa9, .x=0xfe, .y=0x1f, .sp=0xd6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xc5}, {.addr=0x210e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x210f, .a=0xc5, .x=0xfe, .y=0x1f, .sp=0xd6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xc5}, {.addr=0x210e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x210e, .value=0xe6, .type=IO_READ},
        {.addr=0x210f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x4870, .a=0x6a, .x=0xc7, .y=0x44, .sp=0x33, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0xd0}, {.addr=0x4870, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4871, .a=0xd0, .x=0xc7, .y=0x44, .sp=0x33, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0xd0}, {.addr=0x4870, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4870, .value=0xe6, .type=IO_READ},
        {.addr=0x4871, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x7685, .a=0x9d, .x=0x9d, .y=0x8d, .sp=0x8a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xa2}, {.addr=0x7685, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7686, .a=0xa2, .x=0x9d, .y=0x8d, .sp=0x8a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xa2}, {.addr=0x7685, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7685, .value=0xe6, .type=IO_READ},
        {.addr=0x7686, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xa506, .a=0x68, .x=0xea, .y=0x2e, .sp=0x04, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x89}, {.addr=0xa506, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa507, .a=0x89, .x=0xea, .y=0x2e, .sp=0x04, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x89}, {.addr=0xa506, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa506, .value=0xe6, .type=IO_READ},
        {.addr=0xa507, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xacea, .a=0x16, .x=0x8f, .y=0x03, .sp=0x9b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xf8}, {.addr=0xacea, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaceb, .a=0xf8, .x=0x8f, .y=0x03, .sp=0x9b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xf8}, {.addr=0xacea, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xacea, .value=0xe6, .type=IO_READ},
        {.addr=0xaceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x0366, .a=0xae, .x=0xbf, .y=0x96, .sp=0x0c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xcb}, {.addr=0x0366, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0367, .a=0xcb, .x=0xbf, .y=0x96, .sp=0x0c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xcb}, {.addr=0x0366, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0366, .value=0xe6, .type=IO_READ},
        {.addr=0x0367, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x2453, .a=0x9a, .x=0xd0, .y=0x3e, .sp=0x3a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xf1}, {.addr=0x2453, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2454, .a=0xf1, .x=0xd0, .y=0x3e, .sp=0x3a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xf1}, {.addr=0x2453, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2453, .value=0xe6, .type=IO_READ},
        {.addr=0x2454, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x3a56, .a=0xea, .x=0x9d, .y=0xa5, .sp=0xe0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x21}, {.addr=0x3a56, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3a57, .a=0x21, .x=0x9d, .y=0xa5, .sp=0xe0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x21}, {.addr=0x3a56, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3a56, .value=0xe6, .type=IO_READ},
        {.addr=0x3a57, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x4812, .a=0x5e, .x=0x4b, .y=0x6f, .sp=0xf1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xeb}, {.addr=0x4812, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4813, .a=0xeb, .x=0x4b, .y=0x6f, .sp=0xf1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xeb}, {.addr=0x4812, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4812, .value=0xe6, .type=IO_READ},
        {.addr=0x4813, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xda1c, .a=0x19, .x=0xe9, .y=0x6d, .sp=0x6a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xaf}, {.addr=0xda1c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xda1d, .a=0xaf, .x=0xe9, .y=0x6d, .sp=0x6a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xaf}, {.addr=0xda1c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xda1c, .value=0xe6, .type=IO_READ},
        {.addr=0xda1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6e07, .a=0xc6, .x=0xda, .y=0x36, .sp=0xc4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xd7}, {.addr=0x6e07, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6e08, .a=0xd7, .x=0xda, .y=0x36, .sp=0xc4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xd7}, {.addr=0x6e07, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6e07, .value=0xe6, .type=IO_READ},
        {.addr=0x6e08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x87b5, .a=0x58, .x=0xd7, .y=0x6e, .sp=0xd9, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x11}, {.addr=0x87b5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x87b6, .a=0x11, .x=0xd7, .y=0x6e, .sp=0xd9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x11}, {.addr=0x87b5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x87b5, .value=0xe6, .type=IO_READ},
        {.addr=0x87b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xf362, .a=0xf0, .x=0x8d, .y=0x14, .sp=0x3f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x43}, {.addr=0xf362, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf363, .a=0x43, .x=0x8d, .y=0x14, .sp=0x3f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x43}, {.addr=0xf362, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf362, .value=0xe6, .type=IO_READ},
        {.addr=0xf363, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x9030, .a=0xc7, .x=0x86, .y=0x3f, .sp=0x73, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x5c}, {.addr=0x9030, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9031, .a=0x5c, .x=0x86, .y=0x3f, .sp=0x73, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x5c}, {.addr=0x9030, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9030, .value=0xe6, .type=IO_READ},
        {.addr=0x9031, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x360b, .a=0x2b, .x=0x43, .y=0x35, .sp=0x82, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xc3}, {.addr=0x360b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x360c, .a=0xc3, .x=0x43, .y=0x35, .sp=0x82, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xc3}, {.addr=0x360b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x360b, .value=0xe6, .type=IO_READ},
        {.addr=0x360c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xad53, .a=0x02, .x=0xbd, .y=0xf8, .sp=0xd9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xa0}, {.addr=0xad53, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xad54, .a=0xa0, .x=0xbd, .y=0xf8, .sp=0xd9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xa0}, {.addr=0xad53, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xad53, .value=0xe6, .type=IO_READ},
        {.addr=0xad54, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x8e91, .a=0xa4, .x=0x94, .y=0x31, .sp=0xb6, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x6c}, {.addr=0x8e91, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8e92, .a=0x6c, .x=0x94, .y=0x31, .sp=0xb6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x6c}, {.addr=0x8e91, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8e91, .value=0xe6, .type=IO_READ},
        {.addr=0x8e92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x597e, .a=0xcf, .x=0xbc, .y=0x00, .sp=0x8a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x0f}, {.addr=0x597e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x597f, .a=0x0f, .x=0xbc, .y=0x00, .sp=0x8a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x0f}, {.addr=0x597e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x597e, .value=0xe6, .type=IO_READ},
        {.addr=0x597f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xa985, .a=0x42, .x=0xb6, .y=0xbb, .sp=0x7c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0xd2}, {.addr=0xa985, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa986, .a=0xd2, .x=0xb6, .y=0xbb, .sp=0x7c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0xd2}, {.addr=0xa985, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa985, .value=0xe6, .type=IO_READ},
        {.addr=0xa986, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x6c10, .a=0xd1, .x=0x45, .y=0xff, .sp=0x4c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x4d}, {.addr=0x6c10, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6c11, .a=0x4d, .x=0x45, .y=0xff, .sp=0x4c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x4d}, {.addr=0x6c10, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6c10, .value=0xe6, .type=IO_READ},
        {.addr=0x6c11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x7b27, .a=0x3f, .x=0x08, .y=0x67, .sp=0x77, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x17}, {.addr=0x7b27, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7b28, .a=0x17, .x=0x08, .y=0x67, .sp=0x77, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x17}, {.addr=0x7b27, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7b27, .value=0xe6, .type=IO_READ},
        {.addr=0x7b28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x0682, .a=0xed, .x=0x89, .y=0x65, .sp=0x6d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x7f}, {.addr=0x0682, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0683, .a=0x7f, .x=0x89, .y=0x65, .sp=0x6d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x7f}, {.addr=0x0682, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0682, .value=0xe6, .type=IO_READ},
        {.addr=0x0683, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x38e2, .a=0xb3, .x=0x43, .y=0xe2, .sp=0xe9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xce}, {.addr=0x38e2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x38e3, .a=0xce, .x=0x43, .y=0xe2, .sp=0xe9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xce}, {.addr=0x38e2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x38e2, .value=0xe6, .type=IO_READ},
        {.addr=0x38e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x4be8, .a=0xf7, .x=0x1b, .y=0x46, .sp=0xc5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x34}, {.addr=0x4be8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4be9, .a=0x34, .x=0x1b, .y=0x46, .sp=0xc5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x34}, {.addr=0x4be8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4be8, .value=0xe6, .type=IO_READ},
        {.addr=0x4be9, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xbdcc, .a=0xe9, .x=0x85, .y=0xa4, .sp=0xb8, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x25}, {.addr=0xbdcc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbdcd, .a=0x25, .x=0x85, .y=0xa4, .sp=0xb8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x25}, {.addr=0xbdcc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbdcc, .value=0xe6, .type=IO_READ},
        {.addr=0xbdcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x8129, .a=0x14, .x=0xd1, .y=0x8a, .sp=0xa1, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x08}, {.addr=0x8129, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x812a, .a=0x08, .x=0xd1, .y=0x8a, .sp=0xa1, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x08}, {.addr=0x8129, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8129, .value=0xe6, .type=IO_READ},
        {.addr=0x812a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xcf6d, .a=0xc1, .x=0x5f, .y=0x28, .sp=0xb2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x0e}, {.addr=0xcf6d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcf6e, .a=0x0e, .x=0x5f, .y=0x28, .sp=0xb2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x0e}, {.addr=0xcf6d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcf6d, .value=0xe6, .type=IO_READ},
        {.addr=0xcf6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xd6fd, .a=0x61, .x=0x35, .y=0xce, .sp=0xe7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x52}, {.addr=0xd6fd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd6fe, .a=0x52, .x=0x35, .y=0xce, .sp=0xe7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x52}, {.addr=0xd6fd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd6fd, .value=0xe6, .type=IO_READ},
        {.addr=0xd6fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x8dc6, .a=0xd2, .x=0x0d, .y=0x3f, .sp=0xf2, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x7a}, {.addr=0x8dc6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8dc7, .a=0x7a, .x=0x0d, .y=0x3f, .sp=0xf2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x7a}, {.addr=0x8dc6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8dc6, .value=0xe6, .type=IO_READ},
        {.addr=0x8dc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x2cb8, .a=0xd5, .x=0xe6, .y=0xf2, .sp=0xc2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x94}, {.addr=0x2cb8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2cb9, .a=0x94, .x=0xe6, .y=0xf2, .sp=0xc2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x94}, {.addr=0x2cb8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2cb8, .value=0xe6, .type=IO_READ},
        {.addr=0x2cb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x6513, .a=0x11, .x=0x78, .y=0xdf, .sp=0x2a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x38}, {.addr=0x6513, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6514, .a=0x38, .x=0x78, .y=0xdf, .sp=0x2a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x38}, {.addr=0x6513, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6513, .value=0xe6, .type=IO_READ},
        {.addr=0x6514, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xd673, .a=0x36, .x=0x83, .y=0x74, .sp=0x26, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xb2}, {.addr=0xd673, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd674, .a=0xb2, .x=0x83, .y=0x74, .sp=0x26, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xb2}, {.addr=0xd673, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd673, .value=0xe6, .type=IO_READ},
        {.addr=0xd674, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x0f2e, .a=0xbe, .x=0xe0, .y=0x9e, .sp=0x65, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x9b}, {.addr=0x0f2e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0f2f, .a=0x9b, .x=0xe0, .y=0x9e, .sp=0x65, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x9b}, {.addr=0x0f2e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0f2e, .value=0xe6, .type=IO_READ},
        {.addr=0x0f2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xdb0e, .a=0x0b, .x=0x5c, .y=0xe2, .sp=0xe7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x71}, {.addr=0xdb0e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdb0f, .a=0x71, .x=0x5c, .y=0xe2, .sp=0xe7, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x71}, {.addr=0xdb0e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdb0e, .value=0xe6, .type=IO_READ},
        {.addr=0xdb0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xec69, .a=0x12, .x=0x14, .y=0x28, .sp=0xd4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x9a}, {.addr=0xec69, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xec6a, .a=0x9a, .x=0x14, .y=0x28, .sp=0xd4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x9a}, {.addr=0xec69, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xec69, .value=0xe6, .type=IO_READ},
        {.addr=0xec6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xd96c, .a=0x2f, .x=0x7f, .y=0x43, .sp=0xcd, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x7a}, {.addr=0xd96c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd96d, .a=0x7a, .x=0x7f, .y=0x43, .sp=0xcd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x7a}, {.addr=0xd96c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd96c, .value=0xe6, .type=IO_READ},
        {.addr=0xd96d, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x9108, .a=0x30, .x=0xe5, .y=0x21, .sp=0x6d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xfe}, {.addr=0x9108, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9109, .a=0xfe, .x=0xe5, .y=0x21, .sp=0x6d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xfe}, {.addr=0x9108, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9108, .value=0xe6, .type=IO_READ},
        {.addr=0x9109, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0300) {
    const struct CPU_State initial_cpu = {.pc=0x7f9b, .a=0xa8, .x=0x5b, .y=0x5c, .sp=0x90, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x3e}, {.addr=0x7f9b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7f9c, .a=0x3e, .x=0x5b, .y=0x5c, .sp=0x90, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x3e}, {.addr=0x7f9b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7f9b, .value=0xe6, .type=IO_READ},
        {.addr=0x7f9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0301) {
    const struct CPU_State initial_cpu = {.pc=0x0209, .a=0xaf, .x=0xf7, .y=0xbc, .sp=0x41, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x98}, {.addr=0x0209, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x020a, .a=0x98, .x=0xf7, .y=0xbc, .sp=0x41, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x98}, {.addr=0x0209, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0209, .value=0xe6, .type=IO_READ},
        {.addr=0x020a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0302) {
    const struct CPU_State initial_cpu = {.pc=0xc2dd, .a=0x79, .x=0x51, .y=0x96, .sp=0x87, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xd8}, {.addr=0xc2dd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc2de, .a=0xd8, .x=0x51, .y=0x96, .sp=0x87, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xd8}, {.addr=0xc2dd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc2dd, .value=0xe6, .type=IO_READ},
        {.addr=0xc2de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0303) {
    const struct CPU_State initial_cpu = {.pc=0x1eef, .a=0x77, .x=0xaf, .y=0x90, .sp=0x5e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xb1}, {.addr=0x1eef, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1ef0, .a=0xb1, .x=0xaf, .y=0x90, .sp=0x5e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xb1}, {.addr=0x1eef, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1eef, .value=0xe6, .type=IO_READ},
        {.addr=0x1ef0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0304) {
    const struct CPU_State initial_cpu = {.pc=0xc932, .a=0x88, .x=0xfc, .y=0x99, .sp=0x9e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x98}, {.addr=0xc932, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc933, .a=0x98, .x=0xfc, .y=0x99, .sp=0x9e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x98}, {.addr=0xc932, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc932, .value=0xe6, .type=IO_READ},
        {.addr=0xc933, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0305) {
    const struct CPU_State initial_cpu = {.pc=0xf8e0, .a=0x6a, .x=0x01, .y=0x61, .sp=0x33, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x8b}, {.addr=0xf8e0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf8e1, .a=0x8b, .x=0x01, .y=0x61, .sp=0x33, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x8b}, {.addr=0xf8e0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf8e0, .value=0xe6, .type=IO_READ},
        {.addr=0xf8e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0306) {
    const struct CPU_State initial_cpu = {.pc=0xb7c3, .a=0x90, .x=0x0a, .y=0xe0, .sp=0x4a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x0c}, {.addr=0xb7c3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb7c4, .a=0x0c, .x=0x0a, .y=0xe0, .sp=0x4a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x0c}, {.addr=0xb7c3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb7c3, .value=0xe6, .type=IO_READ},
        {.addr=0xb7c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0307) {
    const struct CPU_State initial_cpu = {.pc=0x1c69, .a=0x36, .x=0x6f, .y=0xcc, .sp=0x29, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xe2}, {.addr=0x1c69, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1c6a, .a=0xe2, .x=0x6f, .y=0xcc, .sp=0x29, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xe2}, {.addr=0x1c69, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1c69, .value=0xe6, .type=IO_READ},
        {.addr=0x1c6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0308) {
    const struct CPU_State initial_cpu = {.pc=0x978e, .a=0x13, .x=0x5a, .y=0x85, .sp=0x86, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x47}, {.addr=0x978e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x978f, .a=0x47, .x=0x5a, .y=0x85, .sp=0x86, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x47}, {.addr=0x978e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x978e, .value=0xe6, .type=IO_READ},
        {.addr=0x978f, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0309) {
    const struct CPU_State initial_cpu = {.pc=0x8aa3, .a=0xc9, .x=0x15, .y=0x02, .sp=0x79, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x99}, {.addr=0x8aa3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8aa4, .a=0x99, .x=0x15, .y=0x02, .sp=0x79, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x99}, {.addr=0x8aa3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8aa3, .value=0xe6, .type=IO_READ},
        {.addr=0x8aa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_030A) {
    const struct CPU_State initial_cpu = {.pc=0x51b4, .a=0x94, .x=0xbd, .y=0x88, .sp=0x3d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x57}, {.addr=0x51b4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x51b5, .a=0x57, .x=0xbd, .y=0x88, .sp=0x3d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x57}, {.addr=0x51b4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x51b4, .value=0xe6, .type=IO_READ},
        {.addr=0x51b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_030B) {
    const struct CPU_State initial_cpu = {.pc=0xeed2, .a=0x49, .x=0xdc, .y=0x37, .sp=0xe5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x73}, {.addr=0xeed2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xeed3, .a=0x73, .x=0xdc, .y=0x37, .sp=0xe5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x73}, {.addr=0xeed2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xeed2, .value=0xe6, .type=IO_READ},
        {.addr=0xeed3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_030C) {
    const struct CPU_State initial_cpu = {.pc=0x09c0, .a=0xfa, .x=0x77, .y=0x86, .sp=0xdc, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x62}, {.addr=0x09c0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x09c1, .a=0x62, .x=0x77, .y=0x86, .sp=0xdc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x62}, {.addr=0x09c0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x09c0, .value=0xe6, .type=IO_READ},
        {.addr=0x09c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_030D) {
    const struct CPU_State initial_cpu = {.pc=0xd73b, .a=0x53, .x=0xdf, .y=0x16, .sp=0xeb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x21}, {.addr=0xd73b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd73c, .a=0x21, .x=0xdf, .y=0x16, .sp=0xeb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x21}, {.addr=0xd73b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd73b, .value=0xe6, .type=IO_READ},
        {.addr=0xd73c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_030E) {
    const struct CPU_State initial_cpu = {.pc=0xf2f7, .a=0xa7, .x=0xbd, .y=0xe8, .sp=0x29, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x03}, {.addr=0xf2f7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf2f8, .a=0x03, .x=0xbd, .y=0xe8, .sp=0x29, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x03}, {.addr=0xf2f7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf2f7, .value=0xe6, .type=IO_READ},
        {.addr=0xf2f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_030F) {
    const struct CPU_State initial_cpu = {.pc=0x7d62, .a=0xc1, .x=0xaf, .y=0xec, .sp=0x7b, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xe3}, {.addr=0x7d62, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7d63, .a=0xe3, .x=0xaf, .y=0xec, .sp=0x7b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xe3}, {.addr=0x7d62, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7d62, .value=0xe6, .type=IO_READ},
        {.addr=0x7d63, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0310) {
    const struct CPU_State initial_cpu = {.pc=0x693a, .a=0xd9, .x=0x05, .y=0x8d, .sp=0x7c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xac}, {.addr=0x693a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x693b, .a=0xac, .x=0x05, .y=0x8d, .sp=0x7c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xac}, {.addr=0x693a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x693a, .value=0xe6, .type=IO_READ},
        {.addr=0x693b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0311) {
    const struct CPU_State initial_cpu = {.pc=0xbcde, .a=0x01, .x=0x91, .y=0xca, .sp=0x9b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xcf}, {.addr=0xbcde, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbcdf, .a=0xcf, .x=0x91, .y=0xca, .sp=0x9b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xcf}, {.addr=0xbcde, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbcde, .value=0xe6, .type=IO_READ},
        {.addr=0xbcdf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0312) {
    const struct CPU_State initial_cpu = {.pc=0x9a4d, .a=0x35, .x=0xb8, .y=0xd2, .sp=0xc9, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x73}, {.addr=0x9a4d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9a4e, .a=0x73, .x=0xb8, .y=0xd2, .sp=0xc9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x73}, {.addr=0x9a4d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9a4d, .value=0xe6, .type=IO_READ},
        {.addr=0x9a4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0313) {
    const struct CPU_State initial_cpu = {.pc=0x1456, .a=0x79, .x=0xc7, .y=0x0b, .sp=0xf8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x54}, {.addr=0x1456, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1457, .a=0x54, .x=0xc7, .y=0x0b, .sp=0xf8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x54}, {.addr=0x1456, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1456, .value=0xe6, .type=IO_READ},
        {.addr=0x1457, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0314) {
    const struct CPU_State initial_cpu = {.pc=0x5503, .a=0xc1, .x=0x21, .y=0x5a, .sp=0xdf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xa0}, {.addr=0x5503, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5504, .a=0xa0, .x=0x21, .y=0x5a, .sp=0xdf, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xa0}, {.addr=0x5503, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5503, .value=0xe6, .type=IO_READ},
        {.addr=0x5504, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0315) {
    const struct CPU_State initial_cpu = {.pc=0x76b8, .a=0xa7, .x=0xda, .y=0x03, .sp=0x34, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xc1}, {.addr=0x76b8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x76b9, .a=0xc1, .x=0xda, .y=0x03, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xc1}, {.addr=0x76b8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x76b8, .value=0xe6, .type=IO_READ},
        {.addr=0x76b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0316) {
    const struct CPU_State initial_cpu = {.pc=0x4070, .a=0xf4, .x=0x0d, .y=0x33, .sp=0x57, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x67}, {.addr=0x4070, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4071, .a=0x67, .x=0x0d, .y=0x33, .sp=0x57, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x67}, {.addr=0x4070, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4070, .value=0xe6, .type=IO_READ},
        {.addr=0x4071, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0317) {
    const struct CPU_State initial_cpu = {.pc=0xdbde, .a=0x25, .x=0xcb, .y=0x71, .sp=0x68, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xbc}, {.addr=0xdbde, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdbdf, .a=0xbc, .x=0xcb, .y=0x71, .sp=0x68, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xbc}, {.addr=0xdbde, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdbde, .value=0xe6, .type=IO_READ},
        {.addr=0xdbdf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0318) {
    const struct CPU_State initial_cpu = {.pc=0x1e56, .a=0xdf, .x=0x41, .y=0x4c, .sp=0x98, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xa3}, {.addr=0x1e56, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1e57, .a=0xa3, .x=0x41, .y=0x4c, .sp=0x98, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xa3}, {.addr=0x1e56, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1e56, .value=0xe6, .type=IO_READ},
        {.addr=0x1e57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0319) {
    const struct CPU_State initial_cpu = {.pc=0x1a43, .a=0x51, .x=0x42, .y=0x07, .sp=0xf5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x63}, {.addr=0x1a43, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1a44, .a=0x63, .x=0x42, .y=0x07, .sp=0xf5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x63}, {.addr=0x1a43, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1a43, .value=0xe6, .type=IO_READ},
        {.addr=0x1a44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_031A) {
    const struct CPU_State initial_cpu = {.pc=0x719e, .a=0x1e, .x=0xb2, .y=0x50, .sp=0x2b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0xe4}, {.addr=0x719e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x719f, .a=0xe4, .x=0xb2, .y=0x50, .sp=0x2b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0xe4}, {.addr=0x719e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x719e, .value=0xe6, .type=IO_READ},
        {.addr=0x719f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_031B) {
    const struct CPU_State initial_cpu = {.pc=0x1713, .a=0x9d, .x=0x86, .y=0x66, .sp=0xcc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xbc}, {.addr=0x1713, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1714, .a=0xbc, .x=0x86, .y=0x66, .sp=0xcc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xbc}, {.addr=0x1713, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1713, .value=0xe6, .type=IO_READ},
        {.addr=0x1714, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_031C) {
    const struct CPU_State initial_cpu = {.pc=0x2d34, .a=0x7c, .x=0x60, .y=0xcd, .sp=0xf7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x94}, {.addr=0x2d34, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2d35, .a=0x94, .x=0x60, .y=0xcd, .sp=0xf7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x94}, {.addr=0x2d34, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2d34, .value=0xe6, .type=IO_READ},
        {.addr=0x2d35, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_031D) {
    const struct CPU_State initial_cpu = {.pc=0x7715, .a=0x47, .x=0x0a, .y=0x79, .sp=0xdc, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x1c}, {.addr=0x7715, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7716, .a=0x1c, .x=0x0a, .y=0x79, .sp=0xdc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x1c}, {.addr=0x7715, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7715, .value=0xe6, .type=IO_READ},
        {.addr=0x7716, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_031E) {
    const struct CPU_State initial_cpu = {.pc=0x5a0b, .a=0xc7, .x=0x1b, .y=0x51, .sp=0x2c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x93}, {.addr=0x5a0b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5a0c, .a=0x93, .x=0x1b, .y=0x51, .sp=0x2c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x93}, {.addr=0x5a0b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5a0b, .value=0xe6, .type=IO_READ},
        {.addr=0x5a0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_031F) {
    const struct CPU_State initial_cpu = {.pc=0xfe39, .a=0x48, .x=0x94, .y=0x81, .sp=0x29, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xe4}, {.addr=0xfe39, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfe3a, .a=0xe4, .x=0x94, .y=0x81, .sp=0x29, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xe4}, {.addr=0xfe39, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfe39, .value=0xe6, .type=IO_READ},
        {.addr=0xfe3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2cd4, .a=0x37, .x=0x21, .y=0x60, .sp=0x1c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x01}, {.addr=0x2cd4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2cd5, .a=0x01, .x=0x21, .y=0x60, .sp=0x1c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x01}, {.addr=0x2cd4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2cd4, .value=0xe6, .type=IO_READ},
        {.addr=0x2cd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0321) {
    const struct CPU_State initial_cpu = {.pc=0x9fc2, .a=0x23, .x=0xb8, .y=0x44, .sp=0x93, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0xe3}, {.addr=0x9fc2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9fc3, .a=0xe3, .x=0xb8, .y=0x44, .sp=0x93, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0xe3}, {.addr=0x9fc2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9fc2, .value=0xe6, .type=IO_READ},
        {.addr=0x9fc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0322) {
    const struct CPU_State initial_cpu = {.pc=0xfc6a, .a=0xb0, .x=0xec, .y=0x75, .sp=0x85, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x2f}, {.addr=0xfc6a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfc6b, .a=0x2f, .x=0xec, .y=0x75, .sp=0x85, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x2f}, {.addr=0xfc6a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfc6a, .value=0xe6, .type=IO_READ},
        {.addr=0xfc6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0323) {
    const struct CPU_State initial_cpu = {.pc=0xef07, .a=0xe8, .x=0xeb, .y=0x25, .sp=0xb8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x36}, {.addr=0xef07, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xef08, .a=0x36, .x=0xeb, .y=0x25, .sp=0xb8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x36}, {.addr=0xef07, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xef07, .value=0xe6, .type=IO_READ},
        {.addr=0xef08, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0324) {
    const struct CPU_State initial_cpu = {.pc=0xb758, .a=0x9a, .x=0xb7, .y=0xd4, .sp=0x2e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x85}, {.addr=0xb758, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb759, .a=0x85, .x=0xb7, .y=0xd4, .sp=0x2e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x85}, {.addr=0xb758, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb758, .value=0xe6, .type=IO_READ},
        {.addr=0xb759, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0325) {
    const struct CPU_State initial_cpu = {.pc=0x1103, .a=0xa6, .x=0xce, .y=0x2f, .sp=0x39, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0xad}, {.addr=0x1103, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1104, .a=0xad, .x=0xce, .y=0x2f, .sp=0x39, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0xad}, {.addr=0x1103, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1103, .value=0xe6, .type=IO_READ},
        {.addr=0x1104, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0326) {
    const struct CPU_State initial_cpu = {.pc=0xc5ec, .a=0x0e, .x=0xaa, .y=0x28, .sp=0x4d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x46}, {.addr=0xc5ec, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc5ed, .a=0x46, .x=0xaa, .y=0x28, .sp=0x4d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x46}, {.addr=0xc5ec, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc5ec, .value=0xe6, .type=IO_READ},
        {.addr=0xc5ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0327) {
    const struct CPU_State initial_cpu = {.pc=0xd22c, .a=0x84, .x=0xdf, .y=0xd5, .sp=0x12, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x6b}, {.addr=0xd22c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd22d, .a=0x6b, .x=0xdf, .y=0xd5, .sp=0x12, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x6b}, {.addr=0xd22c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd22c, .value=0xe6, .type=IO_READ},
        {.addr=0xd22d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0328) {
    const struct CPU_State initial_cpu = {.pc=0xaee3, .a=0x14, .x=0x5b, .y=0x08, .sp=0xbc, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xdd}, {.addr=0xaee3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaee4, .a=0xdd, .x=0x5b, .y=0x08, .sp=0xbc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xdd}, {.addr=0xaee3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaee3, .value=0xe6, .type=IO_READ},
        {.addr=0xaee4, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf9be, .a=0x98, .x=0x62, .y=0x1a, .sp=0x33, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x42}, {.addr=0xf9be, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf9bf, .a=0x42, .x=0x62, .y=0x1a, .sp=0x33, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x42}, {.addr=0xf9be, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf9be, .value=0xe6, .type=IO_READ},
        {.addr=0xf9bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_032A) {
    const struct CPU_State initial_cpu = {.pc=0x1a58, .a=0x88, .x=0xed, .y=0x94, .sp=0x8d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0xb9}, {.addr=0x1a58, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1a59, .a=0xb9, .x=0xed, .y=0x94, .sp=0x8d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xb9}, {.addr=0x1a58, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1a58, .value=0xe6, .type=IO_READ},
        {.addr=0x1a59, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_032B) {
    const struct CPU_State initial_cpu = {.pc=0x95da, .a=0x3f, .x=0xdd, .y=0xed, .sp=0x97, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x1f}, {.addr=0x95da, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x95db, .a=0x1f, .x=0xdd, .y=0xed, .sp=0x97, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x1f}, {.addr=0x95da, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x95da, .value=0xe6, .type=IO_READ},
        {.addr=0x95db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_032C) {
    const struct CPU_State initial_cpu = {.pc=0xcaab, .a=0x61, .x=0xe7, .y=0xe8, .sp=0xb3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xa3}, {.addr=0xcaab, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcaac, .a=0xa3, .x=0xe7, .y=0xe8, .sp=0xb3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xa3}, {.addr=0xcaab, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcaab, .value=0xe6, .type=IO_READ},
        {.addr=0xcaac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_032D) {
    const struct CPU_State initial_cpu = {.pc=0x779d, .a=0x05, .x=0xe1, .y=0xbd, .sp=0xec, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x48}, {.addr=0x779d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x779e, .a=0x48, .x=0xe1, .y=0xbd, .sp=0xec, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x48}, {.addr=0x779d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x779d, .value=0xe6, .type=IO_READ},
        {.addr=0x779e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_032E) {
    const struct CPU_State initial_cpu = {.pc=0xcd6e, .a=0xd3, .x=0xd7, .y=0xd9, .sp=0xce, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x7a}, {.addr=0xcd6e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcd6f, .a=0x7a, .x=0xd7, .y=0xd9, .sp=0xce, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x7a}, {.addr=0xcd6e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcd6e, .value=0xe6, .type=IO_READ},
        {.addr=0xcd6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_032F) {
    const struct CPU_State initial_cpu = {.pc=0x7cea, .a=0x16, .x=0x3d, .y=0xc4, .sp=0x76, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x4f}, {.addr=0x7cea, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7ceb, .a=0x4f, .x=0x3d, .y=0xc4, .sp=0x76, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x4f}, {.addr=0x7cea, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7cea, .value=0xe6, .type=IO_READ},
        {.addr=0x7ceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0330) {
    const struct CPU_State initial_cpu = {.pc=0x30f7, .a=0xc3, .x=0x3a, .y=0x77, .sp=0x19, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x24}, {.addr=0x30f7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x30f8, .a=0x24, .x=0x3a, .y=0x77, .sp=0x19, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x24}, {.addr=0x30f7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x30f7, .value=0xe6, .type=IO_READ},
        {.addr=0x30f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0332) {
    const struct CPU_State initial_cpu = {.pc=0x03aa, .a=0x5b, .x=0xdb, .y=0x74, .sp=0x67, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x72}, {.addr=0x03aa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x03ab, .a=0x72, .x=0xdb, .y=0x74, .sp=0x67, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x72}, {.addr=0x03aa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x03aa, .value=0xe6, .type=IO_READ},
        {.addr=0x03ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb7ca, .a=0xf4, .x=0x5d, .y=0x0c, .sp=0x1e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x6f}, {.addr=0xb7ca, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb7cb, .a=0x6f, .x=0x5d, .y=0x0c, .sp=0x1e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x6f}, {.addr=0xb7ca, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb7ca, .value=0xe6, .type=IO_READ},
        {.addr=0xb7cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0334) {
    const struct CPU_State initial_cpu = {.pc=0xe3b7, .a=0x8d, .x=0x63, .y=0x34, .sp=0x89, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xd3}, {.addr=0xe3b7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe3b8, .a=0xd3, .x=0x63, .y=0x34, .sp=0x89, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xd3}, {.addr=0xe3b7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe3b7, .value=0xe6, .type=IO_READ},
        {.addr=0xe3b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0335) {
    const struct CPU_State initial_cpu = {.pc=0x712c, .a=0xa7, .x=0x65, .y=0x36, .sp=0x09, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xfe}, {.addr=0x712c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x712d, .a=0xfe, .x=0x65, .y=0x36, .sp=0x09, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xfe}, {.addr=0x712c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x712c, .value=0xe6, .type=IO_READ},
        {.addr=0x712d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3eb0, .a=0xbd, .x=0xdc, .y=0x42, .sp=0xdf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x3c}, {.addr=0x3eb0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3eb1, .a=0x3c, .x=0xdc, .y=0x42, .sp=0xdf, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x3c}, {.addr=0x3eb0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3eb0, .value=0xe6, .type=IO_READ},
        {.addr=0x3eb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0337) {
    const struct CPU_State initial_cpu = {.pc=0x02cc, .a=0xf0, .x=0xb6, .y=0xa2, .sp=0x92, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xb4}, {.addr=0x02cc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x02cd, .a=0xb4, .x=0xb6, .y=0xa2, .sp=0x92, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xb4}, {.addr=0x02cc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x02cc, .value=0xe6, .type=IO_READ},
        {.addr=0x02cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0338) {
    const struct CPU_State initial_cpu = {.pc=0x91e4, .a=0xea, .x=0x61, .y=0x54, .sp=0x47, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xdc}, {.addr=0x91e4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x91e5, .a=0xdc, .x=0x61, .y=0x54, .sp=0x47, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xdc}, {.addr=0x91e4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x91e4, .value=0xe6, .type=IO_READ},
        {.addr=0x91e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0339) {
    const struct CPU_State initial_cpu = {.pc=0x0f38, .a=0x36, .x=0xc9, .y=0xf4, .sp=0xc1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xbd}, {.addr=0x0f38, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0f39, .a=0xbd, .x=0xc9, .y=0xf4, .sp=0xc1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xbd}, {.addr=0x0f38, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0f38, .value=0xe6, .type=IO_READ},
        {.addr=0x0f39, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_033A) {
    const struct CPU_State initial_cpu = {.pc=0x1115, .a=0x04, .x=0x9f, .y=0x99, .sp=0x23, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xa3}, {.addr=0x1115, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1116, .a=0xa3, .x=0x9f, .y=0x99, .sp=0x23, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xa3}, {.addr=0x1115, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1115, .value=0xe6, .type=IO_READ},
        {.addr=0x1116, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0x90, .x=0x46, .y=0x45, .sp=0x10, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xf1}, {.addr=0x6300, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6301, .a=0xf1, .x=0x46, .y=0x45, .sp=0x10, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xf1}, {.addr=0x6300, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0xe6, .type=IO_READ},
        {.addr=0x6301, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_033C) {
    const struct CPU_State initial_cpu = {.pc=0xbf21, .a=0xce, .x=0xba, .y=0xd5, .sp=0xce, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xb8}, {.addr=0xbf21, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbf22, .a=0xb8, .x=0xba, .y=0xd5, .sp=0xce, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xb8}, {.addr=0xbf21, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbf21, .value=0xe6, .type=IO_READ},
        {.addr=0xbf22, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_033D) {
    const struct CPU_State initial_cpu = {.pc=0x2159, .a=0x84, .x=0x96, .y=0x32, .sp=0x74, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x0e}, {.addr=0x2159, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x215a, .a=0x0e, .x=0x96, .y=0x32, .sp=0x74, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x0e}, {.addr=0x2159, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2159, .value=0xe6, .type=IO_READ},
        {.addr=0x215a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_033E) {
    const struct CPU_State initial_cpu = {.pc=0x4c60, .a=0x00, .x=0xdc, .y=0xb6, .sp=0x13, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xed}, {.addr=0x4c60, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4c61, .a=0xed, .x=0xdc, .y=0xb6, .sp=0x13, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xed}, {.addr=0x4c60, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4c60, .value=0xe6, .type=IO_READ},
        {.addr=0x4c61, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_033F) {
    const struct CPU_State initial_cpu = {.pc=0x5956, .a=0x08, .x=0xa5, .y=0xab, .sp=0xaa, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x2d}, {.addr=0x5956, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5957, .a=0x2d, .x=0xa5, .y=0xab, .sp=0xaa, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x2d}, {.addr=0x5956, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5956, .value=0xe6, .type=IO_READ},
        {.addr=0x5957, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0340) {
    const struct CPU_State initial_cpu = {.pc=0xec4c, .a=0xca, .x=0xce, .y=0xde, .sp=0xb9, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x40}, {.addr=0xec4c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xec4d, .a=0x40, .x=0xce, .y=0xde, .sp=0xb9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x40}, {.addr=0xec4c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xec4c, .value=0xe6, .type=IO_READ},
        {.addr=0xec4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0341) {
    const struct CPU_State initial_cpu = {.pc=0x0553, .a=0xa7, .x=0x31, .y=0xf4, .sp=0xd8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x1c}, {.addr=0x0553, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0554, .a=0x1c, .x=0x31, .y=0xf4, .sp=0xd8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x1c}, {.addr=0x0553, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0553, .value=0xe6, .type=IO_READ},
        {.addr=0x0554, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0342) {
    const struct CPU_State initial_cpu = {.pc=0x7e4c, .a=0xf9, .x=0x77, .y=0x0f, .sp=0x50, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x16}, {.addr=0x7e4c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7e4d, .a=0x16, .x=0x77, .y=0x0f, .sp=0x50, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x16}, {.addr=0x7e4c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7e4c, .value=0xe6, .type=IO_READ},
        {.addr=0x7e4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0343) {
    const struct CPU_State initial_cpu = {.pc=0x7568, .a=0xac, .x=0x53, .y=0xcf, .sp=0x98, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x69}, {.addr=0x7568, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7569, .a=0x69, .x=0x53, .y=0xcf, .sp=0x98, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x69}, {.addr=0x7568, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7568, .value=0xe6, .type=IO_READ},
        {.addr=0x7569, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0346) {
    const struct CPU_State initial_cpu = {.pc=0x573b, .a=0x37, .x=0x1b, .y=0x66, .sp=0xc3, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x26}, {.addr=0x573b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x573c, .a=0x26, .x=0x1b, .y=0x66, .sp=0xc3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x26}, {.addr=0x573b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x573b, .value=0xe6, .type=IO_READ},
        {.addr=0x573c, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0347) {
    const struct CPU_State initial_cpu = {.pc=0x897b, .a=0xaa, .x=0x06, .y=0x85, .sp=0x87, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x04}, {.addr=0x897b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x897c, .a=0x04, .x=0x06, .y=0x85, .sp=0x87, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x04}, {.addr=0x897b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x897b, .value=0xe6, .type=IO_READ},
        {.addr=0x897c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0348) {
    const struct CPU_State initial_cpu = {.pc=0x259a, .a=0xd8, .x=0x45, .y=0x02, .sp=0xf0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xb8}, {.addr=0x259a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x259b, .a=0xb8, .x=0x45, .y=0x02, .sp=0xf0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xb8}, {.addr=0x259a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x259a, .value=0xe6, .type=IO_READ},
        {.addr=0x259b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0349) {
    const struct CPU_State initial_cpu = {.pc=0x61dd, .a=0x24, .x=0x01, .y=0x19, .sp=0xc0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x8a}, {.addr=0x61dd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x61de, .a=0x8a, .x=0x01, .y=0x19, .sp=0xc0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x8a}, {.addr=0x61dd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x61dd, .value=0xe6, .type=IO_READ},
        {.addr=0x61de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_034A) {
    const struct CPU_State initial_cpu = {.pc=0x43c1, .a=0x37, .x=0x26, .y=0x17, .sp=0xd4, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xcb}, {.addr=0x43c1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x43c2, .a=0xcb, .x=0x26, .y=0x17, .sp=0xd4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xcb}, {.addr=0x43c1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x43c1, .value=0xe6, .type=IO_READ},
        {.addr=0x43c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_034B) {
    const struct CPU_State initial_cpu = {.pc=0xdd3a, .a=0xd8, .x=0xd7, .y=0x0d, .sp=0x45, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x44}, {.addr=0xdd3a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdd3b, .a=0x44, .x=0xd7, .y=0x0d, .sp=0x45, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x44}, {.addr=0xdd3a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdd3a, .value=0xe6, .type=IO_READ},
        {.addr=0xdd3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_034C) {
    const struct CPU_State initial_cpu = {.pc=0x366e, .a=0xe3, .x=0x2d, .y=0xf8, .sp=0xd5, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xb5}, {.addr=0x366e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x366f, .a=0xb5, .x=0x2d, .y=0xf8, .sp=0xd5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xb5}, {.addr=0x366e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x366e, .value=0xe6, .type=IO_READ},
        {.addr=0x366f, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_034D) {
    const struct CPU_State initial_cpu = {.pc=0xa5b5, .a=0x61, .x=0xe7, .y=0xbe, .sp=0xa6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xf2}, {.addr=0xa5b5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa5b6, .a=0xf2, .x=0xe7, .y=0xbe, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xf2}, {.addr=0xa5b5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa5b5, .value=0xe6, .type=IO_READ},
        {.addr=0xa5b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_034E) {
    const struct CPU_State initial_cpu = {.pc=0xa88e, .a=0x3b, .x=0xd7, .y=0xd4, .sp=0x00, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x68}, {.addr=0xa88e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa88f, .a=0x68, .x=0xd7, .y=0xd4, .sp=0x00, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x68}, {.addr=0xa88e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa88e, .value=0xe6, .type=IO_READ},
        {.addr=0xa88f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_034F) {
    const struct CPU_State initial_cpu = {.pc=0x4631, .a=0xf2, .x=0x25, .y=0x4f, .sp=0x7a, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xb9}, {.addr=0x4631, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4632, .a=0xb9, .x=0x25, .y=0x4f, .sp=0x7a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xb9}, {.addr=0x4631, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4631, .value=0xe6, .type=IO_READ},
        {.addr=0x4632, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0351) {
    const struct CPU_State initial_cpu = {.pc=0x011f, .a=0x7d, .x=0xa4, .y=0xbc, .sp=0x46, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xc6}, {.addr=0x011f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0120, .a=0xc6, .x=0xa4, .y=0xbc, .sp=0x46, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xc6}, {.addr=0x011f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x011f, .value=0xe6, .type=IO_READ},
        {.addr=0x0120, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0352) {
    const struct CPU_State initial_cpu = {.pc=0x416d, .a=0xd0, .x=0x2e, .y=0xe1, .sp=0x82, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xcd}, {.addr=0x416d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x416e, .a=0xcd, .x=0x2e, .y=0xe1, .sp=0x82, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xcd}, {.addr=0x416d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x416d, .value=0xe6, .type=IO_READ},
        {.addr=0x416e, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0353) {
    const struct CPU_State initial_cpu = {.pc=0x3eff, .a=0x3f, .x=0xfd, .y=0x78, .sp=0x04, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xde}, {.addr=0x3eff, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3f00, .a=0xde, .x=0xfd, .y=0x78, .sp=0x04, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xde}, {.addr=0x3eff, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3eff, .value=0xe6, .type=IO_READ},
        {.addr=0x3f00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0354) {
    const struct CPU_State initial_cpu = {.pc=0xa3f8, .a=0x35, .x=0x91, .y=0x04, .sp=0x60, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x7b}, {.addr=0xa3f8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa3f9, .a=0x7b, .x=0x91, .y=0x04, .sp=0x60, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x7b}, {.addr=0xa3f8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa3f8, .value=0xe6, .type=IO_READ},
        {.addr=0xa3f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0355) {
    const struct CPU_State initial_cpu = {.pc=0x809c, .a=0x3f, .x=0xf6, .y=0xc0, .sp=0xa4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x90}, {.addr=0x809c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x809d, .a=0x90, .x=0xf6, .y=0xc0, .sp=0xa4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x90}, {.addr=0x809c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x809c, .value=0xe6, .type=IO_READ},
        {.addr=0x809d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0356) {
    const struct CPU_State initial_cpu = {.pc=0x29e1, .a=0xc4, .x=0x57, .y=0x4a, .sp=0xd0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xaa}, {.addr=0x29e1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x29e2, .a=0xaa, .x=0x57, .y=0x4a, .sp=0xd0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xaa}, {.addr=0x29e1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x29e1, .value=0xe6, .type=IO_READ},
        {.addr=0x29e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0357) {
    const struct CPU_State initial_cpu = {.pc=0x45a2, .a=0x2a, .x=0x18, .y=0x1e, .sp=0xa2, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x5d}, {.addr=0x45a2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x45a3, .a=0x5d, .x=0x18, .y=0x1e, .sp=0xa2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x5d}, {.addr=0x45a2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x45a2, .value=0xe6, .type=IO_READ},
        {.addr=0x45a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0358) {
    const struct CPU_State initial_cpu = {.pc=0xfd29, .a=0x0f, .x=0x26, .y=0x13, .sp=0x25, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x16}, {.addr=0xfd29, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfd2a, .a=0x16, .x=0x26, .y=0x13, .sp=0x25, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x16}, {.addr=0xfd29, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfd29, .value=0xe6, .type=IO_READ},
        {.addr=0xfd2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0359) {
    const struct CPU_State initial_cpu = {.pc=0x942a, .a=0x82, .x=0xd6, .y=0xfb, .sp=0x93, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xa8}, {.addr=0x942a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x942b, .a=0xa8, .x=0xd6, .y=0xfb, .sp=0x93, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xa8}, {.addr=0x942a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x942a, .value=0xe6, .type=IO_READ},
        {.addr=0x942b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_035A) {
    const struct CPU_State initial_cpu = {.pc=0x2348, .a=0x2c, .x=0xf6, .y=0x0c, .sp=0x8f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xef}, {.addr=0x2348, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2349, .a=0xef, .x=0xf6, .y=0x0c, .sp=0x8f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xef}, {.addr=0x2348, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2348, .value=0xe6, .type=IO_READ},
        {.addr=0x2349, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_035B) {
    const struct CPU_State initial_cpu = {.pc=0x81c1, .a=0x45, .x=0x55, .y=0xd2, .sp=0x9b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x98}, {.addr=0x81c1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x81c2, .a=0x98, .x=0x55, .y=0xd2, .sp=0x9b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x98}, {.addr=0x81c1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x81c1, .value=0xe6, .type=IO_READ},
        {.addr=0x81c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_035C) {
    const struct CPU_State initial_cpu = {.pc=0xde44, .a=0x62, .x=0x2b, .y=0x74, .sp=0x48, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x90}, {.addr=0xde44, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xde45, .a=0x90, .x=0x2b, .y=0x74, .sp=0x48, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x90}, {.addr=0xde44, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xde44, .value=0xe6, .type=IO_READ},
        {.addr=0xde45, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_035D) {
    const struct CPU_State initial_cpu = {.pc=0x4eee, .a=0x6b, .x=0xa1, .y=0xa8, .sp=0x0f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xaf}, {.addr=0x4eee, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4eef, .a=0xaf, .x=0xa1, .y=0xa8, .sp=0x0f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xaf}, {.addr=0x4eee, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4eee, .value=0xe6, .type=IO_READ},
        {.addr=0x4eef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_035E) {
    const struct CPU_State initial_cpu = {.pc=0x3ee0, .a=0xe4, .x=0x06, .y=0xa3, .sp=0x72, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xcc}, {.addr=0x3ee0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3ee1, .a=0xcc, .x=0x06, .y=0xa3, .sp=0x72, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xcc}, {.addr=0x3ee0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3ee0, .value=0xe6, .type=IO_READ},
        {.addr=0x3ee1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_035F) {
    const struct CPU_State initial_cpu = {.pc=0x30b9, .a=0xb4, .x=0x2c, .y=0x59, .sp=0x20, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0xc2}, {.addr=0x30b9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x30ba, .a=0xc2, .x=0x2c, .y=0x59, .sp=0x20, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0xc2}, {.addr=0x30b9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x30b9, .value=0xe6, .type=IO_READ},
        {.addr=0x30ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0360) {
    const struct CPU_State initial_cpu = {.pc=0xd498, .a=0xe1, .x=0x21, .y=0x69, .sp=0x94, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x18}, {.addr=0xd498, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd499, .a=0x18, .x=0x21, .y=0x69, .sp=0x94, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x18}, {.addr=0xd498, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd498, .value=0xe6, .type=IO_READ},
        {.addr=0xd499, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0361) {
    const struct CPU_State initial_cpu = {.pc=0x3843, .a=0x57, .x=0xaa, .y=0xa9, .sp=0xc7, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xbb}, {.addr=0x3843, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3844, .a=0xbb, .x=0xaa, .y=0xa9, .sp=0xc7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xbb}, {.addr=0x3843, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3843, .value=0xe6, .type=IO_READ},
        {.addr=0x3844, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0362) {
    const struct CPU_State initial_cpu = {.pc=0xe66c, .a=0x23, .x=0x9d, .y=0x2d, .sp=0xe0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x52}, {.addr=0xe66c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe66d, .a=0x52, .x=0x9d, .y=0x2d, .sp=0xe0, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x52}, {.addr=0xe66c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe66c, .value=0xe6, .type=IO_READ},
        {.addr=0xe66d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0363) {
    const struct CPU_State initial_cpu = {.pc=0xd871, .a=0x14, .x=0xde, .y=0x32, .sp=0xd1, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xa7}, {.addr=0xd871, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd872, .a=0xa7, .x=0xde, .y=0x32, .sp=0xd1, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xa7}, {.addr=0xd871, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd871, .value=0xe6, .type=IO_READ},
        {.addr=0xd872, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0364) {
    const struct CPU_State initial_cpu = {.pc=0x33f1, .a=0xdd, .x=0x21, .y=0x2f, .sp=0x29, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x10}, {.addr=0x33f1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x33f2, .a=0x10, .x=0x21, .y=0x2f, .sp=0x29, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x10}, {.addr=0x33f1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x33f1, .value=0xe6, .type=IO_READ},
        {.addr=0x33f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0365) {
    const struct CPU_State initial_cpu = {.pc=0x377f, .a=0x31, .x=0x00, .y=0x2d, .sp=0x10, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x58}, {.addr=0x377f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3780, .a=0x58, .x=0x00, .y=0x2d, .sp=0x10, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x58}, {.addr=0x377f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x377f, .value=0xe6, .type=IO_READ},
        {.addr=0x3780, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0366) {
    const struct CPU_State initial_cpu = {.pc=0xe5a1, .a=0x83, .x=0x11, .y=0x06, .sp=0x9c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x5c}, {.addr=0xe5a1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe5a2, .a=0x5c, .x=0x11, .y=0x06, .sp=0x9c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x5c}, {.addr=0xe5a1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe5a1, .value=0xe6, .type=IO_READ},
        {.addr=0xe5a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0367) {
    const struct CPU_State initial_cpu = {.pc=0xdc53, .a=0x79, .x=0x06, .y=0xff, .sp=0x2f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x8a}, {.addr=0xdc53, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdc54, .a=0x8a, .x=0x06, .y=0xff, .sp=0x2f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x8a}, {.addr=0xdc53, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdc53, .value=0xe6, .type=IO_READ},
        {.addr=0xdc54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0368) {
    const struct CPU_State initial_cpu = {.pc=0xe48a, .a=0x36, .x=0xd5, .y=0x74, .sp=0x09, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xbe}, {.addr=0xe48a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe48b, .a=0xbe, .x=0xd5, .y=0x74, .sp=0x09, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xbe}, {.addr=0xe48a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe48a, .value=0xe6, .type=IO_READ},
        {.addr=0xe48b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0369) {
    const struct CPU_State initial_cpu = {.pc=0xead5, .a=0xb9, .x=0x0b, .y=0x21, .sp=0x94, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x2d}, {.addr=0xead5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xead6, .a=0x2d, .x=0x0b, .y=0x21, .sp=0x94, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x2d}, {.addr=0xead5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xead5, .value=0xe6, .type=IO_READ},
        {.addr=0xead6, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_036A) {
    const struct CPU_State initial_cpu = {.pc=0x426a, .a=0xca, .x=0x6a, .y=0x87, .sp=0x2a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x6e}, {.addr=0x426a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x426b, .a=0x6e, .x=0x6a, .y=0x87, .sp=0x2a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x6e}, {.addr=0x426a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x426a, .value=0xe6, .type=IO_READ},
        {.addr=0x426b, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_036B) {
    const struct CPU_State initial_cpu = {.pc=0x5f16, .a=0x8d, .x=0x01, .y=0x88, .sp=0x13, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x13}, {.addr=0x5f16, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5f17, .a=0x13, .x=0x01, .y=0x88, .sp=0x13, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x13}, {.addr=0x5f16, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5f16, .value=0xe6, .type=IO_READ},
        {.addr=0x5f17, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_036C) {
    const struct CPU_State initial_cpu = {.pc=0x0bbf, .a=0xea, .x=0x09, .y=0x3f, .sp=0x62, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xf5}, {.addr=0x0bbf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0bc0, .a=0xf5, .x=0x09, .y=0x3f, .sp=0x62, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xf5}, {.addr=0x0bbf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0bbf, .value=0xe6, .type=IO_READ},
        {.addr=0x0bc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_036D) {
    const struct CPU_State initial_cpu = {.pc=0x16ca, .a=0xe7, .x=0x3b, .y=0x7d, .sp=0xbf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x0e}, {.addr=0x16ca, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x16cb, .a=0x0e, .x=0x3b, .y=0x7d, .sp=0xbf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x0e}, {.addr=0x16ca, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x16ca, .value=0xe6, .type=IO_READ},
        {.addr=0x16cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_036E) {
    const struct CPU_State initial_cpu = {.pc=0xef73, .a=0x06, .x=0x25, .y=0x56, .sp=0x81, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x92}, {.addr=0xef73, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xef74, .a=0x92, .x=0x25, .y=0x56, .sp=0x81, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x92}, {.addr=0xef73, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xef73, .value=0xe6, .type=IO_READ},
        {.addr=0xef74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_036F) {
    const struct CPU_State initial_cpu = {.pc=0x8132, .a=0x2d, .x=0xaa, .y=0x1e, .sp=0x7e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0xee}, {.addr=0x8132, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8133, .a=0xee, .x=0xaa, .y=0x1e, .sp=0x7e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0xee}, {.addr=0x8132, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8132, .value=0xe6, .type=IO_READ},
        {.addr=0x8133, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0370) {
    const struct CPU_State initial_cpu = {.pc=0xf183, .a=0x53, .x=0x61, .y=0x4d, .sp=0xa5, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xcd}, {.addr=0xf183, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf184, .a=0xcd, .x=0x61, .y=0x4d, .sp=0xa5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xcd}, {.addr=0xf183, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf183, .value=0xe6, .type=IO_READ},
        {.addr=0xf184, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0371) {
    const struct CPU_State initial_cpu = {.pc=0x149e, .a=0x37, .x=0x8c, .y=0xdb, .sp=0xcf, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0xfb}, {.addr=0x149e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x149f, .a=0xfb, .x=0x8c, .y=0xdb, .sp=0xcf, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xfb}, {.addr=0x149e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x149e, .value=0xe6, .type=IO_READ},
        {.addr=0x149f, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0372) {
    const struct CPU_State initial_cpu = {.pc=0x8e4b, .a=0x4c, .x=0x64, .y=0x3b, .sp=0xbb, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xb9}, {.addr=0x8e4b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8e4c, .a=0xb9, .x=0x64, .y=0x3b, .sp=0xbb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xb9}, {.addr=0x8e4b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8e4b, .value=0xe6, .type=IO_READ},
        {.addr=0x8e4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0373) {
    const struct CPU_State initial_cpu = {.pc=0x1cc4, .a=0x03, .x=0x5b, .y=0xbe, .sp=0xfc, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xd0}, {.addr=0x1cc4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1cc5, .a=0xd0, .x=0x5b, .y=0xbe, .sp=0xfc, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xd0}, {.addr=0x1cc4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1cc4, .value=0xe6, .type=IO_READ},
        {.addr=0x1cc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0374) {
    const struct CPU_State initial_cpu = {.pc=0xaa18, .a=0xbb, .x=0xc1, .y=0x68, .sp=0x0f, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xa7}, {.addr=0xaa18, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaa19, .a=0xa7, .x=0xc1, .y=0x68, .sp=0x0f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xa7}, {.addr=0xaa18, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaa18, .value=0xe6, .type=IO_READ},
        {.addr=0xaa19, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0375) {
    const struct CPU_State initial_cpu = {.pc=0x60b6, .a=0x31, .x=0x46, .y=0x03, .sp=0x33, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x23}, {.addr=0x60b6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x60b7, .a=0x23, .x=0x46, .y=0x03, .sp=0x33, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x23}, {.addr=0x60b6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x60b6, .value=0xe6, .type=IO_READ},
        {.addr=0x60b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0376) {
    const struct CPU_State initial_cpu = {.pc=0x0992, .a=0x9e, .x=0x2a, .y=0x7b, .sp=0xe9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xe9}, {.addr=0x0992, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0993, .a=0xe9, .x=0x2a, .y=0x7b, .sp=0xe9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xe9}, {.addr=0x0992, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0992, .value=0xe6, .type=IO_READ},
        {.addr=0x0993, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0377) {
    const struct CPU_State initial_cpu = {.pc=0x041f, .a=0x56, .x=0x8d, .y=0x09, .sp=0x2b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x78}, {.addr=0x041f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0420, .a=0x78, .x=0x8d, .y=0x09, .sp=0x2b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x78}, {.addr=0x041f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x041f, .value=0xe6, .type=IO_READ},
        {.addr=0x0420, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0378) {
    const struct CPU_State initial_cpu = {.pc=0x27e4, .a=0x76, .x=0xa0, .y=0x12, .sp=0xea, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x3e}, {.addr=0x27e4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x27e5, .a=0x3e, .x=0xa0, .y=0x12, .sp=0xea, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x3e}, {.addr=0x27e4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x27e4, .value=0xe6, .type=IO_READ},
        {.addr=0x27e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0379) {
    const struct CPU_State initial_cpu = {.pc=0x7624, .a=0x60, .x=0x57, .y=0xa0, .sp=0xd8, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x35}, {.addr=0x7624, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7625, .a=0x35, .x=0x57, .y=0xa0, .sp=0xd8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x35}, {.addr=0x7624, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7624, .value=0xe6, .type=IO_READ},
        {.addr=0x7625, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_037A) {
    const struct CPU_State initial_cpu = {.pc=0xdcbf, .a=0x88, .x=0x89, .y=0x4c, .sp=0x58, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x3c}, {.addr=0xdcbf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdcc0, .a=0x3c, .x=0x89, .y=0x4c, .sp=0x58, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x3c}, {.addr=0xdcbf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdcbf, .value=0xe6, .type=IO_READ},
        {.addr=0xdcc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_037B) {
    const struct CPU_State initial_cpu = {.pc=0x0abd, .a=0xa1, .x=0xa5, .y=0xf9, .sp=0xc9, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xe8}, {.addr=0x0abd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0abe, .a=0xe8, .x=0xa5, .y=0xf9, .sp=0xc9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xe8}, {.addr=0x0abd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0abd, .value=0xe6, .type=IO_READ},
        {.addr=0x0abe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_037C) {
    const struct CPU_State initial_cpu = {.pc=0xf99e, .a=0xd5, .x=0x63, .y=0xce, .sp=0xcc, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xd6}, {.addr=0xf99e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf99f, .a=0xd6, .x=0x63, .y=0xce, .sp=0xcc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xd6}, {.addr=0xf99e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf99e, .value=0xe6, .type=IO_READ},
        {.addr=0xf99f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_037D) {
    const struct CPU_State initial_cpu = {.pc=0x09bd, .a=0x17, .x=0xda, .y=0x5a, .sp=0xd5, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xe8}, {.addr=0x09bd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x09be, .a=0xe8, .x=0xda, .y=0x5a, .sp=0xd5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xe8}, {.addr=0x09bd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x09bd, .value=0xe6, .type=IO_READ},
        {.addr=0x09be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_037E) {
    const struct CPU_State initial_cpu = {.pc=0x992b, .a=0x8d, .x=0xef, .y=0x45, .sp=0xb5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x78}, {.addr=0x992b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x992c, .a=0x78, .x=0xef, .y=0x45, .sp=0xb5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x78}, {.addr=0x992b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x992b, .value=0xe6, .type=IO_READ},
        {.addr=0x992c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_037F) {
    const struct CPU_State initial_cpu = {.pc=0xeaab, .a=0x1c, .x=0xec, .y=0x75, .sp=0x8d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x62}, {.addr=0xeaab, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xeaac, .a=0x62, .x=0xec, .y=0x75, .sp=0x8d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x62}, {.addr=0xeaab, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xeaab, .value=0xe6, .type=IO_READ},
        {.addr=0xeaac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0380) {
    const struct CPU_State initial_cpu = {.pc=0xab41, .a=0xb2, .x=0x4e, .y=0xb5, .sp=0xb4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x7a}, {.addr=0xab41, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xab42, .a=0x7a, .x=0x4e, .y=0xb5, .sp=0xb4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x7a}, {.addr=0xab41, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xab41, .value=0xe6, .type=IO_READ},
        {.addr=0xab42, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0381) {
    const struct CPU_State initial_cpu = {.pc=0x0e9b, .a=0x7a, .x=0x90, .y=0x2a, .sp=0x57, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xbc}, {.addr=0x0e9b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0e9c, .a=0xbc, .x=0x90, .y=0x2a, .sp=0x57, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xbc}, {.addr=0x0e9b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0e9b, .value=0xe6, .type=IO_READ},
        {.addr=0x0e9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0382) {
    const struct CPU_State initial_cpu = {.pc=0x9ce3, .a=0x59, .x=0x46, .y=0x7f, .sp=0xe2, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x7c}, {.addr=0x9ce3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9ce4, .a=0x7c, .x=0x46, .y=0x7f, .sp=0xe2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x7c}, {.addr=0x9ce3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9ce3, .value=0xe6, .type=IO_READ},
        {.addr=0x9ce4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0383) {
    const struct CPU_State initial_cpu = {.pc=0x7df5, .a=0xfa, .x=0x06, .y=0x6e, .sp=0x0d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x21}, {.addr=0x7df5, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7df6, .a=0x21, .x=0x06, .y=0x6e, .sp=0x0d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x21}, {.addr=0x7df5, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7df5, .value=0xe6, .type=IO_READ},
        {.addr=0x7df6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0384) {
    const struct CPU_State initial_cpu = {.pc=0x5cb2, .a=0xda, .x=0x41, .y=0x21, .sp=0x66, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x22}, {.addr=0x5cb2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5cb3, .a=0x22, .x=0x41, .y=0x21, .sp=0x66, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x22}, {.addr=0x5cb2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5cb2, .value=0xe6, .type=IO_READ},
        {.addr=0x5cb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0385) {
    const struct CPU_State initial_cpu = {.pc=0x3204, .a=0x0b, .x=0x03, .y=0xb8, .sp=0xd0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x46}, {.addr=0x3204, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3205, .a=0x46, .x=0x03, .y=0xb8, .sp=0xd0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x46}, {.addr=0x3204, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3204, .value=0xe6, .type=IO_READ},
        {.addr=0x3205, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0386) {
    const struct CPU_State initial_cpu = {.pc=0xbf9c, .a=0x94, .x=0xa1, .y=0x9b, .sp=0x06, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x94}, {.addr=0xbf9c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbf9d, .a=0x94, .x=0xa1, .y=0x9b, .sp=0x06, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x94}, {.addr=0xbf9c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbf9c, .value=0xe6, .type=IO_READ},
        {.addr=0xbf9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0387) {
    const struct CPU_State initial_cpu = {.pc=0x8052, .a=0xda, .x=0xa8, .y=0xf0, .sp=0xbe, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x03}, {.addr=0x8052, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8053, .a=0x03, .x=0xa8, .y=0xf0, .sp=0xbe, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x03}, {.addr=0x8052, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8052, .value=0xe6, .type=IO_READ},
        {.addr=0x8053, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0388) {
    const struct CPU_State initial_cpu = {.pc=0xa5c0, .a=0x41, .x=0x65, .y=0x9c, .sp=0xdf, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xe5}, {.addr=0xa5c0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa5c1, .a=0xe5, .x=0x65, .y=0x9c, .sp=0xdf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xe5}, {.addr=0xa5c0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa5c0, .value=0xe6, .type=IO_READ},
        {.addr=0xa5c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0389) {
    const struct CPU_State initial_cpu = {.pc=0x2e81, .a=0x80, .x=0x21, .y=0x4c, .sp=0xec, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x93}, {.addr=0x2e81, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2e82, .a=0x93, .x=0x21, .y=0x4c, .sp=0xec, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x93}, {.addr=0x2e81, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2e81, .value=0xe6, .type=IO_READ},
        {.addr=0x2e82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_038A) {
    const struct CPU_State initial_cpu = {.pc=0x1f67, .a=0xe3, .x=0x91, .y=0xc2, .sp=0x84, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x07}, {.addr=0x1f67, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1f68, .a=0x07, .x=0x91, .y=0xc2, .sp=0x84, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x07}, {.addr=0x1f67, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1f67, .value=0xe6, .type=IO_READ},
        {.addr=0x1f68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_038B) {
    const struct CPU_State initial_cpu = {.pc=0x3ae0, .a=0xf8, .x=0xae, .y=0xe9, .sp=0x3f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x7d}, {.addr=0x3ae0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3ae1, .a=0x7d, .x=0xae, .y=0xe9, .sp=0x3f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x7d}, {.addr=0x3ae0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3ae0, .value=0xe6, .type=IO_READ},
        {.addr=0x3ae1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_038C) {
    const struct CPU_State initial_cpu = {.pc=0xd921, .a=0xf1, .x=0x3a, .y=0x41, .sp=0x06, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x6b}, {.addr=0xd921, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd922, .a=0x6b, .x=0x3a, .y=0x41, .sp=0x06, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x6b}, {.addr=0xd921, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd921, .value=0xe6, .type=IO_READ},
        {.addr=0xd922, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_038D) {
    const struct CPU_State initial_cpu = {.pc=0xcf53, .a=0xa9, .x=0x07, .y=0xb4, .sp=0xb4, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x69}, {.addr=0xcf53, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xcf54, .a=0x69, .x=0x07, .y=0xb4, .sp=0xb4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x69}, {.addr=0xcf53, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xcf53, .value=0xe6, .type=IO_READ},
        {.addr=0xcf54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_038E) {
    const struct CPU_State initial_cpu = {.pc=0x7685, .a=0x5a, .x=0x26, .y=0xd9, .sp=0xeb, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0xb0}, {.addr=0x7685, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7686, .a=0xb0, .x=0x26, .y=0xd9, .sp=0xeb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0xb0}, {.addr=0x7685, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7685, .value=0xe6, .type=IO_READ},
        {.addr=0x7686, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_038F) {
    const struct CPU_State initial_cpu = {.pc=0x80be, .a=0xd2, .x=0xc2, .y=0x86, .sp=0x42, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x22}, {.addr=0x80be, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x80bf, .a=0x22, .x=0xc2, .y=0x86, .sp=0x42, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x22}, {.addr=0x80be, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x80be, .value=0xe6, .type=IO_READ},
        {.addr=0x80bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0390) {
    const struct CPU_State initial_cpu = {.pc=0xf409, .a=0xdf, .x=0xd4, .y=0x84, .sp=0x93, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xe2}, {.addr=0xf409, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf40a, .a=0xe2, .x=0xd4, .y=0x84, .sp=0x93, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xe2}, {.addr=0xf409, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf409, .value=0xe6, .type=IO_READ},
        {.addr=0xf40a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0391) {
    const struct CPU_State initial_cpu = {.pc=0x28e1, .a=0x9d, .x=0x84, .y=0x3f, .sp=0x6d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x99}, {.addr=0x28e1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x28e2, .a=0x99, .x=0x84, .y=0x3f, .sp=0x6d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x99}, {.addr=0x28e1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x28e1, .value=0xe6, .type=IO_READ},
        {.addr=0x28e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0392) {
    const struct CPU_State initial_cpu = {.pc=0xa394, .a=0x11, .x=0xad, .y=0xfa, .sp=0x86, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x5a}, {.addr=0xa394, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa395, .a=0x5a, .x=0xad, .y=0xfa, .sp=0x86, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x5a}, {.addr=0xa394, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa394, .value=0xe6, .type=IO_READ},
        {.addr=0xa395, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0393) {
    const struct CPU_State initial_cpu = {.pc=0x2804, .a=0x37, .x=0x57, .y=0x46, .sp=0xaa, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x8b}, {.addr=0x2804, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2805, .a=0x8b, .x=0x57, .y=0x46, .sp=0xaa, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x8b}, {.addr=0x2804, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2804, .value=0xe6, .type=IO_READ},
        {.addr=0x2805, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0394) {
    const struct CPU_State initial_cpu = {.pc=0x2f39, .a=0x52, .x=0xca, .y=0xb3, .sp=0xe0, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x68}, {.addr=0x2f39, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2f3a, .a=0x68, .x=0xca, .y=0xb3, .sp=0xe0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x68}, {.addr=0x2f39, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2f39, .value=0xe6, .type=IO_READ},
        {.addr=0x2f3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0396) {
    const struct CPU_State initial_cpu = {.pc=0x6644, .a=0x21, .x=0x21, .y=0xa2, .sp=0x50, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x03}, {.addr=0x6644, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6645, .a=0x03, .x=0x21, .y=0xa2, .sp=0x50, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x03}, {.addr=0x6644, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6644, .value=0xe6, .type=IO_READ},
        {.addr=0x6645, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0397) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0x73, .x=0xaa, .y=0x62, .sp=0x0c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x93}, {.addr=0x5fe1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5fe2, .a=0x93, .x=0xaa, .y=0x62, .sp=0x0c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x93}, {.addr=0x5fe1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0xe6, .type=IO_READ},
        {.addr=0x5fe2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_0399) {
    const struct CPU_State initial_cpu = {.pc=0x96cb, .a=0xaa, .x=0x0a, .y=0xb5, .sp=0x8b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x88}, {.addr=0x96cb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x96cc, .a=0x88, .x=0x0a, .y=0xb5, .sp=0x8b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x88}, {.addr=0x96cb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x96cb, .value=0xe6, .type=IO_READ},
        {.addr=0x96cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_039A) {
    const struct CPU_State initial_cpu = {.pc=0x036c, .a=0x3e, .x=0x61, .y=0xc7, .sp=0xde, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x77}, {.addr=0x036c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x036d, .a=0x77, .x=0x61, .y=0xc7, .sp=0xde, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x77}, {.addr=0x036c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x036c, .value=0xe6, .type=IO_READ},
        {.addr=0x036d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_039B) {
    const struct CPU_State initial_cpu = {.pc=0xaa40, .a=0xae, .x=0x24, .y=0x3d, .sp=0x7b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xfa}, {.addr=0xaa40, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xaa41, .a=0xfa, .x=0x24, .y=0x3d, .sp=0x7b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xfa}, {.addr=0xaa40, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xaa40, .value=0xe6, .type=IO_READ},
        {.addr=0xaa41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_039C) {
    const struct CPU_State initial_cpu = {.pc=0xafd9, .a=0x66, .x=0xce, .y=0x3a, .sp=0x8d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x21}, {.addr=0xafd9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xafda, .a=0x21, .x=0xce, .y=0x3a, .sp=0x8d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x21}, {.addr=0xafd9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xafd9, .value=0xe6, .type=IO_READ},
        {.addr=0xafda, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_039D) {
    const struct CPU_State initial_cpu = {.pc=0xe9c1, .a=0x08, .x=0x10, .y=0x87, .sp=0xc4, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x6e}, {.addr=0xe9c1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe9c2, .a=0x6e, .x=0x10, .y=0x87, .sp=0xc4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x6e}, {.addr=0xe9c1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe9c1, .value=0xe6, .type=IO_READ},
        {.addr=0xe9c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_039E) {
    const struct CPU_State initial_cpu = {.pc=0xe227, .a=0xa1, .x=0x40, .y=0x7c, .sp=0x42, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x6b}, {.addr=0xe227, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe228, .a=0x6b, .x=0x40, .y=0x7c, .sp=0x42, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x6b}, {.addr=0xe227, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe227, .value=0xe6, .type=IO_READ},
        {.addr=0xe228, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_039F) {
    const struct CPU_State initial_cpu = {.pc=0xbe1d, .a=0x64, .x=0x0d, .y=0x0f, .sp=0xe5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xfd}, {.addr=0xbe1d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbe1e, .a=0xfd, .x=0x0d, .y=0x0f, .sp=0xe5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xfd}, {.addr=0xbe1d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbe1d, .value=0xe6, .type=IO_READ},
        {.addr=0xbe1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xbd71, .a=0x90, .x=0x68, .y=0x06, .sp=0x00, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x54}, {.addr=0xbd71, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbd72, .a=0x54, .x=0x68, .y=0x06, .sp=0x00, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x54}, {.addr=0xbd71, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbd71, .value=0xe6, .type=IO_READ},
        {.addr=0xbd72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x84e2, .a=0x69, .x=0x25, .y=0x77, .sp=0x75, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xb0}, {.addr=0x84e2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x84e3, .a=0xb0, .x=0x25, .y=0x77, .sp=0x75, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xb0}, {.addr=0x84e2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x84e2, .value=0xe6, .type=IO_READ},
        {.addr=0x84e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xba5d, .a=0xe8, .x=0xdb, .y=0x7c, .sp=0x5e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x21}, {.addr=0xba5d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xba5e, .a=0x21, .x=0xdb, .y=0x7c, .sp=0x5e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x21}, {.addr=0xba5d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xba5d, .value=0xe6, .type=IO_READ},
        {.addr=0xba5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x1922, .a=0x52, .x=0x27, .y=0xda, .sp=0xc2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x6e}, {.addr=0x1922, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1923, .a=0x6e, .x=0x27, .y=0xda, .sp=0xc2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x6e}, {.addr=0x1922, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1922, .value=0xe6, .type=IO_READ},
        {.addr=0x1923, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xdce0, .a=0xeb, .x=0x33, .y=0xb3, .sp=0x15, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x63}, {.addr=0xdce0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdce1, .a=0x63, .x=0x33, .y=0xb3, .sp=0x15, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x63}, {.addr=0xdce0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdce0, .value=0xe6, .type=IO_READ},
        {.addr=0xdce1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x03db, .a=0x36, .x=0x3a, .y=0x12, .sp=0x31, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xa5}, {.addr=0x03db, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x03dc, .a=0xa5, .x=0x3a, .y=0x12, .sp=0x31, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xa5}, {.addr=0x03db, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x03db, .value=0xe6, .type=IO_READ},
        {.addr=0x03dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x583f, .a=0xbf, .x=0x07, .y=0xd4, .sp=0x2d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xea}, {.addr=0x583f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5840, .a=0xea, .x=0x07, .y=0xd4, .sp=0x2d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xea}, {.addr=0x583f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x583f, .value=0xe6, .type=IO_READ},
        {.addr=0x5840, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x6e18, .a=0x3f, .x=0x94, .y=0x83, .sp=0xf9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x6e}, {.addr=0x6e18, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6e19, .a=0x6e, .x=0x94, .y=0x83, .sp=0xf9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x6e}, {.addr=0x6e18, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6e18, .value=0xe6, .type=IO_READ},
        {.addr=0x6e19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x8118, .a=0xae, .x=0x42, .y=0x25, .sp=0xb8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x86}, {.addr=0x8118, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8119, .a=0x86, .x=0x42, .y=0x25, .sp=0xb8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x86}, {.addr=0x8118, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8118, .value=0xe6, .type=IO_READ},
        {.addr=0x8119, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x623d, .a=0xda, .x=0x4d, .y=0xbc, .sp=0x3c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xb7}, {.addr=0x623d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x623e, .a=0xb7, .x=0x4d, .y=0xbc, .sp=0x3c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xb7}, {.addr=0x623d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x623d, .value=0xe6, .type=IO_READ},
        {.addr=0x623e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x137d, .a=0xa9, .x=0xb6, .y=0x9d, .sp=0xe4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x5f}, {.addr=0x137d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x137e, .a=0x5f, .x=0xb6, .y=0x9d, .sp=0xe4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x5f}, {.addr=0x137d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x137d, .value=0xe6, .type=IO_READ},
        {.addr=0x137e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x81a9, .a=0x94, .x=0xa2, .y=0x63, .sp=0xa9, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x09}, {.addr=0x81a9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x81aa, .a=0x09, .x=0xa2, .y=0x63, .sp=0xa9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x09}, {.addr=0x81a9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x81a9, .value=0xe6, .type=IO_READ},
        {.addr=0x81aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xec05, .a=0xa5, .x=0x03, .y=0x9e, .sp=0xd3, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x28}, {.addr=0xec05, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xec06, .a=0x28, .x=0x03, .y=0x9e, .sp=0xd3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x28}, {.addr=0xec05, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xec05, .value=0xe6, .type=IO_READ},
        {.addr=0xec06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x4284, .a=0x1b, .x=0x5e, .y=0x7b, .sp=0x61, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x18}, {.addr=0x4284, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4285, .a=0x18, .x=0x5e, .y=0x7b, .sp=0x61, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x18}, {.addr=0x4284, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4284, .value=0xe6, .type=IO_READ},
        {.addr=0x4285, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x9967, .a=0x1e, .x=0xa6, .y=0xa4, .sp=0x24, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0xce}, {.addr=0x9967, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9968, .a=0xce, .x=0xa6, .y=0xa4, .sp=0x24, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xce}, {.addr=0x9967, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9967, .value=0xe6, .type=IO_READ},
        {.addr=0x9968, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x84cc, .a=0xba, .x=0x9a, .y=0xb8, .sp=0x1c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x3a}, {.addr=0x84cc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x84cd, .a=0x3a, .x=0x9a, .y=0xb8, .sp=0x1c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x3a}, {.addr=0x84cc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x84cc, .value=0xe6, .type=IO_READ},
        {.addr=0x84cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x71c8, .a=0xd2, .x=0xda, .y=0x4e, .sp=0x27, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x58}, {.addr=0x71c8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x71c9, .a=0x58, .x=0xda, .y=0x4e, .sp=0x27, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x58}, {.addr=0x71c8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x71c8, .value=0xe6, .type=IO_READ},
        {.addr=0x71c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x5288, .a=0xf3, .x=0xbb, .y=0xd8, .sp=0xa4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xcb}, {.addr=0x5288, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5289, .a=0xcb, .x=0xbb, .y=0xd8, .sp=0xa4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xcb}, {.addr=0x5288, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5288, .value=0xe6, .type=IO_READ},
        {.addr=0x5289, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x4dca, .a=0xba, .x=0x34, .y=0x12, .sp=0xf0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x41}, {.addr=0x4dca, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4dcb, .a=0x41, .x=0x34, .y=0x12, .sp=0xf0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x41}, {.addr=0x4dca, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4dca, .value=0xe6, .type=IO_READ},
        {.addr=0x4dcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x2790, .a=0x62, .x=0x07, .y=0xd7, .sp=0x8d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xb9}, {.addr=0x2790, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2791, .a=0xb9, .x=0x07, .y=0xd7, .sp=0x8d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xb9}, {.addr=0x2790, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2790, .value=0xe6, .type=IO_READ},
        {.addr=0x2791, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2ff0, .a=0x33, .x=0xfa, .y=0xe4, .sp=0x46, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x23}, {.addr=0x2ff0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2ff1, .a=0x23, .x=0xfa, .y=0xe4, .sp=0x46, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x23}, {.addr=0x2ff0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2ff0, .value=0xe6, .type=IO_READ},
        {.addr=0x2ff1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xee35, .a=0x56, .x=0x39, .y=0x67, .sp=0x91, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xba}, {.addr=0xee35, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xee36, .a=0xba, .x=0x39, .y=0x67, .sp=0x91, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xba}, {.addr=0xee35, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xee35, .value=0xe6, .type=IO_READ},
        {.addr=0xee36, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xee6b, .a=0x7b, .x=0x43, .y=0x2b, .sp=0x78, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x78}, {.addr=0xee6b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xee6c, .a=0x78, .x=0x43, .y=0x2b, .sp=0x78, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x78}, {.addr=0xee6b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xee6b, .value=0xe6, .type=IO_READ},
        {.addr=0xee6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xed76, .a=0x83, .x=0x39, .y=0xe5, .sp=0x16, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x35}, {.addr=0xed76, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xed77, .a=0x35, .x=0x39, .y=0xe5, .sp=0x16, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x35}, {.addr=0xed76, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xed76, .value=0xe6, .type=IO_READ},
        {.addr=0xed77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xf0f8, .a=0x4a, .x=0xcd, .y=0x89, .sp=0x30, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x67}, {.addr=0xf0f8, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf0f9, .a=0x67, .x=0xcd, .y=0x89, .sp=0x30, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x67}, {.addr=0xf0f8, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf0f8, .value=0xe6, .type=IO_READ},
        {.addr=0xf0f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x8ff3, .a=0x8e, .x=0x7a, .y=0x4e, .sp=0x3c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x01}, {.addr=0x8ff3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8ff4, .a=0x01, .x=0x7a, .y=0x4e, .sp=0x3c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x01}, {.addr=0x8ff3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8ff3, .value=0xe6, .type=IO_READ},
        {.addr=0x8ff4, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xeb5c, .a=0x6c, .x=0x77, .y=0x2e, .sp=0x85, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xdf}, {.addr=0xeb5c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xeb5d, .a=0xdf, .x=0x77, .y=0x2e, .sp=0x85, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xdf}, {.addr=0xeb5c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xeb5c, .value=0xe6, .type=IO_READ},
        {.addr=0xeb5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x0d36, .a=0x8f, .x=0x8c, .y=0xce, .sp=0xaa, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0xa9}, {.addr=0x0d36, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0d37, .a=0xa9, .x=0x8c, .y=0xce, .sp=0xaa, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xa9}, {.addr=0x0d36, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0d36, .value=0xe6, .type=IO_READ},
        {.addr=0x0d37, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xf169, .a=0xea, .x=0xed, .y=0x94, .sp=0x4e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x13}, {.addr=0xf169, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf16a, .a=0x13, .x=0xed, .y=0x94, .sp=0x4e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x13}, {.addr=0xf169, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf169, .value=0xe6, .type=IO_READ},
        {.addr=0xf16a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x4ac0, .a=0xaf, .x=0xb2, .y=0x2a, .sp=0x97, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x4b}, {.addr=0x4ac0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4ac1, .a=0x4b, .x=0xb2, .y=0x2a, .sp=0x97, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x4b}, {.addr=0x4ac0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4ac0, .value=0xe6, .type=IO_READ},
        {.addr=0x4ac1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x98cf, .a=0xa3, .x=0x43, .y=0x0c, .sp=0x9c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xf5}, {.addr=0x98cf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x98d0, .a=0xf5, .x=0x43, .y=0x0c, .sp=0x9c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xf5}, {.addr=0x98cf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x98cf, .value=0xe6, .type=IO_READ},
        {.addr=0x98d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x3baf, .a=0x43, .x=0x4e, .y=0x8a, .sp=0x72, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xdd}, {.addr=0x3baf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3bb0, .a=0xdd, .x=0x4e, .y=0x8a, .sp=0x72, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xdd}, {.addr=0x3baf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3baf, .value=0xe6, .type=IO_READ},
        {.addr=0x3bb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xae79, .a=0x6a, .x=0x87, .y=0xa1, .sp=0x0f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x71}, {.addr=0xae79, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xae7a, .a=0x71, .x=0x87, .y=0xa1, .sp=0x0f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x71}, {.addr=0xae79, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xae79, .value=0xe6, .type=IO_READ},
        {.addr=0xae7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xdf7e, .a=0x5c, .x=0x3d, .y=0xa3, .sp=0xf5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x5b}, {.addr=0xdf7e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdf7f, .a=0x5b, .x=0x3d, .y=0xa3, .sp=0xf5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x5b}, {.addr=0xdf7e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdf7e, .value=0xe6, .type=IO_READ},
        {.addr=0xdf7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xf700, .a=0x66, .x=0x2c, .y=0xbd, .sp=0x64, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x5b}, {.addr=0xf700, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf701, .a=0x5b, .x=0x2c, .y=0xbd, .sp=0x64, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x5b}, {.addr=0xf700, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf700, .value=0xe6, .type=IO_READ},
        {.addr=0xf701, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xeafa, .a=0x3e, .x=0x8f, .y=0x06, .sp=0x0c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x21}, {.addr=0xeafa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xeafb, .a=0x21, .x=0x8f, .y=0x06, .sp=0x0c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x21}, {.addr=0xeafa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xeafa, .value=0xe6, .type=IO_READ},
        {.addr=0xeafb, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x4ffe, .a=0x1e, .x=0x72, .y=0x94, .sp=0xa7, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x6d}, {.addr=0x4ffe, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4fff, .a=0x6d, .x=0x72, .y=0x94, .sp=0xa7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x6d}, {.addr=0x4ffe, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4ffe, .value=0xe6, .type=IO_READ},
        {.addr=0x4fff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x371b, .a=0xb4, .x=0xc3, .y=0x9c, .sp=0x50, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xb4}, {.addr=0x371b, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x371c, .a=0xb4, .x=0xc3, .y=0x9c, .sp=0x50, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xb4}, {.addr=0x371b, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x371b, .value=0xe6, .type=IO_READ},
        {.addr=0x371c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x939c, .a=0x34, .x=0x16, .y=0x31, .sp=0x23, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xfe}, {.addr=0x939c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x939d, .a=0xfe, .x=0x16, .y=0x31, .sp=0x23, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xfe}, {.addr=0x939c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x939c, .value=0xe6, .type=IO_READ},
        {.addr=0x939d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x49ed, .a=0xea, .x=0x1f, .y=0xc9, .sp=0x9f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0xcc}, {.addr=0x49ed, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x49ee, .a=0xcc, .x=0x1f, .y=0xc9, .sp=0x9f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xcc}, {.addr=0x49ed, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x49ed, .value=0xe6, .type=IO_READ},
        {.addr=0x49ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x30c0, .a=0xda, .x=0xd8, .y=0xb6, .sp=0xb8, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x3b}, {.addr=0x30c0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x30c1, .a=0x3b, .x=0xd8, .y=0xb6, .sp=0xb8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x3b}, {.addr=0x30c0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x30c0, .value=0xe6, .type=IO_READ},
        {.addr=0x30c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x70ee, .a=0x8a, .x=0x4e, .y=0x68, .sp=0xea, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xff}, {.addr=0x70ee, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x70ef, .a=0xff, .x=0x4e, .y=0x68, .sp=0xea, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xff}, {.addr=0x70ee, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x70ee, .value=0xe6, .type=IO_READ},
        {.addr=0x70ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x0484, .a=0x4a, .x=0xe2, .y=0xd4, .sp=0x90, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xce}, {.addr=0x0484, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0485, .a=0xce, .x=0xe2, .y=0xd4, .sp=0x90, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xce}, {.addr=0x0484, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0484, .value=0xe6, .type=IO_READ},
        {.addr=0x0485, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xb626, .a=0xe1, .x=0xc0, .y=0xfe, .sp=0xa7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x07}, {.addr=0xb626, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb627, .a=0x07, .x=0xc0, .y=0xfe, .sp=0xa7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x07}, {.addr=0xb626, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb626, .value=0xe6, .type=IO_READ},
        {.addr=0xb627, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x1d83, .a=0x6b, .x=0xe6, .y=0x15, .sp=0x9b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xc4}, {.addr=0x1d83, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1d84, .a=0xc4, .x=0xe6, .y=0x15, .sp=0x9b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xc4}, {.addr=0x1d83, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1d83, .value=0xe6, .type=IO_READ},
        {.addr=0x1d84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x29da, .a=0x8b, .x=0x73, .y=0x52, .sp=0x3b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x82}, {.addr=0x29da, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x29db, .a=0x82, .x=0x73, .y=0x52, .sp=0x3b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x82}, {.addr=0x29da, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x29da, .value=0xe6, .type=IO_READ},
        {.addr=0x29db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x8165, .a=0xe4, .x=0x6a, .y=0xa6, .sp=0x96, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x02}, {.addr=0x8165, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8166, .a=0x02, .x=0x6a, .y=0xa6, .sp=0x96, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x02}, {.addr=0x8165, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8165, .value=0xe6, .type=IO_READ},
        {.addr=0x8166, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x1d31, .a=0xff, .x=0xb0, .y=0x6c, .sp=0x43, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xb7}, {.addr=0x1d31, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1d32, .a=0xb7, .x=0xb0, .y=0x6c, .sp=0x43, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xb7}, {.addr=0x1d31, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1d31, .value=0xe6, .type=IO_READ},
        {.addr=0x1d32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xbe4d, .a=0x1a, .x=0x3a, .y=0xaa, .sp=0x61, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x67}, {.addr=0xbe4d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xbe4e, .a=0x67, .x=0x3a, .y=0xaa, .sp=0x61, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x67}, {.addr=0xbe4d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xbe4d, .value=0xe6, .type=IO_READ},
        {.addr=0xbe4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x3e48, .a=0x0d, .x=0x7a, .y=0xfc, .sp=0x57, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x46}, {.addr=0x3e48, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3e49, .a=0x46, .x=0x7a, .y=0xfc, .sp=0x57, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x46}, {.addr=0x3e48, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3e48, .value=0xe6, .type=IO_READ},
        {.addr=0x3e49, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xc775, .a=0x80, .x=0xfe, .y=0xff, .sp=0x61, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xff}, {.addr=0xc775, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc776, .a=0xff, .x=0xfe, .y=0xff, .sp=0x61, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xff}, {.addr=0xc775, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc775, .value=0xe6, .type=IO_READ},
        {.addr=0xc776, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x5e99, .a=0xeb, .x=0x7d, .y=0x27, .sp=0x47, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x79}, {.addr=0x5e99, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5e9a, .a=0x79, .x=0x7d, .y=0x27, .sp=0x47, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x79}, {.addr=0x5e99, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5e99, .value=0xe6, .type=IO_READ},
        {.addr=0x5e9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xd5e3, .a=0x9a, .x=0xa4, .y=0x3f, .sp=0xb1, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x7c}, {.addr=0xd5e3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd5e4, .a=0x7c, .x=0xa4, .y=0x3f, .sp=0xb1, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x7c}, {.addr=0xd5e3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd5e3, .value=0xe6, .type=IO_READ},
        {.addr=0xd5e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xebd6, .a=0x4b, .x=0xfb, .y=0x5c, .sp=0x8f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x14}, {.addr=0xebd6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xebd7, .a=0x14, .x=0xfb, .y=0x5c, .sp=0x8f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x14}, {.addr=0xebd6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xebd6, .value=0xe6, .type=IO_READ},
        {.addr=0xebd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xc0f6, .a=0x29, .x=0xab, .y=0xaf, .sp=0x8d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x3b}, {.addr=0xc0f6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc0f7, .a=0x3b, .x=0xab, .y=0xaf, .sp=0x8d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x3b}, {.addr=0xc0f6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc0f6, .value=0xe6, .type=IO_READ},
        {.addr=0xc0f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x1e9a, .a=0x9b, .x=0x43, .y=0x5c, .sp=0x09, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xdc}, {.addr=0x1e9a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1e9b, .a=0xdc, .x=0x43, .y=0x5c, .sp=0x09, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xdc}, {.addr=0x1e9a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1e9a, .value=0xe6, .type=IO_READ},
        {.addr=0x1e9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xdbd7, .a=0xa9, .x=0xb0, .y=0x6b, .sp=0xfc, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x83}, {.addr=0xdbd7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdbd8, .a=0x83, .x=0xb0, .y=0x6b, .sp=0xfc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x83}, {.addr=0xdbd7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdbd7, .value=0xe6, .type=IO_READ},
        {.addr=0xdbd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x06f1, .a=0xd7, .x=0x6c, .y=0xd6, .sp=0x82, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x7d}, {.addr=0x06f1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x06f2, .a=0x7d, .x=0x6c, .y=0xd6, .sp=0x82, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x7d}, {.addr=0x06f1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x06f1, .value=0xe6, .type=IO_READ},
        {.addr=0x06f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3446, .a=0xc1, .x=0x2a, .y=0x34, .sp=0xb6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x84}, {.addr=0x3446, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3447, .a=0x84, .x=0x2a, .y=0x34, .sp=0xb6, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x84}, {.addr=0x3446, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3446, .value=0xe6, .type=IO_READ},
        {.addr=0x3447, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xa0ed, .a=0x9d, .x=0xc2, .y=0x17, .sp=0xcc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x34}, {.addr=0xa0ed, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xa0ee, .a=0x34, .x=0xc2, .y=0x17, .sp=0xcc, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x34}, {.addr=0xa0ed, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xa0ed, .value=0xe6, .type=IO_READ},
        {.addr=0xa0ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x6563, .a=0x31, .x=0x6f, .y=0x26, .sp=0xda, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x43}, {.addr=0x6563, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6564, .a=0x43, .x=0x6f, .y=0x26, .sp=0xda, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x43}, {.addr=0x6563, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6563, .value=0xe6, .type=IO_READ},
        {.addr=0x6564, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x5ac4, .a=0xf6, .x=0x85, .y=0x87, .sp=0x46, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x91}, {.addr=0x5ac4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5ac5, .a=0x91, .x=0x85, .y=0x87, .sp=0x46, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x91}, {.addr=0x5ac4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5ac4, .value=0xe6, .type=IO_READ},
        {.addr=0x5ac5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xda96, .a=0xb3, .x=0xca, .y=0xe4, .sp=0xbf, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x51}, {.addr=0xda96, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xda97, .a=0x51, .x=0xca, .y=0xe4, .sp=0xbf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x51}, {.addr=0xda96, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xda96, .value=0xe6, .type=IO_READ},
        {.addr=0xda97, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x9c60, .a=0xfe, .x=0x0a, .y=0xe1, .sp=0x97, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x30}, {.addr=0x9c60, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9c61, .a=0x30, .x=0x0a, .y=0xe1, .sp=0x97, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x30}, {.addr=0x9c60, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9c60, .value=0xe6, .type=IO_READ},
        {.addr=0x9c61, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x2a96, .a=0x03, .x=0xcf, .y=0x72, .sp=0x26, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x73}, {.addr=0x2a96, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2a97, .a=0x73, .x=0xcf, .y=0x72, .sp=0x26, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x73}, {.addr=0x2a96, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2a96, .value=0xe6, .type=IO_READ},
        {.addr=0x2a97, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x03c6, .a=0xcd, .x=0x87, .y=0x79, .sp=0x2e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xb7}, {.addr=0x03c6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x03c7, .a=0xb7, .x=0x87, .y=0x79, .sp=0x2e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xb7}, {.addr=0x03c6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x03c6, .value=0xe6, .type=IO_READ},
        {.addr=0x03c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x28e3, .a=0xce, .x=0x2a, .y=0x83, .sp=0x76, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x26}, {.addr=0x28e3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x28e4, .a=0x26, .x=0x2a, .y=0x83, .sp=0x76, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x26}, {.addr=0x28e3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x28e3, .value=0xe6, .type=IO_READ},
        {.addr=0x28e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x6523, .a=0x06, .x=0x30, .y=0x30, .sp=0x0f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xf8}, {.addr=0x6523, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x6524, .a=0xf8, .x=0x30, .y=0x30, .sp=0x0f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xf8}, {.addr=0x6523, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6523, .value=0xe6, .type=IO_READ},
        {.addr=0x6524, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x9a6f, .a=0x61, .x=0x4e, .y=0xf1, .sp=0xbe, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x10}, {.addr=0x9a6f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9a70, .a=0x10, .x=0x4e, .y=0xf1, .sp=0xbe, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x10}, {.addr=0x9a6f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9a6f, .value=0xe6, .type=IO_READ},
        {.addr=0x9a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E6, _E6_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xe205, .a=0x84, .x=0x86, .y=0x2e, .sp=0x6a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x3a}, {.addr=0xe205, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe206, .a=0x3a, .x=0x86, .y=0x2e, .sp=0x6a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x3a}, {.addr=0xe205, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe205, .value=0xe6, .type=IO_READ},
        {.addr=0xe206, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E6 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
