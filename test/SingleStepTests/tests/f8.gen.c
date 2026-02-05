#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_F8, _F8_0001) {
    const struct CPU_State initial_cpu = {.pc=0x6ce3, .a=0x03, .x=0x77, .y=0xb2, .sp=0x30, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x81}, {.addr=0x6ce3, .value=0xf8}, {.addr=0x6ce4, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x6ce5, .a=0x03, .x=0x81, .y=0xb2, .sp=0x30, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x81}, {.addr=0x6ce3, .value=0xf8}, {.addr=0x6ce4, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ce3, .value=0xf8, .type=IO_READ},
        {.addr=0x6ce4, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2e63, .a=0x4e, .x=0xd6, .y=0xcd, .sp=0x32, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x77}, {.addr=0x2e63, .value=0xf8}, {.addr=0x2e64, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x2e65, .a=0x4e, .x=0x77, .y=0xcd, .sp=0x32, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x77}, {.addr=0x2e63, .value=0xf8}, {.addr=0x2e64, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e63, .value=0xf8, .type=IO_READ},
        {.addr=0x2e64, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0003) {
    const struct CPU_State initial_cpu = {.pc=0x5e2a, .a=0x84, .x=0x00, .y=0x3e, .sp=0x28, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xab}, {.addr=0x5e2a, .value=0xf8}, {.addr=0x5e2b, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x5e2c, .a=0x84, .x=0xab, .y=0x3e, .sp=0x28, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xab}, {.addr=0x5e2a, .value=0xf8}, {.addr=0x5e2b, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e2a, .value=0xf8, .type=IO_READ},
        {.addr=0x5e2b, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0004) {
    const struct CPU_State initial_cpu = {.pc=0x3aaa, .a=0x92, .x=0xb5, .y=0xac, .sp=0xaf, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x08}, {.addr=0x3aaa, .value=0xf8}, {.addr=0x3aab, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x3aac, .a=0x92, .x=0x08, .y=0xac, .sp=0xaf, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x08}, {.addr=0x3aaa, .value=0xf8}, {.addr=0x3aab, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aaa, .value=0xf8, .type=IO_READ},
        {.addr=0x3aab, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0005) {
    const struct CPU_State initial_cpu = {.pc=0xe723, .a=0x27, .x=0x3c, .y=0x07, .sp=0xb7, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0xf5}, {.addr=0xe723, .value=0xf8}, {.addr=0xe724, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xe725, .a=0x27, .x=0xf5, .y=0x07, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0xf5}, {.addr=0xe723, .value=0xf8}, {.addr=0xe724, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xe723, .value=0xf8, .type=IO_READ},
        {.addr=0xe724, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0006) {
    const struct CPU_State initial_cpu = {.pc=0x4fb7, .a=0xd0, .x=0x67, .y=0x17, .sp=0x29, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xf3}, {.addr=0x4fb7, .value=0xf8}, {.addr=0x4fb8, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x4fb9, .a=0xd0, .x=0xf3, .y=0x17, .sp=0x29, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xf3}, {.addr=0x4fb7, .value=0xf8}, {.addr=0x4fb8, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fb7, .value=0xf8, .type=IO_READ},
        {.addr=0x4fb8, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0007) {
    const struct CPU_State initial_cpu = {.pc=0xaf8d, .a=0x22, .x=0x31, .y=0xee, .sp=0x56, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xcf}, {.addr=0xaf8d, .value=0xf8}, {.addr=0xaf8e, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xaf8f, .a=0x22, .x=0xcf, .y=0xee, .sp=0x56, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xcf}, {.addr=0xaf8d, .value=0xf8}, {.addr=0xaf8e, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf8d, .value=0xf8, .type=IO_READ},
        {.addr=0xaf8e, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0008) {
    const struct CPU_State initial_cpu = {.pc=0x169a, .a=0x56, .x=0x4b, .y=0xdb, .sp=0x41, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x1c}, {.addr=0x169a, .value=0xf8}, {.addr=0x169b, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x169c, .a=0x56, .x=0x1c, .y=0xdb, .sp=0x41, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x1c}, {.addr=0x169a, .value=0xf8}, {.addr=0x169b, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x169a, .value=0xf8, .type=IO_READ},
        {.addr=0x169b, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf321, .a=0xa7, .x=0x23, .y=0xd6, .sp=0xf7, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xc4}, {.addr=0xf321, .value=0xf8}, {.addr=0xf322, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xf323, .a=0xa7, .x=0xc4, .y=0xd6, .sp=0xf7, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xc4}, {.addr=0xf321, .value=0xf8}, {.addr=0xf322, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf321, .value=0xf8, .type=IO_READ},
        {.addr=0xf322, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_000A) {
    const struct CPU_State initial_cpu = {.pc=0x8da5, .a=0x31, .x=0x7f, .y=0xa1, .sp=0xf8, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0xec}, {.addr=0x8da5, .value=0xf8}, {.addr=0x8da6, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x8da7, .a=0x31, .x=0xec, .y=0xa1, .sp=0xf8, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0xec}, {.addr=0x8da5, .value=0xf8}, {.addr=0x8da6, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da5, .value=0xf8, .type=IO_READ},
        {.addr=0x8da6, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_000B) {
    const struct CPU_State initial_cpu = {.pc=0x35ac, .a=0x9d, .x=0xd8, .y=0xc3, .sp=0x53, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xd2}, {.addr=0x35ac, .value=0xf8}, {.addr=0x35ad, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x35ae, .a=0x9d, .x=0xd2, .y=0xc3, .sp=0x53, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xd2}, {.addr=0x35ac, .value=0xf8}, {.addr=0x35ad, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x35ac, .value=0xf8, .type=IO_READ},
        {.addr=0x35ad, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_000C) {
    const struct CPU_State initial_cpu = {.pc=0xad59, .a=0x45, .x=0xaa, .y=0x2e, .sp=0x42, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xf5}, {.addr=0xad59, .value=0xf8}, {.addr=0xad5a, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xad5b, .a=0x45, .x=0xf5, .y=0x2e, .sp=0x42, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xf5}, {.addr=0xad59, .value=0xf8}, {.addr=0xad5a, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xad59, .value=0xf8, .type=IO_READ},
        {.addr=0xad5a, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_000D) {
    const struct CPU_State initial_cpu = {.pc=0x1074, .a=0x75, .x=0x61, .y=0x39, .sp=0x52, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x10}, {.addr=0x1074, .value=0xf8}, {.addr=0x1075, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x1076, .a=0x75, .x=0x10, .y=0x39, .sp=0x52, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x10}, {.addr=0x1074, .value=0xf8}, {.addr=0x1075, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1074, .value=0xf8, .type=IO_READ},
        {.addr=0x1075, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_000E) {
    const struct CPU_State initial_cpu = {.pc=0xa554, .a=0xa0, .x=0x29, .y=0x94, .sp=0xc3, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xd6}, {.addr=0xa554, .value=0xf8}, {.addr=0xa555, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xa556, .a=0xa0, .x=0xd6, .y=0x94, .sp=0xc3, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xd6}, {.addr=0xa554, .value=0xf8}, {.addr=0xa555, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xa554, .value=0xf8, .type=IO_READ},
        {.addr=0xa555, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_000F) {
    const struct CPU_State initial_cpu = {.pc=0xadb2, .a=0x2c, .x=0xbe, .y=0xd4, .sp=0xde, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x78}, {.addr=0xadb2, .value=0xf8}, {.addr=0xadb3, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xadb4, .a=0x2c, .x=0x78, .y=0xd4, .sp=0xde, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x78}, {.addr=0xadb2, .value=0xf8}, {.addr=0xadb3, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xadb2, .value=0xf8, .type=IO_READ},
        {.addr=0xadb3, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0010) {
    const struct CPU_State initial_cpu = {.pc=0xc167, .a=0xf1, .x=0x33, .y=0x12, .sp=0x5e, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xfe}, {.addr=0xc167, .value=0xf8}, {.addr=0xc168, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xc169, .a=0xf1, .x=0xfe, .y=0x12, .sp=0x5e, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xfe}, {.addr=0xc167, .value=0xf8}, {.addr=0xc168, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xc167, .value=0xf8, .type=IO_READ},
        {.addr=0xc168, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0011) {
    const struct CPU_State initial_cpu = {.pc=0x5574, .a=0x4c, .x=0xe9, .y=0xed, .sp=0x1f, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x83}, {.addr=0x5574, .value=0xf8}, {.addr=0x5575, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x5576, .a=0x4c, .x=0x83, .y=0xed, .sp=0x1f, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x83}, {.addr=0x5574, .value=0xf8}, {.addr=0x5575, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x5574, .value=0xf8, .type=IO_READ},
        {.addr=0x5575, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0012) {
    const struct CPU_State initial_cpu = {.pc=0xaa78, .a=0x9a, .x=0xca, .y=0xf5, .sp=0x33, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x25}, {.addr=0xaa78, .value=0xf8}, {.addr=0xaa79, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xaa7a, .a=0x9a, .x=0x25, .y=0xf5, .sp=0x33, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x25}, {.addr=0xaa78, .value=0xf8}, {.addr=0xaa79, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa78, .value=0xf8, .type=IO_READ},
        {.addr=0xaa79, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0013) {
    const struct CPU_State initial_cpu = {.pc=0x2eab, .a=0x81, .x=0x59, .y=0xcc, .sp=0x36, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xbb}, {.addr=0x2eab, .value=0xf8}, {.addr=0x2eac, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x2ead, .a=0x81, .x=0xbb, .y=0xcc, .sp=0x36, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xbb}, {.addr=0x2eab, .value=0xf8}, {.addr=0x2eac, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2eab, .value=0xf8, .type=IO_READ},
        {.addr=0x2eac, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0014) {
    const struct CPU_State initial_cpu = {.pc=0xad12, .a=0xc2, .x=0xf1, .y=0x15, .sp=0x92, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0xea}, {.addr=0xad12, .value=0xf8}, {.addr=0xad13, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xad14, .a=0xc2, .x=0xea, .y=0x15, .sp=0x92, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0xea}, {.addr=0xad12, .value=0xf8}, {.addr=0xad13, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xad12, .value=0xf8, .type=IO_READ},
        {.addr=0xad13, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0015) {
    const struct CPU_State initial_cpu = {.pc=0x94bb, .a=0x40, .x=0xba, .y=0xca, .sp=0xf2, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x4e}, {.addr=0x94bb, .value=0xf8}, {.addr=0x94bc, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x94bd, .a=0x40, .x=0x4e, .y=0xca, .sp=0xf2, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x4e}, {.addr=0x94bb, .value=0xf8}, {.addr=0x94bc, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x94bb, .value=0xf8, .type=IO_READ},
        {.addr=0x94bc, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0016) {
    const struct CPU_State initial_cpu = {.pc=0xbd8d, .a=0x91, .x=0xd8, .y=0x67, .sp=0x11, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xfc}, {.addr=0xbd8d, .value=0xf8}, {.addr=0xbd8e, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xbd8f, .a=0x91, .x=0xfc, .y=0x67, .sp=0x11, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xfc}, {.addr=0xbd8d, .value=0xf8}, {.addr=0xbd8e, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd8d, .value=0xf8, .type=IO_READ},
        {.addr=0xbd8e, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0017) {
    const struct CPU_State initial_cpu = {.pc=0x4708, .a=0x61, .x=0x24, .y=0x17, .sp=0x4a, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x0d}, {.addr=0x4708, .value=0xf8}, {.addr=0x4709, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x470a, .a=0x61, .x=0x0d, .y=0x17, .sp=0x4a, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x0d}, {.addr=0x4708, .value=0xf8}, {.addr=0x4709, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x4708, .value=0xf8, .type=IO_READ},
        {.addr=0x4709, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0018) {
    const struct CPU_State initial_cpu = {.pc=0x1d0d, .a=0x35, .x=0x57, .y=0x4d, .sp=0x06, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xe1}, {.addr=0x1d0d, .value=0xf8}, {.addr=0x1d0e, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x1d0f, .a=0x35, .x=0xe1, .y=0x4d, .sp=0x06, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xe1}, {.addr=0x1d0d, .value=0xf8}, {.addr=0x1d0e, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d0d, .value=0xf8, .type=IO_READ},
        {.addr=0x1d0e, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0019) {
    const struct CPU_State initial_cpu = {.pc=0xa2da, .a=0x0c, .x=0x71, .y=0x3c, .sp=0xe3, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xe1}, {.addr=0xa2da, .value=0xf8}, {.addr=0xa2db, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xa2dc, .a=0x0c, .x=0xe1, .y=0x3c, .sp=0xe3, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xe1}, {.addr=0xa2da, .value=0xf8}, {.addr=0xa2db, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2da, .value=0xf8, .type=IO_READ},
        {.addr=0xa2db, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_001A) {
    const struct CPU_State initial_cpu = {.pc=0x4895, .a=0x1b, .x=0xa6, .y=0x6c, .sp=0xac, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x86}, {.addr=0x4895, .value=0xf8}, {.addr=0x4896, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x4897, .a=0x1b, .x=0x86, .y=0x6c, .sp=0xac, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x86}, {.addr=0x4895, .value=0xf8}, {.addr=0x4896, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4895, .value=0xf8, .type=IO_READ},
        {.addr=0x4896, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_001B) {
    const struct CPU_State initial_cpu = {.pc=0x4f09, .a=0x5e, .x=0xcf, .y=0xc6, .sp=0x53, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xf1}, {.addr=0x4f09, .value=0xf8}, {.addr=0x4f0a, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x4f0b, .a=0x5e, .x=0xf1, .y=0xc6, .sp=0x53, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xf1}, {.addr=0x4f09, .value=0xf8}, {.addr=0x4f0a, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f09, .value=0xf8, .type=IO_READ},
        {.addr=0x4f0a, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_001C) {
    const struct CPU_State initial_cpu = {.pc=0x2041, .a=0xf5, .x=0x92, .y=0xfa, .sp=0x07, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xdd}, {.addr=0x2041, .value=0xf8}, {.addr=0x2042, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x2043, .a=0xf5, .x=0xdd, .y=0xfa, .sp=0x07, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xdd}, {.addr=0x2041, .value=0xf8}, {.addr=0x2042, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2041, .value=0xf8, .type=IO_READ},
        {.addr=0x2042, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_001D) {
    const struct CPU_State initial_cpu = {.pc=0xb469, .a=0x5e, .x=0xb2, .y=0x4d, .sp=0x12, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xda}, {.addr=0xb469, .value=0xf8}, {.addr=0xb46a, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xb46b, .a=0x5e, .x=0xda, .y=0x4d, .sp=0x12, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xda}, {.addr=0xb469, .value=0xf8}, {.addr=0xb46a, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb469, .value=0xf8, .type=IO_READ},
        {.addr=0xb46a, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_001E) {
    const struct CPU_State initial_cpu = {.pc=0x110f, .a=0x8a, .x=0xc2, .y=0xb5, .sp=0x3a, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x18}, {.addr=0x110f, .value=0xf8}, {.addr=0x1110, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x1111, .a=0x8a, .x=0x18, .y=0xb5, .sp=0x3a, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x18}, {.addr=0x110f, .value=0xf8}, {.addr=0x1110, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x110f, .value=0xf8, .type=IO_READ},
        {.addr=0x1110, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_001F) {
    const struct CPU_State initial_cpu = {.pc=0x4679, .a=0xb7, .x=0xbf, .y=0xe2, .sp=0x3d, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0xc0}, {.addr=0x4679, .value=0xf8}, {.addr=0x467a, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x467b, .a=0xb7, .x=0xc0, .y=0xe2, .sp=0x3d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0xc0}, {.addr=0x4679, .value=0xf8}, {.addr=0x467a, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x4679, .value=0xf8, .type=IO_READ},
        {.addr=0x467a, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0020) {
    const struct CPU_State initial_cpu = {.pc=0xcc4d, .a=0x87, .x=0xfb, .y=0x9c, .sp=0x7e, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x97}, {.addr=0xcc4d, .value=0xf8}, {.addr=0xcc4e, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xcc4f, .a=0x87, .x=0x97, .y=0x9c, .sp=0x7e, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x97}, {.addr=0xcc4d, .value=0xf8}, {.addr=0xcc4e, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc4d, .value=0xf8, .type=IO_READ},
        {.addr=0xcc4e, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0021) {
    const struct CPU_State initial_cpu = {.pc=0x5e24, .a=0x89, .x=0xe7, .y=0xd5, .sp=0x37, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xcf}, {.addr=0x5e24, .value=0xf8}, {.addr=0x5e25, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x5e26, .a=0x89, .x=0xcf, .y=0xd5, .sp=0x37, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xcf}, {.addr=0x5e24, .value=0xf8}, {.addr=0x5e25, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e24, .value=0xf8, .type=IO_READ},
        {.addr=0x5e25, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0022) {
    const struct CPU_State initial_cpu = {.pc=0x4a62, .a=0x66, .x=0xa1, .y=0x79, .sp=0x96, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x4a}, {.addr=0x4a62, .value=0xf8}, {.addr=0x4a63, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x4a64, .a=0x66, .x=0x4a, .y=0x79, .sp=0x96, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x4a}, {.addr=0x4a62, .value=0xf8}, {.addr=0x4a63, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a62, .value=0xf8, .type=IO_READ},
        {.addr=0x4a63, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0023) {
    const struct CPU_State initial_cpu = {.pc=0x3bf6, .a=0xf2, .x=0xb3, .y=0xab, .sp=0x96, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x12}, {.addr=0x3bf6, .value=0xf8}, {.addr=0x3bf7, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x3bf8, .a=0xf2, .x=0x12, .y=0xab, .sp=0x96, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x12}, {.addr=0x3bf6, .value=0xf8}, {.addr=0x3bf7, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bf6, .value=0xf8, .type=IO_READ},
        {.addr=0x3bf7, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0024) {
    const struct CPU_State initial_cpu = {.pc=0x1f72, .a=0x71, .x=0x4d, .y=0x4a, .sp=0xcc, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xb4}, {.addr=0x1f72, .value=0xf8}, {.addr=0x1f73, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x1f74, .a=0x71, .x=0xb4, .y=0x4a, .sp=0xcc, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xb4}, {.addr=0x1f72, .value=0xf8}, {.addr=0x1f73, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f72, .value=0xf8, .type=IO_READ},
        {.addr=0x1f73, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0025) {
    const struct CPU_State initial_cpu = {.pc=0x5dba, .a=0xec, .x=0x52, .y=0x19, .sp=0x84, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xce}, {.addr=0x5dba, .value=0xf8}, {.addr=0x5dbb, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x5dbc, .a=0xec, .x=0xce, .y=0x19, .sp=0x84, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xce}, {.addr=0x5dba, .value=0xf8}, {.addr=0x5dbb, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dba, .value=0xf8, .type=IO_READ},
        {.addr=0x5dbb, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0026) {
    const struct CPU_State initial_cpu = {.pc=0x174b, .a=0x48, .x=0x45, .y=0x8d, .sp=0xd5, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x9f}, {.addr=0x174b, .value=0xf8}, {.addr=0x174c, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x174d, .a=0x48, .x=0x9f, .y=0x8d, .sp=0xd5, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x9f}, {.addr=0x174b, .value=0xf8}, {.addr=0x174c, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x174b, .value=0xf8, .type=IO_READ},
        {.addr=0x174c, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0027) {
    const struct CPU_State initial_cpu = {.pc=0x6794, .a=0x1c, .x=0xc6, .y=0x44, .sp=0x60, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x49}, {.addr=0x6794, .value=0xf8}, {.addr=0x6795, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x6796, .a=0x1c, .x=0x49, .y=0x44, .sp=0x60, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x49}, {.addr=0x6794, .value=0xf8}, {.addr=0x6795, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6794, .value=0xf8, .type=IO_READ},
        {.addr=0x6795, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0028) {
    const struct CPU_State initial_cpu = {.pc=0xa631, .a=0xab, .x=0x5c, .y=0x49, .sp=0x7b, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x4c}, {.addr=0xa631, .value=0xf8}, {.addr=0xa632, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xa633, .a=0xab, .x=0x4c, .y=0x49, .sp=0x7b, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x4c}, {.addr=0xa631, .value=0xf8}, {.addr=0xa632, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa631, .value=0xf8, .type=IO_READ},
        {.addr=0xa632, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0029) {
    const struct CPU_State initial_cpu = {.pc=0x584b, .a=0x7f, .x=0x60, .y=0xb3, .sp=0x31, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x4f}, {.addr=0x584b, .value=0xf8}, {.addr=0x584c, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x584d, .a=0x7f, .x=0x4f, .y=0xb3, .sp=0x31, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x4f}, {.addr=0x584b, .value=0xf8}, {.addr=0x584c, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x584b, .value=0xf8, .type=IO_READ},
        {.addr=0x584c, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_002A) {
    const struct CPU_State initial_cpu = {.pc=0x504d, .a=0xda, .x=0xec, .y=0x17, .sp=0xb8, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0xbd}, {.addr=0x504d, .value=0xf8}, {.addr=0x504e, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x504f, .a=0xda, .x=0xbd, .y=0x17, .sp=0xb8, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0xbd}, {.addr=0x504d, .value=0xf8}, {.addr=0x504e, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x504d, .value=0xf8, .type=IO_READ},
        {.addr=0x504e, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_002B) {
    const struct CPU_State initial_cpu = {.pc=0xc316, .a=0xab, .x=0x2a, .y=0xa8, .sp=0xf4, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x47}, {.addr=0xc316, .value=0xf8}, {.addr=0xc317, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xc318, .a=0xab, .x=0x47, .y=0xa8, .sp=0xf4, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x47}, {.addr=0xc316, .value=0xf8}, {.addr=0xc317, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc316, .value=0xf8, .type=IO_READ},
        {.addr=0xc317, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_002C) {
    const struct CPU_State initial_cpu = {.pc=0xda9b, .a=0xe0, .x=0x5d, .y=0xe0, .sp=0x58, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xa4}, {.addr=0xda9b, .value=0xf8}, {.addr=0xda9c, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xda9d, .a=0xe0, .x=0xa4, .y=0xe0, .sp=0x58, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xa4}, {.addr=0xda9b, .value=0xf8}, {.addr=0xda9c, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xda9b, .value=0xf8, .type=IO_READ},
        {.addr=0xda9c, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_002D) {
    const struct CPU_State initial_cpu = {.pc=0x15de, .a=0xc2, .x=0x65, .y=0x93, .sp=0x40, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x81}, {.addr=0x15de, .value=0xf8}, {.addr=0x15df, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x15e0, .a=0xc2, .x=0x81, .y=0x93, .sp=0x40, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x81}, {.addr=0x15de, .value=0xf8}, {.addr=0x15df, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x15de, .value=0xf8, .type=IO_READ},
        {.addr=0x15df, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_002E) {
    const struct CPU_State initial_cpu = {.pc=0x7bab, .a=0x95, .x=0x20, .y=0x07, .sp=0x28, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x4e}, {.addr=0x7bab, .value=0xf8}, {.addr=0x7bac, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x7bad, .a=0x95, .x=0x4e, .y=0x07, .sp=0x28, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x4e}, {.addr=0x7bab, .value=0xf8}, {.addr=0x7bac, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bab, .value=0xf8, .type=IO_READ},
        {.addr=0x7bac, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_002F) {
    const struct CPU_State initial_cpu = {.pc=0xe42c, .a=0x84, .x=0x85, .y=0x84, .sp=0x65, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x99}, {.addr=0xe42c, .value=0xf8}, {.addr=0xe42d, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xe42e, .a=0x84, .x=0x99, .y=0x84, .sp=0x65, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x99}, {.addr=0xe42c, .value=0xf8}, {.addr=0xe42d, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xe42c, .value=0xf8, .type=IO_READ},
        {.addr=0xe42d, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0030) {
    const struct CPU_State initial_cpu = {.pc=0xc8ab, .a=0x39, .x=0xb8, .y=0x6e, .sp=0x70, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0x04}, {.addr=0xc8ab, .value=0xf8}, {.addr=0xc8ac, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xc8ad, .a=0x39, .x=0x04, .y=0x6e, .sp=0x70, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0x04}, {.addr=0xc8ab, .value=0xf8}, {.addr=0xc8ac, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8ab, .value=0xf8, .type=IO_READ},
        {.addr=0xc8ac, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0031) {
    const struct CPU_State initial_cpu = {.pc=0x5c62, .a=0x19, .x=0xfd, .y=0x0d, .sp=0x56, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x6f}, {.addr=0x5c62, .value=0xf8}, {.addr=0x5c63, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0x19, .x=0x6f, .y=0x0d, .sp=0x56, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x6f}, {.addr=0x5c62, .value=0xf8}, {.addr=0x5c63, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c62, .value=0xf8, .type=IO_READ},
        {.addr=0x5c63, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0032) {
    const struct CPU_State initial_cpu = {.pc=0xc2da, .a=0x9a, .x=0x09, .y=0x2c, .sp=0x50, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xee}, {.addr=0xc2da, .value=0xf8}, {.addr=0xc2db, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xc2dc, .a=0x9a, .x=0xee, .y=0x2c, .sp=0x50, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xee}, {.addr=0xc2da, .value=0xf8}, {.addr=0xc2db, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2da, .value=0xf8, .type=IO_READ},
        {.addr=0xc2db, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0033) {
    const struct CPU_State initial_cpu = {.pc=0x0223, .a=0x67, .x=0x27, .y=0x63, .sp=0x1a, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xa7}, {.addr=0x0223, .value=0xf8}, {.addr=0x0224, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x0225, .a=0x67, .x=0xa7, .y=0x63, .sp=0x1a, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xa7}, {.addr=0x0223, .value=0xf8}, {.addr=0x0224, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x0223, .value=0xf8, .type=IO_READ},
        {.addr=0x0224, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0034) {
    const struct CPU_State initial_cpu = {.pc=0x8066, .a=0x83, .x=0x3e, .y=0xdb, .sp=0x4a, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xdb}, {.addr=0x8066, .value=0xf8}, {.addr=0x8067, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x8068, .a=0x83, .x=0xdb, .y=0xdb, .sp=0x4a, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xdb}, {.addr=0x8066, .value=0xf8}, {.addr=0x8067, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x8066, .value=0xf8, .type=IO_READ},
        {.addr=0x8067, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0035) {
    const struct CPU_State initial_cpu = {.pc=0xcc6f, .a=0xee, .x=0x1c, .y=0x58, .sp=0xa5, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0x20}, {.addr=0xcc6f, .value=0xf8}, {.addr=0xcc70, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xcc71, .a=0xee, .x=0x20, .y=0x58, .sp=0xa5, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0x20}, {.addr=0xcc6f, .value=0xf8}, {.addr=0xcc70, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc6f, .value=0xf8, .type=IO_READ},
        {.addr=0xcc70, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0036) {
    const struct CPU_State initial_cpu = {.pc=0xe2ef, .a=0x30, .x=0xc2, .y=0x26, .sp=0x56, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x82}, {.addr=0xe2ef, .value=0xf8}, {.addr=0xe2f0, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xe2f1, .a=0x30, .x=0x82, .y=0x26, .sp=0x56, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x82}, {.addr=0xe2ef, .value=0xf8}, {.addr=0xe2f0, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2ef, .value=0xf8, .type=IO_READ},
        {.addr=0xe2f0, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0037) {
    const struct CPU_State initial_cpu = {.pc=0x9a16, .a=0x7b, .x=0x68, .y=0x77, .sp=0x00, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xfe}, {.addr=0x9a16, .value=0xf8}, {.addr=0x9a17, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x9a18, .a=0x7b, .x=0xfe, .y=0x77, .sp=0x00, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xfe}, {.addr=0x9a16, .value=0xf8}, {.addr=0x9a17, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a16, .value=0xf8, .type=IO_READ},
        {.addr=0x9a17, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0038) {
    const struct CPU_State initial_cpu = {.pc=0x606a, .a=0x01, .x=0x67, .y=0xf1, .sp=0x20, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x5a}, {.addr=0x606a, .value=0xf8}, {.addr=0x606b, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x606c, .a=0x01, .x=0x5a, .y=0xf1, .sp=0x20, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x5a}, {.addr=0x606a, .value=0xf8}, {.addr=0x606b, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x606a, .value=0xf8, .type=IO_READ},
        {.addr=0x606b, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0039) {
    const struct CPU_State initial_cpu = {.pc=0xcc3d, .a=0x02, .x=0xb9, .y=0xb6, .sp=0xcb, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xee}, {.addr=0xcc3d, .value=0xf8}, {.addr=0xcc3e, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xcc3f, .a=0x02, .x=0xee, .y=0xb6, .sp=0xcb, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xee}, {.addr=0xcc3d, .value=0xf8}, {.addr=0xcc3e, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc3d, .value=0xf8, .type=IO_READ},
        {.addr=0xcc3e, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_003A) {
    const struct CPU_State initial_cpu = {.pc=0x2e34, .a=0xa2, .x=0xf5, .y=0x70, .sp=0x2b, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x4e}, {.addr=0x2e34, .value=0xf8}, {.addr=0x2e35, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x2e36, .a=0xa2, .x=0x4e, .y=0x70, .sp=0x2b, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x4e}, {.addr=0x2e34, .value=0xf8}, {.addr=0x2e35, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e34, .value=0xf8, .type=IO_READ},
        {.addr=0x2e35, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_003B) {
    const struct CPU_State initial_cpu = {.pc=0x68cd, .a=0x08, .x=0xd4, .y=0x4c, .sp=0x7b, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x61}, {.addr=0x68cd, .value=0xf8}, {.addr=0x68ce, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x68cf, .a=0x08, .x=0x61, .y=0x4c, .sp=0x7b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x61}, {.addr=0x68cd, .value=0xf8}, {.addr=0x68ce, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x68cd, .value=0xf8, .type=IO_READ},
        {.addr=0x68ce, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_003C) {
    const struct CPU_State initial_cpu = {.pc=0xbdd0, .a=0x67, .x=0x29, .y=0x14, .sp=0xfd, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x0a}, {.addr=0xbdd0, .value=0xf8}, {.addr=0xbdd1, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xbdd2, .a=0x67, .x=0x0a, .y=0x14, .sp=0xfd, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x0a}, {.addr=0xbdd0, .value=0xf8}, {.addr=0xbdd1, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdd0, .value=0xf8, .type=IO_READ},
        {.addr=0xbdd1, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_003D) {
    const struct CPU_State initial_cpu = {.pc=0xf795, .a=0xd5, .x=0x56, .y=0x0a, .sp=0xac, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xba}, {.addr=0xf795, .value=0xf8}, {.addr=0xf796, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xf797, .a=0xd5, .x=0xba, .y=0x0a, .sp=0xac, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xba}, {.addr=0xf795, .value=0xf8}, {.addr=0xf796, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf795, .value=0xf8, .type=IO_READ},
        {.addr=0xf796, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_003E) {
    const struct CPU_State initial_cpu = {.pc=0x582b, .a=0x9f, .x=0x0e, .y=0x2a, .sp=0xfd, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x58}, {.addr=0x582b, .value=0xf8}, {.addr=0x582c, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x582d, .a=0x9f, .x=0x58, .y=0x2a, .sp=0xfd, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x58}, {.addr=0x582b, .value=0xf8}, {.addr=0x582c, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x582b, .value=0xf8, .type=IO_READ},
        {.addr=0x582c, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_003F) {
    const struct CPU_State initial_cpu = {.pc=0xcee6, .a=0xd7, .x=0xb3, .y=0xf7, .sp=0x93, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x57}, {.addr=0xcee6, .value=0xf8}, {.addr=0xcee7, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xcee8, .a=0xd7, .x=0x57, .y=0xf7, .sp=0x93, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x57}, {.addr=0xcee6, .value=0xf8}, {.addr=0xcee7, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xcee6, .value=0xf8, .type=IO_READ},
        {.addr=0xcee7, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0040) {
    const struct CPU_State initial_cpu = {.pc=0x5913, .a=0x04, .x=0x24, .y=0xd2, .sp=0x8e, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xcd}, {.addr=0x5913, .value=0xf8}, {.addr=0x5914, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x5915, .a=0x04, .x=0xcd, .y=0xd2, .sp=0x8e, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xcd}, {.addr=0x5913, .value=0xf8}, {.addr=0x5914, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5913, .value=0xf8, .type=IO_READ},
        {.addr=0x5914, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0041) {
    const struct CPU_State initial_cpu = {.pc=0x4422, .a=0x93, .x=0x5e, .y=0x7b, .sp=0xbf, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x7c}, {.addr=0x4422, .value=0xf8}, {.addr=0x4423, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x4424, .a=0x93, .x=0x7c, .y=0x7b, .sp=0xbf, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x7c}, {.addr=0x4422, .value=0xf8}, {.addr=0x4423, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x4422, .value=0xf8, .type=IO_READ},
        {.addr=0x4423, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0043) {
    const struct CPU_State initial_cpu = {.pc=0xf0de, .a=0x68, .x=0xbb, .y=0xfa, .sp=0xc5, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x01}, {.addr=0xf0de, .value=0xf8}, {.addr=0xf0df, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xf0e0, .a=0x68, .x=0x01, .y=0xfa, .sp=0xc5, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x01}, {.addr=0xf0de, .value=0xf8}, {.addr=0xf0df, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0de, .value=0xf8, .type=IO_READ},
        {.addr=0xf0df, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0044) {
    const struct CPU_State initial_cpu = {.pc=0xb32f, .a=0x06, .x=0x58, .y=0xdb, .sp=0x83, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x97}, {.addr=0xb32f, .value=0xf8}, {.addr=0xb330, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xb331, .a=0x06, .x=0x97, .y=0xdb, .sp=0x83, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x97}, {.addr=0xb32f, .value=0xf8}, {.addr=0xb330, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xb32f, .value=0xf8, .type=IO_READ},
        {.addr=0xb330, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0045) {
    const struct CPU_State initial_cpu = {.pc=0xf561, .a=0x11, .x=0x03, .y=0x00, .sp=0xe9, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x8c}, {.addr=0xf561, .value=0xf8}, {.addr=0xf562, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xf563, .a=0x11, .x=0x8c, .y=0x00, .sp=0xe9, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x8c}, {.addr=0xf561, .value=0xf8}, {.addr=0xf562, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xf561, .value=0xf8, .type=IO_READ},
        {.addr=0xf562, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0046) {
    const struct CPU_State initial_cpu = {.pc=0x44b9, .a=0x62, .x=0x46, .y=0x28, .sp=0x44, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x85}, {.addr=0x44b9, .value=0xf8}, {.addr=0x44ba, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0x44bb, .a=0x62, .x=0x85, .y=0x28, .sp=0x44, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x85}, {.addr=0x44b9, .value=0xf8}, {.addr=0x44ba, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0x44b9, .value=0xf8, .type=IO_READ},
        {.addr=0x44ba, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0047) {
    const struct CPU_State initial_cpu = {.pc=0x26c0, .a=0x77, .x=0xbf, .y=0x3f, .sp=0x35, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0xbf}, {.addr=0x26c0, .value=0xf8}, {.addr=0x26c1, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x26c2, .a=0x77, .x=0xbf, .y=0x3f, .sp=0x35, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0xbf}, {.addr=0x26c0, .value=0xf8}, {.addr=0x26c1, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x26c0, .value=0xf8, .type=IO_READ},
        {.addr=0x26c1, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0048) {
    const struct CPU_State initial_cpu = {.pc=0x5eec, .a=0xa0, .x=0x19, .y=0xbd, .sp=0x87, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xa0}, {.addr=0x5eec, .value=0xf8}, {.addr=0x5eed, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x5eee, .a=0xa0, .x=0xa0, .y=0xbd, .sp=0x87, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xa0}, {.addr=0x5eec, .value=0xf8}, {.addr=0x5eed, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eec, .value=0xf8, .type=IO_READ},
        {.addr=0x5eed, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0049) {
    const struct CPU_State initial_cpu = {.pc=0x6acb, .a=0x10, .x=0x9a, .y=0xf8, .sp=0x2b, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x69}, {.addr=0x6acb, .value=0xf8}, {.addr=0x6acc, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x6acd, .a=0x10, .x=0x69, .y=0xf8, .sp=0x2b, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x69}, {.addr=0x6acb, .value=0xf8}, {.addr=0x6acc, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6acb, .value=0xf8, .type=IO_READ},
        {.addr=0x6acc, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_004A) {
    const struct CPU_State initial_cpu = {.pc=0xfa6e, .a=0xfc, .x=0x25, .y=0xcb, .sp=0xe6, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x0a}, {.addr=0xfa6e, .value=0xf8}, {.addr=0xfa6f, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xfa70, .a=0xfc, .x=0x0a, .y=0xcb, .sp=0xe6, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x0a}, {.addr=0xfa6e, .value=0xf8}, {.addr=0xfa6f, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa6e, .value=0xf8, .type=IO_READ},
        {.addr=0xfa6f, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_004B) {
    const struct CPU_State initial_cpu = {.pc=0xe66c, .a=0x89, .x=0x81, .y=0xae, .sp=0x6b, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xa1}, {.addr=0xe66c, .value=0xf8}, {.addr=0xe66d, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe66e, .a=0x89, .x=0xa1, .y=0xae, .sp=0x6b, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xa1}, {.addr=0xe66c, .value=0xf8}, {.addr=0xe66d, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe66c, .value=0xf8, .type=IO_READ},
        {.addr=0xe66d, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_004C) {
    const struct CPU_State initial_cpu = {.pc=0x334b, .a=0x97, .x=0xe3, .y=0x0a, .sp=0xbc, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x76}, {.addr=0x334b, .value=0xf8}, {.addr=0x334c, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x334d, .a=0x97, .x=0x76, .y=0x0a, .sp=0xbc, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x76}, {.addr=0x334b, .value=0xf8}, {.addr=0x334c, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x334b, .value=0xf8, .type=IO_READ},
        {.addr=0x334c, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_004D) {
    const struct CPU_State initial_cpu = {.pc=0x18c3, .a=0x03, .x=0x2a, .y=0x20, .sp=0xb2, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x4c}, {.addr=0x18c3, .value=0xf8}, {.addr=0x18c4, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x18c5, .a=0x03, .x=0x4c, .y=0x20, .sp=0xb2, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x4c}, {.addr=0x18c3, .value=0xf8}, {.addr=0x18c4, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x18c3, .value=0xf8, .type=IO_READ},
        {.addr=0x18c4, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_004E) {
    const struct CPU_State initial_cpu = {.pc=0x6703, .a=0x02, .x=0x8a, .y=0xb8, .sp=0xce, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x16}, {.addr=0x6703, .value=0xf8}, {.addr=0x6704, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x6705, .a=0x02, .x=0x16, .y=0xb8, .sp=0xce, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x16}, {.addr=0x6703, .value=0xf8}, {.addr=0x6704, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x6703, .value=0xf8, .type=IO_READ},
        {.addr=0x6704, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_004F) {
    const struct CPU_State initial_cpu = {.pc=0xa786, .a=0x9a, .x=0xbb, .y=0xdb, .sp=0xfd, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x22}, {.addr=0xa786, .value=0xf8}, {.addr=0xa787, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xa788, .a=0x9a, .x=0x22, .y=0xdb, .sp=0xfd, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x22}, {.addr=0xa786, .value=0xf8}, {.addr=0xa787, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa786, .value=0xf8, .type=IO_READ},
        {.addr=0xa787, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0050) {
    const struct CPU_State initial_cpu = {.pc=0x43de, .a=0xf2, .x=0x26, .y=0xd5, .sp=0x1f, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x6f}, {.addr=0x43de, .value=0xf8}, {.addr=0x43df, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x43e0, .a=0xf2, .x=0x6f, .y=0xd5, .sp=0x1f, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x6f}, {.addr=0x43de, .value=0xf8}, {.addr=0x43df, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x43de, .value=0xf8, .type=IO_READ},
        {.addr=0x43df, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0051) {
    const struct CPU_State initial_cpu = {.pc=0x2b74, .a=0x8d, .x=0x98, .y=0x77, .sp=0x64, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xe5}, {.addr=0x2b74, .value=0xf8}, {.addr=0x2b75, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x2b76, .a=0x8d, .x=0xe5, .y=0x77, .sp=0x64, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xe5}, {.addr=0x2b74, .value=0xf8}, {.addr=0x2b75, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b74, .value=0xf8, .type=IO_READ},
        {.addr=0x2b75, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0052) {
    const struct CPU_State initial_cpu = {.pc=0xab53, .a=0xdb, .x=0x0d, .y=0x5a, .sp=0xf0, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xfd}, {.addr=0xab53, .value=0xf8}, {.addr=0xab54, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xab55, .a=0xdb, .x=0xfd, .y=0x5a, .sp=0xf0, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xfd}, {.addr=0xab53, .value=0xf8}, {.addr=0xab54, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xab53, .value=0xf8, .type=IO_READ},
        {.addr=0xab54, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0053) {
    const struct CPU_State initial_cpu = {.pc=0x138d, .a=0xc7, .x=0x7e, .y=0x82, .sp=0xb8, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x7f}, {.addr=0x138d, .value=0xf8}, {.addr=0x138e, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x138f, .a=0xc7, .x=0x7f, .y=0x82, .sp=0xb8, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x7f}, {.addr=0x138d, .value=0xf8}, {.addr=0x138e, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x138d, .value=0xf8, .type=IO_READ},
        {.addr=0x138e, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0054) {
    const struct CPU_State initial_cpu = {.pc=0xf860, .a=0x66, .x=0x74, .y=0xaa, .sp=0x20, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xcc}, {.addr=0xf860, .value=0xf8}, {.addr=0xf861, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xf862, .a=0x66, .x=0xcc, .y=0xaa, .sp=0x20, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xcc}, {.addr=0xf860, .value=0xf8}, {.addr=0xf861, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf860, .value=0xf8, .type=IO_READ},
        {.addr=0xf861, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0055) {
    const struct CPU_State initial_cpu = {.pc=0xc94e, .a=0xa7, .x=0xdf, .y=0x2a, .sp=0xad, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x5d}, {.addr=0xc94e, .value=0xf8}, {.addr=0xc94f, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xc950, .a=0xa7, .x=0x5d, .y=0x2a, .sp=0xad, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x5d}, {.addr=0xc94e, .value=0xf8}, {.addr=0xc94f, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xc94e, .value=0xf8, .type=IO_READ},
        {.addr=0xc94f, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0056) {
    const struct CPU_State initial_cpu = {.pc=0x9c8f, .a=0x85, .x=0x73, .y=0x65, .sp=0x3f, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xcd}, {.addr=0x9c8f, .value=0xf8}, {.addr=0x9c90, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x9c91, .a=0x85, .x=0xcd, .y=0x65, .sp=0x3f, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xcd}, {.addr=0x9c8f, .value=0xf8}, {.addr=0x9c90, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c8f, .value=0xf8, .type=IO_READ},
        {.addr=0x9c90, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0057) {
    const struct CPU_State initial_cpu = {.pc=0xc747, .a=0xb7, .x=0x8c, .y=0x5a, .sp=0xce, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xa0}, {.addr=0xc747, .value=0xf8}, {.addr=0xc748, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xc749, .a=0xb7, .x=0xa0, .y=0x5a, .sp=0xce, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xa0}, {.addr=0xc747, .value=0xf8}, {.addr=0xc748, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc747, .value=0xf8, .type=IO_READ},
        {.addr=0xc748, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0058) {
    const struct CPU_State initial_cpu = {.pc=0xb5c5, .a=0x50, .x=0x2e, .y=0x9e, .sp=0x29, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xb6}, {.addr=0xb5c5, .value=0xf8}, {.addr=0xb5c6, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xb5c7, .a=0x50, .x=0xb6, .y=0x9e, .sp=0x29, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xb6}, {.addr=0xb5c5, .value=0xf8}, {.addr=0xb5c6, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5c5, .value=0xf8, .type=IO_READ},
        {.addr=0xb5c6, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_005A) {
    const struct CPU_State initial_cpu = {.pc=0x3d40, .a=0xf1, .x=0x61, .y=0xec, .sp=0xf0, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x55}, {.addr=0x3d40, .value=0xf8}, {.addr=0x3d41, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x3d42, .a=0xf1, .x=0x55, .y=0xec, .sp=0xf0, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x55}, {.addr=0x3d40, .value=0xf8}, {.addr=0x3d41, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d40, .value=0xf8, .type=IO_READ},
        {.addr=0x3d41, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_005B) {
    const struct CPU_State initial_cpu = {.pc=0xcdf0, .a=0xd9, .x=0x4d, .y=0xfd, .sp=0x37, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x16}, {.addr=0xcdf0, .value=0xf8}, {.addr=0xcdf1, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xcdf2, .a=0xd9, .x=0x16, .y=0xfd, .sp=0x37, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x16}, {.addr=0xcdf0, .value=0xf8}, {.addr=0xcdf1, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdf0, .value=0xf8, .type=IO_READ},
        {.addr=0xcdf1, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_005C) {
    const struct CPU_State initial_cpu = {.pc=0xfe39, .a=0x71, .x=0xb4, .y=0xce, .sp=0x75, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xa1}, {.addr=0xfe39, .value=0xf8}, {.addr=0xfe3a, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xfe3b, .a=0x71, .x=0xa1, .y=0xce, .sp=0x75, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xa1}, {.addr=0xfe39, .value=0xf8}, {.addr=0xfe3a, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe39, .value=0xf8, .type=IO_READ},
        {.addr=0xfe3a, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_005D) {
    const struct CPU_State initial_cpu = {.pc=0xc220, .a=0x08, .x=0xce, .y=0x9e, .sp=0xe2, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xd4}, {.addr=0xc220, .value=0xf8}, {.addr=0xc221, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xc222, .a=0x08, .x=0xd4, .y=0x9e, .sp=0xe2, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xd4}, {.addr=0xc220, .value=0xf8}, {.addr=0xc221, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc220, .value=0xf8, .type=IO_READ},
        {.addr=0xc221, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_005E) {
    const struct CPU_State initial_cpu = {.pc=0xc394, .a=0xf3, .x=0x76, .y=0x6b, .sp=0x5e, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xdb}, {.addr=0xc394, .value=0xf8}, {.addr=0xc395, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xc396, .a=0xf3, .x=0xdb, .y=0x6b, .sp=0x5e, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xdb}, {.addr=0xc394, .value=0xf8}, {.addr=0xc395, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc394, .value=0xf8, .type=IO_READ},
        {.addr=0xc395, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_005F) {
    const struct CPU_State initial_cpu = {.pc=0x52fa, .a=0x81, .x=0xbe, .y=0xdd, .sp=0x53, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x20}, {.addr=0x52fa, .value=0xf8}, {.addr=0x52fb, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x52fc, .a=0x81, .x=0x20, .y=0xdd, .sp=0x53, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x20}, {.addr=0x52fa, .value=0xf8}, {.addr=0x52fb, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x52fa, .value=0xf8, .type=IO_READ},
        {.addr=0x52fb, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0060) {
    const struct CPU_State initial_cpu = {.pc=0x5c7f, .a=0x3c, .x=0xae, .y=0xbc, .sp=0xc8, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x2d}, {.addr=0x5c7f, .value=0xf8}, {.addr=0x5c80, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x5c81, .a=0x3c, .x=0x2d, .y=0xbc, .sp=0xc8, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x2d}, {.addr=0x5c7f, .value=0xf8}, {.addr=0x5c80, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c7f, .value=0xf8, .type=IO_READ},
        {.addr=0x5c80, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0061) {
    const struct CPU_State initial_cpu = {.pc=0x5a3a, .a=0x5a, .x=0x65, .y=0xbc, .sp=0x51, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x88}, {.addr=0x5a3a, .value=0xf8}, {.addr=0x5a3b, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x5a3c, .a=0x5a, .x=0x88, .y=0xbc, .sp=0x51, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x88}, {.addr=0x5a3a, .value=0xf8}, {.addr=0x5a3b, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a3a, .value=0xf8, .type=IO_READ},
        {.addr=0x5a3b, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0062) {
    const struct CPU_State initial_cpu = {.pc=0x6d64, .a=0xdf, .x=0xc4, .y=0x5b, .sp=0x65, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x2b}, {.addr=0x6d64, .value=0xf8}, {.addr=0x6d65, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x6d66, .a=0xdf, .x=0x2b, .y=0x5b, .sp=0x65, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x2b}, {.addr=0x6d64, .value=0xf8}, {.addr=0x6d65, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d64, .value=0xf8, .type=IO_READ},
        {.addr=0x6d65, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0063) {
    const struct CPU_State initial_cpu = {.pc=0xe597, .a=0x24, .x=0x67, .y=0x52, .sp=0x04, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xb6}, {.addr=0xe597, .value=0xf8}, {.addr=0xe598, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xe599, .a=0x24, .x=0xb6, .y=0x52, .sp=0x04, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xb6}, {.addr=0xe597, .value=0xf8}, {.addr=0xe598, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xe597, .value=0xf8, .type=IO_READ},
        {.addr=0xe598, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0064) {
    const struct CPU_State initial_cpu = {.pc=0xb780, .a=0x84, .x=0xbc, .y=0x42, .sp=0xd2, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xba}, {.addr=0xb780, .value=0xf8}, {.addr=0xb781, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xb782, .a=0x84, .x=0xba, .y=0x42, .sp=0xd2, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xba}, {.addr=0xb780, .value=0xf8}, {.addr=0xb781, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xb780, .value=0xf8, .type=IO_READ},
        {.addr=0xb781, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0065) {
    const struct CPU_State initial_cpu = {.pc=0xaa80, .a=0x8c, .x=0x4c, .y=0x6e, .sp=0xc2, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x52}, {.addr=0xaa80, .value=0xf8}, {.addr=0xaa81, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xaa82, .a=0x8c, .x=0x52, .y=0x6e, .sp=0xc2, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x52}, {.addr=0xaa80, .value=0xf8}, {.addr=0xaa81, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa80, .value=0xf8, .type=IO_READ},
        {.addr=0xaa81, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0066) {
    const struct CPU_State initial_cpu = {.pc=0x5d56, .a=0xd3, .x=0x34, .y=0x43, .sp=0x90, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x75}, {.addr=0x5d56, .value=0xf8}, {.addr=0x5d57, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x5d58, .a=0xd3, .x=0x75, .y=0x43, .sp=0x90, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x75}, {.addr=0x5d56, .value=0xf8}, {.addr=0x5d57, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d56, .value=0xf8, .type=IO_READ},
        {.addr=0x5d57, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0067) {
    const struct CPU_State initial_cpu = {.pc=0x77bb, .a=0xdf, .x=0xf1, .y=0x57, .sp=0x85, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x95}, {.addr=0x77bb, .value=0xf8}, {.addr=0x77bc, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x77bd, .a=0xdf, .x=0x95, .y=0x57, .sp=0x85, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x95}, {.addr=0x77bb, .value=0xf8}, {.addr=0x77bc, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x77bb, .value=0xf8, .type=IO_READ},
        {.addr=0x77bc, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0068) {
    const struct CPU_State initial_cpu = {.pc=0x6939, .a=0xec, .x=0xa9, .y=0x0b, .sp=0x1c, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x47}, {.addr=0x6939, .value=0xf8}, {.addr=0x693a, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x693b, .a=0xec, .x=0x47, .y=0x0b, .sp=0x1c, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x47}, {.addr=0x6939, .value=0xf8}, {.addr=0x693a, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x6939, .value=0xf8, .type=IO_READ},
        {.addr=0x693a, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0069) {
    const struct CPU_State initial_cpu = {.pc=0xa709, .a=0xa6, .x=0xe9, .y=0x12, .sp=0x9a, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x4c}, {.addr=0xa709, .value=0xf8}, {.addr=0xa70a, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xa70b, .a=0xa6, .x=0x4c, .y=0x12, .sp=0x9a, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x4c}, {.addr=0xa709, .value=0xf8}, {.addr=0xa70a, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xa709, .value=0xf8, .type=IO_READ},
        {.addr=0xa70a, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_006A) {
    const struct CPU_State initial_cpu = {.pc=0x4f89, .a=0x67, .x=0x9d, .y=0x6c, .sp=0x4e, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xa0}, {.addr=0x4f89, .value=0xf8}, {.addr=0x4f8a, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x4f8b, .a=0x67, .x=0xa0, .y=0x6c, .sp=0x4e, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xa0}, {.addr=0x4f89, .value=0xf8}, {.addr=0x4f8a, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f89, .value=0xf8, .type=IO_READ},
        {.addr=0x4f8a, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_006B) {
    const struct CPU_State initial_cpu = {.pc=0x20a1, .a=0x14, .x=0xf5, .y=0xdd, .sp=0xb4, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x4a}, {.addr=0x20a1, .value=0xf8}, {.addr=0x20a2, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x20a3, .a=0x14, .x=0x4a, .y=0xdd, .sp=0xb4, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x4a}, {.addr=0x20a1, .value=0xf8}, {.addr=0x20a2, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x20a1, .value=0xf8, .type=IO_READ},
        {.addr=0x20a2, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_006D) {
    const struct CPU_State initial_cpu = {.pc=0x161d, .a=0xca, .x=0x96, .y=0xc2, .sp=0x90, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x58}, {.addr=0x161d, .value=0xf8}, {.addr=0x161e, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x161f, .a=0xca, .x=0x58, .y=0xc2, .sp=0x90, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x58}, {.addr=0x161d, .value=0xf8}, {.addr=0x161e, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x161d, .value=0xf8, .type=IO_READ},
        {.addr=0x161e, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_006E) {
    const struct CPU_State initial_cpu = {.pc=0x48b4, .a=0xb1, .x=0x1c, .y=0x81, .sp=0x33, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x13}, {.addr=0x48b4, .value=0xf8}, {.addr=0x48b5, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x48b6, .a=0xb1, .x=0x13, .y=0x81, .sp=0x33, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x13}, {.addr=0x48b4, .value=0xf8}, {.addr=0x48b5, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x48b4, .value=0xf8, .type=IO_READ},
        {.addr=0x48b5, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_006F) {
    const struct CPU_State initial_cpu = {.pc=0x2601, .a=0x51, .x=0x3a, .y=0x2f, .sp=0x73, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xd8}, {.addr=0x2601, .value=0xf8}, {.addr=0x2602, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x2603, .a=0x51, .x=0xd8, .y=0x2f, .sp=0x73, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xd8}, {.addr=0x2601, .value=0xf8}, {.addr=0x2602, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x2601, .value=0xf8, .type=IO_READ},
        {.addr=0x2602, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0070) {
    const struct CPU_State initial_cpu = {.pc=0xdb26, .a=0x81, .x=0xe5, .y=0x59, .sp=0x13, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x6e}, {.addr=0xdb26, .value=0xf8}, {.addr=0xdb27, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xdb28, .a=0x81, .x=0x6e, .y=0x59, .sp=0x13, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x6e}, {.addr=0xdb26, .value=0xf8}, {.addr=0xdb27, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb26, .value=0xf8, .type=IO_READ},
        {.addr=0xdb27, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0071) {
    const struct CPU_State initial_cpu = {.pc=0xd62d, .a=0x4c, .x=0x8a, .y=0x23, .sp=0x07, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xef}, {.addr=0xd62d, .value=0xf8}, {.addr=0xd62e, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xd62f, .a=0x4c, .x=0xef, .y=0x23, .sp=0x07, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xef}, {.addr=0xd62d, .value=0xf8}, {.addr=0xd62e, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xd62d, .value=0xf8, .type=IO_READ},
        {.addr=0xd62e, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0073) {
    const struct CPU_State initial_cpu = {.pc=0x6dba, .a=0x10, .x=0x17, .y=0xc4, .sp=0xb4, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x6b}, {.addr=0x6dba, .value=0xf8}, {.addr=0x6dbb, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x6dbc, .a=0x10, .x=0x6b, .y=0xc4, .sp=0xb4, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x6b}, {.addr=0x6dba, .value=0xf8}, {.addr=0x6dbb, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6dba, .value=0xf8, .type=IO_READ},
        {.addr=0x6dbb, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0074) {
    const struct CPU_State initial_cpu = {.pc=0xf9cf, .a=0x9a, .x=0xa8, .y=0x12, .sp=0x4d, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x4f}, {.addr=0xf9cf, .value=0xf8}, {.addr=0xf9d0, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xf9d1, .a=0x9a, .x=0x4f, .y=0x12, .sp=0x4d, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x4f}, {.addr=0xf9cf, .value=0xf8}, {.addr=0xf9d0, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9cf, .value=0xf8, .type=IO_READ},
        {.addr=0xf9d0, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0075) {
    const struct CPU_State initial_cpu = {.pc=0x904d, .a=0xf5, .x=0x56, .y=0xf4, .sp=0x40, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x5f}, {.addr=0x904d, .value=0xf8}, {.addr=0x904e, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x904f, .a=0xf5, .x=0x5f, .y=0xf4, .sp=0x40, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x5f}, {.addr=0x904d, .value=0xf8}, {.addr=0x904e, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x904d, .value=0xf8, .type=IO_READ},
        {.addr=0x904e, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0076) {
    const struct CPU_State initial_cpu = {.pc=0x347c, .a=0x64, .x=0xf1, .y=0x1c, .sp=0x8b, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xa1}, {.addr=0x347c, .value=0xf8}, {.addr=0x347d, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x347e, .a=0x64, .x=0xa1, .y=0x1c, .sp=0x8b, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xa1}, {.addr=0x347c, .value=0xf8}, {.addr=0x347d, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x347c, .value=0xf8, .type=IO_READ},
        {.addr=0x347d, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0078) {
    const struct CPU_State initial_cpu = {.pc=0xb724, .a=0xc3, .x=0xe4, .y=0x48, .sp=0xd3, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x61}, {.addr=0xb724, .value=0xf8}, {.addr=0xb725, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xb726, .a=0xc3, .x=0x61, .y=0x48, .sp=0xd3, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x61}, {.addr=0xb724, .value=0xf8}, {.addr=0xb725, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb724, .value=0xf8, .type=IO_READ},
        {.addr=0xb725, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0079) {
    const struct CPU_State initial_cpu = {.pc=0x950b, .a=0x11, .x=0xc7, .y=0x32, .sp=0x66, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x27}, {.addr=0x950b, .value=0xf8}, {.addr=0x950c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x950d, .a=0x11, .x=0x27, .y=0x32, .sp=0x66, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x27}, {.addr=0x950b, .value=0xf8}, {.addr=0x950c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x950b, .value=0xf8, .type=IO_READ},
        {.addr=0x950c, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_007B) {
    const struct CPU_State initial_cpu = {.pc=0xe8a8, .a=0x1d, .x=0xcd, .y=0x2a, .sp=0xc3, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x4e}, {.addr=0xe8a8, .value=0xf8}, {.addr=0xe8a9, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xe8aa, .a=0x1d, .x=0x4e, .y=0x2a, .sp=0xc3, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x4e}, {.addr=0xe8a8, .value=0xf8}, {.addr=0xe8a9, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8a8, .value=0xf8, .type=IO_READ},
        {.addr=0xe8a9, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_007C) {
    const struct CPU_State initial_cpu = {.pc=0xf0c9, .a=0x5d, .x=0xad, .y=0x68, .sp=0x79, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0xf8}, {.addr=0xf0c9, .value=0xf8}, {.addr=0xf0ca, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xf0cb, .a=0x5d, .x=0xf8, .y=0x68, .sp=0x79, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0xf8}, {.addr=0xf0c9, .value=0xf8}, {.addr=0xf0ca, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0c9, .value=0xf8, .type=IO_READ},
        {.addr=0xf0ca, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_007D) {
    const struct CPU_State initial_cpu = {.pc=0x4691, .a=0x38, .x=0x54, .y=0xe5, .sp=0x5e, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x72}, {.addr=0x4691, .value=0xf8}, {.addr=0x4692, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x4693, .a=0x38, .x=0x72, .y=0xe5, .sp=0x5e, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x72}, {.addr=0x4691, .value=0xf8}, {.addr=0x4692, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4691, .value=0xf8, .type=IO_READ},
        {.addr=0x4692, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_007E) {
    const struct CPU_State initial_cpu = {.pc=0x1e03, .a=0x4e, .x=0xf5, .y=0xce, .sp=0x3b, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x92}, {.addr=0x1e03, .value=0xf8}, {.addr=0x1e04, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x1e05, .a=0x4e, .x=0x92, .y=0xce, .sp=0x3b, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x92}, {.addr=0x1e03, .value=0xf8}, {.addr=0x1e04, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e03, .value=0xf8, .type=IO_READ},
        {.addr=0x1e04, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3399, .a=0x88, .x=0x24, .y=0x90, .sp=0x15, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x7e}, {.addr=0x3399, .value=0xf8}, {.addr=0x339a, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x339b, .a=0x88, .x=0x7e, .y=0x90, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x7e}, {.addr=0x3399, .value=0xf8}, {.addr=0x339a, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x3399, .value=0xf8, .type=IO_READ},
        {.addr=0x339a, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0080) {
    const struct CPU_State initial_cpu = {.pc=0x0cd6, .a=0xf3, .x=0x36, .y=0x37, .sp=0xdc, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x4b}, {.addr=0x0cd6, .value=0xf8}, {.addr=0x0cd7, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x0cd8, .a=0xf3, .x=0x4b, .y=0x37, .sp=0xdc, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x4b}, {.addr=0x0cd6, .value=0xf8}, {.addr=0x0cd7, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cd6, .value=0xf8, .type=IO_READ},
        {.addr=0x0cd7, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0081) {
    const struct CPU_State initial_cpu = {.pc=0xaa0a, .a=0xd4, .x=0x03, .y=0x84, .sp=0xfd, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x85}, {.addr=0xaa0a, .value=0xf8}, {.addr=0xaa0b, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xaa0c, .a=0xd4, .x=0x85, .y=0x84, .sp=0xfd, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x85}, {.addr=0xaa0a, .value=0xf8}, {.addr=0xaa0b, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa0a, .value=0xf8, .type=IO_READ},
        {.addr=0xaa0b, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0082) {
    const struct CPU_State initial_cpu = {.pc=0xe599, .a=0x70, .x=0x94, .y=0x38, .sp=0xaa, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xce}, {.addr=0xe599, .value=0xf8}, {.addr=0xe59a, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xe59b, .a=0x70, .x=0xce, .y=0x38, .sp=0xaa, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xce}, {.addr=0xe599, .value=0xf8}, {.addr=0xe59a, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xe599, .value=0xf8, .type=IO_READ},
        {.addr=0xe59a, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0083) {
    const struct CPU_State initial_cpu = {.pc=0x78ed, .a=0x57, .x=0x08, .y=0x07, .sp=0x3e, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x93}, {.addr=0x78ed, .value=0xf8}, {.addr=0x78ee, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x78ef, .a=0x57, .x=0x93, .y=0x07, .sp=0x3e, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x93}, {.addr=0x78ed, .value=0xf8}, {.addr=0x78ee, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x78ed, .value=0xf8, .type=IO_READ},
        {.addr=0x78ee, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0084) {
    const struct CPU_State initial_cpu = {.pc=0xe6fb, .a=0x17, .x=0xd8, .y=0x45, .sp=0xf4, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x1f}, {.addr=0xe6fb, .value=0xf8}, {.addr=0xe6fc, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xe6fd, .a=0x17, .x=0x1f, .y=0x45, .sp=0xf4, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x1f}, {.addr=0xe6fb, .value=0xf8}, {.addr=0xe6fc, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6fb, .value=0xf8, .type=IO_READ},
        {.addr=0xe6fc, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0086) {
    const struct CPU_State initial_cpu = {.pc=0x532f, .a=0x16, .x=0xf6, .y=0xc8, .sp=0xb0, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x28}, {.addr=0x532f, .value=0xf8}, {.addr=0x5330, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x5331, .a=0x16, .x=0x28, .y=0xc8, .sp=0xb0, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x28}, {.addr=0x532f, .value=0xf8}, {.addr=0x5330, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x532f, .value=0xf8, .type=IO_READ},
        {.addr=0x5330, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0087) {
    const struct CPU_State initial_cpu = {.pc=0x122f, .a=0x5d, .x=0x0f, .y=0x5e, .sp=0x96, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x7f}, {.addr=0x122f, .value=0xf8}, {.addr=0x1230, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x1231, .a=0x5d, .x=0x7f, .y=0x5e, .sp=0x96, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x7f}, {.addr=0x122f, .value=0xf8}, {.addr=0x1230, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x122f, .value=0xf8, .type=IO_READ},
        {.addr=0x1230, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0088) {
    const struct CPU_State initial_cpu = {.pc=0x5a9a, .a=0xf3, .x=0x00, .y=0x83, .sp=0x53, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0xf4}, {.addr=0x5a9a, .value=0xf8}, {.addr=0x5a9b, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x5a9c, .a=0xf3, .x=0xf4, .y=0x83, .sp=0x53, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0xf4}, {.addr=0x5a9a, .value=0xf8}, {.addr=0x5a9b, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a9a, .value=0xf8, .type=IO_READ},
        {.addr=0x5a9b, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0089) {
    const struct CPU_State initial_cpu = {.pc=0xf829, .a=0xb0, .x=0xe2, .y=0xcb, .sp=0x36, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x22}, {.addr=0xf829, .value=0xf8}, {.addr=0xf82a, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf82b, .a=0xb0, .x=0x22, .y=0xcb, .sp=0x36, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x22}, {.addr=0xf829, .value=0xf8}, {.addr=0xf82a, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf829, .value=0xf8, .type=IO_READ},
        {.addr=0xf82a, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_008A) {
    const struct CPU_State initial_cpu = {.pc=0x000a, .a=0x17, .x=0x8b, .y=0xd6, .sp=0x37, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xf8}, {.addr=0x000b, .value=0xac}, {.addr=0x00ac, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x000c, .a=0x17, .x=0x58, .y=0xd6, .sp=0x37, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xf8}, {.addr=0x000b, .value=0xac}, {.addr=0x00ac, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x000a, .value=0xf8, .type=IO_READ},
        {.addr=0x000b, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_008B) {
    const struct CPU_State initial_cpu = {.pc=0x088f, .a=0x52, .x=0x82, .y=0x28, .sp=0x72, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x01}, {.addr=0x088f, .value=0xf8}, {.addr=0x0890, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x0891, .a=0x52, .x=0x01, .y=0x28, .sp=0x72, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x01}, {.addr=0x088f, .value=0xf8}, {.addr=0x0890, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x088f, .value=0xf8, .type=IO_READ},
        {.addr=0x0890, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_008C) {
    const struct CPU_State initial_cpu = {.pc=0xe3b1, .a=0xbc, .x=0xf5, .y=0x45, .sp=0xc6, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x51}, {.addr=0xe3b1, .value=0xf8}, {.addr=0xe3b2, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xe3b3, .a=0xbc, .x=0x51, .y=0x45, .sp=0xc6, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x51}, {.addr=0xe3b1, .value=0xf8}, {.addr=0xe3b2, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3b1, .value=0xf8, .type=IO_READ},
        {.addr=0xe3b2, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_008D) {
    const struct CPU_State initial_cpu = {.pc=0xc389, .a=0xe8, .x=0x0c, .y=0xff, .sp=0x3f, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xf4}, {.addr=0xc389, .value=0xf8}, {.addr=0xc38a, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xc38b, .a=0xe8, .x=0xf4, .y=0xff, .sp=0x3f, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xf4}, {.addr=0xc389, .value=0xf8}, {.addr=0xc38a, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc389, .value=0xf8, .type=IO_READ},
        {.addr=0xc38a, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_008E) {
    const struct CPU_State initial_cpu = {.pc=0xd26e, .a=0x34, .x=0xb9, .y=0x39, .sp=0x76, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x1c}, {.addr=0xd26e, .value=0xf8}, {.addr=0xd26f, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xd270, .a=0x34, .x=0x1c, .y=0x39, .sp=0x76, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x1c}, {.addr=0xd26e, .value=0xf8}, {.addr=0xd26f, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xd26e, .value=0xf8, .type=IO_READ},
        {.addr=0xd26f, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3487, .a=0xf0, .x=0x5f, .y=0xd9, .sp=0xb8, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x45}, {.addr=0x3487, .value=0xf8}, {.addr=0x3488, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x3489, .a=0xf0, .x=0x45, .y=0xd9, .sp=0xb8, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x45}, {.addr=0x3487, .value=0xf8}, {.addr=0x3488, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x3487, .value=0xf8, .type=IO_READ},
        {.addr=0x3488, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0090) {
    const struct CPU_State initial_cpu = {.pc=0x66a1, .a=0xf5, .x=0xd7, .y=0x58, .sp=0x2f, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x05}, {.addr=0x66a1, .value=0xf8}, {.addr=0x66a2, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x66a3, .a=0xf5, .x=0x05, .y=0x58, .sp=0x2f, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x05}, {.addr=0x66a1, .value=0xf8}, {.addr=0x66a2, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x66a1, .value=0xf8, .type=IO_READ},
        {.addr=0x66a2, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0091) {
    const struct CPU_State initial_cpu = {.pc=0x9093, .a=0x50, .x=0xd6, .y=0x7c, .sp=0xbd, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xd1}, {.addr=0x9093, .value=0xf8}, {.addr=0x9094, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x9095, .a=0x50, .x=0xd1, .y=0x7c, .sp=0xbd, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xd1}, {.addr=0x9093, .value=0xf8}, {.addr=0x9094, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x9093, .value=0xf8, .type=IO_READ},
        {.addr=0x9094, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0092) {
    const struct CPU_State initial_cpu = {.pc=0x95e8, .a=0x3b, .x=0x23, .y=0xfb, .sp=0x2d, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xff}, {.addr=0x95e8, .value=0xf8}, {.addr=0x95e9, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x95ea, .a=0x3b, .x=0xff, .y=0xfb, .sp=0x2d, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xff}, {.addr=0x95e8, .value=0xf8}, {.addr=0x95e9, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x95e8, .value=0xf8, .type=IO_READ},
        {.addr=0x95e9, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0093) {
    const struct CPU_State initial_cpu = {.pc=0x222e, .a=0x8b, .x=0xa5, .y=0x18, .sp=0xdf, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xff}, {.addr=0x222e, .value=0xf8}, {.addr=0x222f, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x2230, .a=0x8b, .x=0xff, .y=0x18, .sp=0xdf, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xff}, {.addr=0x222e, .value=0xf8}, {.addr=0x222f, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x222e, .value=0xf8, .type=IO_READ},
        {.addr=0x222f, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0094) {
    const struct CPU_State initial_cpu = {.pc=0x1cf3, .a=0x45, .x=0x83, .y=0x30, .sp=0xf3, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xe5}, {.addr=0x1cf3, .value=0xf8}, {.addr=0x1cf4, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x1cf5, .a=0x45, .x=0xe5, .y=0x30, .sp=0xf3, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xe5}, {.addr=0x1cf3, .value=0xf8}, {.addr=0x1cf4, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cf3, .value=0xf8, .type=IO_READ},
        {.addr=0x1cf4, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0095) {
    const struct CPU_State initial_cpu = {.pc=0x0abb, .a=0x05, .x=0x65, .y=0xb6, .sp=0x0d, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xb4}, {.addr=0x0abb, .value=0xf8}, {.addr=0x0abc, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0abd, .a=0x05, .x=0xb4, .y=0xb6, .sp=0x0d, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xb4}, {.addr=0x0abb, .value=0xf8}, {.addr=0x0abc, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0abb, .value=0xf8, .type=IO_READ},
        {.addr=0x0abc, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0097) {
    const struct CPU_State initial_cpu = {.pc=0x8859, .a=0x81, .x=0x5c, .y=0xec, .sp=0x70, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xfb}, {.addr=0x8859, .value=0xf8}, {.addr=0x885a, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x885b, .a=0x81, .x=0xfb, .y=0xec, .sp=0x70, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xfb}, {.addr=0x8859, .value=0xf8}, {.addr=0x885a, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8859, .value=0xf8, .type=IO_READ},
        {.addr=0x885a, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0098) {
    const struct CPU_State initial_cpu = {.pc=0x6d41, .a=0x20, .x=0x7a, .y=0x15, .sp=0xa0, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x4a}, {.addr=0x6d41, .value=0xf8}, {.addr=0x6d42, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x6d43, .a=0x20, .x=0x4a, .y=0x15, .sp=0xa0, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x4a}, {.addr=0x6d41, .value=0xf8}, {.addr=0x6d42, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d41, .value=0xf8, .type=IO_READ},
        {.addr=0x6d42, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0099) {
    const struct CPU_State initial_cpu = {.pc=0xeb5e, .a=0xc0, .x=0x80, .y=0x75, .sp=0x04, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x5a}, {.addr=0xeb5e, .value=0xf8}, {.addr=0xeb5f, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xeb60, .a=0xc0, .x=0x5a, .y=0x75, .sp=0x04, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x5a}, {.addr=0xeb5e, .value=0xf8}, {.addr=0xeb5f, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb5e, .value=0xf8, .type=IO_READ},
        {.addr=0xeb5f, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_009A) {
    const struct CPU_State initial_cpu = {.pc=0x71d1, .a=0x23, .x=0x25, .y=0x1d, .sp=0x26, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x62}, {.addr=0x71d1, .value=0xf8}, {.addr=0x71d2, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x71d3, .a=0x23, .x=0x62, .y=0x1d, .sp=0x26, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x62}, {.addr=0x71d1, .value=0xf8}, {.addr=0x71d2, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x71d1, .value=0xf8, .type=IO_READ},
        {.addr=0x71d2, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_009B) {
    const struct CPU_State initial_cpu = {.pc=0x90e8, .a=0x6f, .x=0x2f, .y=0x3a, .sp=0xea, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x10}, {.addr=0x90e8, .value=0xf8}, {.addr=0x90e9, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x90ea, .a=0x6f, .x=0x10, .y=0x3a, .sp=0xea, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x10}, {.addr=0x90e8, .value=0xf8}, {.addr=0x90e9, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x90e8, .value=0xf8, .type=IO_READ},
        {.addr=0x90e9, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_009C) {
    const struct CPU_State initial_cpu = {.pc=0x29a3, .a=0x9c, .x=0x7a, .y=0xeb, .sp=0xde, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xa0}, {.addr=0x29a3, .value=0xf8}, {.addr=0x29a4, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x29a5, .a=0x9c, .x=0xa0, .y=0xeb, .sp=0xde, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xa0}, {.addr=0x29a3, .value=0xf8}, {.addr=0x29a4, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x29a3, .value=0xf8, .type=IO_READ},
        {.addr=0x29a4, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_009D) {
    const struct CPU_State initial_cpu = {.pc=0xd6ce, .a=0x0d, .x=0x3d, .y=0xa3, .sp=0x4f, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xee}, {.addr=0xd6ce, .value=0xf8}, {.addr=0xd6cf, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d0, .a=0x0d, .x=0xee, .y=0xa3, .sp=0x4f, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xee}, {.addr=0xd6ce, .value=0xf8}, {.addr=0xd6cf, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6ce, .value=0xf8, .type=IO_READ},
        {.addr=0xd6cf, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_009E) {
    const struct CPU_State initial_cpu = {.pc=0x614c, .a=0xd7, .x=0x8d, .y=0xed, .sp=0x50, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x12}, {.addr=0x614c, .value=0xf8}, {.addr=0x614d, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x614e, .a=0xd7, .x=0x12, .y=0xed, .sp=0x50, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x12}, {.addr=0x614c, .value=0xf8}, {.addr=0x614d, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x614c, .value=0xf8, .type=IO_READ},
        {.addr=0x614d, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_009F) {
    const struct CPU_State initial_cpu = {.pc=0xc28c, .a=0xf6, .x=0x89, .y=0x90, .sp=0xb9, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xa3}, {.addr=0xc28c, .value=0xf8}, {.addr=0xc28d, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xc28e, .a=0xf6, .x=0xa3, .y=0x90, .sp=0xb9, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xa3}, {.addr=0xc28c, .value=0xf8}, {.addr=0xc28d, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xc28c, .value=0xf8, .type=IO_READ},
        {.addr=0xc28d, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x20f0, .a=0x80, .x=0xe1, .y=0xad, .sp=0x4a, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x8e}, {.addr=0x20f0, .value=0xf8}, {.addr=0x20f1, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x20f2, .a=0x80, .x=0x8e, .y=0xad, .sp=0x4a, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x8e}, {.addr=0x20f0, .value=0xf8}, {.addr=0x20f1, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x20f0, .value=0xf8, .type=IO_READ},
        {.addr=0x20f1, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x7ef4, .a=0x50, .x=0xaf, .y=0x23, .sp=0xaf, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xc1}, {.addr=0x7ef4, .value=0xf8}, {.addr=0x7ef5, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x7ef6, .a=0x50, .x=0xc1, .y=0x23, .sp=0xaf, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xc1}, {.addr=0x7ef4, .value=0xf8}, {.addr=0x7ef5, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ef4, .value=0xf8, .type=IO_READ},
        {.addr=0x7ef5, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x326f, .a=0x7c, .x=0xec, .y=0xae, .sp=0x5d, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xe5}, {.addr=0x326f, .value=0xf8}, {.addr=0x3270, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x3271, .a=0x7c, .x=0xe5, .y=0xae, .sp=0x5d, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xe5}, {.addr=0x326f, .value=0xf8}, {.addr=0x3270, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x326f, .value=0xf8, .type=IO_READ},
        {.addr=0x3270, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xba03, .a=0xb3, .x=0x35, .y=0x5d, .sp=0x3e, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x46}, {.addr=0xba03, .value=0xf8}, {.addr=0xba04, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xba05, .a=0xb3, .x=0x46, .y=0x5d, .sp=0x3e, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x46}, {.addr=0xba03, .value=0xf8}, {.addr=0xba04, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xba03, .value=0xf8, .type=IO_READ},
        {.addr=0xba04, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x634b, .a=0x0b, .x=0x7d, .y=0xf9, .sp=0xa5, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0xa9}, {.addr=0x634b, .value=0xf8}, {.addr=0x634c, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x634d, .a=0x0b, .x=0xa9, .y=0xf9, .sp=0xa5, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0xa9}, {.addr=0x634b, .value=0xf8}, {.addr=0x634c, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x634b, .value=0xf8, .type=IO_READ},
        {.addr=0x634c, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x9159, .a=0xa9, .x=0x07, .y=0xd6, .sp=0x3b, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x58}, {.addr=0x9159, .value=0xf8}, {.addr=0x915a, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x915b, .a=0xa9, .x=0x58, .y=0xd6, .sp=0x3b, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x58}, {.addr=0x9159, .value=0xf8}, {.addr=0x915a, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9159, .value=0xf8, .type=IO_READ},
        {.addr=0x915a, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xba19, .a=0x28, .x=0xa3, .y=0x4d, .sp=0x28, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x71}, {.addr=0xba19, .value=0xf8}, {.addr=0xba1a, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xba1b, .a=0x28, .x=0x71, .y=0x4d, .sp=0x28, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x71}, {.addr=0xba19, .value=0xf8}, {.addr=0xba1a, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xba19, .value=0xf8, .type=IO_READ},
        {.addr=0xba1a, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xe043, .a=0x86, .x=0x4b, .y=0xd6, .sp=0xfc, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x0e}, {.addr=0xe043, .value=0xf8}, {.addr=0xe044, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe045, .a=0x86, .x=0x0e, .y=0xd6, .sp=0xfc, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x0e}, {.addr=0xe043, .value=0xf8}, {.addr=0xe044, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe043, .value=0xf8, .type=IO_READ},
        {.addr=0xe044, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xdbe2, .a=0x7b, .x=0x3b, .y=0x44, .sp=0xd4, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x70}, {.addr=0xdbe2, .value=0xf8}, {.addr=0xdbe3, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xdbe4, .a=0x7b, .x=0x70, .y=0x44, .sp=0xd4, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x70}, {.addr=0xdbe2, .value=0xf8}, {.addr=0xdbe3, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbe2, .value=0xf8, .type=IO_READ},
        {.addr=0xdbe3, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x67d7, .a=0x35, .x=0x32, .y=0x4c, .sp=0xd4, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x9b}, {.addr=0x67d7, .value=0xf8}, {.addr=0x67d8, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x67d9, .a=0x35, .x=0x9b, .y=0x4c, .sp=0xd4, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x9b}, {.addr=0x67d7, .value=0xf8}, {.addr=0x67d8, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x67d7, .value=0xf8, .type=IO_READ},
        {.addr=0x67d8, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xcb7e, .a=0x8b, .x=0xc1, .y=0x14, .sp=0x76, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x83}, {.addr=0xcb7e, .value=0xf8}, {.addr=0xcb7f, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xcb80, .a=0x8b, .x=0x83, .y=0x14, .sp=0x76, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x83}, {.addr=0xcb7e, .value=0xf8}, {.addr=0xcb7f, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb7e, .value=0xf8, .type=IO_READ},
        {.addr=0xcb7f, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x8248, .a=0xe9, .x=0x3c, .y=0x16, .sp=0x8a, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xaa}, {.addr=0x8248, .value=0xf8}, {.addr=0x8249, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x824a, .a=0xe9, .x=0xaa, .y=0x16, .sp=0x8a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xaa}, {.addr=0x8248, .value=0xf8}, {.addr=0x8249, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x8248, .value=0xf8, .type=IO_READ},
        {.addr=0x8249, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xe0d8, .a=0x46, .x=0xcc, .y=0xd0, .sp=0x4e, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xe5}, {.addr=0xe0d8, .value=0xf8}, {.addr=0xe0d9, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xe0da, .a=0x46, .x=0xe5, .y=0xd0, .sp=0x4e, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xe5}, {.addr=0xe0d8, .value=0xf8}, {.addr=0xe0d9, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0d8, .value=0xf8, .type=IO_READ},
        {.addr=0xe0d9, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x1e90, .a=0x19, .x=0x1a, .y=0x6b, .sp=0x50, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0xfe}, {.addr=0x1e90, .value=0xf8}, {.addr=0x1e91, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x1e92, .a=0x19, .x=0xfe, .y=0x6b, .sp=0x50, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0xfe}, {.addr=0x1e90, .value=0xf8}, {.addr=0x1e91, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e90, .value=0xf8, .type=IO_READ},
        {.addr=0x1e91, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xea00, .a=0xd2, .x=0x5c, .y=0xfd, .sp=0xa8, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x91}, {.addr=0xea00, .value=0xf8}, {.addr=0xea01, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xea02, .a=0xd2, .x=0x91, .y=0xfd, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x91}, {.addr=0xea00, .value=0xf8}, {.addr=0xea01, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xea00, .value=0xf8, .type=IO_READ},
        {.addr=0xea01, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xfd7c, .a=0xa6, .x=0x8d, .y=0x8c, .sp=0x02, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0x91}, {.addr=0xfd7c, .value=0xf8}, {.addr=0xfd7d, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xfd7e, .a=0xa6, .x=0x91, .y=0x8c, .sp=0x02, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0x91}, {.addr=0xfd7c, .value=0xf8}, {.addr=0xfd7d, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd7c, .value=0xf8, .type=IO_READ},
        {.addr=0xfd7d, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x6a56, .a=0x7b, .x=0xe4, .y=0x88, .sp=0x21, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xe8}, {.addr=0x6a56, .value=0xf8}, {.addr=0x6a57, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x6a58, .a=0x7b, .x=0xe8, .y=0x88, .sp=0x21, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xe8}, {.addr=0x6a56, .value=0xf8}, {.addr=0x6a57, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a56, .value=0xf8, .type=IO_READ},
        {.addr=0x6a57, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x9fde, .a=0x4c, .x=0x96, .y=0x25, .sp=0x8c, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xb3}, {.addr=0x9fde, .value=0xf8}, {.addr=0x9fdf, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x9fe0, .a=0x4c, .x=0xb3, .y=0x25, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xb3}, {.addr=0x9fde, .value=0xf8}, {.addr=0x9fdf, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fde, .value=0xf8, .type=IO_READ},
        {.addr=0x9fdf, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x26be, .a=0x11, .x=0x71, .y=0x9c, .sp=0xbc, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x07}, {.addr=0x26be, .value=0xf8}, {.addr=0x26bf, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x26c0, .a=0x11, .x=0x07, .y=0x9c, .sp=0xbc, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x07}, {.addr=0x26be, .value=0xf8}, {.addr=0x26bf, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x26be, .value=0xf8, .type=IO_READ},
        {.addr=0x26bf, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xbb66, .a=0x66, .x=0x2d, .y=0x39, .sp=0x37, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x35}, {.addr=0xbb66, .value=0xf8}, {.addr=0xbb67, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xbb68, .a=0x66, .x=0x35, .y=0x39, .sp=0x37, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x35}, {.addr=0xbb66, .value=0xf8}, {.addr=0xbb67, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb66, .value=0xf8, .type=IO_READ},
        {.addr=0xbb67, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x00ce, .a=0x12, .x=0xb4, .y=0xf5, .sp=0x56, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x41}, {.addr=0x00ce, .value=0xf8}, {.addr=0x00cf, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x00d0, .a=0x12, .x=0x41, .y=0xf5, .sp=0x56, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x41}, {.addr=0x00ce, .value=0xf8}, {.addr=0x00cf, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x00ce, .value=0xf8, .type=IO_READ},
        {.addr=0x00cf, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xbd8f, .a=0x0b, .x=0x55, .y=0x10, .sp=0xdd, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xee}, {.addr=0xbd8f, .value=0xf8}, {.addr=0xbd90, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xbd91, .a=0x0b, .x=0xee, .y=0x10, .sp=0xdd, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xee}, {.addr=0xbd8f, .value=0xf8}, {.addr=0xbd90, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd8f, .value=0xf8, .type=IO_READ},
        {.addr=0xbd90, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x7d23, .a=0xee, .x=0xc0, .y=0x24, .sp=0x3e, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x10}, {.addr=0x7d23, .value=0xf8}, {.addr=0x7d24, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x7d25, .a=0xee, .x=0x10, .y=0x24, .sp=0x3e, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x10}, {.addr=0x7d23, .value=0xf8}, {.addr=0x7d24, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d23, .value=0xf8, .type=IO_READ},
        {.addr=0x7d24, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xc0ba, .a=0xbc, .x=0x36, .y=0xb9, .sp=0xbf, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x82}, {.addr=0xc0ba, .value=0xf8}, {.addr=0xc0bb, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xc0bc, .a=0xbc, .x=0x82, .y=0xb9, .sp=0xbf, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x82}, {.addr=0xc0ba, .value=0xf8}, {.addr=0xc0bb, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0ba, .value=0xf8, .type=IO_READ},
        {.addr=0xc0bb, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xeba2, .a=0xbc, .x=0xdf, .y=0xfd, .sp=0x68, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xbd}, {.addr=0xeba2, .value=0xf8}, {.addr=0xeba3, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xeba4, .a=0xbc, .x=0xbd, .y=0xfd, .sp=0x68, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xbd}, {.addr=0xeba2, .value=0xf8}, {.addr=0xeba3, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xeba2, .value=0xf8, .type=IO_READ},
        {.addr=0xeba3, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xd99d, .a=0x3f, .x=0x76, .y=0x2e, .sp=0xab, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x7c}, {.addr=0xd99d, .value=0xf8}, {.addr=0xd99e, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xd99f, .a=0x3f, .x=0x7c, .y=0x2e, .sp=0xab, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x7c}, {.addr=0xd99d, .value=0xf8}, {.addr=0xd99e, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xd99d, .value=0xf8, .type=IO_READ},
        {.addr=0xd99e, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x31bb, .a=0x4b, .x=0x2e, .y=0x62, .sp=0x64, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x2d}, {.addr=0x31bb, .value=0xf8}, {.addr=0x31bc, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x31bd, .a=0x4b, .x=0x2d, .y=0x62, .sp=0x64, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x2d}, {.addr=0x31bb, .value=0xf8}, {.addr=0x31bc, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x31bb, .value=0xf8, .type=IO_READ},
        {.addr=0x31bc, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x5de9, .a=0x5d, .x=0x5f, .y=0xc9, .sp=0x83, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0xcb}, {.addr=0x5de9, .value=0xf8}, {.addr=0x5dea, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x5deb, .a=0x5d, .x=0xcb, .y=0xc9, .sp=0x83, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0xcb}, {.addr=0x5de9, .value=0xf8}, {.addr=0x5dea, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5de9, .value=0xf8, .type=IO_READ},
        {.addr=0x5dea, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x294d, .a=0x7e, .x=0xc7, .y=0xcb, .sp=0x2a, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x9e}, {.addr=0x294d, .value=0xf8}, {.addr=0x294e, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x294f, .a=0x7e, .x=0x9e, .y=0xcb, .sp=0x2a, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x9e}, {.addr=0x294d, .value=0xf8}, {.addr=0x294e, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x294d, .value=0xf8, .type=IO_READ},
        {.addr=0x294e, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xc4e4, .a=0xef, .x=0x9b, .y=0x54, .sp=0xbc, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x17}, {.addr=0xc4e4, .value=0xf8}, {.addr=0xc4e5, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xc4e6, .a=0xef, .x=0x17, .y=0x54, .sp=0xbc, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x17}, {.addr=0xc4e4, .value=0xf8}, {.addr=0xc4e5, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4e4, .value=0xf8, .type=IO_READ},
        {.addr=0xc4e5, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x7007, .a=0x5e, .x=0x83, .y=0x54, .sp=0xb2, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x47}, {.addr=0x7007, .value=0xf8}, {.addr=0x7008, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x7009, .a=0x5e, .x=0x47, .y=0x54, .sp=0xb2, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x47}, {.addr=0x7007, .value=0xf8}, {.addr=0x7008, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x7007, .value=0xf8, .type=IO_READ},
        {.addr=0x7008, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xff49, .a=0x81, .x=0x41, .y=0xfd, .sp=0x83, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x58}, {.addr=0xff49, .value=0xf8}, {.addr=0xff4a, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xff4b, .a=0x81, .x=0x58, .y=0xfd, .sp=0x83, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x58}, {.addr=0xff49, .value=0xf8}, {.addr=0xff4a, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xff49, .value=0xf8, .type=IO_READ},
        {.addr=0xff4a, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x21a2, .a=0x9d, .x=0x8e, .y=0x9b, .sp=0x7e, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0x55}, {.addr=0x21a2, .value=0xf8}, {.addr=0x21a3, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x21a4, .a=0x9d, .x=0x55, .y=0x9b, .sp=0x7e, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0x55}, {.addr=0x21a2, .value=0xf8}, {.addr=0x21a3, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x21a2, .value=0xf8, .type=IO_READ},
        {.addr=0x21a3, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x93fe, .a=0xa6, .x=0xce, .y=0x66, .sp=0xd5, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x40}, {.addr=0x93fe, .value=0xf8}, {.addr=0x93ff, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x9400, .a=0xa6, .x=0x40, .y=0x66, .sp=0xd5, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x40}, {.addr=0x93fe, .value=0xf8}, {.addr=0x93ff, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x93fe, .value=0xf8, .type=IO_READ},
        {.addr=0x93ff, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xee7b, .a=0x18, .x=0x74, .y=0x8b, .sp=0x3e, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x65}, {.addr=0xee7b, .value=0xf8}, {.addr=0xee7c, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xee7d, .a=0x18, .x=0x65, .y=0x8b, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x65}, {.addr=0xee7b, .value=0xf8}, {.addr=0xee7c, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xee7b, .value=0xf8, .type=IO_READ},
        {.addr=0xee7c, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xb141, .a=0x39, .x=0xfc, .y=0x94, .sp=0xd5, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x7f}, {.addr=0xb141, .value=0xf8}, {.addr=0xb142, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xb143, .a=0x39, .x=0x7f, .y=0x94, .sp=0xd5, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x7f}, {.addr=0xb141, .value=0xf8}, {.addr=0xb142, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb141, .value=0xf8, .type=IO_READ},
        {.addr=0xb142, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xc0c9, .a=0x16, .x=0x83, .y=0x99, .sp=0x86, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x21}, {.addr=0xc0c9, .value=0xf8}, {.addr=0xc0ca, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xc0cb, .a=0x16, .x=0x21, .y=0x99, .sp=0x86, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x21}, {.addr=0xc0c9, .value=0xf8}, {.addr=0xc0ca, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0c9, .value=0xf8, .type=IO_READ},
        {.addr=0xc0ca, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x8fe6, .a=0x7f, .x=0xbc, .y=0x35, .sp=0x99, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x1b}, {.addr=0x8fe6, .value=0xf8}, {.addr=0x8fe7, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x8fe8, .a=0x7f, .x=0x1b, .y=0x35, .sp=0x99, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x1b}, {.addr=0x8fe6, .value=0xf8}, {.addr=0x8fe7, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fe6, .value=0xf8, .type=IO_READ},
        {.addr=0x8fe7, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xc294, .a=0x5a, .x=0xc2, .y=0xf1, .sp=0x35, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x89}, {.addr=0xc294, .value=0xf8}, {.addr=0xc295, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xc296, .a=0x5a, .x=0x89, .y=0xf1, .sp=0x35, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x89}, {.addr=0xc294, .value=0xf8}, {.addr=0xc295, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xc294, .value=0xf8, .type=IO_READ},
        {.addr=0xc295, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xee71, .a=0x37, .x=0xa7, .y=0xef, .sp=0xe4, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x46}, {.addr=0xee71, .value=0xf8}, {.addr=0xee72, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xee73, .a=0x37, .x=0x46, .y=0xef, .sp=0xe4, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x46}, {.addr=0xee71, .value=0xf8}, {.addr=0xee72, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xee71, .value=0xf8, .type=IO_READ},
        {.addr=0xee72, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa419, .a=0xb2, .x=0xdd, .y=0x0f, .sp=0x03, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x16}, {.addr=0xa419, .value=0xf8}, {.addr=0xa41a, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xa41b, .a=0xb2, .x=0x16, .y=0x0f, .sp=0x03, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x16}, {.addr=0xa419, .value=0xf8}, {.addr=0xa41a, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa419, .value=0xf8, .type=IO_READ},
        {.addr=0xa41a, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x9e4c, .a=0x22, .x=0xe2, .y=0xdf, .sp=0x1f, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x71}, {.addr=0x9e4c, .value=0xf8}, {.addr=0x9e4d, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x9e4e, .a=0x22, .x=0x71, .y=0xdf, .sp=0x1f, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x71}, {.addr=0x9e4c, .value=0xf8}, {.addr=0x9e4d, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e4c, .value=0xf8, .type=IO_READ},
        {.addr=0x9e4d, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x563a, .a=0x11, .x=0x55, .y=0x8b, .sp=0xf6, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x66}, {.addr=0x563a, .value=0xf8}, {.addr=0x563b, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x563c, .a=0x11, .x=0x66, .y=0x8b, .sp=0xf6, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x66}, {.addr=0x563a, .value=0xf8}, {.addr=0x563b, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x563a, .value=0xf8, .type=IO_READ},
        {.addr=0x563b, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xbe94, .a=0x06, .x=0x74, .y=0xa5, .sp=0x81, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x64}, {.addr=0xbe94, .value=0xf8}, {.addr=0xbe95, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xbe96, .a=0x06, .x=0x64, .y=0xa5, .sp=0x81, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x64}, {.addr=0xbe94, .value=0xf8}, {.addr=0xbe95, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe94, .value=0xf8, .type=IO_READ},
        {.addr=0xbe95, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xe79f, .a=0x32, .x=0x3a, .y=0xed, .sp=0xda, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xd7}, {.addr=0xe79f, .value=0xf8}, {.addr=0xe7a0, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xe7a1, .a=0x32, .x=0xd7, .y=0xed, .sp=0xda, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xd7}, {.addr=0xe79f, .value=0xf8}, {.addr=0xe7a0, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xe79f, .value=0xf8, .type=IO_READ},
        {.addr=0xe7a0, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x8045, .a=0x79, .x=0xb3, .y=0xcc, .sp=0xcc, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xb4}, {.addr=0x8045, .value=0xf8}, {.addr=0x8046, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x8047, .a=0x79, .x=0xb4, .y=0xcc, .sp=0xcc, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xb4}, {.addr=0x8045, .value=0xf8}, {.addr=0x8046, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8045, .value=0xf8, .type=IO_READ},
        {.addr=0x8046, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x266a, .a=0xb2, .x=0x7e, .y=0x6a, .sp=0x80, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x3b}, {.addr=0x266a, .value=0xf8}, {.addr=0x266b, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x266c, .a=0xb2, .x=0x3b, .y=0x6a, .sp=0x80, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x3b}, {.addr=0x266a, .value=0xf8}, {.addr=0x266b, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x266a, .value=0xf8, .type=IO_READ},
        {.addr=0x266b, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x309d, .a=0x11, .x=0x35, .y=0x22, .sp=0x4e, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x5a}, {.addr=0x309d, .value=0xf8}, {.addr=0x309e, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x309f, .a=0x11, .x=0x5a, .y=0x22, .sp=0x4e, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x5a}, {.addr=0x309d, .value=0xf8}, {.addr=0x309e, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x309d, .value=0xf8, .type=IO_READ},
        {.addr=0x309e, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x6b26, .a=0xf7, .x=0x76, .y=0x8b, .sp=0xfd, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x48}, {.addr=0x6b26, .value=0xf8}, {.addr=0x6b27, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x6b28, .a=0xf7, .x=0x48, .y=0x8b, .sp=0xfd, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x48}, {.addr=0x6b26, .value=0xf8}, {.addr=0x6b27, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b26, .value=0xf8, .type=IO_READ},
        {.addr=0x6b27, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xddb7, .a=0x26, .x=0x1f, .y=0x17, .sp=0x82, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x16}, {.addr=0xddb7, .value=0xf8}, {.addr=0xddb8, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xddb9, .a=0x26, .x=0x16, .y=0x17, .sp=0x82, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x16}, {.addr=0xddb7, .value=0xf8}, {.addr=0xddb8, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xddb7, .value=0xf8, .type=IO_READ},
        {.addr=0xddb8, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x9635, .a=0x3a, .x=0x9d, .y=0xcc, .sp=0xd9, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x6f}, {.addr=0x9635, .value=0xf8}, {.addr=0x9636, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x9637, .a=0x3a, .x=0x6f, .y=0xcc, .sp=0xd9, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x6f}, {.addr=0x9635, .value=0xf8}, {.addr=0x9636, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9635, .value=0xf8, .type=IO_READ},
        {.addr=0x9636, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x3aa8, .a=0x38, .x=0x91, .y=0xf7, .sp=0x8c, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x8d}, {.addr=0x3aa8, .value=0xf8}, {.addr=0x3aa9, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x3aaa, .a=0x38, .x=0x8d, .y=0xf7, .sp=0x8c, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x8d}, {.addr=0x3aa8, .value=0xf8}, {.addr=0x3aa9, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aa8, .value=0xf8, .type=IO_READ},
        {.addr=0x3aa9, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x2719, .a=0x37, .x=0xbf, .y=0x70, .sp=0xcc, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x82}, {.addr=0x2719, .value=0xf8}, {.addr=0x271a, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x271b, .a=0x37, .x=0x82, .y=0x70, .sp=0xcc, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x82}, {.addr=0x2719, .value=0xf8}, {.addr=0x271a, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2719, .value=0xf8, .type=IO_READ},
        {.addr=0x271a, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x3c21, .a=0x13, .x=0xaa, .y=0xe2, .sp=0x2a, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x31}, {.addr=0x3c21, .value=0xf8}, {.addr=0x3c22, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x3c23, .a=0x13, .x=0x31, .y=0xe2, .sp=0x2a, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x31}, {.addr=0x3c21, .value=0xf8}, {.addr=0x3c22, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c21, .value=0xf8, .type=IO_READ},
        {.addr=0x3c22, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xf51b, .a=0xdb, .x=0x90, .y=0x94, .sp=0xd4, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x27}, {.addr=0xf51b, .value=0xf8}, {.addr=0xf51c, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xf51d, .a=0xdb, .x=0x27, .y=0x94, .sp=0xd4, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x27}, {.addr=0xf51b, .value=0xf8}, {.addr=0xf51c, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf51b, .value=0xf8, .type=IO_READ},
        {.addr=0xf51c, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb08a, .a=0xcb, .x=0x23, .y=0x5a, .sp=0xb8, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xff}, {.addr=0xb08a, .value=0xf8}, {.addr=0xb08b, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xb08c, .a=0xcb, .x=0xff, .y=0x5a, .sp=0xb8, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xff}, {.addr=0xb08a, .value=0xf8}, {.addr=0xb08b, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb08a, .value=0xf8, .type=IO_READ},
        {.addr=0xb08b, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb0fd, .a=0x1a, .x=0xcd, .y=0x80, .sp=0xdf, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x82}, {.addr=0xb0fd, .value=0xf8}, {.addr=0xb0fe, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xb0ff, .a=0x1a, .x=0x82, .y=0x80, .sp=0xdf, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x82}, {.addr=0xb0fd, .value=0xf8}, {.addr=0xb0fe, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0fd, .value=0xf8, .type=IO_READ},
        {.addr=0xb0fe, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x9764, .a=0x99, .x=0xb5, .y=0xab, .sp=0xad, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xbc}, {.addr=0x9764, .value=0xf8}, {.addr=0x9765, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x9766, .a=0x99, .x=0xbc, .y=0xab, .sp=0xad, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xbc}, {.addr=0x9764, .value=0xf8}, {.addr=0x9765, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9764, .value=0xf8, .type=IO_READ},
        {.addr=0x9765, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x9ba3, .a=0xcb, .x=0x28, .y=0x18, .sp=0x45, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x9a}, {.addr=0x9ba3, .value=0xf8}, {.addr=0x9ba4, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x9ba5, .a=0xcb, .x=0x9a, .y=0x18, .sp=0x45, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x9a}, {.addr=0x9ba3, .value=0xf8}, {.addr=0x9ba4, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ba3, .value=0xf8, .type=IO_READ},
        {.addr=0x9ba4, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x3736, .a=0x8b, .x=0xcb, .y=0xba, .sp=0x36, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x11}, {.addr=0x3736, .value=0xf8}, {.addr=0x3737, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x3738, .a=0x8b, .x=0x11, .y=0xba, .sp=0x36, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x11}, {.addr=0x3736, .value=0xf8}, {.addr=0x3737, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3736, .value=0xf8, .type=IO_READ},
        {.addr=0x3737, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xd6e5, .a=0x6e, .x=0xa4, .y=0xc2, .sp=0x90, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x71}, {.addr=0xd6e5, .value=0xf8}, {.addr=0xd6e6, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd6e7, .a=0x6e, .x=0x71, .y=0xc2, .sp=0x90, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x71}, {.addr=0xd6e5, .value=0xf8}, {.addr=0xd6e6, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6e5, .value=0xf8, .type=IO_READ},
        {.addr=0xd6e6, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x43fd, .a=0x9d, .x=0xeb, .y=0xef, .sp=0x78, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x62}, {.addr=0x43fd, .value=0xf8}, {.addr=0x43fe, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x43ff, .a=0x9d, .x=0x62, .y=0xef, .sp=0x78, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x62}, {.addr=0x43fd, .value=0xf8}, {.addr=0x43fe, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x43fd, .value=0xf8, .type=IO_READ},
        {.addr=0x43fe, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x3ca6, .a=0x54, .x=0xce, .y=0xc2, .sp=0xd1, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x2f}, {.addr=0x3ca6, .value=0xf8}, {.addr=0x3ca7, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x3ca8, .a=0x54, .x=0x2f, .y=0xc2, .sp=0xd1, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x2f}, {.addr=0x3ca6, .value=0xf8}, {.addr=0x3ca7, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ca6, .value=0xf8, .type=IO_READ},
        {.addr=0x3ca7, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x04ca, .a=0x86, .x=0x67, .y=0x99, .sp=0xc0, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x77}, {.addr=0x04ca, .value=0xf8}, {.addr=0x04cb, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x04cc, .a=0x86, .x=0x77, .y=0x99, .sp=0xc0, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x77}, {.addr=0x04ca, .value=0xf8}, {.addr=0x04cb, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x04ca, .value=0xf8, .type=IO_READ},
        {.addr=0x04cb, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x9264, .a=0xb5, .x=0x38, .y=0x21, .sp=0xa8, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xca}, {.addr=0x9264, .value=0xf8}, {.addr=0x9265, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x9266, .a=0xb5, .x=0xca, .y=0x21, .sp=0xa8, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xca}, {.addr=0x9264, .value=0xf8}, {.addr=0x9265, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x9264, .value=0xf8, .type=IO_READ},
        {.addr=0x9265, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x66cd, .a=0x0c, .x=0x05, .y=0x7f, .sp=0x7c, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xac}, {.addr=0x66cd, .value=0xf8}, {.addr=0x66ce, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x66cf, .a=0x0c, .x=0xac, .y=0x7f, .sp=0x7c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xac}, {.addr=0x66cd, .value=0xf8}, {.addr=0x66ce, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x66cd, .value=0xf8, .type=IO_READ},
        {.addr=0x66ce, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6c95, .a=0xee, .x=0xdd, .y=0x6e, .sp=0xf6, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x37}, {.addr=0x6c95, .value=0xf8}, {.addr=0x6c96, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x6c97, .a=0xee, .x=0x37, .y=0x6e, .sp=0xf6, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x37}, {.addr=0x6c95, .value=0xf8}, {.addr=0x6c96, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c95, .value=0xf8, .type=IO_READ},
        {.addr=0x6c96, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xa3b9, .a=0xd3, .x=0x57, .y=0x53, .sp=0x0c, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x80}, {.addr=0xa3b9, .value=0xf8}, {.addr=0xa3ba, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xa3bb, .a=0xd3, .x=0x80, .y=0x53, .sp=0x0c, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x80}, {.addr=0xa3b9, .value=0xf8}, {.addr=0xa3ba, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3b9, .value=0xf8, .type=IO_READ},
        {.addr=0xa3ba, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xee65, .a=0x26, .x=0x0d, .y=0xe3, .sp=0xc2, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x3e}, {.addr=0xee65, .value=0xf8}, {.addr=0xee66, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xee67, .a=0x26, .x=0x3e, .y=0xe3, .sp=0xc2, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x3e}, {.addr=0xee65, .value=0xf8}, {.addr=0xee66, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xee65, .value=0xf8, .type=IO_READ},
        {.addr=0xee66, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xd67a, .a=0x23, .x=0x1b, .y=0x02, .sp=0x29, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x10}, {.addr=0xd67a, .value=0xf8}, {.addr=0xd67b, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xd67c, .a=0x23, .x=0x10, .y=0x02, .sp=0x29, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x10}, {.addr=0xd67a, .value=0xf8}, {.addr=0xd67b, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xd67a, .value=0xf8, .type=IO_READ},
        {.addr=0xd67b, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x3ee9, .a=0xab, .x=0x57, .y=0x51, .sp=0xcb, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xdf}, {.addr=0x3ee9, .value=0xf8}, {.addr=0x3eea, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x3eeb, .a=0xab, .x=0xdf, .y=0x51, .sp=0xcb, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xdf}, {.addr=0x3ee9, .value=0xf8}, {.addr=0x3eea, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ee9, .value=0xf8, .type=IO_READ},
        {.addr=0x3eea, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xd787, .a=0x2c, .x=0x61, .y=0x8e, .sp=0x26, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x14}, {.addr=0xd787, .value=0xf8}, {.addr=0xd788, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xd789, .a=0x2c, .x=0x14, .y=0x8e, .sp=0x26, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x14}, {.addr=0xd787, .value=0xf8}, {.addr=0xd788, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd787, .value=0xf8, .type=IO_READ},
        {.addr=0xd788, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x599d, .a=0x65, .x=0x83, .y=0x11, .sp=0xe4, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xa3}, {.addr=0x599d, .value=0xf8}, {.addr=0x599e, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x599f, .a=0x65, .x=0xa3, .y=0x11, .sp=0xe4, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xa3}, {.addr=0x599d, .value=0xf8}, {.addr=0x599e, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x599d, .value=0xf8, .type=IO_READ},
        {.addr=0x599e, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x4e32, .a=0x37, .x=0x7c, .y=0xdc, .sp=0x41, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xfa}, {.addr=0x4e32, .value=0xf8}, {.addr=0x4e33, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x4e34, .a=0x37, .x=0xfa, .y=0xdc, .sp=0x41, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xfa}, {.addr=0x4e32, .value=0xf8}, {.addr=0x4e33, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e32, .value=0xf8, .type=IO_READ},
        {.addr=0x4e33, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x7e64, .a=0xee, .x=0x5d, .y=0x8f, .sp=0x67, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xb2}, {.addr=0x7e64, .value=0xf8}, {.addr=0x7e65, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x7e66, .a=0xee, .x=0xb2, .y=0x8f, .sp=0x67, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xb2}, {.addr=0x7e64, .value=0xf8}, {.addr=0x7e65, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e64, .value=0xf8, .type=IO_READ},
        {.addr=0x7e65, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x8afc, .a=0x93, .x=0x8f, .y=0x38, .sp=0x20, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x65}, {.addr=0x8afc, .value=0xf8}, {.addr=0x8afd, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x8afe, .a=0x93, .x=0x65, .y=0x38, .sp=0x20, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x65}, {.addr=0x8afc, .value=0xf8}, {.addr=0x8afd, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x8afc, .value=0xf8, .type=IO_READ},
        {.addr=0x8afd, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x01a2, .a=0x9d, .x=0xf9, .y=0xc0, .sp=0xa7, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xf8}, {.addr=0x01a3, .value=0xaf}, {.addr=0x01af, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x01a4, .a=0x9d, .x=0x1f, .y=0xc0, .sp=0xa7, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xf8}, {.addr=0x01a3, .value=0xaf}, {.addr=0x01af, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x01a2, .value=0xf8, .type=IO_READ},
        {.addr=0x01a3, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x8dcb, .a=0x2a, .x=0x7f, .y=0x7a, .sp=0xc9, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xa9}, {.addr=0x8dcb, .value=0xf8}, {.addr=0x8dcc, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x8dcd, .a=0x2a, .x=0xa9, .y=0x7a, .sp=0xc9, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xa9}, {.addr=0x8dcb, .value=0xf8}, {.addr=0x8dcc, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dcb, .value=0xf8, .type=IO_READ},
        {.addr=0x8dcc, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xffca, .a=0x8e, .x=0x57, .y=0x66, .sp=0xb7, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x84}, {.addr=0xffca, .value=0xf8}, {.addr=0xffcb, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xffcc, .a=0x8e, .x=0x84, .y=0x66, .sp=0xb7, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x84}, {.addr=0xffca, .value=0xf8}, {.addr=0xffcb, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xffca, .value=0xf8, .type=IO_READ},
        {.addr=0xffcb, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x07d9, .a=0xd0, .x=0x29, .y=0x23, .sp=0xfc, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xe3}, {.addr=0x07d9, .value=0xf8}, {.addr=0x07da, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x07db, .a=0xd0, .x=0xe3, .y=0x23, .sp=0xfc, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xe3}, {.addr=0x07d9, .value=0xf8}, {.addr=0x07da, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x07d9, .value=0xf8, .type=IO_READ},
        {.addr=0x07da, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xb602, .a=0xfc, .x=0x6a, .y=0x28, .sp=0x59, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x38}, {.addr=0xb602, .value=0xf8}, {.addr=0xb603, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xb604, .a=0xfc, .x=0x38, .y=0x28, .sp=0x59, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x38}, {.addr=0xb602, .value=0xf8}, {.addr=0xb603, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb602, .value=0xf8, .type=IO_READ},
        {.addr=0xb603, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xd101, .a=0x87, .x=0x89, .y=0xd0, .sp=0xb7, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x74}, {.addr=0xd101, .value=0xf8}, {.addr=0xd102, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd103, .a=0x87, .x=0x74, .y=0xd0, .sp=0xb7, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x74}, {.addr=0xd101, .value=0xf8}, {.addr=0xd102, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd101, .value=0xf8, .type=IO_READ},
        {.addr=0xd102, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x18c9, .a=0x15, .x=0x84, .y=0xd9, .sp=0xc2, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x90}, {.addr=0x18c9, .value=0xf8}, {.addr=0x18ca, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x18cb, .a=0x15, .x=0x90, .y=0xd9, .sp=0xc2, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x90}, {.addr=0x18c9, .value=0xf8}, {.addr=0x18ca, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x18c9, .value=0xf8, .type=IO_READ},
        {.addr=0x18ca, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xfc54, .a=0xf3, .x=0x22, .y=0x13, .sp=0x12, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x77}, {.addr=0xfc54, .value=0xf8}, {.addr=0xfc55, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xfc56, .a=0xf3, .x=0x77, .y=0x13, .sp=0x12, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x77}, {.addr=0xfc54, .value=0xf8}, {.addr=0xfc55, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc54, .value=0xf8, .type=IO_READ},
        {.addr=0xfc55, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x8970, .a=0x79, .x=0xd9, .y=0x4d, .sp=0x13, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x07}, {.addr=0x8970, .value=0xf8}, {.addr=0x8971, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x8972, .a=0x79, .x=0x07, .y=0x4d, .sp=0x13, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x07}, {.addr=0x8970, .value=0xf8}, {.addr=0x8971, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8970, .value=0xf8, .type=IO_READ},
        {.addr=0x8971, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xf2ab, .a=0x32, .x=0xdb, .y=0xd1, .sp=0x97, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x3a}, {.addr=0xf2ab, .value=0xf8}, {.addr=0xf2ac, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xf2ad, .a=0x32, .x=0x3a, .y=0xd1, .sp=0x97, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x3a}, {.addr=0xf2ab, .value=0xf8}, {.addr=0xf2ac, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2ab, .value=0xf8, .type=IO_READ},
        {.addr=0xf2ac, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x56e2, .a=0x9a, .x=0xd1, .y=0x06, .sp=0x1a, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x56}, {.addr=0x56e2, .value=0xf8}, {.addr=0x56e3, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x56e4, .a=0x9a, .x=0x56, .y=0x06, .sp=0x1a, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x56}, {.addr=0x56e2, .value=0xf8}, {.addr=0x56e3, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x56e2, .value=0xf8, .type=IO_READ},
        {.addr=0x56e3, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x7b6b, .a=0xb2, .x=0x40, .y=0x57, .sp=0x90, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xf6}, {.addr=0x7b6b, .value=0xf8}, {.addr=0x7b6c, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x7b6d, .a=0xb2, .x=0xf6, .y=0x57, .sp=0x90, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xf6}, {.addr=0x7b6b, .value=0xf8}, {.addr=0x7b6c, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b6b, .value=0xf8, .type=IO_READ},
        {.addr=0x7b6c, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0xee, .x=0x97, .y=0x61, .sp=0xc0, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xf3}, {.addr=0x9497, .value=0xf8}, {.addr=0x9498, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x9499, .a=0xee, .x=0xf3, .y=0x61, .sp=0xc0, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xf3}, {.addr=0x9497, .value=0xf8}, {.addr=0x9498, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0xf8, .type=IO_READ},
        {.addr=0x9498, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x26f0, .a=0x92, .x=0xe6, .y=0x37, .sp=0xc9, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xaa}, {.addr=0x26f0, .value=0xf8}, {.addr=0x26f1, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x26f2, .a=0x92, .x=0xaa, .y=0x37, .sp=0xc9, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xaa}, {.addr=0x26f0, .value=0xf8}, {.addr=0x26f1, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x26f0, .value=0xf8, .type=IO_READ},
        {.addr=0x26f1, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x5297, .a=0x1d, .x=0x62, .y=0x59, .sp=0xc4, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xb8}, {.addr=0x5297, .value=0xf8}, {.addr=0x5298, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x5299, .a=0x1d, .x=0xb8, .y=0x59, .sp=0xc4, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xb8}, {.addr=0x5297, .value=0xf8}, {.addr=0x5298, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x5297, .value=0xf8, .type=IO_READ},
        {.addr=0x5298, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x585d, .a=0xde, .x=0xc0, .y=0x64, .sp=0xae, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x93}, {.addr=0x585d, .value=0xf8}, {.addr=0x585e, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x585f, .a=0xde, .x=0x93, .y=0x64, .sp=0xae, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x93}, {.addr=0x585d, .value=0xf8}, {.addr=0x585e, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x585d, .value=0xf8, .type=IO_READ},
        {.addr=0x585e, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0100) {
    const struct CPU_State initial_cpu = {.pc=0x60fc, .a=0x2b, .x=0x5d, .y=0x3c, .sp=0xc2, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x9c}, {.addr=0x60fc, .value=0xf8}, {.addr=0x60fd, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x60fe, .a=0x2b, .x=0x9c, .y=0x3c, .sp=0xc2, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x9c}, {.addr=0x60fc, .value=0xf8}, {.addr=0x60fd, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x60fc, .value=0xf8, .type=IO_READ},
        {.addr=0x60fd, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf629, .a=0xe4, .x=0x9b, .y=0x92, .sp=0xb2, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0xc2}, {.addr=0xf629, .value=0xf8}, {.addr=0xf62a, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xf62b, .a=0xe4, .x=0xc2, .y=0x92, .sp=0xb2, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0xc2}, {.addr=0xf629, .value=0xf8}, {.addr=0xf62a, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf629, .value=0xf8, .type=IO_READ},
        {.addr=0xf62a, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0102) {
    const struct CPU_State initial_cpu = {.pc=0x4c65, .a=0xbc, .x=0xa7, .y=0x2f, .sp=0xf2, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x95}, {.addr=0x4c65, .value=0xf8}, {.addr=0x4c66, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x4c67, .a=0xbc, .x=0x95, .y=0x2f, .sp=0xf2, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x95}, {.addr=0x4c65, .value=0xf8}, {.addr=0x4c66, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c65, .value=0xf8, .type=IO_READ},
        {.addr=0x4c66, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0103) {
    const struct CPU_State initial_cpu = {.pc=0x0760, .a=0x7b, .x=0x52, .y=0x29, .sp=0xab, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x1c}, {.addr=0x0760, .value=0xf8}, {.addr=0x0761, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x0762, .a=0x7b, .x=0x1c, .y=0x29, .sp=0xab, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x1c}, {.addr=0x0760, .value=0xf8}, {.addr=0x0761, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0760, .value=0xf8, .type=IO_READ},
        {.addr=0x0761, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0104) {
    const struct CPU_State initial_cpu = {.pc=0xbbe7, .a=0xd2, .x=0xa4, .y=0x64, .sp=0xe9, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x65}, {.addr=0xbbe7, .value=0xf8}, {.addr=0xbbe8, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xbbe9, .a=0xd2, .x=0x65, .y=0x64, .sp=0xe9, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x65}, {.addr=0xbbe7, .value=0xf8}, {.addr=0xbbe8, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbe7, .value=0xf8, .type=IO_READ},
        {.addr=0xbbe8, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0105) {
    const struct CPU_State initial_cpu = {.pc=0x98b9, .a=0x47, .x=0xdf, .y=0xee, .sp=0xce, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x3a}, {.addr=0x98b9, .value=0xf8}, {.addr=0x98ba, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x98bb, .a=0x47, .x=0x3a, .y=0xee, .sp=0xce, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x3a}, {.addr=0x98b9, .value=0xf8}, {.addr=0x98ba, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x98b9, .value=0xf8, .type=IO_READ},
        {.addr=0x98ba, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0106) {
    const struct CPU_State initial_cpu = {.pc=0x721f, .a=0x1a, .x=0xf3, .y=0xb8, .sp=0xdf, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x59}, {.addr=0x721f, .value=0xf8}, {.addr=0x7220, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x7221, .a=0x1a, .x=0x59, .y=0xb8, .sp=0xdf, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x59}, {.addr=0x721f, .value=0xf8}, {.addr=0x7220, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x721f, .value=0xf8, .type=IO_READ},
        {.addr=0x7220, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0107) {
    const struct CPU_State initial_cpu = {.pc=0x34a5, .a=0xfe, .x=0x5c, .y=0xc4, .sp=0x50, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0xe6}, {.addr=0x34a5, .value=0xf8}, {.addr=0x34a6, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x34a7, .a=0xfe, .x=0xe6, .y=0xc4, .sp=0x50, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0xe6}, {.addr=0x34a5, .value=0xf8}, {.addr=0x34a6, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x34a5, .value=0xf8, .type=IO_READ},
        {.addr=0x34a6, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0108) {
    const struct CPU_State initial_cpu = {.pc=0x6cdb, .a=0x16, .x=0x77, .y=0x2e, .sp=0xdd, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x97}, {.addr=0x6cdb, .value=0xf8}, {.addr=0x6cdc, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x6cdd, .a=0x16, .x=0x97, .y=0x2e, .sp=0xdd, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x97}, {.addr=0x6cdb, .value=0xf8}, {.addr=0x6cdc, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cdb, .value=0xf8, .type=IO_READ},
        {.addr=0x6cdc, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0109) {
    const struct CPU_State initial_cpu = {.pc=0x63e5, .a=0xb3, .x=0x7a, .y=0x8c, .sp=0xcf, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x76}, {.addr=0x63e5, .value=0xf8}, {.addr=0x63e6, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x63e7, .a=0xb3, .x=0x76, .y=0x8c, .sp=0xcf, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x76}, {.addr=0x63e5, .value=0xf8}, {.addr=0x63e6, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x63e5, .value=0xf8, .type=IO_READ},
        {.addr=0x63e6, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_010A) {
    const struct CPU_State initial_cpu = {.pc=0x644c, .a=0xf7, .x=0xdb, .y=0xe7, .sp=0xfd, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x99}, {.addr=0x644c, .value=0xf8}, {.addr=0x644d, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x644e, .a=0xf7, .x=0x99, .y=0xe7, .sp=0xfd, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x99}, {.addr=0x644c, .value=0xf8}, {.addr=0x644d, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x644c, .value=0xf8, .type=IO_READ},
        {.addr=0x644d, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_010B) {
    const struct CPU_State initial_cpu = {.pc=0xdd45, .a=0x54, .x=0x70, .y=0x16, .sp=0x92, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x29}, {.addr=0xdd45, .value=0xf8}, {.addr=0xdd46, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xdd47, .a=0x54, .x=0x29, .y=0x16, .sp=0x92, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x29}, {.addr=0xdd45, .value=0xf8}, {.addr=0xdd46, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd45, .value=0xf8, .type=IO_READ},
        {.addr=0xdd46, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_010C) {
    const struct CPU_State initial_cpu = {.pc=0x8efe, .a=0x9d, .x=0x48, .y=0xac, .sp=0x34, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xc9}, {.addr=0x8efe, .value=0xf8}, {.addr=0x8eff, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x8f00, .a=0x9d, .x=0xc9, .y=0xac, .sp=0x34, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xc9}, {.addr=0x8efe, .value=0xf8}, {.addr=0x8eff, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x8efe, .value=0xf8, .type=IO_READ},
        {.addr=0x8eff, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_010D) {
    const struct CPU_State initial_cpu = {.pc=0x0825, .a=0xc3, .x=0x81, .y=0x09, .sp=0x75, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x5f}, {.addr=0x0825, .value=0xf8}, {.addr=0x0826, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x0827, .a=0xc3, .x=0x5f, .y=0x09, .sp=0x75, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x5f}, {.addr=0x0825, .value=0xf8}, {.addr=0x0826, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0825, .value=0xf8, .type=IO_READ},
        {.addr=0x0826, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf4e4, .a=0x87, .x=0xeb, .y=0xa2, .sp=0x4b, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0xf6}, {.addr=0xf4e4, .value=0xf8}, {.addr=0xf4e5, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xf4e6, .a=0x87, .x=0xf6, .y=0xa2, .sp=0x4b, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0xf6}, {.addr=0xf4e4, .value=0xf8}, {.addr=0xf4e5, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4e4, .value=0xf8, .type=IO_READ},
        {.addr=0xf4e5, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_010F) {
    const struct CPU_State initial_cpu = {.pc=0x85b2, .a=0x25, .x=0x64, .y=0xd9, .sp=0x5e, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x26}, {.addr=0x85b2, .value=0xf8}, {.addr=0x85b3, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x85b4, .a=0x25, .x=0x26, .y=0xd9, .sp=0x5e, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x26}, {.addr=0x85b2, .value=0xf8}, {.addr=0x85b3, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x85b2, .value=0xf8, .type=IO_READ},
        {.addr=0x85b3, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0110) {
    const struct CPU_State initial_cpu = {.pc=0x5417, .a=0x5d, .x=0x08, .y=0x0a, .sp=0x10, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x35}, {.addr=0x5417, .value=0xf8}, {.addr=0x5418, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x5419, .a=0x5d, .x=0x35, .y=0x0a, .sp=0x10, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x35}, {.addr=0x5417, .value=0xf8}, {.addr=0x5418, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5417, .value=0xf8, .type=IO_READ},
        {.addr=0x5418, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0111) {
    const struct CPU_State initial_cpu = {.pc=0x6d80, .a=0xf0, .x=0xa5, .y=0xeb, .sp=0x86, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x9e}, {.addr=0x6d80, .value=0xf8}, {.addr=0x6d81, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x6d82, .a=0xf0, .x=0x9e, .y=0xeb, .sp=0x86, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x9e}, {.addr=0x6d80, .value=0xf8}, {.addr=0x6d81, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d80, .value=0xf8, .type=IO_READ},
        {.addr=0x6d81, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0112) {
    const struct CPU_State initial_cpu = {.pc=0xdbe4, .a=0x13, .x=0x10, .y=0x7a, .sp=0x22, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x2d}, {.addr=0xdbe4, .value=0xf8}, {.addr=0xdbe5, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xdbe6, .a=0x13, .x=0x2d, .y=0x7a, .sp=0x22, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x2d}, {.addr=0xdbe4, .value=0xf8}, {.addr=0xdbe5, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbe4, .value=0xf8, .type=IO_READ},
        {.addr=0xdbe5, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0113) {
    const struct CPU_State initial_cpu = {.pc=0xf590, .a=0xbe, .x=0x98, .y=0x97, .sp=0xca, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x25}, {.addr=0xf590, .value=0xf8}, {.addr=0xf591, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xf592, .a=0xbe, .x=0x25, .y=0x97, .sp=0xca, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x25}, {.addr=0xf590, .value=0xf8}, {.addr=0xf591, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xf590, .value=0xf8, .type=IO_READ},
        {.addr=0xf591, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0114) {
    const struct CPU_State initial_cpu = {.pc=0x0958, .a=0x59, .x=0xc8, .y=0xff, .sp=0x2b, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x19}, {.addr=0x0958, .value=0xf8}, {.addr=0x0959, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x095a, .a=0x59, .x=0x19, .y=0xff, .sp=0x2b, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x19}, {.addr=0x0958, .value=0xf8}, {.addr=0x0959, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x0958, .value=0xf8, .type=IO_READ},
        {.addr=0x0959, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0115) {
    const struct CPU_State initial_cpu = {.pc=0xa2c2, .a=0x17, .x=0x95, .y=0x39, .sp=0xb7, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x57}, {.addr=0xa2c2, .value=0xf8}, {.addr=0xa2c3, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xa2c4, .a=0x17, .x=0x57, .y=0x39, .sp=0xb7, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x57}, {.addr=0xa2c2, .value=0xf8}, {.addr=0xa2c3, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2c2, .value=0xf8, .type=IO_READ},
        {.addr=0xa2c3, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0116) {
    const struct CPU_State initial_cpu = {.pc=0xa76e, .a=0x58, .x=0x18, .y=0x02, .sp=0x34, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xf8}, {.addr=0xa76e, .value=0xf8}, {.addr=0xa76f, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xa770, .a=0x58, .x=0xf8, .y=0x02, .sp=0x34, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xf8}, {.addr=0xa76e, .value=0xf8}, {.addr=0xa76f, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa76e, .value=0xf8, .type=IO_READ},
        {.addr=0xa76f, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0117) {
    const struct CPU_State initial_cpu = {.pc=0x478c, .a=0xed, .x=0x03, .y=0x6b, .sp=0xf1, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x66}, {.addr=0x478c, .value=0xf8}, {.addr=0x478d, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x478e, .a=0xed, .x=0x66, .y=0x6b, .sp=0xf1, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x66}, {.addr=0x478c, .value=0xf8}, {.addr=0x478d, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x478c, .value=0xf8, .type=IO_READ},
        {.addr=0x478d, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0118) {
    const struct CPU_State initial_cpu = {.pc=0x6850, .a=0x8f, .x=0x1f, .y=0x04, .sp=0xa2, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xbb}, {.addr=0x6850, .value=0xf8}, {.addr=0x6851, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x6852, .a=0x8f, .x=0xbb, .y=0x04, .sp=0xa2, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xbb}, {.addr=0x6850, .value=0xf8}, {.addr=0x6851, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x6850, .value=0xf8, .type=IO_READ},
        {.addr=0x6851, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb058, .a=0x67, .x=0xe5, .y=0xe6, .sp=0x52, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x4d}, {.addr=0xb058, .value=0xf8}, {.addr=0xb059, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xb05a, .a=0x67, .x=0x4d, .y=0xe6, .sp=0x52, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x4d}, {.addr=0xb058, .value=0xf8}, {.addr=0xb059, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xb058, .value=0xf8, .type=IO_READ},
        {.addr=0xb059, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_011A) {
    const struct CPU_State initial_cpu = {.pc=0x8b6d, .a=0x2a, .x=0x3c, .y=0x24, .sp=0xee, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x97}, {.addr=0x8b6d, .value=0xf8}, {.addr=0x8b6e, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x8b6f, .a=0x2a, .x=0x97, .y=0x24, .sp=0xee, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x97}, {.addr=0x8b6d, .value=0xf8}, {.addr=0x8b6e, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b6d, .value=0xf8, .type=IO_READ},
        {.addr=0x8b6e, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_011B) {
    const struct CPU_State initial_cpu = {.pc=0x2183, .a=0x03, .x=0x0e, .y=0x4a, .sp=0xf2, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xf6}, {.addr=0x2183, .value=0xf8}, {.addr=0x2184, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x2185, .a=0x03, .x=0xf6, .y=0x4a, .sp=0xf2, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xf6}, {.addr=0x2183, .value=0xf8}, {.addr=0x2184, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x2183, .value=0xf8, .type=IO_READ},
        {.addr=0x2184, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_011C) {
    const struct CPU_State initial_cpu = {.pc=0x47f3, .a=0x1a, .x=0xc2, .y=0xe8, .sp=0x5d, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x45}, {.addr=0x47f3, .value=0xf8}, {.addr=0x47f4, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x47f5, .a=0x1a, .x=0x45, .y=0xe8, .sp=0x5d, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x45}, {.addr=0x47f3, .value=0xf8}, {.addr=0x47f4, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x47f3, .value=0xf8, .type=IO_READ},
        {.addr=0x47f4, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_011D) {
    const struct CPU_State initial_cpu = {.pc=0xeda0, .a=0x7d, .x=0xe9, .y=0xe7, .sp=0x94, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x0c}, {.addr=0xeda0, .value=0xf8}, {.addr=0xeda1, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xeda2, .a=0x7d, .x=0x0c, .y=0xe7, .sp=0x94, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x0c}, {.addr=0xeda0, .value=0xf8}, {.addr=0xeda1, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xeda0, .value=0xf8, .type=IO_READ},
        {.addr=0xeda1, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_011E) {
    const struct CPU_State initial_cpu = {.pc=0x7be1, .a=0x45, .x=0x7a, .y=0x86, .sp=0x87, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xfd}, {.addr=0x7be1, .value=0xf8}, {.addr=0x7be2, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x7be3, .a=0x45, .x=0xfd, .y=0x86, .sp=0x87, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xfd}, {.addr=0x7be1, .value=0xf8}, {.addr=0x7be2, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7be1, .value=0xf8, .type=IO_READ},
        {.addr=0x7be2, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_011F) {
    const struct CPU_State initial_cpu = {.pc=0x2b2c, .a=0x8c, .x=0x4f, .y=0x4d, .sp=0x1d, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xcd}, {.addr=0x2b2c, .value=0xf8}, {.addr=0x2b2d, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x2b2e, .a=0x8c, .x=0xcd, .y=0x4d, .sp=0x1d, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xcd}, {.addr=0x2b2c, .value=0xf8}, {.addr=0x2b2d, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b2c, .value=0xf8, .type=IO_READ},
        {.addr=0x2b2d, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0120) {
    const struct CPU_State initial_cpu = {.pc=0xfcd6, .a=0x3b, .x=0x8f, .y=0x4f, .sp=0xcf, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xd7}, {.addr=0xfcd6, .value=0xf8}, {.addr=0xfcd7, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd8, .a=0x3b, .x=0xd7, .y=0x4f, .sp=0xcf, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xd7}, {.addr=0xfcd6, .value=0xf8}, {.addr=0xfcd7, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd6, .value=0xf8, .type=IO_READ},
        {.addr=0xfcd7, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0121) {
    const struct CPU_State initial_cpu = {.pc=0x3ec4, .a=0xa0, .x=0xdd, .y=0xea, .sp=0xae, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xa0}, {.addr=0x3ec4, .value=0xf8}, {.addr=0x3ec5, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x3ec6, .a=0xa0, .x=0xa0, .y=0xea, .sp=0xae, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xa0}, {.addr=0x3ec4, .value=0xf8}, {.addr=0x3ec5, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ec4, .value=0xf8, .type=IO_READ},
        {.addr=0x3ec5, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0122) {
    const struct CPU_State initial_cpu = {.pc=0x9224, .a=0x5e, .x=0xe2, .y=0x08, .sp=0x27, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x07}, {.addr=0x9224, .value=0xf8}, {.addr=0x9225, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x9226, .a=0x5e, .x=0x07, .y=0x08, .sp=0x27, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x07}, {.addr=0x9224, .value=0xf8}, {.addr=0x9225, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x9224, .value=0xf8, .type=IO_READ},
        {.addr=0x9225, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0123) {
    const struct CPU_State initial_cpu = {.pc=0x0811, .a=0x8d, .x=0xab, .y=0x86, .sp=0x8d, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0xfb}, {.addr=0x0811, .value=0xf8}, {.addr=0x0812, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x0813, .a=0x8d, .x=0xfb, .y=0x86, .sp=0x8d, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0xfb}, {.addr=0x0811, .value=0xf8}, {.addr=0x0812, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0811, .value=0xf8, .type=IO_READ},
        {.addr=0x0812, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0125) {
    const struct CPU_State initial_cpu = {.pc=0x020c, .a=0x2b, .x=0x6f, .y=0xaf, .sp=0x99, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x73}, {.addr=0x020c, .value=0xf8}, {.addr=0x020d, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x020e, .a=0x2b, .x=0x73, .y=0xaf, .sp=0x99, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x73}, {.addr=0x020c, .value=0xf8}, {.addr=0x020d, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x020c, .value=0xf8, .type=IO_READ},
        {.addr=0x020d, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0126) {
    const struct CPU_State initial_cpu = {.pc=0x05c5, .a=0xcc, .x=0xf4, .y=0x26, .sp=0x0a, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xa3}, {.addr=0x05c5, .value=0xf8}, {.addr=0x05c6, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x05c7, .a=0xcc, .x=0xa3, .y=0x26, .sp=0x0a, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xa3}, {.addr=0x05c5, .value=0xf8}, {.addr=0x05c6, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x05c5, .value=0xf8, .type=IO_READ},
        {.addr=0x05c6, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0127) {
    const struct CPU_State initial_cpu = {.pc=0x7531, .a=0x27, .x=0x23, .y=0x8b, .sp=0xbb, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x3d}, {.addr=0x7531, .value=0xf8}, {.addr=0x7532, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x7533, .a=0x27, .x=0x3d, .y=0x8b, .sp=0xbb, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x3d}, {.addr=0x7531, .value=0xf8}, {.addr=0x7532, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7531, .value=0xf8, .type=IO_READ},
        {.addr=0x7532, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0129) {
    const struct CPU_State initial_cpu = {.pc=0x2d27, .a=0x95, .x=0x4e, .y=0x96, .sp=0x6c, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x8e}, {.addr=0x2d27, .value=0xf8}, {.addr=0x2d28, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x2d29, .a=0x95, .x=0x8e, .y=0x96, .sp=0x6c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x8e}, {.addr=0x2d27, .value=0xf8}, {.addr=0x2d28, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d27, .value=0xf8, .type=IO_READ},
        {.addr=0x2d28, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_012A) {
    const struct CPU_State initial_cpu = {.pc=0x17dc, .a=0x02, .x=0xac, .y=0x8b, .sp=0x46, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x9a}, {.addr=0x17dc, .value=0xf8}, {.addr=0x17dd, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x17de, .a=0x02, .x=0x9a, .y=0x8b, .sp=0x46, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x9a}, {.addr=0x17dc, .value=0xf8}, {.addr=0x17dd, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x17dc, .value=0xf8, .type=IO_READ},
        {.addr=0x17dd, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_012B) {
    const struct CPU_State initial_cpu = {.pc=0x9a32, .a=0xc8, .x=0x4e, .y=0x3c, .sp=0x57, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x3e}, {.addr=0x9a32, .value=0xf8}, {.addr=0x9a33, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x9a34, .a=0xc8, .x=0x3e, .y=0x3c, .sp=0x57, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x3e}, {.addr=0x9a32, .value=0xf8}, {.addr=0x9a33, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a32, .value=0xf8, .type=IO_READ},
        {.addr=0x9a33, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_012C) {
    const struct CPU_State initial_cpu = {.pc=0x62d5, .a=0x99, .x=0xb6, .y=0x90, .sp=0x02, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0xa5}, {.addr=0x62d5, .value=0xf8}, {.addr=0x62d6, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x62d7, .a=0x99, .x=0xa5, .y=0x90, .sp=0x02, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0xa5}, {.addr=0x62d5, .value=0xf8}, {.addr=0x62d6, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x62d5, .value=0xf8, .type=IO_READ},
        {.addr=0x62d6, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_012D) {
    const struct CPU_State initial_cpu = {.pc=0xb248, .a=0x63, .x=0xa8, .y=0x52, .sp=0x9f, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xf1}, {.addr=0xb248, .value=0xf8}, {.addr=0xb249, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xb24a, .a=0x63, .x=0xf1, .y=0x52, .sp=0x9f, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xf1}, {.addr=0xb248, .value=0xf8}, {.addr=0xb249, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb248, .value=0xf8, .type=IO_READ},
        {.addr=0xb249, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_012E) {
    const struct CPU_State initial_cpu = {.pc=0xfd1d, .a=0xb4, .x=0x19, .y=0x1e, .sp=0x2d, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x57}, {.addr=0xfd1d, .value=0xf8}, {.addr=0xfd1e, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xfd1f, .a=0xb4, .x=0x57, .y=0x1e, .sp=0x2d, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x57}, {.addr=0xfd1d, .value=0xf8}, {.addr=0xfd1e, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd1d, .value=0xf8, .type=IO_READ},
        {.addr=0xfd1e, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_012F) {
    const struct CPU_State initial_cpu = {.pc=0x22db, .a=0x6f, .x=0xf4, .y=0xa3, .sp=0x65, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xb0}, {.addr=0x22db, .value=0xf8}, {.addr=0x22dc, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x22dd, .a=0x6f, .x=0xb0, .y=0xa3, .sp=0x65, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xb0}, {.addr=0x22db, .value=0xf8}, {.addr=0x22dc, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x22db, .value=0xf8, .type=IO_READ},
        {.addr=0x22dc, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0130) {
    const struct CPU_State initial_cpu = {.pc=0xabe1, .a=0xfa, .x=0xff, .y=0x16, .sp=0x20, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xf8}, {.addr=0xabe1, .value=0xf8}, {.addr=0xabe2, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xabe3, .a=0xfa, .x=0xf8, .y=0x16, .sp=0x20, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xf8}, {.addr=0xabe1, .value=0xf8}, {.addr=0xabe2, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xabe1, .value=0xf8, .type=IO_READ},
        {.addr=0xabe2, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0131) {
    const struct CPU_State initial_cpu = {.pc=0xc3b0, .a=0x49, .x=0xf0, .y=0x85, .sp=0xde, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xf0}, {.addr=0xc3b0, .value=0xf8}, {.addr=0xc3b1, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xc3b2, .a=0x49, .x=0xf0, .y=0x85, .sp=0xde, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xf0}, {.addr=0xc3b0, .value=0xf8}, {.addr=0xc3b1, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3b0, .value=0xf8, .type=IO_READ},
        {.addr=0xc3b1, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0132) {
    const struct CPU_State initial_cpu = {.pc=0xcd2d, .a=0x3a, .x=0xbb, .y=0x05, .sp=0x9e, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xef}, {.addr=0xcd2d, .value=0xf8}, {.addr=0xcd2e, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xcd2f, .a=0x3a, .x=0xef, .y=0x05, .sp=0x9e, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xef}, {.addr=0xcd2d, .value=0xf8}, {.addr=0xcd2e, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd2d, .value=0xf8, .type=IO_READ},
        {.addr=0xcd2e, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0133) {
    const struct CPU_State initial_cpu = {.pc=0xa3a4, .a=0xc0, .x=0x10, .y=0x09, .sp=0x39, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x83}, {.addr=0xa3a4, .value=0xf8}, {.addr=0xa3a5, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xa3a6, .a=0xc0, .x=0x83, .y=0x09, .sp=0x39, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x83}, {.addr=0xa3a4, .value=0xf8}, {.addr=0xa3a5, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3a4, .value=0xf8, .type=IO_READ},
        {.addr=0xa3a5, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0134) {
    const struct CPU_State initial_cpu = {.pc=0x0545, .a=0x80, .x=0x90, .y=0x99, .sp=0xd4, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x3e}, {.addr=0x0545, .value=0xf8}, {.addr=0x0546, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x0547, .a=0x80, .x=0x3e, .y=0x99, .sp=0xd4, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x3e}, {.addr=0x0545, .value=0xf8}, {.addr=0x0546, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x0545, .value=0xf8, .type=IO_READ},
        {.addr=0x0546, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0136) {
    const struct CPU_State initial_cpu = {.pc=0xfd82, .a=0xb2, .x=0x03, .y=0x7b, .sp=0x92, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xca}, {.addr=0xfd82, .value=0xf8}, {.addr=0xfd83, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xfd84, .a=0xb2, .x=0xca, .y=0x7b, .sp=0x92, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xca}, {.addr=0xfd82, .value=0xf8}, {.addr=0xfd83, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd82, .value=0xf8, .type=IO_READ},
        {.addr=0xfd83, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0137) {
    const struct CPU_State initial_cpu = {.pc=0x744f, .a=0x8a, .x=0xdd, .y=0x66, .sp=0x70, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x49}, {.addr=0x744f, .value=0xf8}, {.addr=0x7450, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x7451, .a=0x8a, .x=0x49, .y=0x66, .sp=0x70, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x49}, {.addr=0x744f, .value=0xf8}, {.addr=0x7450, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x744f, .value=0xf8, .type=IO_READ},
        {.addr=0x7450, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0138) {
    const struct CPU_State initial_cpu = {.pc=0xfc43, .a=0x75, .x=0x9d, .y=0x4c, .sp=0x41, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0x58}, {.addr=0xfc43, .value=0xf8}, {.addr=0xfc44, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xfc45, .a=0x75, .x=0x58, .y=0x4c, .sp=0x41, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0x58}, {.addr=0xfc43, .value=0xf8}, {.addr=0xfc44, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc43, .value=0xf8, .type=IO_READ},
        {.addr=0xfc44, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0139) {
    const struct CPU_State initial_cpu = {.pc=0xe9c7, .a=0x3a, .x=0xf1, .y=0xc4, .sp=0x72, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x72}, {.addr=0xe9c7, .value=0xf8}, {.addr=0xe9c8, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xe9c9, .a=0x3a, .x=0x72, .y=0xc4, .sp=0x72, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x72}, {.addr=0xe9c7, .value=0xf8}, {.addr=0xe9c8, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9c7, .value=0xf8, .type=IO_READ},
        {.addr=0xe9c8, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_013B) {
    const struct CPU_State initial_cpu = {.pc=0x7160, .a=0x8a, .x=0x7a, .y=0x6a, .sp=0xaf, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x06}, {.addr=0x7160, .value=0xf8}, {.addr=0x7161, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x7162, .a=0x8a, .x=0x06, .y=0x6a, .sp=0xaf, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x06}, {.addr=0x7160, .value=0xf8}, {.addr=0x7161, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x7160, .value=0xf8, .type=IO_READ},
        {.addr=0x7161, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_013C) {
    const struct CPU_State initial_cpu = {.pc=0x2c3c, .a=0xe3, .x=0x6f, .y=0x67, .sp=0x67, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xc1}, {.addr=0x2c3c, .value=0xf8}, {.addr=0x2c3d, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x2c3e, .a=0xe3, .x=0xc1, .y=0x67, .sp=0x67, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xc1}, {.addr=0x2c3c, .value=0xf8}, {.addr=0x2c3d, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c3c, .value=0xf8, .type=IO_READ},
        {.addr=0x2c3d, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_013D) {
    const struct CPU_State initial_cpu = {.pc=0x6630, .a=0x6a, .x=0x2b, .y=0x16, .sp=0x99, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x3c}, {.addr=0x6630, .value=0xf8}, {.addr=0x6631, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x6632, .a=0x6a, .x=0x3c, .y=0x16, .sp=0x99, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x3c}, {.addr=0x6630, .value=0xf8}, {.addr=0x6631, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6630, .value=0xf8, .type=IO_READ},
        {.addr=0x6631, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_013E) {
    const struct CPU_State initial_cpu = {.pc=0x5b46, .a=0xc9, .x=0xc0, .y=0xba, .sp=0x0d, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xc5}, {.addr=0x5b46, .value=0xf8}, {.addr=0x5b47, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x5b48, .a=0xc9, .x=0xc5, .y=0xba, .sp=0x0d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xc5}, {.addr=0x5b46, .value=0xf8}, {.addr=0x5b47, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b46, .value=0xf8, .type=IO_READ},
        {.addr=0x5b47, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_013F) {
    const struct CPU_State initial_cpu = {.pc=0xd575, .a=0x92, .x=0x2b, .y=0x9d, .sp=0x2f, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x27}, {.addr=0xd575, .value=0xf8}, {.addr=0xd576, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xd577, .a=0x92, .x=0x27, .y=0x9d, .sp=0x2f, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x27}, {.addr=0xd575, .value=0xf8}, {.addr=0xd576, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xd575, .value=0xf8, .type=IO_READ},
        {.addr=0xd576, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0140) {
    const struct CPU_State initial_cpu = {.pc=0xca8d, .a=0xf7, .x=0x68, .y=0x94, .sp=0x1c, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xa0}, {.addr=0xca8d, .value=0xf8}, {.addr=0xca8e, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xca8f, .a=0xf7, .x=0xa0, .y=0x94, .sp=0x1c, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xa0}, {.addr=0xca8d, .value=0xf8}, {.addr=0xca8e, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xca8d, .value=0xf8, .type=IO_READ},
        {.addr=0xca8e, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0141) {
    const struct CPU_State initial_cpu = {.pc=0xc17b, .a=0x9f, .x=0x9f, .y=0x84, .sp=0x70, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x24}, {.addr=0xc17b, .value=0xf8}, {.addr=0xc17c, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xc17d, .a=0x9f, .x=0x24, .y=0x84, .sp=0x70, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x24}, {.addr=0xc17b, .value=0xf8}, {.addr=0xc17c, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc17b, .value=0xf8, .type=IO_READ},
        {.addr=0xc17c, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0142) {
    const struct CPU_State initial_cpu = {.pc=0x0e13, .a=0xef, .x=0xf9, .y=0xd5, .sp=0xc5, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x3c}, {.addr=0x0e13, .value=0xf8}, {.addr=0x0e14, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x0e15, .a=0xef, .x=0x3c, .y=0xd5, .sp=0xc5, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x3c}, {.addr=0x0e13, .value=0xf8}, {.addr=0x0e14, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e13, .value=0xf8, .type=IO_READ},
        {.addr=0x0e14, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0143) {
    const struct CPU_State initial_cpu = {.pc=0x2917, .a=0x29, .x=0x1d, .y=0xb8, .sp=0xc7, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x62}, {.addr=0x2917, .value=0xf8}, {.addr=0x2918, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x2919, .a=0x29, .x=0x62, .y=0xb8, .sp=0xc7, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x62}, {.addr=0x2917, .value=0xf8}, {.addr=0x2918, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x2917, .value=0xf8, .type=IO_READ},
        {.addr=0x2918, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0144) {
    const struct CPU_State initial_cpu = {.pc=0x6421, .a=0xdb, .x=0x3f, .y=0x51, .sp=0xaa, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x04}, {.addr=0x6421, .value=0xf8}, {.addr=0x6422, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x6423, .a=0xdb, .x=0x04, .y=0x51, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x04}, {.addr=0x6421, .value=0xf8}, {.addr=0x6422, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x6421, .value=0xf8, .type=IO_READ},
        {.addr=0x6422, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0145) {
    const struct CPU_State initial_cpu = {.pc=0x8167, .a=0x22, .x=0x5d, .y=0x12, .sp=0xb6, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xc7}, {.addr=0x8167, .value=0xf8}, {.addr=0x8168, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x8169, .a=0x22, .x=0xc7, .y=0x12, .sp=0xb6, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xc7}, {.addr=0x8167, .value=0xf8}, {.addr=0x8168, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8167, .value=0xf8, .type=IO_READ},
        {.addr=0x8168, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0146) {
    const struct CPU_State initial_cpu = {.pc=0x2a56, .a=0xfe, .x=0x87, .y=0xc4, .sp=0x09, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x7b}, {.addr=0x2a56, .value=0xf8}, {.addr=0x2a57, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x2a58, .a=0xfe, .x=0x7b, .y=0xc4, .sp=0x09, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x7b}, {.addr=0x2a56, .value=0xf8}, {.addr=0x2a57, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a56, .value=0xf8, .type=IO_READ},
        {.addr=0x2a57, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0147) {
    const struct CPU_State initial_cpu = {.pc=0x94ee, .a=0xdb, .x=0x37, .y=0xf2, .sp=0x0e, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x01}, {.addr=0x94ee, .value=0xf8}, {.addr=0x94ef, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x94f0, .a=0xdb, .x=0x01, .y=0xf2, .sp=0x0e, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x01}, {.addr=0x94ee, .value=0xf8}, {.addr=0x94ef, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x94ee, .value=0xf8, .type=IO_READ},
        {.addr=0x94ef, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0148) {
    const struct CPU_State initial_cpu = {.pc=0x649a, .a=0xca, .x=0xf9, .y=0x2d, .sp=0x5b, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x0f}, {.addr=0x649a, .value=0xf8}, {.addr=0x649b, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x649c, .a=0xca, .x=0x0f, .y=0x2d, .sp=0x5b, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x0f}, {.addr=0x649a, .value=0xf8}, {.addr=0x649b, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x649a, .value=0xf8, .type=IO_READ},
        {.addr=0x649b, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0149) {
    const struct CPU_State initial_cpu = {.pc=0x53fc, .a=0xc1, .x=0x35, .y=0x64, .sp=0x0f, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xf7}, {.addr=0x53fc, .value=0xf8}, {.addr=0x53fd, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x53fe, .a=0xc1, .x=0xf7, .y=0x64, .sp=0x0f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xf7}, {.addr=0x53fc, .value=0xf8}, {.addr=0x53fd, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x53fc, .value=0xf8, .type=IO_READ},
        {.addr=0x53fd, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd28d, .a=0x98, .x=0xb9, .y=0xc5, .sp=0x3e, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x66}, {.addr=0xd28d, .value=0xf8}, {.addr=0xd28e, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xd28f, .a=0x98, .x=0x66, .y=0xc5, .sp=0x3e, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x66}, {.addr=0xd28d, .value=0xf8}, {.addr=0xd28e, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xd28d, .value=0xf8, .type=IO_READ},
        {.addr=0xd28e, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_014B) {
    const struct CPU_State initial_cpu = {.pc=0x1b26, .a=0xd0, .x=0xa7, .y=0x24, .sp=0x72, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xbc}, {.addr=0x1b26, .value=0xf8}, {.addr=0x1b27, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x1b28, .a=0xd0, .x=0xbc, .y=0x24, .sp=0x72, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xbc}, {.addr=0x1b26, .value=0xf8}, {.addr=0x1b27, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b26, .value=0xf8, .type=IO_READ},
        {.addr=0x1b27, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_014C) {
    const struct CPU_State initial_cpu = {.pc=0x6bbb, .a=0x08, .x=0x63, .y=0x3b, .sp=0xc8, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xf1}, {.addr=0x6bbb, .value=0xf8}, {.addr=0x6bbc, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x6bbd, .a=0x08, .x=0xf1, .y=0x3b, .sp=0xc8, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xf1}, {.addr=0x6bbb, .value=0xf8}, {.addr=0x6bbc, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bbb, .value=0xf8, .type=IO_READ},
        {.addr=0x6bbc, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_014D) {
    const struct CPU_State initial_cpu = {.pc=0x4163, .a=0x6e, .x=0xd4, .y=0x99, .sp=0xb0, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x3c}, {.addr=0x4163, .value=0xf8}, {.addr=0x4164, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x4165, .a=0x6e, .x=0x3c, .y=0x99, .sp=0xb0, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x3c}, {.addr=0x4163, .value=0xf8}, {.addr=0x4164, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4163, .value=0xf8, .type=IO_READ},
        {.addr=0x4164, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_014E) {
    const struct CPU_State initial_cpu = {.pc=0x47ae, .a=0xc8, .x=0x0e, .y=0x77, .sp=0x87, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xd6}, {.addr=0x47ae, .value=0xf8}, {.addr=0x47af, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x47b0, .a=0xc8, .x=0xd6, .y=0x77, .sp=0x87, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xd6}, {.addr=0x47ae, .value=0xf8}, {.addr=0x47af, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x47ae, .value=0xf8, .type=IO_READ},
        {.addr=0x47af, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4702, .a=0x5a, .x=0x0e, .y=0xb6, .sp=0x07, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xa1}, {.addr=0x4702, .value=0xf8}, {.addr=0x4703, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x4704, .a=0x5a, .x=0xa1, .y=0xb6, .sp=0x07, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xa1}, {.addr=0x4702, .value=0xf8}, {.addr=0x4703, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x4702, .value=0xf8, .type=IO_READ},
        {.addr=0x4703, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0150) {
    const struct CPU_State initial_cpu = {.pc=0x3ff5, .a=0xf0, .x=0xc6, .y=0x48, .sp=0xbf, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x47}, {.addr=0x3ff5, .value=0xf8}, {.addr=0x3ff6, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x3ff7, .a=0xf0, .x=0x47, .y=0x48, .sp=0xbf, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x47}, {.addr=0x3ff5, .value=0xf8}, {.addr=0x3ff6, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ff5, .value=0xf8, .type=IO_READ},
        {.addr=0x3ff6, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0151) {
    const struct CPU_State initial_cpu = {.pc=0xf257, .a=0x48, .x=0x3d, .y=0x23, .sp=0x86, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x63}, {.addr=0xf257, .value=0xf8}, {.addr=0xf258, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xf259, .a=0x48, .x=0x63, .y=0x23, .sp=0x86, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x63}, {.addr=0xf257, .value=0xf8}, {.addr=0xf258, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf257, .value=0xf8, .type=IO_READ},
        {.addr=0xf258, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0152) {
    const struct CPU_State initial_cpu = {.pc=0xbcf7, .a=0x5e, .x=0xb5, .y=0xb2, .sp=0x24, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xf7}, {.addr=0xbcf7, .value=0xf8}, {.addr=0xbcf8, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xbcf9, .a=0x5e, .x=0xf7, .y=0xb2, .sp=0x24, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xf7}, {.addr=0xbcf7, .value=0xf8}, {.addr=0xbcf8, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcf7, .value=0xf8, .type=IO_READ},
        {.addr=0xbcf8, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0153) {
    const struct CPU_State initial_cpu = {.pc=0xf573, .a=0xb2, .x=0x3f, .y=0x38, .sp=0xd2, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x3d}, {.addr=0xf573, .value=0xf8}, {.addr=0xf574, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xf575, .a=0xb2, .x=0x3d, .y=0x38, .sp=0xd2, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x3d}, {.addr=0xf573, .value=0xf8}, {.addr=0xf574, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xf573, .value=0xf8, .type=IO_READ},
        {.addr=0xf574, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0154) {
    const struct CPU_State initial_cpu = {.pc=0x089d, .a=0x7c, .x=0x65, .y=0x0f, .sp=0x8c, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x24}, {.addr=0x089d, .value=0xf8}, {.addr=0x089e, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x089f, .a=0x7c, .x=0x24, .y=0x0f, .sp=0x8c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x24}, {.addr=0x089d, .value=0xf8}, {.addr=0x089e, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x089d, .value=0xf8, .type=IO_READ},
        {.addr=0x089e, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0155) {
    const struct CPU_State initial_cpu = {.pc=0x82ee, .a=0xd2, .x=0x7e, .y=0x4f, .sp=0x19, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xb1}, {.addr=0x82ee, .value=0xf8}, {.addr=0x82ef, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x82f0, .a=0xd2, .x=0xb1, .y=0x4f, .sp=0x19, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xb1}, {.addr=0x82ee, .value=0xf8}, {.addr=0x82ef, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x82ee, .value=0xf8, .type=IO_READ},
        {.addr=0x82ef, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0156) {
    const struct CPU_State initial_cpu = {.pc=0x762c, .a=0x01, .x=0xb3, .y=0x8f, .sp=0xba, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xb8}, {.addr=0x762c, .value=0xf8}, {.addr=0x762d, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x762e, .a=0x01, .x=0xb8, .y=0x8f, .sp=0xba, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xb8}, {.addr=0x762c, .value=0xf8}, {.addr=0x762d, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x762c, .value=0xf8, .type=IO_READ},
        {.addr=0x762d, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0157) {
    const struct CPU_State initial_cpu = {.pc=0xf4a7, .a=0xe3, .x=0xf9, .y=0x3c, .sp=0x8a, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x07}, {.addr=0xf4a7, .value=0xf8}, {.addr=0xf4a8, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xf4a9, .a=0xe3, .x=0x07, .y=0x3c, .sp=0x8a, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x07}, {.addr=0xf4a7, .value=0xf8}, {.addr=0xf4a8, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4a7, .value=0xf8, .type=IO_READ},
        {.addr=0xf4a8, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0158) {
    const struct CPU_State initial_cpu = {.pc=0x061d, .a=0x25, .x=0xb7, .y=0x64, .sp=0x34, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xee}, {.addr=0x061d, .value=0xf8}, {.addr=0x061e, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x061f, .a=0x25, .x=0xee, .y=0x64, .sp=0x34, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xee}, {.addr=0x061d, .value=0xf8}, {.addr=0x061e, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x061d, .value=0xf8, .type=IO_READ},
        {.addr=0x061e, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0159) {
    const struct CPU_State initial_cpu = {.pc=0x74a6, .a=0x73, .x=0x8d, .y=0x02, .sp=0xf1, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xda}, {.addr=0x74a6, .value=0xf8}, {.addr=0x74a7, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x74a8, .a=0x73, .x=0xda, .y=0x02, .sp=0xf1, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xda}, {.addr=0x74a6, .value=0xf8}, {.addr=0x74a7, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x74a6, .value=0xf8, .type=IO_READ},
        {.addr=0x74a7, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_015A) {
    const struct CPU_State initial_cpu = {.pc=0x47e3, .a=0x1b, .x=0xa1, .y=0x95, .sp=0xcb, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xbc}, {.addr=0x47e3, .value=0xf8}, {.addr=0x47e4, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x47e5, .a=0x1b, .x=0xbc, .y=0x95, .sp=0xcb, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xbc}, {.addr=0x47e3, .value=0xf8}, {.addr=0x47e4, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x47e3, .value=0xf8, .type=IO_READ},
        {.addr=0x47e4, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_015B) {
    const struct CPU_State initial_cpu = {.pc=0x3238, .a=0x08, .x=0xb1, .y=0x34, .sp=0x2e, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x3b}, {.addr=0x3238, .value=0xf8}, {.addr=0x3239, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x323a, .a=0x08, .x=0x3b, .y=0x34, .sp=0x2e, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x3b}, {.addr=0x3238, .value=0xf8}, {.addr=0x3239, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x3238, .value=0xf8, .type=IO_READ},
        {.addr=0x3239, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_015C) {
    const struct CPU_State initial_cpu = {.pc=0x05e2, .a=0x61, .x=0x6d, .y=0x59, .sp=0x25, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xc0}, {.addr=0x05e2, .value=0xf8}, {.addr=0x05e3, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x05e4, .a=0x61, .x=0xc0, .y=0x59, .sp=0x25, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xc0}, {.addr=0x05e2, .value=0xf8}, {.addr=0x05e3, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x05e2, .value=0xf8, .type=IO_READ},
        {.addr=0x05e3, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_015D) {
    const struct CPU_State initial_cpu = {.pc=0x0ea4, .a=0x64, .x=0xc2, .y=0x6e, .sp=0x82, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x28}, {.addr=0x0ea4, .value=0xf8}, {.addr=0x0ea5, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x0ea6, .a=0x64, .x=0x28, .y=0x6e, .sp=0x82, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x28}, {.addr=0x0ea4, .value=0xf8}, {.addr=0x0ea5, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ea4, .value=0xf8, .type=IO_READ},
        {.addr=0x0ea5, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_015E) {
    const struct CPU_State initial_cpu = {.pc=0x3eb3, .a=0xdb, .x=0x83, .y=0xa5, .sp=0xee, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x72}, {.addr=0x3eb3, .value=0xf8}, {.addr=0x3eb4, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x3eb5, .a=0xdb, .x=0x72, .y=0xa5, .sp=0xee, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x72}, {.addr=0x3eb3, .value=0xf8}, {.addr=0x3eb4, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3eb3, .value=0xf8, .type=IO_READ},
        {.addr=0x3eb4, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_015F) {
    const struct CPU_State initial_cpu = {.pc=0x6acd, .a=0x56, .x=0xf2, .y=0x36, .sp=0xd3, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x31}, {.addr=0x6acd, .value=0xf8}, {.addr=0x6ace, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x6acf, .a=0x56, .x=0x31, .y=0x36, .sp=0xd3, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x31}, {.addr=0x6acd, .value=0xf8}, {.addr=0x6ace, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6acd, .value=0xf8, .type=IO_READ},
        {.addr=0x6ace, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0160) {
    const struct CPU_State initial_cpu = {.pc=0x706e, .a=0x3b, .x=0x0c, .y=0x27, .sp=0x9d, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0xab}, {.addr=0x706e, .value=0xf8}, {.addr=0x706f, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x7070, .a=0x3b, .x=0xab, .y=0x27, .sp=0x9d, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0xab}, {.addr=0x706e, .value=0xf8}, {.addr=0x706f, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x706e, .value=0xf8, .type=IO_READ},
        {.addr=0x706f, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0161) {
    const struct CPU_State initial_cpu = {.pc=0x44b0, .a=0x15, .x=0xba, .y=0x99, .sp=0xa2, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xb6}, {.addr=0x44b0, .value=0xf8}, {.addr=0x44b1, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x44b2, .a=0x15, .x=0xb6, .y=0x99, .sp=0xa2, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xb6}, {.addr=0x44b0, .value=0xf8}, {.addr=0x44b1, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x44b0, .value=0xf8, .type=IO_READ},
        {.addr=0x44b1, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0162) {
    const struct CPU_State initial_cpu = {.pc=0xf7cd, .a=0x41, .x=0xd1, .y=0x00, .sp=0xc6, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0xe2}, {.addr=0xf7cd, .value=0xf8}, {.addr=0xf7ce, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xf7cf, .a=0x41, .x=0xe2, .y=0x00, .sp=0xc6, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0xe2}, {.addr=0xf7cd, .value=0xf8}, {.addr=0xf7ce, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7cd, .value=0xf8, .type=IO_READ},
        {.addr=0xf7ce, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0163) {
    const struct CPU_State initial_cpu = {.pc=0xe3a9, .a=0xde, .x=0x0b, .y=0x72, .sp=0x09, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xe1}, {.addr=0xe3a9, .value=0xf8}, {.addr=0xe3aa, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xe3ab, .a=0xde, .x=0xe1, .y=0x72, .sp=0x09, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xe1}, {.addr=0xe3a9, .value=0xf8}, {.addr=0xe3aa, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3a9, .value=0xf8, .type=IO_READ},
        {.addr=0xe3aa, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0164) {
    const struct CPU_State initial_cpu = {.pc=0xb46f, .a=0xc3, .x=0x80, .y=0xd3, .sp=0xb7, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x02}, {.addr=0xb46f, .value=0xf8}, {.addr=0xb470, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xb471, .a=0xc3, .x=0x02, .y=0xd3, .sp=0xb7, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x02}, {.addr=0xb46f, .value=0xf8}, {.addr=0xb470, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb46f, .value=0xf8, .type=IO_READ},
        {.addr=0xb470, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0165) {
    const struct CPU_State initial_cpu = {.pc=0x9d99, .a=0x12, .x=0xfb, .y=0x6f, .sp=0x4f, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x2e}, {.addr=0x9d99, .value=0xf8}, {.addr=0x9d9a, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x9d9b, .a=0x12, .x=0x2e, .y=0x6f, .sp=0x4f, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x2e}, {.addr=0x9d99, .value=0xf8}, {.addr=0x9d9a, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d99, .value=0xf8, .type=IO_READ},
        {.addr=0x9d9a, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0166) {
    const struct CPU_State initial_cpu = {.pc=0xbf16, .a=0xa7, .x=0xa3, .y=0x2e, .sp=0x8b, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0xd4}, {.addr=0xbf16, .value=0xf8}, {.addr=0xbf17, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xbf18, .a=0xa7, .x=0xd4, .y=0x2e, .sp=0x8b, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0xd4}, {.addr=0xbf16, .value=0xf8}, {.addr=0xbf17, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf16, .value=0xf8, .type=IO_READ},
        {.addr=0xbf17, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0167) {
    const struct CPU_State initial_cpu = {.pc=0x262f, .a=0x19, .x=0x8d, .y=0x7d, .sp=0x12, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xca}, {.addr=0x262f, .value=0xf8}, {.addr=0x2630, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x2631, .a=0x19, .x=0xca, .y=0x7d, .sp=0x12, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xca}, {.addr=0x262f, .value=0xf8}, {.addr=0x2630, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x262f, .value=0xf8, .type=IO_READ},
        {.addr=0x2630, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0168) {
    const struct CPU_State initial_cpu = {.pc=0x1552, .a=0x8e, .x=0x39, .y=0x2d, .sp=0x75, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xc5}, {.addr=0x1552, .value=0xf8}, {.addr=0x1553, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x1554, .a=0x8e, .x=0xc5, .y=0x2d, .sp=0x75, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xc5}, {.addr=0x1552, .value=0xf8}, {.addr=0x1553, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1552, .value=0xf8, .type=IO_READ},
        {.addr=0x1553, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0169) {
    const struct CPU_State initial_cpu = {.pc=0xc1ae, .a=0x46, .x=0x63, .y=0xa3, .sp=0x5e, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x04}, {.addr=0xc1ae, .value=0xf8}, {.addr=0xc1af, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xc1b0, .a=0x46, .x=0x04, .y=0xa3, .sp=0x5e, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x04}, {.addr=0xc1ae, .value=0xf8}, {.addr=0xc1af, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1ae, .value=0xf8, .type=IO_READ},
        {.addr=0xc1af, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_016A) {
    const struct CPU_State initial_cpu = {.pc=0x41b3, .a=0x3a, .x=0x5c, .y=0xac, .sp=0xd8, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x1f}, {.addr=0x41b3, .value=0xf8}, {.addr=0x41b4, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x41b5, .a=0x3a, .x=0x1f, .y=0xac, .sp=0xd8, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x1f}, {.addr=0x41b3, .value=0xf8}, {.addr=0x41b4, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x41b3, .value=0xf8, .type=IO_READ},
        {.addr=0x41b4, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_016B) {
    const struct CPU_State initial_cpu = {.pc=0x90d6, .a=0xa1, .x=0xaa, .y=0x9a, .sp=0xb7, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x82}, {.addr=0x90d6, .value=0xf8}, {.addr=0x90d7, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x90d8, .a=0xa1, .x=0x82, .y=0x9a, .sp=0xb7, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x82}, {.addr=0x90d6, .value=0xf8}, {.addr=0x90d7, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x90d6, .value=0xf8, .type=IO_READ},
        {.addr=0x90d7, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_016C) {
    const struct CPU_State initial_cpu = {.pc=0xca21, .a=0xeb, .x=0x69, .y=0x5a, .sp=0x99, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x51}, {.addr=0xca21, .value=0xf8}, {.addr=0xca22, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xca23, .a=0xeb, .x=0x51, .y=0x5a, .sp=0x99, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x51}, {.addr=0xca21, .value=0xf8}, {.addr=0xca22, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xca21, .value=0xf8, .type=IO_READ},
        {.addr=0xca22, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_016D) {
    const struct CPU_State initial_cpu = {.pc=0x08be, .a=0xaf, .x=0x9c, .y=0xb7, .sp=0xd8, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x43}, {.addr=0x08be, .value=0xf8}, {.addr=0x08bf, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x08c0, .a=0xaf, .x=0x43, .y=0xb7, .sp=0xd8, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x43}, {.addr=0x08be, .value=0xf8}, {.addr=0x08bf, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x08be, .value=0xf8, .type=IO_READ},
        {.addr=0x08bf, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_016E) {
    const struct CPU_State initial_cpu = {.pc=0x0e89, .a=0x26, .x=0x87, .y=0x1e, .sp=0x46, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xf7}, {.addr=0x0e89, .value=0xf8}, {.addr=0x0e8a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x0e8b, .a=0x26, .x=0xf7, .y=0x1e, .sp=0x46, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xf7}, {.addr=0x0e89, .value=0xf8}, {.addr=0x0e8a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e89, .value=0xf8, .type=IO_READ},
        {.addr=0x0e8a, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_016F) {
    const struct CPU_State initial_cpu = {.pc=0x56e8, .a=0xad, .x=0x51, .y=0xbb, .sp=0x3b, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x1a}, {.addr=0x56e8, .value=0xf8}, {.addr=0x56e9, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x56ea, .a=0xad, .x=0x1a, .y=0xbb, .sp=0x3b, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x1a}, {.addr=0x56e8, .value=0xf8}, {.addr=0x56e9, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x56e8, .value=0xf8, .type=IO_READ},
        {.addr=0x56e9, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0170) {
    const struct CPU_State initial_cpu = {.pc=0xe66a, .a=0xb5, .x=0x2e, .y=0xb5, .sp=0xcf, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x7c}, {.addr=0xe66a, .value=0xf8}, {.addr=0xe66b, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xe66c, .a=0xb5, .x=0x7c, .y=0xb5, .sp=0xcf, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x7c}, {.addr=0xe66a, .value=0xf8}, {.addr=0xe66b, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe66a, .value=0xf8, .type=IO_READ},
        {.addr=0xe66b, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0171) {
    const struct CPU_State initial_cpu = {.pc=0x6673, .a=0x5c, .x=0x99, .y=0x22, .sp=0xa0, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x56}, {.addr=0x6673, .value=0xf8}, {.addr=0x6674, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x6675, .a=0x5c, .x=0x56, .y=0x22, .sp=0xa0, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x56}, {.addr=0x6673, .value=0xf8}, {.addr=0x6674, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6673, .value=0xf8, .type=IO_READ},
        {.addr=0x6674, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0172) {
    const struct CPU_State initial_cpu = {.pc=0x0ddd, .a=0xb9, .x=0x8a, .y=0x4b, .sp=0xae, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x36}, {.addr=0x0ddd, .value=0xf8}, {.addr=0x0dde, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x0ddf, .a=0xb9, .x=0x36, .y=0x4b, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x36}, {.addr=0x0ddd, .value=0xf8}, {.addr=0x0dde, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ddd, .value=0xf8, .type=IO_READ},
        {.addr=0x0dde, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0173) {
    const struct CPU_State initial_cpu = {.pc=0xa0c7, .a=0xe8, .x=0x3f, .y=0x64, .sp=0xbf, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xcd}, {.addr=0xa0c7, .value=0xf8}, {.addr=0xa0c8, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xa0c9, .a=0xe8, .x=0xcd, .y=0x64, .sp=0xbf, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xcd}, {.addr=0xa0c7, .value=0xf8}, {.addr=0xa0c8, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0c7, .value=0xf8, .type=IO_READ},
        {.addr=0xa0c8, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0174) {
    const struct CPU_State initial_cpu = {.pc=0x971e, .a=0x01, .x=0xda, .y=0xa6, .sp=0x8f, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x7d}, {.addr=0x971e, .value=0xf8}, {.addr=0x971f, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x9720, .a=0x01, .x=0x7d, .y=0xa6, .sp=0x8f, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x7d}, {.addr=0x971e, .value=0xf8}, {.addr=0x971f, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x971e, .value=0xf8, .type=IO_READ},
        {.addr=0x971f, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0175) {
    const struct CPU_State initial_cpu = {.pc=0x7e77, .a=0xe2, .x=0xcf, .y=0x54, .sp=0x6b, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x23}, {.addr=0x7e77, .value=0xf8}, {.addr=0x7e78, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x7e79, .a=0xe2, .x=0x23, .y=0x54, .sp=0x6b, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x23}, {.addr=0x7e77, .value=0xf8}, {.addr=0x7e78, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e77, .value=0xf8, .type=IO_READ},
        {.addr=0x7e78, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0176) {
    const struct CPU_State initial_cpu = {.pc=0xb256, .a=0x41, .x=0xdc, .y=0xc4, .sp=0x5d, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xac}, {.addr=0xb256, .value=0xf8}, {.addr=0xb257, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xb258, .a=0x41, .x=0xac, .y=0xc4, .sp=0x5d, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xac}, {.addr=0xb256, .value=0xf8}, {.addr=0xb257, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xb256, .value=0xf8, .type=IO_READ},
        {.addr=0xb257, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0177) {
    const struct CPU_State initial_cpu = {.pc=0x5046, .a=0x96, .x=0x5b, .y=0xc1, .sp=0x9b, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0xf7}, {.addr=0x5046, .value=0xf8}, {.addr=0x5047, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x5048, .a=0x96, .x=0xf7, .y=0xc1, .sp=0x9b, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0xf7}, {.addr=0x5046, .value=0xf8}, {.addr=0x5047, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5046, .value=0xf8, .type=IO_READ},
        {.addr=0x5047, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0178) {
    const struct CPU_State initial_cpu = {.pc=0x165f, .a=0x9f, .x=0x43, .y=0xd9, .sp=0x45, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xd0}, {.addr=0x165f, .value=0xf8}, {.addr=0x1660, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x1661, .a=0x9f, .x=0xd0, .y=0xd9, .sp=0x45, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xd0}, {.addr=0x165f, .value=0xf8}, {.addr=0x1660, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x165f, .value=0xf8, .type=IO_READ},
        {.addr=0x1660, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0179) {
    const struct CPU_State initial_cpu = {.pc=0xf720, .a=0x28, .x=0x70, .y=0xe8, .sp=0xe7, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0xd2}, {.addr=0xf720, .value=0xf8}, {.addr=0xf721, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xf722, .a=0x28, .x=0xd2, .y=0xe8, .sp=0xe7, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0xd2}, {.addr=0xf720, .value=0xf8}, {.addr=0xf721, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf720, .value=0xf8, .type=IO_READ},
        {.addr=0xf721, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_017A) {
    const struct CPU_State initial_cpu = {.pc=0x529a, .a=0x13, .x=0x69, .y=0x4a, .sp=0x2e, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x64}, {.addr=0x529a, .value=0xf8}, {.addr=0x529b, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x529c, .a=0x13, .x=0x64, .y=0x4a, .sp=0x2e, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x64}, {.addr=0x529a, .value=0xf8}, {.addr=0x529b, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x529a, .value=0xf8, .type=IO_READ},
        {.addr=0x529b, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_017B) {
    const struct CPU_State initial_cpu = {.pc=0xb9b5, .a=0x69, .x=0xf0, .y=0xc1, .sp=0xa3, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0xce}, {.addr=0xb9b5, .value=0xf8}, {.addr=0xb9b6, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xb9b7, .a=0x69, .x=0xce, .y=0xc1, .sp=0xa3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0xce}, {.addr=0xb9b5, .value=0xf8}, {.addr=0xb9b6, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9b5, .value=0xf8, .type=IO_READ},
        {.addr=0xb9b6, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_017C) {
    const struct CPU_State initial_cpu = {.pc=0x4e9c, .a=0x16, .x=0x1e, .y=0xaa, .sp=0xe7, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x6d}, {.addr=0x4e9c, .value=0xf8}, {.addr=0x4e9d, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x4e9e, .a=0x16, .x=0x6d, .y=0xaa, .sp=0xe7, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x6d}, {.addr=0x4e9c, .value=0xf8}, {.addr=0x4e9d, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e9c, .value=0xf8, .type=IO_READ},
        {.addr=0x4e9d, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_017D) {
    const struct CPU_State initial_cpu = {.pc=0xc503, .a=0x4f, .x=0x8d, .y=0x63, .sp=0xe1, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xc2}, {.addr=0xc503, .value=0xf8}, {.addr=0xc504, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xc505, .a=0x4f, .x=0xc2, .y=0x63, .sp=0xe1, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xc2}, {.addr=0xc503, .value=0xf8}, {.addr=0xc504, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc503, .value=0xf8, .type=IO_READ},
        {.addr=0xc504, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_017E) {
    const struct CPU_State initial_cpu = {.pc=0xf753, .a=0xdb, .x=0xb2, .y=0x1b, .sp=0x9b, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x20}, {.addr=0xf753, .value=0xf8}, {.addr=0xf754, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xf755, .a=0xdb, .x=0x20, .y=0x1b, .sp=0x9b, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x20}, {.addr=0xf753, .value=0xf8}, {.addr=0xf754, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xf753, .value=0xf8, .type=IO_READ},
        {.addr=0xf754, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_017F) {
    const struct CPU_State initial_cpu = {.pc=0x7b30, .a=0x42, .x=0xd7, .y=0xbc, .sp=0x42, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x8e}, {.addr=0x7b30, .value=0xf8}, {.addr=0x7b31, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x7b32, .a=0x42, .x=0x8e, .y=0xbc, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x8e}, {.addr=0x7b30, .value=0xf8}, {.addr=0x7b31, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b30, .value=0xf8, .type=IO_READ},
        {.addr=0x7b31, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0180) {
    const struct CPU_State initial_cpu = {.pc=0x7eea, .a=0xcc, .x=0x95, .y=0xc6, .sp=0x21, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x75}, {.addr=0x7eea, .value=0xf8}, {.addr=0x7eeb, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x7eec, .a=0xcc, .x=0x75, .y=0xc6, .sp=0x21, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x75}, {.addr=0x7eea, .value=0xf8}, {.addr=0x7eeb, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eea, .value=0xf8, .type=IO_READ},
        {.addr=0x7eeb, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0181) {
    const struct CPU_State initial_cpu = {.pc=0x99cc, .a=0x57, .x=0x54, .y=0xc7, .sp=0x06, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x8f}, {.addr=0x99cc, .value=0xf8}, {.addr=0x99cd, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x99ce, .a=0x57, .x=0x8f, .y=0xc7, .sp=0x06, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x8f}, {.addr=0x99cc, .value=0xf8}, {.addr=0x99cd, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x99cc, .value=0xf8, .type=IO_READ},
        {.addr=0x99cd, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0182) {
    const struct CPU_State initial_cpu = {.pc=0x15c6, .a=0x64, .x=0xd4, .y=0xa7, .sp=0xf9, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x53}, {.addr=0x15c6, .value=0xf8}, {.addr=0x15c7, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x15c8, .a=0x64, .x=0x53, .y=0xa7, .sp=0xf9, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x53}, {.addr=0x15c6, .value=0xf8}, {.addr=0x15c7, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x15c6, .value=0xf8, .type=IO_READ},
        {.addr=0x15c7, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0183) {
    const struct CPU_State initial_cpu = {.pc=0xab2f, .a=0xff, .x=0xbf, .y=0x07, .sp=0xff, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xc5}, {.addr=0xab2f, .value=0xf8}, {.addr=0xab30, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xab31, .a=0xff, .x=0xc5, .y=0x07, .sp=0xff, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xc5}, {.addr=0xab2f, .value=0xf8}, {.addr=0xab30, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xab2f, .value=0xf8, .type=IO_READ},
        {.addr=0xab30, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0184) {
    const struct CPU_State initial_cpu = {.pc=0x2b17, .a=0xf3, .x=0x01, .y=0x56, .sp=0xc9, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x0f}, {.addr=0x2b17, .value=0xf8}, {.addr=0x2b18, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x2b19, .a=0xf3, .x=0x0f, .y=0x56, .sp=0xc9, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x0f}, {.addr=0x2b17, .value=0xf8}, {.addr=0x2b18, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b17, .value=0xf8, .type=IO_READ},
        {.addr=0x2b18, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0185) {
    const struct CPU_State initial_cpu = {.pc=0x706c, .a=0xe1, .x=0x12, .y=0x12, .sp=0x1f, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xe0}, {.addr=0x706c, .value=0xf8}, {.addr=0x706d, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x706e, .a=0xe1, .x=0xe0, .y=0x12, .sp=0x1f, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xe0}, {.addr=0x706c, .value=0xf8}, {.addr=0x706d, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x706c, .value=0xf8, .type=IO_READ},
        {.addr=0x706d, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb8b1, .a=0x73, .x=0x62, .y=0x23, .sp=0xda, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xb7}, {.addr=0xb8b1, .value=0xf8}, {.addr=0xb8b2, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xb8b3, .a=0x73, .x=0xb7, .y=0x23, .sp=0xda, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xb7}, {.addr=0xb8b1, .value=0xf8}, {.addr=0xb8b2, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8b1, .value=0xf8, .type=IO_READ},
        {.addr=0xb8b2, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0187) {
    const struct CPU_State initial_cpu = {.pc=0x290b, .a=0x76, .x=0xfc, .y=0xc3, .sp=0x54, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xfb}, {.addr=0x290b, .value=0xf8}, {.addr=0x290c, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x290d, .a=0x76, .x=0xfb, .y=0xc3, .sp=0x54, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xfb}, {.addr=0x290b, .value=0xf8}, {.addr=0x290c, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x290b, .value=0xf8, .type=IO_READ},
        {.addr=0x290c, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0189) {
    const struct CPU_State initial_cpu = {.pc=0x4ad8, .a=0x2e, .x=0x84, .y=0xf2, .sp=0xa8, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xe5}, {.addr=0x4ad8, .value=0xf8}, {.addr=0x4ad9, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x4ada, .a=0x2e, .x=0xe5, .y=0xf2, .sp=0xa8, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xe5}, {.addr=0x4ad8, .value=0xf8}, {.addr=0x4ad9, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ad8, .value=0xf8, .type=IO_READ},
        {.addr=0x4ad9, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_018B) {
    const struct CPU_State initial_cpu = {.pc=0xe1f6, .a=0x7f, .x=0x98, .y=0xe4, .sp=0xad, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x26}, {.addr=0xe1f6, .value=0xf8}, {.addr=0xe1f7, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xe1f8, .a=0x7f, .x=0x26, .y=0xe4, .sp=0xad, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x26}, {.addr=0xe1f6, .value=0xf8}, {.addr=0xe1f7, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1f6, .value=0xf8, .type=IO_READ},
        {.addr=0xe1f7, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_018C) {
    const struct CPU_State initial_cpu = {.pc=0xa228, .a=0xd5, .x=0x0a, .y=0x74, .sp=0xd3, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x32}, {.addr=0xa228, .value=0xf8}, {.addr=0xa229, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xa22a, .a=0xd5, .x=0x32, .y=0x74, .sp=0xd3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x32}, {.addr=0xa228, .value=0xf8}, {.addr=0xa229, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xa228, .value=0xf8, .type=IO_READ},
        {.addr=0xa229, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_018D) {
    const struct CPU_State initial_cpu = {.pc=0x8c12, .a=0x2a, .x=0x59, .y=0x25, .sp=0x0a, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x9b}, {.addr=0x8c12, .value=0xf8}, {.addr=0x8c13, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x8c14, .a=0x2a, .x=0x9b, .y=0x25, .sp=0x0a, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x9b}, {.addr=0x8c12, .value=0xf8}, {.addr=0x8c13, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c12, .value=0xf8, .type=IO_READ},
        {.addr=0x8c13, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_018E) {
    const struct CPU_State initial_cpu = {.pc=0x0478, .a=0x31, .x=0xa9, .y=0x52, .sp=0x99, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0xe1}, {.addr=0x0478, .value=0xf8}, {.addr=0x0479, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x047a, .a=0x31, .x=0xe1, .y=0x52, .sp=0x99, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0xe1}, {.addr=0x0478, .value=0xf8}, {.addr=0x0479, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x0478, .value=0xf8, .type=IO_READ},
        {.addr=0x0479, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_018F) {
    const struct CPU_State initial_cpu = {.pc=0x0991, .a=0xc5, .x=0xd3, .y=0x44, .sp=0x2f, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xc8}, {.addr=0x0991, .value=0xf8}, {.addr=0x0992, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x0993, .a=0xc5, .x=0xc8, .y=0x44, .sp=0x2f, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xc8}, {.addr=0x0991, .value=0xf8}, {.addr=0x0992, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x0991, .value=0xf8, .type=IO_READ},
        {.addr=0x0992, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0190) {
    const struct CPU_State initial_cpu = {.pc=0xca83, .a=0xb6, .x=0x36, .y=0x36, .sp=0x80, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x5d}, {.addr=0xca83, .value=0xf8}, {.addr=0xca84, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xca85, .a=0xb6, .x=0x5d, .y=0x36, .sp=0x80, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x5d}, {.addr=0xca83, .value=0xf8}, {.addr=0xca84, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xca83, .value=0xf8, .type=IO_READ},
        {.addr=0xca84, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0191) {
    const struct CPU_State initial_cpu = {.pc=0x6c5b, .a=0xf0, .x=0x3c, .y=0x00, .sp=0x1f, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xa5}, {.addr=0x6c5b, .value=0xf8}, {.addr=0x6c5c, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x6c5d, .a=0xf0, .x=0xa5, .y=0x00, .sp=0x1f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xa5}, {.addr=0x6c5b, .value=0xf8}, {.addr=0x6c5c, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c5b, .value=0xf8, .type=IO_READ},
        {.addr=0x6c5c, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0192) {
    const struct CPU_State initial_cpu = {.pc=0x16cf, .a=0x24, .x=0x76, .y=0x1e, .sp=0xc6, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x0c}, {.addr=0x16cf, .value=0xf8}, {.addr=0x16d0, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x16d1, .a=0x24, .x=0x0c, .y=0x1e, .sp=0xc6, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x0c}, {.addr=0x16cf, .value=0xf8}, {.addr=0x16d0, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x16cf, .value=0xf8, .type=IO_READ},
        {.addr=0x16d0, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0193) {
    const struct CPU_State initial_cpu = {.pc=0x646d, .a=0xaa, .x=0xdb, .y=0x53, .sp=0xc5, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xd5}, {.addr=0x646d, .value=0xf8}, {.addr=0x646e, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x646f, .a=0xaa, .x=0xd5, .y=0x53, .sp=0xc5, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xd5}, {.addr=0x646d, .value=0xf8}, {.addr=0x646e, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x646d, .value=0xf8, .type=IO_READ},
        {.addr=0x646e, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0194) {
    const struct CPU_State initial_cpu = {.pc=0x0580, .a=0xa4, .x=0x20, .y=0xb5, .sp=0x3a, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x20}, {.addr=0x0580, .value=0xf8}, {.addr=0x0581, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x0582, .a=0xa4, .x=0x20, .y=0xb5, .sp=0x3a, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x20}, {.addr=0x0580, .value=0xf8}, {.addr=0x0581, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x0580, .value=0xf8, .type=IO_READ},
        {.addr=0x0581, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0195) {
    const struct CPU_State initial_cpu = {.pc=0x0ae2, .a=0x62, .x=0xb5, .y=0xdf, .sp=0x35, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xf4}, {.addr=0x0ae2, .value=0xf8}, {.addr=0x0ae3, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x0ae4, .a=0x62, .x=0xf4, .y=0xdf, .sp=0x35, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xf4}, {.addr=0x0ae2, .value=0xf8}, {.addr=0x0ae3, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ae2, .value=0xf8, .type=IO_READ},
        {.addr=0x0ae3, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0196) {
    const struct CPU_State initial_cpu = {.pc=0x3203, .a=0x0e, .x=0x28, .y=0xa2, .sp=0x59, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x91}, {.addr=0x3203, .value=0xf8}, {.addr=0x3204, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x3205, .a=0x0e, .x=0x91, .y=0xa2, .sp=0x59, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x91}, {.addr=0x3203, .value=0xf8}, {.addr=0x3204, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x3203, .value=0xf8, .type=IO_READ},
        {.addr=0x3204, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0197) {
    const struct CPU_State initial_cpu = {.pc=0x234a, .a=0xd9, .x=0xd5, .y=0xa4, .sp=0xce, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xa9}, {.addr=0x234a, .value=0xf8}, {.addr=0x234b, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x234c, .a=0xd9, .x=0xa9, .y=0xa4, .sp=0xce, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xa9}, {.addr=0x234a, .value=0xf8}, {.addr=0x234b, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x234a, .value=0xf8, .type=IO_READ},
        {.addr=0x234b, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0198) {
    const struct CPU_State initial_cpu = {.pc=0x7595, .a=0xa7, .x=0x6f, .y=0x6a, .sp=0x10, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xfb}, {.addr=0x7595, .value=0xf8}, {.addr=0x7596, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x7597, .a=0xa7, .x=0xfb, .y=0x6a, .sp=0x10, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xfb}, {.addr=0x7595, .value=0xf8}, {.addr=0x7596, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7595, .value=0xf8, .type=IO_READ},
        {.addr=0x7596, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0199) {
    const struct CPU_State initial_cpu = {.pc=0x58f8, .a=0xef, .x=0x8f, .y=0x0e, .sp=0xb1, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xed}, {.addr=0x58f8, .value=0xf8}, {.addr=0x58f9, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x58fa, .a=0xef, .x=0xed, .y=0x0e, .sp=0xb1, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xed}, {.addr=0x58f8, .value=0xf8}, {.addr=0x58f9, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x58f8, .value=0xf8, .type=IO_READ},
        {.addr=0x58f9, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_019A) {
    const struct CPU_State initial_cpu = {.pc=0xbfba, .a=0x79, .x=0x31, .y=0x65, .sp=0xac, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x88}, {.addr=0xbfba, .value=0xf8}, {.addr=0xbfbb, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xbfbc, .a=0x79, .x=0x88, .y=0x65, .sp=0xac, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x88}, {.addr=0xbfba, .value=0xf8}, {.addr=0xbfbb, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfba, .value=0xf8, .type=IO_READ},
        {.addr=0xbfbb, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_019B) {
    const struct CPU_State initial_cpu = {.pc=0xde1c, .a=0x80, .x=0xdf, .y=0x88, .sp=0xd0, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xc0}, {.addr=0xde1c, .value=0xf8}, {.addr=0xde1d, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xde1e, .a=0x80, .x=0xc0, .y=0x88, .sp=0xd0, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xc0}, {.addr=0xde1c, .value=0xf8}, {.addr=0xde1d, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xde1c, .value=0xf8, .type=IO_READ},
        {.addr=0xde1d, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_019C) {
    const struct CPU_State initial_cpu = {.pc=0xcfd5, .a=0x7f, .x=0x9c, .y=0x55, .sp=0xe8, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xbb}, {.addr=0xcfd5, .value=0xf8}, {.addr=0xcfd6, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xcfd7, .a=0x7f, .x=0xbb, .y=0x55, .sp=0xe8, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xbb}, {.addr=0xcfd5, .value=0xf8}, {.addr=0xcfd6, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcfd5, .value=0xf8, .type=IO_READ},
        {.addr=0xcfd6, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_019D) {
    const struct CPU_State initial_cpu = {.pc=0x894b, .a=0xf9, .x=0xdf, .y=0x46, .sp=0x74, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0xad}, {.addr=0x894b, .value=0xf8}, {.addr=0x894c, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x894d, .a=0xf9, .x=0xad, .y=0x46, .sp=0x74, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0xad}, {.addr=0x894b, .value=0xf8}, {.addr=0x894c, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x894b, .value=0xf8, .type=IO_READ},
        {.addr=0x894c, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_019E) {
    const struct CPU_State initial_cpu = {.pc=0xf2d4, .a=0x82, .x=0x5b, .y=0x27, .sp=0x62, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x13}, {.addr=0xf2d4, .value=0xf8}, {.addr=0xf2d5, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xf2d6, .a=0x82, .x=0x13, .y=0x27, .sp=0x62, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x13}, {.addr=0xf2d4, .value=0xf8}, {.addr=0xf2d5, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2d4, .value=0xf8, .type=IO_READ},
        {.addr=0xf2d5, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_019F) {
    const struct CPU_State initial_cpu = {.pc=0xbdde, .a=0x0c, .x=0x73, .y=0x97, .sp=0x8a, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x3b}, {.addr=0xbdde, .value=0xf8}, {.addr=0xbddf, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xbde0, .a=0x0c, .x=0x3b, .y=0x97, .sp=0x8a, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x3b}, {.addr=0xbdde, .value=0xf8}, {.addr=0xbddf, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdde, .value=0xf8, .type=IO_READ},
        {.addr=0xbddf, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x67b7, .a=0x14, .x=0x7e, .y=0x86, .sp=0x12, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x6b}, {.addr=0x67b7, .value=0xf8}, {.addr=0x67b8, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x67b9, .a=0x14, .x=0x6b, .y=0x86, .sp=0x12, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x6b}, {.addr=0x67b7, .value=0xf8}, {.addr=0x67b8, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x67b7, .value=0xf8, .type=IO_READ},
        {.addr=0x67b8, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3b86, .a=0x2b, .x=0x01, .y=0x52, .sp=0x7e, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x6e}, {.addr=0x3b86, .value=0xf8}, {.addr=0x3b87, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x3b88, .a=0x2b, .x=0x6e, .y=0x52, .sp=0x7e, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x6e}, {.addr=0x3b86, .value=0xf8}, {.addr=0x3b87, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b86, .value=0xf8, .type=IO_READ},
        {.addr=0x3b87, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x1003, .a=0x08, .x=0xa5, .y=0x2a, .sp=0x4c, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x93}, {.addr=0x1003, .value=0xf8}, {.addr=0x1004, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x1005, .a=0x08, .x=0x93, .y=0x2a, .sp=0x4c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x93}, {.addr=0x1003, .value=0xf8}, {.addr=0x1004, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1003, .value=0xf8, .type=IO_READ},
        {.addr=0x1004, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x74b8, .a=0x8a, .x=0xb7, .y=0xe4, .sp=0xd5, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x5a}, {.addr=0x74b8, .value=0xf8}, {.addr=0x74b9, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x74ba, .a=0x8a, .x=0x5a, .y=0xe4, .sp=0xd5, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x5a}, {.addr=0x74b8, .value=0xf8}, {.addr=0x74b9, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x74b8, .value=0xf8, .type=IO_READ},
        {.addr=0x74b9, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xd00b, .a=0xd7, .x=0x8f, .y=0x31, .sp=0xdf, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xb6}, {.addr=0xd00b, .value=0xf8}, {.addr=0xd00c, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xd00d, .a=0xd7, .x=0xb6, .y=0x31, .sp=0xdf, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xb6}, {.addr=0xd00b, .value=0xf8}, {.addr=0xd00c, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd00b, .value=0xf8, .type=IO_READ},
        {.addr=0xd00c, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x3cea, .a=0xed, .x=0xfd, .y=0x11, .sp=0x91, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x9e}, {.addr=0x3cea, .value=0xf8}, {.addr=0x3ceb, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x3cec, .a=0xed, .x=0x9e, .y=0x11, .sp=0x91, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x9e}, {.addr=0x3cea, .value=0xf8}, {.addr=0x3ceb, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cea, .value=0xf8, .type=IO_READ},
        {.addr=0x3ceb, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xda22, .a=0xc8, .x=0xe7, .y=0xec, .sp=0xc9, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x80}, {.addr=0xda22, .value=0xf8}, {.addr=0xda23, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xda24, .a=0xc8, .x=0x80, .y=0xec, .sp=0xc9, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x80}, {.addr=0xda22, .value=0xf8}, {.addr=0xda23, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xda22, .value=0xf8, .type=IO_READ},
        {.addr=0xda23, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0649, .a=0xf2, .x=0xfb, .y=0x6b, .sp=0xad, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xa8}, {.addr=0x0649, .value=0xf8}, {.addr=0x064a, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x064b, .a=0xf2, .x=0xa8, .y=0x6b, .sp=0xad, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xa8}, {.addr=0x0649, .value=0xf8}, {.addr=0x064a, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x0649, .value=0xf8, .type=IO_READ},
        {.addr=0x064a, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xfecf, .a=0xa1, .x=0x38, .y=0xe1, .sp=0x01, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x6c}, {.addr=0xfecf, .value=0xf8}, {.addr=0xfed0, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xfed1, .a=0xa1, .x=0x6c, .y=0xe1, .sp=0x01, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x6c}, {.addr=0xfecf, .value=0xf8}, {.addr=0xfed0, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xfecf, .value=0xf8, .type=IO_READ},
        {.addr=0xfed0, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xec54, .a=0x3c, .x=0x34, .y=0x54, .sp=0xf0, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xc3}, {.addr=0xec54, .value=0xf8}, {.addr=0xec55, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xec56, .a=0x3c, .x=0xc3, .y=0x54, .sp=0xf0, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xc3}, {.addr=0xec54, .value=0xf8}, {.addr=0xec55, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xec54, .value=0xf8, .type=IO_READ},
        {.addr=0xec55, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x00d2, .a=0x55, .x=0xbb, .y=0xb2, .sp=0xcc, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xf8}, {.addr=0x00d3, .value=0x3a}, {.addr=0x013a, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x00d4, .a=0x55, .x=0xb3, .y=0xb2, .sp=0xcc, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xf8}, {.addr=0x00d3, .value=0x3a}, {.addr=0x013a, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x00d2, .value=0xf8, .type=IO_READ},
        {.addr=0x00d3, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x23fc, .a=0xa2, .x=0x9f, .y=0x16, .sp=0xbd, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0xbd}, {.addr=0x23fc, .value=0xf8}, {.addr=0x23fd, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x23fe, .a=0xa2, .x=0xbd, .y=0x16, .sp=0xbd, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0xbd}, {.addr=0x23fc, .value=0xf8}, {.addr=0x23fd, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x23fc, .value=0xf8, .type=IO_READ},
        {.addr=0x23fd, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x5744, .a=0x46, .x=0x98, .y=0xb8, .sp=0xf3, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xf2}, {.addr=0x5744, .value=0xf8}, {.addr=0x5745, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x5746, .a=0x46, .x=0xf2, .y=0xb8, .sp=0xf3, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xf2}, {.addr=0x5744, .value=0xf8}, {.addr=0x5745, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5744, .value=0xf8, .type=IO_READ},
        {.addr=0x5745, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x730f, .a=0x8b, .x=0x58, .y=0xfd, .sp=0x12, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xeb}, {.addr=0x730f, .value=0xf8}, {.addr=0x7310, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x7311, .a=0x8b, .x=0xeb, .y=0xfd, .sp=0x12, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xeb}, {.addr=0x730f, .value=0xf8}, {.addr=0x7310, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x730f, .value=0xf8, .type=IO_READ},
        {.addr=0x7310, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xa0c5, .a=0xf0, .x=0xd2, .y=0xa9, .sp=0xae, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x46}, {.addr=0xa0c5, .value=0xf8}, {.addr=0xa0c6, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xa0c7, .a=0xf0, .x=0x46, .y=0xa9, .sp=0xae, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x46}, {.addr=0xa0c5, .value=0xf8}, {.addr=0xa0c6, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0c5, .value=0xf8, .type=IO_READ},
        {.addr=0xa0c6, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x13d1, .a=0x4e, .x=0xec, .y=0x58, .sp=0xa1, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x03}, {.addr=0x13d1, .value=0xf8}, {.addr=0x13d2, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x13d3, .a=0x4e, .x=0x03, .y=0x58, .sp=0xa1, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x03}, {.addr=0x13d1, .value=0xf8}, {.addr=0x13d2, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x13d1, .value=0xf8, .type=IO_READ},
        {.addr=0x13d2, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xce54, .a=0xa7, .x=0x8e, .y=0xdd, .sp=0x4f, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x85}, {.addr=0xce54, .value=0xf8}, {.addr=0xce55, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xce56, .a=0xa7, .x=0x85, .y=0xdd, .sp=0x4f, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x85}, {.addr=0xce54, .value=0xf8}, {.addr=0xce55, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xce54, .value=0xf8, .type=IO_READ},
        {.addr=0xce55, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5d5d, .a=0x58, .x=0x16, .y=0x8c, .sp=0x11, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xe7}, {.addr=0x5d5d, .value=0xf8}, {.addr=0x5d5e, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x5d5f, .a=0x58, .x=0xe7, .y=0x8c, .sp=0x11, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xe7}, {.addr=0x5d5d, .value=0xf8}, {.addr=0x5d5e, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d5d, .value=0xf8, .type=IO_READ},
        {.addr=0x5d5e, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x0dd4, .a=0x50, .x=0xda, .y=0xd3, .sp=0x87, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x94}, {.addr=0x0dd4, .value=0xf8}, {.addr=0x0dd5, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x0dd6, .a=0x50, .x=0x94, .y=0xd3, .sp=0x87, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x94}, {.addr=0x0dd4, .value=0xf8}, {.addr=0x0dd5, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dd4, .value=0xf8, .type=IO_READ},
        {.addr=0x0dd5, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xa5ab, .a=0x8e, .x=0x25, .y=0x9d, .sp=0xef, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xa0}, {.addr=0xa5ab, .value=0xf8}, {.addr=0xa5ac, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xa5ad, .a=0x8e, .x=0xa0, .y=0x9d, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xa0}, {.addr=0xa5ab, .value=0xf8}, {.addr=0xa5ac, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5ab, .value=0xf8, .type=IO_READ},
        {.addr=0xa5ac, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x6a42, .a=0x17, .x=0x31, .y=0x79, .sp=0x32, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x1c}, {.addr=0x6a42, .value=0xf8}, {.addr=0x6a43, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x6a44, .a=0x17, .x=0x1c, .y=0x79, .sp=0x32, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x1c}, {.addr=0x6a42, .value=0xf8}, {.addr=0x6a43, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a42, .value=0xf8, .type=IO_READ},
        {.addr=0x6a43, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4ef6, .a=0x27, .x=0xfa, .y=0x8c, .sp=0x5d, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xf4}, {.addr=0x4ef6, .value=0xf8}, {.addr=0x4ef7, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x4ef8, .a=0x27, .x=0xf4, .y=0x8c, .sp=0x5d, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xf4}, {.addr=0x4ef6, .value=0xf8}, {.addr=0x4ef7, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ef6, .value=0xf8, .type=IO_READ},
        {.addr=0x4ef7, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x1a70, .a=0x30, .x=0x74, .y=0x13, .sp=0x80, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x17}, {.addr=0x1a70, .value=0xf8}, {.addr=0x1a71, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x1a72, .a=0x30, .x=0x17, .y=0x13, .sp=0x80, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x17}, {.addr=0x1a70, .value=0xf8}, {.addr=0x1a71, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a70, .value=0xf8, .type=IO_READ},
        {.addr=0x1a71, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x3bc2, .a=0x79, .x=0xb3, .y=0xf9, .sp=0x0f, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xc8}, {.addr=0x3bc2, .value=0xf8}, {.addr=0x3bc3, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x3bc4, .a=0x79, .x=0xc8, .y=0xf9, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xc8}, {.addr=0x3bc2, .value=0xf8}, {.addr=0x3bc3, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bc2, .value=0xf8, .type=IO_READ},
        {.addr=0x3bc3, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xf170, .a=0x25, .x=0xce, .y=0x52, .sp=0x52, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0x04}, {.addr=0xf170, .value=0xf8}, {.addr=0xf171, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xf172, .a=0x25, .x=0x04, .y=0x52, .sp=0x52, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0x04}, {.addr=0xf170, .value=0xf8}, {.addr=0xf171, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf170, .value=0xf8, .type=IO_READ},
        {.addr=0xf171, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x88ba, .a=0x50, .x=0xdd, .y=0xd8, .sp=0xc9, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xed}, {.addr=0x88ba, .value=0xf8}, {.addr=0x88bb, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x88bc, .a=0x50, .x=0xed, .y=0xd8, .sp=0xc9, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xed}, {.addr=0x88ba, .value=0xf8}, {.addr=0x88bb, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x88ba, .value=0xf8, .type=IO_READ},
        {.addr=0x88bb, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xaef9, .a=0xce, .x=0x5a, .y=0xa0, .sp=0x67, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x91}, {.addr=0xaef9, .value=0xf8}, {.addr=0xaefa, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xaefb, .a=0xce, .x=0x91, .y=0xa0, .sp=0x67, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x91}, {.addr=0xaef9, .value=0xf8}, {.addr=0xaefa, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xaef9, .value=0xf8, .type=IO_READ},
        {.addr=0xaefa, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xe369, .a=0xd4, .x=0xa9, .y=0xc7, .sp=0x71, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0x73}, {.addr=0xe369, .value=0xf8}, {.addr=0xe36a, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xe36b, .a=0xd4, .x=0x73, .y=0xc7, .sp=0x71, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0x73}, {.addr=0xe369, .value=0xf8}, {.addr=0xe36a, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe369, .value=0xf8, .type=IO_READ},
        {.addr=0xe36a, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xfac6, .a=0xca, .x=0x11, .y=0xb8, .sp=0xfe, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x63}, {.addr=0xfac6, .value=0xf8}, {.addr=0xfac7, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xfac8, .a=0xca, .x=0x63, .y=0xb8, .sp=0xfe, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x63}, {.addr=0xfac6, .value=0xf8}, {.addr=0xfac7, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xfac6, .value=0xf8, .type=IO_READ},
        {.addr=0xfac7, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xded4, .a=0xbd, .x=0x47, .y=0xd0, .sp=0x29, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x78}, {.addr=0xded4, .value=0xf8}, {.addr=0xded5, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xded6, .a=0xbd, .x=0x78, .y=0xd0, .sp=0x29, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x78}, {.addr=0xded4, .value=0xf8}, {.addr=0xded5, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xded4, .value=0xf8, .type=IO_READ},
        {.addr=0xded5, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x1b5b, .a=0x44, .x=0x52, .y=0x3f, .sp=0xce, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x4b}, {.addr=0x1b5b, .value=0xf8}, {.addr=0x1b5c, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x1b5d, .a=0x44, .x=0x4b, .y=0x3f, .sp=0xce, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x4b}, {.addr=0x1b5b, .value=0xf8}, {.addr=0x1b5c, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b5b, .value=0xf8, .type=IO_READ},
        {.addr=0x1b5c, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x99e8, .a=0xe6, .x=0x4a, .y=0xd7, .sp=0x2a, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xd1}, {.addr=0x99e8, .value=0xf8}, {.addr=0x99e9, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x99ea, .a=0xe6, .x=0xd1, .y=0xd7, .sp=0x2a, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xd1}, {.addr=0x99e8, .value=0xf8}, {.addr=0x99e9, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x99e8, .value=0xf8, .type=IO_READ},
        {.addr=0x99e9, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xdea6, .a=0xf1, .x=0x0f, .y=0xe4, .sp=0xf2, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xac}, {.addr=0xdea6, .value=0xf8}, {.addr=0xdea7, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xdea8, .a=0xf1, .x=0xac, .y=0xe4, .sp=0xf2, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xac}, {.addr=0xdea6, .value=0xf8}, {.addr=0xdea7, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdea6, .value=0xf8, .type=IO_READ},
        {.addr=0xdea7, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x53d1, .a=0x4c, .x=0xe9, .y=0x17, .sp=0x27, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x79}, {.addr=0x53d1, .value=0xf8}, {.addr=0x53d2, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x53d3, .a=0x4c, .x=0x79, .y=0x17, .sp=0x27, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x79}, {.addr=0x53d1, .value=0xf8}, {.addr=0x53d2, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x53d1, .value=0xf8, .type=IO_READ},
        {.addr=0x53d2, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xda39, .a=0x65, .x=0xae, .y=0x3f, .sp=0x7e, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x35}, {.addr=0xda39, .value=0xf8}, {.addr=0xda3a, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xda3b, .a=0x65, .x=0x35, .y=0x3f, .sp=0x7e, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x35}, {.addr=0xda39, .value=0xf8}, {.addr=0xda3a, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xda39, .value=0xf8, .type=IO_READ},
        {.addr=0xda3a, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xc66e, .a=0x8a, .x=0xe0, .y=0x8c, .sp=0xe4, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x2c}, {.addr=0xc66e, .value=0xf8}, {.addr=0xc66f, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xc670, .a=0x8a, .x=0x2c, .y=0x8c, .sp=0xe4, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x2c}, {.addr=0xc66e, .value=0xf8}, {.addr=0xc66f, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xc66e, .value=0xf8, .type=IO_READ},
        {.addr=0xc66f, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xd6ff, .a=0x22, .x=0xbf, .y=0x82, .sp=0xf4, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0xa8}, {.addr=0xd6ff, .value=0xf8}, {.addr=0xd700, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xd701, .a=0x22, .x=0xa8, .y=0x82, .sp=0xf4, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0xa8}, {.addr=0xd6ff, .value=0xf8}, {.addr=0xd700, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6ff, .value=0xf8, .type=IO_READ},
        {.addr=0xd700, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xce51, .a=0x53, .x=0xc8, .y=0x96, .sp=0x57, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x13}, {.addr=0xce51, .value=0xf8}, {.addr=0xce52, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xce53, .a=0x53, .x=0x13, .y=0x96, .sp=0x57, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x13}, {.addr=0xce51, .value=0xf8}, {.addr=0xce52, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xce51, .value=0xf8, .type=IO_READ},
        {.addr=0xce52, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x36e6, .a=0x20, .x=0x9c, .y=0x02, .sp=0xd0, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x94}, {.addr=0x36e6, .value=0xf8}, {.addr=0x36e7, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x36e8, .a=0x20, .x=0x94, .y=0x02, .sp=0xd0, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x94}, {.addr=0x36e6, .value=0xf8}, {.addr=0x36e7, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x36e6, .value=0xf8, .type=IO_READ},
        {.addr=0x36e7, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x96a2, .a=0x94, .x=0xa4, .y=0x16, .sp=0x09, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x8f}, {.addr=0x96a2, .value=0xf8}, {.addr=0x96a3, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x96a4, .a=0x94, .x=0x8f, .y=0x16, .sp=0x09, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x8f}, {.addr=0x96a2, .value=0xf8}, {.addr=0x96a3, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x96a2, .value=0xf8, .type=IO_READ},
        {.addr=0x96a3, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xb3f5, .a=0x09, .x=0xeb, .y=0x6a, .sp=0x1a, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0xae}, {.addr=0xb3f5, .value=0xf8}, {.addr=0xb3f6, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xb3f7, .a=0x09, .x=0xae, .y=0x6a, .sp=0x1a, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0xae}, {.addr=0xb3f5, .value=0xf8}, {.addr=0xb3f6, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3f5, .value=0xf8, .type=IO_READ},
        {.addr=0xb3f6, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x1c3c, .a=0xfa, .x=0xdf, .y=0xa4, .sp=0xdb, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x7a}, {.addr=0x1c3c, .value=0xf8}, {.addr=0x1c3d, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x1c3e, .a=0xfa, .x=0x7a, .y=0xa4, .sp=0xdb, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x7a}, {.addr=0x1c3c, .value=0xf8}, {.addr=0x1c3d, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c3c, .value=0xf8, .type=IO_READ},
        {.addr=0x1c3d, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xb512, .a=0xda, .x=0x0a, .y=0x2a, .sp=0xb7, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x22}, {.addr=0xb512, .value=0xf8}, {.addr=0xb513, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xb514, .a=0xda, .x=0x22, .y=0x2a, .sp=0xb7, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x22}, {.addr=0xb512, .value=0xf8}, {.addr=0xb513, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xb512, .value=0xf8, .type=IO_READ},
        {.addr=0xb513, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x2b1e, .a=0x1a, .x=0x5c, .y=0xb7, .sp=0x0f, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xce}, {.addr=0x2b1e, .value=0xf8}, {.addr=0x2b1f, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x2b20, .a=0x1a, .x=0xce, .y=0xb7, .sp=0x0f, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xce}, {.addr=0x2b1e, .value=0xf8}, {.addr=0x2b1f, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b1e, .value=0xf8, .type=IO_READ},
        {.addr=0x2b1f, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x577e, .a=0x7b, .x=0x58, .y=0xa6, .sp=0x81, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x4c}, {.addr=0x577e, .value=0xf8}, {.addr=0x577f, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x5780, .a=0x7b, .x=0x4c, .y=0xa6, .sp=0x81, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x4c}, {.addr=0x577e, .value=0xf8}, {.addr=0x577f, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x577e, .value=0xf8, .type=IO_READ},
        {.addr=0x577f, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x2922, .a=0xe2, .x=0xc8, .y=0x04, .sp=0x71, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xa3}, {.addr=0x2922, .value=0xf8}, {.addr=0x2923, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x2924, .a=0xe2, .x=0xa3, .y=0x04, .sp=0x71, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xa3}, {.addr=0x2922, .value=0xf8}, {.addr=0x2923, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x2922, .value=0xf8, .type=IO_READ},
        {.addr=0x2923, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x7527, .a=0x0f, .x=0xd8, .y=0x51, .sp=0x56, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xdd}, {.addr=0x7527, .value=0xf8}, {.addr=0x7528, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x7529, .a=0x0f, .x=0xdd, .y=0x51, .sp=0x56, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xdd}, {.addr=0x7527, .value=0xf8}, {.addr=0x7528, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7527, .value=0xf8, .type=IO_READ},
        {.addr=0x7528, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x1c0e, .a=0x83, .x=0xc5, .y=0x8c, .sp=0x6b, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x3c}, {.addr=0x1c0e, .value=0xf8}, {.addr=0x1c0f, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x1c10, .a=0x83, .x=0x3c, .y=0x8c, .sp=0x6b, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x3c}, {.addr=0x1c0e, .value=0xf8}, {.addr=0x1c0f, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c0e, .value=0xf8, .type=IO_READ},
        {.addr=0x1c0f, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x9659, .a=0x87, .x=0x39, .y=0x08, .sp=0x21, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x58}, {.addr=0x9659, .value=0xf8}, {.addr=0x965a, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x965b, .a=0x87, .x=0x58, .y=0x08, .sp=0x21, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x58}, {.addr=0x9659, .value=0xf8}, {.addr=0x965a, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9659, .value=0xf8, .type=IO_READ},
        {.addr=0x965a, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x2dfb, .a=0x2b, .x=0x05, .y=0xe3, .sp=0x51, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x78}, {.addr=0x2dfb, .value=0xf8}, {.addr=0x2dfc, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x2dfd, .a=0x2b, .x=0x78, .y=0xe3, .sp=0x51, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x78}, {.addr=0x2dfb, .value=0xf8}, {.addr=0x2dfc, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dfb, .value=0xf8, .type=IO_READ},
        {.addr=0x2dfc, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x48d7, .a=0xd3, .x=0xa2, .y=0xa8, .sp=0x42, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x51}, {.addr=0x48d7, .value=0xf8}, {.addr=0x48d8, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x48d9, .a=0xd3, .x=0x51, .y=0xa8, .sp=0x42, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x51}, {.addr=0x48d7, .value=0xf8}, {.addr=0x48d8, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x48d7, .value=0xf8, .type=IO_READ},
        {.addr=0x48d8, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x2b43, .a=0x4c, .x=0xc1, .y=0x8d, .sp=0x76, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x9e}, {.addr=0x2b43, .value=0xf8}, {.addr=0x2b44, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x2b45, .a=0x4c, .x=0x9e, .y=0x8d, .sp=0x76, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x9e}, {.addr=0x2b43, .value=0xf8}, {.addr=0x2b44, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b43, .value=0xf8, .type=IO_READ},
        {.addr=0x2b44, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x7e14, .a=0x24, .x=0x23, .y=0x90, .sp=0x8e, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xe4}, {.addr=0x7e14, .value=0xf8}, {.addr=0x7e15, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x7e16, .a=0x24, .x=0xe4, .y=0x90, .sp=0x8e, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xe4}, {.addr=0x7e14, .value=0xf8}, {.addr=0x7e15, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e14, .value=0xf8, .type=IO_READ},
        {.addr=0x7e15, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x2c91, .a=0x6e, .x=0xd3, .y=0xa9, .sp=0xe9, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xa3}, {.addr=0x2c91, .value=0xf8}, {.addr=0x2c92, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x2c93, .a=0x6e, .x=0xa3, .y=0xa9, .sp=0xe9, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xa3}, {.addr=0x2c91, .value=0xf8}, {.addr=0x2c92, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c91, .value=0xf8, .type=IO_READ},
        {.addr=0x2c92, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x66ea, .a=0x79, .x=0x8f, .y=0xb0, .sp=0x63, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xdd}, {.addr=0x66ea, .value=0xf8}, {.addr=0x66eb, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x66ec, .a=0x79, .x=0xdd, .y=0xb0, .sp=0x63, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xdd}, {.addr=0x66ea, .value=0xf8}, {.addr=0x66eb, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x66ea, .value=0xf8, .type=IO_READ},
        {.addr=0x66eb, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x80de, .a=0x73, .x=0x3a, .y=0x5f, .sp=0x0a, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x36}, {.addr=0x80de, .value=0xf8}, {.addr=0x80df, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x80e0, .a=0x73, .x=0x36, .y=0x5f, .sp=0x0a, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x36}, {.addr=0x80de, .value=0xf8}, {.addr=0x80df, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x80de, .value=0xf8, .type=IO_READ},
        {.addr=0x80df, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2662, .a=0xf6, .x=0xc1, .y=0x37, .sp=0x22, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x68}, {.addr=0x2662, .value=0xf8}, {.addr=0x2663, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x2664, .a=0xf6, .x=0x68, .y=0x37, .sp=0x22, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x68}, {.addr=0x2662, .value=0xf8}, {.addr=0x2663, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2662, .value=0xf8, .type=IO_READ},
        {.addr=0x2663, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xd8cd, .a=0xd6, .x=0x80, .y=0xf6, .sp=0x16, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xb7}, {.addr=0xd8cd, .value=0xf8}, {.addr=0xd8ce, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xd8cf, .a=0xd6, .x=0xb7, .y=0xf6, .sp=0x16, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xb7}, {.addr=0xd8cd, .value=0xf8}, {.addr=0xd8ce, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8cd, .value=0xf8, .type=IO_READ},
        {.addr=0xd8ce, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x7ed2, .a=0xa9, .x=0x54, .y=0x84, .sp=0x28, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xe2}, {.addr=0x7ed2, .value=0xf8}, {.addr=0x7ed3, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x7ed4, .a=0xa9, .x=0xe2, .y=0x84, .sp=0x28, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xe2}, {.addr=0x7ed2, .value=0xf8}, {.addr=0x7ed3, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ed2, .value=0xf8, .type=IO_READ},
        {.addr=0x7ed3, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x0d91, .a=0xf9, .x=0x34, .y=0x0b, .sp=0xd3, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xdb}, {.addr=0x0d91, .value=0xf8}, {.addr=0x0d92, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x0d93, .a=0xf9, .x=0xdb, .y=0x0b, .sp=0xd3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xdb}, {.addr=0x0d91, .value=0xf8}, {.addr=0x0d92, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d91, .value=0xf8, .type=IO_READ},
        {.addr=0x0d92, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x4ccf, .a=0xb9, .x=0x54, .y=0x74, .sp=0x28, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x0c}, {.addr=0x4ccf, .value=0xf8}, {.addr=0x4cd0, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x4cd1, .a=0xb9, .x=0x0c, .y=0x74, .sp=0x28, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x0c}, {.addr=0x4ccf, .value=0xf8}, {.addr=0x4cd0, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ccf, .value=0xf8, .type=IO_READ},
        {.addr=0x4cd0, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x53d9, .a=0xa9, .x=0x69, .y=0xfb, .sp=0x97, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x65}, {.addr=0x53d9, .value=0xf8}, {.addr=0x53da, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x53db, .a=0xa9, .x=0x65, .y=0xfb, .sp=0x97, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x65}, {.addr=0x53d9, .value=0xf8}, {.addr=0x53da, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x53d9, .value=0xf8, .type=IO_READ},
        {.addr=0x53da, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xde94, .a=0xf1, .x=0xbc, .y=0x06, .sp=0x87, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x6d}, {.addr=0xde94, .value=0xf8}, {.addr=0xde95, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xde96, .a=0xf1, .x=0x6d, .y=0x06, .sp=0x87, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x6d}, {.addr=0xde94, .value=0xf8}, {.addr=0xde95, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xde94, .value=0xf8, .type=IO_READ},
        {.addr=0xde95, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x68fa, .a=0x41, .x=0x28, .y=0x46, .sp=0x73, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x6f}, {.addr=0x68fa, .value=0xf8}, {.addr=0x68fb, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x68fc, .a=0x41, .x=0x6f, .y=0x46, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x6f}, {.addr=0x68fa, .value=0xf8}, {.addr=0x68fb, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x68fa, .value=0xf8, .type=IO_READ},
        {.addr=0x68fb, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x08a5, .a=0x5f, .x=0x62, .y=0x07, .sp=0x34, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0xf0}, {.addr=0x08a5, .value=0xf8}, {.addr=0x08a6, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x08a7, .a=0x5f, .x=0xf0, .y=0x07, .sp=0x34, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0xf0}, {.addr=0x08a5, .value=0xf8}, {.addr=0x08a6, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x08a5, .value=0xf8, .type=IO_READ},
        {.addr=0x08a6, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x0a49, .a=0x95, .x=0xb9, .y=0x01, .sp=0xd7, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x19}, {.addr=0x0a49, .value=0xf8}, {.addr=0x0a4a, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x0a4b, .a=0x95, .x=0x19, .y=0x01, .sp=0xd7, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x19}, {.addr=0x0a49, .value=0xf8}, {.addr=0x0a4a, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a49, .value=0xf8, .type=IO_READ},
        {.addr=0x0a4a, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xf5ec, .a=0x27, .x=0xb5, .y=0x71, .sp=0xc7, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xab}, {.addr=0xf5ec, .value=0xf8}, {.addr=0xf5ed, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xf5ee, .a=0x27, .x=0xab, .y=0x71, .sp=0xc7, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xab}, {.addr=0xf5ec, .value=0xf8}, {.addr=0xf5ed, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5ec, .value=0xf8, .type=IO_READ},
        {.addr=0xf5ed, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x626d, .a=0xb7, .x=0xa1, .y=0x2b, .sp=0xbb, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x33}, {.addr=0x626d, .value=0xf8}, {.addr=0x626e, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x626f, .a=0xb7, .x=0x33, .y=0x2b, .sp=0xbb, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x33}, {.addr=0x626d, .value=0xf8}, {.addr=0x626e, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x626d, .value=0xf8, .type=IO_READ},
        {.addr=0x626e, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xd1c6, .a=0xb4, .x=0xbc, .y=0x1a, .sp=0x6a, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0xec}, {.addr=0xd1c6, .value=0xf8}, {.addr=0xd1c7, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xd1c8, .a=0xb4, .x=0xec, .y=0x1a, .sp=0x6a, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0xec}, {.addr=0xd1c6, .value=0xf8}, {.addr=0xd1c7, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1c6, .value=0xf8, .type=IO_READ},
        {.addr=0xd1c7, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xca69, .a=0x9e, .x=0x81, .y=0x83, .sp=0x7e, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x64}, {.addr=0xca69, .value=0xf8}, {.addr=0xca6a, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xca6b, .a=0x9e, .x=0x64, .y=0x83, .sp=0x7e, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x64}, {.addr=0xca69, .value=0xf8}, {.addr=0xca6a, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xca69, .value=0xf8, .type=IO_READ},
        {.addr=0xca6a, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x3296, .a=0x27, .x=0x14, .y=0x33, .sp=0x66, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xdc}, {.addr=0x3296, .value=0xf8}, {.addr=0x3297, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x3298, .a=0x27, .x=0xdc, .y=0x33, .sp=0x66, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xdc}, {.addr=0x3296, .value=0xf8}, {.addr=0x3297, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3296, .value=0xf8, .type=IO_READ},
        {.addr=0x3297, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x2db8, .a=0x7d, .x=0x7d, .y=0x8e, .sp=0xc1, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x67}, {.addr=0x2db8, .value=0xf8}, {.addr=0x2db9, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x2dba, .a=0x7d, .x=0x67, .y=0x8e, .sp=0xc1, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x67}, {.addr=0x2db8, .value=0xf8}, {.addr=0x2db9, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x2db8, .value=0xf8, .type=IO_READ},
        {.addr=0x2db9, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x55f0, .a=0x92, .x=0x8d, .y=0x10, .sp=0xf7, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x9b}, {.addr=0x55f0, .value=0xf8}, {.addr=0x55f1, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x55f2, .a=0x92, .x=0x9b, .y=0x10, .sp=0xf7, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x9b}, {.addr=0x55f0, .value=0xf8}, {.addr=0x55f1, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x55f0, .value=0xf8, .type=IO_READ},
        {.addr=0x55f1, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xf977, .a=0x8f, .x=0xf0, .y=0x90, .sp=0xc1, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x33}, {.addr=0xf977, .value=0xf8}, {.addr=0xf978, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xf979, .a=0x8f, .x=0x33, .y=0x90, .sp=0xc1, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x33}, {.addr=0xf977, .value=0xf8}, {.addr=0xf978, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf977, .value=0xf8, .type=IO_READ},
        {.addr=0xf978, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xd474, .a=0xe4, .x=0x95, .y=0xa7, .sp=0xc7, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x06}, {.addr=0xd474, .value=0xf8}, {.addr=0xd475, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xd476, .a=0xe4, .x=0x06, .y=0xa7, .sp=0xc7, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x06}, {.addr=0xd474, .value=0xf8}, {.addr=0xd475, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xd474, .value=0xf8, .type=IO_READ},
        {.addr=0xd475, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xff7b, .a=0x09, .x=0x67, .y=0x3e, .sp=0xf5, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0xc2}, {.addr=0xff7b, .value=0xf8}, {.addr=0xff7c, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xff7d, .a=0x09, .x=0xc2, .y=0x3e, .sp=0xf5, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0xc2}, {.addr=0xff7b, .value=0xf8}, {.addr=0xff7c, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xff7b, .value=0xf8, .type=IO_READ},
        {.addr=0xff7c, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x2209, .a=0x16, .x=0xcb, .y=0x51, .sp=0x79, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xad}, {.addr=0x2209, .value=0xf8}, {.addr=0x220a, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x220b, .a=0x16, .x=0xad, .y=0x51, .sp=0x79, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xad}, {.addr=0x2209, .value=0xf8}, {.addr=0x220a, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2209, .value=0xf8, .type=IO_READ},
        {.addr=0x220a, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xc15a, .a=0x20, .x=0xd3, .y=0x8d, .sp=0x96, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xed}, {.addr=0xc15a, .value=0xf8}, {.addr=0xc15b, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xc15c, .a=0x20, .x=0xed, .y=0x8d, .sp=0x96, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xed}, {.addr=0xc15a, .value=0xf8}, {.addr=0xc15b, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc15a, .value=0xf8, .type=IO_READ},
        {.addr=0xc15b, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x267b, .a=0xfe, .x=0x6c, .y=0x03, .sp=0x54, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x8b}, {.addr=0x267b, .value=0xf8}, {.addr=0x267c, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x267d, .a=0xfe, .x=0x8b, .y=0x03, .sp=0x54, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x8b}, {.addr=0x267b, .value=0xf8}, {.addr=0x267c, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x267b, .value=0xf8, .type=IO_READ},
        {.addr=0x267c, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x88e8, .a=0x1e, .x=0x07, .y=0xf5, .sp=0x49, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x9a}, {.addr=0x88e8, .value=0xf8}, {.addr=0x88e9, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x88ea, .a=0x1e, .x=0x9a, .y=0xf5, .sp=0x49, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x9a}, {.addr=0x88e8, .value=0xf8}, {.addr=0x88e9, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x88e8, .value=0xf8, .type=IO_READ},
        {.addr=0x88e9, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xc976, .a=0x86, .x=0x99, .y=0x04, .sp=0xd9, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0xd5}, {.addr=0xc976, .value=0xf8}, {.addr=0xc977, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xc978, .a=0x86, .x=0xd5, .y=0x04, .sp=0xd9, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0xd5}, {.addr=0xc976, .value=0xf8}, {.addr=0xc977, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc976, .value=0xf8, .type=IO_READ},
        {.addr=0xc977, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x825d, .a=0x44, .x=0xbf, .y=0xa0, .sp=0xfd, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x57}, {.addr=0x825d, .value=0xf8}, {.addr=0x825e, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x825f, .a=0x44, .x=0x57, .y=0xa0, .sp=0xfd, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x57}, {.addr=0x825d, .value=0xf8}, {.addr=0x825e, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x825d, .value=0xf8, .type=IO_READ},
        {.addr=0x825e, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x351d, .a=0x0a, .x=0x13, .y=0x0b, .sp=0x18, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x03}, {.addr=0x351d, .value=0xf8}, {.addr=0x351e, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x351f, .a=0x0a, .x=0x03, .y=0x0b, .sp=0x18, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x03}, {.addr=0x351d, .value=0xf8}, {.addr=0x351e, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x351d, .value=0xf8, .type=IO_READ},
        {.addr=0x351e, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x2b94, .a=0x49, .x=0x30, .y=0x36, .sp=0x83, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xeb}, {.addr=0x2b94, .value=0xf8}, {.addr=0x2b95, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x2b96, .a=0x49, .x=0xeb, .y=0x36, .sp=0x83, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xeb}, {.addr=0x2b94, .value=0xf8}, {.addr=0x2b95, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b94, .value=0xf8, .type=IO_READ},
        {.addr=0x2b95, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xb886, .a=0xb0, .x=0x37, .y=0x9f, .sp=0xe7, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0xba}, {.addr=0xb886, .value=0xf8}, {.addr=0xb887, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xb888, .a=0xb0, .x=0xba, .y=0x9f, .sp=0xe7, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0xba}, {.addr=0xb886, .value=0xf8}, {.addr=0xb887, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xb886, .value=0xf8, .type=IO_READ},
        {.addr=0xb887, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x3892, .a=0x5d, .x=0x28, .y=0xb0, .sp=0x92, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x4f}, {.addr=0x3892, .value=0xf8}, {.addr=0x3893, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x3894, .a=0x5d, .x=0x4f, .y=0xb0, .sp=0x92, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x4f}, {.addr=0x3892, .value=0xf8}, {.addr=0x3893, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x3892, .value=0xf8, .type=IO_READ},
        {.addr=0x3893, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xec7a, .a=0xc7, .x=0x3c, .y=0xc1, .sp=0x0e, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xbe}, {.addr=0xec7a, .value=0xf8}, {.addr=0xec7b, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xec7c, .a=0xc7, .x=0xbe, .y=0xc1, .sp=0x0e, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xbe}, {.addr=0xec7a, .value=0xf8}, {.addr=0xec7b, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xec7a, .value=0xf8, .type=IO_READ},
        {.addr=0xec7b, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x2f88, .a=0x39, .x=0x07, .y=0x09, .sp=0xd6, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xad}, {.addr=0x2f88, .value=0xf8}, {.addr=0x2f89, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x2f8a, .a=0x39, .x=0xad, .y=0x09, .sp=0xd6, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xad}, {.addr=0x2f88, .value=0xf8}, {.addr=0x2f89, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f88, .value=0xf8, .type=IO_READ},
        {.addr=0x2f89, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x12a4, .a=0xf9, .x=0x24, .y=0xf6, .sp=0x4d, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xaa}, {.addr=0x12a4, .value=0xf8}, {.addr=0x12a5, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x12a6, .a=0xf9, .x=0xaa, .y=0xf6, .sp=0x4d, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xaa}, {.addr=0x12a4, .value=0xf8}, {.addr=0x12a5, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x12a4, .value=0xf8, .type=IO_READ},
        {.addr=0x12a5, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x1239, .a=0x6e, .x=0xa5, .y=0x07, .sp=0x60, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0xf2}, {.addr=0x1239, .value=0xf8}, {.addr=0x123a, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x123b, .a=0x6e, .x=0xf2, .y=0x07, .sp=0x60, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0xf2}, {.addr=0x1239, .value=0xf8}, {.addr=0x123a, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x1239, .value=0xf8, .type=IO_READ},
        {.addr=0x123a, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x70fa, .a=0x0c, .x=0xe3, .y=0x36, .sp=0x03, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xf6}, {.addr=0x70fa, .value=0xf8}, {.addr=0x70fb, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x70fc, .a=0x0c, .x=0xf6, .y=0x36, .sp=0x03, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xf6}, {.addr=0x70fa, .value=0xf8}, {.addr=0x70fb, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x70fa, .value=0xf8, .type=IO_READ},
        {.addr=0x70fb, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x7e77, .a=0x76, .x=0x56, .y=0xfc, .sp=0xb1, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xb5}, {.addr=0x7e77, .value=0xf8}, {.addr=0x7e78, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x7e79, .a=0x76, .x=0xb5, .y=0xfc, .sp=0xb1, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xb5}, {.addr=0x7e77, .value=0xf8}, {.addr=0x7e78, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e77, .value=0xf8, .type=IO_READ},
        {.addr=0x7e78, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x20b4, .a=0x8a, .x=0xaf, .y=0x42, .sp=0xa3, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xc0}, {.addr=0x20b4, .value=0xf8}, {.addr=0x20b5, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x20b6, .a=0x8a, .x=0xc0, .y=0x42, .sp=0xa3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xc0}, {.addr=0x20b4, .value=0xf8}, {.addr=0x20b5, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x20b4, .value=0xf8, .type=IO_READ},
        {.addr=0x20b5, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0200) {
    const struct CPU_State initial_cpu = {.pc=0x269c, .a=0x88, .x=0x89, .y=0xf2, .sp=0x25, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x46}, {.addr=0x269c, .value=0xf8}, {.addr=0x269d, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x269e, .a=0x88, .x=0x46, .y=0xf2, .sp=0x25, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x46}, {.addr=0x269c, .value=0xf8}, {.addr=0x269d, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x269c, .value=0xf8, .type=IO_READ},
        {.addr=0x269d, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0201) {
    const struct CPU_State initial_cpu = {.pc=0x64d1, .a=0x76, .x=0x79, .y=0xdd, .sp=0x1a, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x55}, {.addr=0x64d1, .value=0xf8}, {.addr=0x64d2, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x64d3, .a=0x76, .x=0x55, .y=0xdd, .sp=0x1a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x55}, {.addr=0x64d1, .value=0xf8}, {.addr=0x64d2, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x64d1, .value=0xf8, .type=IO_READ},
        {.addr=0x64d2, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0202) {
    const struct CPU_State initial_cpu = {.pc=0x9032, .a=0x06, .x=0xa7, .y=0xbf, .sp=0xc3, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x7f}, {.addr=0x9032, .value=0xf8}, {.addr=0x9033, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x9034, .a=0x06, .x=0x7f, .y=0xbf, .sp=0xc3, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x7f}, {.addr=0x9032, .value=0xf8}, {.addr=0x9033, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x9032, .value=0xf8, .type=IO_READ},
        {.addr=0x9033, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0203) {
    const struct CPU_State initial_cpu = {.pc=0xcea1, .a=0x82, .x=0xaf, .y=0x4f, .sp=0x22, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0xed}, {.addr=0xcea1, .value=0xf8}, {.addr=0xcea2, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xcea3, .a=0x82, .x=0xed, .y=0x4f, .sp=0x22, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0xed}, {.addr=0xcea1, .value=0xf8}, {.addr=0xcea2, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xcea1, .value=0xf8, .type=IO_READ},
        {.addr=0xcea2, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0204) {
    const struct CPU_State initial_cpu = {.pc=0x107c, .a=0x6f, .x=0x3c, .y=0xd5, .sp=0x3c, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0xbf}, {.addr=0x107c, .value=0xf8}, {.addr=0x107d, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x107e, .a=0x6f, .x=0xbf, .y=0xd5, .sp=0x3c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0xbf}, {.addr=0x107c, .value=0xf8}, {.addr=0x107d, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x107c, .value=0xf8, .type=IO_READ},
        {.addr=0x107d, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0205) {
    const struct CPU_State initial_cpu = {.pc=0x36d2, .a=0x1d, .x=0xb0, .y=0x59, .sp=0x2d, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x73}, {.addr=0x36d2, .value=0xf8}, {.addr=0x36d3, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x36d4, .a=0x1d, .x=0x73, .y=0x59, .sp=0x2d, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x73}, {.addr=0x36d2, .value=0xf8}, {.addr=0x36d3, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x36d2, .value=0xf8, .type=IO_READ},
        {.addr=0x36d3, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0206) {
    const struct CPU_State initial_cpu = {.pc=0x485c, .a=0x13, .x=0x4b, .y=0xea, .sp=0x46, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x0b}, {.addr=0x485c, .value=0xf8}, {.addr=0x485d, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x485e, .a=0x13, .x=0x0b, .y=0xea, .sp=0x46, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x0b}, {.addr=0x485c, .value=0xf8}, {.addr=0x485d, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x485c, .value=0xf8, .type=IO_READ},
        {.addr=0x485d, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd9ea, .a=0x80, .x=0x97, .y=0xc0, .sp=0xb1, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x4d}, {.addr=0xd9ea, .value=0xf8}, {.addr=0xd9eb, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xd9ec, .a=0x80, .x=0x4d, .y=0xc0, .sp=0xb1, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x4d}, {.addr=0xd9ea, .value=0xf8}, {.addr=0xd9eb, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9ea, .value=0xf8, .type=IO_READ},
        {.addr=0xd9eb, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0208) {
    const struct CPU_State initial_cpu = {.pc=0x12f0, .a=0xf3, .x=0x6a, .y=0xd2, .sp=0xb1, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x95}, {.addr=0x12f0, .value=0xf8}, {.addr=0x12f1, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x12f2, .a=0xf3, .x=0x95, .y=0xd2, .sp=0xb1, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x95}, {.addr=0x12f0, .value=0xf8}, {.addr=0x12f1, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x12f0, .value=0xf8, .type=IO_READ},
        {.addr=0x12f1, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0209) {
    const struct CPU_State initial_cpu = {.pc=0x246f, .a=0x70, .x=0xaf, .y=0xef, .sp=0x68, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x31}, {.addr=0x246f, .value=0xf8}, {.addr=0x2470, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x2471, .a=0x70, .x=0x31, .y=0xef, .sp=0x68, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x31}, {.addr=0x246f, .value=0xf8}, {.addr=0x2470, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x246f, .value=0xf8, .type=IO_READ},
        {.addr=0x2470, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_020A) {
    const struct CPU_State initial_cpu = {.pc=0x094e, .a=0x5e, .x=0xaa, .y=0xe4, .sp=0x3c, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x46}, {.addr=0x094e, .value=0xf8}, {.addr=0x094f, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x0950, .a=0x5e, .x=0x46, .y=0xe4, .sp=0x3c, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x46}, {.addr=0x094e, .value=0xf8}, {.addr=0x094f, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x094e, .value=0xf8, .type=IO_READ},
        {.addr=0x094f, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_020C) {
    const struct CPU_State initial_cpu = {.pc=0x5e2a, .a=0xc7, .x=0x5a, .y=0xd3, .sp=0x19, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xdc}, {.addr=0x5e2a, .value=0xf8}, {.addr=0x5e2b, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x5e2c, .a=0xc7, .x=0xdc, .y=0xd3, .sp=0x19, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xdc}, {.addr=0x5e2a, .value=0xf8}, {.addr=0x5e2b, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e2a, .value=0xf8, .type=IO_READ},
        {.addr=0x5e2b, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_020D) {
    const struct CPU_State initial_cpu = {.pc=0xbbfa, .a=0xe1, .x=0x79, .y=0xb5, .sp=0x0c, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x78}, {.addr=0xbbfa, .value=0xf8}, {.addr=0xbbfb, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xbbfc, .a=0xe1, .x=0x78, .y=0xb5, .sp=0x0c, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x78}, {.addr=0xbbfa, .value=0xf8}, {.addr=0xbbfb, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbfa, .value=0xf8, .type=IO_READ},
        {.addr=0xbbfb, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_020E) {
    const struct CPU_State initial_cpu = {.pc=0x6e09, .a=0xb0, .x=0xab, .y=0xca, .sp=0x30, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x92}, {.addr=0x6e09, .value=0xf8}, {.addr=0x6e0a, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x6e0b, .a=0xb0, .x=0x92, .y=0xca, .sp=0x30, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x92}, {.addr=0x6e09, .value=0xf8}, {.addr=0x6e0a, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e09, .value=0xf8, .type=IO_READ},
        {.addr=0x6e0a, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5254, .a=0xbc, .x=0xcc, .y=0x0a, .sp=0x28, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x71}, {.addr=0x5254, .value=0xf8}, {.addr=0x5255, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x5256, .a=0xbc, .x=0x71, .y=0x0a, .sp=0x28, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x71}, {.addr=0x5254, .value=0xf8}, {.addr=0x5255, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5254, .value=0xf8, .type=IO_READ},
        {.addr=0x5255, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4483, .a=0xcf, .x=0xff, .y=0x2c, .sp=0x7e, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xac}, {.addr=0x4483, .value=0xf8}, {.addr=0x4484, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x4485, .a=0xcf, .x=0xac, .y=0x2c, .sp=0x7e, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xac}, {.addr=0x4483, .value=0xf8}, {.addr=0x4484, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4483, .value=0xf8, .type=IO_READ},
        {.addr=0x4484, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0211) {
    const struct CPU_State initial_cpu = {.pc=0x1ac2, .a=0xbd, .x=0x41, .y=0xac, .sp=0xf5, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x9a}, {.addr=0x1ac2, .value=0xf8}, {.addr=0x1ac3, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x1ac4, .a=0xbd, .x=0x9a, .y=0xac, .sp=0xf5, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x9a}, {.addr=0x1ac2, .value=0xf8}, {.addr=0x1ac3, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ac2, .value=0xf8, .type=IO_READ},
        {.addr=0x1ac3, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0213) {
    const struct CPU_State initial_cpu = {.pc=0x4d2d, .a=0x15, .x=0x7c, .y=0x72, .sp=0x8e, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x34}, {.addr=0x4d2d, .value=0xf8}, {.addr=0x4d2e, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x4d2f, .a=0x15, .x=0x34, .y=0x72, .sp=0x8e, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x34}, {.addr=0x4d2d, .value=0xf8}, {.addr=0x4d2e, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d2d, .value=0xf8, .type=IO_READ},
        {.addr=0x4d2e, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0214) {
    const struct CPU_State initial_cpu = {.pc=0x2e76, .a=0x3e, .x=0x9a, .y=0x4f, .sp=0x8b, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xf1}, {.addr=0x2e76, .value=0xf8}, {.addr=0x2e77, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x2e78, .a=0x3e, .x=0xf1, .y=0x4f, .sp=0x8b, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xf1}, {.addr=0x2e76, .value=0xf8}, {.addr=0x2e77, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e76, .value=0xf8, .type=IO_READ},
        {.addr=0x2e77, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0215) {
    const struct CPU_State initial_cpu = {.pc=0x2119, .a=0xd7, .x=0xf9, .y=0x54, .sp=0xea, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xa4}, {.addr=0x2119, .value=0xf8}, {.addr=0x211a, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x211b, .a=0xd7, .x=0xa4, .y=0x54, .sp=0xea, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xa4}, {.addr=0x2119, .value=0xf8}, {.addr=0x211a, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x2119, .value=0xf8, .type=IO_READ},
        {.addr=0x211a, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0216) {
    const struct CPU_State initial_cpu = {.pc=0xe40a, .a=0x78, .x=0xe7, .y=0x57, .sp=0x34, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x15}, {.addr=0xe40a, .value=0xf8}, {.addr=0xe40b, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xe40c, .a=0x78, .x=0x15, .y=0x57, .sp=0x34, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x15}, {.addr=0xe40a, .value=0xf8}, {.addr=0xe40b, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe40a, .value=0xf8, .type=IO_READ},
        {.addr=0xe40b, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0217) {
    const struct CPU_State initial_cpu = {.pc=0xf847, .a=0x25, .x=0x9e, .y=0x20, .sp=0xe0, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x30}, {.addr=0xf847, .value=0xf8}, {.addr=0xf848, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xf849, .a=0x25, .x=0x30, .y=0x20, .sp=0xe0, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x30}, {.addr=0xf847, .value=0xf8}, {.addr=0xf848, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xf847, .value=0xf8, .type=IO_READ},
        {.addr=0xf848, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0218) {
    const struct CPU_State initial_cpu = {.pc=0xf40e, .a=0xe5, .x=0xe3, .y=0x56, .sp=0xfc, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x3d}, {.addr=0xf40e, .value=0xf8}, {.addr=0xf40f, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xf410, .a=0xe5, .x=0x3d, .y=0x56, .sp=0xfc, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x3d}, {.addr=0xf40e, .value=0xf8}, {.addr=0xf40f, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf40e, .value=0xf8, .type=IO_READ},
        {.addr=0xf40f, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0219) {
    const struct CPU_State initial_cpu = {.pc=0xb601, .a=0x97, .x=0xd3, .y=0x3d, .sp=0xd8, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xf0}, {.addr=0xb601, .value=0xf8}, {.addr=0xb602, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xb603, .a=0x97, .x=0xf0, .y=0x3d, .sp=0xd8, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xf0}, {.addr=0xb601, .value=0xf8}, {.addr=0xb602, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xb601, .value=0xf8, .type=IO_READ},
        {.addr=0xb602, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_021A) {
    const struct CPU_State initial_cpu = {.pc=0x9b36, .a=0x9e, .x=0xc9, .y=0x0e, .sp=0xec, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0xd0}, {.addr=0x9b36, .value=0xf8}, {.addr=0x9b37, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x9b38, .a=0x9e, .x=0xd0, .y=0x0e, .sp=0xec, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0xd0}, {.addr=0x9b36, .value=0xf8}, {.addr=0x9b37, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b36, .value=0xf8, .type=IO_READ},
        {.addr=0x9b37, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_021B) {
    const struct CPU_State initial_cpu = {.pc=0x38f0, .a=0x09, .x=0x43, .y=0x76, .sp=0xbd, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xb2}, {.addr=0x38f0, .value=0xf8}, {.addr=0x38f1, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x38f2, .a=0x09, .x=0xb2, .y=0x76, .sp=0xbd, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xb2}, {.addr=0x38f0, .value=0xf8}, {.addr=0x38f1, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x38f0, .value=0xf8, .type=IO_READ},
        {.addr=0x38f1, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_021C) {
    const struct CPU_State initial_cpu = {.pc=0x8473, .a=0xf9, .x=0x60, .y=0x11, .sp=0x9b, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x96}, {.addr=0x8473, .value=0xf8}, {.addr=0x8474, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x8475, .a=0xf9, .x=0x96, .y=0x11, .sp=0x9b, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x96}, {.addr=0x8473, .value=0xf8}, {.addr=0x8474, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8473, .value=0xf8, .type=IO_READ},
        {.addr=0x8474, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_021D) {
    const struct CPU_State initial_cpu = {.pc=0x5b70, .a=0x21, .x=0x30, .y=0x82, .sp=0x1b, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x82}, {.addr=0x5b70, .value=0xf8}, {.addr=0x5b71, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x5b72, .a=0x21, .x=0x82, .y=0x82, .sp=0x1b, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x82}, {.addr=0x5b70, .value=0xf8}, {.addr=0x5b71, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b70, .value=0xf8, .type=IO_READ},
        {.addr=0x5b71, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_021E) {
    const struct CPU_State initial_cpu = {.pc=0x9b57, .a=0x4f, .x=0xa1, .y=0xc5, .sp=0x77, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x3a}, {.addr=0x9b57, .value=0xf8}, {.addr=0x9b58, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x9b59, .a=0x4f, .x=0x3a, .y=0xc5, .sp=0x77, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x3a}, {.addr=0x9b57, .value=0xf8}, {.addr=0x9b58, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b57, .value=0xf8, .type=IO_READ},
        {.addr=0x9b58, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_021F) {
    const struct CPU_State initial_cpu = {.pc=0x717e, .a=0xa4, .x=0x3c, .y=0x36, .sp=0x00, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0xd3}, {.addr=0x717e, .value=0xf8}, {.addr=0x717f, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x7180, .a=0xa4, .x=0xd3, .y=0x36, .sp=0x00, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0xd3}, {.addr=0x717e, .value=0xf8}, {.addr=0x717f, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x717e, .value=0xf8, .type=IO_READ},
        {.addr=0x717f, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0220) {
    const struct CPU_State initial_cpu = {.pc=0x099e, .a=0xbd, .x=0xcb, .y=0xfc, .sp=0xd8, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x77}, {.addr=0x099e, .value=0xf8}, {.addr=0x099f, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x09a0, .a=0xbd, .x=0x77, .y=0xfc, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x77}, {.addr=0x099e, .value=0xf8}, {.addr=0x099f, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x099e, .value=0xf8, .type=IO_READ},
        {.addr=0x099f, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0221) {
    const struct CPU_State initial_cpu = {.pc=0xc34c, .a=0x40, .x=0x37, .y=0xb0, .sp=0x5f, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0xe9}, {.addr=0xc34c, .value=0xf8}, {.addr=0xc34d, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xc34e, .a=0x40, .x=0xe9, .y=0xb0, .sp=0x5f, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0xe9}, {.addr=0xc34c, .value=0xf8}, {.addr=0xc34d, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc34c, .value=0xf8, .type=IO_READ},
        {.addr=0xc34d, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8a09, .a=0xe1, .x=0x33, .y=0x91, .sp=0xda, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x12}, {.addr=0x8a09, .value=0xf8}, {.addr=0x8a0a, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x8a0b, .a=0xe1, .x=0x12, .y=0x91, .sp=0xda, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x12}, {.addr=0x8a09, .value=0xf8}, {.addr=0x8a0a, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a09, .value=0xf8, .type=IO_READ},
        {.addr=0x8a0a, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0223) {
    const struct CPU_State initial_cpu = {.pc=0x820a, .a=0x20, .x=0x52, .y=0x9b, .sp=0xd9, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x0f}, {.addr=0x820a, .value=0xf8}, {.addr=0x820b, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x820c, .a=0x20, .x=0x0f, .y=0x9b, .sp=0xd9, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x0f}, {.addr=0x820a, .value=0xf8}, {.addr=0x820b, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x820a, .value=0xf8, .type=IO_READ},
        {.addr=0x820b, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0225) {
    const struct CPU_State initial_cpu = {.pc=0x8659, .a=0x0a, .x=0x12, .y=0xe1, .sp=0x21, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x4e}, {.addr=0x8659, .value=0xf8}, {.addr=0x865a, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x865b, .a=0x0a, .x=0x4e, .y=0xe1, .sp=0x21, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x4e}, {.addr=0x8659, .value=0xf8}, {.addr=0x865a, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8659, .value=0xf8, .type=IO_READ},
        {.addr=0x865a, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0226) {
    const struct CPU_State initial_cpu = {.pc=0xa6f3, .a=0x2c, .x=0x7f, .y=0xfb, .sp=0xb7, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x2c}, {.addr=0xa6f3, .value=0xf8}, {.addr=0xa6f4, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xa6f5, .a=0x2c, .x=0x2c, .y=0xfb, .sp=0xb7, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x2c}, {.addr=0xa6f3, .value=0xf8}, {.addr=0xa6f4, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6f3, .value=0xf8, .type=IO_READ},
        {.addr=0xa6f4, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe7dd, .a=0x2a, .x=0x3f, .y=0x1a, .sp=0x4c, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x89}, {.addr=0xe7dd, .value=0xf8}, {.addr=0xe7de, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xe7df, .a=0x2a, .x=0x89, .y=0x1a, .sp=0x4c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x89}, {.addr=0xe7dd, .value=0xf8}, {.addr=0xe7de, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7dd, .value=0xf8, .type=IO_READ},
        {.addr=0xe7de, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0228) {
    const struct CPU_State initial_cpu = {.pc=0xa6bc, .a=0x74, .x=0x4d, .y=0xcf, .sp=0xf8, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x00}, {.addr=0xa6bc, .value=0xf8}, {.addr=0xa6bd, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xa6be, .a=0x74, .x=0x00, .y=0xcf, .sp=0xf8, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x00}, {.addr=0xa6bc, .value=0xf8}, {.addr=0xa6bd, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6bc, .value=0xf8, .type=IO_READ},
        {.addr=0xa6bd, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0229) {
    const struct CPU_State initial_cpu = {.pc=0x2276, .a=0xb9, .x=0xa1, .y=0x10, .sp=0x29, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x0f}, {.addr=0x2276, .value=0xf8}, {.addr=0x2277, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x2278, .a=0xb9, .x=0x0f, .y=0x10, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x0f}, {.addr=0x2276, .value=0xf8}, {.addr=0x2277, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x2276, .value=0xf8, .type=IO_READ},
        {.addr=0x2277, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_022A) {
    const struct CPU_State initial_cpu = {.pc=0x0bed, .a=0x06, .x=0x1b, .y=0xed, .sp=0xad, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x3e}, {.addr=0x0bed, .value=0xf8}, {.addr=0x0bee, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x0bef, .a=0x06, .x=0x3e, .y=0xed, .sp=0xad, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x3e}, {.addr=0x0bed, .value=0xf8}, {.addr=0x0bee, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bed, .value=0xf8, .type=IO_READ},
        {.addr=0x0bee, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_022B) {
    const struct CPU_State initial_cpu = {.pc=0x41fb, .a=0x28, .x=0x5d, .y=0x9e, .sp=0xbc, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x4b}, {.addr=0x41fb, .value=0xf8}, {.addr=0x41fc, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x41fd, .a=0x28, .x=0x4b, .y=0x9e, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x4b}, {.addr=0x41fb, .value=0xf8}, {.addr=0x41fc, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x41fb, .value=0xf8, .type=IO_READ},
        {.addr=0x41fc, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_022C) {
    const struct CPU_State initial_cpu = {.pc=0xbd08, .a=0xc0, .x=0x95, .y=0x86, .sp=0x47, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x75}, {.addr=0xbd08, .value=0xf8}, {.addr=0xbd09, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xbd0a, .a=0xc0, .x=0x75, .y=0x86, .sp=0x47, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x75}, {.addr=0xbd08, .value=0xf8}, {.addr=0xbd09, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd08, .value=0xf8, .type=IO_READ},
        {.addr=0xbd09, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_022D) {
    const struct CPU_State initial_cpu = {.pc=0xa188, .a=0x9e, .x=0xe7, .y=0x87, .sp=0x9c, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xc4}, {.addr=0xa188, .value=0xf8}, {.addr=0xa189, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xa18a, .a=0x9e, .x=0xc4, .y=0x87, .sp=0x9c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xc4}, {.addr=0xa188, .value=0xf8}, {.addr=0xa189, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa188, .value=0xf8, .type=IO_READ},
        {.addr=0xa189, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_022E) {
    const struct CPU_State initial_cpu = {.pc=0xefc1, .a=0xbc, .x=0xfb, .y=0xff, .sp=0x92, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x21}, {.addr=0xefc1, .value=0xf8}, {.addr=0xefc2, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xefc3, .a=0xbc, .x=0x21, .y=0xff, .sp=0x92, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x21}, {.addr=0xefc1, .value=0xf8}, {.addr=0xefc2, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xefc1, .value=0xf8, .type=IO_READ},
        {.addr=0xefc2, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_022F) {
    const struct CPU_State initial_cpu = {.pc=0x165e, .a=0x47, .x=0x13, .y=0x46, .sp=0x08, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x0e}, {.addr=0x165e, .value=0xf8}, {.addr=0x165f, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x1660, .a=0x47, .x=0x0e, .y=0x46, .sp=0x08, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x0e}, {.addr=0x165e, .value=0xf8}, {.addr=0x165f, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x165e, .value=0xf8, .type=IO_READ},
        {.addr=0x165f, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0230) {
    const struct CPU_State initial_cpu = {.pc=0x06f1, .a=0x41, .x=0x74, .y=0xaf, .sp=0x4f, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0xdf}, {.addr=0x06f1, .value=0xf8}, {.addr=0x06f2, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x06f3, .a=0x41, .x=0xdf, .y=0xaf, .sp=0x4f, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0xdf}, {.addr=0x06f1, .value=0xf8}, {.addr=0x06f2, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x06f1, .value=0xf8, .type=IO_READ},
        {.addr=0x06f2, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0231) {
    const struct CPU_State initial_cpu = {.pc=0x431b, .a=0x93, .x=0xfe, .y=0x43, .sp=0xa6, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xef}, {.addr=0x431b, .value=0xf8}, {.addr=0x431c, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x431d, .a=0x93, .x=0xef, .y=0x43, .sp=0xa6, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xef}, {.addr=0x431b, .value=0xf8}, {.addr=0x431c, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x431b, .value=0xf8, .type=IO_READ},
        {.addr=0x431c, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0232) {
    const struct CPU_State initial_cpu = {.pc=0x9454, .a=0xa0, .x=0x68, .y=0xe7, .sp=0x92, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x6a}, {.addr=0x9454, .value=0xf8}, {.addr=0x9455, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x9456, .a=0xa0, .x=0x6a, .y=0xe7, .sp=0x92, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x6a}, {.addr=0x9454, .value=0xf8}, {.addr=0x9455, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x9454, .value=0xf8, .type=IO_READ},
        {.addr=0x9455, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0233) {
    const struct CPU_State initial_cpu = {.pc=0x5d64, .a=0x81, .x=0x3f, .y=0x6d, .sp=0xd1, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x9e}, {.addr=0x5d64, .value=0xf8}, {.addr=0x5d65, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x5d66, .a=0x81, .x=0x9e, .y=0x6d, .sp=0xd1, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x9e}, {.addr=0x5d64, .value=0xf8}, {.addr=0x5d65, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d64, .value=0xf8, .type=IO_READ},
        {.addr=0x5d65, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0234) {
    const struct CPU_State initial_cpu = {.pc=0xcae4, .a=0xbe, .x=0x4d, .y=0x18, .sp=0xed, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xb9}, {.addr=0xcae4, .value=0xf8}, {.addr=0xcae5, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xcae6, .a=0xbe, .x=0xb9, .y=0x18, .sp=0xed, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xb9}, {.addr=0xcae4, .value=0xf8}, {.addr=0xcae5, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xcae4, .value=0xf8, .type=IO_READ},
        {.addr=0xcae5, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0235) {
    const struct CPU_State initial_cpu = {.pc=0x517a, .a=0xf6, .x=0x17, .y=0x58, .sp=0x88, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x38}, {.addr=0x517a, .value=0xf8}, {.addr=0x517b, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x517c, .a=0xf6, .x=0x38, .y=0x58, .sp=0x88, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x38}, {.addr=0x517a, .value=0xf8}, {.addr=0x517b, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x517a, .value=0xf8, .type=IO_READ},
        {.addr=0x517b, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc3da, .a=0xd1, .x=0x41, .y=0x6c, .sp=0x10, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x38}, {.addr=0xc3da, .value=0xf8}, {.addr=0xc3db, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xc3dc, .a=0xd1, .x=0x38, .y=0x6c, .sp=0x10, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x38}, {.addr=0xc3da, .value=0xf8}, {.addr=0xc3db, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3da, .value=0xf8, .type=IO_READ},
        {.addr=0xc3db, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0237) {
    const struct CPU_State initial_cpu = {.pc=0xee19, .a=0x90, .x=0x12, .y=0xbc, .sp=0x3d, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xd4}, {.addr=0xee19, .value=0xf8}, {.addr=0xee1a, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xee1b, .a=0x90, .x=0xd4, .y=0xbc, .sp=0x3d, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xd4}, {.addr=0xee19, .value=0xf8}, {.addr=0xee1a, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xee19, .value=0xf8, .type=IO_READ},
        {.addr=0xee1a, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0239) {
    const struct CPU_State initial_cpu = {.pc=0x5d87, .a=0xa7, .x=0x3e, .y=0x58, .sp=0xb9, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0xf9}, {.addr=0x5d87, .value=0xf8}, {.addr=0x5d88, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x5d89, .a=0xa7, .x=0xf9, .y=0x58, .sp=0xb9, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0xf9}, {.addr=0x5d87, .value=0xf8}, {.addr=0x5d88, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d87, .value=0xf8, .type=IO_READ},
        {.addr=0x5d88, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_023A) {
    const struct CPU_State initial_cpu = {.pc=0x9b75, .a=0x63, .x=0xd5, .y=0xf9, .sp=0x66, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0xc2}, {.addr=0x9b75, .value=0xf8}, {.addr=0x9b76, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x9b77, .a=0x63, .x=0xc2, .y=0xf9, .sp=0x66, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0xc2}, {.addr=0x9b75, .value=0xf8}, {.addr=0x9b76, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b75, .value=0xf8, .type=IO_READ},
        {.addr=0x9b76, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_023B) {
    const struct CPU_State initial_cpu = {.pc=0xa889, .a=0x50, .x=0xa6, .y=0x28, .sp=0xa5, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x24}, {.addr=0xa889, .value=0xf8}, {.addr=0xa88a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xa88b, .a=0x50, .x=0x24, .y=0x28, .sp=0xa5, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x24}, {.addr=0xa889, .value=0xf8}, {.addr=0xa88a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa889, .value=0xf8, .type=IO_READ},
        {.addr=0xa88a, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_023C) {
    const struct CPU_State initial_cpu = {.pc=0x0585, .a=0x8e, .x=0x4a, .y=0x94, .sp=0x0e, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x79}, {.addr=0x0585, .value=0xf8}, {.addr=0x0586, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x0587, .a=0x8e, .x=0x79, .y=0x94, .sp=0x0e, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x79}, {.addr=0x0585, .value=0xf8}, {.addr=0x0586, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0585, .value=0xf8, .type=IO_READ},
        {.addr=0x0586, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_023D) {
    const struct CPU_State initial_cpu = {.pc=0x755e, .a=0xc3, .x=0xff, .y=0xca, .sp=0x5f, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xf7}, {.addr=0x755e, .value=0xf8}, {.addr=0x755f, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x7560, .a=0xc3, .x=0xf7, .y=0xca, .sp=0x5f, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xf7}, {.addr=0x755e, .value=0xf8}, {.addr=0x755f, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x755e, .value=0xf8, .type=IO_READ},
        {.addr=0x755f, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_023E) {
    const struct CPU_State initial_cpu = {.pc=0xb8aa, .a=0x22, .x=0x25, .y=0x1c, .sp=0xbd, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xef}, {.addr=0xb8aa, .value=0xf8}, {.addr=0xb8ab, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xb8ac, .a=0x22, .x=0xef, .y=0x1c, .sp=0xbd, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xef}, {.addr=0xb8aa, .value=0xf8}, {.addr=0xb8ab, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8aa, .value=0xf8, .type=IO_READ},
        {.addr=0xb8ab, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_023F) {
    const struct CPU_State initial_cpu = {.pc=0x345b, .a=0x90, .x=0x15, .y=0x3f, .sp=0x9a, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x7e}, {.addr=0x345b, .value=0xf8}, {.addr=0x345c, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x345d, .a=0x90, .x=0x7e, .y=0x3f, .sp=0x9a, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x7e}, {.addr=0x345b, .value=0xf8}, {.addr=0x345c, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x345b, .value=0xf8, .type=IO_READ},
        {.addr=0x345c, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0240) {
    const struct CPU_State initial_cpu = {.pc=0xa8be, .a=0xdf, .x=0x13, .y=0x3b, .sp=0xd8, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x06}, {.addr=0xa8be, .value=0xf8}, {.addr=0xa8bf, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xa8c0, .a=0xdf, .x=0x06, .y=0x3b, .sp=0xd8, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x06}, {.addr=0xa8be, .value=0xf8}, {.addr=0xa8bf, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8be, .value=0xf8, .type=IO_READ},
        {.addr=0xa8bf, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0241) {
    const struct CPU_State initial_cpu = {.pc=0xda42, .a=0xbe, .x=0xe4, .y=0x0a, .sp=0x56, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xd3}, {.addr=0xda42, .value=0xf8}, {.addr=0xda43, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xda44, .a=0xbe, .x=0xd3, .y=0x0a, .sp=0x56, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xd3}, {.addr=0xda42, .value=0xf8}, {.addr=0xda43, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xda42, .value=0xf8, .type=IO_READ},
        {.addr=0xda43, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0242) {
    const struct CPU_State initial_cpu = {.pc=0xf9c8, .a=0x8a, .x=0x08, .y=0x10, .sp=0x34, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0xac}, {.addr=0xf9c8, .value=0xf8}, {.addr=0xf9c9, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xf9ca, .a=0x8a, .x=0xac, .y=0x10, .sp=0x34, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0xac}, {.addr=0xf9c8, .value=0xf8}, {.addr=0xf9c9, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9c8, .value=0xf8, .type=IO_READ},
        {.addr=0xf9c9, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0243) {
    const struct CPU_State initial_cpu = {.pc=0x7131, .a=0x6e, .x=0x8c, .y=0xdf, .sp=0x44, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x7d}, {.addr=0x7131, .value=0xf8}, {.addr=0x7132, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x7133, .a=0x6e, .x=0x7d, .y=0xdf, .sp=0x44, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x7d}, {.addr=0x7131, .value=0xf8}, {.addr=0x7132, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7131, .value=0xf8, .type=IO_READ},
        {.addr=0x7132, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0244) {
    const struct CPU_State initial_cpu = {.pc=0x4257, .a=0x03, .x=0xed, .y=0x87, .sp=0x78, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x80}, {.addr=0x4257, .value=0xf8}, {.addr=0x4258, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x4259, .a=0x03, .x=0x80, .y=0x87, .sp=0x78, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x80}, {.addr=0x4257, .value=0xf8}, {.addr=0x4258, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x4257, .value=0xf8, .type=IO_READ},
        {.addr=0x4258, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0245) {
    const struct CPU_State initial_cpu = {.pc=0x2554, .a=0x2b, .x=0x07, .y=0x84, .sp=0x5f, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x5f}, {.addr=0x2554, .value=0xf8}, {.addr=0x2555, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x2556, .a=0x2b, .x=0x5f, .y=0x84, .sp=0x5f, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x5f}, {.addr=0x2554, .value=0xf8}, {.addr=0x2555, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2554, .value=0xf8, .type=IO_READ},
        {.addr=0x2555, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0246) {
    const struct CPU_State initial_cpu = {.pc=0x8563, .a=0x45, .x=0xf0, .y=0x65, .sp=0x6c, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x65}, {.addr=0x8563, .value=0xf8}, {.addr=0x8564, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x8565, .a=0x45, .x=0x65, .y=0x65, .sp=0x6c, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x65}, {.addr=0x8563, .value=0xf8}, {.addr=0x8564, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8563, .value=0xf8, .type=IO_READ},
        {.addr=0x8564, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0247) {
    const struct CPU_State initial_cpu = {.pc=0x3a25, .a=0x63, .x=0xe1, .y=0x49, .sp=0xb6, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x68}, {.addr=0x3a25, .value=0xf8}, {.addr=0x3a26, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x3a27, .a=0x63, .x=0x68, .y=0x49, .sp=0xb6, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x68}, {.addr=0x3a25, .value=0xf8}, {.addr=0x3a26, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a25, .value=0xf8, .type=IO_READ},
        {.addr=0x3a26, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0248) {
    const struct CPU_State initial_cpu = {.pc=0xa7fe, .a=0x27, .x=0xe2, .y=0x95, .sp=0x86, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x25}, {.addr=0xa7fe, .value=0xf8}, {.addr=0xa7ff, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xa800, .a=0x27, .x=0x25, .y=0x95, .sp=0x86, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x25}, {.addr=0xa7fe, .value=0xf8}, {.addr=0xa7ff, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7fe, .value=0xf8, .type=IO_READ},
        {.addr=0xa7ff, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0249) {
    const struct CPU_State initial_cpu = {.pc=0x079f, .a=0x46, .x=0xf5, .y=0x2b, .sp=0x8c, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x60}, {.addr=0x079f, .value=0xf8}, {.addr=0x07a0, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x07a1, .a=0x46, .x=0x60, .y=0x2b, .sp=0x8c, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x60}, {.addr=0x079f, .value=0xf8}, {.addr=0x07a0, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x079f, .value=0xf8, .type=IO_READ},
        {.addr=0x07a0, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_024A) {
    const struct CPU_State initial_cpu = {.pc=0xa055, .a=0xd4, .x=0xf1, .y=0x81, .sp=0x0d, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xc0}, {.addr=0xa055, .value=0xf8}, {.addr=0xa056, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xa057, .a=0xd4, .x=0xc0, .y=0x81, .sp=0x0d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xc0}, {.addr=0xa055, .value=0xf8}, {.addr=0xa056, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xa055, .value=0xf8, .type=IO_READ},
        {.addr=0xa056, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_024C) {
    const struct CPU_State initial_cpu = {.pc=0x09ab, .a=0x54, .x=0x90, .y=0x94, .sp=0xec, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x6d}, {.addr=0x09ab, .value=0xf8}, {.addr=0x09ac, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x09ad, .a=0x54, .x=0x6d, .y=0x94, .sp=0xec, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x6d}, {.addr=0x09ab, .value=0xf8}, {.addr=0x09ac, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x09ab, .value=0xf8, .type=IO_READ},
        {.addr=0x09ac, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_024D) {
    const struct CPU_State initial_cpu = {.pc=0x1af4, .a=0xf4, .x=0x67, .y=0x42, .sp=0x0d, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x1a}, {.addr=0x1af4, .value=0xf8}, {.addr=0x1af5, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x1af6, .a=0xf4, .x=0x1a, .y=0x42, .sp=0x0d, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x1a}, {.addr=0x1af4, .value=0xf8}, {.addr=0x1af5, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1af4, .value=0xf8, .type=IO_READ},
        {.addr=0x1af5, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_024F) {
    const struct CPU_State initial_cpu = {.pc=0x1f14, .a=0x01, .x=0xa7, .y=0xf1, .sp=0xf9, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x22}, {.addr=0x1f14, .value=0xf8}, {.addr=0x1f15, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x1f16, .a=0x01, .x=0x22, .y=0xf1, .sp=0xf9, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x22}, {.addr=0x1f14, .value=0xf8}, {.addr=0x1f15, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f14, .value=0xf8, .type=IO_READ},
        {.addr=0x1f15, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0250) {
    const struct CPU_State initial_cpu = {.pc=0x5244, .a=0x28, .x=0x5c, .y=0x16, .sp=0x7a, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0xb4}, {.addr=0x5244, .value=0xf8}, {.addr=0x5245, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x5246, .a=0x28, .x=0xb4, .y=0x16, .sp=0x7a, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0xb4}, {.addr=0x5244, .value=0xf8}, {.addr=0x5245, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5244, .value=0xf8, .type=IO_READ},
        {.addr=0x5245, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0251) {
    const struct CPU_State initial_cpu = {.pc=0x8908, .a=0xce, .x=0xef, .y=0x42, .sp=0x29, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x29}, {.addr=0x8908, .value=0xf8}, {.addr=0x8909, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x890a, .a=0xce, .x=0x29, .y=0x42, .sp=0x29, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x29}, {.addr=0x8908, .value=0xf8}, {.addr=0x8909, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8908, .value=0xf8, .type=IO_READ},
        {.addr=0x8909, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0252) {
    const struct CPU_State initial_cpu = {.pc=0xa5cf, .a=0x06, .x=0xc5, .y=0xb9, .sp=0xdb, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xd4}, {.addr=0xa5cf, .value=0xf8}, {.addr=0xa5d0, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xa5d1, .a=0x06, .x=0xd4, .y=0xb9, .sp=0xdb, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xd4}, {.addr=0xa5cf, .value=0xf8}, {.addr=0xa5d0, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5cf, .value=0xf8, .type=IO_READ},
        {.addr=0xa5d0, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0253) {
    const struct CPU_State initial_cpu = {.pc=0xea48, .a=0x79, .x=0x33, .y=0xdb, .sp=0x2b, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x58}, {.addr=0xea48, .value=0xf8}, {.addr=0xea49, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xea4a, .a=0x79, .x=0x58, .y=0xdb, .sp=0x2b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x58}, {.addr=0xea48, .value=0xf8}, {.addr=0xea49, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xea48, .value=0xf8, .type=IO_READ},
        {.addr=0xea49, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0254) {
    const struct CPU_State initial_cpu = {.pc=0x49dc, .a=0x8c, .x=0x5e, .y=0x5a, .sp=0x31, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xab}, {.addr=0x49dc, .value=0xf8}, {.addr=0x49dd, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x49de, .a=0x8c, .x=0xab, .y=0x5a, .sp=0x31, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xab}, {.addr=0x49dc, .value=0xf8}, {.addr=0x49dd, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x49dc, .value=0xf8, .type=IO_READ},
        {.addr=0x49dd, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0255) {
    const struct CPU_State initial_cpu = {.pc=0x7fa3, .a=0x67, .x=0x36, .y=0x90, .sp=0x0e, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xf8}, {.addr=0x7fa3, .value=0xf8}, {.addr=0x7fa4, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x7fa5, .a=0x67, .x=0xf8, .y=0x90, .sp=0x0e, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xf8}, {.addr=0x7fa3, .value=0xf8}, {.addr=0x7fa4, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fa3, .value=0xf8, .type=IO_READ},
        {.addr=0x7fa4, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0256) {
    const struct CPU_State initial_cpu = {.pc=0x1c67, .a=0x39, .x=0xdc, .y=0x04, .sp=0xb4, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x80}, {.addr=0x1c67, .value=0xf8}, {.addr=0x1c68, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x1c69, .a=0x39, .x=0x80, .y=0x04, .sp=0xb4, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x80}, {.addr=0x1c67, .value=0xf8}, {.addr=0x1c68, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c67, .value=0xf8, .type=IO_READ},
        {.addr=0x1c68, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0257) {
    const struct CPU_State initial_cpu = {.pc=0x76ec, .a=0x9c, .x=0x66, .y=0x9c, .sp=0x94, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x8c}, {.addr=0x76ec, .value=0xf8}, {.addr=0x76ed, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x76ee, .a=0x9c, .x=0x8c, .y=0x9c, .sp=0x94, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x8c}, {.addr=0x76ec, .value=0xf8}, {.addr=0x76ed, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x76ec, .value=0xf8, .type=IO_READ},
        {.addr=0x76ed, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0258) {
    const struct CPU_State initial_cpu = {.pc=0x9de1, .a=0x38, .x=0x24, .y=0x4a, .sp=0xf7, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xd4}, {.addr=0x9de1, .value=0xf8}, {.addr=0x9de2, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x9de3, .a=0x38, .x=0xd4, .y=0x4a, .sp=0xf7, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xd4}, {.addr=0x9de1, .value=0xf8}, {.addr=0x9de2, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9de1, .value=0xf8, .type=IO_READ},
        {.addr=0x9de2, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0259) {
    const struct CPU_State initial_cpu = {.pc=0xedf9, .a=0xaa, .x=0xcb, .y=0xa6, .sp=0x59, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x5f}, {.addr=0xedf9, .value=0xf8}, {.addr=0xedfa, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xedfb, .a=0xaa, .x=0x5f, .y=0xa6, .sp=0x59, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x5f}, {.addr=0xedf9, .value=0xf8}, {.addr=0xedfa, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xedf9, .value=0xf8, .type=IO_READ},
        {.addr=0xedfa, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_025A) {
    const struct CPU_State initial_cpu = {.pc=0xd22c, .a=0xbb, .x=0xa8, .y=0xec, .sp=0xa7, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x76}, {.addr=0xd22c, .value=0xf8}, {.addr=0xd22d, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xd22e, .a=0xbb, .x=0x76, .y=0xec, .sp=0xa7, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x76}, {.addr=0xd22c, .value=0xf8}, {.addr=0xd22d, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd22c, .value=0xf8, .type=IO_READ},
        {.addr=0xd22d, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_025B) {
    const struct CPU_State initial_cpu = {.pc=0x38ad, .a=0x6d, .x=0xb7, .y=0xa1, .sp=0xec, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x94}, {.addr=0x38ad, .value=0xf8}, {.addr=0x38ae, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x38af, .a=0x6d, .x=0x94, .y=0xa1, .sp=0xec, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x94}, {.addr=0x38ad, .value=0xf8}, {.addr=0x38ae, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x38ad, .value=0xf8, .type=IO_READ},
        {.addr=0x38ae, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_025C) {
    const struct CPU_State initial_cpu = {.pc=0x66e8, .a=0xfd, .x=0x63, .y=0xb0, .sp=0xb1, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x15}, {.addr=0x66e8, .value=0xf8}, {.addr=0x66e9, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x66ea, .a=0xfd, .x=0x15, .y=0xb0, .sp=0xb1, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x15}, {.addr=0x66e8, .value=0xf8}, {.addr=0x66e9, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x66e8, .value=0xf8, .type=IO_READ},
        {.addr=0x66e9, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_025D) {
    const struct CPU_State initial_cpu = {.pc=0xd3cc, .a=0xdb, .x=0xa9, .y=0x0c, .sp=0xbe, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0xbc}, {.addr=0xd3cc, .value=0xf8}, {.addr=0xd3cd, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xd3ce, .a=0xdb, .x=0xbc, .y=0x0c, .sp=0xbe, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0xbc}, {.addr=0xd3cc, .value=0xf8}, {.addr=0xd3cd, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3cc, .value=0xf8, .type=IO_READ},
        {.addr=0xd3cd, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_025E) {
    const struct CPU_State initial_cpu = {.pc=0x8ddd, .a=0xa9, .x=0x60, .y=0x12, .sp=0xe3, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xe5}, {.addr=0x8ddd, .value=0xf8}, {.addr=0x8dde, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x8ddf, .a=0xa9, .x=0xe5, .y=0x12, .sp=0xe3, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xe5}, {.addr=0x8ddd, .value=0xf8}, {.addr=0x8dde, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ddd, .value=0xf8, .type=IO_READ},
        {.addr=0x8dde, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_025F) {
    const struct CPU_State initial_cpu = {.pc=0xc3e3, .a=0xad, .x=0x42, .y=0x61, .sp=0x32, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xb0}, {.addr=0xc3e3, .value=0xf8}, {.addr=0xc3e4, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xc3e5, .a=0xad, .x=0xb0, .y=0x61, .sp=0x32, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xb0}, {.addr=0xc3e3, .value=0xf8}, {.addr=0xc3e4, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3e3, .value=0xf8, .type=IO_READ},
        {.addr=0xc3e4, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0260) {
    const struct CPU_State initial_cpu = {.pc=0x3209, .a=0x64, .x=0xda, .y=0xe8, .sp=0xf6, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x72}, {.addr=0x3209, .value=0xf8}, {.addr=0x320a, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x320b, .a=0x64, .x=0x72, .y=0xe8, .sp=0xf6, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x72}, {.addr=0x3209, .value=0xf8}, {.addr=0x320a, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x3209, .value=0xf8, .type=IO_READ},
        {.addr=0x320a, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0261) {
    const struct CPU_State initial_cpu = {.pc=0x52ee, .a=0x1c, .x=0x79, .y=0x8c, .sp=0x49, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0xc6}, {.addr=0x52ee, .value=0xf8}, {.addr=0x52ef, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x52f0, .a=0x1c, .x=0xc6, .y=0x8c, .sp=0x49, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0xc6}, {.addr=0x52ee, .value=0xf8}, {.addr=0x52ef, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x52ee, .value=0xf8, .type=IO_READ},
        {.addr=0x52ef, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0262) {
    const struct CPU_State initial_cpu = {.pc=0x49df, .a=0x84, .x=0x24, .y=0xc4, .sp=0x4b, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x94}, {.addr=0x49df, .value=0xf8}, {.addr=0x49e0, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x49e1, .a=0x84, .x=0x94, .y=0xc4, .sp=0x4b, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x94}, {.addr=0x49df, .value=0xf8}, {.addr=0x49e0, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x49df, .value=0xf8, .type=IO_READ},
        {.addr=0x49e0, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0263) {
    const struct CPU_State initial_cpu = {.pc=0x616f, .a=0x58, .x=0x78, .y=0xec, .sp=0x56, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xec}, {.addr=0x616f, .value=0xf8}, {.addr=0x6170, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x6171, .a=0x58, .x=0xec, .y=0xec, .sp=0x56, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xec}, {.addr=0x616f, .value=0xf8}, {.addr=0x6170, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x616f, .value=0xf8, .type=IO_READ},
        {.addr=0x6170, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0264) {
    const struct CPU_State initial_cpu = {.pc=0x030e, .a=0x32, .x=0x05, .y=0xd8, .sp=0xc1, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x02}, {.addr=0x030e, .value=0xf8}, {.addr=0x030f, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x0310, .a=0x32, .x=0x02, .y=0xd8, .sp=0xc1, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x02}, {.addr=0x030e, .value=0xf8}, {.addr=0x030f, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x030e, .value=0xf8, .type=IO_READ},
        {.addr=0x030f, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0265) {
    const struct CPU_State initial_cpu = {.pc=0x1e6f, .a=0x1b, .x=0x43, .y=0xe1, .sp=0x0d, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x31}, {.addr=0x1e6f, .value=0xf8}, {.addr=0x1e70, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x1e71, .a=0x1b, .x=0x31, .y=0xe1, .sp=0x0d, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x31}, {.addr=0x1e6f, .value=0xf8}, {.addr=0x1e70, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e6f, .value=0xf8, .type=IO_READ},
        {.addr=0x1e70, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0267) {
    const struct CPU_State initial_cpu = {.pc=0x460e, .a=0x53, .x=0xa2, .y=0x32, .sp=0x36, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xd9}, {.addr=0x460e, .value=0xf8}, {.addr=0x460f, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x4610, .a=0x53, .x=0xd9, .y=0x32, .sp=0x36, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xd9}, {.addr=0x460e, .value=0xf8}, {.addr=0x460f, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x460e, .value=0xf8, .type=IO_READ},
        {.addr=0x460f, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0268) {
    const struct CPU_State initial_cpu = {.pc=0xa089, .a=0x3c, .x=0x3a, .y=0x51, .sp=0xa8, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x7b}, {.addr=0xa089, .value=0xf8}, {.addr=0xa08a, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xa08b, .a=0x3c, .x=0x7b, .y=0x51, .sp=0xa8, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x7b}, {.addr=0xa089, .value=0xf8}, {.addr=0xa08a, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xa089, .value=0xf8, .type=IO_READ},
        {.addr=0xa08a, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0269) {
    const struct CPU_State initial_cpu = {.pc=0x3ab1, .a=0x51, .x=0x17, .y=0xd5, .sp=0x47, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x91}, {.addr=0x3ab1, .value=0xf8}, {.addr=0x3ab2, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x3ab3, .a=0x51, .x=0x91, .y=0xd5, .sp=0x47, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x91}, {.addr=0x3ab1, .value=0xf8}, {.addr=0x3ab2, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ab1, .value=0xf8, .type=IO_READ},
        {.addr=0x3ab2, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_026A) {
    const struct CPU_State initial_cpu = {.pc=0x6618, .a=0x15, .x=0x19, .y=0x34, .sp=0x31, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x5a}, {.addr=0x6618, .value=0xf8}, {.addr=0x6619, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x661a, .a=0x15, .x=0x5a, .y=0x34, .sp=0x31, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x5a}, {.addr=0x6618, .value=0xf8}, {.addr=0x6619, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x6618, .value=0xf8, .type=IO_READ},
        {.addr=0x6619, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_026B) {
    const struct CPU_State initial_cpu = {.pc=0x5d4f, .a=0xc5, .x=0x83, .y=0xa4, .sp=0xaa, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x8b}, {.addr=0x5d4f, .value=0xf8}, {.addr=0x5d50, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x5d51, .a=0xc5, .x=0x8b, .y=0xa4, .sp=0xaa, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x8b}, {.addr=0x5d4f, .value=0xf8}, {.addr=0x5d50, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d4f, .value=0xf8, .type=IO_READ},
        {.addr=0x5d50, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_026C) {
    const struct CPU_State initial_cpu = {.pc=0xdda2, .a=0x1d, .x=0x9c, .y=0x5c, .sp=0xef, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xc8}, {.addr=0xdda2, .value=0xf8}, {.addr=0xdda3, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xdda4, .a=0x1d, .x=0xc8, .y=0x5c, .sp=0xef, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xc8}, {.addr=0xdda2, .value=0xf8}, {.addr=0xdda3, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xdda2, .value=0xf8, .type=IO_READ},
        {.addr=0xdda3, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_026D) {
    const struct CPU_State initial_cpu = {.pc=0x43d1, .a=0x55, .x=0x04, .y=0xef, .sp=0x42, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x05}, {.addr=0x43d1, .value=0xf8}, {.addr=0x43d2, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x43d3, .a=0x55, .x=0x05, .y=0xef, .sp=0x42, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x05}, {.addr=0x43d1, .value=0xf8}, {.addr=0x43d2, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x43d1, .value=0xf8, .type=IO_READ},
        {.addr=0x43d2, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_026F) {
    const struct CPU_State initial_cpu = {.pc=0xa31d, .a=0xd2, .x=0x70, .y=0x48, .sp=0x64, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0xa2}, {.addr=0xa31d, .value=0xf8}, {.addr=0xa31e, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xa31f, .a=0xd2, .x=0xa2, .y=0x48, .sp=0x64, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0xa2}, {.addr=0xa31d, .value=0xf8}, {.addr=0xa31e, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xa31d, .value=0xf8, .type=IO_READ},
        {.addr=0xa31e, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0270) {
    const struct CPU_State initial_cpu = {.pc=0xf047, .a=0xc6, .x=0x48, .y=0xc6, .sp=0x4f, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xee}, {.addr=0xf047, .value=0xf8}, {.addr=0xf048, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xf049, .a=0xc6, .x=0xee, .y=0xc6, .sp=0x4f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xee}, {.addr=0xf047, .value=0xf8}, {.addr=0xf048, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf047, .value=0xf8, .type=IO_READ},
        {.addr=0xf048, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0271) {
    const struct CPU_State initial_cpu = {.pc=0x2665, .a=0x46, .x=0xc9, .y=0x3f, .sp=0xae, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x9a}, {.addr=0x2665, .value=0xf8}, {.addr=0x2666, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x2667, .a=0x46, .x=0x9a, .y=0x3f, .sp=0xae, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x9a}, {.addr=0x2665, .value=0xf8}, {.addr=0x2666, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x2665, .value=0xf8, .type=IO_READ},
        {.addr=0x2666, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0272) {
    const struct CPU_State initial_cpu = {.pc=0xa42e, .a=0x40, .x=0x3b, .y=0x66, .sp=0x82, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x93}, {.addr=0xa42e, .value=0xf8}, {.addr=0xa42f, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xa430, .a=0x40, .x=0x93, .y=0x66, .sp=0x82, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x93}, {.addr=0xa42e, .value=0xf8}, {.addr=0xa42f, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa42e, .value=0xf8, .type=IO_READ},
        {.addr=0xa42f, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0273) {
    const struct CPU_State initial_cpu = {.pc=0xc68c, .a=0x87, .x=0xc5, .y=0xf9, .sp=0xd9, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xf8}, {.addr=0xc68c, .value=0xf8}, {.addr=0xc68d, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xc68e, .a=0x87, .x=0xf8, .y=0xf9, .sp=0xd9, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xf8}, {.addr=0xc68c, .value=0xf8}, {.addr=0xc68d, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xc68c, .value=0xf8, .type=IO_READ},
        {.addr=0xc68d, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0274) {
    const struct CPU_State initial_cpu = {.pc=0x9370, .a=0x54, .x=0x54, .y=0xfe, .sp=0x96, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0x70}, {.addr=0x9370, .value=0xf8}, {.addr=0x9371, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x9372, .a=0x54, .x=0x70, .y=0xfe, .sp=0x96, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0x70}, {.addr=0x9370, .value=0xf8}, {.addr=0x9371, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9370, .value=0xf8, .type=IO_READ},
        {.addr=0x9371, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0275) {
    const struct CPU_State initial_cpu = {.pc=0x804a, .a=0xfd, .x=0x33, .y=0xaf, .sp=0x76, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x9a}, {.addr=0x804a, .value=0xf8}, {.addr=0x804b, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x804c, .a=0xfd, .x=0x9a, .y=0xaf, .sp=0x76, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x9a}, {.addr=0x804a, .value=0xf8}, {.addr=0x804b, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x804a, .value=0xf8, .type=IO_READ},
        {.addr=0x804b, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0276) {
    const struct CPU_State initial_cpu = {.pc=0x7808, .a=0xf3, .x=0x2b, .y=0x3c, .sp=0xa1, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x57}, {.addr=0x7808, .value=0xf8}, {.addr=0x7809, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x780a, .a=0xf3, .x=0x57, .y=0x3c, .sp=0xa1, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x57}, {.addr=0x7808, .value=0xf8}, {.addr=0x7809, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7808, .value=0xf8, .type=IO_READ},
        {.addr=0x7809, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0277) {
    const struct CPU_State initial_cpu = {.pc=0x7da3, .a=0x6a, .x=0x41, .y=0xc1, .sp=0x3e, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x7d}, {.addr=0x7da3, .value=0xf8}, {.addr=0x7da4, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x7da5, .a=0x6a, .x=0x7d, .y=0xc1, .sp=0x3e, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x7d}, {.addr=0x7da3, .value=0xf8}, {.addr=0x7da4, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7da3, .value=0xf8, .type=IO_READ},
        {.addr=0x7da4, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0278) {
    const struct CPU_State initial_cpu = {.pc=0xa413, .a=0xca, .x=0xe4, .y=0x71, .sp=0xaa, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x3c}, {.addr=0xa413, .value=0xf8}, {.addr=0xa414, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xa415, .a=0xca, .x=0x3c, .y=0x71, .sp=0xaa, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x3c}, {.addr=0xa413, .value=0xf8}, {.addr=0xa414, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa413, .value=0xf8, .type=IO_READ},
        {.addr=0xa414, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0279) {
    const struct CPU_State initial_cpu = {.pc=0x96e3, .a=0x52, .x=0x9f, .y=0xbb, .sp=0xd4, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x1d}, {.addr=0x96e3, .value=0xf8}, {.addr=0x96e4, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x96e5, .a=0x52, .x=0x1d, .y=0xbb, .sp=0xd4, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x1d}, {.addr=0x96e3, .value=0xf8}, {.addr=0x96e4, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x96e3, .value=0xf8, .type=IO_READ},
        {.addr=0x96e4, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_027A) {
    const struct CPU_State initial_cpu = {.pc=0x345d, .a=0x9f, .x=0x49, .y=0x5f, .sp=0x8e, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x06}, {.addr=0x345d, .value=0xf8}, {.addr=0x345e, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x345f, .a=0x9f, .x=0x06, .y=0x5f, .sp=0x8e, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x06}, {.addr=0x345d, .value=0xf8}, {.addr=0x345e, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x345d, .value=0xf8, .type=IO_READ},
        {.addr=0x345e, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_027B) {
    const struct CPU_State initial_cpu = {.pc=0xb510, .a=0xe9, .x=0xc0, .y=0x42, .sp=0xcd, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x3c}, {.addr=0xb510, .value=0xf8}, {.addr=0xb511, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xb512, .a=0xe9, .x=0x3c, .y=0x42, .sp=0xcd, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x3c}, {.addr=0xb510, .value=0xf8}, {.addr=0xb511, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb510, .value=0xf8, .type=IO_READ},
        {.addr=0xb511, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_027C) {
    const struct CPU_State initial_cpu = {.pc=0x612d, .a=0x54, .x=0xd7, .y=0x9d, .sp=0xbe, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x0e}, {.addr=0x612d, .value=0xf8}, {.addr=0x612e, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x612f, .a=0x54, .x=0x0e, .y=0x9d, .sp=0xbe, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x0e}, {.addr=0x612d, .value=0xf8}, {.addr=0x612e, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x612d, .value=0xf8, .type=IO_READ},
        {.addr=0x612e, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_027D) {
    const struct CPU_State initial_cpu = {.pc=0x15f2, .a=0xbc, .x=0xf4, .y=0x72, .sp=0x26, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x0f}, {.addr=0x15f2, .value=0xf8}, {.addr=0x15f3, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x15f4, .a=0xbc, .x=0x0f, .y=0x72, .sp=0x26, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x0f}, {.addr=0x15f2, .value=0xf8}, {.addr=0x15f3, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x15f2, .value=0xf8, .type=IO_READ},
        {.addr=0x15f3, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_027E) {
    const struct CPU_State initial_cpu = {.pc=0x85bb, .a=0x32, .x=0xfb, .y=0xa0, .sp=0x01, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x5d}, {.addr=0x85bb, .value=0xf8}, {.addr=0x85bc, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x85bd, .a=0x32, .x=0x5d, .y=0xa0, .sp=0x01, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x5d}, {.addr=0x85bb, .value=0xf8}, {.addr=0x85bc, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x85bb, .value=0xf8, .type=IO_READ},
        {.addr=0x85bc, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_027F) {
    const struct CPU_State initial_cpu = {.pc=0x4745, .a=0xa9, .x=0xe9, .y=0x41, .sp=0x3e, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xc2}, {.addr=0x4745, .value=0xf8}, {.addr=0x4746, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x4747, .a=0xa9, .x=0xc2, .y=0x41, .sp=0x3e, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xc2}, {.addr=0x4745, .value=0xf8}, {.addr=0x4746, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4745, .value=0xf8, .type=IO_READ},
        {.addr=0x4746, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0280) {
    const struct CPU_State initial_cpu = {.pc=0xa863, .a=0xc1, .x=0xa8, .y=0x91, .sp=0xa4, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x88}, {.addr=0xa863, .value=0xf8}, {.addr=0xa864, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xa865, .a=0xc1, .x=0x88, .y=0x91, .sp=0xa4, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x88}, {.addr=0xa863, .value=0xf8}, {.addr=0xa864, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xa863, .value=0xf8, .type=IO_READ},
        {.addr=0xa864, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0281) {
    const struct CPU_State initial_cpu = {.pc=0x158f, .a=0x3c, .x=0xc8, .y=0x4e, .sp=0xa6, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x69}, {.addr=0x158f, .value=0xf8}, {.addr=0x1590, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x1591, .a=0x3c, .x=0x69, .y=0x4e, .sp=0xa6, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x69}, {.addr=0x158f, .value=0xf8}, {.addr=0x1590, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x158f, .value=0xf8, .type=IO_READ},
        {.addr=0x1590, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0282) {
    const struct CPU_State initial_cpu = {.pc=0xf71b, .a=0x4f, .x=0xb8, .y=0xdc, .sp=0xcb, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x43}, {.addr=0xf71b, .value=0xf8}, {.addr=0xf71c, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xf71d, .a=0x4f, .x=0x43, .y=0xdc, .sp=0xcb, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x43}, {.addr=0xf71b, .value=0xf8}, {.addr=0xf71c, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xf71b, .value=0xf8, .type=IO_READ},
        {.addr=0xf71c, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0283) {
    const struct CPU_State initial_cpu = {.pc=0x9595, .a=0x31, .x=0x97, .y=0x9f, .sp=0x0f, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x26}, {.addr=0x9595, .value=0xf8}, {.addr=0x9596, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x9597, .a=0x31, .x=0x26, .y=0x9f, .sp=0x0f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x26}, {.addr=0x9595, .value=0xf8}, {.addr=0x9596, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x9595, .value=0xf8, .type=IO_READ},
        {.addr=0x9596, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0284) {
    const struct CPU_State initial_cpu = {.pc=0x7c3e, .a=0x9d, .x=0xb2, .y=0x50, .sp=0xfa, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x65}, {.addr=0x7c3e, .value=0xf8}, {.addr=0x7c3f, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x7c40, .a=0x9d, .x=0x65, .y=0x50, .sp=0xfa, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x65}, {.addr=0x7c3e, .value=0xf8}, {.addr=0x7c3f, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c3e, .value=0xf8, .type=IO_READ},
        {.addr=0x7c3f, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0285) {
    const struct CPU_State initial_cpu = {.pc=0x9f0f, .a=0x36, .x=0xf1, .y=0xca, .sp=0xf8, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x19}, {.addr=0x9f0f, .value=0xf8}, {.addr=0x9f10, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x9f11, .a=0x36, .x=0x19, .y=0xca, .sp=0xf8, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x19}, {.addr=0x9f0f, .value=0xf8}, {.addr=0x9f10, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f0f, .value=0xf8, .type=IO_READ},
        {.addr=0x9f10, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0286) {
    const struct CPU_State initial_cpu = {.pc=0xe18b, .a=0x20, .x=0x6f, .y=0xa4, .sp=0x6c, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x3f}, {.addr=0xe18b, .value=0xf8}, {.addr=0xe18c, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xe18d, .a=0x20, .x=0x3f, .y=0xa4, .sp=0x6c, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x3f}, {.addr=0xe18b, .value=0xf8}, {.addr=0xe18c, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xe18b, .value=0xf8, .type=IO_READ},
        {.addr=0xe18c, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0287) {
    const struct CPU_State initial_cpu = {.pc=0xa4b0, .a=0xb7, .x=0x58, .y=0x78, .sp=0xfa, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x0a}, {.addr=0xa4b0, .value=0xf8}, {.addr=0xa4b1, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xa4b2, .a=0xb7, .x=0x0a, .y=0x78, .sp=0xfa, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x0a}, {.addr=0xa4b0, .value=0xf8}, {.addr=0xa4b1, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4b0, .value=0xf8, .type=IO_READ},
        {.addr=0xa4b1, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0288) {
    const struct CPU_State initial_cpu = {.pc=0x3037, .a=0x8e, .x=0x06, .y=0x85, .sp=0xd0, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x46}, {.addr=0x3037, .value=0xf8}, {.addr=0x3038, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x3039, .a=0x8e, .x=0x46, .y=0x85, .sp=0xd0, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x46}, {.addr=0x3037, .value=0xf8}, {.addr=0x3038, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x3037, .value=0xf8, .type=IO_READ},
        {.addr=0x3038, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3970, .a=0xa6, .x=0xaa, .y=0x52, .sp=0x12, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0xbf}, {.addr=0x3970, .value=0xf8}, {.addr=0x3971, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x3972, .a=0xa6, .x=0xbf, .y=0x52, .sp=0x12, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0xbf}, {.addr=0x3970, .value=0xf8}, {.addr=0x3971, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x3970, .value=0xf8, .type=IO_READ},
        {.addr=0x3971, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe934, .a=0x23, .x=0x17, .y=0xbc, .sp=0x50, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x2c}, {.addr=0xe934, .value=0xf8}, {.addr=0xe935, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xe936, .a=0x23, .x=0x2c, .y=0xbc, .sp=0x50, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x2c}, {.addr=0xe934, .value=0xf8}, {.addr=0xe935, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xe934, .value=0xf8, .type=IO_READ},
        {.addr=0xe935, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_028B) {
    const struct CPU_State initial_cpu = {.pc=0x2cef, .a=0x5c, .x=0xf6, .y=0xd7, .sp=0xbb, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0xbb}, {.addr=0x2cef, .value=0xf8}, {.addr=0x2cf0, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x2cf1, .a=0x5c, .x=0xbb, .y=0xd7, .sp=0xbb, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0xbb}, {.addr=0x2cef, .value=0xf8}, {.addr=0x2cf0, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cef, .value=0xf8, .type=IO_READ},
        {.addr=0x2cf0, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_028C) {
    const struct CPU_State initial_cpu = {.pc=0xb1c2, .a=0x57, .x=0x30, .y=0x5f, .sp=0x27, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x4e}, {.addr=0xb1c2, .value=0xf8}, {.addr=0xb1c3, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xb1c4, .a=0x57, .x=0x4e, .y=0x5f, .sp=0x27, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x4e}, {.addr=0xb1c2, .value=0xf8}, {.addr=0xb1c3, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1c2, .value=0xf8, .type=IO_READ},
        {.addr=0xb1c3, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_028D) {
    const struct CPU_State initial_cpu = {.pc=0x24d0, .a=0x4a, .x=0x12, .y=0xd6, .sp=0xe8, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x9c}, {.addr=0x24d0, .value=0xf8}, {.addr=0x24d1, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x24d2, .a=0x4a, .x=0x9c, .y=0xd6, .sp=0xe8, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x9c}, {.addr=0x24d0, .value=0xf8}, {.addr=0x24d1, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x24d0, .value=0xf8, .type=IO_READ},
        {.addr=0x24d1, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_028E) {
    const struct CPU_State initial_cpu = {.pc=0xbccd, .a=0xee, .x=0x3d, .y=0x9d, .sp=0xad, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xad}, {.addr=0xbccd, .value=0xf8}, {.addr=0xbcce, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xbccf, .a=0xee, .x=0xad, .y=0x9d, .sp=0xad, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xad}, {.addr=0xbccd, .value=0xf8}, {.addr=0xbcce, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xbccd, .value=0xf8, .type=IO_READ},
        {.addr=0xbcce, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_028F) {
    const struct CPU_State initial_cpu = {.pc=0x767e, .a=0x92, .x=0xe3, .y=0xd5, .sp=0xab, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xca}, {.addr=0x767e, .value=0xf8}, {.addr=0x767f, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x7680, .a=0x92, .x=0xca, .y=0xd5, .sp=0xab, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xca}, {.addr=0x767e, .value=0xf8}, {.addr=0x767f, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x767e, .value=0xf8, .type=IO_READ},
        {.addr=0x767f, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0290) {
    const struct CPU_State initial_cpu = {.pc=0xf60d, .a=0x88, .x=0x02, .y=0xa7, .sp=0x61, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x5a}, {.addr=0xf60d, .value=0xf8}, {.addr=0xf60e, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xf60f, .a=0x88, .x=0x5a, .y=0xa7, .sp=0x61, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x5a}, {.addr=0xf60d, .value=0xf8}, {.addr=0xf60e, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xf60d, .value=0xf8, .type=IO_READ},
        {.addr=0xf60e, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0291) {
    const struct CPU_State initial_cpu = {.pc=0x691b, .a=0x23, .x=0x33, .y=0x80, .sp=0x68, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xfe}, {.addr=0x691b, .value=0xf8}, {.addr=0x691c, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x691d, .a=0x23, .x=0xfe, .y=0x80, .sp=0x68, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xfe}, {.addr=0x691b, .value=0xf8}, {.addr=0x691c, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x691b, .value=0xf8, .type=IO_READ},
        {.addr=0x691c, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0292) {
    const struct CPU_State initial_cpu = {.pc=0x6764, .a=0x13, .x=0x5f, .y=0x74, .sp=0xe9, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x16}, {.addr=0x6764, .value=0xf8}, {.addr=0x6765, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x6766, .a=0x13, .x=0x16, .y=0x74, .sp=0xe9, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x16}, {.addr=0x6764, .value=0xf8}, {.addr=0x6765, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6764, .value=0xf8, .type=IO_READ},
        {.addr=0x6765, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0293) {
    const struct CPU_State initial_cpu = {.pc=0xa964, .a=0x50, .x=0xf2, .y=0x31, .sp=0xa8, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x8a}, {.addr=0xa964, .value=0xf8}, {.addr=0xa965, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xa966, .a=0x50, .x=0x8a, .y=0x31, .sp=0xa8, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x8a}, {.addr=0xa964, .value=0xf8}, {.addr=0xa965, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xa964, .value=0xf8, .type=IO_READ},
        {.addr=0xa965, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0294) {
    const struct CPU_State initial_cpu = {.pc=0x9d56, .a=0x01, .x=0x74, .y=0x9d, .sp=0x51, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x15}, {.addr=0x9d56, .value=0xf8}, {.addr=0x9d57, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x9d58, .a=0x01, .x=0x15, .y=0x9d, .sp=0x51, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x15}, {.addr=0x9d56, .value=0xf8}, {.addr=0x9d57, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d56, .value=0xf8, .type=IO_READ},
        {.addr=0x9d57, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0295) {
    const struct CPU_State initial_cpu = {.pc=0x74bf, .a=0x72, .x=0x72, .y=0x9c, .sp=0x9f, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x79}, {.addr=0x74bf, .value=0xf8}, {.addr=0x74c0, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x74c1, .a=0x72, .x=0x79, .y=0x9c, .sp=0x9f, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x79}, {.addr=0x74bf, .value=0xf8}, {.addr=0x74c0, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x74bf, .value=0xf8, .type=IO_READ},
        {.addr=0x74c0, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0296) {
    const struct CPU_State initial_cpu = {.pc=0x556e, .a=0x05, .x=0x31, .y=0x3b, .sp=0xd7, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x6f}, {.addr=0x556e, .value=0xf8}, {.addr=0x556f, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x5570, .a=0x05, .x=0x6f, .y=0x3b, .sp=0xd7, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x6f}, {.addr=0x556e, .value=0xf8}, {.addr=0x556f, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x556e, .value=0xf8, .type=IO_READ},
        {.addr=0x556f, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0297) {
    const struct CPU_State initial_cpu = {.pc=0x8eb8, .a=0x5e, .x=0x2e, .y=0xc0, .sp=0x5a, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x06}, {.addr=0x8eb8, .value=0xf8}, {.addr=0x8eb9, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x8eba, .a=0x5e, .x=0x06, .y=0xc0, .sp=0x5a, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x06}, {.addr=0x8eb8, .value=0xf8}, {.addr=0x8eb9, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8eb8, .value=0xf8, .type=IO_READ},
        {.addr=0x8eb9, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0298) {
    const struct CPU_State initial_cpu = {.pc=0x52d6, .a=0x2b, .x=0x8b, .y=0xd5, .sp=0x4b, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xd6}, {.addr=0x52d6, .value=0xf8}, {.addr=0x52d7, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x52d8, .a=0x2b, .x=0xd6, .y=0xd5, .sp=0x4b, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xd6}, {.addr=0x52d6, .value=0xf8}, {.addr=0x52d7, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x52d6, .value=0xf8, .type=IO_READ},
        {.addr=0x52d7, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_029A) {
    const struct CPU_State initial_cpu = {.pc=0x0bca, .a=0xe9, .x=0x57, .y=0x3f, .sp=0x46, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xf2}, {.addr=0x0bca, .value=0xf8}, {.addr=0x0bcb, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x0bcc, .a=0xe9, .x=0xf2, .y=0x3f, .sp=0x46, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xf2}, {.addr=0x0bca, .value=0xf8}, {.addr=0x0bcb, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bca, .value=0xf8, .type=IO_READ},
        {.addr=0x0bcb, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_029B) {
    const struct CPU_State initial_cpu = {.pc=0x0863, .a=0xe3, .x=0xf6, .y=0x72, .sp=0x35, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x9e}, {.addr=0x0863, .value=0xf8}, {.addr=0x0864, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x0865, .a=0xe3, .x=0x9e, .y=0x72, .sp=0x35, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x9e}, {.addr=0x0863, .value=0xf8}, {.addr=0x0864, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x0863, .value=0xf8, .type=IO_READ},
        {.addr=0x0864, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_029C) {
    const struct CPU_State initial_cpu = {.pc=0xd8f7, .a=0x12, .x=0xfc, .y=0xbe, .sp=0xdf, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xa9}, {.addr=0xd8f7, .value=0xf8}, {.addr=0xd8f8, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xd8f9, .a=0x12, .x=0xa9, .y=0xbe, .sp=0xdf, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xa9}, {.addr=0xd8f7, .value=0xf8}, {.addr=0xd8f8, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8f7, .value=0xf8, .type=IO_READ},
        {.addr=0xd8f8, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_029D) {
    const struct CPU_State initial_cpu = {.pc=0x6b19, .a=0x30, .x=0xea, .y=0x1a, .sp=0x59, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x1a}, {.addr=0x6b19, .value=0xf8}, {.addr=0x6b1a, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x6b1b, .a=0x30, .x=0x1a, .y=0x1a, .sp=0x59, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x1a}, {.addr=0x6b19, .value=0xf8}, {.addr=0x6b1a, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b19, .value=0xf8, .type=IO_READ},
        {.addr=0x6b1a, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa8e8, .a=0x9f, .x=0x2a, .y=0x3e, .sp=0x1d, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x61}, {.addr=0xa8e8, .value=0xf8}, {.addr=0xa8e9, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xa8ea, .a=0x9f, .x=0x61, .y=0x3e, .sp=0x1d, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x61}, {.addr=0xa8e8, .value=0xf8}, {.addr=0xa8e9, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8e8, .value=0xf8, .type=IO_READ},
        {.addr=0xa8e9, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_029F) {
    const struct CPU_State initial_cpu = {.pc=0xc485, .a=0x68, .x=0x10, .y=0xb3, .sp=0x1d, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x3f}, {.addr=0xc485, .value=0xf8}, {.addr=0xc486, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xc487, .a=0x68, .x=0x3f, .y=0xb3, .sp=0x1d, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x3f}, {.addr=0xc485, .value=0xf8}, {.addr=0xc486, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xc485, .value=0xf8, .type=IO_READ},
        {.addr=0xc486, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x5da4, .a=0x8c, .x=0xf3, .y=0xd5, .sp=0xf6, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x19}, {.addr=0x5da4, .value=0xf8}, {.addr=0x5da5, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x5da6, .a=0x8c, .x=0x19, .y=0xd5, .sp=0xf6, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x19}, {.addr=0x5da4, .value=0xf8}, {.addr=0x5da5, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x5da4, .value=0xf8, .type=IO_READ},
        {.addr=0x5da5, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x84e4, .a=0xad, .x=0x76, .y=0x76, .sp=0x42, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x0b}, {.addr=0x84e4, .value=0xf8}, {.addr=0x84e5, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x84e6, .a=0xad, .x=0x0b, .y=0x76, .sp=0x42, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x0b}, {.addr=0x84e4, .value=0xf8}, {.addr=0x84e5, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x84e4, .value=0xf8, .type=IO_READ},
        {.addr=0x84e5, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x1b41, .a=0xbe, .x=0xd1, .y=0xfb, .sp=0xfa, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xea}, {.addr=0x1b41, .value=0xf8}, {.addr=0x1b42, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x1b43, .a=0xbe, .x=0xea, .y=0xfb, .sp=0xfa, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xea}, {.addr=0x1b41, .value=0xf8}, {.addr=0x1b42, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b41, .value=0xf8, .type=IO_READ},
        {.addr=0x1b42, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x15f1, .a=0xe5, .x=0x57, .y=0xa5, .sp=0xb7, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x34}, {.addr=0x15f1, .value=0xf8}, {.addr=0x15f2, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x15f3, .a=0xe5, .x=0x34, .y=0xa5, .sp=0xb7, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x34}, {.addr=0x15f1, .value=0xf8}, {.addr=0x15f2, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x15f1, .value=0xf8, .type=IO_READ},
        {.addr=0x15f2, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x16b0, .a=0x30, .x=0x49, .y=0xf2, .sp=0x81, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x93}, {.addr=0x16b0, .value=0xf8}, {.addr=0x16b1, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x16b2, .a=0x30, .x=0x93, .y=0xf2, .sp=0x81, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x93}, {.addr=0x16b0, .value=0xf8}, {.addr=0x16b1, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x16b0, .value=0xf8, .type=IO_READ},
        {.addr=0x16b1, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x0d6b, .a=0x55, .x=0xb4, .y=0x9f, .sp=0x52, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x5c}, {.addr=0x0d6b, .value=0xf8}, {.addr=0x0d6c, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x0d6d, .a=0x55, .x=0x5c, .y=0x9f, .sp=0x52, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x5c}, {.addr=0x0d6b, .value=0xf8}, {.addr=0x0d6c, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d6b, .value=0xf8, .type=IO_READ},
        {.addr=0x0d6c, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x092a, .a=0xe5, .x=0xa4, .y=0x85, .sp=0x0c, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xc2}, {.addr=0x092a, .value=0xf8}, {.addr=0x092b, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x092c, .a=0xe5, .x=0xc2, .y=0x85, .sp=0x0c, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xc2}, {.addr=0x092a, .value=0xf8}, {.addr=0x092b, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x092a, .value=0xf8, .type=IO_READ},
        {.addr=0x092b, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x2f6e, .a=0x3c, .x=0x6f, .y=0x38, .sp=0x11, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xe7}, {.addr=0x2f6e, .value=0xf8}, {.addr=0x2f6f, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x2f70, .a=0x3c, .x=0xe7, .y=0x38, .sp=0x11, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xe7}, {.addr=0x2f6e, .value=0xf8}, {.addr=0x2f6f, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f6e, .value=0xf8, .type=IO_READ},
        {.addr=0x2f6f, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xed21, .a=0x0b, .x=0x72, .y=0x28, .sp=0x4d, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xa4}, {.addr=0xed21, .value=0xf8}, {.addr=0xed22, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xed23, .a=0x0b, .x=0xa4, .y=0x28, .sp=0x4d, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xa4}, {.addr=0xed21, .value=0xf8}, {.addr=0xed22, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xed21, .value=0xf8, .type=IO_READ},
        {.addr=0xed22, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xb065, .a=0x78, .x=0x12, .y=0x2a, .sp=0x11, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x59}, {.addr=0xb065, .value=0xf8}, {.addr=0xb066, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xb067, .a=0x78, .x=0x59, .y=0x2a, .sp=0x11, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x59}, {.addr=0xb065, .value=0xf8}, {.addr=0xb066, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xb065, .value=0xf8, .type=IO_READ},
        {.addr=0xb066, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x4f11, .a=0x26, .x=0x60, .y=0x75, .sp=0x0a, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x37}, {.addr=0x4f11, .value=0xf8}, {.addr=0x4f12, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x4f13, .a=0x26, .x=0x37, .y=0x75, .sp=0x0a, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x37}, {.addr=0x4f11, .value=0xf8}, {.addr=0x4f12, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f11, .value=0xf8, .type=IO_READ},
        {.addr=0x4f12, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xfb42, .a=0xff, .x=0xf9, .y=0x35, .sp=0x40, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x5f}, {.addr=0xfb42, .value=0xf8}, {.addr=0xfb43, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xfb44, .a=0xff, .x=0x5f, .y=0x35, .sp=0x40, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x5f}, {.addr=0xfb42, .value=0xf8}, {.addr=0xfb43, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb42, .value=0xf8, .type=IO_READ},
        {.addr=0xfb43, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xfaae, .a=0x0e, .x=0x4f, .y=0x83, .sp=0x77, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xa1}, {.addr=0xfaae, .value=0xf8}, {.addr=0xfaaf, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xfab0, .a=0x0e, .x=0xa1, .y=0x83, .sp=0x77, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xa1}, {.addr=0xfaae, .value=0xf8}, {.addr=0xfaaf, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaae, .value=0xf8, .type=IO_READ},
        {.addr=0xfaaf, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x4400, .a=0x09, .x=0x31, .y=0x9d, .sp=0xac, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x69}, {.addr=0x4400, .value=0xf8}, {.addr=0x4401, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x4402, .a=0x09, .x=0x69, .y=0x9d, .sp=0xac, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x69}, {.addr=0x4400, .value=0xf8}, {.addr=0x4401, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x4400, .value=0xf8, .type=IO_READ},
        {.addr=0x4401, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x7b7d, .a=0xd6, .x=0xdf, .y=0x9a, .sp=0xd3, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x54}, {.addr=0x7b7d, .value=0xf8}, {.addr=0x7b7e, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x7b7f, .a=0xd6, .x=0x54, .y=0x9a, .sp=0xd3, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x54}, {.addr=0x7b7d, .value=0xf8}, {.addr=0x7b7e, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b7d, .value=0xf8, .type=IO_READ},
        {.addr=0x7b7e, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xee16, .a=0x93, .x=0xff, .y=0xb9, .sp=0xb4, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x10}, {.addr=0xee16, .value=0xf8}, {.addr=0xee17, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xee18, .a=0x93, .x=0x10, .y=0xb9, .sp=0xb4, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x10}, {.addr=0xee16, .value=0xf8}, {.addr=0xee17, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xee16, .value=0xf8, .type=IO_READ},
        {.addr=0xee17, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xadfb, .a=0xf6, .x=0x3e, .y=0x9a, .sp=0xf7, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xd5}, {.addr=0xadfb, .value=0xf8}, {.addr=0xadfc, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xadfd, .a=0xf6, .x=0xd5, .y=0x9a, .sp=0xf7, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xd5}, {.addr=0xadfb, .value=0xf8}, {.addr=0xadfc, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xadfb, .value=0xf8, .type=IO_READ},
        {.addr=0xadfc, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xcbbb, .a=0xbe, .x=0x0e, .y=0x9c, .sp=0x03, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x67}, {.addr=0xcbbb, .value=0xf8}, {.addr=0xcbbc, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xcbbd, .a=0xbe, .x=0x67, .y=0x9c, .sp=0x03, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x67}, {.addr=0xcbbb, .value=0xf8}, {.addr=0xcbbc, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbbb, .value=0xf8, .type=IO_READ},
        {.addr=0xcbbc, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x160c, .a=0xe7, .x=0x1d, .y=0xe8, .sp=0x03, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x29}, {.addr=0x160c, .value=0xf8}, {.addr=0x160d, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x160e, .a=0xe7, .x=0x29, .y=0xe8, .sp=0x03, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x29}, {.addr=0x160c, .value=0xf8}, {.addr=0x160d, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x160c, .value=0xf8, .type=IO_READ},
        {.addr=0x160d, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xb491, .a=0x21, .x=0xac, .y=0x61, .sp=0xa9, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xec}, {.addr=0xb491, .value=0xf8}, {.addr=0xb492, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xb493, .a=0x21, .x=0xec, .y=0x61, .sp=0xa9, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xec}, {.addr=0xb491, .value=0xf8}, {.addr=0xb492, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xb491, .value=0xf8, .type=IO_READ},
        {.addr=0xb492, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xbcdd, .a=0x66, .x=0xe9, .y=0x24, .sp=0x23, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x91}, {.addr=0xbcdd, .value=0xf8}, {.addr=0xbcde, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xbcdf, .a=0x66, .x=0x91, .y=0x24, .sp=0x23, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x91}, {.addr=0xbcdd, .value=0xf8}, {.addr=0xbcde, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcdd, .value=0xf8, .type=IO_READ},
        {.addr=0xbcde, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe7ff, .a=0x35, .x=0x9c, .y=0xdf, .sp=0x98, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x09}, {.addr=0xe7ff, .value=0xf8}, {.addr=0xe800, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xe801, .a=0x35, .x=0x09, .y=0xdf, .sp=0x98, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x09}, {.addr=0xe7ff, .value=0xf8}, {.addr=0xe800, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7ff, .value=0xf8, .type=IO_READ},
        {.addr=0xe800, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x82d3, .a=0xf8, .x=0x64, .y=0x11, .sp=0x90, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x19}, {.addr=0x82d3, .value=0xf8}, {.addr=0x82d4, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x82d5, .a=0xf8, .x=0x19, .y=0x11, .sp=0x90, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x19}, {.addr=0x82d3, .value=0xf8}, {.addr=0x82d4, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x82d3, .value=0xf8, .type=IO_READ},
        {.addr=0x82d4, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x9a3b, .a=0x58, .x=0x70, .y=0x14, .sp=0x2e, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xc4}, {.addr=0x9a3b, .value=0xf8}, {.addr=0x9a3c, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x9a3d, .a=0x58, .x=0xc4, .y=0x14, .sp=0x2e, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xc4}, {.addr=0x9a3b, .value=0xf8}, {.addr=0x9a3c, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a3b, .value=0xf8, .type=IO_READ},
        {.addr=0x9a3c, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xc0ba, .a=0x03, .x=0xe6, .y=0x38, .sp=0x8f, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x0c}, {.addr=0xc0ba, .value=0xf8}, {.addr=0xc0bb, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xc0bc, .a=0x03, .x=0x0c, .y=0x38, .sp=0x8f, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x0c}, {.addr=0xc0ba, .value=0xf8}, {.addr=0xc0bb, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0ba, .value=0xf8, .type=IO_READ},
        {.addr=0xc0bb, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x232d, .a=0x93, .x=0x6c, .y=0x49, .sp=0x2f, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x40}, {.addr=0x232d, .value=0xf8}, {.addr=0x232e, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x232f, .a=0x93, .x=0x40, .y=0x49, .sp=0x2f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x40}, {.addr=0x232d, .value=0xf8}, {.addr=0x232e, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x232d, .value=0xf8, .type=IO_READ},
        {.addr=0x232e, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x15ca, .a=0x5b, .x=0xff, .y=0x98, .sp=0x42, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x2e}, {.addr=0x15ca, .value=0xf8}, {.addr=0x15cb, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x15cc, .a=0x5b, .x=0x2e, .y=0x98, .sp=0x42, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x2e}, {.addr=0x15ca, .value=0xf8}, {.addr=0x15cb, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x15ca, .value=0xf8, .type=IO_READ},
        {.addr=0x15cb, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xba2a, .a=0x2f, .x=0xe9, .y=0xea, .sp=0xd9, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x31}, {.addr=0xba2a, .value=0xf8}, {.addr=0xba2b, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xba2c, .a=0x2f, .x=0x31, .y=0xea, .sp=0xd9, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x31}, {.addr=0xba2a, .value=0xf8}, {.addr=0xba2b, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xba2a, .value=0xf8, .type=IO_READ},
        {.addr=0xba2b, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x190e, .a=0x2f, .x=0xda, .y=0x33, .sp=0xe2, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x0a}, {.addr=0x190e, .value=0xf8}, {.addr=0x190f, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x1910, .a=0x2f, .x=0x0a, .y=0x33, .sp=0xe2, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x0a}, {.addr=0x190e, .value=0xf8}, {.addr=0x190f, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x190e, .value=0xf8, .type=IO_READ},
        {.addr=0x190f, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x2c16, .a=0x91, .x=0x8b, .y=0x20, .sp=0x6d, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0xbe}, {.addr=0x2c16, .value=0xf8}, {.addr=0x2c17, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x2c18, .a=0x91, .x=0xbe, .y=0x20, .sp=0x6d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0xbe}, {.addr=0x2c16, .value=0xf8}, {.addr=0x2c17, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c16, .value=0xf8, .type=IO_READ},
        {.addr=0x2c17, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x9a92, .a=0x2f, .x=0x02, .y=0x5b, .sp=0xa7, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x12}, {.addr=0x9a92, .value=0xf8}, {.addr=0x9a93, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x9a94, .a=0x2f, .x=0x12, .y=0x5b, .sp=0xa7, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x12}, {.addr=0x9a92, .value=0xf8}, {.addr=0x9a93, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a92, .value=0xf8, .type=IO_READ},
        {.addr=0x9a93, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x5c51, .a=0x61, .x=0xa1, .y=0xa9, .sp=0x4d, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x52}, {.addr=0x5c51, .value=0xf8}, {.addr=0x5c52, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x5c53, .a=0x61, .x=0x52, .y=0xa9, .sp=0x4d, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x52}, {.addr=0x5c51, .value=0xf8}, {.addr=0x5c52, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c51, .value=0xf8, .type=IO_READ},
        {.addr=0x5c52, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xd4d8, .a=0xe7, .x=0xa8, .y=0xac, .sp=0x99, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0xef}, {.addr=0xd4d8, .value=0xf8}, {.addr=0xd4d9, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xd4da, .a=0xe7, .x=0xef, .y=0xac, .sp=0x99, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0xef}, {.addr=0xd4d8, .value=0xf8}, {.addr=0xd4d9, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4d8, .value=0xf8, .type=IO_READ},
        {.addr=0xd4d9, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xb4c6, .a=0xef, .x=0xb1, .y=0xee, .sp=0x94, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x39}, {.addr=0xb4c6, .value=0xf8}, {.addr=0xb4c7, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xb4c8, .a=0xef, .x=0x39, .y=0xee, .sp=0x94, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x39}, {.addr=0xb4c6, .value=0xf8}, {.addr=0xb4c7, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4c6, .value=0xf8, .type=IO_READ},
        {.addr=0xb4c7, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x7100, .a=0x3f, .x=0x9c, .y=0x42, .sp=0x5b, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x42}, {.addr=0x7100, .value=0xf8}, {.addr=0x7101, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x7102, .a=0x3f, .x=0x42, .y=0x42, .sp=0x5b, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x42}, {.addr=0x7100, .value=0xf8}, {.addr=0x7101, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x7100, .value=0xf8, .type=IO_READ},
        {.addr=0x7101, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8dc3, .a=0xfc, .x=0xa6, .y=0x0b, .sp=0x81, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xf2}, {.addr=0x8dc3, .value=0xf8}, {.addr=0x8dc4, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x8dc5, .a=0xfc, .x=0xf2, .y=0x0b, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xf2}, {.addr=0x8dc3, .value=0xf8}, {.addr=0x8dc4, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dc3, .value=0xf8, .type=IO_READ},
        {.addr=0x8dc4, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x3211, .a=0x1a, .x=0xbd, .y=0xc8, .sp=0x22, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x41}, {.addr=0x3211, .value=0xf8}, {.addr=0x3212, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x3213, .a=0x1a, .x=0x41, .y=0xc8, .sp=0x22, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x41}, {.addr=0x3211, .value=0xf8}, {.addr=0x3212, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3211, .value=0xf8, .type=IO_READ},
        {.addr=0x3212, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xdcb6, .a=0xb5, .x=0x26, .y=0xb4, .sp=0x9e, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x92}, {.addr=0xdcb6, .value=0xf8}, {.addr=0xdcb7, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xdcb8, .a=0xb5, .x=0x92, .y=0xb4, .sp=0x9e, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x92}, {.addr=0xdcb6, .value=0xf8}, {.addr=0xdcb7, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcb6, .value=0xf8, .type=IO_READ},
        {.addr=0xdcb7, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x8842, .a=0x8d, .x=0x35, .y=0x8e, .sp=0xd6, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x0f}, {.addr=0x8842, .value=0xf8}, {.addr=0x8843, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x8844, .a=0x8d, .x=0x0f, .y=0x8e, .sp=0xd6, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x0f}, {.addr=0x8842, .value=0xf8}, {.addr=0x8843, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8842, .value=0xf8, .type=IO_READ},
        {.addr=0x8843, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x1b8a, .a=0x84, .x=0xe1, .y=0x4a, .sp=0xdc, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xdc}, {.addr=0x1b8a, .value=0xf8}, {.addr=0x1b8b, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x1b8c, .a=0x84, .x=0xdc, .y=0x4a, .sp=0xdc, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xdc}, {.addr=0x1b8a, .value=0xf8}, {.addr=0x1b8b, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b8a, .value=0xf8, .type=IO_READ},
        {.addr=0x1b8b, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xe427, .a=0x04, .x=0x50, .y=0x2c, .sp=0xc8, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xac}, {.addr=0xe427, .value=0xf8}, {.addr=0xe428, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xe429, .a=0x04, .x=0xac, .y=0x2c, .sp=0xc8, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xac}, {.addr=0xe427, .value=0xf8}, {.addr=0xe428, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xe427, .value=0xf8, .type=IO_READ},
        {.addr=0xe428, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x16e7, .a=0xac, .x=0x33, .y=0x1f, .sp=0x70, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x9b}, {.addr=0x16e7, .value=0xf8}, {.addr=0x16e8, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x16e9, .a=0xac, .x=0x9b, .y=0x1f, .sp=0x70, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x9b}, {.addr=0x16e7, .value=0xf8}, {.addr=0x16e8, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x16e7, .value=0xf8, .type=IO_READ},
        {.addr=0x16e8, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd724, .a=0x46, .x=0x49, .y=0x46, .sp=0xd1, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x25}, {.addr=0xd724, .value=0xf8}, {.addr=0xd725, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xd726, .a=0x46, .x=0x25, .y=0x46, .sp=0xd1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x25}, {.addr=0xd724, .value=0xf8}, {.addr=0xd725, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd724, .value=0xf8, .type=IO_READ},
        {.addr=0xd725, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x2168, .a=0xa0, .x=0x6e, .y=0x7a, .sp=0x6f, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x99}, {.addr=0x2168, .value=0xf8}, {.addr=0x2169, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x216a, .a=0xa0, .x=0x99, .y=0x7a, .sp=0x6f, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x99}, {.addr=0x2168, .value=0xf8}, {.addr=0x2169, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x2168, .value=0xf8, .type=IO_READ},
        {.addr=0x2169, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3af0, .a=0x0f, .x=0x11, .y=0xf7, .sp=0xe2, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x08}, {.addr=0x3af0, .value=0xf8}, {.addr=0x3af1, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x3af2, .a=0x0f, .x=0x08, .y=0xf7, .sp=0xe2, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x08}, {.addr=0x3af0, .value=0xf8}, {.addr=0x3af1, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x3af0, .value=0xf8, .type=IO_READ},
        {.addr=0x3af1, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x88b2, .a=0x02, .x=0xce, .y=0x20, .sp=0xbb, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x32}, {.addr=0x88b2, .value=0xf8}, {.addr=0x88b3, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x88b4, .a=0x02, .x=0x32, .y=0x20, .sp=0xbb, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x32}, {.addr=0x88b2, .value=0xf8}, {.addr=0x88b3, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x88b2, .value=0xf8, .type=IO_READ},
        {.addr=0x88b3, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x3c63, .a=0x81, .x=0xd0, .y=0xa2, .sp=0x89, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x0e}, {.addr=0x3c63, .value=0xf8}, {.addr=0x3c64, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x3c65, .a=0x81, .x=0x0e, .y=0xa2, .sp=0x89, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x0e}, {.addr=0x3c63, .value=0xf8}, {.addr=0x3c64, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c63, .value=0xf8, .type=IO_READ},
        {.addr=0x3c64, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x5a87, .a=0xaf, .x=0xa2, .y=0xb2, .sp=0x9a, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x3e}, {.addr=0x5a87, .value=0xf8}, {.addr=0x5a88, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x5a89, .a=0xaf, .x=0x3e, .y=0xb2, .sp=0x9a, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x3e}, {.addr=0x5a87, .value=0xf8}, {.addr=0x5a88, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a87, .value=0xf8, .type=IO_READ},
        {.addr=0x5a88, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x8d93, .a=0x18, .x=0x47, .y=0x05, .sp=0xbc, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x4c}, {.addr=0x8d93, .value=0xf8}, {.addr=0x8d94, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x8d95, .a=0x18, .x=0x4c, .y=0x05, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x4c}, {.addr=0x8d93, .value=0xf8}, {.addr=0x8d94, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d93, .value=0xf8, .type=IO_READ},
        {.addr=0x8d94, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x8148, .a=0x33, .x=0x77, .y=0x5f, .sp=0x88, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x66}, {.addr=0x8148, .value=0xf8}, {.addr=0x8149, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x814a, .a=0x33, .x=0x66, .y=0x5f, .sp=0x88, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x66}, {.addr=0x8148, .value=0xf8}, {.addr=0x8149, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x8148, .value=0xf8, .type=IO_READ},
        {.addr=0x8149, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xc1d5, .a=0x22, .x=0x23, .y=0x72, .sp=0xec, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xe1}, {.addr=0xc1d5, .value=0xf8}, {.addr=0xc1d6, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xc1d7, .a=0x22, .x=0xe1, .y=0x72, .sp=0xec, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xe1}, {.addr=0xc1d5, .value=0xf8}, {.addr=0xc1d6, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1d5, .value=0xf8, .type=IO_READ},
        {.addr=0xc1d6, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xef24, .a=0xe2, .x=0x3a, .y=0xcd, .sp=0xd0, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xb9}, {.addr=0xef24, .value=0xf8}, {.addr=0xef25, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xef26, .a=0xe2, .x=0xb9, .y=0xcd, .sp=0xd0, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xb9}, {.addr=0xef24, .value=0xf8}, {.addr=0xef25, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xef24, .value=0xf8, .type=IO_READ},
        {.addr=0xef25, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xee89, .a=0xaa, .x=0x5d, .y=0x83, .sp=0x12, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x57}, {.addr=0xee89, .value=0xf8}, {.addr=0xee8a, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xee8b, .a=0xaa, .x=0x57, .y=0x83, .sp=0x12, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x57}, {.addr=0xee89, .value=0xf8}, {.addr=0xee8a, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xee89, .value=0xf8, .type=IO_READ},
        {.addr=0xee8a, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x25a6, .a=0x63, .x=0x9f, .y=0xb5, .sp=0x37, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xa4}, {.addr=0x25a6, .value=0xf8}, {.addr=0x25a7, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x25a8, .a=0x63, .x=0xa4, .y=0xb5, .sp=0x37, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xa4}, {.addr=0x25a6, .value=0xf8}, {.addr=0x25a7, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x25a6, .value=0xf8, .type=IO_READ},
        {.addr=0x25a7, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x6fd0, .a=0xeb, .x=0x7c, .y=0xdc, .sp=0xc7, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0xf9}, {.addr=0x6fd0, .value=0xf8}, {.addr=0x6fd1, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x6fd2, .a=0xeb, .x=0xf9, .y=0xdc, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0xf9}, {.addr=0x6fd0, .value=0xf8}, {.addr=0x6fd1, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fd0, .value=0xf8, .type=IO_READ},
        {.addr=0x6fd1, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x1335, .a=0xc7, .x=0x4f, .y=0xdd, .sp=0xb3, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x37}, {.addr=0x1335, .value=0xf8}, {.addr=0x1336, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x1337, .a=0xc7, .x=0x37, .y=0xdd, .sp=0xb3, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x37}, {.addr=0x1335, .value=0xf8}, {.addr=0x1336, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x1335, .value=0xf8, .type=IO_READ},
        {.addr=0x1336, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb1a0, .a=0x3c, .x=0x74, .y=0x9e, .sp=0xe4, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x68}, {.addr=0xb1a0, .value=0xf8}, {.addr=0xb1a1, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xb1a2, .a=0x3c, .x=0x68, .y=0x9e, .sp=0xe4, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x68}, {.addr=0xb1a0, .value=0xf8}, {.addr=0xb1a1, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1a0, .value=0xf8, .type=IO_READ},
        {.addr=0xb1a1, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xfa9f, .a=0x4c, .x=0x76, .y=0x26, .sp=0xbf, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0xe8}, {.addr=0xfa9f, .value=0xf8}, {.addr=0xfaa0, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xfaa1, .a=0x4c, .x=0xe8, .y=0x26, .sp=0xbf, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0xe8}, {.addr=0xfa9f, .value=0xf8}, {.addr=0xfaa0, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa9f, .value=0xf8, .type=IO_READ},
        {.addr=0xfaa0, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xc95c, .a=0x2d, .x=0xf0, .y=0xab, .sp=0xa9, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x6b}, {.addr=0xc95c, .value=0xf8}, {.addr=0xc95d, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xc95e, .a=0x2d, .x=0x6b, .y=0xab, .sp=0xa9, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x6b}, {.addr=0xc95c, .value=0xf8}, {.addr=0xc95d, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xc95c, .value=0xf8, .type=IO_READ},
        {.addr=0xc95d, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x1274, .a=0xb8, .x=0x85, .y=0x67, .sp=0xa7, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xb2}, {.addr=0x1274, .value=0xf8}, {.addr=0x1275, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x1276, .a=0xb8, .x=0xb2, .y=0x67, .sp=0xa7, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xb2}, {.addr=0x1274, .value=0xf8}, {.addr=0x1275, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1274, .value=0xf8, .type=IO_READ},
        {.addr=0x1275, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x63a9, .a=0x43, .x=0x4a, .y=0x30, .sp=0x35, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x35}, {.addr=0x63a9, .value=0xf8}, {.addr=0x63aa, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x63ab, .a=0x43, .x=0x35, .y=0x30, .sp=0x35, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x35}, {.addr=0x63a9, .value=0xf8}, {.addr=0x63aa, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x63a9, .value=0xf8, .type=IO_READ},
        {.addr=0x63aa, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x16f5, .a=0x4f, .x=0x3c, .y=0xb7, .sp=0xc4, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xec}, {.addr=0x16f5, .value=0xf8}, {.addr=0x16f6, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x16f7, .a=0x4f, .x=0xec, .y=0xb7, .sp=0xc4, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xec}, {.addr=0x16f5, .value=0xf8}, {.addr=0x16f6, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x16f5, .value=0xf8, .type=IO_READ},
        {.addr=0x16f6, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x45c3, .a=0x90, .x=0xba, .y=0xa0, .sp=0x40, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x16}, {.addr=0x45c3, .value=0xf8}, {.addr=0x45c4, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x45c5, .a=0x90, .x=0x16, .y=0xa0, .sp=0x40, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x16}, {.addr=0x45c3, .value=0xf8}, {.addr=0x45c4, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x45c3, .value=0xf8, .type=IO_READ},
        {.addr=0x45c4, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xa17f, .a=0x5a, .x=0xf0, .y=0xb3, .sp=0xf0, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x3c}, {.addr=0xa17f, .value=0xf8}, {.addr=0xa180, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xa181, .a=0x5a, .x=0x3c, .y=0xb3, .sp=0xf0, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x3c}, {.addr=0xa17f, .value=0xf8}, {.addr=0xa180, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa17f, .value=0xf8, .type=IO_READ},
        {.addr=0xa180, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x1010, .a=0xe1, .x=0xa4, .y=0xa2, .sp=0xd4, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x3c}, {.addr=0x1010, .value=0xf8}, {.addr=0x1011, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x1012, .a=0xe1, .x=0x3c, .y=0xa2, .sp=0xd4, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x3c}, {.addr=0x1010, .value=0xf8}, {.addr=0x1011, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1010, .value=0xf8, .type=IO_READ},
        {.addr=0x1011, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x4a08, .a=0xd3, .x=0x20, .y=0x98, .sp=0xd9, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x60}, {.addr=0x4a08, .value=0xf8}, {.addr=0x4a09, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x4a0a, .a=0xd3, .x=0x60, .y=0x98, .sp=0xd9, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x60}, {.addr=0x4a08, .value=0xf8}, {.addr=0x4a09, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a08, .value=0xf8, .type=IO_READ},
        {.addr=0x4a09, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x610a, .a=0xf7, .x=0x72, .y=0x74, .sp=0xc7, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x8f}, {.addr=0x610a, .value=0xf8}, {.addr=0x610b, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x610c, .a=0xf7, .x=0x8f, .y=0x74, .sp=0xc7, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x8f}, {.addr=0x610a, .value=0xf8}, {.addr=0x610b, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x610a, .value=0xf8, .type=IO_READ},
        {.addr=0x610b, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x51a9, .a=0x98, .x=0x12, .y=0x1d, .sp=0x38, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x48}, {.addr=0x51a9, .value=0xf8}, {.addr=0x51aa, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x51ab, .a=0x98, .x=0x48, .y=0x1d, .sp=0x38, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x48}, {.addr=0x51a9, .value=0xf8}, {.addr=0x51aa, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x51a9, .value=0xf8, .type=IO_READ},
        {.addr=0x51aa, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb85f, .a=0x56, .x=0xeb, .y=0x13, .sp=0x8b, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xa1}, {.addr=0xb85f, .value=0xf8}, {.addr=0xb860, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xb861, .a=0x56, .x=0xa1, .y=0x13, .sp=0x8b, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xa1}, {.addr=0xb85f, .value=0xf8}, {.addr=0xb860, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb85f, .value=0xf8, .type=IO_READ},
        {.addr=0xb860, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xa02e, .a=0x7d, .x=0x87, .y=0x6c, .sp=0x1e, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xd4}, {.addr=0xa02e, .value=0xf8}, {.addr=0xa02f, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xa030, .a=0x7d, .x=0xd4, .y=0x6c, .sp=0x1e, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xd4}, {.addr=0xa02e, .value=0xf8}, {.addr=0xa02f, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa02e, .value=0xf8, .type=IO_READ},
        {.addr=0xa02f, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xae89, .a=0xe7, .x=0xa4, .y=0xcf, .sp=0x8a, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0xc9}, {.addr=0xae89, .value=0xf8}, {.addr=0xae8a, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xae8b, .a=0xe7, .x=0xc9, .y=0xcf, .sp=0x8a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0xc9}, {.addr=0xae89, .value=0xf8}, {.addr=0xae8a, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xae89, .value=0xf8, .type=IO_READ},
        {.addr=0xae8a, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xe4e2, .a=0xf6, .x=0x9b, .y=0x19, .sp=0x75, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0xbd}, {.addr=0xe4e2, .value=0xf8}, {.addr=0xe4e3, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xe4e4, .a=0xf6, .x=0xbd, .y=0x19, .sp=0x75, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0xbd}, {.addr=0xe4e2, .value=0xf8}, {.addr=0xe4e3, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4e2, .value=0xf8, .type=IO_READ},
        {.addr=0xe4e3, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xfbbd, .a=0x01, .x=0x1e, .y=0xf6, .sp=0x00, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x78}, {.addr=0xfbbd, .value=0xf8}, {.addr=0xfbbe, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xfbbf, .a=0x01, .x=0x78, .y=0xf6, .sp=0x00, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x78}, {.addr=0xfbbd, .value=0xf8}, {.addr=0xfbbe, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbbd, .value=0xf8, .type=IO_READ},
        {.addr=0xfbbe, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x249d, .a=0xd7, .x=0x05, .y=0xac, .sp=0x26, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x3a}, {.addr=0x249d, .value=0xf8}, {.addr=0x249e, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x249f, .a=0xd7, .x=0x3a, .y=0xac, .sp=0x26, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x3a}, {.addr=0x249d, .value=0xf8}, {.addr=0x249e, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x249d, .value=0xf8, .type=IO_READ},
        {.addr=0x249e, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xf91f, .a=0x21, .x=0x3f, .y=0xa9, .sp=0xa0, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x75}, {.addr=0xf91f, .value=0xf8}, {.addr=0xf920, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xf921, .a=0x21, .x=0x75, .y=0xa9, .sp=0xa0, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x75}, {.addr=0xf91f, .value=0xf8}, {.addr=0xf920, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf91f, .value=0xf8, .type=IO_READ},
        {.addr=0xf920, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xb984, .a=0x7e, .x=0x42, .y=0xb1, .sp=0xda, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xf9}, {.addr=0xb984, .value=0xf8}, {.addr=0xb985, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xb986, .a=0x7e, .x=0xf9, .y=0xb1, .sp=0xda, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xf9}, {.addr=0xb984, .value=0xf8}, {.addr=0xb985, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb984, .value=0xf8, .type=IO_READ},
        {.addr=0xb985, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xe817, .a=0x47, .x=0x74, .y=0xb1, .sp=0x35, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xea}, {.addr=0xe817, .value=0xf8}, {.addr=0xe818, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xe819, .a=0x47, .x=0xea, .y=0xb1, .sp=0x35, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xea}, {.addr=0xe817, .value=0xf8}, {.addr=0xe818, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe817, .value=0xf8, .type=IO_READ},
        {.addr=0xe818, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x2207, .a=0x45, .x=0xdb, .y=0x87, .sp=0xa3, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x21}, {.addr=0x2207, .value=0xf8}, {.addr=0x2208, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x2209, .a=0x45, .x=0x21, .y=0x87, .sp=0xa3, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x21}, {.addr=0x2207, .value=0xf8}, {.addr=0x2208, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x2207, .value=0xf8, .type=IO_READ},
        {.addr=0x2208, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x0f12, .a=0x51, .x=0x15, .y=0x49, .sp=0xbc, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xde}, {.addr=0x0f12, .value=0xf8}, {.addr=0x0f13, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x0f14, .a=0x51, .x=0xde, .y=0x49, .sp=0xbc, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xde}, {.addr=0x0f12, .value=0xf8}, {.addr=0x0f13, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f12, .value=0xf8, .type=IO_READ},
        {.addr=0x0f13, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x0b90, .a=0x29, .x=0x37, .y=0xa9, .sp=0x67, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x95}, {.addr=0x0b90, .value=0xf8}, {.addr=0x0b91, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x0b92, .a=0x29, .x=0x95, .y=0xa9, .sp=0x67, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x95}, {.addr=0x0b90, .value=0xf8}, {.addr=0x0b91, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b90, .value=0xf8, .type=IO_READ},
        {.addr=0x0b91, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xb8e3, .a=0x14, .x=0x84, .y=0x24, .sp=0xeb, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0x11}, {.addr=0xb8e3, .value=0xf8}, {.addr=0xb8e4, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xb8e5, .a=0x14, .x=0x11, .y=0x24, .sp=0xeb, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0x11}, {.addr=0xb8e3, .value=0xf8}, {.addr=0xb8e4, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8e3, .value=0xf8, .type=IO_READ},
        {.addr=0xb8e4, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x9d42, .a=0x10, .x=0x64, .y=0x59, .sp=0xbd, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0xb3}, {.addr=0x9d42, .value=0xf8}, {.addr=0x9d43, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x9d44, .a=0x10, .x=0xb3, .y=0x59, .sp=0xbd, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0xb3}, {.addr=0x9d42, .value=0xf8}, {.addr=0x9d43, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d42, .value=0xf8, .type=IO_READ},
        {.addr=0x9d43, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x3040, .a=0x85, .x=0x51, .y=0x46, .sp=0xe7, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xd3}, {.addr=0x3040, .value=0xf8}, {.addr=0x3041, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x3042, .a=0x85, .x=0xd3, .y=0x46, .sp=0xe7, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xd3}, {.addr=0x3040, .value=0xf8}, {.addr=0x3041, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x3040, .value=0xf8, .type=IO_READ},
        {.addr=0x3041, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x47d8, .a=0xfb, .x=0xc8, .y=0xd9, .sp=0x4c, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xe9}, {.addr=0x47d8, .value=0xf8}, {.addr=0x47d9, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x47da, .a=0xfb, .x=0xe9, .y=0xd9, .sp=0x4c, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xe9}, {.addr=0x47d8, .value=0xf8}, {.addr=0x47d9, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x47d8, .value=0xf8, .type=IO_READ},
        {.addr=0x47d9, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x2a51, .a=0x24, .x=0x70, .y=0x9b, .sp=0x84, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x5a}, {.addr=0x2a51, .value=0xf8}, {.addr=0x2a52, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x2a53, .a=0x24, .x=0x5a, .y=0x9b, .sp=0x84, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x5a}, {.addr=0x2a51, .value=0xf8}, {.addr=0x2a52, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a51, .value=0xf8, .type=IO_READ},
        {.addr=0x2a52, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x1237, .a=0x30, .x=0x3e, .y=0xdf, .sp=0x49, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x25}, {.addr=0x1237, .value=0xf8}, {.addr=0x1238, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x1239, .a=0x30, .x=0x25, .y=0xdf, .sp=0x49, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x25}, {.addr=0x1237, .value=0xf8}, {.addr=0x1238, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1237, .value=0xf8, .type=IO_READ},
        {.addr=0x1238, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xa992, .a=0xed, .x=0x49, .y=0x37, .sp=0xdb, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x81}, {.addr=0xa992, .value=0xf8}, {.addr=0xa993, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xa994, .a=0xed, .x=0x81, .y=0x37, .sp=0xdb, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x81}, {.addr=0xa992, .value=0xf8}, {.addr=0xa993, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa992, .value=0xf8, .type=IO_READ},
        {.addr=0xa993, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xde42, .a=0x6d, .x=0x98, .y=0xb4, .sp=0xee, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0xbe}, {.addr=0xde42, .value=0xf8}, {.addr=0xde43, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xde44, .a=0x6d, .x=0xbe, .y=0xb4, .sp=0xee, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0xbe}, {.addr=0xde42, .value=0xf8}, {.addr=0xde43, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xde42, .value=0xf8, .type=IO_READ},
        {.addr=0xde43, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x049f, .a=0xa5, .x=0xec, .y=0xa5, .sp=0x23, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x8d}, {.addr=0x049f, .value=0xf8}, {.addr=0x04a0, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x04a1, .a=0xa5, .x=0x8d, .y=0xa5, .sp=0x23, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x8d}, {.addr=0x049f, .value=0xf8}, {.addr=0x04a0, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x049f, .value=0xf8, .type=IO_READ},
        {.addr=0x04a0, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xa454, .a=0x79, .x=0x9f, .y=0xa0, .sp=0x07, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xf4}, {.addr=0xa454, .value=0xf8}, {.addr=0xa455, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xa456, .a=0x79, .x=0xf4, .y=0xa0, .sp=0x07, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xf4}, {.addr=0xa454, .value=0xf8}, {.addr=0xa455, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa454, .value=0xf8, .type=IO_READ},
        {.addr=0xa455, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x610e, .a=0x0b, .x=0x9d, .y=0xe5, .sp=0xe5, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x3a}, {.addr=0x610e, .value=0xf8}, {.addr=0x610f, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x6110, .a=0x0b, .x=0x3a, .y=0xe5, .sp=0xe5, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x3a}, {.addr=0x610e, .value=0xf8}, {.addr=0x610f, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x610e, .value=0xf8, .type=IO_READ},
        {.addr=0x610f, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x1d25, .a=0x9e, .x=0x0e, .y=0x57, .sp=0x1a, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xea}, {.addr=0x1d25, .value=0xf8}, {.addr=0x1d26, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x1d27, .a=0x9e, .x=0xea, .y=0x57, .sp=0x1a, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xea}, {.addr=0x1d25, .value=0xf8}, {.addr=0x1d26, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d25, .value=0xf8, .type=IO_READ},
        {.addr=0x1d26, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xcf04, .a=0xbe, .x=0x17, .y=0x00, .sp=0x03, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xd8}, {.addr=0xcf04, .value=0xf8}, {.addr=0xcf05, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xcf06, .a=0xbe, .x=0xd8, .y=0x00, .sp=0x03, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xd8}, {.addr=0xcf04, .value=0xf8}, {.addr=0xcf05, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf04, .value=0xf8, .type=IO_READ},
        {.addr=0xcf05, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0300) {
    const struct CPU_State initial_cpu = {.pc=0xe3cc, .a=0x2b, .x=0xff, .y=0xad, .sp=0xe5, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xe8}, {.addr=0xe3cc, .value=0xf8}, {.addr=0xe3cd, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xe3ce, .a=0x2b, .x=0xe8, .y=0xad, .sp=0xe5, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xe8}, {.addr=0xe3cc, .value=0xf8}, {.addr=0xe3cd, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3cc, .value=0xf8, .type=IO_READ},
        {.addr=0xe3cd, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0301) {
    const struct CPU_State initial_cpu = {.pc=0x6579, .a=0x02, .x=0x98, .y=0xe1, .sp=0x8b, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xa7}, {.addr=0x6579, .value=0xf8}, {.addr=0x657a, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x657b, .a=0x02, .x=0xa7, .y=0xe1, .sp=0x8b, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xa7}, {.addr=0x6579, .value=0xf8}, {.addr=0x657a, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6579, .value=0xf8, .type=IO_READ},
        {.addr=0x657a, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0302) {
    const struct CPU_State initial_cpu = {.pc=0x6d36, .a=0x05, .x=0xb5, .y=0xca, .sp=0x29, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x6f}, {.addr=0x6d36, .value=0xf8}, {.addr=0x6d37, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x6d38, .a=0x05, .x=0x6f, .y=0xca, .sp=0x29, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x6f}, {.addr=0x6d36, .value=0xf8}, {.addr=0x6d37, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d36, .value=0xf8, .type=IO_READ},
        {.addr=0x6d37, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0303) {
    const struct CPU_State initial_cpu = {.pc=0x7c09, .a=0xd2, .x=0x66, .y=0x9c, .sp=0xcc, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x23}, {.addr=0x7c09, .value=0xf8}, {.addr=0x7c0a, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x7c0b, .a=0xd2, .x=0x23, .y=0x9c, .sp=0xcc, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x23}, {.addr=0x7c09, .value=0xf8}, {.addr=0x7c0a, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c09, .value=0xf8, .type=IO_READ},
        {.addr=0x7c0a, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0304) {
    const struct CPU_State initial_cpu = {.pc=0x5da2, .a=0x7f, .x=0xe5, .y=0x3d, .sp=0xd2, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x6e}, {.addr=0x5da2, .value=0xf8}, {.addr=0x5da3, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x5da4, .a=0x7f, .x=0x6e, .y=0x3d, .sp=0xd2, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x6e}, {.addr=0x5da2, .value=0xf8}, {.addr=0x5da3, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5da2, .value=0xf8, .type=IO_READ},
        {.addr=0x5da3, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0305) {
    const struct CPU_State initial_cpu = {.pc=0x7c6e, .a=0x8e, .x=0xba, .y=0x41, .sp=0x37, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x5f}, {.addr=0x7c6e, .value=0xf8}, {.addr=0x7c6f, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x7c70, .a=0x8e, .x=0x5f, .y=0x41, .sp=0x37, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x5f}, {.addr=0x7c6e, .value=0xf8}, {.addr=0x7c6f, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c6e, .value=0xf8, .type=IO_READ},
        {.addr=0x7c6f, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0306) {
    const struct CPU_State initial_cpu = {.pc=0x7c6e, .a=0xb6, .x=0x6a, .y=0xf7, .sp=0x76, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xa9}, {.addr=0x7c6e, .value=0xf8}, {.addr=0x7c6f, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x7c70, .a=0xb6, .x=0xa9, .y=0xf7, .sp=0x76, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xa9}, {.addr=0x7c6e, .value=0xf8}, {.addr=0x7c6f, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c6e, .value=0xf8, .type=IO_READ},
        {.addr=0x7c6f, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0307) {
    const struct CPU_State initial_cpu = {.pc=0x9fa8, .a=0x1d, .x=0x52, .y=0xe0, .sp=0x8b, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x13}, {.addr=0x9fa8, .value=0xf8}, {.addr=0x9fa9, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x9faa, .a=0x1d, .x=0x13, .y=0xe0, .sp=0x8b, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x13}, {.addr=0x9fa8, .value=0xf8}, {.addr=0x9fa9, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fa8, .value=0xf8, .type=IO_READ},
        {.addr=0x9fa9, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6d1c, .a=0x0a, .x=0x8a, .y=0x77, .sp=0x9e, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x1f}, {.addr=0x6d1c, .value=0xf8}, {.addr=0x6d1d, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x6d1e, .a=0x0a, .x=0x1f, .y=0x77, .sp=0x9e, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x1f}, {.addr=0x6d1c, .value=0xf8}, {.addr=0x6d1d, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d1c, .value=0xf8, .type=IO_READ},
        {.addr=0x6d1d, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0309) {
    const struct CPU_State initial_cpu = {.pc=0xce6a, .a=0x39, .x=0x7a, .y=0x11, .sp=0xf5, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x63}, {.addr=0xce6a, .value=0xf8}, {.addr=0xce6b, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xce6c, .a=0x39, .x=0x63, .y=0x11, .sp=0xf5, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x63}, {.addr=0xce6a, .value=0xf8}, {.addr=0xce6b, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xce6a, .value=0xf8, .type=IO_READ},
        {.addr=0xce6b, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_030A) {
    const struct CPU_State initial_cpu = {.pc=0x0ceb, .a=0x41, .x=0x0e, .y=0x77, .sp=0xca, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x26}, {.addr=0x0ceb, .value=0xf8}, {.addr=0x0cec, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x0ced, .a=0x41, .x=0x26, .y=0x77, .sp=0xca, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x26}, {.addr=0x0ceb, .value=0xf8}, {.addr=0x0cec, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ceb, .value=0xf8, .type=IO_READ},
        {.addr=0x0cec, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_030B) {
    const struct CPU_State initial_cpu = {.pc=0xb70e, .a=0x2c, .x=0xe6, .y=0x0b, .sp=0xcc, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x64}, {.addr=0xb70e, .value=0xf8}, {.addr=0xb70f, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xb710, .a=0x2c, .x=0x64, .y=0x0b, .sp=0xcc, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x64}, {.addr=0xb70e, .value=0xf8}, {.addr=0xb70f, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb70e, .value=0xf8, .type=IO_READ},
        {.addr=0xb70f, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8a7e, .a=0xe4, .x=0xa6, .y=0x56, .sp=0xbc, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xe4}, {.addr=0x8a7e, .value=0xf8}, {.addr=0x8a7f, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x8a80, .a=0xe4, .x=0xe4, .y=0x56, .sp=0xbc, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xe4}, {.addr=0x8a7e, .value=0xf8}, {.addr=0x8a7f, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a7e, .value=0xf8, .type=IO_READ},
        {.addr=0x8a7f, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_030D) {
    const struct CPU_State initial_cpu = {.pc=0xd9e0, .a=0xea, .x=0x32, .y=0xd2, .sp=0x47, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x08}, {.addr=0xd9e0, .value=0xf8}, {.addr=0xd9e1, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xd9e2, .a=0xea, .x=0x08, .y=0xd2, .sp=0x47, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x08}, {.addr=0xd9e0, .value=0xf8}, {.addr=0xd9e1, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9e0, .value=0xf8, .type=IO_READ},
        {.addr=0xd9e1, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_030E) {
    const struct CPU_State initial_cpu = {.pc=0xd342, .a=0x1f, .x=0x2c, .y=0x69, .sp=0xfb, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x17}, {.addr=0xd342, .value=0xf8}, {.addr=0xd343, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xd344, .a=0x1f, .x=0x17, .y=0x69, .sp=0xfb, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x17}, {.addr=0xd342, .value=0xf8}, {.addr=0xd343, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xd342, .value=0xf8, .type=IO_READ},
        {.addr=0xd343, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0bfb, .a=0x6c, .x=0x04, .y=0xbc, .sp=0x46, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0xf4}, {.addr=0x0bfb, .value=0xf8}, {.addr=0x0bfc, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x0bfd, .a=0x6c, .x=0xf4, .y=0xbc, .sp=0x46, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0xf4}, {.addr=0x0bfb, .value=0xf8}, {.addr=0x0bfc, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bfb, .value=0xf8, .type=IO_READ},
        {.addr=0x0bfc, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0310) {
    const struct CPU_State initial_cpu = {.pc=0xb295, .a=0xf6, .x=0xa8, .y=0x83, .sp=0xb0, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x43}, {.addr=0xb295, .value=0xf8}, {.addr=0xb296, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xb297, .a=0xf6, .x=0x43, .y=0x83, .sp=0xb0, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x43}, {.addr=0xb295, .value=0xf8}, {.addr=0xb296, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb295, .value=0xf8, .type=IO_READ},
        {.addr=0xb296, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0311) {
    const struct CPU_State initial_cpu = {.pc=0x4270, .a=0xad, .x=0x92, .y=0x48, .sp=0x84, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x5a}, {.addr=0x4270, .value=0xf8}, {.addr=0x4271, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x4272, .a=0xad, .x=0x5a, .y=0x48, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x5a}, {.addr=0x4270, .value=0xf8}, {.addr=0x4271, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4270, .value=0xf8, .type=IO_READ},
        {.addr=0x4271, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0312) {
    const struct CPU_State initial_cpu = {.pc=0xd4e5, .a=0xf3, .x=0xa2, .y=0xb8, .sp=0xd5, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xb4}, {.addr=0xd4e5, .value=0xf8}, {.addr=0xd4e6, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd4e7, .a=0xf3, .x=0xb4, .y=0xb8, .sp=0xd5, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xb4}, {.addr=0xd4e5, .value=0xf8}, {.addr=0xd4e6, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4e5, .value=0xf8, .type=IO_READ},
        {.addr=0xd4e6, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0313) {
    const struct CPU_State initial_cpu = {.pc=0xa5bc, .a=0x09, .x=0x9d, .y=0x10, .sp=0xea, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x23}, {.addr=0xa5bc, .value=0xf8}, {.addr=0xa5bd, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xa5be, .a=0x09, .x=0x23, .y=0x10, .sp=0xea, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x23}, {.addr=0xa5bc, .value=0xf8}, {.addr=0xa5bd, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5bc, .value=0xf8, .type=IO_READ},
        {.addr=0xa5bd, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0314) {
    const struct CPU_State initial_cpu = {.pc=0x3b86, .a=0x7f, .x=0x0d, .y=0x99, .sp=0xc8, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x7b}, {.addr=0x3b86, .value=0xf8}, {.addr=0x3b87, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x3b88, .a=0x7f, .x=0x7b, .y=0x99, .sp=0xc8, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x7b}, {.addr=0x3b86, .value=0xf8}, {.addr=0x3b87, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b86, .value=0xf8, .type=IO_READ},
        {.addr=0x3b87, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0315) {
    const struct CPU_State initial_cpu = {.pc=0x926c, .a=0xb2, .x=0x18, .y=0x96, .sp=0x98, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x63}, {.addr=0x926c, .value=0xf8}, {.addr=0x926d, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x926e, .a=0xb2, .x=0x63, .y=0x96, .sp=0x98, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x63}, {.addr=0x926c, .value=0xf8}, {.addr=0x926d, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x926c, .value=0xf8, .type=IO_READ},
        {.addr=0x926d, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0316) {
    const struct CPU_State initial_cpu = {.pc=0x50aa, .a=0xa5, .x=0x32, .y=0x38, .sp=0xbf, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x01}, {.addr=0x50aa, .value=0xf8}, {.addr=0x50ab, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x50ac, .a=0xa5, .x=0x01, .y=0x38, .sp=0xbf, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x01}, {.addr=0x50aa, .value=0xf8}, {.addr=0x50ab, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x50aa, .value=0xf8, .type=IO_READ},
        {.addr=0x50ab, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0317) {
    const struct CPU_State initial_cpu = {.pc=0x6c59, .a=0x50, .x=0x86, .y=0xff, .sp=0x34, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x2d}, {.addr=0x6c59, .value=0xf8}, {.addr=0x6c5a, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x6c5b, .a=0x50, .x=0x2d, .y=0xff, .sp=0x34, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x2d}, {.addr=0x6c59, .value=0xf8}, {.addr=0x6c5a, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c59, .value=0xf8, .type=IO_READ},
        {.addr=0x6c5a, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0318) {
    const struct CPU_State initial_cpu = {.pc=0x307f, .a=0x91, .x=0x82, .y=0xfa, .sp=0x86, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x6c}, {.addr=0x307f, .value=0xf8}, {.addr=0x3080, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x3081, .a=0x91, .x=0x6c, .y=0xfa, .sp=0x86, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x6c}, {.addr=0x307f, .value=0xf8}, {.addr=0x3080, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x307f, .value=0xf8, .type=IO_READ},
        {.addr=0x3080, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0319) {
    const struct CPU_State initial_cpu = {.pc=0x6c0f, .a=0x3c, .x=0x81, .y=0x89, .sp=0x15, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x49}, {.addr=0x6c0f, .value=0xf8}, {.addr=0x6c10, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x6c11, .a=0x3c, .x=0x49, .y=0x89, .sp=0x15, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x49}, {.addr=0x6c0f, .value=0xf8}, {.addr=0x6c10, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c0f, .value=0xf8, .type=IO_READ},
        {.addr=0x6c10, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_031A) {
    const struct CPU_State initial_cpu = {.pc=0xc803, .a=0x84, .x=0x75, .y=0xc9, .sp=0x05, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xfe}, {.addr=0xc803, .value=0xf8}, {.addr=0xc804, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xc805, .a=0x84, .x=0xfe, .y=0xc9, .sp=0x05, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xfe}, {.addr=0xc803, .value=0xf8}, {.addr=0xc804, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc803, .value=0xf8, .type=IO_READ},
        {.addr=0xc804, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_031B) {
    const struct CPU_State initial_cpu = {.pc=0x9f98, .a=0xaf, .x=0x64, .y=0xf6, .sp=0x1d, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x65}, {.addr=0x9f98, .value=0xf8}, {.addr=0x9f99, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x9f9a, .a=0xaf, .x=0x65, .y=0xf6, .sp=0x1d, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x65}, {.addr=0x9f98, .value=0xf8}, {.addr=0x9f99, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f98, .value=0xf8, .type=IO_READ},
        {.addr=0x9f99, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_031C) {
    const struct CPU_State initial_cpu = {.pc=0x7cf0, .a=0x62, .x=0x71, .y=0xa9, .sp=0xf7, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x4f}, {.addr=0x7cf0, .value=0xf8}, {.addr=0x7cf1, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x7cf2, .a=0x62, .x=0x4f, .y=0xa9, .sp=0xf7, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x4f}, {.addr=0x7cf0, .value=0xf8}, {.addr=0x7cf1, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cf0, .value=0xf8, .type=IO_READ},
        {.addr=0x7cf1, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_031D) {
    const struct CPU_State initial_cpu = {.pc=0x6f93, .a=0x88, .x=0x37, .y=0x76, .sp=0xa8, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x57}, {.addr=0x6f93, .value=0xf8}, {.addr=0x6f94, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x6f95, .a=0x88, .x=0x57, .y=0x76, .sp=0xa8, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x57}, {.addr=0x6f93, .value=0xf8}, {.addr=0x6f94, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f93, .value=0xf8, .type=IO_READ},
        {.addr=0x6f94, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_031E) {
    const struct CPU_State initial_cpu = {.pc=0x73ba, .a=0xd7, .x=0x9e, .y=0x12, .sp=0xf1, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x58}, {.addr=0x73ba, .value=0xf8}, {.addr=0x73bb, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x73bc, .a=0xd7, .x=0x58, .y=0x12, .sp=0xf1, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x58}, {.addr=0x73ba, .value=0xf8}, {.addr=0x73bb, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x73ba, .value=0xf8, .type=IO_READ},
        {.addr=0x73bb, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_031F) {
    const struct CPU_State initial_cpu = {.pc=0xbef9, .a=0x9a, .x=0x4b, .y=0xf8, .sp=0xb0, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xce}, {.addr=0xbef9, .value=0xf8}, {.addr=0xbefa, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xbefb, .a=0x9a, .x=0xce, .y=0xf8, .sp=0xb0, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xce}, {.addr=0xbef9, .value=0xf8}, {.addr=0xbefa, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xbef9, .value=0xf8, .type=IO_READ},
        {.addr=0xbefa, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0320) {
    const struct CPU_State initial_cpu = {.pc=0x0cf6, .a=0xa6, .x=0x78, .y=0xae, .sp=0xf3, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x19}, {.addr=0x0cf6, .value=0xf8}, {.addr=0x0cf7, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x0cf8, .a=0xa6, .x=0x19, .y=0xae, .sp=0xf3, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x19}, {.addr=0x0cf6, .value=0xf8}, {.addr=0x0cf7, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cf6, .value=0xf8, .type=IO_READ},
        {.addr=0x0cf7, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0321) {
    const struct CPU_State initial_cpu = {.pc=0x9de5, .a=0x70, .x=0xbe, .y=0xb8, .sp=0x42, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0xb5}, {.addr=0x9de5, .value=0xf8}, {.addr=0x9de6, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x9de7, .a=0x70, .x=0xb5, .y=0xb8, .sp=0x42, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0xb5}, {.addr=0x9de5, .value=0xf8}, {.addr=0x9de6, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9de5, .value=0xf8, .type=IO_READ},
        {.addr=0x9de6, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0322) {
    const struct CPU_State initial_cpu = {.pc=0xab3e, .a=0xda, .x=0xa5, .y=0xb0, .sp=0xd5, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x74}, {.addr=0xab3e, .value=0xf8}, {.addr=0xab3f, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xab40, .a=0xda, .x=0x74, .y=0xb0, .sp=0xd5, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x74}, {.addr=0xab3e, .value=0xf8}, {.addr=0xab3f, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xab3e, .value=0xf8, .type=IO_READ},
        {.addr=0xab3f, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0323) {
    const struct CPU_State initial_cpu = {.pc=0x085e, .a=0x9d, .x=0x32, .y=0x8e, .sp=0xc1, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x81}, {.addr=0x085e, .value=0xf8}, {.addr=0x085f, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x0860, .a=0x9d, .x=0x81, .y=0x8e, .sp=0xc1, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x81}, {.addr=0x085e, .value=0xf8}, {.addr=0x085f, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x085e, .value=0xf8, .type=IO_READ},
        {.addr=0x085f, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0324) {
    const struct CPU_State initial_cpu = {.pc=0xceee, .a=0x68, .x=0xb0, .y=0x17, .sp=0xfc, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x99}, {.addr=0xceee, .value=0xf8}, {.addr=0xceef, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xcef0, .a=0x68, .x=0x99, .y=0x17, .sp=0xfc, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x99}, {.addr=0xceee, .value=0xf8}, {.addr=0xceef, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xceee, .value=0xf8, .type=IO_READ},
        {.addr=0xceef, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0325) {
    const struct CPU_State initial_cpu = {.pc=0x2e85, .a=0xd6, .x=0xbd, .y=0xac, .sp=0x49, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x0c}, {.addr=0x2e85, .value=0xf8}, {.addr=0x2e86, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x2e87, .a=0xd6, .x=0x0c, .y=0xac, .sp=0x49, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x0c}, {.addr=0x2e85, .value=0xf8}, {.addr=0x2e86, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e85, .value=0xf8, .type=IO_READ},
        {.addr=0x2e86, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0326) {
    const struct CPU_State initial_cpu = {.pc=0x6f23, .a=0xfb, .x=0xae, .y=0xb4, .sp=0x73, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x12}, {.addr=0x6f23, .value=0xf8}, {.addr=0x6f24, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x6f25, .a=0xfb, .x=0x12, .y=0xb4, .sp=0x73, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x12}, {.addr=0x6f23, .value=0xf8}, {.addr=0x6f24, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f23, .value=0xf8, .type=IO_READ},
        {.addr=0x6f24, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0327) {
    const struct CPU_State initial_cpu = {.pc=0x1078, .a=0xb1, .x=0x60, .y=0x1b, .sp=0x18, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xbf}, {.addr=0x1078, .value=0xf8}, {.addr=0x1079, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x107a, .a=0xb1, .x=0xbf, .y=0x1b, .sp=0x18, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xbf}, {.addr=0x1078, .value=0xf8}, {.addr=0x1079, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1078, .value=0xf8, .type=IO_READ},
        {.addr=0x1079, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0328) {
    const struct CPU_State initial_cpu = {.pc=0x6ae9, .a=0x37, .x=0xb6, .y=0x03, .sp=0x99, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x62}, {.addr=0x6ae9, .value=0xf8}, {.addr=0x6aea, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x6aeb, .a=0x37, .x=0x62, .y=0x03, .sp=0x99, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x62}, {.addr=0x6ae9, .value=0xf8}, {.addr=0x6aea, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ae9, .value=0xf8, .type=IO_READ},
        {.addr=0x6aea, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf86d, .a=0x10, .x=0x35, .y=0x4b, .sp=0x7c, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x17}, {.addr=0xf86d, .value=0xf8}, {.addr=0xf86e, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xf86f, .a=0x10, .x=0x17, .y=0x4b, .sp=0x7c, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x17}, {.addr=0xf86d, .value=0xf8}, {.addr=0xf86e, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf86d, .value=0xf8, .type=IO_READ},
        {.addr=0xf86e, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_032A) {
    const struct CPU_State initial_cpu = {.pc=0x9c56, .a=0x31, .x=0xaf, .y=0x8d, .sp=0x28, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xb8}, {.addr=0x9c56, .value=0xf8}, {.addr=0x9c57, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9c58, .a=0x31, .x=0xb8, .y=0x8d, .sp=0x28, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xb8}, {.addr=0x9c56, .value=0xf8}, {.addr=0x9c57, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c56, .value=0xf8, .type=IO_READ},
        {.addr=0x9c57, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_032B) {
    const struct CPU_State initial_cpu = {.pc=0xc035, .a=0xd0, .x=0x57, .y=0x2e, .sp=0x11, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x68}, {.addr=0xc035, .value=0xf8}, {.addr=0xc036, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xc037, .a=0xd0, .x=0x68, .y=0x2e, .sp=0x11, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x68}, {.addr=0xc035, .value=0xf8}, {.addr=0xc036, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xc035, .value=0xf8, .type=IO_READ},
        {.addr=0xc036, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_032C) {
    const struct CPU_State initial_cpu = {.pc=0x455e, .a=0x43, .x=0x4f, .y=0x6c, .sp=0x28, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x31}, {.addr=0x455e, .value=0xf8}, {.addr=0x455f, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x4560, .a=0x43, .x=0x31, .y=0x6c, .sp=0x28, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x31}, {.addr=0x455e, .value=0xf8}, {.addr=0x455f, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x455e, .value=0xf8, .type=IO_READ},
        {.addr=0x455f, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_032D) {
    const struct CPU_State initial_cpu = {.pc=0xcc86, .a=0x7c, .x=0xaf, .y=0x73, .sp=0x71, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xe0}, {.addr=0xcc86, .value=0xf8}, {.addr=0xcc87, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xcc88, .a=0x7c, .x=0xe0, .y=0x73, .sp=0x71, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xe0}, {.addr=0xcc86, .value=0xf8}, {.addr=0xcc87, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc86, .value=0xf8, .type=IO_READ},
        {.addr=0xcc87, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_032E) {
    const struct CPU_State initial_cpu = {.pc=0xd1c7, .a=0xd2, .x=0x6f, .y=0x51, .sp=0x90, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xf7}, {.addr=0xd1c7, .value=0xf8}, {.addr=0xd1c8, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xd1c9, .a=0xd2, .x=0xf7, .y=0x51, .sp=0x90, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xf7}, {.addr=0xd1c7, .value=0xf8}, {.addr=0xd1c8, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1c7, .value=0xf8, .type=IO_READ},
        {.addr=0xd1c8, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_032F) {
    const struct CPU_State initial_cpu = {.pc=0x255d, .a=0xfb, .x=0x75, .y=0x3b, .sp=0xad, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x3a}, {.addr=0x255d, .value=0xf8}, {.addr=0x255e, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x255f, .a=0xfb, .x=0x3a, .y=0x3b, .sp=0xad, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x3a}, {.addr=0x255d, .value=0xf8}, {.addr=0x255e, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x255d, .value=0xf8, .type=IO_READ},
        {.addr=0x255e, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0330) {
    const struct CPU_State initial_cpu = {.pc=0xcbbf, .a=0xd0, .x=0x39, .y=0xa1, .sp=0xdf, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xe7}, {.addr=0xcbbf, .value=0xf8}, {.addr=0xcbc0, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xcbc1, .a=0xd0, .x=0xe7, .y=0xa1, .sp=0xdf, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xe7}, {.addr=0xcbbf, .value=0xf8}, {.addr=0xcbc0, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbbf, .value=0xf8, .type=IO_READ},
        {.addr=0xcbc0, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0331) {
    const struct CPU_State initial_cpu = {.pc=0x81f3, .a=0xd5, .x=0xb4, .y=0x0a, .sp=0x39, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xe3}, {.addr=0x81f3, .value=0xf8}, {.addr=0x81f4, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x81f5, .a=0xd5, .x=0xe3, .y=0x0a, .sp=0x39, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xe3}, {.addr=0x81f3, .value=0xf8}, {.addr=0x81f4, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x81f3, .value=0xf8, .type=IO_READ},
        {.addr=0x81f4, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0332) {
    const struct CPU_State initial_cpu = {.pc=0x6e5a, .a=0x07, .x=0x83, .y=0x3d, .sp=0x47, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xd5}, {.addr=0x6e5a, .value=0xf8}, {.addr=0x6e5b, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x6e5c, .a=0x07, .x=0xd5, .y=0x3d, .sp=0x47, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xd5}, {.addr=0x6e5a, .value=0xf8}, {.addr=0x6e5b, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e5a, .value=0xf8, .type=IO_READ},
        {.addr=0x6e5b, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0333) {
    const struct CPU_State initial_cpu = {.pc=0x4840, .a=0xc8, .x=0xe5, .y=0xc0, .sp=0xa2, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x4d}, {.addr=0x4840, .value=0xf8}, {.addr=0x4841, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x4842, .a=0xc8, .x=0x4d, .y=0xc0, .sp=0xa2, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x4d}, {.addr=0x4840, .value=0xf8}, {.addr=0x4841, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x4840, .value=0xf8, .type=IO_READ},
        {.addr=0x4841, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0334) {
    const struct CPU_State initial_cpu = {.pc=0xe12e, .a=0xbd, .x=0xa8, .y=0x66, .sp=0xfd, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0xc8}, {.addr=0xe12e, .value=0xf8}, {.addr=0xe12f, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xe130, .a=0xbd, .x=0xc8, .y=0x66, .sp=0xfd, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0xc8}, {.addr=0xe12e, .value=0xf8}, {.addr=0xe12f, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xe12e, .value=0xf8, .type=IO_READ},
        {.addr=0xe12f, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0336) {
    const struct CPU_State initial_cpu = {.pc=0x8ff2, .a=0x45, .x=0x2b, .y=0x54, .sp=0xe8, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x3d}, {.addr=0x8ff2, .value=0xf8}, {.addr=0x8ff3, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x8ff4, .a=0x45, .x=0x3d, .y=0x54, .sp=0xe8, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x3d}, {.addr=0x8ff2, .value=0xf8}, {.addr=0x8ff3, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ff2, .value=0xf8, .type=IO_READ},
        {.addr=0x8ff3, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0337) {
    const struct CPU_State initial_cpu = {.pc=0x68d8, .a=0x43, .x=0x82, .y=0x3b, .sp=0xcb, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xbc}, {.addr=0x68d8, .value=0xf8}, {.addr=0x68d9, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x68da, .a=0x43, .x=0xbc, .y=0x3b, .sp=0xcb, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xbc}, {.addr=0x68d8, .value=0xf8}, {.addr=0x68d9, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x68d8, .value=0xf8, .type=IO_READ},
        {.addr=0x68d9, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0338) {
    const struct CPU_State initial_cpu = {.pc=0xde82, .a=0x51, .x=0xdb, .y=0x8c, .sp=0x8e, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xe3}, {.addr=0xde82, .value=0xf8}, {.addr=0xde83, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xde84, .a=0x51, .x=0xe3, .y=0x8c, .sp=0x8e, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xe3}, {.addr=0xde82, .value=0xf8}, {.addr=0xde83, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xde82, .value=0xf8, .type=IO_READ},
        {.addr=0xde83, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0339) {
    const struct CPU_State initial_cpu = {.pc=0xb346, .a=0x27, .x=0x38, .y=0x34, .sp=0xd8, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x15}, {.addr=0xb346, .value=0xf8}, {.addr=0xb347, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xb348, .a=0x27, .x=0x15, .y=0x34, .sp=0xd8, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x15}, {.addr=0xb346, .value=0xf8}, {.addr=0xb347, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xb346, .value=0xf8, .type=IO_READ},
        {.addr=0xb347, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_033A) {
    const struct CPU_State initial_cpu = {.pc=0xd4a6, .a=0x0c, .x=0x4c, .y=0x5c, .sp=0x20, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xf3}, {.addr=0xd4a6, .value=0xf8}, {.addr=0xd4a7, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xd4a8, .a=0x0c, .x=0xf3, .y=0x5c, .sp=0x20, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xf3}, {.addr=0xd4a6, .value=0xf8}, {.addr=0xd4a7, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4a6, .value=0xf8, .type=IO_READ},
        {.addr=0xd4a7, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_033B) {
    const struct CPU_State initial_cpu = {.pc=0x7c1d, .a=0xe6, .x=0xfb, .y=0xd3, .sp=0x7f, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x70}, {.addr=0x7c1d, .value=0xf8}, {.addr=0x7c1e, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x7c1f, .a=0xe6, .x=0x70, .y=0xd3, .sp=0x7f, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x70}, {.addr=0x7c1d, .value=0xf8}, {.addr=0x7c1e, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c1d, .value=0xf8, .type=IO_READ},
        {.addr=0x7c1e, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1486, .a=0xdf, .x=0xd4, .y=0x5d, .sp=0x4f, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x80}, {.addr=0x1486, .value=0xf8}, {.addr=0x1487, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x1488, .a=0xdf, .x=0x80, .y=0x5d, .sp=0x4f, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x80}, {.addr=0x1486, .value=0xf8}, {.addr=0x1487, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1486, .value=0xf8, .type=IO_READ},
        {.addr=0x1487, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_033D) {
    const struct CPU_State initial_cpu = {.pc=0xd1d1, .a=0x91, .x=0x23, .y=0x87, .sp=0x5f, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x65}, {.addr=0xd1d1, .value=0xf8}, {.addr=0xd1d2, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xd1d3, .a=0x91, .x=0x65, .y=0x87, .sp=0x5f, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x65}, {.addr=0xd1d1, .value=0xf8}, {.addr=0xd1d2, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1d1, .value=0xf8, .type=IO_READ},
        {.addr=0xd1d2, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_033E) {
    const struct CPU_State initial_cpu = {.pc=0x83ac, .a=0xde, .x=0x4b, .y=0xe0, .sp=0xfe, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x40}, {.addr=0x83ac, .value=0xf8}, {.addr=0x83ad, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x83ae, .a=0xde, .x=0x40, .y=0xe0, .sp=0xfe, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x40}, {.addr=0x83ac, .value=0xf8}, {.addr=0x83ad, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x83ac, .value=0xf8, .type=IO_READ},
        {.addr=0x83ad, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0340) {
    const struct CPU_State initial_cpu = {.pc=0xfa53, .a=0x20, .x=0x8f, .y=0xd2, .sp=0xc0, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x3c}, {.addr=0xfa53, .value=0xf8}, {.addr=0xfa54, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xfa55, .a=0x20, .x=0x3c, .y=0xd2, .sp=0xc0, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x3c}, {.addr=0xfa53, .value=0xf8}, {.addr=0xfa54, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa53, .value=0xf8, .type=IO_READ},
        {.addr=0xfa54, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0342) {
    const struct CPU_State initial_cpu = {.pc=0xc312, .a=0x1a, .x=0x0d, .y=0x5e, .sp=0x5c, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x8e}, {.addr=0xc312, .value=0xf8}, {.addr=0xc313, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xc314, .a=0x1a, .x=0x8e, .y=0x5e, .sp=0x5c, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x8e}, {.addr=0xc312, .value=0xf8}, {.addr=0xc313, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc312, .value=0xf8, .type=IO_READ},
        {.addr=0xc313, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0344) {
    const struct CPU_State initial_cpu = {.pc=0x7a14, .a=0x83, .x=0x77, .y=0x05, .sp=0x54, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x4e}, {.addr=0x7a14, .value=0xf8}, {.addr=0x7a15, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x7a16, .a=0x83, .x=0x4e, .y=0x05, .sp=0x54, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x4e}, {.addr=0x7a14, .value=0xf8}, {.addr=0x7a15, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a14, .value=0xf8, .type=IO_READ},
        {.addr=0x7a15, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0345) {
    const struct CPU_State initial_cpu = {.pc=0xbee6, .a=0x4d, .x=0x0c, .y=0x36, .sp=0x55, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xbb}, {.addr=0xbee6, .value=0xf8}, {.addr=0xbee7, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xbee8, .a=0x4d, .x=0xbb, .y=0x36, .sp=0x55, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xbb}, {.addr=0xbee6, .value=0xf8}, {.addr=0xbee7, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xbee6, .value=0xf8, .type=IO_READ},
        {.addr=0xbee7, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0346) {
    const struct CPU_State initial_cpu = {.pc=0x53a0, .a=0x7c, .x=0x4c, .y=0x50, .sp=0x31, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x33}, {.addr=0x53a0, .value=0xf8}, {.addr=0x53a1, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x53a2, .a=0x7c, .x=0x33, .y=0x50, .sp=0x31, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x33}, {.addr=0x53a0, .value=0xf8}, {.addr=0x53a1, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x53a0, .value=0xf8, .type=IO_READ},
        {.addr=0x53a1, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0347) {
    const struct CPU_State initial_cpu = {.pc=0x5056, .a=0x82, .x=0x63, .y=0xb2, .sp=0x75, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x57}, {.addr=0x5056, .value=0xf8}, {.addr=0x5057, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x5058, .a=0x82, .x=0x57, .y=0xb2, .sp=0x75, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x57}, {.addr=0x5056, .value=0xf8}, {.addr=0x5057, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5056, .value=0xf8, .type=IO_READ},
        {.addr=0x5057, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0348) {
    const struct CPU_State initial_cpu = {.pc=0x64f2, .a=0x75, .x=0x0b, .y=0x75, .sp=0x16, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xa0}, {.addr=0x64f2, .value=0xf8}, {.addr=0x64f3, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x64f4, .a=0x75, .x=0xa0, .y=0x75, .sp=0x16, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xa0}, {.addr=0x64f2, .value=0xf8}, {.addr=0x64f3, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x64f2, .value=0xf8, .type=IO_READ},
        {.addr=0x64f3, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0349) {
    const struct CPU_State initial_cpu = {.pc=0xb2e5, .a=0x98, .x=0x58, .y=0x03, .sp=0x15, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x64}, {.addr=0xb2e5, .value=0xf8}, {.addr=0xb2e6, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xb2e7, .a=0x98, .x=0x64, .y=0x03, .sp=0x15, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x64}, {.addr=0xb2e5, .value=0xf8}, {.addr=0xb2e6, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2e5, .value=0xf8, .type=IO_READ},
        {.addr=0xb2e6, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_034A) {
    const struct CPU_State initial_cpu = {.pc=0x0cf9, .a=0x1b, .x=0x1f, .y=0x07, .sp=0x19, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xbe}, {.addr=0x0cf9, .value=0xf8}, {.addr=0x0cfa, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x0cfb, .a=0x1b, .x=0xbe, .y=0x07, .sp=0x19, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xbe}, {.addr=0x0cf9, .value=0xf8}, {.addr=0x0cfa, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cf9, .value=0xf8, .type=IO_READ},
        {.addr=0x0cfa, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_034B) {
    const struct CPU_State initial_cpu = {.pc=0xb023, .a=0x9a, .x=0xe4, .y=0x9d, .sp=0x4c, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x23}, {.addr=0xb023, .value=0xf8}, {.addr=0xb024, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xb025, .a=0x9a, .x=0x23, .y=0x9d, .sp=0x4c, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x23}, {.addr=0xb023, .value=0xf8}, {.addr=0xb024, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xb023, .value=0xf8, .type=IO_READ},
        {.addr=0xb024, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_034C) {
    const struct CPU_State initial_cpu = {.pc=0xd7c0, .a=0x0f, .x=0x8c, .y=0x79, .sp=0x36, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x45}, {.addr=0xd7c0, .value=0xf8}, {.addr=0xd7c1, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xd7c2, .a=0x0f, .x=0x45, .y=0x79, .sp=0x36, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x45}, {.addr=0xd7c0, .value=0xf8}, {.addr=0xd7c1, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7c0, .value=0xf8, .type=IO_READ},
        {.addr=0xd7c1, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_034D) {
    const struct CPU_State initial_cpu = {.pc=0xa021, .a=0x68, .x=0x2d, .y=0x34, .sp=0x17, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x3a}, {.addr=0xa021, .value=0xf8}, {.addr=0xa022, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xa023, .a=0x68, .x=0x3a, .y=0x34, .sp=0x17, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x3a}, {.addr=0xa021, .value=0xf8}, {.addr=0xa022, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa021, .value=0xf8, .type=IO_READ},
        {.addr=0xa022, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_034E) {
    const struct CPU_State initial_cpu = {.pc=0x383f, .a=0x5d, .x=0x47, .y=0x93, .sp=0x70, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x03}, {.addr=0x383f, .value=0xf8}, {.addr=0x3840, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x3841, .a=0x5d, .x=0x03, .y=0x93, .sp=0x70, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x03}, {.addr=0x383f, .value=0xf8}, {.addr=0x3840, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x383f, .value=0xf8, .type=IO_READ},
        {.addr=0x3840, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_034F) {
    const struct CPU_State initial_cpu = {.pc=0xfca3, .a=0x85, .x=0xde, .y=0x0d, .sp=0x4e, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x32}, {.addr=0xfca3, .value=0xf8}, {.addr=0xfca4, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xfca5, .a=0x85, .x=0x32, .y=0x0d, .sp=0x4e, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x32}, {.addr=0xfca3, .value=0xf8}, {.addr=0xfca4, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xfca3, .value=0xf8, .type=IO_READ},
        {.addr=0xfca4, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0350) {
    const struct CPU_State initial_cpu = {.pc=0x6d68, .a=0xf5, .x=0xf4, .y=0x22, .sp=0x15, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x1d}, {.addr=0x6d68, .value=0xf8}, {.addr=0x6d69, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x6d6a, .a=0xf5, .x=0x1d, .y=0x22, .sp=0x15, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x1d}, {.addr=0x6d68, .value=0xf8}, {.addr=0x6d69, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d68, .value=0xf8, .type=IO_READ},
        {.addr=0x6d69, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0351) {
    const struct CPU_State initial_cpu = {.pc=0xffc7, .a=0x5b, .x=0x7f, .y=0x18, .sp=0x1f, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x87}, {.addr=0xffc7, .value=0xf8}, {.addr=0xffc8, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xffc9, .a=0x5b, .x=0x87, .y=0x18, .sp=0x1f, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x87}, {.addr=0xffc7, .value=0xf8}, {.addr=0xffc8, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xffc7, .value=0xf8, .type=IO_READ},
        {.addr=0xffc8, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0352) {
    const struct CPU_State initial_cpu = {.pc=0x6331, .a=0xbf, .x=0x5e, .y=0x98, .sp=0xd5, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x8b}, {.addr=0x6331, .value=0xf8}, {.addr=0x6332, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x6333, .a=0xbf, .x=0x8b, .y=0x98, .sp=0xd5, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x8b}, {.addr=0x6331, .value=0xf8}, {.addr=0x6332, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x6331, .value=0xf8, .type=IO_READ},
        {.addr=0x6332, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0353) {
    const struct CPU_State initial_cpu = {.pc=0x4457, .a=0x07, .x=0x69, .y=0xc7, .sp=0x74, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x75}, {.addr=0x4457, .value=0xf8}, {.addr=0x4458, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x4459, .a=0x07, .x=0x75, .y=0xc7, .sp=0x74, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x75}, {.addr=0x4457, .value=0xf8}, {.addr=0x4458, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x4457, .value=0xf8, .type=IO_READ},
        {.addr=0x4458, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0354) {
    const struct CPU_State initial_cpu = {.pc=0xa85d, .a=0x59, .x=0x9b, .y=0xc7, .sp=0x89, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x8a}, {.addr=0xa85d, .value=0xf8}, {.addr=0xa85e, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xa85f, .a=0x59, .x=0x8a, .y=0xc7, .sp=0x89, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x8a}, {.addr=0xa85d, .value=0xf8}, {.addr=0xa85e, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa85d, .value=0xf8, .type=IO_READ},
        {.addr=0xa85e, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0355) {
    const struct CPU_State initial_cpu = {.pc=0x4e48, .a=0x2d, .x=0xec, .y=0x7d, .sp=0xe3, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x51}, {.addr=0x4e48, .value=0xf8}, {.addr=0x4e49, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x4e4a, .a=0x2d, .x=0x51, .y=0x7d, .sp=0xe3, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x51}, {.addr=0x4e48, .value=0xf8}, {.addr=0x4e49, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e48, .value=0xf8, .type=IO_READ},
        {.addr=0x4e49, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0356) {
    const struct CPU_State initial_cpu = {.pc=0xf799, .a=0xdf, .x=0x5a, .y=0x2f, .sp=0x65, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xdf}, {.addr=0xf799, .value=0xf8}, {.addr=0xf79a, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xf79b, .a=0xdf, .x=0xdf, .y=0x2f, .sp=0x65, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xdf}, {.addr=0xf799, .value=0xf8}, {.addr=0xf79a, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xf799, .value=0xf8, .type=IO_READ},
        {.addr=0xf79a, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0357) {
    const struct CPU_State initial_cpu = {.pc=0x0e3c, .a=0x89, .x=0xc4, .y=0xa7, .sp=0x97, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x6a}, {.addr=0x0e3c, .value=0xf8}, {.addr=0x0e3d, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x0e3e, .a=0x89, .x=0x6a, .y=0xa7, .sp=0x97, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x6a}, {.addr=0x0e3c, .value=0xf8}, {.addr=0x0e3d, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e3c, .value=0xf8, .type=IO_READ},
        {.addr=0x0e3d, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0358) {
    const struct CPU_State initial_cpu = {.pc=0xadcd, .a=0x47, .x=0xdb, .y=0xaa, .sp=0x84, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0xf2}, {.addr=0xadcd, .value=0xf8}, {.addr=0xadce, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xadcf, .a=0x47, .x=0xf2, .y=0xaa, .sp=0x84, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0xf2}, {.addr=0xadcd, .value=0xf8}, {.addr=0xadce, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xadcd, .value=0xf8, .type=IO_READ},
        {.addr=0xadce, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0359) {
    const struct CPU_State initial_cpu = {.pc=0x9270, .a=0xb6, .x=0x84, .y=0x6f, .sp=0xb3, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x11}, {.addr=0x9270, .value=0xf8}, {.addr=0x9271, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x9272, .a=0xb6, .x=0x11, .y=0x6f, .sp=0xb3, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x11}, {.addr=0x9270, .value=0xf8}, {.addr=0x9271, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9270, .value=0xf8, .type=IO_READ},
        {.addr=0x9271, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_035A) {
    const struct CPU_State initial_cpu = {.pc=0xdc7c, .a=0x33, .x=0x56, .y=0x6a, .sp=0x5e, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xde}, {.addr=0xdc7c, .value=0xf8}, {.addr=0xdc7d, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xdc7e, .a=0x33, .x=0xde, .y=0x6a, .sp=0x5e, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xde}, {.addr=0xdc7c, .value=0xf8}, {.addr=0xdc7d, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc7c, .value=0xf8, .type=IO_READ},
        {.addr=0xdc7d, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_035B) {
    const struct CPU_State initial_cpu = {.pc=0x457d, .a=0x7c, .x=0x74, .y=0x67, .sp=0xf5, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x21}, {.addr=0x457d, .value=0xf8}, {.addr=0x457e, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x457f, .a=0x7c, .x=0x21, .y=0x67, .sp=0xf5, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x21}, {.addr=0x457d, .value=0xf8}, {.addr=0x457e, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x457d, .value=0xf8, .type=IO_READ},
        {.addr=0x457e, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_035C) {
    const struct CPU_State initial_cpu = {.pc=0x7051, .a=0x0a, .x=0xa0, .y=0xdb, .sp=0xbd, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xa0}, {.addr=0x7051, .value=0xf8}, {.addr=0x7052, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x7053, .a=0x0a, .x=0xa0, .y=0xdb, .sp=0xbd, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xa0}, {.addr=0x7051, .value=0xf8}, {.addr=0x7052, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x7051, .value=0xf8, .type=IO_READ},
        {.addr=0x7052, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_035D) {
    const struct CPU_State initial_cpu = {.pc=0x3267, .a=0x0c, .x=0x21, .y=0xe8, .sp=0x2e, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xae}, {.addr=0x3267, .value=0xf8}, {.addr=0x3268, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x3269, .a=0x0c, .x=0xae, .y=0xe8, .sp=0x2e, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xae}, {.addr=0x3267, .value=0xf8}, {.addr=0x3268, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3267, .value=0xf8, .type=IO_READ},
        {.addr=0x3268, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_035E) {
    const struct CPU_State initial_cpu = {.pc=0x3efb, .a=0x2e, .x=0xe4, .y=0x25, .sp=0x30, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x79}, {.addr=0x3efb, .value=0xf8}, {.addr=0x3efc, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x3efd, .a=0x2e, .x=0x79, .y=0x25, .sp=0x30, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x79}, {.addr=0x3efb, .value=0xf8}, {.addr=0x3efc, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x3efb, .value=0xf8, .type=IO_READ},
        {.addr=0x3efc, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_035F) {
    const struct CPU_State initial_cpu = {.pc=0x27be, .a=0x12, .x=0xbd, .y=0x48, .sp=0x51, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0xb1}, {.addr=0x27be, .value=0xf8}, {.addr=0x27bf, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x27c0, .a=0x12, .x=0xb1, .y=0x48, .sp=0x51, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0xb1}, {.addr=0x27be, .value=0xf8}, {.addr=0x27bf, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x27be, .value=0xf8, .type=IO_READ},
        {.addr=0x27bf, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0360) {
    const struct CPU_State initial_cpu = {.pc=0x3537, .a=0x51, .x=0xc0, .y=0xbb, .sp=0x06, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xe7}, {.addr=0x3537, .value=0xf8}, {.addr=0x3538, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x3539, .a=0x51, .x=0xe7, .y=0xbb, .sp=0x06, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xe7}, {.addr=0x3537, .value=0xf8}, {.addr=0x3538, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3537, .value=0xf8, .type=IO_READ},
        {.addr=0x3538, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0362) {
    const struct CPU_State initial_cpu = {.pc=0x8943, .a=0xc6, .x=0x82, .y=0x81, .sp=0x69, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x1f}, {.addr=0x8943, .value=0xf8}, {.addr=0x8944, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x8945, .a=0xc6, .x=0x1f, .y=0x81, .sp=0x69, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x1f}, {.addr=0x8943, .value=0xf8}, {.addr=0x8944, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8943, .value=0xf8, .type=IO_READ},
        {.addr=0x8944, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0363) {
    const struct CPU_State initial_cpu = {.pc=0xa1a7, .a=0xbb, .x=0x2d, .y=0x5e, .sp=0xa5, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xbb}, {.addr=0xa1a7, .value=0xf8}, {.addr=0xa1a8, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xa1a9, .a=0xbb, .x=0xbb, .y=0x5e, .sp=0xa5, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xbb}, {.addr=0xa1a7, .value=0xf8}, {.addr=0xa1a8, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1a7, .value=0xf8, .type=IO_READ},
        {.addr=0xa1a8, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0364) {
    const struct CPU_State initial_cpu = {.pc=0xee56, .a=0xc6, .x=0xd4, .y=0x2a, .sp=0x76, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xc7}, {.addr=0xee56, .value=0xf8}, {.addr=0xee57, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xee58, .a=0xc6, .x=0xc7, .y=0x2a, .sp=0x76, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xc7}, {.addr=0xee56, .value=0xf8}, {.addr=0xee57, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xee56, .value=0xf8, .type=IO_READ},
        {.addr=0xee57, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0365) {
    const struct CPU_State initial_cpu = {.pc=0x19ed, .a=0x3e, .x=0xe7, .y=0xdf, .sp=0x82, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0xe2}, {.addr=0x19ed, .value=0xf8}, {.addr=0x19ee, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x19ef, .a=0x3e, .x=0xe2, .y=0xdf, .sp=0x82, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0xe2}, {.addr=0x19ed, .value=0xf8}, {.addr=0x19ee, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x19ed, .value=0xf8, .type=IO_READ},
        {.addr=0x19ee, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0366) {
    const struct CPU_State initial_cpu = {.pc=0xddfb, .a=0x2f, .x=0xf6, .y=0x7b, .sp=0x22, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x39}, {.addr=0xddfb, .value=0xf8}, {.addr=0xddfc, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xddfd, .a=0x2f, .x=0x39, .y=0x7b, .sp=0x22, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x39}, {.addr=0xddfb, .value=0xf8}, {.addr=0xddfc, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xddfb, .value=0xf8, .type=IO_READ},
        {.addr=0xddfc, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0367) {
    const struct CPU_State initial_cpu = {.pc=0xa9cb, .a=0x17, .x=0x4c, .y=0x8c, .sp=0xdd, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xb6}, {.addr=0xa9cb, .value=0xf8}, {.addr=0xa9cc, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xa9cd, .a=0x17, .x=0xb6, .y=0x8c, .sp=0xdd, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xb6}, {.addr=0xa9cb, .value=0xf8}, {.addr=0xa9cc, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9cb, .value=0xf8, .type=IO_READ},
        {.addr=0xa9cc, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8873, .a=0x1e, .x=0xeb, .y=0x30, .sp=0x41, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xfc}, {.addr=0x8873, .value=0xf8}, {.addr=0x8874, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x8875, .a=0x1e, .x=0xfc, .y=0x30, .sp=0x41, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xfc}, {.addr=0x8873, .value=0xf8}, {.addr=0x8874, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8873, .value=0xf8, .type=IO_READ},
        {.addr=0x8874, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0369) {
    const struct CPU_State initial_cpu = {.pc=0x7e44, .a=0x1d, .x=0xf5, .y=0x88, .sp=0x81, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x14}, {.addr=0x7e44, .value=0xf8}, {.addr=0x7e45, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x7e46, .a=0x1d, .x=0x14, .y=0x88, .sp=0x81, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x14}, {.addr=0x7e44, .value=0xf8}, {.addr=0x7e45, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e44, .value=0xf8, .type=IO_READ},
        {.addr=0x7e45, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_036A) {
    const struct CPU_State initial_cpu = {.pc=0x4d12, .a=0xd1, .x=0xcd, .y=0x57, .sp=0xdf, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x92}, {.addr=0x4d12, .value=0xf8}, {.addr=0x4d13, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x4d14, .a=0xd1, .x=0x92, .y=0x57, .sp=0xdf, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x92}, {.addr=0x4d12, .value=0xf8}, {.addr=0x4d13, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d12, .value=0xf8, .type=IO_READ},
        {.addr=0x4d13, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_036B) {
    const struct CPU_State initial_cpu = {.pc=0x8bd9, .a=0x98, .x=0x52, .y=0x58, .sp=0xf3, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xde}, {.addr=0x8bd9, .value=0xf8}, {.addr=0x8bda, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x8bdb, .a=0x98, .x=0xde, .y=0x58, .sp=0xf3, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xde}, {.addr=0x8bd9, .value=0xf8}, {.addr=0x8bda, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bd9, .value=0xf8, .type=IO_READ},
        {.addr=0x8bda, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_036C) {
    const struct CPU_State initial_cpu = {.pc=0x1d37, .a=0xcd, .x=0x09, .y=0xc3, .sp=0x8d, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x75}, {.addr=0x1d37, .value=0xf8}, {.addr=0x1d38, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x1d39, .a=0xcd, .x=0x75, .y=0xc3, .sp=0x8d, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x75}, {.addr=0x1d37, .value=0xf8}, {.addr=0x1d38, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d37, .value=0xf8, .type=IO_READ},
        {.addr=0x1d38, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_036D) {
    const struct CPU_State initial_cpu = {.pc=0xb045, .a=0x0d, .x=0xde, .y=0x79, .sp=0x1d, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x17}, {.addr=0xb045, .value=0xf8}, {.addr=0xb046, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xb047, .a=0x0d, .x=0x17, .y=0x79, .sp=0x1d, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x17}, {.addr=0xb045, .value=0xf8}, {.addr=0xb046, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb045, .value=0xf8, .type=IO_READ},
        {.addr=0xb046, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_036E) {
    const struct CPU_State initial_cpu = {.pc=0x0dbc, .a=0xd3, .x=0x96, .y=0x02, .sp=0x12, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x9b}, {.addr=0x0dbc, .value=0xf8}, {.addr=0x0dbd, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x0dbe, .a=0xd3, .x=0x9b, .y=0x02, .sp=0x12, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x9b}, {.addr=0x0dbc, .value=0xf8}, {.addr=0x0dbd, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dbc, .value=0xf8, .type=IO_READ},
        {.addr=0x0dbd, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_036F) {
    const struct CPU_State initial_cpu = {.pc=0x07e3, .a=0x8d, .x=0x70, .y=0xce, .sp=0x7b, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x05}, {.addr=0x07e3, .value=0xf8}, {.addr=0x07e4, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x07e5, .a=0x8d, .x=0x05, .y=0xce, .sp=0x7b, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x05}, {.addr=0x07e3, .value=0xf8}, {.addr=0x07e4, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x07e3, .value=0xf8, .type=IO_READ},
        {.addr=0x07e4, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0370) {
    const struct CPU_State initial_cpu = {.pc=0x9dd6, .a=0xe5, .x=0xb6, .y=0x87, .sp=0xc1, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xb7}, {.addr=0x9dd6, .value=0xf8}, {.addr=0x9dd7, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x9dd8, .a=0xe5, .x=0xb7, .y=0x87, .sp=0xc1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xb7}, {.addr=0x9dd6, .value=0xf8}, {.addr=0x9dd7, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x9dd6, .value=0xf8, .type=IO_READ},
        {.addr=0x9dd7, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0371) {
    const struct CPU_State initial_cpu = {.pc=0x4554, .a=0xf0, .x=0xe2, .y=0xfc, .sp=0xe7, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xad}, {.addr=0x4554, .value=0xf8}, {.addr=0x4555, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x4556, .a=0xf0, .x=0xad, .y=0xfc, .sp=0xe7, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xad}, {.addr=0x4554, .value=0xf8}, {.addr=0x4555, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4554, .value=0xf8, .type=IO_READ},
        {.addr=0x4555, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0372) {
    const struct CPU_State initial_cpu = {.pc=0x5e58, .a=0x3e, .x=0xf5, .y=0x8f, .sp=0x89, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x6a}, {.addr=0x5e58, .value=0xf8}, {.addr=0x5e59, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x5e5a, .a=0x3e, .x=0x6a, .y=0x8f, .sp=0x89, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x6a}, {.addr=0x5e58, .value=0xf8}, {.addr=0x5e59, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e58, .value=0xf8, .type=IO_READ},
        {.addr=0x5e59, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0373) {
    const struct CPU_State initial_cpu = {.pc=0xf430, .a=0x3f, .x=0xb3, .y=0x84, .sp=0xc7, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xc6}, {.addr=0xf430, .value=0xf8}, {.addr=0xf431, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xf432, .a=0x3f, .x=0xc6, .y=0x84, .sp=0xc7, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xc6}, {.addr=0xf430, .value=0xf8}, {.addr=0xf431, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xf430, .value=0xf8, .type=IO_READ},
        {.addr=0xf431, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0374) {
    const struct CPU_State initial_cpu = {.pc=0x64bd, .a=0x77, .x=0x4f, .y=0xdd, .sp=0xc5, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x1e}, {.addr=0x64bd, .value=0xf8}, {.addr=0x64be, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x64bf, .a=0x77, .x=0x1e, .y=0xdd, .sp=0xc5, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x1e}, {.addr=0x64bd, .value=0xf8}, {.addr=0x64be, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x64bd, .value=0xf8, .type=IO_READ},
        {.addr=0x64be, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0375) {
    const struct CPU_State initial_cpu = {.pc=0x247c, .a=0x35, .x=0x23, .y=0xe4, .sp=0xc0, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x08}, {.addr=0x247c, .value=0xf8}, {.addr=0x247d, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x247e, .a=0x35, .x=0x08, .y=0xe4, .sp=0xc0, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x08}, {.addr=0x247c, .value=0xf8}, {.addr=0x247d, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x247c, .value=0xf8, .type=IO_READ},
        {.addr=0x247d, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0376) {
    const struct CPU_State initial_cpu = {.pc=0xcd15, .a=0xdb, .x=0x9c, .y=0x53, .sp=0xf7, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0x1f}, {.addr=0xcd15, .value=0xf8}, {.addr=0xcd16, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xcd17, .a=0xdb, .x=0x1f, .y=0x53, .sp=0xf7, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0x1f}, {.addr=0xcd15, .value=0xf8}, {.addr=0xcd16, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd15, .value=0xf8, .type=IO_READ},
        {.addr=0xcd16, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0377) {
    const struct CPU_State initial_cpu = {.pc=0x81b1, .a=0xd1, .x=0x23, .y=0x6c, .sp=0x60, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x97}, {.addr=0x81b1, .value=0xf8}, {.addr=0x81b2, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x81b3, .a=0xd1, .x=0x97, .y=0x6c, .sp=0x60, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x97}, {.addr=0x81b1, .value=0xf8}, {.addr=0x81b2, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x81b1, .value=0xf8, .type=IO_READ},
        {.addr=0x81b2, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0378) {
    const struct CPU_State initial_cpu = {.pc=0x1631, .a=0x3b, .x=0x10, .y=0x5f, .sp=0xa4, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xee}, {.addr=0x1631, .value=0xf8}, {.addr=0x1632, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x1633, .a=0x3b, .x=0xee, .y=0x5f, .sp=0xa4, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xee}, {.addr=0x1631, .value=0xf8}, {.addr=0x1632, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x1631, .value=0xf8, .type=IO_READ},
        {.addr=0x1632, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0379) {
    const struct CPU_State initial_cpu = {.pc=0xf3df, .a=0xb2, .x=0x48, .y=0x20, .sp=0x6a, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x1e}, {.addr=0xf3df, .value=0xf8}, {.addr=0xf3e0, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xf3e1, .a=0xb2, .x=0x1e, .y=0x20, .sp=0x6a, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x1e}, {.addr=0xf3df, .value=0xf8}, {.addr=0xf3e0, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3df, .value=0xf8, .type=IO_READ},
        {.addr=0xf3e0, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_037A) {
    const struct CPU_State initial_cpu = {.pc=0xa40d, .a=0x89, .x=0x07, .y=0x4c, .sp=0x0d, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0xe5}, {.addr=0xa40d, .value=0xf8}, {.addr=0xa40e, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xa40f, .a=0x89, .x=0xe5, .y=0x4c, .sp=0x0d, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0xe5}, {.addr=0xa40d, .value=0xf8}, {.addr=0xa40e, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa40d, .value=0xf8, .type=IO_READ},
        {.addr=0xa40e, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5cd2, .a=0xec, .x=0x43, .y=0xe0, .sp=0xcb, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xbc}, {.addr=0x5cd2, .value=0xf8}, {.addr=0x5cd3, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x5cd4, .a=0xec, .x=0xbc, .y=0xe0, .sp=0xcb, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xbc}, {.addr=0x5cd2, .value=0xf8}, {.addr=0x5cd3, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cd2, .value=0xf8, .type=IO_READ},
        {.addr=0x5cd3, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_037C) {
    const struct CPU_State initial_cpu = {.pc=0xfaa3, .a=0x83, .x=0x63, .y=0xf0, .sp=0xae, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xc9}, {.addr=0xfaa3, .value=0xf8}, {.addr=0xfaa4, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xfaa5, .a=0x83, .x=0xc9, .y=0xf0, .sp=0xae, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xc9}, {.addr=0xfaa3, .value=0xf8}, {.addr=0xfaa4, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaa3, .value=0xf8, .type=IO_READ},
        {.addr=0xfaa4, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_037D) {
    const struct CPU_State initial_cpu = {.pc=0x802a, .a=0x6f, .x=0xbf, .y=0x1d, .sp=0xba, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xe6}, {.addr=0x802a, .value=0xf8}, {.addr=0x802b, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x802c, .a=0x6f, .x=0xe6, .y=0x1d, .sp=0xba, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xe6}, {.addr=0x802a, .value=0xf8}, {.addr=0x802b, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x802a, .value=0xf8, .type=IO_READ},
        {.addr=0x802b, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_037E) {
    const struct CPU_State initial_cpu = {.pc=0x8fbd, .a=0xcb, .x=0x20, .y=0x7b, .sp=0xf6, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x04}, {.addr=0x8fbd, .value=0xf8}, {.addr=0x8fbe, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x8fbf, .a=0xcb, .x=0x04, .y=0x7b, .sp=0xf6, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x04}, {.addr=0x8fbd, .value=0xf8}, {.addr=0x8fbe, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fbd, .value=0xf8, .type=IO_READ},
        {.addr=0x8fbe, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_037F) {
    const struct CPU_State initial_cpu = {.pc=0x6ef3, .a=0x0a, .x=0xc3, .y=0x75, .sp=0xeb, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xcf}, {.addr=0x6ef3, .value=0xf8}, {.addr=0x6ef4, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x6ef5, .a=0x0a, .x=0xcf, .y=0x75, .sp=0xeb, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xcf}, {.addr=0x6ef3, .value=0xf8}, {.addr=0x6ef4, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ef3, .value=0xf8, .type=IO_READ},
        {.addr=0x6ef4, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0380) {
    const struct CPU_State initial_cpu = {.pc=0x67ec, .a=0x8b, .x=0xf8, .y=0x91, .sp=0xad, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x6f}, {.addr=0x67ec, .value=0xf8}, {.addr=0x67ed, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x67ee, .a=0x8b, .x=0x6f, .y=0x91, .sp=0xad, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x6f}, {.addr=0x67ec, .value=0xf8}, {.addr=0x67ed, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x67ec, .value=0xf8, .type=IO_READ},
        {.addr=0x67ed, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0381) {
    const struct CPU_State initial_cpu = {.pc=0x8976, .a=0x07, .x=0x29, .y=0x0c, .sp=0x39, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x8f}, {.addr=0x8976, .value=0xf8}, {.addr=0x8977, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x8978, .a=0x07, .x=0x8f, .y=0x0c, .sp=0x39, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x8f}, {.addr=0x8976, .value=0xf8}, {.addr=0x8977, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x8976, .value=0xf8, .type=IO_READ},
        {.addr=0x8977, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0382) {
    const struct CPU_State initial_cpu = {.pc=0x7151, .a=0xc5, .x=0xce, .y=0xc1, .sp=0xf4, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xaf}, {.addr=0x7151, .value=0xf8}, {.addr=0x7152, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x7153, .a=0xc5, .x=0xaf, .y=0xc1, .sp=0xf4, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xaf}, {.addr=0x7151, .value=0xf8}, {.addr=0x7152, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7151, .value=0xf8, .type=IO_READ},
        {.addr=0x7152, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0383) {
    const struct CPU_State initial_cpu = {.pc=0x49f9, .a=0x0c, .x=0x3d, .y=0x53, .sp=0x1f, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xc6}, {.addr=0x49f9, .value=0xf8}, {.addr=0x49fa, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x49fb, .a=0x0c, .x=0xc6, .y=0x53, .sp=0x1f, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xc6}, {.addr=0x49f9, .value=0xf8}, {.addr=0x49fa, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x49f9, .value=0xf8, .type=IO_READ},
        {.addr=0x49fa, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0384) {
    const struct CPU_State initial_cpu = {.pc=0x337c, .a=0xb7, .x=0x91, .y=0x8c, .sp=0x44, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x30}, {.addr=0x337c, .value=0xf8}, {.addr=0x337d, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x337e, .a=0xb7, .x=0x30, .y=0x8c, .sp=0x44, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x30}, {.addr=0x337c, .value=0xf8}, {.addr=0x337d, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x337c, .value=0xf8, .type=IO_READ},
        {.addr=0x337d, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0385) {
    const struct CPU_State initial_cpu = {.pc=0x67d5, .a=0x7a, .x=0xd3, .y=0x26, .sp=0x72, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xe7}, {.addr=0x67d5, .value=0xf8}, {.addr=0x67d6, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x67d7, .a=0x7a, .x=0xe7, .y=0x26, .sp=0x72, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xe7}, {.addr=0x67d5, .value=0xf8}, {.addr=0x67d6, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x67d5, .value=0xf8, .type=IO_READ},
        {.addr=0x67d6, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0386) {
    const struct CPU_State initial_cpu = {.pc=0x7d63, .a=0x23, .x=0x2d, .y=0x63, .sp=0x44, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x5d}, {.addr=0x7d63, .value=0xf8}, {.addr=0x7d64, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x7d65, .a=0x23, .x=0x5d, .y=0x63, .sp=0x44, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x5d}, {.addr=0x7d63, .value=0xf8}, {.addr=0x7d64, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d63, .value=0xf8, .type=IO_READ},
        {.addr=0x7d64, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0387) {
    const struct CPU_State initial_cpu = {.pc=0x3791, .a=0xd4, .x=0x43, .y=0x08, .sp=0xa4, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x06}, {.addr=0x3791, .value=0xf8}, {.addr=0x3792, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x3793, .a=0xd4, .x=0x06, .y=0x08, .sp=0xa4, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x06}, {.addr=0x3791, .value=0xf8}, {.addr=0x3792, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3791, .value=0xf8, .type=IO_READ},
        {.addr=0x3792, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0388) {
    const struct CPU_State initial_cpu = {.pc=0x07ed, .a=0xb7, .x=0xc8, .y=0x1f, .sp=0x8f, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x1c}, {.addr=0x07ed, .value=0xf8}, {.addr=0x07ee, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x07ef, .a=0xb7, .x=0x1c, .y=0x1f, .sp=0x8f, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x1c}, {.addr=0x07ed, .value=0xf8}, {.addr=0x07ee, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x07ed, .value=0xf8, .type=IO_READ},
        {.addr=0x07ee, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0389) {
    const struct CPU_State initial_cpu = {.pc=0x5395, .a=0x38, .x=0xfe, .y=0xf0, .sp=0x47, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x70}, {.addr=0x5395, .value=0xf8}, {.addr=0x5396, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x5397, .a=0x38, .x=0x70, .y=0xf0, .sp=0x47, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x70}, {.addr=0x5395, .value=0xf8}, {.addr=0x5396, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x5395, .value=0xf8, .type=IO_READ},
        {.addr=0x5396, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_038A) {
    const struct CPU_State initial_cpu = {.pc=0x76a5, .a=0xa6, .x=0x9b, .y=0x34, .sp=0xfc, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x6b}, {.addr=0x76a5, .value=0xf8}, {.addr=0x76a6, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x76a7, .a=0xa6, .x=0x6b, .y=0x34, .sp=0xfc, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x6b}, {.addr=0x76a5, .value=0xf8}, {.addr=0x76a6, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x76a5, .value=0xf8, .type=IO_READ},
        {.addr=0x76a6, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_038B) {
    const struct CPU_State initial_cpu = {.pc=0xb70f, .a=0x48, .x=0xf1, .y=0x87, .sp=0x60, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x6c}, {.addr=0xb70f, .value=0xf8}, {.addr=0xb710, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xb711, .a=0x48, .x=0x6c, .y=0x87, .sp=0x60, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x6c}, {.addr=0xb70f, .value=0xf8}, {.addr=0xb710, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xb70f, .value=0xf8, .type=IO_READ},
        {.addr=0xb710, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_038C) {
    const struct CPU_State initial_cpu = {.pc=0xc8e9, .a=0x29, .x=0x48, .y=0x53, .sp=0x65, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x8d}, {.addr=0xc8e9, .value=0xf8}, {.addr=0xc8ea, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xc8eb, .a=0x29, .x=0x8d, .y=0x53, .sp=0x65, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x8d}, {.addr=0xc8e9, .value=0xf8}, {.addr=0xc8ea, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8e9, .value=0xf8, .type=IO_READ},
        {.addr=0xc8ea, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_038D) {
    const struct CPU_State initial_cpu = {.pc=0xe951, .a=0x88, .x=0x11, .y=0x85, .sp=0xcb, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xe0}, {.addr=0xe951, .value=0xf8}, {.addr=0xe952, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xe953, .a=0x88, .x=0xe0, .y=0x85, .sp=0xcb, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xe0}, {.addr=0xe951, .value=0xf8}, {.addr=0xe952, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xe951, .value=0xf8, .type=IO_READ},
        {.addr=0xe952, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_038E) {
    const struct CPU_State initial_cpu = {.pc=0xbf76, .a=0x3c, .x=0xe4, .y=0x9b, .sp=0x14, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x64}, {.addr=0xbf76, .value=0xf8}, {.addr=0xbf77, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xbf78, .a=0x3c, .x=0x64, .y=0x9b, .sp=0x14, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x64}, {.addr=0xbf76, .value=0xf8}, {.addr=0xbf77, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf76, .value=0xf8, .type=IO_READ},
        {.addr=0xbf77, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_038F) {
    const struct CPU_State initial_cpu = {.pc=0xd761, .a=0xd9, .x=0xc7, .y=0xc4, .sp=0x7d, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x77}, {.addr=0xd761, .value=0xf8}, {.addr=0xd762, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xd763, .a=0xd9, .x=0x77, .y=0xc4, .sp=0x7d, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x77}, {.addr=0xd761, .value=0xf8}, {.addr=0xd762, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd761, .value=0xf8, .type=IO_READ},
        {.addr=0xd762, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0390) {
    const struct CPU_State initial_cpu = {.pc=0x2aa1, .a=0xc2, .x=0xcd, .y=0x3b, .sp=0xba, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x8b}, {.addr=0x2aa1, .value=0xf8}, {.addr=0x2aa2, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x2aa3, .a=0xc2, .x=0x8b, .y=0x3b, .sp=0xba, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x8b}, {.addr=0x2aa1, .value=0xf8}, {.addr=0x2aa2, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2aa1, .value=0xf8, .type=IO_READ},
        {.addr=0x2aa2, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0391) {
    const struct CPU_State initial_cpu = {.pc=0xe262, .a=0x14, .x=0xe0, .y=0xf3, .sp=0x64, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x8c}, {.addr=0xe262, .value=0xf8}, {.addr=0xe263, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xe264, .a=0x14, .x=0x8c, .y=0xf3, .sp=0x64, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x8c}, {.addr=0xe262, .value=0xf8}, {.addr=0xe263, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xe262, .value=0xf8, .type=IO_READ},
        {.addr=0xe263, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0392) {
    const struct CPU_State initial_cpu = {.pc=0x5498, .a=0x86, .x=0x5b, .y=0x6c, .sp=0xf1, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x31}, {.addr=0x5498, .value=0xf8}, {.addr=0x5499, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x549a, .a=0x86, .x=0x31, .y=0x6c, .sp=0xf1, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x31}, {.addr=0x5498, .value=0xf8}, {.addr=0x5499, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5498, .value=0xf8, .type=IO_READ},
        {.addr=0x5499, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0393) {
    const struct CPU_State initial_cpu = {.pc=0x3e2e, .a=0xd8, .x=0x6c, .y=0x27, .sp=0x19, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x9a}, {.addr=0x3e2e, .value=0xf8}, {.addr=0x3e2f, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x3e30, .a=0xd8, .x=0x9a, .y=0x27, .sp=0x19, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x9a}, {.addr=0x3e2e, .value=0xf8}, {.addr=0x3e2f, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e2e, .value=0xf8, .type=IO_READ},
        {.addr=0x3e2f, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0394) {
    const struct CPU_State initial_cpu = {.pc=0x17a6, .a=0x2d, .x=0x43, .y=0x1f, .sp=0x5c, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x65}, {.addr=0x17a6, .value=0xf8}, {.addr=0x17a7, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x17a8, .a=0x2d, .x=0x65, .y=0x1f, .sp=0x5c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x65}, {.addr=0x17a6, .value=0xf8}, {.addr=0x17a7, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x17a6, .value=0xf8, .type=IO_READ},
        {.addr=0x17a7, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0395) {
    const struct CPU_State initial_cpu = {.pc=0x91d5, .a=0x76, .x=0x62, .y=0x9f, .sp=0x70, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x13}, {.addr=0x91d5, .value=0xf8}, {.addr=0x91d6, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x91d7, .a=0x76, .x=0x13, .y=0x9f, .sp=0x70, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x13}, {.addr=0x91d5, .value=0xf8}, {.addr=0x91d6, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x91d5, .value=0xf8, .type=IO_READ},
        {.addr=0x91d6, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0396) {
    const struct CPU_State initial_cpu = {.pc=0xe126, .a=0xf6, .x=0xe2, .y=0x95, .sp=0xfb, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xae}, {.addr=0xe126, .value=0xf8}, {.addr=0xe127, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xe128, .a=0xf6, .x=0xae, .y=0x95, .sp=0xfb, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xae}, {.addr=0xe126, .value=0xf8}, {.addr=0xe127, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe126, .value=0xf8, .type=IO_READ},
        {.addr=0xe127, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4f9d, .a=0xb1, .x=0x29, .y=0x2e, .sp=0x0e, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x17}, {.addr=0x4f9d, .value=0xf8}, {.addr=0x4f9e, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x4f9f, .a=0xb1, .x=0x17, .y=0x2e, .sp=0x0e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x17}, {.addr=0x4f9d, .value=0xf8}, {.addr=0x4f9e, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f9d, .value=0xf8, .type=IO_READ},
        {.addr=0x4f9e, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0398) {
    const struct CPU_State initial_cpu = {.pc=0x84c1, .a=0x0d, .x=0x3a, .y=0x94, .sp=0x60, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xdd}, {.addr=0x84c1, .value=0xf8}, {.addr=0x84c2, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x84c3, .a=0x0d, .x=0xdd, .y=0x94, .sp=0x60, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xdd}, {.addr=0x84c1, .value=0xf8}, {.addr=0x84c2, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x84c1, .value=0xf8, .type=IO_READ},
        {.addr=0x84c2, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_0399) {
    const struct CPU_State initial_cpu = {.pc=0x67bb, .a=0x17, .x=0x4f, .y=0xc1, .sp=0x7b, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xc9}, {.addr=0x67bb, .value=0xf8}, {.addr=0x67bc, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x67bd, .a=0x17, .x=0xc9, .y=0xc1, .sp=0x7b, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xc9}, {.addr=0x67bb, .value=0xf8}, {.addr=0x67bc, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x67bb, .value=0xf8, .type=IO_READ},
        {.addr=0x67bc, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_039A) {
    const struct CPU_State initial_cpu = {.pc=0x044f, .a=0x00, .x=0xc9, .y=0x16, .sp=0x7c, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x2b}, {.addr=0x044f, .value=0xf8}, {.addr=0x0450, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x0451, .a=0x00, .x=0x2b, .y=0x16, .sp=0x7c, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x2b}, {.addr=0x044f, .value=0xf8}, {.addr=0x0450, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x044f, .value=0xf8, .type=IO_READ},
        {.addr=0x0450, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_039B) {
    const struct CPU_State initial_cpu = {.pc=0x7420, .a=0xe2, .x=0xc3, .y=0xb2, .sp=0x91, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x66}, {.addr=0x7420, .value=0xf8}, {.addr=0x7421, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x7422, .a=0xe2, .x=0x66, .y=0xb2, .sp=0x91, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x66}, {.addr=0x7420, .value=0xf8}, {.addr=0x7421, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7420, .value=0xf8, .type=IO_READ},
        {.addr=0x7421, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_039C) {
    const struct CPU_State initial_cpu = {.pc=0x0e1a, .a=0x04, .x=0xe5, .y=0x80, .sp=0xb0, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xea}, {.addr=0x0e1a, .value=0xf8}, {.addr=0x0e1b, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x0e1c, .a=0x04, .x=0xea, .y=0x80, .sp=0xb0, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xea}, {.addr=0x0e1a, .value=0xf8}, {.addr=0x0e1b, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e1a, .value=0xf8, .type=IO_READ},
        {.addr=0x0e1b, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_039D) {
    const struct CPU_State initial_cpu = {.pc=0x2544, .a=0x1a, .x=0x16, .y=0x29, .sp=0x97, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x26}, {.addr=0x2544, .value=0xf8}, {.addr=0x2545, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x2546, .a=0x1a, .x=0x26, .y=0x29, .sp=0x97, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x26}, {.addr=0x2544, .value=0xf8}, {.addr=0x2545, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2544, .value=0xf8, .type=IO_READ},
        {.addr=0x2545, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_039E) {
    const struct CPU_State initial_cpu = {.pc=0x05c6, .a=0xf5, .x=0x77, .y=0x8b, .sp=0x77, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xac}, {.addr=0x05c6, .value=0xf8}, {.addr=0x05c7, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x05c8, .a=0xf5, .x=0xac, .y=0x8b, .sp=0x77, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xac}, {.addr=0x05c6, .value=0xf8}, {.addr=0x05c7, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x05c6, .value=0xf8, .type=IO_READ},
        {.addr=0x05c7, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_039F) {
    const struct CPU_State initial_cpu = {.pc=0x162a, .a=0x8a, .x=0xb5, .y=0x91, .sp=0xc2, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x67}, {.addr=0x162a, .value=0xf8}, {.addr=0x162b, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x162c, .a=0x8a, .x=0x67, .y=0x91, .sp=0xc2, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x67}, {.addr=0x162a, .value=0xf8}, {.addr=0x162b, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x162a, .value=0xf8, .type=IO_READ},
        {.addr=0x162b, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x268b, .a=0x46, .x=0x15, .y=0xba, .sp=0xe2, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xe9}, {.addr=0x268b, .value=0xf8}, {.addr=0x268c, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x268d, .a=0x46, .x=0xe9, .y=0xba, .sp=0xe2, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xe9}, {.addr=0x268b, .value=0xf8}, {.addr=0x268c, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x268b, .value=0xf8, .type=IO_READ},
        {.addr=0x268c, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x1507, .a=0xa3, .x=0x2d, .y=0x2a, .sp=0x31, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x4a}, {.addr=0x1507, .value=0xf8}, {.addr=0x1508, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x1509, .a=0xa3, .x=0x4a, .y=0x2a, .sp=0x31, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x4a}, {.addr=0x1507, .value=0xf8}, {.addr=0x1508, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1507, .value=0xf8, .type=IO_READ},
        {.addr=0x1508, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x4f51, .a=0x37, .x=0x60, .y=0x81, .sp=0x57, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x4a}, {.addr=0x4f51, .value=0xf8}, {.addr=0x4f52, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x4f53, .a=0x37, .x=0x4a, .y=0x81, .sp=0x57, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x4a}, {.addr=0x4f51, .value=0xf8}, {.addr=0x4f52, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f51, .value=0xf8, .type=IO_READ},
        {.addr=0x4f52, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x2a62, .a=0x10, .x=0x5d, .y=0x57, .sp=0xd4, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xc4}, {.addr=0x2a62, .value=0xf8}, {.addr=0x2a63, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x2a64, .a=0x10, .x=0xc4, .y=0x57, .sp=0xd4, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xc4}, {.addr=0x2a62, .value=0xf8}, {.addr=0x2a63, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a62, .value=0xf8, .type=IO_READ},
        {.addr=0x2a63, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x7eab, .a=0x25, .x=0xa6, .y=0x0d, .sp=0x99, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xee}, {.addr=0x7eab, .value=0xf8}, {.addr=0x7eac, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x7ead, .a=0x25, .x=0xee, .y=0x0d, .sp=0x99, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xee}, {.addr=0x7eab, .value=0xf8}, {.addr=0x7eac, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eab, .value=0xf8, .type=IO_READ},
        {.addr=0x7eac, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xedbd, .a=0x5d, .x=0xb7, .y=0xfc, .sp=0x6e, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xa3}, {.addr=0xedbd, .value=0xf8}, {.addr=0xedbe, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xedbf, .a=0x5d, .x=0xa3, .y=0xfc, .sp=0x6e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xa3}, {.addr=0xedbd, .value=0xf8}, {.addr=0xedbe, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xedbd, .value=0xf8, .type=IO_READ},
        {.addr=0xedbe, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xd86e, .a=0x2c, .x=0x15, .y=0x29, .sp=0x45, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0xf9}, {.addr=0xd86e, .value=0xf8}, {.addr=0xd86f, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xd870, .a=0x2c, .x=0xf9, .y=0x29, .sp=0x45, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0xf9}, {.addr=0xd86e, .value=0xf8}, {.addr=0xd86f, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xd86e, .value=0xf8, .type=IO_READ},
        {.addr=0xd86f, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x89db, .a=0xc1, .x=0xbf, .y=0x96, .sp=0xd8, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0xe1}, {.addr=0x89db, .value=0xf8}, {.addr=0x89dc, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x89dd, .a=0xc1, .x=0xe1, .y=0x96, .sp=0xd8, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0xe1}, {.addr=0x89db, .value=0xf8}, {.addr=0x89dc, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x89db, .value=0xf8, .type=IO_READ},
        {.addr=0x89dc, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xff56, .a=0x27, .x=0x92, .y=0xf6, .sp=0x0c, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x8e}, {.addr=0xff56, .value=0xf8}, {.addr=0xff57, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xff58, .a=0x27, .x=0x8e, .y=0xf6, .sp=0x0c, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x8e}, {.addr=0xff56, .value=0xf8}, {.addr=0xff57, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xff56, .value=0xf8, .type=IO_READ},
        {.addr=0xff57, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x3216, .a=0xd8, .x=0x06, .y=0x57, .sp=0x1e, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xa1}, {.addr=0x3216, .value=0xf8}, {.addr=0x3217, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x3218, .a=0xd8, .x=0xa1, .y=0x57, .sp=0x1e, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xa1}, {.addr=0x3216, .value=0xf8}, {.addr=0x3217, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x3216, .value=0xf8, .type=IO_READ},
        {.addr=0x3217, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xe572, .a=0x78, .x=0xd9, .y=0xe5, .sp=0x0c, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x05}, {.addr=0xe572, .value=0xf8}, {.addr=0xe573, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xe574, .a=0x78, .x=0x05, .y=0xe5, .sp=0x0c, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x05}, {.addr=0xe572, .value=0xf8}, {.addr=0xe573, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe572, .value=0xf8, .type=IO_READ},
        {.addr=0xe573, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xf396, .a=0xe3, .x=0xd8, .y=0x4e, .sp=0xdf, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x23}, {.addr=0xf396, .value=0xf8}, {.addr=0xf397, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xf398, .a=0xe3, .x=0x23, .y=0x4e, .sp=0xdf, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x23}, {.addr=0xf396, .value=0xf8}, {.addr=0xf397, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xf396, .value=0xf8, .type=IO_READ},
        {.addr=0xf397, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xaa93, .a=0xcf, .x=0x81, .y=0x16, .sp=0xdc, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x5f}, {.addr=0xaa93, .value=0xf8}, {.addr=0xaa94, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xaa95, .a=0xcf, .x=0x5f, .y=0x16, .sp=0xdc, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x5f}, {.addr=0xaa93, .value=0xf8}, {.addr=0xaa94, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa93, .value=0xf8, .type=IO_READ},
        {.addr=0xaa94, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xefb4, .a=0x59, .x=0xcb, .y=0xdc, .sp=0x4b, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0xf7}, {.addr=0xefb4, .value=0xf8}, {.addr=0xefb5, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xefb6, .a=0x59, .x=0xf7, .y=0xdc, .sp=0x4b, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0xf7}, {.addr=0xefb4, .value=0xf8}, {.addr=0xefb5, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xefb4, .value=0xf8, .type=IO_READ},
        {.addr=0xefb5, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xb951, .a=0x9d, .x=0x63, .y=0xd2, .sp=0x69, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xeb}, {.addr=0xb951, .value=0xf8}, {.addr=0xb952, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xb953, .a=0x9d, .x=0xeb, .y=0xd2, .sp=0x69, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xeb}, {.addr=0xb951, .value=0xf8}, {.addr=0xb952, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xb951, .value=0xf8, .type=IO_READ},
        {.addr=0xb952, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xf49a, .a=0x4f, .x=0xf2, .y=0x44, .sp=0xe3, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x52}, {.addr=0xf49a, .value=0xf8}, {.addr=0xf49b, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xf49c, .a=0x4f, .x=0x52, .y=0x44, .sp=0xe3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x52}, {.addr=0xf49a, .value=0xf8}, {.addr=0xf49b, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xf49a, .value=0xf8, .type=IO_READ},
        {.addr=0xf49b, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xea4b, .a=0xcf, .x=0x22, .y=0x6b, .sp=0xc8, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x05}, {.addr=0xea4b, .value=0xf8}, {.addr=0xea4c, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xea4d, .a=0xcf, .x=0x05, .y=0x6b, .sp=0xc8, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x05}, {.addr=0xea4b, .value=0xf8}, {.addr=0xea4c, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xea4b, .value=0xf8, .type=IO_READ},
        {.addr=0xea4c, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x2ca7, .a=0x9f, .x=0x15, .y=0xa7, .sp=0x58, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xe6}, {.addr=0x2ca7, .value=0xf8}, {.addr=0x2ca8, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x2ca9, .a=0x9f, .x=0xe6, .y=0xa7, .sp=0x58, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xe6}, {.addr=0x2ca7, .value=0xf8}, {.addr=0x2ca8, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ca7, .value=0xf8, .type=IO_READ},
        {.addr=0x2ca8, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xe345, .a=0xa0, .x=0x70, .y=0x04, .sp=0xa2, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xdf}, {.addr=0xe345, .value=0xf8}, {.addr=0xe346, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xe347, .a=0xa0, .x=0xdf, .y=0x04, .sp=0xa2, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xdf}, {.addr=0xe345, .value=0xf8}, {.addr=0xe346, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe345, .value=0xf8, .type=IO_READ},
        {.addr=0xe346, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xd6c6, .a=0x28, .x=0x97, .y=0xe5, .sp=0x05, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xf9}, {.addr=0xd6c6, .value=0xf8}, {.addr=0xd6c7, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xd6c8, .a=0x28, .x=0xf9, .y=0xe5, .sp=0x05, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xf9}, {.addr=0xd6c6, .value=0xf8}, {.addr=0xd6c7, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6c6, .value=0xf8, .type=IO_READ},
        {.addr=0xd6c7, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb2c4, .a=0x1c, .x=0xcc, .y=0x76, .sp=0xb8, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x1e}, {.addr=0xb2c4, .value=0xf8}, {.addr=0xb2c5, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xb2c6, .a=0x1c, .x=0x1e, .y=0x76, .sp=0xb8, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x1e}, {.addr=0xb2c4, .value=0xf8}, {.addr=0xb2c5, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2c4, .value=0xf8, .type=IO_READ},
        {.addr=0xb2c5, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x9ba2, .a=0xaf, .x=0xc9, .y=0xaa, .sp=0x8b, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x78}, {.addr=0x9ba2, .value=0xf8}, {.addr=0x9ba3, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x9ba4, .a=0xaf, .x=0x78, .y=0xaa, .sp=0x8b, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x78}, {.addr=0x9ba2, .value=0xf8}, {.addr=0x9ba3, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ba2, .value=0xf8, .type=IO_READ},
        {.addr=0x9ba3, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x482e, .a=0x80, .x=0x32, .y=0x83, .sp=0x42, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xd7}, {.addr=0x482e, .value=0xf8}, {.addr=0x482f, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x4830, .a=0x80, .x=0xd7, .y=0x83, .sp=0x42, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xd7}, {.addr=0x482e, .value=0xf8}, {.addr=0x482f, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x482e, .value=0xf8, .type=IO_READ},
        {.addr=0x482f, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x0f8b, .a=0x42, .x=0xb7, .y=0x10, .sp=0x0c, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x82}, {.addr=0x0f8b, .value=0xf8}, {.addr=0x0f8c, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x0f8d, .a=0x42, .x=0x82, .y=0x10, .sp=0x0c, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x82}, {.addr=0x0f8b, .value=0xf8}, {.addr=0x0f8c, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f8b, .value=0xf8, .type=IO_READ},
        {.addr=0x0f8c, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xc86c, .a=0x36, .x=0x79, .y=0x2f, .sp=0x79, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x22}, {.addr=0xc86c, .value=0xf8}, {.addr=0xc86d, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xc86e, .a=0x36, .x=0x22, .y=0x2f, .sp=0x79, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x22}, {.addr=0xc86c, .value=0xf8}, {.addr=0xc86d, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xc86c, .value=0xf8, .type=IO_READ},
        {.addr=0xc86d, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x3f2e, .a=0x23, .x=0x42, .y=0x78, .sp=0xa3, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xf3}, {.addr=0x3f2e, .value=0xf8}, {.addr=0x3f2f, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x3f30, .a=0x23, .x=0xf3, .y=0x78, .sp=0xa3, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xf3}, {.addr=0x3f2e, .value=0xf8}, {.addr=0x3f2f, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f2e, .value=0xf8, .type=IO_READ},
        {.addr=0x3f2f, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xed49, .a=0x1f, .x=0xa4, .y=0x06, .sp=0x1e, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x8e}, {.addr=0xed49, .value=0xf8}, {.addr=0xed4a, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0xed4b, .a=0x1f, .x=0x8e, .y=0x06, .sp=0x1e, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x8e}, {.addr=0xed49, .value=0xf8}, {.addr=0xed4a, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0xed49, .value=0xf8, .type=IO_READ},
        {.addr=0xed4a, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x9364, .a=0xb2, .x=0x9e, .y=0xd3, .sp=0xbf, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x8d}, {.addr=0x9364, .value=0xf8}, {.addr=0x9365, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x9366, .a=0xb2, .x=0x8d, .y=0xd3, .sp=0xbf, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x8d}, {.addr=0x9364, .value=0xf8}, {.addr=0x9365, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x9364, .value=0xf8, .type=IO_READ},
        {.addr=0x9365, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x362a, .a=0xbf, .x=0x2e, .y=0xe2, .sp=0xa1, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x3c}, {.addr=0x362a, .value=0xf8}, {.addr=0x362b, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x362c, .a=0xbf, .x=0x3c, .y=0xe2, .sp=0xa1, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x3c}, {.addr=0x362a, .value=0xf8}, {.addr=0x362b, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x362a, .value=0xf8, .type=IO_READ},
        {.addr=0x362b, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x891d, .a=0xc3, .x=0x73, .y=0xbd, .sp=0x43, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x3b}, {.addr=0x891d, .value=0xf8}, {.addr=0x891e, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x891f, .a=0xc3, .x=0x3b, .y=0xbd, .sp=0x43, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x3b}, {.addr=0x891d, .value=0xf8}, {.addr=0x891e, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x891d, .value=0xf8, .type=IO_READ},
        {.addr=0x891e, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xff14, .a=0xad, .x=0x2a, .y=0xa3, .sp=0x45, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x0b}, {.addr=0xff14, .value=0xf8}, {.addr=0xff15, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xff16, .a=0xad, .x=0x0b, .y=0xa3, .sp=0x45, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x0b}, {.addr=0xff14, .value=0xf8}, {.addr=0xff15, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xff14, .value=0xf8, .type=IO_READ},
        {.addr=0xff15, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x71a9, .a=0x90, .x=0xe3, .y=0xfc, .sp=0xc6, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x78}, {.addr=0x71a9, .value=0xf8}, {.addr=0x71aa, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x71ab, .a=0x90, .x=0x78, .y=0xfc, .sp=0xc6, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x78}, {.addr=0x71a9, .value=0xf8}, {.addr=0x71aa, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x71a9, .value=0xf8, .type=IO_READ},
        {.addr=0x71aa, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x467a, .a=0xf5, .x=0x07, .y=0xff, .sp=0xc7, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x72}, {.addr=0x467a, .value=0xf8}, {.addr=0x467b, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x467c, .a=0xf5, .x=0x72, .y=0xff, .sp=0xc7, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x72}, {.addr=0x467a, .value=0xf8}, {.addr=0x467b, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x467a, .value=0xf8, .type=IO_READ},
        {.addr=0x467b, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xce23, .a=0x9c, .x=0xd2, .y=0x16, .sp=0x28, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xa3}, {.addr=0xce23, .value=0xf8}, {.addr=0xce24, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xce25, .a=0x9c, .x=0xa3, .y=0x16, .sp=0x28, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xa3}, {.addr=0xce23, .value=0xf8}, {.addr=0xce24, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xce23, .value=0xf8, .type=IO_READ},
        {.addr=0xce24, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x732e, .a=0xbd, .x=0xad, .y=0xf3, .sp=0xec, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xe1}, {.addr=0x732e, .value=0xf8}, {.addr=0x732f, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x7330, .a=0xbd, .x=0xe1, .y=0xf3, .sp=0xec, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xe1}, {.addr=0x732e, .value=0xf8}, {.addr=0x732f, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x732e, .value=0xf8, .type=IO_READ},
        {.addr=0x732f, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xfbe0, .a=0x2d, .x=0xf0, .y=0xac, .sp=0x4a, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x28}, {.addr=0xfbe0, .value=0xf8}, {.addr=0xfbe1, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xfbe2, .a=0x2d, .x=0x28, .y=0xac, .sp=0x4a, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x28}, {.addr=0xfbe0, .value=0xf8}, {.addr=0xfbe1, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbe0, .value=0xf8, .type=IO_READ},
        {.addr=0xfbe1, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xe155, .a=0x4e, .x=0xb5, .y=0xfa, .sp=0xfa, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xd3}, {.addr=0xe155, .value=0xf8}, {.addr=0xe156, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xe157, .a=0x4e, .x=0xd3, .y=0xfa, .sp=0xfa, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xd3}, {.addr=0xe155, .value=0xf8}, {.addr=0xe156, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xe155, .value=0xf8, .type=IO_READ},
        {.addr=0xe156, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xb3f0, .a=0x4a, .x=0x7c, .y=0x1d, .sp=0xf7, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x88}, {.addr=0xb3f0, .value=0xf8}, {.addr=0xb3f1, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xb3f2, .a=0x4a, .x=0x88, .y=0x1d, .sp=0xf7, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x88}, {.addr=0xb3f0, .value=0xf8}, {.addr=0xb3f1, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3f0, .value=0xf8, .type=IO_READ},
        {.addr=0xb3f1, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x2401, .a=0x0b, .x=0x91, .y=0xed, .sp=0x6d, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x00}, {.addr=0x2401, .value=0xf8}, {.addr=0x2402, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x2403, .a=0x0b, .x=0x00, .y=0xed, .sp=0x6d, .status=0x1f};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x00}, {.addr=0x2401, .value=0xf8}, {.addr=0x2402, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2401, .value=0xf8, .type=IO_READ},
        {.addr=0x2402, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x799e, .a=0x4c, .x=0x59, .y=0x01, .sp=0xf3, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xfb}, {.addr=0x799e, .value=0xf8}, {.addr=0x799f, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x79a0, .a=0x4c, .x=0xfb, .y=0x01, .sp=0xf3, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xfb}, {.addr=0x799e, .value=0xf8}, {.addr=0x799f, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x799e, .value=0xf8, .type=IO_READ},
        {.addr=0x799f, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x34a7, .a=0x93, .x=0xb9, .y=0x44, .sp=0x61, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x2f}, {.addr=0x34a7, .value=0xf8}, {.addr=0x34a8, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x34a9, .a=0x93, .x=0x2f, .y=0x44, .sp=0x61, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x2f}, {.addr=0x34a7, .value=0xf8}, {.addr=0x34a8, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x34a7, .value=0xf8, .type=IO_READ},
        {.addr=0x34a8, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x993d, .a=0x1a, .x=0xcd, .y=0xc5, .sp=0x81, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x89}, {.addr=0x993d, .value=0xf8}, {.addr=0x993e, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x993f, .a=0x1a, .x=0x89, .y=0xc5, .sp=0x81, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x89}, {.addr=0x993d, .value=0xf8}, {.addr=0x993e, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x993d, .value=0xf8, .type=IO_READ},
        {.addr=0x993e, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x1300, .a=0xe9, .x=0xfe, .y=0x9e, .sp=0x51, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x51}, {.addr=0x1300, .value=0xf8}, {.addr=0x1301, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x1302, .a=0xe9, .x=0x51, .y=0x9e, .sp=0x51, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x51}, {.addr=0x1300, .value=0xf8}, {.addr=0x1301, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1300, .value=0xf8, .type=IO_READ},
        {.addr=0x1301, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x551b, .a=0x68, .x=0xfa, .y=0x3d, .sp=0xa5, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x13}, {.addr=0x551b, .value=0xf8}, {.addr=0x551c, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x551d, .a=0x68, .x=0x13, .y=0x3d, .sp=0xa5, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x13}, {.addr=0x551b, .value=0xf8}, {.addr=0x551c, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x551b, .value=0xf8, .type=IO_READ},
        {.addr=0x551c, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xdbb4, .a=0xe9, .x=0x92, .y=0x18, .sp=0x62, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xa4}, {.addr=0xdbb4, .value=0xf8}, {.addr=0xdbb5, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xdbb6, .a=0xe9, .x=0xa4, .y=0x18, .sp=0x62, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xa4}, {.addr=0xdbb4, .value=0xf8}, {.addr=0xdbb5, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbb4, .value=0xf8, .type=IO_READ},
        {.addr=0xdbb5, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xe705, .a=0x67, .x=0x33, .y=0x08, .sp=0xf3, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xe9}, {.addr=0xe705, .value=0xf8}, {.addr=0xe706, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe707, .a=0x67, .x=0xe9, .y=0x08, .sp=0xf3, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xe9}, {.addr=0xe705, .value=0xf8}, {.addr=0xe706, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe705, .value=0xf8, .type=IO_READ},
        {.addr=0xe706, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xe4e2, .a=0xe1, .x=0x40, .y=0xf4, .sp=0x06, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xc8}, {.addr=0xe4e2, .value=0xf8}, {.addr=0xe4e3, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xe4e4, .a=0xe1, .x=0xc8, .y=0xf4, .sp=0x06, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xc8}, {.addr=0xe4e2, .value=0xf8}, {.addr=0xe4e3, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4e2, .value=0xf8, .type=IO_READ},
        {.addr=0xe4e3, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x431e, .a=0x80, .x=0x93, .y=0x51, .sp=0x4d, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0xe6}, {.addr=0x431e, .value=0xf8}, {.addr=0x431f, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x4320, .a=0x80, .x=0xe6, .y=0x51, .sp=0x4d, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0xe6}, {.addr=0x431e, .value=0xf8}, {.addr=0x431f, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x431e, .value=0xf8, .type=IO_READ},
        {.addr=0x431f, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x3f13, .a=0xdf, .x=0x6b, .y=0x7e, .sp=0x95, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x25}, {.addr=0x3f13, .value=0xf8}, {.addr=0x3f14, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x3f15, .a=0xdf, .x=0x25, .y=0x7e, .sp=0x95, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x25}, {.addr=0x3f13, .value=0xf8}, {.addr=0x3f14, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f13, .value=0xf8, .type=IO_READ},
        {.addr=0x3f14, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x9857, .a=0x01, .x=0x51, .y=0x79, .sp=0x46, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xe7}, {.addr=0x9857, .value=0xf8}, {.addr=0x9858, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x9859, .a=0x01, .x=0xe7, .y=0x79, .sp=0x46, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xe7}, {.addr=0x9857, .value=0xf8}, {.addr=0x9858, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9857, .value=0xf8, .type=IO_READ},
        {.addr=0x9858, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x8b1b, .a=0x87, .x=0xcc, .y=0x8b, .sp=0x2c, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x7a}, {.addr=0x8b1b, .value=0xf8}, {.addr=0x8b1c, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x8b1d, .a=0x87, .x=0x7a, .y=0x8b, .sp=0x2c, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x7a}, {.addr=0x8b1b, .value=0xf8}, {.addr=0x8b1c, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b1b, .value=0xf8, .type=IO_READ},
        {.addr=0x8b1c, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xc0fa, .a=0x53, .x=0x13, .y=0x6c, .sp=0x35, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xe5}, {.addr=0xc0fa, .value=0xf8}, {.addr=0xc0fb, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xc0fc, .a=0x53, .x=0xe5, .y=0x6c, .sp=0x35, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xe5}, {.addr=0xc0fa, .value=0xf8}, {.addr=0xc0fb, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0fa, .value=0xf8, .type=IO_READ},
        {.addr=0xc0fb, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xc457, .a=0x2a, .x=0xa4, .y=0x75, .sp=0xfa, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x1c}, {.addr=0xc457, .value=0xf8}, {.addr=0xc458, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xc459, .a=0x2a, .x=0x1c, .y=0x75, .sp=0xfa, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x1c}, {.addr=0xc457, .value=0xf8}, {.addr=0xc458, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xc457, .value=0xf8, .type=IO_READ},
        {.addr=0xc458, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xceb4, .a=0x12, .x=0x62, .y=0x0b, .sp=0xfa, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x3f}, {.addr=0xceb4, .value=0xf8}, {.addr=0xceb5, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xceb6, .a=0x12, .x=0x3f, .y=0x0b, .sp=0xfa, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x3f}, {.addr=0xceb4, .value=0xf8}, {.addr=0xceb5, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xceb4, .value=0xf8, .type=IO_READ},
        {.addr=0xceb5, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xf298, .a=0x6c, .x=0xf7, .y=0x9b, .sp=0x41, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x9c}, {.addr=0xf298, .value=0xf8}, {.addr=0xf299, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xf29a, .a=0x6c, .x=0x9c, .y=0x9b, .sp=0x41, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x9c}, {.addr=0xf298, .value=0xf8}, {.addr=0xf299, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf298, .value=0xf8, .type=IO_READ},
        {.addr=0xf299, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x833a, .a=0xfb, .x=0xf6, .y=0x44, .sp=0x6d, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xba}, {.addr=0x833a, .value=0xf8}, {.addr=0x833b, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x833c, .a=0xfb, .x=0xba, .y=0x44, .sp=0x6d, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xba}, {.addr=0x833a, .value=0xf8}, {.addr=0x833b, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x833a, .value=0xf8, .type=IO_READ},
        {.addr=0x833b, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x7639, .a=0x82, .x=0xca, .y=0x30, .sp=0x14, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xd7}, {.addr=0x7639, .value=0xf8}, {.addr=0x763a, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x763b, .a=0x82, .x=0xd7, .y=0x30, .sp=0x14, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xd7}, {.addr=0x7639, .value=0xf8}, {.addr=0x763a, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7639, .value=0xf8, .type=IO_READ},
        {.addr=0x763a, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xc502, .a=0x8c, .x=0x0c, .y=0xba, .sp=0xc8, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xcd}, {.addr=0xc502, .value=0xf8}, {.addr=0xc503, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xc504, .a=0x8c, .x=0xcd, .y=0xba, .sp=0xc8, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xcd}, {.addr=0xc502, .value=0xf8}, {.addr=0xc503, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc502, .value=0xf8, .type=IO_READ},
        {.addr=0xc503, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xc5bf, .a=0x73, .x=0x65, .y=0x6f, .sp=0xfc, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xec}, {.addr=0xc5bf, .value=0xf8}, {.addr=0xc5c0, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xc5c1, .a=0x73, .x=0xec, .y=0x6f, .sp=0xfc, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xec}, {.addr=0xc5bf, .value=0xf8}, {.addr=0xc5c0, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5bf, .value=0xf8, .type=IO_READ},
        {.addr=0xc5c0, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x6f2f, .a=0xd0, .x=0x8b, .y=0x6f, .sp=0xee, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x62}, {.addr=0x6f2f, .value=0xf8}, {.addr=0x6f30, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x6f31, .a=0xd0, .x=0x62, .y=0x6f, .sp=0xee, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x62}, {.addr=0x6f2f, .value=0xf8}, {.addr=0x6f30, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f2f, .value=0xf8, .type=IO_READ},
        {.addr=0x6f30, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xb748, .a=0xac, .x=0xae, .y=0x1a, .sp=0x34, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x35}, {.addr=0xb748, .value=0xf8}, {.addr=0xb749, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xb74a, .a=0xac, .x=0x35, .y=0x1a, .sp=0x34, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x35}, {.addr=0xb748, .value=0xf8}, {.addr=0xb749, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xb748, .value=0xf8, .type=IO_READ},
        {.addr=0xb749, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x8851, .a=0x40, .x=0xb0, .y=0xd0, .sp=0xe4, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xa6}, {.addr=0x8851, .value=0xf8}, {.addr=0x8852, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x8853, .a=0x40, .x=0xa6, .y=0xd0, .sp=0xe4, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xa6}, {.addr=0x8851, .value=0xf8}, {.addr=0x8852, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8851, .value=0xf8, .type=IO_READ},
        {.addr=0x8852, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xbba5, .a=0x3d, .x=0xdd, .y=0x47, .sp=0x91, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x70}, {.addr=0xbba5, .value=0xf8}, {.addr=0xbba6, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xbba7, .a=0x3d, .x=0x70, .y=0x47, .sp=0x91, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x70}, {.addr=0xbba5, .value=0xf8}, {.addr=0xbba6, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbba5, .value=0xf8, .type=IO_READ},
        {.addr=0xbba6, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x75c1, .a=0xea, .x=0x24, .y=0x1c, .sp=0x48, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x3a}, {.addr=0x75c1, .value=0xf8}, {.addr=0x75c2, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x75c3, .a=0xea, .x=0x3a, .y=0x1c, .sp=0x48, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x3a}, {.addr=0x75c1, .value=0xf8}, {.addr=0x75c2, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x75c1, .value=0xf8, .type=IO_READ},
        {.addr=0x75c2, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x94f3, .a=0x73, .x=0x99, .y=0x66, .sp=0x01, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x14}, {.addr=0x94f3, .value=0xf8}, {.addr=0x94f4, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x94f5, .a=0x73, .x=0x14, .y=0x66, .sp=0x01, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x14}, {.addr=0x94f3, .value=0xf8}, {.addr=0x94f4, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x94f3, .value=0xf8, .type=IO_READ},
        {.addr=0x94f4, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x0fc4, .a=0x90, .x=0x51, .y=0x03, .sp=0x7a, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x44}, {.addr=0x0fc4, .value=0xf8}, {.addr=0x0fc5, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0fc6, .a=0x90, .x=0x44, .y=0x03, .sp=0x7a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x44}, {.addr=0x0fc4, .value=0xf8}, {.addr=0x0fc5, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fc4, .value=0xf8, .type=IO_READ},
        {.addr=0x0fc5, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F8, _F8_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xf67d, .a=0x9a, .x=0xfb, .y=0xc9, .sp=0x65, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x56}, {.addr=0xf67d, .value=0xf8}, {.addr=0xf67e, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xf67f, .a=0x9a, .x=0x56, .y=0xc9, .sp=0x65, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x56}, {.addr=0xf67d, .value=0xf8}, {.addr=0xf67e, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xf67d, .value=0xf8, .type=IO_READ},
        {.addr=0xf67e, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F8 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
