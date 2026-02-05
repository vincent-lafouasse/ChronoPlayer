#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_60, _60_0000) {
    const struct CPU_State initial_cpu = {.pc=0x68a1, .a=0x43, .x=0x8a, .y=0xe0, .sp=0xca, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x68a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x68a2, .a=0x43, .x=0x8a, .y=0xe0, .sp=0xca, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x68a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x68a1, .value=0x60, .type=IO_READ},
        {.addr=0x68a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0001) {
    const struct CPU_State initial_cpu = {.pc=0xb6b7, .a=0x0e, .x=0xb3, .y=0xcb, .sp=0x1f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb6b7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb6b8, .a=0x0e, .x=0xb3, .y=0xcb, .sp=0x1f, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xb6b7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb6b7, .value=0x60, .type=IO_READ},
        {.addr=0xb6b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0002) {
    const struct CPU_State initial_cpu = {.pc=0x8316, .a=0x01, .x=0x60, .y=0x6e, .sp=0x2b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8316, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8317, .a=0x01, .x=0x60, .y=0x6e, .sp=0x2b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8316, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8316, .value=0x60, .type=IO_READ},
        {.addr=0x8317, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0003) {
    const struct CPU_State initial_cpu = {.pc=0x5bbd, .a=0x1a, .x=0x78, .y=0x19, .sp=0x09, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5bbd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5bbe, .a=0x1a, .x=0x78, .y=0x19, .sp=0x09, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x5bbd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5bbd, .value=0x60, .type=IO_READ},
        {.addr=0x5bbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0004) {
    const struct CPU_State initial_cpu = {.pc=0xec47, .a=0xa7, .x=0xb1, .y=0x54, .sp=0xe2, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xec47, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xec48, .a=0xa7, .x=0xb1, .y=0x54, .sp=0xe2, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xec47, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xec47, .value=0x60, .type=IO_READ},
        {.addr=0xec48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0005) {
    const struct CPU_State initial_cpu = {.pc=0x26cc, .a=0xa5, .x=0xcf, .y=0xa9, .sp=0x57, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x26cc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x26cd, .a=0xa5, .x=0xcf, .y=0xa9, .sp=0x57, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x26cc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x26cc, .value=0x60, .type=IO_READ},
        {.addr=0x26cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0006) {
    const struct CPU_State initial_cpu = {.pc=0xaa9f, .a=0xe6, .x=0x23, .y=0x82, .sp=0x38, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xaa9f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaaa0, .a=0xe6, .x=0x23, .y=0x82, .sp=0x38, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xaa9f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaa9f, .value=0x60, .type=IO_READ},
        {.addr=0xaaa0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0007) {
    const struct CPU_State initial_cpu = {.pc=0x9f22, .a=0xa1, .x=0x8e, .y=0xe7, .sp=0x63, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9f22, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9f23, .a=0xa1, .x=0x8e, .y=0xe7, .sp=0x63, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x9f22, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9f22, .value=0x60, .type=IO_READ},
        {.addr=0x9f23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0008) {
    const struct CPU_State initial_cpu = {.pc=0xae34, .a=0x8e, .x=0xc1, .y=0xd5, .sp=0x07, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xae34, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xae35, .a=0x8e, .x=0xc1, .y=0xd5, .sp=0x07, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xae34, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xae34, .value=0x60, .type=IO_READ},
        {.addr=0xae35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0009) {
    const struct CPU_State initial_cpu = {.pc=0x88d5, .a=0x5e, .x=0x9d, .y=0xb8, .sp=0x87, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x88d5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x88d6, .a=0x5e, .x=0x9d, .y=0xb8, .sp=0x87, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x88d5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x88d5, .value=0x60, .type=IO_READ},
        {.addr=0x88d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_000A) {
    const struct CPU_State initial_cpu = {.pc=0x96a8, .a=0x12, .x=0xf9, .y=0x92, .sp=0x84, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x96a8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x96a9, .a=0x12, .x=0xf9, .y=0x92, .sp=0x84, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x96a8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x96a8, .value=0x60, .type=IO_READ},
        {.addr=0x96a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_000B) {
    const struct CPU_State initial_cpu = {.pc=0xa146, .a=0x83, .x=0x14, .y=0xc7, .sp=0x05, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa146, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa147, .a=0x83, .x=0x14, .y=0xc7, .sp=0x05, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xa146, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa146, .value=0x60, .type=IO_READ},
        {.addr=0xa147, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_000C) {
    const struct CPU_State initial_cpu = {.pc=0xcae8, .a=0xeb, .x=0xbd, .y=0x4d, .sp=0x23, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xcae8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcae9, .a=0xeb, .x=0xbd, .y=0x4d, .sp=0x23, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xcae8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcae8, .value=0x60, .type=IO_READ},
        {.addr=0xcae9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_000D) {
    const struct CPU_State initial_cpu = {.pc=0x4e10, .a=0xe6, .x=0x07, .y=0xc9, .sp=0x61, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4e10, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4e11, .a=0xe6, .x=0x07, .y=0xc9, .sp=0x61, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4e10, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4e10, .value=0x60, .type=IO_READ},
        {.addr=0x4e11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_000E) {
    const struct CPU_State initial_cpu = {.pc=0xd4cb, .a=0x6a, .x=0xef, .y=0x03, .sp=0x83, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xd4cb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd4cc, .a=0x6a, .x=0xef, .y=0x03, .sp=0x83, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd4cb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd4cb, .value=0x60, .type=IO_READ},
        {.addr=0xd4cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_000F) {
    const struct CPU_State initial_cpu = {.pc=0x66a6, .a=0xca, .x=0x2c, .y=0x08, .sp=0x8f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x66a6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x66a7, .a=0xca, .x=0x2c, .y=0x08, .sp=0x8f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x66a6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x66a6, .value=0x60, .type=IO_READ},
        {.addr=0x66a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0010) {
    const struct CPU_State initial_cpu = {.pc=0x67b9, .a=0xe3, .x=0xb3, .y=0x10, .sp=0x1a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x67b9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x67ba, .a=0xe3, .x=0xb3, .y=0x10, .sp=0x1a, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x67b9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x67b9, .value=0x60, .type=IO_READ},
        {.addr=0x67ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0011) {
    const struct CPU_State initial_cpu = {.pc=0xe0fb, .a=0x18, .x=0xba, .y=0xee, .sp=0xda, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xe0fb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe0fc, .a=0x18, .x=0xba, .y=0xee, .sp=0xda, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe0fb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe0fb, .value=0x60, .type=IO_READ},
        {.addr=0xe0fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0012) {
    const struct CPU_State initial_cpu = {.pc=0x0474, .a=0x76, .x=0xd5, .y=0x28, .sp=0x4c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0474, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0475, .a=0x76, .x=0xd5, .y=0x28, .sp=0x4c, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0474, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0474, .value=0x60, .type=IO_READ},
        {.addr=0x0475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0013) {
    const struct CPU_State initial_cpu = {.pc=0x2a44, .a=0x09, .x=0x01, .y=0x9d, .sp=0x0c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x2a44, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2a45, .a=0x09, .x=0x01, .y=0x9d, .sp=0x0c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2a44, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2a44, .value=0x60, .type=IO_READ},
        {.addr=0x2a45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0014) {
    const struct CPU_State initial_cpu = {.pc=0x7899, .a=0xd3, .x=0xb9, .y=0xbe, .sp=0x2e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7899, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x789a, .a=0xd3, .x=0xb9, .y=0xbe, .sp=0x2e, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x7899, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7899, .value=0x60, .type=IO_READ},
        {.addr=0x789a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0015) {
    const struct CPU_State initial_cpu = {.pc=0x7380, .a=0x42, .x=0x04, .y=0xd5, .sp=0xaf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7380, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7381, .a=0x42, .x=0x04, .y=0xd5, .sp=0xaf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7380, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7380, .value=0x60, .type=IO_READ},
        {.addr=0x7381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0016) {
    const struct CPU_State initial_cpu = {.pc=0x0d96, .a=0xcd, .x=0x88, .y=0xe3, .sp=0x4d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0d96, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0d97, .a=0xcd, .x=0x88, .y=0xe3, .sp=0x4d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0d96, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0d96, .value=0x60, .type=IO_READ},
        {.addr=0x0d97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0017) {
    const struct CPU_State initial_cpu = {.pc=0x6b76, .a=0x96, .x=0xdf, .y=0x76, .sp=0xe2, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6b76, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6b77, .a=0x96, .x=0xdf, .y=0x76, .sp=0xe2, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x6b76, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6b76, .value=0x60, .type=IO_READ},
        {.addr=0x6b77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0018) {
    const struct CPU_State initial_cpu = {.pc=0x7cc3, .a=0x71, .x=0x39, .y=0x51, .sp=0x14, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7cc3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7cc4, .a=0x71, .x=0x39, .y=0x51, .sp=0x14, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x7cc3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7cc3, .value=0x60, .type=IO_READ},
        {.addr=0x7cc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0019) {
    const struct CPU_State initial_cpu = {.pc=0xdd60, .a=0x8c, .x=0x3d, .y=0x99, .sp=0x75, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xdd60, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdd61, .a=0x8c, .x=0x3d, .y=0x99, .sp=0x75, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xdd60, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdd60, .value=0x60, .type=IO_READ},
        {.addr=0xdd61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_001A) {
    const struct CPU_State initial_cpu = {.pc=0xbd05, .a=0xc6, .x=0x5e, .y=0x52, .sp=0x77, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbd05, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbd06, .a=0xc6, .x=0x5e, .y=0x52, .sp=0x77, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xbd05, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbd05, .value=0x60, .type=IO_READ},
        {.addr=0xbd06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_001B) {
    const struct CPU_State initial_cpu = {.pc=0x61ac, .a=0xae, .x=0xaa, .y=0x6f, .sp=0xf7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x61ac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x61ad, .a=0xae, .x=0xaa, .y=0x6f, .sp=0xf7, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x61ac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x61ac, .value=0x60, .type=IO_READ},
        {.addr=0x61ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_001C) {
    const struct CPU_State initial_cpu = {.pc=0x760b, .a=0x20, .x=0xe2, .y=0x4c, .sp=0xb1, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x760b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x760c, .a=0x20, .x=0xe2, .y=0x4c, .sp=0xb1, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x760b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x760b, .value=0x60, .type=IO_READ},
        {.addr=0x760c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_001D) {
    const struct CPU_State initial_cpu = {.pc=0xa0b8, .a=0xd9, .x=0xfe, .y=0xe5, .sp=0xff, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa0b9, .a=0xd9, .x=0xfe, .y=0xe5, .sp=0xff, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xa0b8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa0b8, .value=0x60, .type=IO_READ},
        {.addr=0xa0b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_001E) {
    const struct CPU_State initial_cpu = {.pc=0xbbea, .a=0x5c, .x=0xd3, .y=0x26, .sp=0x4b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xbbea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbbeb, .a=0x5c, .x=0xd3, .y=0x26, .sp=0x4b, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xbbea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbbea, .value=0x60, .type=IO_READ},
        {.addr=0xbbeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_001F) {
    const struct CPU_State initial_cpu = {.pc=0x217f, .a=0xa4, .x=0x9d, .y=0x56, .sp=0xc3, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x217f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2180, .a=0xa4, .x=0x9d, .y=0x56, .sp=0xc3, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x217f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x217f, .value=0x60, .type=IO_READ},
        {.addr=0x2180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0020) {
    const struct CPU_State initial_cpu = {.pc=0xd15a, .a=0x3c, .x=0xec, .y=0x2d, .sp=0x67, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd15a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd15b, .a=0x3c, .x=0xec, .y=0x2d, .sp=0x67, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd15a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd15a, .value=0x60, .type=IO_READ},
        {.addr=0xd15b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0021) {
    const struct CPU_State initial_cpu = {.pc=0xe5ce, .a=0x32, .x=0x74, .y=0x1f, .sp=0xa0, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ce, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe5cf, .a=0x32, .x=0x74, .y=0x1f, .sp=0xa0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe5ce, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe5ce, .value=0x60, .type=IO_READ},
        {.addr=0xe5cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0022) {
    const struct CPU_State initial_cpu = {.pc=0x1f41, .a=0x58, .x=0x6d, .y=0xbe, .sp=0xc7, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f41, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1f42, .a=0x58, .x=0x6d, .y=0xbe, .sp=0xc7, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x1f41, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1f41, .value=0x60, .type=IO_READ},
        {.addr=0x1f42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0023) {
    const struct CPU_State initial_cpu = {.pc=0x4904, .a=0xf1, .x=0xda, .y=0xef, .sp=0x1c, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4904, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4905, .a=0xf1, .x=0xda, .y=0xef, .sp=0x1c, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x4904, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4904, .value=0x60, .type=IO_READ},
        {.addr=0x4905, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0024) {
    const struct CPU_State initial_cpu = {.pc=0xc6b0, .a=0xc2, .x=0x65, .y=0xaa, .sp=0xc4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc6b0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc6b1, .a=0xc2, .x=0x65, .y=0xaa, .sp=0xc4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc6b0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc6b0, .value=0x60, .type=IO_READ},
        {.addr=0xc6b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0025) {
    const struct CPU_State initial_cpu = {.pc=0x9be7, .a=0x74, .x=0xd2, .y=0x52, .sp=0xb0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x9be7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9be8, .a=0x74, .x=0xd2, .y=0x52, .sp=0xb0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9be7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9be7, .value=0x60, .type=IO_READ},
        {.addr=0x9be8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0026) {
    const struct CPU_State initial_cpu = {.pc=0xd430, .a=0xb4, .x=0x81, .y=0x3c, .sp=0x3d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd430, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd431, .a=0xb4, .x=0x81, .y=0x3c, .sp=0x3d, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xd430, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd430, .value=0x60, .type=IO_READ},
        {.addr=0xd431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0027) {
    const struct CPU_State initial_cpu = {.pc=0x6550, .a=0xab, .x=0x22, .y=0x94, .sp=0x20, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6550, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6551, .a=0xab, .x=0x22, .y=0x94, .sp=0x20, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6550, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6550, .value=0x60, .type=IO_READ},
        {.addr=0x6551, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0028) {
    const struct CPU_State initial_cpu = {.pc=0x6003, .a=0x5f, .x=0x51, .y=0xb4, .sp=0x76, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x6003, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6004, .a=0x5f, .x=0x51, .y=0xb4, .sp=0x76, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6003, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6003, .value=0x60, .type=IO_READ},
        {.addr=0x6004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0029) {
    const struct CPU_State initial_cpu = {.pc=0xcb84, .a=0xf1, .x=0xbf, .y=0xce, .sp=0x15, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xcb84, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcb85, .a=0xf1, .x=0xbf, .y=0xce, .sp=0x15, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xcb84, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcb84, .value=0x60, .type=IO_READ},
        {.addr=0xcb85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_002A) {
    const struct CPU_State initial_cpu = {.pc=0x504a, .a=0xa0, .x=0x61, .y=0x8b, .sp=0x5e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x504a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x504b, .a=0xa0, .x=0x61, .y=0x8b, .sp=0x5e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x504a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x504a, .value=0x60, .type=IO_READ},
        {.addr=0x504b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_002B) {
    const struct CPU_State initial_cpu = {.pc=0x575c, .a=0x66, .x=0x21, .y=0x0e, .sp=0x23, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x575c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x575d, .a=0x66, .x=0x21, .y=0x0e, .sp=0x23, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x575c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x575c, .value=0x60, .type=IO_READ},
        {.addr=0x575d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_002C) {
    const struct CPU_State initial_cpu = {.pc=0x293e, .a=0xfb, .x=0xab, .y=0xcc, .sp=0x9c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x293e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x293f, .a=0xfb, .x=0xab, .y=0xcc, .sp=0x9c, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x293e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x293e, .value=0x60, .type=IO_READ},
        {.addr=0x293f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_002D) {
    const struct CPU_State initial_cpu = {.pc=0x276e, .a=0x14, .x=0xcf, .y=0x88, .sp=0xc9, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x276e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x276f, .a=0x14, .x=0xcf, .y=0x88, .sp=0xc9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x276e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x276e, .value=0x60, .type=IO_READ},
        {.addr=0x276f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9e58, .a=0xbf, .x=0xb2, .y=0x3a, .sp=0x26, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x9e58, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9e59, .a=0xbf, .x=0xb2, .y=0x3a, .sp=0x26, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9e58, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9e58, .value=0x60, .type=IO_READ},
        {.addr=0x9e59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_002F) {
    const struct CPU_State initial_cpu = {.pc=0x94f3, .a=0x85, .x=0x0c, .y=0x8a, .sp=0xba, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x94f3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x94f4, .a=0x85, .x=0x0c, .y=0x8a, .sp=0xba, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x94f3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x94f3, .value=0x60, .type=IO_READ},
        {.addr=0x94f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0030) {
    const struct CPU_State initial_cpu = {.pc=0x6a2c, .a=0x62, .x=0x24, .y=0xdf, .sp=0x58, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6a2d, .a=0x62, .x=0x24, .y=0xdf, .sp=0x58, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x6a2c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6a2c, .value=0x60, .type=IO_READ},
        {.addr=0x6a2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0031) {
    const struct CPU_State initial_cpu = {.pc=0x84ee, .a=0x43, .x=0x59, .y=0x2b, .sp=0x3a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x84ee, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x84ef, .a=0x43, .x=0x59, .y=0x2b, .sp=0x3a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x84ee, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x84ee, .value=0x60, .type=IO_READ},
        {.addr=0x84ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0032) {
    const struct CPU_State initial_cpu = {.pc=0x2d57, .a=0x6e, .x=0xe8, .y=0x1f, .sp=0xf8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2d57, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2d58, .a=0x6e, .x=0xe8, .y=0x1f, .sp=0xf8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2d57, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2d57, .value=0x60, .type=IO_READ},
        {.addr=0x2d58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0033) {
    const struct CPU_State initial_cpu = {.pc=0x688e, .a=0x23, .x=0xf5, .y=0x61, .sp=0xb3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x688e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x688f, .a=0x23, .x=0xf5, .y=0x61, .sp=0xb3, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x688e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x688e, .value=0x60, .type=IO_READ},
        {.addr=0x688f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0034) {
    const struct CPU_State initial_cpu = {.pc=0x7728, .a=0x10, .x=0x6a, .y=0x61, .sp=0x4b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x7728, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7729, .a=0x10, .x=0x6a, .y=0x61, .sp=0x4b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7728, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7728, .value=0x60, .type=IO_READ},
        {.addr=0x7729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0035) {
    const struct CPU_State initial_cpu = {.pc=0x0498, .a=0xd4, .x=0x25, .y=0x10, .sp=0x88, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0498, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0499, .a=0xd4, .x=0x25, .y=0x10, .sp=0x88, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0498, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0498, .value=0x60, .type=IO_READ},
        {.addr=0x0499, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0036) {
    const struct CPU_State initial_cpu = {.pc=0x3252, .a=0xec, .x=0xcd, .y=0xe3, .sp=0x31, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3252, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3253, .a=0xec, .x=0xcd, .y=0xe3, .sp=0x31, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x3252, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3252, .value=0x60, .type=IO_READ},
        {.addr=0x3253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0037) {
    const struct CPU_State initial_cpu = {.pc=0x90c2, .a=0x9a, .x=0x14, .y=0x02, .sp=0xd1, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x90c2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x90c3, .a=0x9a, .x=0x14, .y=0x02, .sp=0xd1, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x90c2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x90c2, .value=0x60, .type=IO_READ},
        {.addr=0x90c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0038) {
    const struct CPU_State initial_cpu = {.pc=0x82e6, .a=0x6f, .x=0xb7, .y=0x96, .sp=0x63, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x82e6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x82e7, .a=0x6f, .x=0xb7, .y=0x96, .sp=0x63, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x82e6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x82e6, .value=0x60, .type=IO_READ},
        {.addr=0x82e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0039) {
    const struct CPU_State initial_cpu = {.pc=0x1aea, .a=0xa3, .x=0x53, .y=0x37, .sp=0x8d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1aea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1aeb, .a=0xa3, .x=0x53, .y=0x37, .sp=0x8d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1aea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1aea, .value=0x60, .type=IO_READ},
        {.addr=0x1aeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_003A) {
    const struct CPU_State initial_cpu = {.pc=0xd6c9, .a=0xdc, .x=0xe0, .y=0x45, .sp=0x6d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd6c9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd6ca, .a=0xdc, .x=0xe0, .y=0x45, .sp=0x6d, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xd6c9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd6c9, .value=0x60, .type=IO_READ},
        {.addr=0xd6ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_003B) {
    const struct CPU_State initial_cpu = {.pc=0x91e0, .a=0x13, .x=0x40, .y=0xae, .sp=0x17, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x91e0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x91e1, .a=0x13, .x=0x40, .y=0xae, .sp=0x17, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x91e0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x91e0, .value=0x60, .type=IO_READ},
        {.addr=0x91e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_003C) {
    const struct CPU_State initial_cpu = {.pc=0xc2ee, .a=0x3e, .x=0x17, .y=0x47, .sp=0x7a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ee, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc2ef, .a=0x3e, .x=0x17, .y=0x47, .sp=0x7a, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xc2ee, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc2ee, .value=0x60, .type=IO_READ},
        {.addr=0xc2ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_003D) {
    const struct CPU_State initial_cpu = {.pc=0x361f, .a=0xd5, .x=0xda, .y=0xce, .sp=0x70, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x361f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3620, .a=0xd5, .x=0xda, .y=0xce, .sp=0x70, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x361f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x361f, .value=0x60, .type=IO_READ},
        {.addr=0x3620, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_003E) {
    const struct CPU_State initial_cpu = {.pc=0xcaf2, .a=0x1d, .x=0x1a, .y=0x71, .sp=0xe4, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcaf3, .a=0x1d, .x=0x1a, .y=0x71, .sp=0xe4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xcaf2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcaf2, .value=0x60, .type=IO_READ},
        {.addr=0xcaf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_003F) {
    const struct CPU_State initial_cpu = {.pc=0x606f, .a=0x4e, .x=0x00, .y=0xd2, .sp=0x18, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x606f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6070, .a=0x4e, .x=0x00, .y=0xd2, .sp=0x18, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x606f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x606f, .value=0x60, .type=IO_READ},
        {.addr=0x6070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0040) {
    const struct CPU_State initial_cpu = {.pc=0x19fc, .a=0x85, .x=0x1b, .y=0x42, .sp=0xf8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x19fc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x19fd, .a=0x85, .x=0x1b, .y=0x42, .sp=0xf8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x19fc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x19fc, .value=0x60, .type=IO_READ},
        {.addr=0x19fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0041) {
    const struct CPU_State initial_cpu = {.pc=0xdc35, .a=0x0c, .x=0x0e, .y=0xc7, .sp=0x56, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xdc35, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdc36, .a=0x0c, .x=0x0e, .y=0xc7, .sp=0x56, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdc35, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdc35, .value=0x60, .type=IO_READ},
        {.addr=0xdc36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8e57, .a=0xe5, .x=0x3e, .y=0x7e, .sp=0xd2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x8e57, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8e58, .a=0xe5, .x=0x3e, .y=0x7e, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8e57, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8e57, .value=0x60, .type=IO_READ},
        {.addr=0x8e58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0043) {
    const struct CPU_State initial_cpu = {.pc=0xf8dc, .a=0xc8, .x=0xde, .y=0x78, .sp=0xd3, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf8dc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf8dd, .a=0xc8, .x=0xde, .y=0x78, .sp=0xd3, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xf8dc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf8dc, .value=0x60, .type=IO_READ},
        {.addr=0xf8dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0044) {
    const struct CPU_State initial_cpu = {.pc=0xb07f, .a=0x16, .x=0xb9, .y=0xca, .sp=0xe4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb07f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb080, .a=0x16, .x=0xb9, .y=0xca, .sp=0xe4, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xb07f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb07f, .value=0x60, .type=IO_READ},
        {.addr=0xb080, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0045) {
    const struct CPU_State initial_cpu = {.pc=0x1e1c, .a=0x20, .x=0x75, .y=0x4e, .sp=0xa3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x1e1c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1e1d, .a=0x20, .x=0x75, .y=0x4e, .sp=0xa3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1e1c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1e1c, .value=0x60, .type=IO_READ},
        {.addr=0x1e1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0046) {
    const struct CPU_State initial_cpu = {.pc=0x5f3b, .a=0x05, .x=0x99, .y=0x86, .sp=0xd4, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5f3c, .a=0x05, .x=0x99, .y=0x86, .sp=0xd4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5f3b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5f3b, .value=0x60, .type=IO_READ},
        {.addr=0x5f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0047) {
    const struct CPU_State initial_cpu = {.pc=0x3042, .a=0x88, .x=0xea, .y=0xca, .sp=0x11, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3042, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3043, .a=0x88, .x=0xea, .y=0xca, .sp=0x11, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3042, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3042, .value=0x60, .type=IO_READ},
        {.addr=0x3043, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0048) {
    const struct CPU_State initial_cpu = {.pc=0x78a8, .a=0xce, .x=0xf4, .y=0xec, .sp=0x9d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x78a8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x78a9, .a=0xce, .x=0xf4, .y=0xec, .sp=0x9d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x78a8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x78a8, .value=0x60, .type=IO_READ},
        {.addr=0x78a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0049) {
    const struct CPU_State initial_cpu = {.pc=0xd4b5, .a=0xdf, .x=0xd0, .y=0x7b, .sp=0x03, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd4b6, .a=0xdf, .x=0xd0, .y=0x7b, .sp=0x03, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd4b5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd4b5, .value=0x60, .type=IO_READ},
        {.addr=0xd4b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_004A) {
    const struct CPU_State initial_cpu = {.pc=0x8d27, .a=0xb0, .x=0x4a, .y=0x90, .sp=0x65, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d27, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8d28, .a=0xb0, .x=0x4a, .y=0x90, .sp=0x65, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x8d27, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8d27, .value=0x60, .type=IO_READ},
        {.addr=0x8d28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_004B) {
    const struct CPU_State initial_cpu = {.pc=0xf109, .a=0xcf, .x=0x6b, .y=0x26, .sp=0xbf, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf109, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf10a, .a=0xcf, .x=0x6b, .y=0x26, .sp=0xbf, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf109, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf109, .value=0x60, .type=IO_READ},
        {.addr=0xf10a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_004C) {
    const struct CPU_State initial_cpu = {.pc=0xd55d, .a=0x5f, .x=0x48, .y=0x17, .sp=0xee, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd55d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd55e, .a=0x5f, .x=0x48, .y=0x17, .sp=0xee, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd55d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd55d, .value=0x60, .type=IO_READ},
        {.addr=0xd55e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_004D) {
    const struct CPU_State initial_cpu = {.pc=0x50e9, .a=0x9b, .x=0x18, .y=0xce, .sp=0x32, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x50e9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x50ea, .a=0x9b, .x=0x18, .y=0xce, .sp=0x32, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x50e9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x50e9, .value=0x60, .type=IO_READ},
        {.addr=0x50ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_004E) {
    const struct CPU_State initial_cpu = {.pc=0xe07a, .a=0x82, .x=0x40, .y=0x38, .sp=0x91, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe07a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe07b, .a=0x82, .x=0x40, .y=0x38, .sp=0x91, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe07a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe07a, .value=0x60, .type=IO_READ},
        {.addr=0xe07b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_004F) {
    const struct CPU_State initial_cpu = {.pc=0x2759, .a=0xc1, .x=0xcd, .y=0x13, .sp=0x42, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2759, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x275a, .a=0xc1, .x=0xcd, .y=0x13, .sp=0x42, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x2759, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2759, .value=0x60, .type=IO_READ},
        {.addr=0x275a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0050) {
    const struct CPU_State initial_cpu = {.pc=0x1fea, .a=0x88, .x=0x8e, .y=0x41, .sp=0xe3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x1fea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1feb, .a=0x88, .x=0x8e, .y=0x41, .sp=0xe3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1fea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1fea, .value=0x60, .type=IO_READ},
        {.addr=0x1feb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0051) {
    const struct CPU_State initial_cpu = {.pc=0xec3b, .a=0x81, .x=0x56, .y=0x7f, .sp=0x88, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xec3b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xec3c, .a=0x81, .x=0x56, .y=0x7f, .sp=0x88, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xec3b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xec3b, .value=0x60, .type=IO_READ},
        {.addr=0xec3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0052) {
    const struct CPU_State initial_cpu = {.pc=0x792d, .a=0x1f, .x=0x58, .y=0x84, .sp=0x33, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x792d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x792e, .a=0x1f, .x=0x58, .y=0x84, .sp=0x33, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x792d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x792d, .value=0x60, .type=IO_READ},
        {.addr=0x792e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0053) {
    const struct CPU_State initial_cpu = {.pc=0xb64a, .a=0xa6, .x=0x56, .y=0x7f, .sp=0x71, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xb64a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb64b, .a=0xa6, .x=0x56, .y=0x7f, .sp=0x71, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb64a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb64a, .value=0x60, .type=IO_READ},
        {.addr=0xb64b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0054) {
    const struct CPU_State initial_cpu = {.pc=0x9adb, .a=0x41, .x=0x04, .y=0x7d, .sp=0x8d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9adb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9adc, .a=0x41, .x=0x04, .y=0x7d, .sp=0x8d, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x9adb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9adb, .value=0x60, .type=IO_READ},
        {.addr=0x9adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0055) {
    const struct CPU_State initial_cpu = {.pc=0x07ed, .a=0x33, .x=0x9a, .y=0x73, .sp=0xd7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x07ed, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x07ee, .a=0x33, .x=0x9a, .y=0x73, .sp=0xd7, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x07ed, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x07ed, .value=0x60, .type=IO_READ},
        {.addr=0x07ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0056) {
    const struct CPU_State initial_cpu = {.pc=0x33cf, .a=0xad, .x=0x26, .y=0x1c, .sp=0x8c, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x33cf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x33d0, .a=0xad, .x=0x26, .y=0x1c, .sp=0x8c, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x33cf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x33cf, .value=0x60, .type=IO_READ},
        {.addr=0x33d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0057) {
    const struct CPU_State initial_cpu = {.pc=0xef5e, .a=0xda, .x=0xd9, .y=0x5a, .sp=0xba, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xef5e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xef5f, .a=0xda, .x=0xd9, .y=0x5a, .sp=0xba, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xef5e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xef5e, .value=0x60, .type=IO_READ},
        {.addr=0xef5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0058) {
    const struct CPU_State initial_cpu = {.pc=0x76ce, .a=0xd2, .x=0x33, .y=0x48, .sp=0xb9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x76ce, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x76cf, .a=0xd2, .x=0x33, .y=0x48, .sp=0xb9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x76ce, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x76ce, .value=0x60, .type=IO_READ},
        {.addr=0x76cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0059) {
    const struct CPU_State initial_cpu = {.pc=0x027b, .a=0x88, .x=0x80, .y=0x51, .sp=0xc2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x027b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x027c, .a=0x88, .x=0x80, .y=0x51, .sp=0xc2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x027b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x027b, .value=0x60, .type=IO_READ},
        {.addr=0x027c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1e95, .a=0x57, .x=0x75, .y=0x61, .sp=0x33, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1e95, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1e96, .a=0x57, .x=0x75, .y=0x61, .sp=0x33, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1e95, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1e95, .value=0x60, .type=IO_READ},
        {.addr=0x1e96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_005B) {
    const struct CPU_State initial_cpu = {.pc=0xd3f0, .a=0x99, .x=0x05, .y=0x38, .sp=0x5e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd3f1, .a=0x99, .x=0x05, .y=0x38, .sp=0x5e, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xd3f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd3f0, .value=0x60, .type=IO_READ},
        {.addr=0xd3f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_005C) {
    const struct CPU_State initial_cpu = {.pc=0x33bd, .a=0xb9, .x=0xff, .y=0x3a, .sp=0xba, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x33bd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x33be, .a=0xb9, .x=0xff, .y=0x3a, .sp=0xba, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x33bd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x33bd, .value=0x60, .type=IO_READ},
        {.addr=0x33be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_005D) {
    const struct CPU_State initial_cpu = {.pc=0x9290, .a=0x8d, .x=0xcd, .y=0x1f, .sp=0x2d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9290, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9291, .a=0x8d, .x=0xcd, .y=0x1f, .sp=0x2d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9290, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9290, .value=0x60, .type=IO_READ},
        {.addr=0x9291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_005E) {
    const struct CPU_State initial_cpu = {.pc=0x0303, .a=0x10, .x=0xbd, .y=0xc4, .sp=0xd7, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0303, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0304, .a=0x10, .x=0xbd, .y=0xc4, .sp=0xd7, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0303, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0303, .value=0x60, .type=IO_READ},
        {.addr=0x0304, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_005F) {
    const struct CPU_State initial_cpu = {.pc=0x178d, .a=0x1c, .x=0x59, .y=0xe3, .sp=0xe2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x178d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x178e, .a=0x1c, .x=0x59, .y=0xe3, .sp=0xe2, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x178d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x178d, .value=0x60, .type=IO_READ},
        {.addr=0x178e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0060) {
    const struct CPU_State initial_cpu = {.pc=0x2835, .a=0xcf, .x=0xaf, .y=0xed, .sp=0x76, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x2835, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2836, .a=0xcf, .x=0xaf, .y=0xed, .sp=0x76, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2835, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2835, .value=0x60, .type=IO_READ},
        {.addr=0x2836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0061) {
    const struct CPU_State initial_cpu = {.pc=0xeb09, .a=0x6b, .x=0x53, .y=0x25, .sp=0xf9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xeb09, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeb0a, .a=0x6b, .x=0x53, .y=0x25, .sp=0xf9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xeb09, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeb09, .value=0x60, .type=IO_READ},
        {.addr=0xeb0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9b2c, .a=0xb7, .x=0x02, .y=0x92, .sp=0x4d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9b2c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9b2d, .a=0xb7, .x=0x02, .y=0x92, .sp=0x4d, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x9b2c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9b2c, .value=0x60, .type=IO_READ},
        {.addr=0x9b2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0063) {
    const struct CPU_State initial_cpu = {.pc=0xe1ce, .a=0x2f, .x=0xf2, .y=0xf2, .sp=0xf6, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ce, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe1cf, .a=0x2f, .x=0xf2, .y=0xf2, .sp=0xf6, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xe1ce, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe1ce, .value=0x60, .type=IO_READ},
        {.addr=0xe1cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0064) {
    const struct CPU_State initial_cpu = {.pc=0x0b7a, .a=0x6e, .x=0xef, .y=0x28, .sp=0x41, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0b7a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0b7b, .a=0x6e, .x=0xef, .y=0x28, .sp=0x41, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0b7a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0b7a, .value=0x60, .type=IO_READ},
        {.addr=0x0b7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0065) {
    const struct CPU_State initial_cpu = {.pc=0x2b57, .a=0xe9, .x=0x0f, .y=0xf3, .sp=0x4b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2b57, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2b58, .a=0xe9, .x=0x0f, .y=0xf3, .sp=0x4b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2b57, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2b57, .value=0x60, .type=IO_READ},
        {.addr=0x2b58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0066) {
    const struct CPU_State initial_cpu = {.pc=0x2f8b, .a=0x9e, .x=0x8c, .y=0x11, .sp=0x70, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2f8c, .a=0x9e, .x=0x8c, .y=0x11, .sp=0x70, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x2f8b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2f8b, .value=0x60, .type=IO_READ},
        {.addr=0x2f8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0067) {
    const struct CPU_State initial_cpu = {.pc=0x4711, .a=0x7a, .x=0xdf, .y=0x85, .sp=0xcd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4711, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4712, .a=0x7a, .x=0xdf, .y=0x85, .sp=0xcd, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x4711, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4711, .value=0x60, .type=IO_READ},
        {.addr=0x4712, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0068) {
    const struct CPU_State initial_cpu = {.pc=0x96a7, .a=0x61, .x=0xcd, .y=0x2c, .sp=0x31, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x96a7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x96a8, .a=0x61, .x=0xcd, .y=0x2c, .sp=0x31, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x96a7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x96a7, .value=0x60, .type=IO_READ},
        {.addr=0x96a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0069) {
    const struct CPU_State initial_cpu = {.pc=0xb9a9, .a=0x9e, .x=0xf2, .y=0x91, .sp=0xee, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb9aa, .a=0x9e, .x=0xf2, .y=0x91, .sp=0xee, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb9a9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb9a9, .value=0x60, .type=IO_READ},
        {.addr=0xb9aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_006A) {
    const struct CPU_State initial_cpu = {.pc=0x02ad, .a=0xfb, .x=0xe2, .y=0x64, .sp=0x89, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x02ad, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x02ae, .a=0xfb, .x=0xe2, .y=0x64, .sp=0x89, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x02ad, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x02ad, .value=0x60, .type=IO_READ},
        {.addr=0x02ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_006B) {
    const struct CPU_State initial_cpu = {.pc=0xfdbb, .a=0x61, .x=0xbf, .y=0xba, .sp=0x78, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xfdbb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfdbc, .a=0x61, .x=0xbf, .y=0xba, .sp=0x78, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xfdbb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfdbb, .value=0x60, .type=IO_READ},
        {.addr=0xfdbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_006C) {
    const struct CPU_State initial_cpu = {.pc=0xb648, .a=0x38, .x=0xf7, .y=0x7b, .sp=0x7d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb648, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb649, .a=0x38, .x=0xf7, .y=0x7b, .sp=0x7d, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xb648, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb648, .value=0x60, .type=IO_READ},
        {.addr=0xb649, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_006D) {
    const struct CPU_State initial_cpu = {.pc=0x5188, .a=0x2f, .x=0x87, .y=0x31, .sp=0x5a, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5188, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5189, .a=0x2f, .x=0x87, .y=0x31, .sp=0x5a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5188, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5188, .value=0x60, .type=IO_READ},
        {.addr=0x5189, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_006E) {
    const struct CPU_State initial_cpu = {.pc=0x1382, .a=0xa2, .x=0xea, .y=0x76, .sp=0xff, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x1382, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1383, .a=0xa2, .x=0xea, .y=0x76, .sp=0xff, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1382, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1382, .value=0x60, .type=IO_READ},
        {.addr=0x1383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_006F) {
    const struct CPU_State initial_cpu = {.pc=0x263e, .a=0x54, .x=0x7b, .y=0x3e, .sp=0x89, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x263e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x263f, .a=0x54, .x=0x7b, .y=0x3e, .sp=0x89, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x263e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x263e, .value=0x60, .type=IO_READ},
        {.addr=0x263f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0070) {
    const struct CPU_State initial_cpu = {.pc=0x9ffe, .a=0x93, .x=0xfc, .y=0x41, .sp=0x42, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9ffe, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9fff, .a=0x93, .x=0xfc, .y=0x41, .sp=0x42, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x9ffe, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9ffe, .value=0x60, .type=IO_READ},
        {.addr=0x9fff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0071) {
    const struct CPU_State initial_cpu = {.pc=0x3eee, .a=0x2e, .x=0x66, .y=0x2d, .sp=0x24, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3eee, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3eef, .a=0x2e, .x=0x66, .y=0x2d, .sp=0x24, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x3eee, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3eee, .value=0x60, .type=IO_READ},
        {.addr=0x3eef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0072) {
    const struct CPU_State initial_cpu = {.pc=0x9330, .a=0x82, .x=0x95, .y=0x32, .sp=0x46, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9330, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9331, .a=0x82, .x=0x95, .y=0x32, .sp=0x46, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9330, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9330, .value=0x60, .type=IO_READ},
        {.addr=0x9331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0073) {
    const struct CPU_State initial_cpu = {.pc=0xe46d, .a=0x75, .x=0x1c, .y=0xaf, .sp=0x89, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe46d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe46e, .a=0x75, .x=0x1c, .y=0xaf, .sp=0x89, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xe46d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe46d, .value=0x60, .type=IO_READ},
        {.addr=0xe46e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0074) {
    const struct CPU_State initial_cpu = {.pc=0x7b5c, .a=0x89, .x=0x14, .y=0x29, .sp=0x3b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7b5c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7b5d, .a=0x89, .x=0x14, .y=0x29, .sp=0x3b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7b5c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7b5c, .value=0x60, .type=IO_READ},
        {.addr=0x7b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0075) {
    const struct CPU_State initial_cpu = {.pc=0x930d, .a=0xf0, .x=0xd4, .y=0x13, .sp=0xcd, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x930d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x930e, .a=0xf0, .x=0xd4, .y=0x13, .sp=0xcd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x930d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x930d, .value=0x60, .type=IO_READ},
        {.addr=0x930e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0076) {
    const struct CPU_State initial_cpu = {.pc=0x97a6, .a=0xe2, .x=0xfa, .y=0xb6, .sp=0xdc, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x97a6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x97a7, .a=0xe2, .x=0xfa, .y=0xb6, .sp=0xdc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x97a6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x97a6, .value=0x60, .type=IO_READ},
        {.addr=0x97a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0077) {
    const struct CPU_State initial_cpu = {.pc=0x7e89, .a=0x9a, .x=0x3b, .y=0x84, .sp=0x91, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7e89, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7e8a, .a=0x9a, .x=0x3b, .y=0x84, .sp=0x91, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7e89, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7e89, .value=0x60, .type=IO_READ},
        {.addr=0x7e8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0078) {
    const struct CPU_State initial_cpu = {.pc=0x9bc1, .a=0xb2, .x=0xf0, .y=0xaf, .sp=0xd7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9bc2, .a=0xb2, .x=0xf0, .y=0xaf, .sp=0xd7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9bc1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9bc1, .value=0x60, .type=IO_READ},
        {.addr=0x9bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0079) {
    const struct CPU_State initial_cpu = {.pc=0x8bba, .a=0x82, .x=0x62, .y=0x8c, .sp=0xc6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8bba, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8bbb, .a=0x82, .x=0x62, .y=0x8c, .sp=0xc6, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x8bba, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8bba, .value=0x60, .type=IO_READ},
        {.addr=0x8bbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_007A) {
    const struct CPU_State initial_cpu = {.pc=0xff8d, .a=0x29, .x=0x67, .y=0x48, .sp=0xd2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xff8d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xff8e, .a=0x29, .x=0x67, .y=0x48, .sp=0xd2, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xff8d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xff8d, .value=0x60, .type=IO_READ},
        {.addr=0xff8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_007B) {
    const struct CPU_State initial_cpu = {.pc=0x11ee, .a=0x3a, .x=0x60, .y=0xb9, .sp=0x9b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x11ee, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x11ef, .a=0x3a, .x=0x60, .y=0xb9, .sp=0x9b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x11ee, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x11ee, .value=0x60, .type=IO_READ},
        {.addr=0x11ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_007C) {
    const struct CPU_State initial_cpu = {.pc=0x1878, .a=0xff, .x=0x14, .y=0x57, .sp=0x5d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1878, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1879, .a=0xff, .x=0x14, .y=0x57, .sp=0x5d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1878, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1878, .value=0x60, .type=IO_READ},
        {.addr=0x1879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_007D) {
    const struct CPU_State initial_cpu = {.pc=0x505e, .a=0x1a, .x=0x6d, .y=0x45, .sp=0x21, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x505e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x505f, .a=0x1a, .x=0x6d, .y=0x45, .sp=0x21, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x505e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x505e, .value=0x60, .type=IO_READ},
        {.addr=0x505f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_007E) {
    const struct CPU_State initial_cpu = {.pc=0x6a52, .a=0x89, .x=0x98, .y=0x4f, .sp=0x8b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6a52, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6a53, .a=0x89, .x=0x98, .y=0x4f, .sp=0x8b, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x6a52, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6a52, .value=0x60, .type=IO_READ},
        {.addr=0x6a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_007F) {
    const struct CPU_State initial_cpu = {.pc=0x337f, .a=0x64, .x=0xc3, .y=0x7d, .sp=0xff, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x337f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3380, .a=0x64, .x=0xc3, .y=0x7d, .sp=0xff, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x337f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x337f, .value=0x60, .type=IO_READ},
        {.addr=0x3380, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0080) {
    const struct CPU_State initial_cpu = {.pc=0xadf1, .a=0x5c, .x=0x28, .y=0xe5, .sp=0xde, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xadf1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xadf2, .a=0x5c, .x=0x28, .y=0xe5, .sp=0xde, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xadf1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xadf1, .value=0x60, .type=IO_READ},
        {.addr=0xadf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0081) {
    const struct CPU_State initial_cpu = {.pc=0xa9f4, .a=0x62, .x=0xbf, .y=0x84, .sp=0x05, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa9f5, .a=0x62, .x=0xbf, .y=0x84, .sp=0x05, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa9f4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa9f4, .value=0x60, .type=IO_READ},
        {.addr=0xa9f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0082) {
    const struct CPU_State initial_cpu = {.pc=0x06cc, .a=0x30, .x=0x43, .y=0x76, .sp=0x7c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x06cc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x06cd, .a=0x30, .x=0x43, .y=0x76, .sp=0x7c, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x06cc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x06cc, .value=0x60, .type=IO_READ},
        {.addr=0x06cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0083) {
    const struct CPU_State initial_cpu = {.pc=0x9df0, .a=0x3a, .x=0xa8, .y=0xe9, .sp=0xd0, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9df0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9df1, .a=0x3a, .x=0xa8, .y=0xe9, .sp=0xd0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9df0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9df0, .value=0x60, .type=IO_READ},
        {.addr=0x9df1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0084) {
    const struct CPU_State initial_cpu = {.pc=0x1d62, .a=0xe3, .x=0x8b, .y=0x2e, .sp=0x2c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1d62, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1d63, .a=0xe3, .x=0x8b, .y=0x2e, .sp=0x2c, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x1d62, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1d62, .value=0x60, .type=IO_READ},
        {.addr=0x1d63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0085) {
    const struct CPU_State initial_cpu = {.pc=0xbb5d, .a=0x9f, .x=0xbe, .y=0x0a, .sp=0x06, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xbb5d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbb5e, .a=0x9f, .x=0xbe, .y=0x0a, .sp=0x06, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbb5d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbb5d, .value=0x60, .type=IO_READ},
        {.addr=0xbb5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0086) {
    const struct CPU_State initial_cpu = {.pc=0x10a1, .a=0xf9, .x=0x49, .y=0xb8, .sp=0x43, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x10a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x10a2, .a=0xf9, .x=0x49, .y=0xb8, .sp=0x43, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x10a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x10a1, .value=0x60, .type=IO_READ},
        {.addr=0x10a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0087) {
    const struct CPU_State initial_cpu = {.pc=0x6d44, .a=0xbd, .x=0x2a, .y=0xad, .sp=0x33, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6d44, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6d45, .a=0xbd, .x=0x2a, .y=0xad, .sp=0x33, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6d44, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6d44, .value=0x60, .type=IO_READ},
        {.addr=0x6d45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0088) {
    const struct CPU_State initial_cpu = {.pc=0x2bf5, .a=0x9d, .x=0xbb, .y=0xb6, .sp=0x13, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2bf5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2bf6, .a=0x9d, .x=0xbb, .y=0xb6, .sp=0x13, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x2bf5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2bf5, .value=0x60, .type=IO_READ},
        {.addr=0x2bf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0089) {
    const struct CPU_State initial_cpu = {.pc=0x4477, .a=0xbf, .x=0x55, .y=0x33, .sp=0x11, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x4477, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4478, .a=0xbf, .x=0x55, .y=0x33, .sp=0x11, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4477, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4477, .value=0x60, .type=IO_READ},
        {.addr=0x4478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_008A) {
    const struct CPU_State initial_cpu = {.pc=0x0a21, .a=0x9b, .x=0x0a, .y=0x77, .sp=0x65, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0a21, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0a22, .a=0x9b, .x=0x0a, .y=0x77, .sp=0x65, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0a21, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0a21, .value=0x60, .type=IO_READ},
        {.addr=0x0a22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_008B) {
    const struct CPU_State initial_cpu = {.pc=0xce9d, .a=0x65, .x=0xfa, .y=0xd2, .sp=0x92, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xce9d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xce9e, .a=0x65, .x=0xfa, .y=0xd2, .sp=0x92, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xce9d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xce9d, .value=0x60, .type=IO_READ},
        {.addr=0xce9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_008C) {
    const struct CPU_State initial_cpu = {.pc=0x022d, .a=0x45, .x=0x1d, .y=0xe3, .sp=0x7b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x022d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x022e, .a=0x45, .x=0x1d, .y=0xe3, .sp=0x7b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x022d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x022d, .value=0x60, .type=IO_READ},
        {.addr=0x022e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_008D) {
    const struct CPU_State initial_cpu = {.pc=0x6d13, .a=0xb6, .x=0x18, .y=0x57, .sp=0x10, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6d13, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6d14, .a=0xb6, .x=0x18, .y=0x57, .sp=0x10, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6d13, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6d13, .value=0x60, .type=IO_READ},
        {.addr=0x6d14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_008E) {
    const struct CPU_State initial_cpu = {.pc=0x2ab2, .a=0x67, .x=0xfe, .y=0xb3, .sp=0x06, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2ab3, .a=0x67, .x=0xfe, .y=0xb3, .sp=0x06, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x2ab2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2ab2, .value=0x60, .type=IO_READ},
        {.addr=0x2ab3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3396, .a=0x40, .x=0x79, .y=0xd1, .sp=0x27, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3396, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3397, .a=0x40, .x=0x79, .y=0xd1, .sp=0x27, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3396, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3396, .value=0x60, .type=IO_READ},
        {.addr=0x3397, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0090) {
    const struct CPU_State initial_cpu = {.pc=0x32c5, .a=0xe0, .x=0xa0, .y=0xe4, .sp=0x3e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x32c5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x32c6, .a=0xe0, .x=0xa0, .y=0xe4, .sp=0x3e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x32c5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x32c5, .value=0x60, .type=IO_READ},
        {.addr=0x32c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0091) {
    const struct CPU_State initial_cpu = {.pc=0x1642, .a=0x93, .x=0xcc, .y=0x71, .sp=0xac, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1642, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1643, .a=0x93, .x=0xcc, .y=0x71, .sp=0xac, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1642, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1642, .value=0x60, .type=IO_READ},
        {.addr=0x1643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0092) {
    const struct CPU_State initial_cpu = {.pc=0x9ac0, .a=0xc4, .x=0xdf, .y=0xd3, .sp=0x57, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9ac1, .a=0xc4, .x=0xdf, .y=0xd3, .sp=0x57, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9ac0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9ac0, .value=0x60, .type=IO_READ},
        {.addr=0x9ac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0093) {
    const struct CPU_State initial_cpu = {.pc=0x0690, .a=0x6b, .x=0x3a, .y=0xd4, .sp=0xfa, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0690, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0691, .a=0x6b, .x=0x3a, .y=0xd4, .sp=0xfa, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0690, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0690, .value=0x60, .type=IO_READ},
        {.addr=0x0691, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0094) {
    const struct CPU_State initial_cpu = {.pc=0x2392, .a=0x90, .x=0x66, .y=0x21, .sp=0x3d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2392, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2393, .a=0x90, .x=0x66, .y=0x21, .sp=0x3d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x2392, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2392, .value=0x60, .type=IO_READ},
        {.addr=0x2393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0095) {
    const struct CPU_State initial_cpu = {.pc=0xb10a, .a=0xe8, .x=0xb5, .y=0x8d, .sp=0x05, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb10a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb10b, .a=0xe8, .x=0xb5, .y=0x8d, .sp=0x05, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xb10a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb10a, .value=0x60, .type=IO_READ},
        {.addr=0xb10b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0096) {
    const struct CPU_State initial_cpu = {.pc=0x478c, .a=0xe5, .x=0x6f, .y=0x3b, .sp=0x65, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x478c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x478d, .a=0xe5, .x=0x6f, .y=0x3b, .sp=0x65, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x478c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x478c, .value=0x60, .type=IO_READ},
        {.addr=0x478d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0097) {
    const struct CPU_State initial_cpu = {.pc=0xdfe3, .a=0x32, .x=0x67, .y=0x38, .sp=0x27, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdfe4, .a=0x32, .x=0x67, .y=0x38, .sp=0x27, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xdfe3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdfe3, .value=0x60, .type=IO_READ},
        {.addr=0xdfe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0098) {
    const struct CPU_State initial_cpu = {.pc=0x2fca, .a=0xec, .x=0x76, .y=0xf6, .sp=0x90, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2fca, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2fcb, .a=0xec, .x=0x76, .y=0xf6, .sp=0x90, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2fca, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2fca, .value=0x60, .type=IO_READ},
        {.addr=0x2fcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0099) {
    const struct CPU_State initial_cpu = {.pc=0x572f, .a=0x3f, .x=0x0c, .y=0xf4, .sp=0xba, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x572f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5730, .a=0x3f, .x=0x0c, .y=0xf4, .sp=0xba, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x572f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x572f, .value=0x60, .type=IO_READ},
        {.addr=0x5730, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_009A) {
    const struct CPU_State initial_cpu = {.pc=0x6197, .a=0x2a, .x=0xe5, .y=0x2f, .sp=0xe5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x6197, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6198, .a=0x2a, .x=0xe5, .y=0x2f, .sp=0xe5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6197, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6197, .value=0x60, .type=IO_READ},
        {.addr=0x6198, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_009B) {
    const struct CPU_State initial_cpu = {.pc=0xabab, .a=0xca, .x=0xc9, .y=0xc7, .sp=0xf2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xabab, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xabac, .a=0xca, .x=0xc9, .y=0xc7, .sp=0xf2, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xabab, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xabab, .value=0x60, .type=IO_READ},
        {.addr=0xabac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb1cc, .a=0x1d, .x=0x4a, .y=0x87, .sp=0x31, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb1cc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb1cd, .a=0x1d, .x=0x4a, .y=0x87, .sp=0x31, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb1cc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb1cc, .value=0x60, .type=IO_READ},
        {.addr=0xb1cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_009D) {
    const struct CPU_State initial_cpu = {.pc=0x55b7, .a=0x6d, .x=0xb7, .y=0x24, .sp=0xe0, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x55b7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x55b8, .a=0x6d, .x=0xb7, .y=0x24, .sp=0xe0, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x55b7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x55b7, .value=0x60, .type=IO_READ},
        {.addr=0x55b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_009E) {
    const struct CPU_State initial_cpu = {.pc=0x58a5, .a=0x67, .x=0xe9, .y=0xad, .sp=0x02, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x58a5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x58a6, .a=0x67, .x=0xe9, .y=0xad, .sp=0x02, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x58a5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x58a5, .value=0x60, .type=IO_READ},
        {.addr=0x58a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_009F) {
    const struct CPU_State initial_cpu = {.pc=0xb094, .a=0x12, .x=0x36, .y=0x3f, .sp=0x03, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb094, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb095, .a=0x12, .x=0x36, .y=0x3f, .sp=0x03, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xb094, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb094, .value=0x60, .type=IO_READ},
        {.addr=0xb095, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xdee8, .a=0x62, .x=0xac, .y=0x49, .sp=0x41, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xdee8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdee9, .a=0x62, .x=0xac, .y=0x49, .sp=0x41, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xdee8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdee8, .value=0x60, .type=IO_READ},
        {.addr=0xdee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xefe7, .a=0xf6, .x=0x35, .y=0x74, .sp=0x39, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xefe7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xefe8, .a=0xf6, .x=0x35, .y=0x74, .sp=0x39, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xefe7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xefe7, .value=0x60, .type=IO_READ},
        {.addr=0xefe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x326f, .a=0x14, .x=0x82, .y=0xf9, .sp=0x2a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x326f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3270, .a=0x14, .x=0x82, .y=0xf9, .sp=0x2a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x326f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x326f, .value=0x60, .type=IO_READ},
        {.addr=0x3270, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x565d, .a=0xb2, .x=0x3a, .y=0x5e, .sp=0x84, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x565d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x565e, .a=0xb2, .x=0x3a, .y=0x5e, .sp=0x84, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x565d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x565d, .value=0x60, .type=IO_READ},
        {.addr=0x565e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x8fd3, .a=0xa8, .x=0x63, .y=0x19, .sp=0x3c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8fd3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8fd4, .a=0xa8, .x=0x63, .y=0x19, .sp=0x3c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8fd3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8fd3, .value=0x60, .type=IO_READ},
        {.addr=0x8fd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x1747, .a=0x0b, .x=0xbb, .y=0xa3, .sp=0xa7, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x1747, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1748, .a=0x0b, .x=0xbb, .y=0xa3, .sp=0xa7, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x1747, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1747, .value=0x60, .type=IO_READ},
        {.addr=0x1748, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x7cfb, .a=0x7d, .x=0x54, .y=0xed, .sp=0x8b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x7cfb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7cfc, .a=0x7d, .x=0x54, .y=0xed, .sp=0x8b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x7cfb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7cfb, .value=0x60, .type=IO_READ},
        {.addr=0x7cfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x5aa4, .a=0xd0, .x=0xfd, .y=0x2e, .sp=0xcc, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x5aa4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5aa5, .a=0xd0, .x=0xfd, .y=0x2e, .sp=0xcc, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x5aa4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5aa4, .value=0x60, .type=IO_READ},
        {.addr=0x5aa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x4eaf, .a=0xd3, .x=0x7c, .y=0x2f, .sp=0x07, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4eaf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4eb0, .a=0xd3, .x=0x7c, .y=0x2f, .sp=0x07, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x4eaf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4eaf, .value=0x60, .type=IO_READ},
        {.addr=0x4eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x6b9a, .a=0xe1, .x=0xa2, .y=0xd5, .sp=0x5f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6b9b, .a=0xe1, .x=0xa2, .y=0xd5, .sp=0x5f, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x6b9a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6b9a, .value=0x60, .type=IO_READ},
        {.addr=0x6b9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xe82b, .a=0x8b, .x=0x77, .y=0x8a, .sp=0xbe, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe82b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe82c, .a=0x8b, .x=0x77, .y=0x8a, .sp=0xbe, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xe82b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe82b, .value=0x60, .type=IO_READ},
        {.addr=0xe82c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x36a4, .a=0x86, .x=0xf2, .y=0x9e, .sp=0x04, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x36a4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x36a5, .a=0x86, .x=0xf2, .y=0x9e, .sp=0x04, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x36a4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x36a4, .value=0x60, .type=IO_READ},
        {.addr=0x36a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x36c1, .a=0x8a, .x=0x29, .y=0x0f, .sp=0xb7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x36c1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x36c2, .a=0x8a, .x=0x29, .y=0x0f, .sp=0xb7, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x36c1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x36c1, .value=0x60, .type=IO_READ},
        {.addr=0x36c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xad53, .a=0x5f, .x=0xd4, .y=0x02, .sp=0x70, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xad53, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xad54, .a=0x5f, .x=0xd4, .y=0x02, .sp=0x70, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xad53, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xad53, .value=0x60, .type=IO_READ},
        {.addr=0xad54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x8959, .a=0xa2, .x=0x5e, .y=0x5e, .sp=0x1e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x8959, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x895a, .a=0xa2, .x=0x5e, .y=0x5e, .sp=0x1e, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x8959, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8959, .value=0x60, .type=IO_READ},
        {.addr=0x895a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x588c, .a=0xc4, .x=0xd7, .y=0x96, .sp=0xcd, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x588c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x588d, .a=0xc4, .x=0xd7, .y=0x96, .sp=0xcd, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x588c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x588c, .value=0x60, .type=IO_READ},
        {.addr=0x588d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xd336, .a=0x5e, .x=0x46, .y=0xf1, .sp=0xae, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd336, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd337, .a=0x5e, .x=0x46, .y=0xf1, .sp=0xae, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd336, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd336, .value=0x60, .type=IO_READ},
        {.addr=0xd337, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x185f, .a=0x97, .x=0x3b, .y=0x37, .sp=0x2b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x185f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1860, .a=0x97, .x=0x3b, .y=0x37, .sp=0x2b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x185f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x185f, .value=0x60, .type=IO_READ},
        {.addr=0x1860, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x7043, .a=0xeb, .x=0xb7, .y=0x0f, .sp=0x33, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x7043, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7044, .a=0xeb, .x=0xb7, .y=0x0f, .sp=0x33, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x7043, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7043, .value=0x60, .type=IO_READ},
        {.addr=0x7044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x2958, .a=0xae, .x=0x81, .y=0x48, .sp=0x7a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x2958, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2959, .a=0xae, .x=0x81, .y=0x48, .sp=0x7a, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x2958, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2958, .value=0x60, .type=IO_READ},
        {.addr=0x2959, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x559c, .a=0x91, .x=0x6f, .y=0x68, .sp=0xe8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x559c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x559d, .a=0x91, .x=0x6f, .y=0x68, .sp=0xe8, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x559c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x559c, .value=0x60, .type=IO_READ},
        {.addr=0x559d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xd44e, .a=0x4e, .x=0x42, .y=0x89, .sp=0x74, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd44e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd44f, .a=0x4e, .x=0x42, .y=0x89, .sp=0x74, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd44e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd44e, .value=0x60, .type=IO_READ},
        {.addr=0xd44f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x2253, .a=0xe8, .x=0x3b, .y=0xb7, .sp=0x37, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2253, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2254, .a=0xe8, .x=0x3b, .y=0xb7, .sp=0x37, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2253, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2253, .value=0x60, .type=IO_READ},
        {.addr=0x2254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x32bf, .a=0x9c, .x=0xed, .y=0xaa, .sp=0x21, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x32bf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x32c0, .a=0x9c, .x=0xed, .y=0xaa, .sp=0x21, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x32bf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x32bf, .value=0x60, .type=IO_READ},
        {.addr=0x32c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x8ad9, .a=0xdf, .x=0xb1, .y=0x1f, .sp=0x3d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8ada, .a=0xdf, .x=0xb1, .y=0x1f, .sp=0x3d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8ad9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8ad9, .value=0x60, .type=IO_READ},
        {.addr=0x8ada, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x58a1, .a=0xc0, .x=0xb8, .y=0x3c, .sp=0xd1, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x58a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x58a2, .a=0xc0, .x=0xb8, .y=0x3c, .sp=0xd1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x58a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x58a1, .value=0x60, .type=IO_READ},
        {.addr=0x58a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x438f, .a=0xa3, .x=0x75, .y=0x06, .sp=0xdb, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x438f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4390, .a=0xa3, .x=0x75, .y=0x06, .sp=0xdb, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x438f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x438f, .value=0x60, .type=IO_READ},
        {.addr=0x4390, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x428d, .a=0xd2, .x=0x7f, .y=0x4d, .sp=0x7d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x428d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x428e, .a=0xd2, .x=0x7f, .y=0x4d, .sp=0x7d, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x428d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x428d, .value=0x60, .type=IO_READ},
        {.addr=0x428e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xe302, .a=0x4e, .x=0x09, .y=0xc4, .sp=0xf2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xe302, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe303, .a=0x4e, .x=0x09, .y=0xc4, .sp=0xf2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe302, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe302, .value=0x60, .type=IO_READ},
        {.addr=0xe303, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xccd9, .a=0xf4, .x=0xca, .y=0xa4, .sp=0xe3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xccd9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xccda, .a=0xf4, .x=0xca, .y=0xa4, .sp=0xe3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xccd9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xccd9, .value=0x60, .type=IO_READ},
        {.addr=0xccda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x7471, .a=0xff, .x=0x7b, .y=0xb5, .sp=0xbe, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x7471, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7472, .a=0xff, .x=0x7b, .y=0xb5, .sp=0xbe, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x7471, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7471, .value=0x60, .type=IO_READ},
        {.addr=0x7472, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xe7c8, .a=0x63, .x=0x49, .y=0xb7, .sp=0x23, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe7c8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe7c9, .a=0x63, .x=0x49, .y=0xb7, .sp=0x23, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xe7c8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe7c8, .value=0x60, .type=IO_READ},
        {.addr=0xe7c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xb788, .a=0x4c, .x=0x83, .y=0x82, .sp=0xd3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb788, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb789, .a=0x4c, .x=0x83, .y=0x82, .sp=0xd3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb788, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb788, .value=0x60, .type=IO_READ},
        {.addr=0xb789, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x6cc4, .a=0x14, .x=0x3e, .y=0xb8, .sp=0x56, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6cc4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6cc5, .a=0x14, .x=0x3e, .y=0xb8, .sp=0x56, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x6cc4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6cc4, .value=0x60, .type=IO_READ},
        {.addr=0x6cc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x96cd, .a=0xaf, .x=0xbe, .y=0xa0, .sp=0x9b, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x96cd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x96ce, .a=0xaf, .x=0xbe, .y=0xa0, .sp=0x9b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x96cd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x96cd, .value=0x60, .type=IO_READ},
        {.addr=0x96ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x6640, .a=0x1d, .x=0xe2, .y=0x1c, .sp=0x37, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6640, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6641, .a=0x1d, .x=0xe2, .y=0x1c, .sp=0x37, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6640, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6640, .value=0x60, .type=IO_READ},
        {.addr=0x6641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xe25f, .a=0x50, .x=0xd5, .y=0x9d, .sp=0x67, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe25f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe260, .a=0x50, .x=0xd5, .y=0x9d, .sp=0x67, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe25f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe25f, .value=0x60, .type=IO_READ},
        {.addr=0xe260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x7a99, .a=0xa5, .x=0x55, .y=0x2e, .sp=0xda, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7a99, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7a9a, .a=0xa5, .x=0x55, .y=0x2e, .sp=0xda, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7a99, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7a99, .value=0x60, .type=IO_READ},
        {.addr=0x7a9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xb289, .a=0x0e, .x=0x8e, .y=0x8d, .sp=0x30, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xb289, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb28a, .a=0x0e, .x=0x8e, .y=0x8d, .sp=0x30, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb289, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb289, .value=0x60, .type=IO_READ},
        {.addr=0xb28a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x27ed, .a=0x45, .x=0xaf, .y=0xe9, .sp=0xec, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x27ed, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x27ee, .a=0x45, .x=0xaf, .y=0xe9, .sp=0xec, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x27ed, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x27ed, .value=0x60, .type=IO_READ},
        {.addr=0x27ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x240c, .a=0x5a, .x=0xcd, .y=0xb7, .sp=0xfa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x240c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x240d, .a=0x5a, .x=0xcd, .y=0xb7, .sp=0xfa, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x240c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x240c, .value=0x60, .type=IO_READ},
        {.addr=0x240d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xd62e, .a=0x42, .x=0x1b, .y=0x46, .sp=0xfd, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd62e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd62f, .a=0x42, .x=0x1b, .y=0x46, .sp=0xfd, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd62e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd62e, .value=0x60, .type=IO_READ},
        {.addr=0xd62f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xac15, .a=0x46, .x=0xd9, .y=0x54, .sp=0x0f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xac15, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xac16, .a=0x46, .x=0xd9, .y=0x54, .sp=0x0f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xac15, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xac15, .value=0x60, .type=IO_READ},
        {.addr=0xac16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x78fa, .a=0xe7, .x=0xe5, .y=0xff, .sp=0xf1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x78fa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x78fb, .a=0xe7, .x=0xe5, .y=0xff, .sp=0xf1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x78fa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x78fa, .value=0x60, .type=IO_READ},
        {.addr=0x78fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x3b4c, .a=0x9e, .x=0x29, .y=0xd7, .sp=0x67, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b4c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3b4d, .a=0x9e, .x=0x29, .y=0xd7, .sp=0x67, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x3b4c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3b4c, .value=0x60, .type=IO_READ},
        {.addr=0x3b4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xfb64, .a=0xba, .x=0x84, .y=0xc1, .sp=0x15, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xfb64, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfb65, .a=0xba, .x=0x84, .y=0xc1, .sp=0x15, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xfb64, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfb64, .value=0x60, .type=IO_READ},
        {.addr=0xfb65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xdc0b, .a=0xd1, .x=0xe9, .y=0x55, .sp=0x23, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdc0c, .a=0xd1, .x=0xe9, .y=0x55, .sp=0x23, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xdc0b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdc0b, .value=0x60, .type=IO_READ},
        {.addr=0xdc0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x1303, .a=0x49, .x=0x8b, .y=0x3e, .sp=0x01, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x1303, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1304, .a=0x49, .x=0x8b, .y=0x3e, .sp=0x01, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x1303, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1303, .value=0x60, .type=IO_READ},
        {.addr=0x1304, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xe9f8, .a=0x2c, .x=0xba, .y=0x58, .sp=0x75, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe9f8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe9f9, .a=0x2c, .x=0xba, .y=0x58, .sp=0x75, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xe9f8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe9f8, .value=0x60, .type=IO_READ},
        {.addr=0xe9f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xd8a9, .a=0xc4, .x=0x5b, .y=0x4e, .sp=0xef, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd8aa, .a=0xc4, .x=0x5b, .y=0x4e, .sp=0xef, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xd8a9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd8a9, .value=0x60, .type=IO_READ},
        {.addr=0xd8aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x1955, .a=0xd0, .x=0xc5, .y=0xfa, .sp=0x94, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x1955, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1956, .a=0xd0, .x=0xc5, .y=0xfa, .sp=0x94, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1955, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1955, .value=0x60, .type=IO_READ},
        {.addr=0x1956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x4b7d, .a=0x62, .x=0xba, .y=0xcd, .sp=0x32, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4b7d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4b7e, .a=0x62, .x=0xba, .y=0xcd, .sp=0x32, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4b7d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4b7d, .value=0x60, .type=IO_READ},
        {.addr=0x4b7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xf140, .a=0x93, .x=0x19, .y=0xfd, .sp=0x9a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xf140, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf141, .a=0x93, .x=0x19, .y=0xfd, .sp=0x9a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf140, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf140, .value=0x60, .type=IO_READ},
        {.addr=0xf141, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xe5fa, .a=0x8b, .x=0x76, .y=0x4e, .sp=0x8b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe5fa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe5fb, .a=0x8b, .x=0x76, .y=0x4e, .sp=0x8b, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xe5fa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe5fa, .value=0x60, .type=IO_READ},
        {.addr=0xe5fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x33d5, .a=0x43, .x=0xad, .y=0xc2, .sp=0x2e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x33d5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x33d6, .a=0x43, .x=0xad, .y=0xc2, .sp=0x2e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x33d5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x33d5, .value=0x60, .type=IO_READ},
        {.addr=0x33d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xeefc, .a=0x0a, .x=0x94, .y=0x59, .sp=0x22, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xeefc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeefd, .a=0x0a, .x=0x94, .y=0x59, .sp=0x22, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xeefc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeefc, .value=0x60, .type=IO_READ},
        {.addr=0xeefd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x798e, .a=0xa0, .x=0x9b, .y=0x0a, .sp=0xf3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x798e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x798f, .a=0xa0, .x=0x9b, .y=0x0a, .sp=0xf3, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x798e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x798e, .value=0x60, .type=IO_READ},
        {.addr=0x798f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x2212, .a=0xb6, .x=0xb7, .y=0xef, .sp=0xa1, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2212, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2213, .a=0xb6, .x=0xb7, .y=0xef, .sp=0xa1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2212, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2212, .value=0x60, .type=IO_READ},
        {.addr=0x2213, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xae19, .a=0xed, .x=0xca, .y=0x9f, .sp=0x94, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xae19, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xae1a, .a=0xed, .x=0xca, .y=0x9f, .sp=0x94, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xae19, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xae19, .value=0x60, .type=IO_READ},
        {.addr=0xae1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x46c1, .a=0x4a, .x=0x0c, .y=0x42, .sp=0x14, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x46c1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x46c2, .a=0x4a, .x=0x0c, .y=0x42, .sp=0x14, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x46c1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x46c1, .value=0x60, .type=IO_READ},
        {.addr=0x46c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xf680, .a=0xda, .x=0x14, .y=0x49, .sp=0x97, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf680, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf681, .a=0xda, .x=0x14, .y=0x49, .sp=0x97, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xf680, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf680, .value=0x60, .type=IO_READ},
        {.addr=0xf681, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xd8ac, .a=0x1f, .x=0xa7, .y=0xc2, .sp=0xdd, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd8ad, .a=0x1f, .x=0xa7, .y=0xc2, .sp=0xdd, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd8ac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd8ac, .value=0x60, .type=IO_READ},
        {.addr=0xd8ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x06f7, .a=0xf8, .x=0xaa, .y=0x33, .sp=0xa9, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x06f7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x06f8, .a=0xf8, .x=0xaa, .y=0x33, .sp=0xa9, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x06f7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x06f7, .value=0x60, .type=IO_READ},
        {.addr=0x06f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8a30, .a=0xe4, .x=0x8f, .y=0x90, .sp=0x25, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8a30, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8a31, .a=0xe4, .x=0x8f, .y=0x90, .sp=0x25, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8a30, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8a30, .value=0x60, .type=IO_READ},
        {.addr=0x8a31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x4795, .a=0x5d, .x=0x71, .y=0x61, .sp=0x1d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4795, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4796, .a=0x5d, .x=0x71, .y=0x61, .sp=0x1d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4795, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4795, .value=0x60, .type=IO_READ},
        {.addr=0x4796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x19b8, .a=0xad, .x=0xb1, .y=0x7b, .sp=0x56, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x19b8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x19b9, .a=0xad, .x=0xb1, .y=0x7b, .sp=0x56, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x19b8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x19b8, .value=0x60, .type=IO_READ},
        {.addr=0x19b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x7da6, .a=0x28, .x=0x27, .y=0x5a, .sp=0x9a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7da6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7da7, .a=0x28, .x=0x27, .y=0x5a, .sp=0x9a, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x7da6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7da6, .value=0x60, .type=IO_READ},
        {.addr=0x7da7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x3d9b, .a=0x0e, .x=0xd7, .y=0xc9, .sp=0xfa, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d9b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3d9c, .a=0x0e, .x=0xd7, .y=0xc9, .sp=0xfa, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x3d9b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3d9b, .value=0x60, .type=IO_READ},
        {.addr=0x3d9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x19c2, .a=0x9e, .x=0x17, .y=0xaa, .sp=0x98, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x19c2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x19c3, .a=0x9e, .x=0x17, .y=0xaa, .sp=0x98, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x19c2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x19c2, .value=0x60, .type=IO_READ},
        {.addr=0x19c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x4f8a, .a=0xf6, .x=0xfe, .y=0x7c, .sp=0xd0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x4f8a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4f8b, .a=0xf6, .x=0xfe, .y=0x7c, .sp=0xd0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4f8a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4f8a, .value=0x60, .type=IO_READ},
        {.addr=0x4f8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xe274, .a=0xb7, .x=0xf8, .y=0x9b, .sp=0xcf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xe274, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe275, .a=0xb7, .x=0xf8, .y=0x9b, .sp=0xcf, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xe274, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe274, .value=0x60, .type=IO_READ},
        {.addr=0xe275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x3ba6, .a=0xf6, .x=0xd7, .y=0x68, .sp=0x52, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3ba6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3ba7, .a=0xf6, .x=0xd7, .y=0x68, .sp=0x52, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3ba6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3ba6, .value=0x60, .type=IO_READ},
        {.addr=0x3ba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xfdb9, .a=0xa0, .x=0x6f, .y=0xc5, .sp=0x04, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfdba, .a=0xa0, .x=0x6f, .y=0xc5, .sp=0x04, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xfdb9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfdb9, .value=0x60, .type=IO_READ},
        {.addr=0xfdba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x84a1, .a=0x2e, .x=0xb5, .y=0x7b, .sp=0xe6, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x84a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x84a2, .a=0x2e, .x=0xb5, .y=0x7b, .sp=0xe6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x84a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x84a1, .value=0x60, .type=IO_READ},
        {.addr=0x84a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9c3b, .a=0x5e, .x=0xe8, .y=0xb0, .sp=0xb1, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x9c3b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9c3c, .a=0x5e, .x=0xe8, .y=0xb0, .sp=0xb1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9c3b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9c3b, .value=0x60, .type=IO_READ},
        {.addr=0x9c3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x6b1f, .a=0xd4, .x=0xaf, .y=0x36, .sp=0x3c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x6b1f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6b20, .a=0xd4, .x=0xaf, .y=0x36, .sp=0x3c, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x6b1f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6b1f, .value=0x60, .type=IO_READ},
        {.addr=0x6b20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xc430, .a=0xf1, .x=0xb6, .y=0x6f, .sp=0x9c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc430, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc431, .a=0xf1, .x=0xb6, .y=0x6f, .sp=0x9c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc430, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc430, .value=0x60, .type=IO_READ},
        {.addr=0xc431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xc162, .a=0xf8, .x=0x55, .y=0xdc, .sp=0x08, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc162, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc163, .a=0xf8, .x=0x55, .y=0xdc, .sp=0x08, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc162, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc162, .value=0x60, .type=IO_READ},
        {.addr=0xc163, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xcbf8, .a=0x5f, .x=0x90, .y=0x5d, .sp=0x0a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcbf9, .a=0x5f, .x=0x90, .y=0x5d, .sp=0x0a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xcbf8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcbf8, .value=0x60, .type=IO_READ},
        {.addr=0xcbf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x67f9, .a=0xf8, .x=0x3d, .y=0xa8, .sp=0x50, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x67f9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x67fa, .a=0xf8, .x=0x3d, .y=0xa8, .sp=0x50, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x67f9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x67f9, .value=0x60, .type=IO_READ},
        {.addr=0x67fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x2660, .a=0x62, .x=0xb3, .y=0xe2, .sp=0x9b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x2660, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2661, .a=0x62, .x=0xb3, .y=0xe2, .sp=0x9b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x2660, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2660, .value=0x60, .type=IO_READ},
        {.addr=0x2661, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x2446, .a=0x4b, .x=0x8d, .y=0x1b, .sp=0x2e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x2446, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2447, .a=0x4b, .x=0x8d, .y=0x1b, .sp=0x2e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2446, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2446, .value=0x60, .type=IO_READ},
        {.addr=0x2447, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2246, .a=0xaf, .x=0xba, .y=0x96, .sp=0x79, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2246, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2247, .a=0xaf, .x=0xba, .y=0x96, .sp=0x79, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2246, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2246, .value=0x60, .type=IO_READ},
        {.addr=0x2247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x03bf, .a=0x12, .x=0x0f, .y=0x06, .sp=0xc0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x03bf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x03c0, .a=0x12, .x=0x0f, .y=0x06, .sp=0xc0, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x03bf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x03bf, .value=0x60, .type=IO_READ},
        {.addr=0x03c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xaa4f, .a=0x18, .x=0x2c, .y=0x45, .sp=0xc1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xaa4f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaa50, .a=0x18, .x=0x2c, .y=0x45, .sp=0xc1, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xaa4f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaa4f, .value=0x60, .type=IO_READ},
        {.addr=0xaa50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x6073, .a=0xc8, .x=0xdf, .y=0x98, .sp=0x8b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6073, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6074, .a=0xc8, .x=0xdf, .y=0x98, .sp=0x8b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6073, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6073, .value=0x60, .type=IO_READ},
        {.addr=0x6074, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xf409, .a=0x79, .x=0xc6, .y=0xc0, .sp=0x22, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf409, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf40a, .a=0x79, .x=0xc6, .y=0xc0, .sp=0x22, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xf409, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf409, .value=0x60, .type=IO_READ},
        {.addr=0xf40a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x4018, .a=0x9c, .x=0x5a, .y=0x86, .sp=0x17, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4018, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4019, .a=0x9c, .x=0x5a, .y=0x86, .sp=0x17, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4018, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4018, .value=0x60, .type=IO_READ},
        {.addr=0x4019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x9d9a, .a=0x5e, .x=0x6b, .y=0x2c, .sp=0x23, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9d9a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9d9b, .a=0x5e, .x=0x6b, .y=0x2c, .sp=0x23, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9d9a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9d9a, .value=0x60, .type=IO_READ},
        {.addr=0x9d9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x3a62, .a=0xf2, .x=0x8b, .y=0xf8, .sp=0x0f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x3a62, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3a63, .a=0xf2, .x=0x8b, .y=0xf8, .sp=0x0f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3a62, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3a62, .value=0x60, .type=IO_READ},
        {.addr=0x3a63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x6d5b, .a=0xd9, .x=0xd6, .y=0x4a, .sp=0x39, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6d5c, .a=0xd9, .x=0xd6, .y=0x4a, .sp=0x39, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x6d5b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6d5b, .value=0x60, .type=IO_READ},
        {.addr=0x6d5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x9bea, .a=0xdd, .x=0xb0, .y=0x13, .sp=0x12, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9bea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9beb, .a=0xdd, .x=0xb0, .y=0x13, .sp=0x12, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9bea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9bea, .value=0x60, .type=IO_READ},
        {.addr=0x9beb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x25ff, .a=0x6f, .x=0x71, .y=0x76, .sp=0x8b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x25ff, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2600, .a=0x6f, .x=0x71, .y=0x76, .sp=0x8b, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x25ff, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x25ff, .value=0x60, .type=IO_READ},
        {.addr=0x2600, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xab16, .a=0x78, .x=0x06, .y=0x34, .sp=0xae, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xab16, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xab17, .a=0x78, .x=0x06, .y=0x34, .sp=0xae, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xab16, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xab16, .value=0x60, .type=IO_READ},
        {.addr=0xab17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x9df7, .a=0xc9, .x=0xdc, .y=0xaa, .sp=0x9c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9df7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9df8, .a=0xc9, .x=0xdc, .y=0xaa, .sp=0x9c, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x9df7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9df7, .value=0x60, .type=IO_READ},
        {.addr=0x9df8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x105a, .a=0xed, .x=0x00, .y=0x81, .sp=0x60, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x105a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x105b, .a=0xed, .x=0x00, .y=0x81, .sp=0x60, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x105a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x105a, .value=0x60, .type=IO_READ},
        {.addr=0x105b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0100) {
    const struct CPU_State initial_cpu = {.pc=0xaf5c, .a=0xbc, .x=0x6f, .y=0xdd, .sp=0x37, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xaf5c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaf5d, .a=0xbc, .x=0x6f, .y=0xdd, .sp=0x37, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xaf5c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaf5c, .value=0x60, .type=IO_READ},
        {.addr=0xaf5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0101) {
    const struct CPU_State initial_cpu = {.pc=0x9273, .a=0x14, .x=0xbb, .y=0x7a, .sp=0x07, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9273, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9274, .a=0x14, .x=0xbb, .y=0x7a, .sp=0x07, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x9273, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9273, .value=0x60, .type=IO_READ},
        {.addr=0x9274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0102) {
    const struct CPU_State initial_cpu = {.pc=0x849a, .a=0x57, .x=0xfd, .y=0xac, .sp=0xc2, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x849a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x849b, .a=0x57, .x=0xfd, .y=0xac, .sp=0xc2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x849a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x849a, .value=0x60, .type=IO_READ},
        {.addr=0x849b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0103) {
    const struct CPU_State initial_cpu = {.pc=0xd462, .a=0x13, .x=0xa2, .y=0x50, .sp=0xb8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd462, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd463, .a=0x13, .x=0xa2, .y=0x50, .sp=0xb8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd462, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd462, .value=0x60, .type=IO_READ},
        {.addr=0xd463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0902, .a=0x9b, .x=0xb2, .y=0x6c, .sp=0x5e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0902, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0903, .a=0x9b, .x=0xb2, .y=0x6c, .sp=0x5e, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0902, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0902, .value=0x60, .type=IO_READ},
        {.addr=0x0903, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0105) {
    const struct CPU_State initial_cpu = {.pc=0xa3de, .a=0xd1, .x=0x08, .y=0xde, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa3de, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa3df, .a=0xd1, .x=0x08, .y=0xde, .sp=0x90, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa3de, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa3de, .value=0x60, .type=IO_READ},
        {.addr=0xa3df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0106) {
    const struct CPU_State initial_cpu = {.pc=0x115e, .a=0x86, .x=0x19, .y=0x98, .sp=0xa3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x115e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x115f, .a=0x86, .x=0x19, .y=0x98, .sp=0xa3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x115e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x115e, .value=0x60, .type=IO_READ},
        {.addr=0x115f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0107) {
    const struct CPU_State initial_cpu = {.pc=0xffe0, .a=0x01, .x=0xc9, .y=0x61, .sp=0xfa, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xffe0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xffe1, .a=0x01, .x=0xc9, .y=0x61, .sp=0xfa, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xffe0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xffe0, .value=0x60, .type=IO_READ},
        {.addr=0xffe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0108) {
    const struct CPU_State initial_cpu = {.pc=0x140f, .a=0x41, .x=0x32, .y=0x54, .sp=0x2d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x140f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1410, .a=0x41, .x=0x32, .y=0x54, .sp=0x2d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x140f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x140f, .value=0x60, .type=IO_READ},
        {.addr=0x1410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0109) {
    const struct CPU_State initial_cpu = {.pc=0xf31d, .a=0xd3, .x=0xc0, .y=0x88, .sp=0x6f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xf31d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf31e, .a=0xd3, .x=0xc0, .y=0x88, .sp=0x6f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf31d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf31d, .value=0x60, .type=IO_READ},
        {.addr=0xf31e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_010A) {
    const struct CPU_State initial_cpu = {.pc=0xb4f0, .a=0x45, .x=0x1e, .y=0x87, .sp=0x50, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb4f1, .a=0x45, .x=0x1e, .y=0x87, .sp=0x50, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb4f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb4f0, .value=0x60, .type=IO_READ},
        {.addr=0xb4f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_010B) {
    const struct CPU_State initial_cpu = {.pc=0xa444, .a=0x8b, .x=0x66, .y=0xd9, .sp=0x57, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa444, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa445, .a=0x8b, .x=0x66, .y=0xd9, .sp=0x57, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xa444, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa444, .value=0x60, .type=IO_READ},
        {.addr=0xa445, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_010C) {
    const struct CPU_State initial_cpu = {.pc=0x4af7, .a=0x7d, .x=0xa9, .y=0xf6, .sp=0x63, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4af7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4af8, .a=0x7d, .x=0xa9, .y=0xf6, .sp=0x63, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4af7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4af7, .value=0x60, .type=IO_READ},
        {.addr=0x4af8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_010D) {
    const struct CPU_State initial_cpu = {.pc=0xbe95, .a=0xb6, .x=0xa2, .y=0x57, .sp=0x8f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xbe95, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbe96, .a=0xb6, .x=0xa2, .y=0x57, .sp=0x8f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xbe95, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbe95, .value=0x60, .type=IO_READ},
        {.addr=0xbe96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4aad, .a=0x0e, .x=0x8c, .y=0xb1, .sp=0x51, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4aad, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4aae, .a=0x0e, .x=0x8c, .y=0xb1, .sp=0x51, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4aad, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4aad, .value=0x60, .type=IO_READ},
        {.addr=0x4aae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_010F) {
    const struct CPU_State initial_cpu = {.pc=0x08f7, .a=0x3e, .x=0xbe, .y=0x59, .sp=0xd7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x08f7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x08f8, .a=0x3e, .x=0xbe, .y=0x59, .sp=0xd7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x08f7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x08f7, .value=0x60, .type=IO_READ},
        {.addr=0x08f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa69a, .a=0xf0, .x=0x8a, .y=0x28, .sp=0x89, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa69a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa69b, .a=0xf0, .x=0x8a, .y=0x28, .sp=0x89, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xa69a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa69a, .value=0x60, .type=IO_READ},
        {.addr=0xa69b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0111) {
    const struct CPU_State initial_cpu = {.pc=0xefc7, .a=0x42, .x=0x43, .y=0x0f, .sp=0xc8, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xefc7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xefc8, .a=0x42, .x=0x43, .y=0x0f, .sp=0xc8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xefc7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xefc7, .value=0x60, .type=IO_READ},
        {.addr=0xefc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0112) {
    const struct CPU_State initial_cpu = {.pc=0xf85e, .a=0x3a, .x=0xe7, .y=0xf6, .sp=0xbd, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf85e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf85f, .a=0x3a, .x=0xe7, .y=0xf6, .sp=0xbd, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xf85e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf85e, .value=0x60, .type=IO_READ},
        {.addr=0xf85f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0113) {
    const struct CPU_State initial_cpu = {.pc=0x222d, .a=0x23, .x=0xd5, .y=0xf2, .sp=0x4a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x222d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x222e, .a=0x23, .x=0xd5, .y=0xf2, .sp=0x4a, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x222d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x222d, .value=0x60, .type=IO_READ},
        {.addr=0x222e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0114) {
    const struct CPU_State initial_cpu = {.pc=0x2401, .a=0x3c, .x=0x2a, .y=0xa5, .sp=0x5a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2401, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2402, .a=0x3c, .x=0x2a, .y=0xa5, .sp=0x5a, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x2401, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2401, .value=0x60, .type=IO_READ},
        {.addr=0x2402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0115) {
    const struct CPU_State initial_cpu = {.pc=0x13c0, .a=0x1f, .x=0xe2, .y=0x93, .sp=0x93, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x13c0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x13c1, .a=0x1f, .x=0xe2, .y=0x93, .sp=0x93, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x13c0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x13c0, .value=0x60, .type=IO_READ},
        {.addr=0x13c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0116) {
    const struct CPU_State initial_cpu = {.pc=0xc3df, .a=0x51, .x=0xc4, .y=0xe9, .sp=0x6d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc3df, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3e0, .a=0x51, .x=0xc4, .y=0xe9, .sp=0x6d, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc3df, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3df, .value=0x60, .type=IO_READ},
        {.addr=0xc3e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0117) {
    const struct CPU_State initial_cpu = {.pc=0xda3b, .a=0x88, .x=0xc7, .y=0x13, .sp=0xdf, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xda3b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xda3c, .a=0x88, .x=0xc7, .y=0x13, .sp=0xdf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xda3b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xda3b, .value=0x60, .type=IO_READ},
        {.addr=0xda3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0118) {
    const struct CPU_State initial_cpu = {.pc=0x1e47, .a=0x70, .x=0xaa, .y=0x84, .sp=0x32, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1e47, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1e48, .a=0x70, .x=0xaa, .y=0x84, .sp=0x32, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x1e47, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1e47, .value=0x60, .type=IO_READ},
        {.addr=0x1e48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0119) {
    const struct CPU_State initial_cpu = {.pc=0x303d, .a=0x87, .x=0xc5, .y=0xb0, .sp=0x0d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x303d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x303e, .a=0x87, .x=0xc5, .y=0xb0, .sp=0x0d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x303d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x303d, .value=0x60, .type=IO_READ},
        {.addr=0x303e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_011A) {
    const struct CPU_State initial_cpu = {.pc=0xc70a, .a=0x69, .x=0xc9, .y=0x43, .sp=0x34, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc70a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc70b, .a=0x69, .x=0xc9, .y=0x43, .sp=0x34, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xc70a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc70a, .value=0x60, .type=IO_READ},
        {.addr=0xc70b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_011B) {
    const struct CPU_State initial_cpu = {.pc=0xc3e1, .a=0x4d, .x=0xc5, .y=0x80, .sp=0x3c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3e2, .a=0x4d, .x=0xc5, .y=0x80, .sp=0x3c, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xc3e1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3e1, .value=0x60, .type=IO_READ},
        {.addr=0xc3e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_011C) {
    const struct CPU_State initial_cpu = {.pc=0x6e55, .a=0x9e, .x=0x0b, .y=0x69, .sp=0x7b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6e55, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6e56, .a=0x9e, .x=0x0b, .y=0x69, .sp=0x7b, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x6e55, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6e55, .value=0x60, .type=IO_READ},
        {.addr=0x6e56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_011D) {
    const struct CPU_State initial_cpu = {.pc=0xb039, .a=0xa7, .x=0xff, .y=0xd6, .sp=0x2f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb039, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb03a, .a=0xa7, .x=0xff, .y=0xd6, .sp=0x2f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb039, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb039, .value=0x60, .type=IO_READ},
        {.addr=0xb03a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_011E) {
    const struct CPU_State initial_cpu = {.pc=0x27f7, .a=0x7a, .x=0x9c, .y=0xbd, .sp=0xef, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x27f7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x27f8, .a=0x7a, .x=0x9c, .y=0xbd, .sp=0xef, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x27f7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x27f7, .value=0x60, .type=IO_READ},
        {.addr=0x27f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_011F) {
    const struct CPU_State initial_cpu = {.pc=0x2a96, .a=0x71, .x=0x69, .y=0x9a, .sp=0xdc, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2a96, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2a97, .a=0x71, .x=0x69, .y=0x9a, .sp=0xdc, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x2a96, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2a96, .value=0x60, .type=IO_READ},
        {.addr=0x2a97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0120) {
    const struct CPU_State initial_cpu = {.pc=0x33d0, .a=0xbe, .x=0xa6, .y=0x40, .sp=0x2f, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x33d0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x33d1, .a=0xbe, .x=0xa6, .y=0x40, .sp=0x2f, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x33d0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x33d0, .value=0x60, .type=IO_READ},
        {.addr=0x33d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0121) {
    const struct CPU_State initial_cpu = {.pc=0x8e5c, .a=0xfd, .x=0x65, .y=0x3b, .sp=0xa0, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x8e5c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8e5d, .a=0xfd, .x=0x65, .y=0x3b, .sp=0xa0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8e5c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8e5c, .value=0x60, .type=IO_READ},
        {.addr=0x8e5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0122) {
    const struct CPU_State initial_cpu = {.pc=0x2706, .a=0x98, .x=0x0a, .y=0xea, .sp=0x98, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2706, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2707, .a=0x98, .x=0x0a, .y=0xea, .sp=0x98, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2706, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2706, .value=0x60, .type=IO_READ},
        {.addr=0x2707, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0123) {
    const struct CPU_State initial_cpu = {.pc=0xbe6d, .a=0x23, .x=0x3b, .y=0xd7, .sp=0x46, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbe6e, .a=0x23, .x=0x3b, .y=0xd7, .sp=0x46, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xbe6d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbe6d, .value=0x60, .type=IO_READ},
        {.addr=0xbe6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0124) {
    const struct CPU_State initial_cpu = {.pc=0x0d13, .a=0xe6, .x=0xb2, .y=0x8d, .sp=0x29, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0d13, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0d14, .a=0xe6, .x=0xb2, .y=0x8d, .sp=0x29, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0d13, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0d13, .value=0x60, .type=IO_READ},
        {.addr=0x0d14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0125) {
    const struct CPU_State initial_cpu = {.pc=0xb3eb, .a=0x54, .x=0x43, .y=0x95, .sp=0x8e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xb3eb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb3ec, .a=0x54, .x=0x43, .y=0x95, .sp=0x8e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb3eb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb3eb, .value=0x60, .type=IO_READ},
        {.addr=0xb3ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0126) {
    const struct CPU_State initial_cpu = {.pc=0x7a9d, .a=0x96, .x=0x37, .y=0xa2, .sp=0xe1, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7a9d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7a9e, .a=0x96, .x=0x37, .y=0xa2, .sp=0xe1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7a9d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7a9d, .value=0x60, .type=IO_READ},
        {.addr=0x7a9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0127) {
    const struct CPU_State initial_cpu = {.pc=0xa583, .a=0x4f, .x=0xd8, .y=0x82, .sp=0x59, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa583, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa584, .a=0x4f, .x=0xd8, .y=0x82, .sp=0x59, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa583, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa583, .value=0x60, .type=IO_READ},
        {.addr=0xa584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3805, .a=0x05, .x=0xb4, .y=0xa5, .sp=0x95, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3805, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3806, .a=0x05, .x=0xb4, .y=0xa5, .sp=0x95, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x3805, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3805, .value=0x60, .type=IO_READ},
        {.addr=0x3806, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0129) {
    const struct CPU_State initial_cpu = {.pc=0x7478, .a=0xa2, .x=0x2e, .y=0x39, .sp=0x27, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7478, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7479, .a=0xa2, .x=0x2e, .y=0x39, .sp=0x27, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x7478, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7478, .value=0x60, .type=IO_READ},
        {.addr=0x7479, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_012A) {
    const struct CPU_State initial_cpu = {.pc=0xb4f6, .a=0xca, .x=0x5f, .y=0x21, .sp=0x5b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb4f7, .a=0xca, .x=0x5f, .y=0x21, .sp=0x5b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb4f6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb4f6, .value=0x60, .type=IO_READ},
        {.addr=0xb4f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_012B) {
    const struct CPU_State initial_cpu = {.pc=0x4b4b, .a=0x70, .x=0x48, .y=0x2e, .sp=0xa1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4b4c, .a=0x70, .x=0x48, .y=0x2e, .sp=0xa1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4b4b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4b4b, .value=0x60, .type=IO_READ},
        {.addr=0x4b4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_012C) {
    const struct CPU_State initial_cpu = {.pc=0xc09c, .a=0xe6, .x=0xae, .y=0x35, .sp=0x86, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xc09c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc09d, .a=0xe6, .x=0xae, .y=0x35, .sp=0x86, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xc09c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc09c, .value=0x60, .type=IO_READ},
        {.addr=0xc09d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_012D) {
    const struct CPU_State initial_cpu = {.pc=0x7220, .a=0x9a, .x=0xbe, .y=0x31, .sp=0xd5, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x7220, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7221, .a=0x9a, .x=0xbe, .y=0x31, .sp=0xd5, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x7220, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7220, .value=0x60, .type=IO_READ},
        {.addr=0x7221, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_012E) {
    const struct CPU_State initial_cpu = {.pc=0xf98c, .a=0xae, .x=0x6d, .y=0xbc, .sp=0x78, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf98c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf98d, .a=0xae, .x=0x6d, .y=0xbc, .sp=0x78, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xf98c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf98c, .value=0x60, .type=IO_READ},
        {.addr=0xf98d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_012F) {
    const struct CPU_State initial_cpu = {.pc=0x7b2b, .a=0xf5, .x=0x28, .y=0xde, .sp=0xb3, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7b2b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7b2c, .a=0xf5, .x=0x28, .y=0xde, .sp=0xb3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7b2b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7b2b, .value=0x60, .type=IO_READ},
        {.addr=0x7b2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0130) {
    const struct CPU_State initial_cpu = {.pc=0x2352, .a=0x06, .x=0x75, .y=0x31, .sp=0x01, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x2352, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2353, .a=0x06, .x=0x75, .y=0x31, .sp=0x01, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2352, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2352, .value=0x60, .type=IO_READ},
        {.addr=0x2353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0131) {
    const struct CPU_State initial_cpu = {.pc=0x8e2d, .a=0x39, .x=0x40, .y=0x0f, .sp=0x14, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8e2e, .a=0x39, .x=0x40, .y=0x0f, .sp=0x14, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x8e2d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8e2d, .value=0x60, .type=IO_READ},
        {.addr=0x8e2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0132) {
    const struct CPU_State initial_cpu = {.pc=0x18db, .a=0x3c, .x=0x19, .y=0xa9, .sp=0x73, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x18db, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x18dc, .a=0x3c, .x=0x19, .y=0xa9, .sp=0x73, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x18db, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x18db, .value=0x60, .type=IO_READ},
        {.addr=0x18dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0133) {
    const struct CPU_State initial_cpu = {.pc=0x3dfe, .a=0x45, .x=0x48, .y=0x77, .sp=0x15, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3dfe, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3dff, .a=0x45, .x=0x48, .y=0x77, .sp=0x15, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3dfe, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3dfe, .value=0x60, .type=IO_READ},
        {.addr=0x3dff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0134) {
    const struct CPU_State initial_cpu = {.pc=0x145d, .a=0xa3, .x=0x4c, .y=0x9d, .sp=0x90, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x145d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x145e, .a=0xa3, .x=0x4c, .y=0x9d, .sp=0x90, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x145d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x145d, .value=0x60, .type=IO_READ},
        {.addr=0x145e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0135) {
    const struct CPU_State initial_cpu = {.pc=0xafac, .a=0x54, .x=0x43, .y=0xd2, .sp=0x1f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xafac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xafad, .a=0x54, .x=0x43, .y=0xd2, .sp=0x1f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xafac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xafac, .value=0x60, .type=IO_READ},
        {.addr=0xafad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0136) {
    const struct CPU_State initial_cpu = {.pc=0xca92, .a=0x2f, .x=0x0f, .y=0x32, .sp=0x81, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xca92, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xca93, .a=0x2f, .x=0x0f, .y=0x32, .sp=0x81, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xca92, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xca92, .value=0x60, .type=IO_READ},
        {.addr=0xca93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0137) {
    const struct CPU_State initial_cpu = {.pc=0x2bc8, .a=0xf7, .x=0x74, .y=0xa3, .sp=0xb2, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2bc8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2bc9, .a=0xf7, .x=0x74, .y=0xa3, .sp=0xb2, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x2bc8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2bc8, .value=0x60, .type=IO_READ},
        {.addr=0x2bc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0138) {
    const struct CPU_State initial_cpu = {.pc=0x67f5, .a=0xb8, .x=0xfb, .y=0xda, .sp=0xfc, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x67f5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x67f6, .a=0xb8, .x=0xfb, .y=0xda, .sp=0xfc, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x67f5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x67f5, .value=0x60, .type=IO_READ},
        {.addr=0x67f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0139) {
    const struct CPU_State initial_cpu = {.pc=0x524d, .a=0xc7, .x=0xed, .y=0x72, .sp=0xd7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x524d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x524e, .a=0xc7, .x=0xed, .y=0x72, .sp=0xd7, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x524d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x524d, .value=0x60, .type=IO_READ},
        {.addr=0x524e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_013A) {
    const struct CPU_State initial_cpu = {.pc=0x4066, .a=0xb6, .x=0xf5, .y=0xd6, .sp=0xb5, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4066, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4067, .a=0xb6, .x=0xf5, .y=0xd6, .sp=0xb5, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x4066, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4066, .value=0x60, .type=IO_READ},
        {.addr=0x4067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_013B) {
    const struct CPU_State initial_cpu = {.pc=0xa44b, .a=0x0b, .x=0x94, .y=0x20, .sp=0xc0, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa44b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa44c, .a=0x0b, .x=0x94, .y=0x20, .sp=0xc0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa44b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa44b, .value=0x60, .type=IO_READ},
        {.addr=0xa44c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_013C) {
    const struct CPU_State initial_cpu = {.pc=0xf4e7, .a=0xd7, .x=0x80, .y=0xaa, .sp=0xd5, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf4e8, .a=0xd7, .x=0x80, .y=0xaa, .sp=0xd5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf4e7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf4e7, .value=0x60, .type=IO_READ},
        {.addr=0xf4e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_013D) {
    const struct CPU_State initial_cpu = {.pc=0x9908, .a=0x09, .x=0xc3, .y=0x6a, .sp=0x04, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9908, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9909, .a=0x09, .x=0xc3, .y=0x6a, .sp=0x04, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x9908, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9908, .value=0x60, .type=IO_READ},
        {.addr=0x9909, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_013E) {
    const struct CPU_State initial_cpu = {.pc=0x1d6e, .a=0xa1, .x=0x4b, .y=0xd1, .sp=0x2a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x1d6e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1d6f, .a=0xa1, .x=0x4b, .y=0xd1, .sp=0x2a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1d6e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1d6e, .value=0x60, .type=IO_READ},
        {.addr=0x1d6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_013F) {
    const struct CPU_State initial_cpu = {.pc=0xf3cc, .a=0xb4, .x=0xab, .y=0x58, .sp=0xd2, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xf3cc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf3cd, .a=0xb4, .x=0xab, .y=0x58, .sp=0xd2, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xf3cc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf3cc, .value=0x60, .type=IO_READ},
        {.addr=0xf3cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0140) {
    const struct CPU_State initial_cpu = {.pc=0x8b0f, .a=0x8b, .x=0x67, .y=0xc2, .sp=0x09, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b0f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8b10, .a=0x8b, .x=0x67, .y=0xc2, .sp=0x09, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8b0f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8b0f, .value=0x60, .type=IO_READ},
        {.addr=0x8b10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe5bf, .a=0xd1, .x=0x3c, .y=0x5a, .sp=0xa3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe5bf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe5c0, .a=0xd1, .x=0x3c, .y=0x5a, .sp=0xa3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe5bf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe5bf, .value=0x60, .type=IO_READ},
        {.addr=0xe5c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0142) {
    const struct CPU_State initial_cpu = {.pc=0xca8a, .a=0xe6, .x=0xfa, .y=0x37, .sp=0xae, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xca8a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xca8b, .a=0xe6, .x=0xfa, .y=0x37, .sp=0xae, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xca8a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xca8a, .value=0x60, .type=IO_READ},
        {.addr=0xca8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0143) {
    const struct CPU_State initial_cpu = {.pc=0xbf39, .a=0xab, .x=0x7e, .y=0x0a, .sp=0x70, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xbf39, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbf3a, .a=0xab, .x=0x7e, .y=0x0a, .sp=0x70, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xbf39, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbf39, .value=0x60, .type=IO_READ},
        {.addr=0xbf3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0144) {
    const struct CPU_State initial_cpu = {.pc=0x757a, .a=0x26, .x=0x5d, .y=0xbb, .sp=0xdf, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x757a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x757b, .a=0x26, .x=0x5d, .y=0xbb, .sp=0xdf, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x757a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x757a, .value=0x60, .type=IO_READ},
        {.addr=0x757b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0145) {
    const struct CPU_State initial_cpu = {.pc=0x9046, .a=0x75, .x=0x21, .y=0x55, .sp=0x80, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x9046, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9047, .a=0x75, .x=0x21, .y=0x55, .sp=0x80, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9046, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9046, .value=0x60, .type=IO_READ},
        {.addr=0x9047, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0146) {
    const struct CPU_State initial_cpu = {.pc=0x9959, .a=0x2e, .x=0x02, .y=0x54, .sp=0x34, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9959, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x995a, .a=0x2e, .x=0x02, .y=0x54, .sp=0x34, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x9959, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9959, .value=0x60, .type=IO_READ},
        {.addr=0x995a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0147) {
    const struct CPU_State initial_cpu = {.pc=0xe65f, .a=0x30, .x=0xca, .y=0x8f, .sp=0x16, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe65f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe660, .a=0x30, .x=0xca, .y=0x8f, .sp=0x16, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe65f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe65f, .value=0x60, .type=IO_READ},
        {.addr=0xe660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0148) {
    const struct CPU_State initial_cpu = {.pc=0x7cce, .a=0x22, .x=0x38, .y=0xe8, .sp=0xa8, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x7cce, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7ccf, .a=0x22, .x=0x38, .y=0xe8, .sp=0xa8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7cce, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7cce, .value=0x60, .type=IO_READ},
        {.addr=0x7ccf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0149) {
    const struct CPU_State initial_cpu = {.pc=0x76f0, .a=0xed, .x=0xa5, .y=0x55, .sp=0xea, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x76f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x76f1, .a=0xed, .x=0xa5, .y=0x55, .sp=0xea, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x76f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x76f0, .value=0x60, .type=IO_READ},
        {.addr=0x76f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_014A) {
    const struct CPU_State initial_cpu = {.pc=0x4ff7, .a=0x9b, .x=0x76, .y=0xfe, .sp=0x42, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x4ff7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4ff8, .a=0x9b, .x=0x76, .y=0xfe, .sp=0x42, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x4ff7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4ff7, .value=0x60, .type=IO_READ},
        {.addr=0x4ff8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_014B) {
    const struct CPU_State initial_cpu = {.pc=0x4578, .a=0xac, .x=0x13, .y=0xdd, .sp=0x4c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4578, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4579, .a=0xac, .x=0x13, .y=0xdd, .sp=0x4c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4578, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4578, .value=0x60, .type=IO_READ},
        {.addr=0x4579, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_014C) {
    const struct CPU_State initial_cpu = {.pc=0x22fb, .a=0x3a, .x=0x19, .y=0x99, .sp=0x81, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x22fb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x22fc, .a=0x3a, .x=0x19, .y=0x99, .sp=0x81, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x22fb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x22fb, .value=0x60, .type=IO_READ},
        {.addr=0x22fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_014D) {
    const struct CPU_State initial_cpu = {.pc=0x094f, .a=0x9b, .x=0xae, .y=0x73, .sp=0xc4, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x094f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0950, .a=0x9b, .x=0xae, .y=0x73, .sp=0xc4, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x094f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x094f, .value=0x60, .type=IO_READ},
        {.addr=0x0950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_014E) {
    const struct CPU_State initial_cpu = {.pc=0xcd14, .a=0x5b, .x=0xd7, .y=0xdd, .sp=0xf0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xcd14, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcd15, .a=0x5b, .x=0xd7, .y=0xdd, .sp=0xf0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xcd14, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcd14, .value=0x60, .type=IO_READ},
        {.addr=0xcd15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_014F) {
    const struct CPU_State initial_cpu = {.pc=0x0ea3, .a=0x82, .x=0xfe, .y=0x4b, .sp=0xdd, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ea3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0ea4, .a=0x82, .x=0xfe, .y=0x4b, .sp=0xdd, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0ea3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0ea3, .value=0x60, .type=IO_READ},
        {.addr=0x0ea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0150) {
    const struct CPU_State initial_cpu = {.pc=0x0a2e, .a=0xe5, .x=0x8a, .y=0x46, .sp=0x4a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0a2e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0a2f, .a=0xe5, .x=0x8a, .y=0x46, .sp=0x4a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0a2e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0a2e, .value=0x60, .type=IO_READ},
        {.addr=0x0a2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0151) {
    const struct CPU_State initial_cpu = {.pc=0x7bb4, .a=0x51, .x=0x5e, .y=0x3b, .sp=0x20, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7bb5, .a=0x51, .x=0x5e, .y=0x3b, .sp=0x20, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7bb4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7bb4, .value=0x60, .type=IO_READ},
        {.addr=0x7bb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0152) {
    const struct CPU_State initial_cpu = {.pc=0x6975, .a=0x70, .x=0x11, .y=0xd1, .sp=0x7a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6975, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6976, .a=0x70, .x=0x11, .y=0xd1, .sp=0x7a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6975, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6975, .value=0x60, .type=IO_READ},
        {.addr=0x6976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0153) {
    const struct CPU_State initial_cpu = {.pc=0xf4de, .a=0x1e, .x=0xc1, .y=0x24, .sp=0x2b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf4de, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf4df, .a=0x1e, .x=0xc1, .y=0x24, .sp=0x2b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf4de, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf4de, .value=0x60, .type=IO_READ},
        {.addr=0xf4df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0154) {
    const struct CPU_State initial_cpu = {.pc=0x1eb9, .a=0x21, .x=0x24, .y=0x0e, .sp=0xc2, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1eba, .a=0x21, .x=0x24, .y=0x0e, .sp=0xc2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1eb9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1eb9, .value=0x60, .type=IO_READ},
        {.addr=0x1eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0155) {
    const struct CPU_State initial_cpu = {.pc=0x4203, .a=0xe7, .x=0x53, .y=0x5a, .sp=0xda, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4203, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4204, .a=0xe7, .x=0x53, .y=0x5a, .sp=0xda, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4203, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4203, .value=0x60, .type=IO_READ},
        {.addr=0x4204, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0156) {
    const struct CPU_State initial_cpu = {.pc=0xa729, .a=0x8a, .x=0x7e, .y=0x1c, .sp=0x38, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa729, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa72a, .a=0x8a, .x=0x7e, .y=0x1c, .sp=0x38, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xa729, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa729, .value=0x60, .type=IO_READ},
        {.addr=0xa72a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0157) {
    const struct CPU_State initial_cpu = {.pc=0x7ae1, .a=0xf3, .x=0xf6, .y=0x05, .sp=0xe6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7ae2, .a=0xf3, .x=0xf6, .y=0x05, .sp=0xe6, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x7ae1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7ae1, .value=0x60, .type=IO_READ},
        {.addr=0x7ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0158) {
    const struct CPU_State initial_cpu = {.pc=0x8643, .a=0x3c, .x=0xc5, .y=0x2c, .sp=0x8b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8643, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8644, .a=0x3c, .x=0xc5, .y=0x2c, .sp=0x8b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8643, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8643, .value=0x60, .type=IO_READ},
        {.addr=0x8644, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0159) {
    const struct CPU_State initial_cpu = {.pc=0x9b4f, .a=0x34, .x=0xe6, .y=0x43, .sp=0xc2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9b4f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9b50, .a=0x34, .x=0xe6, .y=0x43, .sp=0xc2, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x9b4f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9b4f, .value=0x60, .type=IO_READ},
        {.addr=0x9b50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_015A) {
    const struct CPU_State initial_cpu = {.pc=0x2078, .a=0xd6, .x=0xcb, .y=0x03, .sp=0x34, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2078, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2079, .a=0xd6, .x=0xcb, .y=0x03, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2078, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2078, .value=0x60, .type=IO_READ},
        {.addr=0x2079, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_015B) {
    const struct CPU_State initial_cpu = {.pc=0x27c9, .a=0x55, .x=0x45, .y=0x1d, .sp=0xa9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x27c9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x27ca, .a=0x55, .x=0x45, .y=0x1d, .sp=0xa9, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x27c9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x27c9, .value=0x60, .type=IO_READ},
        {.addr=0x27ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_015C) {
    const struct CPU_State initial_cpu = {.pc=0xff9e, .a=0xa2, .x=0x21, .y=0x58, .sp=0x13, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xff9e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xff9f, .a=0xa2, .x=0x21, .y=0x58, .sp=0x13, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xff9e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xff9e, .value=0x60, .type=IO_READ},
        {.addr=0xff9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_015D) {
    const struct CPU_State initial_cpu = {.pc=0xfd41, .a=0xae, .x=0x4e, .y=0xca, .sp=0x56, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xfd41, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfd42, .a=0xae, .x=0x4e, .y=0xca, .sp=0x56, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xfd41, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfd41, .value=0x60, .type=IO_READ},
        {.addr=0xfd42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa93f, .a=0xbe, .x=0xe5, .y=0x20, .sp=0x7a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa93f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa940, .a=0xbe, .x=0xe5, .y=0x20, .sp=0x7a, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xa93f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa93f, .value=0x60, .type=IO_READ},
        {.addr=0xa940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_015F) {
    const struct CPU_State initial_cpu = {.pc=0xf27c, .a=0x6a, .x=0x90, .y=0x8f, .sp=0x59, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf27c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf27d, .a=0x6a, .x=0x90, .y=0x8f, .sp=0x59, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf27c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf27c, .value=0x60, .type=IO_READ},
        {.addr=0xf27d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0160) {
    const struct CPU_State initial_cpu = {.pc=0x80b1, .a=0x8e, .x=0x3a, .y=0xe6, .sp=0x43, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x80b1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x80b2, .a=0x8e, .x=0x3a, .y=0xe6, .sp=0x43, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x80b1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x80b1, .value=0x60, .type=IO_READ},
        {.addr=0x80b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0161) {
    const struct CPU_State initial_cpu = {.pc=0xe811, .a=0x71, .x=0x0b, .y=0xb0, .sp=0x82, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xe811, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe812, .a=0x71, .x=0x0b, .y=0xb0, .sp=0x82, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xe811, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe811, .value=0x60, .type=IO_READ},
        {.addr=0xe812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0162) {
    const struct CPU_State initial_cpu = {.pc=0xb7f8, .a=0x6e, .x=0xb6, .y=0xf7, .sp=0xcf, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb7f9, .a=0x6e, .x=0xb6, .y=0xf7, .sp=0xcf, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xb7f8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb7f8, .value=0x60, .type=IO_READ},
        {.addr=0xb7f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0163) {
    const struct CPU_State initial_cpu = {.pc=0x001d, .a=0x75, .x=0xff, .y=0xfc, .sp=0x23, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x001e, .a=0x75, .x=0xff, .y=0xfc, .sp=0x23, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x001d, .value=0x60, .type=IO_READ},
        {.addr=0x001e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0164) {
    const struct CPU_State initial_cpu = {.pc=0x13c3, .a=0x97, .x=0xb9, .y=0x28, .sp=0x3e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x13c3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x13c4, .a=0x97, .x=0xb9, .y=0x28, .sp=0x3e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x13c3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x13c3, .value=0x60, .type=IO_READ},
        {.addr=0x13c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0165) {
    const struct CPU_State initial_cpu = {.pc=0xf2f8, .a=0x08, .x=0x4d, .y=0x0b, .sp=0x6e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf2f8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf2f9, .a=0x08, .x=0x4d, .y=0x0b, .sp=0x6e, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xf2f8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf2f8, .value=0x60, .type=IO_READ},
        {.addr=0xf2f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0166) {
    const struct CPU_State initial_cpu = {.pc=0x748d, .a=0x11, .x=0x89, .y=0x07, .sp=0xd2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x748d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x748e, .a=0x11, .x=0x89, .y=0x07, .sp=0xd2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x748d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x748d, .value=0x60, .type=IO_READ},
        {.addr=0x748e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0167) {
    const struct CPU_State initial_cpu = {.pc=0xb83a, .a=0xb9, .x=0xd6, .y=0xa4, .sp=0xa0, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb83a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb83b, .a=0xb9, .x=0xd6, .y=0xa4, .sp=0xa0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xb83a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb83a, .value=0x60, .type=IO_READ},
        {.addr=0xb83b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0168) {
    const struct CPU_State initial_cpu = {.pc=0x5ba0, .a=0x59, .x=0xf4, .y=0x9e, .sp=0x00, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5ba1, .a=0x59, .x=0xf4, .y=0x9e, .sp=0x00, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x5ba0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5ba0, .value=0x60, .type=IO_READ},
        {.addr=0x5ba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0169) {
    const struct CPU_State initial_cpu = {.pc=0x8ec6, .a=0xc6, .x=0x5f, .y=0x1a, .sp=0x84, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8ec7, .a=0xc6, .x=0x5f, .y=0x1a, .sp=0x84, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8ec6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8ec6, .value=0x60, .type=IO_READ},
        {.addr=0x8ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_016A) {
    const struct CPU_State initial_cpu = {.pc=0x6474, .a=0xbe, .x=0x5b, .y=0xf3, .sp=0xda, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x6474, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6475, .a=0xbe, .x=0x5b, .y=0xf3, .sp=0xda, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x6474, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6474, .value=0x60, .type=IO_READ},
        {.addr=0x6475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_016B) {
    const struct CPU_State initial_cpu = {.pc=0x3646, .a=0x16, .x=0xd0, .y=0x52, .sp=0xb9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x3646, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3647, .a=0x16, .x=0xd0, .y=0x52, .sp=0xb9, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x3646, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3646, .value=0x60, .type=IO_READ},
        {.addr=0x3647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_016C) {
    const struct CPU_State initial_cpu = {.pc=0x661b, .a=0xeb, .x=0x57, .y=0xda, .sp=0x7d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x661b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x661c, .a=0xeb, .x=0x57, .y=0xda, .sp=0x7d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x661b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x661b, .value=0x60, .type=IO_READ},
        {.addr=0x661c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_016D) {
    const struct CPU_State initial_cpu = {.pc=0x9fbe, .a=0x46, .x=0x95, .y=0xb2, .sp=0x75, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9fbe, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9fbf, .a=0x46, .x=0x95, .y=0xb2, .sp=0x75, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9fbe, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9fbe, .value=0x60, .type=IO_READ},
        {.addr=0x9fbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_016E) {
    const struct CPU_State initial_cpu = {.pc=0x25a1, .a=0x3c, .x=0xd6, .y=0xb2, .sp=0x14, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x25a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x25a2, .a=0x3c, .x=0xd6, .y=0xb2, .sp=0x14, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x25a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x25a1, .value=0x60, .type=IO_READ},
        {.addr=0x25a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_016F) {
    const struct CPU_State initial_cpu = {.pc=0x4a5f, .a=0xbe, .x=0xce, .y=0xb7, .sp=0x25, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4a60, .a=0xbe, .x=0xce, .y=0xb7, .sp=0x25, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x4a5f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4a5f, .value=0x60, .type=IO_READ},
        {.addr=0x4a60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0170) {
    const struct CPU_State initial_cpu = {.pc=0xd4ff, .a=0x64, .x=0x58, .y=0x57, .sp=0x19, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ff, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd500, .a=0x64, .x=0x58, .y=0x57, .sp=0x19, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd4ff, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd4ff, .value=0x60, .type=IO_READ},
        {.addr=0xd500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0171) {
    const struct CPU_State initial_cpu = {.pc=0x68c2, .a=0x3c, .x=0xed, .y=0xd5, .sp=0x40, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x68c2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x68c3, .a=0x3c, .x=0xed, .y=0xd5, .sp=0x40, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x68c2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x68c2, .value=0x60, .type=IO_READ},
        {.addr=0x68c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0172) {
    const struct CPU_State initial_cpu = {.pc=0x5b4e, .a=0xae, .x=0x20, .y=0x46, .sp=0x82, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x5b4e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5b4f, .a=0xae, .x=0x20, .y=0x46, .sp=0x82, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x5b4e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5b4e, .value=0x60, .type=IO_READ},
        {.addr=0x5b4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0173) {
    const struct CPU_State initial_cpu = {.pc=0x8f51, .a=0xd8, .x=0x99, .y=0xd9, .sp=0x07, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f51, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8f52, .a=0xd8, .x=0x99, .y=0xd9, .sp=0x07, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x8f51, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8f51, .value=0x60, .type=IO_READ},
        {.addr=0x8f52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0174) {
    const struct CPU_State initial_cpu = {.pc=0xc291, .a=0x84, .x=0x6d, .y=0x04, .sp=0xb5, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc291, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc292, .a=0x84, .x=0x6d, .y=0x04, .sp=0xb5, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xc291, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc291, .value=0x60, .type=IO_READ},
        {.addr=0xc292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0175) {
    const struct CPU_State initial_cpu = {.pc=0xa6f8, .a=0x31, .x=0x11, .y=0xb9, .sp=0x83, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa6f9, .a=0x31, .x=0x11, .y=0xb9, .sp=0x83, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa6f8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa6f8, .value=0x60, .type=IO_READ},
        {.addr=0xa6f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1d40, .a=0x62, .x=0xc9, .y=0xa8, .sp=0xc4, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1d40, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1d41, .a=0x62, .x=0xc9, .y=0xa8, .sp=0xc4, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1d40, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1d40, .value=0x60, .type=IO_READ},
        {.addr=0x1d41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0177) {
    const struct CPU_State initial_cpu = {.pc=0xc7d8, .a=0xf9, .x=0x53, .y=0xb5, .sp=0xab, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc7d9, .a=0xf9, .x=0x53, .y=0xb5, .sp=0xab, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xc7d8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc7d8, .value=0x60, .type=IO_READ},
        {.addr=0xc7d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0178) {
    const struct CPU_State initial_cpu = {.pc=0xa4b0, .a=0x33, .x=0xd4, .y=0x35, .sp=0xa9, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa4b1, .a=0x33, .x=0xd4, .y=0x35, .sp=0xa9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa4b0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa4b0, .value=0x60, .type=IO_READ},
        {.addr=0xa4b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0179) {
    const struct CPU_State initial_cpu = {.pc=0x999f, .a=0xc3, .x=0xa5, .y=0xdd, .sp=0xdb, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x999f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x99a0, .a=0xc3, .x=0xa5, .y=0xdd, .sp=0xdb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x999f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x999f, .value=0x60, .type=IO_READ},
        {.addr=0x99a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_017A) {
    const struct CPU_State initial_cpu = {.pc=0xcf36, .a=0x74, .x=0x41, .y=0x76, .sp=0x45, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xcf36, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcf37, .a=0x74, .x=0x41, .y=0x76, .sp=0x45, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xcf36, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcf36, .value=0x60, .type=IO_READ},
        {.addr=0xcf37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_017B) {
    const struct CPU_State initial_cpu = {.pc=0x517d, .a=0xe2, .x=0xe4, .y=0x26, .sp=0x77, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x517d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x517e, .a=0xe2, .x=0xe4, .y=0x26, .sp=0x77, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x517d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x517d, .value=0x60, .type=IO_READ},
        {.addr=0x517e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_017C) {
    const struct CPU_State initial_cpu = {.pc=0xb408, .a=0x21, .x=0x3c, .y=0x07, .sp=0xfc, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb408, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb409, .a=0x21, .x=0x3c, .y=0x07, .sp=0xfc, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xb408, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb408, .value=0x60, .type=IO_READ},
        {.addr=0xb409, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_017D) {
    const struct CPU_State initial_cpu = {.pc=0x998f, .a=0x7b, .x=0x51, .y=0x50, .sp=0x14, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x998f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9990, .a=0x7b, .x=0x51, .y=0x50, .sp=0x14, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x998f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x998f, .value=0x60, .type=IO_READ},
        {.addr=0x9990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_017E) {
    const struct CPU_State initial_cpu = {.pc=0x9128, .a=0x47, .x=0xfc, .y=0xd5, .sp=0xca, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x9128, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9129, .a=0x47, .x=0xfc, .y=0xd5, .sp=0xca, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9128, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9128, .value=0x60, .type=IO_READ},
        {.addr=0x9129, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_017F) {
    const struct CPU_State initial_cpu = {.pc=0x3fbe, .a=0xc2, .x=0x84, .y=0xb9, .sp=0xbc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3fbe, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3fbf, .a=0xc2, .x=0x84, .y=0xb9, .sp=0xbc, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x3fbe, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3fbe, .value=0x60, .type=IO_READ},
        {.addr=0x3fbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0180) {
    const struct CPU_State initial_cpu = {.pc=0x9ddb, .a=0x1e, .x=0xd0, .y=0x21, .sp=0x81, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9ddb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9ddc, .a=0x1e, .x=0xd0, .y=0x21, .sp=0x81, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x9ddb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9ddb, .value=0x60, .type=IO_READ},
        {.addr=0x9ddc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0181) {
    const struct CPU_State initial_cpu = {.pc=0x471e, .a=0x20, .x=0xfa, .y=0x28, .sp=0x9a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x471e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x471f, .a=0x20, .x=0xfa, .y=0x28, .sp=0x9a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x471e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x471e, .value=0x60, .type=IO_READ},
        {.addr=0x471f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0182) {
    const struct CPU_State initial_cpu = {.pc=0x9b98, .a=0x9e, .x=0x58, .y=0x51, .sp=0xa9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9b98, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9b99, .a=0x9e, .x=0x58, .y=0x51, .sp=0xa9, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x9b98, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9b98, .value=0x60, .type=IO_READ},
        {.addr=0x9b99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0183) {
    const struct CPU_State initial_cpu = {.pc=0x3ceb, .a=0x2d, .x=0xf4, .y=0x55, .sp=0xd5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3ceb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3cec, .a=0x2d, .x=0xf4, .y=0x55, .sp=0xd5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3ceb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3ceb, .value=0x60, .type=IO_READ},
        {.addr=0x3cec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0184) {
    const struct CPU_State initial_cpu = {.pc=0x90e0, .a=0x46, .x=0x3a, .y=0xd7, .sp=0x01, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x90e0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x90e1, .a=0x46, .x=0x3a, .y=0xd7, .sp=0x01, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x90e0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x90e0, .value=0x60, .type=IO_READ},
        {.addr=0x90e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0185) {
    const struct CPU_State initial_cpu = {.pc=0xc4b6, .a=0xd6, .x=0x75, .y=0xf5, .sp=0x34, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xc4b6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc4b7, .a=0xd6, .x=0x75, .y=0xf5, .sp=0x34, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xc4b6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc4b6, .value=0x60, .type=IO_READ},
        {.addr=0xc4b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0186) {
    const struct CPU_State initial_cpu = {.pc=0xacd7, .a=0x0b, .x=0x27, .y=0x18, .sp=0x4d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xacd7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xacd8, .a=0x0b, .x=0x27, .y=0x18, .sp=0x4d, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xacd7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xacd7, .value=0x60, .type=IO_READ},
        {.addr=0xacd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0187) {
    const struct CPU_State initial_cpu = {.pc=0xeaa7, .a=0x7d, .x=0x94, .y=0xb6, .sp=0x0b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeaa8, .a=0x7d, .x=0x94, .y=0xb6, .sp=0x0b, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xeaa7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeaa7, .value=0x60, .type=IO_READ},
        {.addr=0xeaa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0188) {
    const struct CPU_State initial_cpu = {.pc=0xcf7c, .a=0xbb, .x=0xae, .y=0x44, .sp=0x1f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xcf7c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcf7d, .a=0xbb, .x=0xae, .y=0x44, .sp=0x1f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xcf7c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcf7c, .value=0x60, .type=IO_READ},
        {.addr=0xcf7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0189) {
    const struct CPU_State initial_cpu = {.pc=0x7916, .a=0x2c, .x=0xf5, .y=0xc2, .sp=0x2e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7916, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7917, .a=0x2c, .x=0xf5, .y=0xc2, .sp=0x2e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7916, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7916, .value=0x60, .type=IO_READ},
        {.addr=0x7917, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_018A) {
    const struct CPU_State initial_cpu = {.pc=0x2445, .a=0x74, .x=0x1a, .y=0x6a, .sp=0xcd, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x2445, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2446, .a=0x74, .x=0x1a, .y=0x6a, .sp=0xcd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2445, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2445, .value=0x60, .type=IO_READ},
        {.addr=0x2446, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_018B) {
    const struct CPU_State initial_cpu = {.pc=0xab01, .a=0x80, .x=0x3f, .y=0xd9, .sp=0xbe, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xab01, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xab02, .a=0x80, .x=0x3f, .y=0xd9, .sp=0xbe, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xab01, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xab01, .value=0x60, .type=IO_READ},
        {.addr=0xab02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_018C) {
    const struct CPU_State initial_cpu = {.pc=0x3c6a, .a=0xa5, .x=0xc0, .y=0x03, .sp=0x70, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x3c6a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3c6b, .a=0xa5, .x=0xc0, .y=0x03, .sp=0x70, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3c6a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3c6a, .value=0x60, .type=IO_READ},
        {.addr=0x3c6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_018D) {
    const struct CPU_State initial_cpu = {.pc=0x6efc, .a=0x68, .x=0x57, .y=0xaa, .sp=0x8e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6efc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6efd, .a=0x68, .x=0x57, .y=0xaa, .sp=0x8e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6efc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6efc, .value=0x60, .type=IO_READ},
        {.addr=0x6efd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_018E) {
    const struct CPU_State initial_cpu = {.pc=0x52cf, .a=0xa4, .x=0x66, .y=0xdb, .sp=0x6d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x52cf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x52d0, .a=0xa4, .x=0x66, .y=0xdb, .sp=0x6d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x52cf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x52cf, .value=0x60, .type=IO_READ},
        {.addr=0x52d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5b55, .a=0x5e, .x=0xfe, .y=0xd0, .sp=0x22, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5b55, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5b56, .a=0x5e, .x=0xfe, .y=0xd0, .sp=0x22, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5b55, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5b55, .value=0x60, .type=IO_READ},
        {.addr=0x5b56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0190) {
    const struct CPU_State initial_cpu = {.pc=0xe65d, .a=0x8c, .x=0x3b, .y=0x20, .sp=0xd8, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe65d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe65e, .a=0x8c, .x=0x3b, .y=0x20, .sp=0xd8, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xe65d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe65d, .value=0x60, .type=IO_READ},
        {.addr=0xe65e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0191) {
    const struct CPU_State initial_cpu = {.pc=0x0e30, .a=0x57, .x=0x71, .y=0xc2, .sp=0x7c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0e30, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0e31, .a=0x57, .x=0x71, .y=0xc2, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0e30, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0e30, .value=0x60, .type=IO_READ},
        {.addr=0x0e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0192) {
    const struct CPU_State initial_cpu = {.pc=0x465e, .a=0x0e, .x=0xe9, .y=0x19, .sp=0x08, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x465e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x465f, .a=0x0e, .x=0xe9, .y=0x19, .sp=0x08, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x465e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x465e, .value=0x60, .type=IO_READ},
        {.addr=0x465f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0193) {
    const struct CPU_State initial_cpu = {.pc=0xf0aa, .a=0xa2, .x=0x5e, .y=0xf7, .sp=0x66, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf0aa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf0ab, .a=0xa2, .x=0x5e, .y=0xf7, .sp=0x66, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xf0aa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf0aa, .value=0x60, .type=IO_READ},
        {.addr=0xf0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0194) {
    const struct CPU_State initial_cpu = {.pc=0xd4fa, .a=0xad, .x=0x51, .y=0x2f, .sp=0xc7, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4fa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd4fb, .a=0xad, .x=0x51, .y=0x2f, .sp=0xc7, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xd4fa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd4fa, .value=0x60, .type=IO_READ},
        {.addr=0xd4fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0195) {
    const struct CPU_State initial_cpu = {.pc=0xa97b, .a=0xe5, .x=0x61, .y=0x08, .sp=0xc6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa97b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa97c, .a=0xe5, .x=0x61, .y=0x08, .sp=0xc6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa97b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa97b, .value=0x60, .type=IO_READ},
        {.addr=0xa97c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0196) {
    const struct CPU_State initial_cpu = {.pc=0xf422, .a=0x6e, .x=0x9e, .y=0x70, .sp=0x85, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xf422, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf423, .a=0x6e, .x=0x9e, .y=0x70, .sp=0x85, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xf422, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf422, .value=0x60, .type=IO_READ},
        {.addr=0xf423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0197) {
    const struct CPU_State initial_cpu = {.pc=0x88c1, .a=0x3f, .x=0x4a, .y=0xb5, .sp=0x2c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x88c1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x88c2, .a=0x3f, .x=0x4a, .y=0xb5, .sp=0x2c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x88c1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x88c1, .value=0x60, .type=IO_READ},
        {.addr=0x88c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0198) {
    const struct CPU_State initial_cpu = {.pc=0xd727, .a=0x50, .x=0x97, .y=0x5f, .sp=0x04, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd727, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd728, .a=0x50, .x=0x97, .y=0x5f, .sp=0x04, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xd727, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd727, .value=0x60, .type=IO_READ},
        {.addr=0xd728, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0199) {
    const struct CPU_State initial_cpu = {.pc=0xafc6, .a=0xfe, .x=0x76, .y=0xf4, .sp=0x0d, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xafc6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xafc7, .a=0xfe, .x=0x76, .y=0xf4, .sp=0x0d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xafc6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xafc6, .value=0x60, .type=IO_READ},
        {.addr=0xafc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6ab9, .a=0xf3, .x=0x36, .y=0xf7, .sp=0xfd, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6ab9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6aba, .a=0xf3, .x=0x36, .y=0xf7, .sp=0xfd, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x6ab9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6ab9, .value=0x60, .type=IO_READ},
        {.addr=0x6aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_019B) {
    const struct CPU_State initial_cpu = {.pc=0x1ba0, .a=0x7d, .x=0xd2, .y=0x13, .sp=0x30, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1ba0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1ba1, .a=0x7d, .x=0xd2, .y=0x13, .sp=0x30, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1ba0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1ba0, .value=0x60, .type=IO_READ},
        {.addr=0x1ba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_019C) {
    const struct CPU_State initial_cpu = {.pc=0xb131, .a=0x38, .x=0xca, .y=0xc4, .sp=0x4d, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb131, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb132, .a=0x38, .x=0xca, .y=0xc4, .sp=0x4d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb131, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb131, .value=0x60, .type=IO_READ},
        {.addr=0xb132, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_019D) {
    const struct CPU_State initial_cpu = {.pc=0x1773, .a=0x25, .x=0xb2, .y=0xad, .sp=0x5e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x1773, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1774, .a=0x25, .x=0xb2, .y=0xad, .sp=0x5e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1773, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1773, .value=0x60, .type=IO_READ},
        {.addr=0x1774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_019E) {
    const struct CPU_State initial_cpu = {.pc=0x2276, .a=0xda, .x=0x22, .y=0xfa, .sp=0xce, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2276, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2277, .a=0xda, .x=0x22, .y=0xfa, .sp=0xce, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x2276, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2276, .value=0x60, .type=IO_READ},
        {.addr=0x2277, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_019F) {
    const struct CPU_State initial_cpu = {.pc=0x5339, .a=0x32, .x=0x3f, .y=0x08, .sp=0x53, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5339, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x533a, .a=0x32, .x=0x3f, .y=0x08, .sp=0x53, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x5339, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5339, .value=0x60, .type=IO_READ},
        {.addr=0x533a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x1f9b, .a=0x8e, .x=0x1d, .y=0x12, .sp=0xa8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1f9c, .a=0x8e, .x=0x1d, .y=0x12, .sp=0xa8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1f9b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1f9b, .value=0x60, .type=IO_READ},
        {.addr=0x1f9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xd1b4, .a=0x67, .x=0x75, .y=0x30, .sp=0xa8, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd1b4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd1b5, .a=0x67, .x=0x75, .y=0x30, .sp=0xa8, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xd1b4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd1b4, .value=0x60, .type=IO_READ},
        {.addr=0xd1b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xbba8, .a=0x4c, .x=0x17, .y=0x6e, .sp=0x96, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xbba8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbba9, .a=0x4c, .x=0x17, .y=0x6e, .sp=0x96, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbba8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbba8, .value=0x60, .type=IO_READ},
        {.addr=0xbba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x92b3, .a=0x6d, .x=0xd0, .y=0x48, .sp=0xcf, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x92b3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x92b4, .a=0x6d, .x=0xd0, .y=0x48, .sp=0xcf, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x92b3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x92b3, .value=0x60, .type=IO_READ},
        {.addr=0x92b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc9b0, .a=0x3c, .x=0x83, .y=0x48, .sp=0x73, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc9b1, .a=0x3c, .x=0x83, .y=0x48, .sp=0x73, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc9b0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc9b0, .value=0x60, .type=IO_READ},
        {.addr=0xc9b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x59df, .a=0xb0, .x=0x93, .y=0xb5, .sp=0x06, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x59df, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x59e0, .a=0xb0, .x=0x93, .y=0xb5, .sp=0x06, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x59df, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x59df, .value=0x60, .type=IO_READ},
        {.addr=0x59e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x20d2, .a=0x4b, .x=0x92, .y=0x1c, .sp=0xf5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x20d2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x20d3, .a=0x4b, .x=0x92, .y=0x1c, .sp=0xf5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x20d2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x20d2, .value=0x60, .type=IO_READ},
        {.addr=0x20d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x907c, .a=0x51, .x=0xb1, .y=0x0a, .sp=0x69, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x907c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x907d, .a=0x51, .x=0xb1, .y=0x0a, .sp=0x69, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x907c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x907c, .value=0x60, .type=IO_READ},
        {.addr=0x907d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xc14f, .a=0x3b, .x=0x06, .y=0x4a, .sp=0x44, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc14f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc150, .a=0x3b, .x=0x06, .y=0x4a, .sp=0x44, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc14f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc14f, .value=0x60, .type=IO_READ},
        {.addr=0xc150, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x11a1, .a=0x3f, .x=0xef, .y=0xc9, .sp=0xaa, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x11a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x11a2, .a=0x3f, .x=0xef, .y=0xc9, .sp=0xaa, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x11a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x11a1, .value=0x60, .type=IO_READ},
        {.addr=0x11a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x9539, .a=0x22, .x=0xec, .y=0xd1, .sp=0xe5, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9539, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x953a, .a=0x22, .x=0xec, .y=0xd1, .sp=0xe5, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9539, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9539, .value=0x60, .type=IO_READ},
        {.addr=0x953a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xed7c, .a=0xa3, .x=0x5e, .y=0xbf, .sp=0x19, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xed7c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xed7d, .a=0xa3, .x=0x5e, .y=0xbf, .sp=0x19, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xed7c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xed7c, .value=0x60, .type=IO_READ},
        {.addr=0xed7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x52c4, .a=0x27, .x=0xab, .y=0x98, .sp=0x52, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x52c4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x52c5, .a=0x27, .x=0xab, .y=0x98, .sp=0x52, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x52c4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x52c4, .value=0x60, .type=IO_READ},
        {.addr=0x52c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x82d4, .a=0x1d, .x=0x3b, .y=0x2f, .sp=0x48, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x82d4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x82d5, .a=0x1d, .x=0x3b, .y=0x2f, .sp=0x48, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x82d4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x82d4, .value=0x60, .type=IO_READ},
        {.addr=0x82d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x6289, .a=0x26, .x=0x9d, .y=0x37, .sp=0x30, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6289, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x628a, .a=0x26, .x=0x9d, .y=0x37, .sp=0x30, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x6289, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6289, .value=0x60, .type=IO_READ},
        {.addr=0x628a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x3cfe, .a=0x99, .x=0x0c, .y=0x9a, .sp=0x27, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x3cfe, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3cff, .a=0x99, .x=0x0c, .y=0x9a, .sp=0x27, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3cfe, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3cfe, .value=0x60, .type=IO_READ},
        {.addr=0x3cff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0cdc, .a=0x78, .x=0x82, .y=0x19, .sp=0x15, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0cdc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0cdd, .a=0x78, .x=0x82, .y=0x19, .sp=0x15, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0cdc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0cdc, .value=0x60, .type=IO_READ},
        {.addr=0x0cdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xf957, .a=0x9e, .x=0x5c, .y=0xb1, .sp=0x30, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf957, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf958, .a=0x9e, .x=0x5c, .y=0xb1, .sp=0x30, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf957, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf957, .value=0x60, .type=IO_READ},
        {.addr=0xf958, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xc240, .a=0xf0, .x=0xdb, .y=0x13, .sp=0x70, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc240, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc241, .a=0xf0, .x=0xdb, .y=0x13, .sp=0x70, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xc240, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc240, .value=0x60, .type=IO_READ},
        {.addr=0xc241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x89c3, .a=0xc2, .x=0xff, .y=0x6d, .sp=0xd5, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x89c3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x89c4, .a=0xc2, .x=0xff, .y=0x6d, .sp=0xd5, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x89c3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x89c3, .value=0x60, .type=IO_READ},
        {.addr=0x89c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xc62f, .a=0xcb, .x=0x8b, .y=0x1a, .sp=0x25, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc62f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc630, .a=0xcb, .x=0x8b, .y=0x1a, .sp=0x25, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xc62f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc62f, .value=0x60, .type=IO_READ},
        {.addr=0xc630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x2798, .a=0x8a, .x=0x28, .y=0x96, .sp=0xa0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2798, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2799, .a=0x8a, .x=0x28, .y=0x96, .sp=0xa0, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x2798, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2798, .value=0x60, .type=IO_READ},
        {.addr=0x2799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x81b4, .a=0x1e, .x=0x10, .y=0x2a, .sp=0x35, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x81b4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x81b5, .a=0x1e, .x=0x10, .y=0x2a, .sp=0x35, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x81b4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x81b4, .value=0x60, .type=IO_READ},
        {.addr=0x81b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x4024, .a=0x8a, .x=0x77, .y=0x9e, .sp=0x32, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x4024, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4025, .a=0x8a, .x=0x77, .y=0x9e, .sp=0x32, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x4024, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4024, .value=0x60, .type=IO_READ},
        {.addr=0x4025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x29d8, .a=0xe1, .x=0xa2, .y=0x76, .sp=0x1c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x29d8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x29d9, .a=0xe1, .x=0xa2, .y=0x76, .sp=0x1c, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x29d8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x29d8, .value=0x60, .type=IO_READ},
        {.addr=0x29d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xc2ce, .a=0xcc, .x=0xbd, .y=0x2a, .sp=0x83, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ce, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc2cf, .a=0xcc, .x=0xbd, .y=0x2a, .sp=0x83, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xc2ce, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc2ce, .value=0x60, .type=IO_READ},
        {.addr=0xc2cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x252a, .a=0x13, .x=0x94, .y=0x05, .sp=0x32, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x252a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x252b, .a=0x13, .x=0x94, .y=0x05, .sp=0x32, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x252a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x252a, .value=0x60, .type=IO_READ},
        {.addr=0x252b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xe53c, .a=0xc2, .x=0x0a, .y=0x88, .sp=0x9c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xe53c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe53d, .a=0xc2, .x=0x0a, .y=0x88, .sp=0x9c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe53c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe53c, .value=0x60, .type=IO_READ},
        {.addr=0xe53d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0019, .a=0xdc, .x=0xf9, .y=0x3c, .sp=0xea, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x001a, .a=0xdc, .x=0xf9, .y=0x3c, .sp=0xea, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0019, .value=0x60, .type=IO_READ},
        {.addr=0x001a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xb164, .a=0x02, .x=0xd6, .y=0x35, .sp=0x53, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb164, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb165, .a=0x02, .x=0xd6, .y=0x35, .sp=0x53, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb164, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb164, .value=0x60, .type=IO_READ},
        {.addr=0xb165, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x6789, .a=0xbc, .x=0xd3, .y=0x48, .sp=0x4c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6789, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x678a, .a=0xbc, .x=0xd3, .y=0x48, .sp=0x4c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6789, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6789, .value=0x60, .type=IO_READ},
        {.addr=0x678a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x95b0, .a=0x32, .x=0xad, .y=0xd0, .sp=0xa1, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x95b0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x95b1, .a=0x32, .x=0xad, .y=0xd0, .sp=0xa1, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x95b0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x95b0, .value=0x60, .type=IO_READ},
        {.addr=0x95b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xf7f8, .a=0x82, .x=0x29, .y=0x80, .sp=0x09, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf7f8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf7f9, .a=0x82, .x=0x29, .y=0x80, .sp=0x09, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xf7f8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf7f8, .value=0x60, .type=IO_READ},
        {.addr=0xf7f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xfc56, .a=0xa3, .x=0xef, .y=0x99, .sp=0x98, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xfc56, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfc57, .a=0xa3, .x=0xef, .y=0x99, .sp=0x98, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xfc56, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfc56, .value=0x60, .type=IO_READ},
        {.addr=0xfc57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x97e6, .a=0xe0, .x=0xeb, .y=0xa3, .sp=0xf9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x97e6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x97e7, .a=0xe0, .x=0xeb, .y=0xa3, .sp=0xf9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x97e6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x97e6, .value=0x60, .type=IO_READ},
        {.addr=0x97e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xf51e, .a=0x73, .x=0x20, .y=0xfc, .sp=0x5e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf51e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf51f, .a=0x73, .x=0x20, .y=0xfc, .sp=0x5e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf51e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf51e, .value=0x60, .type=IO_READ},
        {.addr=0xf51f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x50b1, .a=0xde, .x=0xab, .y=0x11, .sp=0x25, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x50b1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x50b2, .a=0xde, .x=0xab, .y=0x11, .sp=0x25, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x50b1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x50b1, .value=0x60, .type=IO_READ},
        {.addr=0x50b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x4ef5, .a=0x4e, .x=0x11, .y=0x21, .sp=0x39, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4ef6, .a=0x4e, .x=0x11, .y=0x21, .sp=0x39, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4ef5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4ef5, .value=0x60, .type=IO_READ},
        {.addr=0x4ef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x8060, .a=0xbe, .x=0xb9, .y=0x16, .sp=0x0f, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8060, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8061, .a=0xbe, .x=0xb9, .y=0x16, .sp=0x0f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8060, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8060, .value=0x60, .type=IO_READ},
        {.addr=0x8061, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xefd7, .a=0xa2, .x=0x1d, .y=0x23, .sp=0x59, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xefd7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xefd8, .a=0xa2, .x=0x1d, .y=0x23, .sp=0x59, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xefd7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xefd7, .value=0x60, .type=IO_READ},
        {.addr=0xefd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xfe30, .a=0xcd, .x=0xe4, .y=0x35, .sp=0x4e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe30, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfe31, .a=0xcd, .x=0xe4, .y=0x35, .sp=0x4e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xfe30, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfe30, .value=0x60, .type=IO_READ},
        {.addr=0xfe31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xbee6, .a=0x34, .x=0x32, .y=0x21, .sp=0xe9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xbee6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbee7, .a=0x34, .x=0x32, .y=0x21, .sp=0xe9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xbee6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbee6, .value=0x60, .type=IO_READ},
        {.addr=0xbee7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xc08e, .a=0x6f, .x=0xe3, .y=0x85, .sp=0x2b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc08e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc08f, .a=0x6f, .x=0xe3, .y=0x85, .sp=0x2b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc08e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc08e, .value=0x60, .type=IO_READ},
        {.addr=0xc08f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x4188, .a=0x69, .x=0xd1, .y=0x94, .sp=0x7c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4188, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4189, .a=0x69, .x=0xd1, .y=0x94, .sp=0x7c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4188, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4188, .value=0x60, .type=IO_READ},
        {.addr=0x4189, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x3c6a, .a=0xc1, .x=0x73, .y=0xe8, .sp=0x7e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3c6a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3c6b, .a=0xc1, .x=0x73, .y=0xe8, .sp=0x7e, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x3c6a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3c6a, .value=0x60, .type=IO_READ},
        {.addr=0x3c6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x1576, .a=0x39, .x=0x65, .y=0x9b, .sp=0x49, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1576, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1577, .a=0x39, .x=0x65, .y=0x9b, .sp=0x49, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x1576, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1576, .value=0x60, .type=IO_READ},
        {.addr=0x1577, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xb3c3, .a=0xb1, .x=0xc1, .y=0xcd, .sp=0x64, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb3c3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb3c4, .a=0xb1, .x=0xc1, .y=0xcd, .sp=0x64, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xb3c3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb3c3, .value=0x60, .type=IO_READ},
        {.addr=0xb3c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x5b56, .a=0x45, .x=0xa1, .y=0xd3, .sp=0xd0, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5b56, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5b57, .a=0x45, .x=0xa1, .y=0xd3, .sp=0xd0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x5b56, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5b56, .value=0x60, .type=IO_READ},
        {.addr=0x5b57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x614e, .a=0x5b, .x=0x7b, .y=0x24, .sp=0xcd, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x614e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x614f, .a=0x5b, .x=0x7b, .y=0x24, .sp=0xcd, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x614e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x614e, .value=0x60, .type=IO_READ},
        {.addr=0x614f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xdb7c, .a=0x34, .x=0x7c, .y=0xe5, .sp=0x52, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xdb7c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdb7d, .a=0x34, .x=0x7c, .y=0xe5, .sp=0x52, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xdb7c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdb7c, .value=0x60, .type=IO_READ},
        {.addr=0xdb7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xbf30, .a=0x96, .x=0xc8, .y=0x79, .sp=0xe2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xbf30, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbf31, .a=0x96, .x=0xc8, .y=0x79, .sp=0xe2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbf30, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbf30, .value=0x60, .type=IO_READ},
        {.addr=0xbf31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xeab8, .a=0x61, .x=0xba, .y=0x06, .sp=0x0a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xeab8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeab9, .a=0x61, .x=0xba, .y=0x06, .sp=0x0a, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xeab8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeab8, .value=0x60, .type=IO_READ},
        {.addr=0xeab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x725f, .a=0x0b, .x=0x1b, .y=0xfc, .sp=0x1a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x725f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7260, .a=0x0b, .x=0x1b, .y=0xfc, .sp=0x1a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x725f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x725f, .value=0x60, .type=IO_READ},
        {.addr=0x7260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb491, .a=0xfc, .x=0x53, .y=0xd9, .sp=0x12, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xb491, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb492, .a=0xfc, .x=0x53, .y=0xd9, .sp=0x12, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb491, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb491, .value=0x60, .type=IO_READ},
        {.addr=0xb492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x5851, .a=0x91, .x=0xc0, .y=0x5a, .sp=0x23, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5851, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5852, .a=0x91, .x=0xc0, .y=0x5a, .sp=0x23, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x5851, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5851, .value=0x60, .type=IO_READ},
        {.addr=0x5852, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xba85, .a=0xfb, .x=0x81, .y=0x7c, .sp=0x47, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xba85, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xba86, .a=0xfb, .x=0x81, .y=0x7c, .sp=0x47, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xba85, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xba85, .value=0x60, .type=IO_READ},
        {.addr=0xba86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x67f3, .a=0x4a, .x=0x90, .y=0x45, .sp=0xd9, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x67f3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x67f4, .a=0x4a, .x=0x90, .y=0x45, .sp=0xd9, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x67f3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x67f3, .value=0x60, .type=IO_READ},
        {.addr=0x67f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x5342, .a=0x8e, .x=0x2a, .y=0x1a, .sp=0x2a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x5342, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5343, .a=0x8e, .x=0x2a, .y=0x1a, .sp=0x2a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x5342, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5342, .value=0x60, .type=IO_READ},
        {.addr=0x5343, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x96f6, .a=0xdb, .x=0xc5, .y=0x8e, .sp=0xf9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x96f6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x96f7, .a=0xdb, .x=0xc5, .y=0x8e, .sp=0xf9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x96f6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x96f6, .value=0x60, .type=IO_READ},
        {.addr=0x96f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x64e9, .a=0x16, .x=0xdf, .y=0xf4, .sp=0x1e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x64e9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x64ea, .a=0x16, .x=0xdf, .y=0xf4, .sp=0x1e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x64e9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x64e9, .value=0x60, .type=IO_READ},
        {.addr=0x64ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x2ed7, .a=0x9f, .x=0xce, .y=0x3b, .sp=0xae, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2ed8, .a=0x9f, .x=0xce, .y=0x3b, .sp=0xae, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2ed7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2ed7, .value=0x60, .type=IO_READ},
        {.addr=0x2ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x320a, .a=0x1e, .x=0xc7, .y=0xe1, .sp=0xc2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x320a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x320b, .a=0x1e, .x=0xc7, .y=0xe1, .sp=0xc2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x320a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x320a, .value=0x60, .type=IO_READ},
        {.addr=0x320b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x0668, .a=0x68, .x=0x33, .y=0x40, .sp=0xa5, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0668, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0669, .a=0x68, .x=0x33, .y=0x40, .sp=0xa5, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0668, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0668, .value=0x60, .type=IO_READ},
        {.addr=0x0669, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x93c7, .a=0x65, .x=0x99, .y=0x62, .sp=0x3e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x93c7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x93c8, .a=0x65, .x=0x99, .y=0x62, .sp=0x3e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x93c7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x93c7, .value=0x60, .type=IO_READ},
        {.addr=0x93c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xb2cb, .a=0x8e, .x=0x0a, .y=0xf1, .sp=0xdd, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb2cb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb2cc, .a=0x8e, .x=0x0a, .y=0xf1, .sp=0xdd, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xb2cb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb2cb, .value=0x60, .type=IO_READ},
        {.addr=0xb2cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x7b13, .a=0x94, .x=0x60, .y=0xdc, .sp=0xe7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7b13, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7b14, .a=0x94, .x=0x60, .y=0xdc, .sp=0xe7, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x7b13, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7b13, .value=0x60, .type=IO_READ},
        {.addr=0x7b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xe937, .a=0xdf, .x=0xf0, .y=0xb6, .sp=0xe7, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe937, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe938, .a=0xdf, .x=0xf0, .y=0xb6, .sp=0xe7, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xe937, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe937, .value=0x60, .type=IO_READ},
        {.addr=0xe938, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xc266, .a=0x7a, .x=0x97, .y=0x84, .sp=0x77, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc266, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc267, .a=0x7a, .x=0x97, .y=0x84, .sp=0x77, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xc266, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc266, .value=0x60, .type=IO_READ},
        {.addr=0xc267, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x7547, .a=0xd4, .x=0xb4, .y=0x1a, .sp=0x96, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x7547, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7548, .a=0xd4, .x=0xb4, .y=0x1a, .sp=0x96, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7547, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7547, .value=0x60, .type=IO_READ},
        {.addr=0x7548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x93fd, .a=0x42, .x=0x33, .y=0xf2, .sp=0x5c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x93fd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x93fe, .a=0x42, .x=0x33, .y=0xf2, .sp=0x5c, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x93fd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x93fd, .value=0x60, .type=IO_READ},
        {.addr=0x93fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x5150, .a=0xe0, .x=0x33, .y=0xe3, .sp=0x3c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5150, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0xe0, .x=0x33, .y=0xe3, .sp=0x3c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5150, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5150, .value=0x60, .type=IO_READ},
        {.addr=0x5151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xd1fb, .a=0x2e, .x=0xd9, .y=0x71, .sp=0xff, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xd1fb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd1fc, .a=0x2e, .x=0xd9, .y=0x71, .sp=0xff, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xd1fb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd1fb, .value=0x60, .type=IO_READ},
        {.addr=0xd1fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xce51, .a=0x3b, .x=0xb4, .y=0xc2, .sp=0x70, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xce51, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xce52, .a=0x3b, .x=0xb4, .y=0xc2, .sp=0x70, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xce51, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xce51, .value=0x60, .type=IO_READ},
        {.addr=0xce52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x8ada, .a=0xd8, .x=0xec, .y=0xab, .sp=0x4f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ada, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8adb, .a=0xd8, .x=0xec, .y=0xab, .sp=0x4f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x8ada, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8ada, .value=0x60, .type=IO_READ},
        {.addr=0x8adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xfa95, .a=0x71, .x=0x39, .y=0x73, .sp=0xab, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xfa95, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfa96, .a=0x71, .x=0x39, .y=0x73, .sp=0xab, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xfa95, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfa95, .value=0x60, .type=IO_READ},
        {.addr=0xfa96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xf650, .a=0xcd, .x=0x15, .y=0x7b, .sp=0xea, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf650, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf651, .a=0xcd, .x=0x15, .y=0x7b, .sp=0xea, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf650, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf650, .value=0x60, .type=IO_READ},
        {.addr=0xf651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x4e91, .a=0xc1, .x=0x60, .y=0x2e, .sp=0xae, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x4e91, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4e92, .a=0xc1, .x=0x60, .y=0x2e, .sp=0xae, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x4e91, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4e91, .value=0x60, .type=IO_READ},
        {.addr=0x4e92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xe489, .a=0xcd, .x=0xf3, .y=0x07, .sp=0xca, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xe489, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe48a, .a=0xcd, .x=0xf3, .y=0x07, .sp=0xca, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe489, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe489, .value=0x60, .type=IO_READ},
        {.addr=0xe48a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x0c6d, .a=0x34, .x=0xdb, .y=0x28, .sp=0x29, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c6d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0c6e, .a=0x34, .x=0xdb, .y=0x28, .sp=0x29, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0c6d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0c6d, .value=0x60, .type=IO_READ},
        {.addr=0x0c6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xb069, .a=0x6b, .x=0x1b, .y=0x67, .sp=0x54, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb069, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb06a, .a=0x6b, .x=0x1b, .y=0x67, .sp=0x54, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xb069, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb069, .value=0x60, .type=IO_READ},
        {.addr=0xb06a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0741, .a=0xfb, .x=0x09, .y=0x78, .sp=0x34, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0741, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0742, .a=0xfb, .x=0x09, .y=0x78, .sp=0x34, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0741, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0741, .value=0x60, .type=IO_READ},
        {.addr=0x0742, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xb640, .a=0xc5, .x=0xa4, .y=0x4c, .sp=0x67, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb640, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb641, .a=0xc5, .x=0xa4, .y=0x4c, .sp=0x67, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb640, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb640, .value=0x60, .type=IO_READ},
        {.addr=0xb641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xd28f, .a=0x87, .x=0x56, .y=0x45, .sp=0xce, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd28f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd290, .a=0x87, .x=0x56, .y=0x45, .sp=0xce, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd28f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd28f, .value=0x60, .type=IO_READ},
        {.addr=0xd290, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x9c46, .a=0x3d, .x=0xc6, .y=0x63, .sp=0x89, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9c46, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9c47, .a=0x3d, .x=0xc6, .y=0x63, .sp=0x89, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x9c46, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9c46, .value=0x60, .type=IO_READ},
        {.addr=0x9c47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xebde, .a=0xa3, .x=0x77, .y=0x95, .sp=0xdc, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xebde, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xebdf, .a=0xa3, .x=0x77, .y=0x95, .sp=0xdc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xebde, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xebde, .value=0x60, .type=IO_READ},
        {.addr=0xebdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x89ec, .a=0x70, .x=0x85, .y=0x05, .sp=0x08, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x89ec, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x89ed, .a=0x70, .x=0x85, .y=0x05, .sp=0x08, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x89ec, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x89ec, .value=0x60, .type=IO_READ},
        {.addr=0x89ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xcd76, .a=0x06, .x=0x3b, .y=0x76, .sp=0x99, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xcd76, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcd77, .a=0x06, .x=0x3b, .y=0x76, .sp=0x99, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xcd76, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcd76, .value=0x60, .type=IO_READ},
        {.addr=0xcd77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xc442, .a=0x85, .x=0x6b, .y=0x59, .sp=0x98, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc442, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc443, .a=0x85, .x=0x6b, .y=0x59, .sp=0x98, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc442, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc442, .value=0x60, .type=IO_READ},
        {.addr=0xc443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x3b6f, .a=0x2a, .x=0x0f, .y=0x01, .sp=0x67, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x3b6f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3b70, .a=0x2a, .x=0x0f, .y=0x01, .sp=0x67, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x3b6f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3b6f, .value=0x60, .type=IO_READ},
        {.addr=0x3b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6212, .a=0xb8, .x=0x88, .y=0x63, .sp=0x5b, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6212, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6213, .a=0xb8, .x=0x88, .y=0x63, .sp=0x5b, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x6212, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6212, .value=0x60, .type=IO_READ},
        {.addr=0x6213, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xaf36, .a=0xac, .x=0x66, .y=0x23, .sp=0x36, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xaf36, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaf37, .a=0xac, .x=0x66, .y=0x23, .sp=0x36, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xaf36, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaf36, .value=0x60, .type=IO_READ},
        {.addr=0xaf37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xb2a7, .a=0xf3, .x=0x6f, .y=0xa8, .sp=0x5c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb2a8, .a=0xf3, .x=0x6f, .y=0xa8, .sp=0x5c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb2a7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb2a7, .value=0x60, .type=IO_READ},
        {.addr=0xb2a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x7e29, .a=0xc7, .x=0x58, .y=0xdb, .sp=0x86, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7e29, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7e2a, .a=0xc7, .x=0x58, .y=0xdb, .sp=0x86, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7e29, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7e29, .value=0x60, .type=IO_READ},
        {.addr=0x7e2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x2a8e, .a=0x01, .x=0xd4, .y=0x83, .sp=0x92, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2a8e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2a8f, .a=0x01, .x=0xd4, .y=0x83, .sp=0x92, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2a8e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2a8e, .value=0x60, .type=IO_READ},
        {.addr=0x2a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x2c55, .a=0x35, .x=0x62, .y=0x9d, .sp=0x29, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2c55, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2c56, .a=0x35, .x=0x62, .y=0x9d, .sp=0x29, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x2c55, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2c55, .value=0x60, .type=IO_READ},
        {.addr=0x2c56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x3d6d, .a=0x68, .x=0x0d, .y=0x42, .sp=0x15, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x3d6d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3d6e, .a=0x68, .x=0x0d, .y=0x42, .sp=0x15, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x3d6d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3d6d, .value=0x60, .type=IO_READ},
        {.addr=0x3d6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0200) {
    const struct CPU_State initial_cpu = {.pc=0x2e47, .a=0x6b, .x=0x7e, .y=0x65, .sp=0x5d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e47, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2e48, .a=0x6b, .x=0x7e, .y=0x65, .sp=0x5d, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x2e47, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2e47, .value=0x60, .type=IO_READ},
        {.addr=0x2e48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0201) {
    const struct CPU_State initial_cpu = {.pc=0x95f4, .a=0xab, .x=0xf4, .y=0x07, .sp=0x6f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x95f4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x95f5, .a=0xab, .x=0xf4, .y=0x07, .sp=0x6f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x95f4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x95f4, .value=0x60, .type=IO_READ},
        {.addr=0x95f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0202) {
    const struct CPU_State initial_cpu = {.pc=0x7679, .a=0x9e, .x=0xfe, .y=0xee, .sp=0x7f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7679, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x767a, .a=0x9e, .x=0xfe, .y=0xee, .sp=0x7f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x7679, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7679, .value=0x60, .type=IO_READ},
        {.addr=0x767a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0203) {
    const struct CPU_State initial_cpu = {.pc=0x16e1, .a=0xdd, .x=0xef, .y=0x5b, .sp=0x23, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x16e1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x16e2, .a=0xdd, .x=0xef, .y=0x5b, .sp=0x23, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x16e1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x16e1, .value=0x60, .type=IO_READ},
        {.addr=0x16e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0204) {
    const struct CPU_State initial_cpu = {.pc=0xc3cc, .a=0xc2, .x=0xec, .y=0xa0, .sp=0x25, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc3cc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3cd, .a=0xc2, .x=0xec, .y=0xa0, .sp=0x25, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc3cc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3cc, .value=0x60, .type=IO_READ},
        {.addr=0xc3cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0205) {
    const struct CPU_State initial_cpu = {.pc=0xffb8, .a=0xab, .x=0x3a, .y=0x42, .sp=0xaf, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xffb8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xffb9, .a=0xab, .x=0x3a, .y=0x42, .sp=0xaf, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xffb8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xffb8, .value=0x60, .type=IO_READ},
        {.addr=0xffb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0206) {
    const struct CPU_State initial_cpu = {.pc=0xbd02, .a=0x09, .x=0xb4, .y=0x5d, .sp=0xb8, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xbd02, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbd03, .a=0x09, .x=0xb4, .y=0x5d, .sp=0xb8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbd02, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbd02, .value=0x60, .type=IO_READ},
        {.addr=0xbd03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd791, .a=0xa7, .x=0xdc, .y=0x10, .sp=0xff, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd791, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd792, .a=0xa7, .x=0xdc, .y=0x10, .sp=0xff, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd791, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd791, .value=0x60, .type=IO_READ},
        {.addr=0xd792, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0208) {
    const struct CPU_State initial_cpu = {.pc=0xfd9b, .a=0xfb, .x=0x5c, .y=0x20, .sp=0x6e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xfd9b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfd9c, .a=0xfb, .x=0x5c, .y=0x20, .sp=0x6e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xfd9b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfd9b, .value=0x60, .type=IO_READ},
        {.addr=0xfd9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0209) {
    const struct CPU_State initial_cpu = {.pc=0xace9, .a=0xbc, .x=0x9e, .y=0xed, .sp=0x0a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xace9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xacea, .a=0xbc, .x=0x9e, .y=0xed, .sp=0x0a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xace9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xace9, .value=0x60, .type=IO_READ},
        {.addr=0xacea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_020A) {
    const struct CPU_State initial_cpu = {.pc=0xf514, .a=0xce, .x=0xba, .y=0x5c, .sp=0x38, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf514, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf515, .a=0xce, .x=0xba, .y=0x5c, .sp=0x38, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xf514, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf514, .value=0x60, .type=IO_READ},
        {.addr=0xf515, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_020B) {
    const struct CPU_State initial_cpu = {.pc=0xeb85, .a=0x14, .x=0xf1, .y=0x19, .sp=0x64, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xeb85, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeb86, .a=0x14, .x=0xf1, .y=0x19, .sp=0x64, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xeb85, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeb85, .value=0x60, .type=IO_READ},
        {.addr=0xeb86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_020C) {
    const struct CPU_State initial_cpu = {.pc=0x1be6, .a=0x07, .x=0xd7, .y=0xa8, .sp=0x5f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1be6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1be7, .a=0x07, .x=0xd7, .y=0xa8, .sp=0x5f, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x1be6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1be6, .value=0x60, .type=IO_READ},
        {.addr=0x1be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_020D) {
    const struct CPU_State initial_cpu = {.pc=0x75c1, .a=0x51, .x=0x42, .y=0x77, .sp=0xc6, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x75c1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x75c2, .a=0x51, .x=0x42, .y=0x77, .sp=0xc6, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x75c1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x75c1, .value=0x60, .type=IO_READ},
        {.addr=0x75c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_020E) {
    const struct CPU_State initial_cpu = {.pc=0x465a, .a=0x20, .x=0x57, .y=0x7a, .sp=0x0d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x465a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x465b, .a=0x20, .x=0x57, .y=0x7a, .sp=0x0d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x465a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x465a, .value=0x60, .type=IO_READ},
        {.addr=0x465b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_020F) {
    const struct CPU_State initial_cpu = {.pc=0x902e, .a=0xe8, .x=0x1e, .y=0x1a, .sp=0x3d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x902e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x902f, .a=0xe8, .x=0x1e, .y=0x1a, .sp=0x3d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x902e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x902e, .value=0x60, .type=IO_READ},
        {.addr=0x902f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0210) {
    const struct CPU_State initial_cpu = {.pc=0xe2a2, .a=0x0c, .x=0x84, .y=0xa0, .sp=0x19, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe2a3, .a=0x0c, .x=0x84, .y=0xa0, .sp=0x19, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xe2a2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe2a2, .value=0x60, .type=IO_READ},
        {.addr=0xe2a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0211) {
    const struct CPU_State initial_cpu = {.pc=0xda81, .a=0x99, .x=0xfb, .y=0x49, .sp=0x85, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xda81, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xda82, .a=0x99, .x=0xfb, .y=0x49, .sp=0x85, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xda81, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xda81, .value=0x60, .type=IO_READ},
        {.addr=0xda82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0212) {
    const struct CPU_State initial_cpu = {.pc=0x9d21, .a=0xa0, .x=0x62, .y=0x84, .sp=0x8f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9d21, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9d22, .a=0xa0, .x=0x62, .y=0x84, .sp=0x8f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9d21, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9d21, .value=0x60, .type=IO_READ},
        {.addr=0x9d22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0213) {
    const struct CPU_State initial_cpu = {.pc=0x773c, .a=0xea, .x=0x1b, .y=0xa8, .sp=0xde, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x773c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x773d, .a=0xea, .x=0x1b, .y=0xa8, .sp=0xde, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x773c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x773c, .value=0x60, .type=IO_READ},
        {.addr=0x773d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0214) {
    const struct CPU_State initial_cpu = {.pc=0x043c, .a=0xc6, .x=0x0d, .y=0xa2, .sp=0x8d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x043c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x043d, .a=0xc6, .x=0x0d, .y=0xa2, .sp=0x8d, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x043c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x043c, .value=0x60, .type=IO_READ},
        {.addr=0x043d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0215) {
    const struct CPU_State initial_cpu = {.pc=0xc9e4, .a=0x3f, .x=0x83, .y=0x5a, .sp=0x39, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc9e4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc9e5, .a=0x3f, .x=0x83, .y=0x5a, .sp=0x39, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xc9e4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc9e4, .value=0x60, .type=IO_READ},
        {.addr=0xc9e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0216) {
    const struct CPU_State initial_cpu = {.pc=0xc446, .a=0x45, .x=0x6b, .y=0x60, .sp=0x9d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xc446, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc447, .a=0x45, .x=0x6b, .y=0x60, .sp=0x9d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc446, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc446, .value=0x60, .type=IO_READ},
        {.addr=0xc447, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0217) {
    const struct CPU_State initial_cpu = {.pc=0xe51a, .a=0x25, .x=0xbb, .y=0x84, .sp=0x4c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xe51a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe51b, .a=0x25, .x=0xbb, .y=0x84, .sp=0x4c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe51a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe51a, .value=0x60, .type=IO_READ},
        {.addr=0xe51b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0218) {
    const struct CPU_State initial_cpu = {.pc=0xbd14, .a=0xef, .x=0x74, .y=0x90, .sp=0xa2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbd14, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbd15, .a=0xef, .x=0x74, .y=0x90, .sp=0xa2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbd14, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbd14, .value=0x60, .type=IO_READ},
        {.addr=0xbd15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7e5e, .a=0xad, .x=0x13, .y=0x85, .sp=0x46, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x7e5e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7e5f, .a=0xad, .x=0x13, .y=0x85, .sp=0x46, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x7e5e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7e5e, .value=0x60, .type=IO_READ},
        {.addr=0x7e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_021A) {
    const struct CPU_State initial_cpu = {.pc=0x87da, .a=0xa6, .x=0x9f, .y=0xf6, .sp=0xb0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x87da, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x87db, .a=0xa6, .x=0x9f, .y=0xf6, .sp=0xb0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x87da, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x87da, .value=0x60, .type=IO_READ},
        {.addr=0x87db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_021B) {
    const struct CPU_State initial_cpu = {.pc=0xe13e, .a=0xde, .x=0x07, .y=0x35, .sp=0x3b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe13e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe13f, .a=0xde, .x=0x07, .y=0x35, .sp=0x3b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe13e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe13e, .value=0x60, .type=IO_READ},
        {.addr=0xe13f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_021C) {
    const struct CPU_State initial_cpu = {.pc=0x1a31, .a=0x90, .x=0xe4, .y=0x0b, .sp=0x53, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1a31, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1a32, .a=0x90, .x=0xe4, .y=0x0b, .sp=0x53, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1a31, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1a31, .value=0x60, .type=IO_READ},
        {.addr=0x1a32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_021D) {
    const struct CPU_State initial_cpu = {.pc=0x4305, .a=0xb1, .x=0x0d, .y=0x29, .sp=0x0f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4305, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4306, .a=0xb1, .x=0x0d, .y=0x29, .sp=0x0f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4305, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4305, .value=0x60, .type=IO_READ},
        {.addr=0x4306, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_021E) {
    const struct CPU_State initial_cpu = {.pc=0x1c8d, .a=0x76, .x=0x9d, .y=0xba, .sp=0xc6, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1c8d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1c8e, .a=0x76, .x=0x9d, .y=0xba, .sp=0xc6, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x1c8d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1c8d, .value=0x60, .type=IO_READ},
        {.addr=0x1c8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_021F) {
    const struct CPU_State initial_cpu = {.pc=0xe847, .a=0x0e, .x=0x94, .y=0x1e, .sp=0xa8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe847, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe848, .a=0x0e, .x=0x94, .y=0x1e, .sp=0xa8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe847, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe847, .value=0x60, .type=IO_READ},
        {.addr=0xe848, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0220) {
    const struct CPU_State initial_cpu = {.pc=0xef1f, .a=0x43, .x=0x23, .y=0x62, .sp=0x90, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xef1f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xef20, .a=0x43, .x=0x23, .y=0x62, .sp=0x90, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xef1f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xef1f, .value=0x60, .type=IO_READ},
        {.addr=0xef20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0221) {
    const struct CPU_State initial_cpu = {.pc=0xcc04, .a=0x47, .x=0x7b, .y=0x96, .sp=0x6a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc04, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcc05, .a=0x47, .x=0x7b, .y=0x96, .sp=0x6a, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xcc04, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcc04, .value=0x60, .type=IO_READ},
        {.addr=0xcc05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8439, .a=0xca, .x=0x10, .y=0x64, .sp=0x14, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8439, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x843a, .a=0xca, .x=0x10, .y=0x64, .sp=0x14, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x8439, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8439, .value=0x60, .type=IO_READ},
        {.addr=0x843a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0223) {
    const struct CPU_State initial_cpu = {.pc=0xa155, .a=0xf8, .x=0x08, .y=0x38, .sp=0x3b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xa155, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa156, .a=0xf8, .x=0x08, .y=0x38, .sp=0x3b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xa155, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa155, .value=0x60, .type=IO_READ},
        {.addr=0xa156, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0224) {
    const struct CPU_State initial_cpu = {.pc=0x9354, .a=0x05, .x=0xb8, .y=0xaa, .sp=0x4a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9354, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9355, .a=0x05, .x=0xb8, .y=0xaa, .sp=0x4a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x9354, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9354, .value=0x60, .type=IO_READ},
        {.addr=0x9355, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0225) {
    const struct CPU_State initial_cpu = {.pc=0x20e7, .a=0x13, .x=0x5d, .y=0xa3, .sp=0xa5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x20e7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x20e8, .a=0x13, .x=0x5d, .y=0xa3, .sp=0xa5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x20e7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x20e7, .value=0x60, .type=IO_READ},
        {.addr=0x20e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0226) {
    const struct CPU_State initial_cpu = {.pc=0x91a5, .a=0x8d, .x=0x40, .y=0x01, .sp=0x5d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x91a5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x91a6, .a=0x8d, .x=0x40, .y=0x01, .sp=0x5d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x91a5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x91a5, .value=0x60, .type=IO_READ},
        {.addr=0x91a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0227) {
    const struct CPU_State initial_cpu = {.pc=0x556d, .a=0x18, .x=0x02, .y=0xff, .sp=0x92, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x556d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x556e, .a=0x18, .x=0x02, .y=0xff, .sp=0x92, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x556d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x556d, .value=0x60, .type=IO_READ},
        {.addr=0x556e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0228) {
    const struct CPU_State initial_cpu = {.pc=0xf763, .a=0x31, .x=0xbb, .y=0x1a, .sp=0xa5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xf763, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf764, .a=0x31, .x=0xbb, .y=0x1a, .sp=0xa5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xf763, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf763, .value=0x60, .type=IO_READ},
        {.addr=0xf764, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8b5b, .a=0x76, .x=0x66, .y=0x8f, .sp=0x43, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8b5c, .a=0x76, .x=0x66, .y=0x8f, .sp=0x43, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8b5b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8b5b, .value=0x60, .type=IO_READ},
        {.addr=0x8b5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_022A) {
    const struct CPU_State initial_cpu = {.pc=0xc0f3, .a=0xe9, .x=0x54, .y=0x96, .sp=0x27, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc0f4, .a=0xe9, .x=0x54, .y=0x96, .sp=0x27, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xc0f3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc0f3, .value=0x60, .type=IO_READ},
        {.addr=0xc0f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_022B) {
    const struct CPU_State initial_cpu = {.pc=0x63e0, .a=0x53, .x=0xc8, .y=0x78, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x63e0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x63e1, .a=0x53, .x=0xc8, .y=0x78, .sp=0x90, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x63e0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x63e0, .value=0x60, .type=IO_READ},
        {.addr=0x63e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_022C) {
    const struct CPU_State initial_cpu = {.pc=0xe175, .a=0x1d, .x=0x35, .y=0xa9, .sp=0xc3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe175, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe176, .a=0x1d, .x=0x35, .y=0xa9, .sp=0xc3, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xe175, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe175, .value=0x60, .type=IO_READ},
        {.addr=0xe176, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_022D) {
    const struct CPU_State initial_cpu = {.pc=0x91cb, .a=0xf8, .x=0x9b, .y=0x37, .sp=0xca, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x91cb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x91cc, .a=0xf8, .x=0x9b, .y=0x37, .sp=0xca, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x91cb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x91cb, .value=0x60, .type=IO_READ},
        {.addr=0x91cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_022E) {
    const struct CPU_State initial_cpu = {.pc=0xa3b3, .a=0xb3, .x=0x5f, .y=0x3c, .sp=0xbf, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa3b3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa3b4, .a=0xb3, .x=0x5f, .y=0x3c, .sp=0xbf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa3b3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa3b3, .value=0x60, .type=IO_READ},
        {.addr=0xa3b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_022F) {
    const struct CPU_State initial_cpu = {.pc=0xbd0d, .a=0xbb, .x=0x05, .y=0x70, .sp=0x4e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbd0e, .a=0xbb, .x=0x05, .y=0x70, .sp=0x4e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xbd0d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbd0d, .value=0x60, .type=IO_READ},
        {.addr=0xbd0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1b36, .a=0x1f, .x=0x41, .y=0xd3, .sp=0x0d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1b36, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1b37, .a=0x1f, .x=0x41, .y=0xd3, .sp=0x0d, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x1b36, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1b36, .value=0x60, .type=IO_READ},
        {.addr=0x1b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0231) {
    const struct CPU_State initial_cpu = {.pc=0xd09c, .a=0x59, .x=0x47, .y=0xe6, .sp=0x6f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd09c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd09d, .a=0x59, .x=0x47, .y=0xe6, .sp=0x6f, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd09c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd09c, .value=0x60, .type=IO_READ},
        {.addr=0xd09d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6f75, .a=0x22, .x=0xee, .y=0x2b, .sp=0xd6, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6f75, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6f76, .a=0x22, .x=0xee, .y=0x2b, .sp=0xd6, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x6f75, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6f75, .value=0x60, .type=IO_READ},
        {.addr=0x6f76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0233) {
    const struct CPU_State initial_cpu = {.pc=0xc649, .a=0xab, .x=0xac, .y=0xac, .sp=0x65, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc649, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc64a, .a=0xab, .x=0xac, .y=0xac, .sp=0x65, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xc649, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc649, .value=0x60, .type=IO_READ},
        {.addr=0xc64a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0234) {
    const struct CPU_State initial_cpu = {.pc=0x9abb, .a=0x65, .x=0x7a, .y=0xfe, .sp=0xb8, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9abb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9abc, .a=0x65, .x=0x7a, .y=0xfe, .sp=0xb8, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x9abb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9abb, .value=0x60, .type=IO_READ},
        {.addr=0x9abc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0235) {
    const struct CPU_State initial_cpu = {.pc=0x5164, .a=0x7f, .x=0x3e, .y=0x87, .sp=0x94, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5164, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5165, .a=0x7f, .x=0x3e, .y=0x87, .sp=0x94, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x5164, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5164, .value=0x60, .type=IO_READ},
        {.addr=0x5165, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0236) {
    const struct CPU_State initial_cpu = {.pc=0xb465, .a=0x70, .x=0x58, .y=0x4a, .sp=0xb4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb465, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb466, .a=0x70, .x=0x58, .y=0x4a, .sp=0xb4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb465, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb465, .value=0x60, .type=IO_READ},
        {.addr=0xb466, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0237) {
    const struct CPU_State initial_cpu = {.pc=0x3530, .a=0xba, .x=0x0c, .y=0x3f, .sp=0x31, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3530, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3531, .a=0xba, .x=0x0c, .y=0x3f, .sp=0x31, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x3530, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3530, .value=0x60, .type=IO_READ},
        {.addr=0x3531, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0238) {
    const struct CPU_State initial_cpu = {.pc=0xafeb, .a=0x03, .x=0xba, .y=0x0c, .sp=0x5d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xafeb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xafec, .a=0x03, .x=0xba, .y=0x0c, .sp=0x5d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xafeb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xafeb, .value=0x60, .type=IO_READ},
        {.addr=0xafec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0239) {
    const struct CPU_State initial_cpu = {.pc=0x0861, .a=0x25, .x=0x07, .y=0x99, .sp=0xb0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0861, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0862, .a=0x25, .x=0x07, .y=0x99, .sp=0xb0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0861, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0861, .value=0x60, .type=IO_READ},
        {.addr=0x0862, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_023A) {
    const struct CPU_State initial_cpu = {.pc=0x7fd9, .a=0xc6, .x=0x5c, .y=0x52, .sp=0x12, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7fda, .a=0xc6, .x=0x5c, .y=0x52, .sp=0x12, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7fd9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7fd9, .value=0x60, .type=IO_READ},
        {.addr=0x7fda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_023B) {
    const struct CPU_State initial_cpu = {.pc=0x44fc, .a=0xb4, .x=0xf9, .y=0xc4, .sp=0x3e, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x44fc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x44fd, .a=0xb4, .x=0xf9, .y=0xc4, .sp=0x3e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x44fc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x44fc, .value=0x60, .type=IO_READ},
        {.addr=0x44fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_023C) {
    const struct CPU_State initial_cpu = {.pc=0x6ff3, .a=0xa1, .x=0x1b, .y=0xb4, .sp=0x6d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6ff3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6ff4, .a=0xa1, .x=0x1b, .y=0xb4, .sp=0x6d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6ff3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6ff3, .value=0x60, .type=IO_READ},
        {.addr=0x6ff4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_023D) {
    const struct CPU_State initial_cpu = {.pc=0x84e3, .a=0x9b, .x=0x03, .y=0xbb, .sp=0x15, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x84e3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x84e4, .a=0x9b, .x=0x03, .y=0xbb, .sp=0x15, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x84e3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x84e3, .value=0x60, .type=IO_READ},
        {.addr=0x84e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_023E) {
    const struct CPU_State initial_cpu = {.pc=0xf692, .a=0x57, .x=0x78, .y=0xf4, .sp=0x81, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf692, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf693, .a=0x57, .x=0x78, .y=0xf4, .sp=0x81, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xf692, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf692, .value=0x60, .type=IO_READ},
        {.addr=0xf693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_023F) {
    const struct CPU_State initial_cpu = {.pc=0xbd1e, .a=0x82, .x=0xbe, .y=0x2c, .sp=0xa5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xbd1e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbd1f, .a=0x82, .x=0xbe, .y=0x2c, .sp=0xa5, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xbd1e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbd1e, .value=0x60, .type=IO_READ},
        {.addr=0xbd1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0240) {
    const struct CPU_State initial_cpu = {.pc=0x588a, .a=0xa9, .x=0x6c, .y=0xff, .sp=0x49, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x588a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x588b, .a=0xa9, .x=0x6c, .y=0xff, .sp=0x49, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x588a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x588a, .value=0x60, .type=IO_READ},
        {.addr=0x588b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0241) {
    const struct CPU_State initial_cpu = {.pc=0x649f, .a=0x5b, .x=0xb4, .y=0x4e, .sp=0x0d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x649f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x64a0, .a=0x5b, .x=0xb4, .y=0x4e, .sp=0x0d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x649f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x649f, .value=0x60, .type=IO_READ},
        {.addr=0x64a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2828, .a=0x6b, .x=0x6c, .y=0x27, .sp=0x2c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2828, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2829, .a=0x6b, .x=0x6c, .y=0x27, .sp=0x2c, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2828, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2828, .value=0x60, .type=IO_READ},
        {.addr=0x2829, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0243) {
    const struct CPU_State initial_cpu = {.pc=0x719c, .a=0x16, .x=0xf1, .y=0x3c, .sp=0x89, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x719c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x719d, .a=0x16, .x=0xf1, .y=0x3c, .sp=0x89, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x719c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x719c, .value=0x60, .type=IO_READ},
        {.addr=0x719d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0244) {
    const struct CPU_State initial_cpu = {.pc=0x8a74, .a=0x83, .x=0x25, .y=0x02, .sp=0x53, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x8a74, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8a75, .a=0x83, .x=0x25, .y=0x02, .sp=0x53, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x8a74, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8a74, .value=0x60, .type=IO_READ},
        {.addr=0x8a75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0245) {
    const struct CPU_State initial_cpu = {.pc=0x9fb9, .a=0xc8, .x=0xb8, .y=0x3a, .sp=0xab, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9fba, .a=0xc8, .x=0xb8, .y=0x3a, .sp=0xab, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9fb9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9fb9, .value=0x60, .type=IO_READ},
        {.addr=0x9fba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0246) {
    const struct CPU_State initial_cpu = {.pc=0x8c97, .a=0x9e, .x=0x0f, .y=0x5f, .sp=0xd2, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x8c97, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8c98, .a=0x9e, .x=0x0f, .y=0x5f, .sp=0xd2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8c97, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8c97, .value=0x60, .type=IO_READ},
        {.addr=0x8c98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8831, .a=0xd2, .x=0xdf, .y=0x92, .sp=0xad, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8831, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8832, .a=0xd2, .x=0xdf, .y=0x92, .sp=0xad, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8831, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8831, .value=0x60, .type=IO_READ},
        {.addr=0x8832, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0248) {
    const struct CPU_State initial_cpu = {.pc=0x4087, .a=0x4b, .x=0xa0, .y=0x53, .sp=0xe1, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4087, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4088, .a=0x4b, .x=0xa0, .y=0x53, .sp=0xe1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4087, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4087, .value=0x60, .type=IO_READ},
        {.addr=0x4088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0249) {
    const struct CPU_State initial_cpu = {.pc=0xdb80, .a=0x6e, .x=0xfe, .y=0x9e, .sp=0xf1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xdb80, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdb81, .a=0x6e, .x=0xfe, .y=0x9e, .sp=0xf1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdb80, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdb80, .value=0x60, .type=IO_READ},
        {.addr=0xdb81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_024A) {
    const struct CPU_State initial_cpu = {.pc=0x1940, .a=0x61, .x=0x8a, .y=0xf5, .sp=0xe0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1940, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1941, .a=0x61, .x=0x8a, .y=0xf5, .sp=0xe0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1940, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1940, .value=0x60, .type=IO_READ},
        {.addr=0x1941, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_024B) {
    const struct CPU_State initial_cpu = {.pc=0xef52, .a=0x38, .x=0x99, .y=0x66, .sp=0xc3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xef52, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xef53, .a=0x38, .x=0x99, .y=0x66, .sp=0xc3, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xef52, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xef52, .value=0x60, .type=IO_READ},
        {.addr=0xef53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_024C) {
    const struct CPU_State initial_cpu = {.pc=0x9e85, .a=0xa1, .x=0xb2, .y=0x80, .sp=0x6f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9e85, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9e86, .a=0xa1, .x=0xb2, .y=0x80, .sp=0x6f, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x9e85, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9e85, .value=0x60, .type=IO_READ},
        {.addr=0x9e86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_024D) {
    const struct CPU_State initial_cpu = {.pc=0x2392, .a=0x68, .x=0xdc, .y=0x36, .sp=0x3c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x2392, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2393, .a=0x68, .x=0xdc, .y=0x36, .sp=0x3c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2392, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2392, .value=0x60, .type=IO_READ},
        {.addr=0x2393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_024E) {
    const struct CPU_State initial_cpu = {.pc=0x8679, .a=0x00, .x=0x35, .y=0x13, .sp=0x9e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8679, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x867a, .a=0x00, .x=0x35, .y=0x13, .sp=0x9e, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x8679, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8679, .value=0x60, .type=IO_READ},
        {.addr=0x867a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_024F) {
    const struct CPU_State initial_cpu = {.pc=0xc15b, .a=0x60, .x=0x88, .y=0xff, .sp=0x4e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xc15b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc15c, .a=0x60, .x=0x88, .y=0xff, .sp=0x4e, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xc15b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc15b, .value=0x60, .type=IO_READ},
        {.addr=0xc15c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0250) {
    const struct CPU_State initial_cpu = {.pc=0xd792, .a=0x9f, .x=0x72, .y=0xe0, .sp=0x0e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd792, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd793, .a=0x9f, .x=0x72, .y=0xe0, .sp=0x0e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd792, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd792, .value=0x60, .type=IO_READ},
        {.addr=0xd793, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0251) {
    const struct CPU_State initial_cpu = {.pc=0xe407, .a=0x0f, .x=0x6d, .y=0x33, .sp=0xf4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe407, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe408, .a=0x0f, .x=0x6d, .y=0x33, .sp=0xf4, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xe407, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe407, .value=0x60, .type=IO_READ},
        {.addr=0xe408, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0252) {
    const struct CPU_State initial_cpu = {.pc=0xb414, .a=0xf8, .x=0x15, .y=0xc0, .sp=0xc7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb414, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb415, .a=0xf8, .x=0x15, .y=0xc0, .sp=0xc7, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xb414, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb414, .value=0x60, .type=IO_READ},
        {.addr=0xb415, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0253) {
    const struct CPU_State initial_cpu = {.pc=0xb070, .a=0xa0, .x=0x21, .y=0x87, .sp=0x14, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb070, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb071, .a=0xa0, .x=0x21, .y=0x87, .sp=0x14, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb070, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb070, .value=0x60, .type=IO_READ},
        {.addr=0xb071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0254) {
    const struct CPU_State initial_cpu = {.pc=0x3993, .a=0x80, .x=0x4d, .y=0x09, .sp=0x1f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3993, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3994, .a=0x80, .x=0x4d, .y=0x09, .sp=0x1f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3993, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3993, .value=0x60, .type=IO_READ},
        {.addr=0x3994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0255) {
    const struct CPU_State initial_cpu = {.pc=0xb5fd, .a=0x64, .x=0x8a, .y=0xf1, .sp=0x85, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb5fd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb5fe, .a=0x64, .x=0x8a, .y=0xf1, .sp=0x85, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb5fd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb5fd, .value=0x60, .type=IO_READ},
        {.addr=0xb5fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0256) {
    const struct CPU_State initial_cpu = {.pc=0x0380, .a=0xf6, .x=0x8e, .y=0x56, .sp=0x0e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0380, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0381, .a=0xf6, .x=0x8e, .y=0x56, .sp=0x0e, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0380, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0380, .value=0x60, .type=IO_READ},
        {.addr=0x0381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0257) {
    const struct CPU_State initial_cpu = {.pc=0xb699, .a=0xac, .x=0x69, .y=0x90, .sp=0xee, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb699, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb69a, .a=0xac, .x=0x69, .y=0x90, .sp=0xee, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb699, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb699, .value=0x60, .type=IO_READ},
        {.addr=0xb69a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0258) {
    const struct CPU_State initial_cpu = {.pc=0x2726, .a=0x10, .x=0xeb, .y=0xc7, .sp=0xb1, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2726, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2727, .a=0x10, .x=0xeb, .y=0xc7, .sp=0xb1, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x2726, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2726, .value=0x60, .type=IO_READ},
        {.addr=0x2727, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0259) {
    const struct CPU_State initial_cpu = {.pc=0x4ac9, .a=0x8e, .x=0x07, .y=0x2d, .sp=0xa5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4ac9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4aca, .a=0x8e, .x=0x07, .y=0x2d, .sp=0xa5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4ac9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4ac9, .value=0x60, .type=IO_READ},
        {.addr=0x4aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_025A) {
    const struct CPU_State initial_cpu = {.pc=0x0611, .a=0x7f, .x=0xe2, .y=0xe8, .sp=0xe0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0611, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0612, .a=0x7f, .x=0xe2, .y=0xe8, .sp=0xe0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0611, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0611, .value=0x60, .type=IO_READ},
        {.addr=0x0612, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_025B) {
    const struct CPU_State initial_cpu = {.pc=0xa3b9, .a=0xc1, .x=0x63, .y=0x64, .sp=0x4a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa3b9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa3ba, .a=0xc1, .x=0x63, .y=0x64, .sp=0x4a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xa3b9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa3b9, .value=0x60, .type=IO_READ},
        {.addr=0xa3ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_025C) {
    const struct CPU_State initial_cpu = {.pc=0xeae8, .a=0xf7, .x=0x1f, .y=0x37, .sp=0xb6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xeae8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeae9, .a=0xf7, .x=0x1f, .y=0x37, .sp=0xb6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xeae8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeae8, .value=0x60, .type=IO_READ},
        {.addr=0xeae9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_025D) {
    const struct CPU_State initial_cpu = {.pc=0x03e7, .a=0xbe, .x=0x60, .y=0xb5, .sp=0x22, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x03e7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x03e8, .a=0xbe, .x=0x60, .y=0xb5, .sp=0x22, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x03e7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x03e7, .value=0x60, .type=IO_READ},
        {.addr=0x03e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_025E) {
    const struct CPU_State initial_cpu = {.pc=0x9e0a, .a=0x51, .x=0x8a, .y=0x54, .sp=0xe6, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e0a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9e0b, .a=0x51, .x=0x8a, .y=0x54, .sp=0xe6, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x9e0a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9e0a, .value=0x60, .type=IO_READ},
        {.addr=0x9e0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_025F) {
    const struct CPU_State initial_cpu = {.pc=0xd7a1, .a=0x48, .x=0x5d, .y=0x47, .sp=0x8c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd7a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd7a2, .a=0x48, .x=0x5d, .y=0x47, .sp=0x8c, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xd7a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd7a1, .value=0x60, .type=IO_READ},
        {.addr=0xd7a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0260) {
    const struct CPU_State initial_cpu = {.pc=0x03f3, .a=0x64, .x=0xe6, .y=0x2e, .sp=0xa4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x03f3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x03f4, .a=0x64, .x=0xe6, .y=0x2e, .sp=0xa4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x03f3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x03f3, .value=0x60, .type=IO_READ},
        {.addr=0x03f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0261) {
    const struct CPU_State initial_cpu = {.pc=0x9f5c, .a=0x77, .x=0x02, .y=0x3b, .sp=0xa0, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x9f5c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9f5d, .a=0x77, .x=0x02, .y=0x3b, .sp=0xa0, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9f5c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9f5c, .value=0x60, .type=IO_READ},
        {.addr=0x9f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0262) {
    const struct CPU_State initial_cpu = {.pc=0xe245, .a=0xec, .x=0x90, .y=0x86, .sp=0x88, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xe245, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe246, .a=0xec, .x=0x90, .y=0x86, .sp=0x88, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xe245, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe245, .value=0x60, .type=IO_READ},
        {.addr=0xe246, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0263) {
    const struct CPU_State initial_cpu = {.pc=0xb4fb, .a=0x45, .x=0xb6, .y=0x1a, .sp=0xc7, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb4fb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb4fc, .a=0x45, .x=0xb6, .y=0x1a, .sp=0xc7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb4fb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb4fb, .value=0x60, .type=IO_READ},
        {.addr=0xb4fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0264) {
    const struct CPU_State initial_cpu = {.pc=0x1410, .a=0x11, .x=0x97, .y=0xf5, .sp=0x07, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1410, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1411, .a=0x11, .x=0x97, .y=0xf5, .sp=0x07, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x1410, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1410, .value=0x60, .type=IO_READ},
        {.addr=0x1411, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0265) {
    const struct CPU_State initial_cpu = {.pc=0x66d1, .a=0x7b, .x=0xea, .y=0x1d, .sp=0xd6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x66d1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x66d2, .a=0x7b, .x=0xea, .y=0x1d, .sp=0xd6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x66d1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x66d1, .value=0x60, .type=IO_READ},
        {.addr=0x66d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0266) {
    const struct CPU_State initial_cpu = {.pc=0x51b9, .a=0xba, .x=0x23, .y=0xee, .sp=0xfa, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x51b9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x51ba, .a=0xba, .x=0x23, .y=0xee, .sp=0xfa, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x51b9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x51b9, .value=0x60, .type=IO_READ},
        {.addr=0x51ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0267) {
    const struct CPU_State initial_cpu = {.pc=0x8d5e, .a=0x66, .x=0x01, .y=0xa8, .sp=0x22, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8d5f, .a=0x66, .x=0x01, .y=0xa8, .sp=0x22, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x8d5e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8d5e, .value=0x60, .type=IO_READ},
        {.addr=0x8d5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0268) {
    const struct CPU_State initial_cpu = {.pc=0x67eb, .a=0xe4, .x=0xcc, .y=0xfd, .sp=0xed, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x67eb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x67ec, .a=0xe4, .x=0xcc, .y=0xfd, .sp=0xed, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x67eb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x67eb, .value=0x60, .type=IO_READ},
        {.addr=0x67ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0269) {
    const struct CPU_State initial_cpu = {.pc=0xf7e1, .a=0xcc, .x=0x1c, .y=0x62, .sp=0xe6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf7e2, .a=0xcc, .x=0x1c, .y=0x62, .sp=0xe6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf7e1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf7e1, .value=0x60, .type=IO_READ},
        {.addr=0xf7e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_026A) {
    const struct CPU_State initial_cpu = {.pc=0x912d, .a=0x7d, .x=0x39, .y=0xe8, .sp=0x7d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x912d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x912e, .a=0x7d, .x=0x39, .y=0xe8, .sp=0x7d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x912d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x912d, .value=0x60, .type=IO_READ},
        {.addr=0x912e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_026B) {
    const struct CPU_State initial_cpu = {.pc=0x1232, .a=0xc3, .x=0x2d, .y=0x48, .sp=0x2e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x1232, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1233, .a=0xc3, .x=0x2d, .y=0x48, .sp=0x2e, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x1232, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1232, .value=0x60, .type=IO_READ},
        {.addr=0x1233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_026C) {
    const struct CPU_State initial_cpu = {.pc=0xbc2e, .a=0x4c, .x=0xea, .y=0xd3, .sp=0xc3, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xbc2e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbc2f, .a=0x4c, .x=0xea, .y=0xd3, .sp=0xc3, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xbc2e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbc2e, .value=0x60, .type=IO_READ},
        {.addr=0xbc2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_026D) {
    const struct CPU_State initial_cpu = {.pc=0xa911, .a=0xb3, .x=0x40, .y=0x16, .sp=0xff, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xa911, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa912, .a=0xb3, .x=0x40, .y=0x16, .sp=0xff, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xa911, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa911, .value=0x60, .type=IO_READ},
        {.addr=0xa912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_026E) {
    const struct CPU_State initial_cpu = {.pc=0x293a, .a=0xfc, .x=0xed, .y=0xc1, .sp=0x1f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x293a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x293b, .a=0xfc, .x=0xed, .y=0xc1, .sp=0x1f, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x293a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x293a, .value=0x60, .type=IO_READ},
        {.addr=0x293b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_026F) {
    const struct CPU_State initial_cpu = {.pc=0x1a2e, .a=0x47, .x=0x2f, .y=0x31, .sp=0xbe, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x1a2e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1a2f, .a=0x47, .x=0x2f, .y=0x31, .sp=0xbe, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1a2e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1a2e, .value=0x60, .type=IO_READ},
        {.addr=0x1a2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0270) {
    const struct CPU_State initial_cpu = {.pc=0xf11a, .a=0x8a, .x=0x4e, .y=0x8c, .sp=0x53, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf11a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf11b, .a=0x8a, .x=0x4e, .y=0x8c, .sp=0x53, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xf11a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf11a, .value=0x60, .type=IO_READ},
        {.addr=0xf11b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0271) {
    const struct CPU_State initial_cpu = {.pc=0xa43b, .a=0xf2, .x=0xd6, .y=0x64, .sp=0x8d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa43b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa43c, .a=0xf2, .x=0xd6, .y=0x64, .sp=0x8d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa43b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa43b, .value=0x60, .type=IO_READ},
        {.addr=0xa43c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0272) {
    const struct CPU_State initial_cpu = {.pc=0x2f32, .a=0xde, .x=0x31, .y=0xb8, .sp=0x6e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x2f32, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2f33, .a=0xde, .x=0x31, .y=0xb8, .sp=0x6e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x2f32, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2f32, .value=0x60, .type=IO_READ},
        {.addr=0x2f33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0273) {
    const struct CPU_State initial_cpu = {.pc=0x5a25, .a=0xc9, .x=0x6d, .y=0x0a, .sp=0x49, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5a25, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5a26, .a=0xc9, .x=0x6d, .y=0x0a, .sp=0x49, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5a25, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5a25, .value=0x60, .type=IO_READ},
        {.addr=0x5a26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0274) {
    const struct CPU_State initial_cpu = {.pc=0x0296, .a=0xbd, .x=0x7f, .y=0xdd, .sp=0x29, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0296, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0297, .a=0xbd, .x=0x7f, .y=0xdd, .sp=0x29, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0296, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0296, .value=0x60, .type=IO_READ},
        {.addr=0x0297, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0275) {
    const struct CPU_State initial_cpu = {.pc=0x2b46, .a=0x98, .x=0x04, .y=0x09, .sp=0x71, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2b46, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2b47, .a=0x98, .x=0x04, .y=0x09, .sp=0x71, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x2b46, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2b46, .value=0x60, .type=IO_READ},
        {.addr=0x2b47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0276) {
    const struct CPU_State initial_cpu = {.pc=0x8bfd, .a=0x49, .x=0x57, .y=0x70, .sp=0x45, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8bfd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8bfe, .a=0x49, .x=0x57, .y=0x70, .sp=0x45, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x8bfd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8bfd, .value=0x60, .type=IO_READ},
        {.addr=0x8bfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0277) {
    const struct CPU_State initial_cpu = {.pc=0x1668, .a=0x14, .x=0x6e, .y=0xab, .sp=0xa9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1668, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1669, .a=0x14, .x=0x6e, .y=0xab, .sp=0xa9, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x1668, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1668, .value=0x60, .type=IO_READ},
        {.addr=0x1669, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0278) {
    const struct CPU_State initial_cpu = {.pc=0xc44e, .a=0xcd, .x=0xc4, .y=0xa3, .sp=0x90, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc44e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc44f, .a=0xcd, .x=0xc4, .y=0xa3, .sp=0x90, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc44e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc44e, .value=0x60, .type=IO_READ},
        {.addr=0xc44f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0279) {
    const struct CPU_State initial_cpu = {.pc=0xbfd2, .a=0x9c, .x=0x45, .y=0x07, .sp=0x1e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbfd3, .a=0x9c, .x=0x45, .y=0x07, .sp=0x1e, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xbfd2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbfd2, .value=0x60, .type=IO_READ},
        {.addr=0xbfd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_027A) {
    const struct CPU_State initial_cpu = {.pc=0x1b01, .a=0x8d, .x=0x23, .y=0x68, .sp=0x90, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1b01, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1b02, .a=0x8d, .x=0x23, .y=0x68, .sp=0x90, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x1b01, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1b01, .value=0x60, .type=IO_READ},
        {.addr=0x1b02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_027B) {
    const struct CPU_State initial_cpu = {.pc=0x3244, .a=0x49, .x=0x3d, .y=0x37, .sp=0xb6, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x3244, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3245, .a=0x49, .x=0x3d, .y=0x37, .sp=0xb6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3244, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3244, .value=0x60, .type=IO_READ},
        {.addr=0x3245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_027C) {
    const struct CPU_State initial_cpu = {.pc=0xdcfd, .a=0x62, .x=0x41, .y=0x24, .sp=0xf5, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdcfd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdcfe, .a=0x62, .x=0x41, .y=0x24, .sp=0xf5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xdcfd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdcfd, .value=0x60, .type=IO_READ},
        {.addr=0xdcfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_027D) {
    const struct CPU_State initial_cpu = {.pc=0x149a, .a=0x38, .x=0xcd, .y=0xbb, .sp=0x29, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x149a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x149b, .a=0x38, .x=0xcd, .y=0xbb, .sp=0x29, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x149a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x149a, .value=0x60, .type=IO_READ},
        {.addr=0x149b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_027E) {
    const struct CPU_State initial_cpu = {.pc=0x34ac, .a=0x88, .x=0x55, .y=0x65, .sp=0x94, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x34ac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x34ad, .a=0x88, .x=0x55, .y=0x65, .sp=0x94, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x34ac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x34ac, .value=0x60, .type=IO_READ},
        {.addr=0x34ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_027F) {
    const struct CPU_State initial_cpu = {.pc=0x105c, .a=0x81, .x=0x9a, .y=0x7c, .sp=0xa4, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x105c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x105d, .a=0x81, .x=0x9a, .y=0x7c, .sp=0xa4, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x105c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x105c, .value=0x60, .type=IO_READ},
        {.addr=0x105d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0280) {
    const struct CPU_State initial_cpu = {.pc=0x1503, .a=0x98, .x=0xc7, .y=0x47, .sp=0x91, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x1503, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1504, .a=0x98, .x=0xc7, .y=0x47, .sp=0x91, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1503, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1503, .value=0x60, .type=IO_READ},
        {.addr=0x1504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0281) {
    const struct CPU_State initial_cpu = {.pc=0x2d65, .a=0x4b, .x=0xaf, .y=0xca, .sp=0x1a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2d65, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2d66, .a=0x4b, .x=0xaf, .y=0xca, .sp=0x1a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x2d65, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2d65, .value=0x60, .type=IO_READ},
        {.addr=0x2d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0282) {
    const struct CPU_State initial_cpu = {.pc=0x852d, .a=0x35, .x=0x20, .y=0xd0, .sp=0x07, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x852d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x852e, .a=0x35, .x=0x20, .y=0xd0, .sp=0x07, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x852d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x852d, .value=0x60, .type=IO_READ},
        {.addr=0x852e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0283) {
    const struct CPU_State initial_cpu = {.pc=0xf087, .a=0x0b, .x=0xf6, .y=0x09, .sp=0xaa, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf087, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf088, .a=0x0b, .x=0xf6, .y=0x09, .sp=0xaa, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xf087, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf087, .value=0x60, .type=IO_READ},
        {.addr=0xf088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8fc6, .a=0x6f, .x=0x1a, .y=0xd4, .sp=0x39, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8fc7, .a=0x6f, .x=0x1a, .y=0xd4, .sp=0x39, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x8fc6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8fc6, .value=0x60, .type=IO_READ},
        {.addr=0x8fc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0285) {
    const struct CPU_State initial_cpu = {.pc=0x49b6, .a=0x5d, .x=0x61, .y=0x76, .sp=0xad, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x49b6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x49b7, .a=0x5d, .x=0x61, .y=0x76, .sp=0xad, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x49b6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x49b6, .value=0x60, .type=IO_READ},
        {.addr=0x49b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0286) {
    const struct CPU_State initial_cpu = {.pc=0x629b, .a=0x4c, .x=0x0c, .y=0xb1, .sp=0x6b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x629b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x629c, .a=0x4c, .x=0x0c, .y=0xb1, .sp=0x6b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x629b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x629b, .value=0x60, .type=IO_READ},
        {.addr=0x629c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0288) {
    const struct CPU_State initial_cpu = {.pc=0xd28b, .a=0x3f, .x=0x7b, .y=0xf2, .sp=0xe4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd28b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd28c, .a=0x3f, .x=0x7b, .y=0xf2, .sp=0xe4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd28b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd28b, .value=0x60, .type=IO_READ},
        {.addr=0xd28c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0289) {
    const struct CPU_State initial_cpu = {.pc=0x2302, .a=0xa6, .x=0x47, .y=0x19, .sp=0x2b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2302, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2303, .a=0xa6, .x=0x47, .y=0x19, .sp=0x2b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2302, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2302, .value=0x60, .type=IO_READ},
        {.addr=0x2303, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_028A) {
    const struct CPU_State initial_cpu = {.pc=0x93c5, .a=0xa2, .x=0xa2, .y=0x57, .sp=0xd2, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x93c5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x93c6, .a=0xa2, .x=0xa2, .y=0x57, .sp=0xd2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x93c5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x93c5, .value=0x60, .type=IO_READ},
        {.addr=0x93c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_028B) {
    const struct CPU_State initial_cpu = {.pc=0x33fa, .a=0xab, .x=0x6b, .y=0x04, .sp=0xf6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x33fa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x33fb, .a=0xab, .x=0x6b, .y=0x04, .sp=0xf6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x33fa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x33fa, .value=0x60, .type=IO_READ},
        {.addr=0x33fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_028C) {
    const struct CPU_State initial_cpu = {.pc=0x2ded, .a=0x61, .x=0x8d, .y=0xa6, .sp=0x02, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2ded, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2dee, .a=0x61, .x=0x8d, .y=0xa6, .sp=0x02, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2ded, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2ded, .value=0x60, .type=IO_READ},
        {.addr=0x2dee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_028D) {
    const struct CPU_State initial_cpu = {.pc=0x459b, .a=0x8a, .x=0xfd, .y=0x62, .sp=0x87, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x459b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x459c, .a=0x8a, .x=0xfd, .y=0x62, .sp=0x87, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x459b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x459b, .value=0x60, .type=IO_READ},
        {.addr=0x459c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_028E) {
    const struct CPU_State initial_cpu = {.pc=0x9cf4, .a=0xc2, .x=0x41, .y=0x15, .sp=0x2b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9cf5, .a=0xc2, .x=0x41, .y=0x15, .sp=0x2b, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x9cf4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9cf4, .value=0x60, .type=IO_READ},
        {.addr=0x9cf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_028F) {
    const struct CPU_State initial_cpu = {.pc=0x0f35, .a=0xb7, .x=0x76, .y=0xb4, .sp=0x72, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0f35, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0f36, .a=0xb7, .x=0x76, .y=0xb4, .sp=0x72, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0f35, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0f35, .value=0x60, .type=IO_READ},
        {.addr=0x0f36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0290) {
    const struct CPU_State initial_cpu = {.pc=0xcfec, .a=0x47, .x=0xce, .y=0x10, .sp=0x4a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xcfec, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcfed, .a=0x47, .x=0xce, .y=0x10, .sp=0x4a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xcfec, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcfec, .value=0x60, .type=IO_READ},
        {.addr=0xcfed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0291) {
    const struct CPU_State initial_cpu = {.pc=0xf21a, .a=0x2a, .x=0x4b, .y=0x0e, .sp=0x08, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf21a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf21b, .a=0x2a, .x=0x4b, .y=0x0e, .sp=0x08, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf21a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf21a, .value=0x60, .type=IO_READ},
        {.addr=0xf21b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0292) {
    const struct CPU_State initial_cpu = {.pc=0x9aee, .a=0x91, .x=0xcd, .y=0xf8, .sp=0xd3, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9aee, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9aef, .a=0x91, .x=0xcd, .y=0xf8, .sp=0xd3, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x9aee, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9aee, .value=0x60, .type=IO_READ},
        {.addr=0x9aef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0293) {
    const struct CPU_State initial_cpu = {.pc=0x00c0, .a=0x9d, .x=0x8f, .y=0xe6, .sp=0x4f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x00c1, .a=0x9d, .x=0x8f, .y=0xe6, .sp=0x4f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x00c0, .value=0x60, .type=IO_READ},
        {.addr=0x00c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0294) {
    const struct CPU_State initial_cpu = {.pc=0xe2f4, .a=0xb7, .x=0xd9, .y=0x64, .sp=0xd0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe2f5, .a=0xb7, .x=0xd9, .y=0x64, .sp=0xd0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe2f4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe2f4, .value=0x60, .type=IO_READ},
        {.addr=0xe2f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0295) {
    const struct CPU_State initial_cpu = {.pc=0x5125, .a=0x61, .x=0xe1, .y=0x06, .sp=0x8a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5125, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5126, .a=0x61, .x=0xe1, .y=0x06, .sp=0x8a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5125, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5125, .value=0x60, .type=IO_READ},
        {.addr=0x5126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0296) {
    const struct CPU_State initial_cpu = {.pc=0xeafc, .a=0xe1, .x=0x04, .y=0x6b, .sp=0x90, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xeafc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeafd, .a=0xe1, .x=0x04, .y=0x6b, .sp=0x90, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xeafc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeafc, .value=0x60, .type=IO_READ},
        {.addr=0xeafd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0297) {
    const struct CPU_State initial_cpu = {.pc=0x2d94, .a=0xf1, .x=0xd1, .y=0xc8, .sp=0x3f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2d94, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2d95, .a=0xf1, .x=0xd1, .y=0xc8, .sp=0x3f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2d94, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2d94, .value=0x60, .type=IO_READ},
        {.addr=0x2d95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0298) {
    const struct CPU_State initial_cpu = {.pc=0x03db, .a=0x32, .x=0xa0, .y=0xa4, .sp=0x76, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x03db, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x03dc, .a=0x32, .x=0xa0, .y=0xa4, .sp=0x76, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x03db, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x03db, .value=0x60, .type=IO_READ},
        {.addr=0x03dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0299) {
    const struct CPU_State initial_cpu = {.pc=0x32ce, .a=0x27, .x=0x4d, .y=0x6a, .sp=0x51, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x32ce, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x32cf, .a=0x27, .x=0x4d, .y=0x6a, .sp=0x51, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x32ce, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x32ce, .value=0x60, .type=IO_READ},
        {.addr=0x32cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_029A) {
    const struct CPU_State initial_cpu = {.pc=0x6f95, .a=0xbb, .x=0x37, .y=0x60, .sp=0xa4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f95, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6f96, .a=0xbb, .x=0x37, .y=0x60, .sp=0xa4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6f95, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6f95, .value=0x60, .type=IO_READ},
        {.addr=0x6f96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_029B) {
    const struct CPU_State initial_cpu = {.pc=0x55b2, .a=0x3f, .x=0xf3, .y=0x8c, .sp=0xa7, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x55b2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x55b3, .a=0x3f, .x=0xf3, .y=0x8c, .sp=0xa7, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x55b2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x55b2, .value=0x60, .type=IO_READ},
        {.addr=0x55b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9563, .a=0xb8, .x=0x5e, .y=0x78, .sp=0xaa, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9563, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9564, .a=0xb8, .x=0x5e, .y=0x78, .sp=0xaa, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x9563, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9563, .value=0x60, .type=IO_READ},
        {.addr=0x9564, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_029D) {
    const struct CPU_State initial_cpu = {.pc=0x3919, .a=0x68, .x=0xe6, .y=0xe1, .sp=0x96, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3919, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x391a, .a=0x68, .x=0xe6, .y=0xe1, .sp=0x96, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3919, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3919, .value=0x60, .type=IO_READ},
        {.addr=0x391a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_029E) {
    const struct CPU_State initial_cpu = {.pc=0x4371, .a=0xcc, .x=0xc6, .y=0x44, .sp=0x5a, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4371, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4372, .a=0xcc, .x=0xc6, .y=0x44, .sp=0x5a, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x4371, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4371, .value=0x60, .type=IO_READ},
        {.addr=0x4372, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_029F) {
    const struct CPU_State initial_cpu = {.pc=0x582b, .a=0xca, .x=0x4e, .y=0x2b, .sp=0xef, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x582b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x582c, .a=0xca, .x=0x4e, .y=0x2b, .sp=0xef, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x582b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x582b, .value=0x60, .type=IO_READ},
        {.addr=0x582c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xea43, .a=0xab, .x=0x0d, .y=0x54, .sp=0xc4, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xea43, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xea44, .a=0xab, .x=0x0d, .y=0x54, .sp=0xc4, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xea43, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xea43, .value=0x60, .type=IO_READ},
        {.addr=0xea44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x2e7a, .a=0x99, .x=0x8d, .y=0xe6, .sp=0x63, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2e7a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2e7b, .a=0x99, .x=0x8d, .y=0xe6, .sp=0x63, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2e7a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2e7a, .value=0x60, .type=IO_READ},
        {.addr=0x2e7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x3774, .a=0xb3, .x=0x2f, .y=0xa1, .sp=0x4b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x3774, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3775, .a=0xb3, .x=0x2f, .y=0xa1, .sp=0x4b, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3774, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3774, .value=0x60, .type=IO_READ},
        {.addr=0x3775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x7f1f, .a=0x8e, .x=0x65, .y=0xda, .sp=0xa0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7f1f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7f20, .a=0x8e, .x=0x65, .y=0xda, .sp=0xa0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x7f1f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7f1f, .value=0x60, .type=IO_READ},
        {.addr=0x7f20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xdff5, .a=0xcd, .x=0x86, .y=0x53, .sp=0xc2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xdff5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdff6, .a=0xcd, .x=0x86, .y=0x53, .sp=0xc2, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xdff5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdff5, .value=0x60, .type=IO_READ},
        {.addr=0xdff6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x1741, .a=0xbe, .x=0x4f, .y=0x44, .sp=0xf6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1741, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1742, .a=0xbe, .x=0x4f, .y=0x44, .sp=0xf6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1741, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1741, .value=0x60, .type=IO_READ},
        {.addr=0x1742, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x9a67, .a=0xef, .x=0x83, .y=0xeb, .sp=0x6a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x9a67, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9a68, .a=0xef, .x=0x83, .y=0xeb, .sp=0x6a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x9a67, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9a67, .value=0x60, .type=IO_READ},
        {.addr=0x9a68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x8e5e, .a=0xb8, .x=0x1c, .y=0x97, .sp=0x07, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8e5e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8e5f, .a=0xb8, .x=0x1c, .y=0x97, .sp=0x07, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x8e5e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8e5e, .value=0x60, .type=IO_READ},
        {.addr=0x8e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x9606, .a=0xb1, .x=0xbb, .y=0x65, .sp=0xd6, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9606, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9607, .a=0xb1, .x=0xbb, .y=0x65, .sp=0xd6, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x9606, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9606, .value=0x60, .type=IO_READ},
        {.addr=0x9607, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x07f0, .a=0xd3, .x=0x06, .y=0x4d, .sp=0x80, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x07f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x07f1, .a=0xd3, .x=0x06, .y=0x4d, .sp=0x80, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x07f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x07f0, .value=0x60, .type=IO_READ},
        {.addr=0x07f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xf82e, .a=0x26, .x=0xa2, .y=0x24, .sp=0x01, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf82e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf82f, .a=0x26, .x=0xa2, .y=0x24, .sp=0x01, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf82e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf82e, .value=0x60, .type=IO_READ},
        {.addr=0xf82f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x9666, .a=0x42, .x=0x48, .y=0xb6, .sp=0xc1, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9666, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9667, .a=0x42, .x=0x48, .y=0xb6, .sp=0xc1, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9666, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9666, .value=0x60, .type=IO_READ},
        {.addr=0x9667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x0ebb, .a=0x07, .x=0x31, .y=0xbe, .sp=0x7f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0ebb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0ebc, .a=0x07, .x=0x31, .y=0xbe, .sp=0x7f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0ebb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0ebb, .value=0x60, .type=IO_READ},
        {.addr=0x0ebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x75f5, .a=0xcb, .x=0xdc, .y=0x4f, .sp=0xb0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x75f5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x75f6, .a=0xcb, .x=0xdc, .y=0x4f, .sp=0xb0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x75f5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x75f5, .value=0x60, .type=IO_READ},
        {.addr=0x75f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xc3d3, .a=0xa4, .x=0x84, .y=0x62, .sp=0x0f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3d4, .a=0xa4, .x=0x84, .y=0x62, .sp=0x0f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xc3d3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3d3, .value=0x60, .type=IO_READ},
        {.addr=0xc3d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x7f44, .a=0x7b, .x=0x1a, .y=0xe3, .sp=0xe4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7f44, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7f45, .a=0x7b, .x=0x1a, .y=0xe3, .sp=0xe4, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x7f44, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7f44, .value=0x60, .type=IO_READ},
        {.addr=0x7f45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xd321, .a=0xb5, .x=0x5b, .y=0x28, .sp=0xc8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xd321, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd322, .a=0xb5, .x=0x5b, .y=0x28, .sp=0xc8, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xd321, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd321, .value=0x60, .type=IO_READ},
        {.addr=0xd322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x22a0, .a=0xab, .x=0x25, .y=0x5f, .sp=0xc0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x22a0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x22a1, .a=0xab, .x=0x25, .y=0x5f, .sp=0xc0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x22a0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x22a0, .value=0x60, .type=IO_READ},
        {.addr=0x22a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x5eea, .a=0x1a, .x=0x7f, .y=0x66, .sp=0xbc, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x5eea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5eeb, .a=0x1a, .x=0x7f, .y=0x66, .sp=0xbc, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5eea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5eea, .value=0x60, .type=IO_READ},
        {.addr=0x5eeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x2652, .a=0x85, .x=0x12, .y=0xaa, .sp=0x70, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2652, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2653, .a=0x85, .x=0x12, .y=0xaa, .sp=0x70, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2652, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2652, .value=0x60, .type=IO_READ},
        {.addr=0x2653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x369f, .a=0xaa, .x=0xa5, .y=0xb0, .sp=0xdc, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x369f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x36a0, .a=0xaa, .x=0xa5, .y=0xb0, .sp=0xdc, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x369f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x369f, .value=0x60, .type=IO_READ},
        {.addr=0x36a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xc3bb, .a=0x9a, .x=0x68, .y=0x01, .sp=0x57, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xc3bb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3bc, .a=0x9a, .x=0x68, .y=0x01, .sp=0x57, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xc3bb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3bb, .value=0x60, .type=IO_READ},
        {.addr=0xc3bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x443e, .a=0xe7, .x=0xf0, .y=0x33, .sp=0xde, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x443e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x443f, .a=0xe7, .x=0xf0, .y=0x33, .sp=0xde, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x443e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x443e, .value=0x60, .type=IO_READ},
        {.addr=0x443f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xfa7f, .a=0x19, .x=0x19, .y=0x42, .sp=0xd3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xfa7f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfa80, .a=0x19, .x=0x19, .y=0x42, .sp=0xd3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xfa7f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfa7f, .value=0x60, .type=IO_READ},
        {.addr=0xfa80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xdc33, .a=0x59, .x=0xb0, .y=0xfa, .sp=0x51, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xdc33, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdc34, .a=0x59, .x=0xb0, .y=0xfa, .sp=0x51, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xdc33, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdc33, .value=0x60, .type=IO_READ},
        {.addr=0xdc34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x39d8, .a=0x3b, .x=0xee, .y=0xf6, .sp=0x31, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x39d8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x39d9, .a=0x3b, .x=0xee, .y=0xf6, .sp=0x31, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x39d8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x39d8, .value=0x60, .type=IO_READ},
        {.addr=0x39d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x73c5, .a=0xc6, .x=0x03, .y=0xc6, .sp=0x6f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x73c5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x73c6, .a=0xc6, .x=0x03, .y=0xc6, .sp=0x6f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x73c5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x73c5, .value=0x60, .type=IO_READ},
        {.addr=0x73c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x3297, .a=0x5b, .x=0x5e, .y=0x8c, .sp=0xed, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3297, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3298, .a=0x5b, .x=0x5e, .y=0x8c, .sp=0xed, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x3297, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3297, .value=0x60, .type=IO_READ},
        {.addr=0x3298, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x532a, .a=0xba, .x=0x13, .y=0xc3, .sp=0x08, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x532a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x532b, .a=0xba, .x=0x13, .y=0xc3, .sp=0x08, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x532a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x532a, .value=0x60, .type=IO_READ},
        {.addr=0x532b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x963c, .a=0x1b, .x=0x13, .y=0x7d, .sp=0xe1, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x963c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x963d, .a=0x1b, .x=0x13, .y=0x7d, .sp=0xe1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x963c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x963c, .value=0x60, .type=IO_READ},
        {.addr=0x963d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x11e1, .a=0xd9, .x=0xbb, .y=0x9a, .sp=0x04, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x11e1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x11e2, .a=0xd9, .x=0xbb, .y=0x9a, .sp=0x04, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x11e1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x11e1, .value=0x60, .type=IO_READ},
        {.addr=0x11e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x171a, .a=0x9c, .x=0x9c, .y=0xa6, .sp=0x85, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x171a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x171b, .a=0x9c, .x=0x9c, .y=0xa6, .sp=0x85, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x171a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x171a, .value=0x60, .type=IO_READ},
        {.addr=0x171b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x7a40, .a=0xda, .x=0xdf, .y=0xa4, .sp=0x3e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7a40, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7a41, .a=0xda, .x=0xdf, .y=0xa4, .sp=0x3e, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x7a40, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7a40, .value=0x60, .type=IO_READ},
        {.addr=0x7a41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x3557, .a=0x2a, .x=0x3e, .y=0x97, .sp=0x58, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3557, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3558, .a=0x2a, .x=0x3e, .y=0x97, .sp=0x58, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3557, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3557, .value=0x60, .type=IO_READ},
        {.addr=0x3558, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xf0e8, .a=0x21, .x=0x06, .y=0x64, .sp=0x6c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf0e9, .a=0x21, .x=0x06, .y=0x64, .sp=0x6c, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xf0e8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf0e8, .value=0x60, .type=IO_READ},
        {.addr=0xf0e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x1fdb, .a=0xd1, .x=0x51, .y=0x5a, .sp=0xba, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x1fdb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1fdc, .a=0xd1, .x=0x51, .y=0x5a, .sp=0xba, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1fdb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1fdb, .value=0x60, .type=IO_READ},
        {.addr=0x1fdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xdf6b, .a=0x2b, .x=0x12, .y=0x0b, .sp=0x4d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdf6c, .a=0x2b, .x=0x12, .y=0x0b, .sp=0x4d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xdf6b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdf6b, .value=0x60, .type=IO_READ},
        {.addr=0xdf6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x4335, .a=0xb9, .x=0x90, .y=0x2a, .sp=0x35, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4335, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4336, .a=0xb9, .x=0x90, .y=0x2a, .sp=0x35, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4335, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4335, .value=0x60, .type=IO_READ},
        {.addr=0x4336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xc692, .a=0xbd, .x=0x63, .y=0x4e, .sp=0x57, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc692, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc693, .a=0xbd, .x=0x63, .y=0x4e, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc692, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc692, .value=0x60, .type=IO_READ},
        {.addr=0xc693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd596, .a=0xa7, .x=0x2c, .y=0xec, .sp=0x9b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd596, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd597, .a=0xa7, .x=0x2c, .y=0xec, .sp=0x9b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xd596, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd596, .value=0x60, .type=IO_READ},
        {.addr=0xd597, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xac2d, .a=0x72, .x=0xeb, .y=0xd5, .sp=0xc9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xac2d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xac2e, .a=0x72, .x=0xeb, .y=0xd5, .sp=0xc9, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xac2d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xac2d, .value=0x60, .type=IO_READ},
        {.addr=0xac2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x45c4, .a=0xc6, .x=0x35, .y=0x83, .sp=0xdf, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x45c4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x45c5, .a=0xc6, .x=0x35, .y=0x83, .sp=0xdf, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x45c4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x45c4, .value=0x60, .type=IO_READ},
        {.addr=0x45c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xafa5, .a=0x8c, .x=0xd6, .y=0xae, .sp=0x14, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xafa5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xafa6, .a=0x8c, .x=0xd6, .y=0xae, .sp=0x14, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xafa5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xafa5, .value=0x60, .type=IO_READ},
        {.addr=0xafa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x9655, .a=0x10, .x=0x46, .y=0x03, .sp=0xa0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x9655, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9656, .a=0x10, .x=0x46, .y=0x03, .sp=0xa0, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x9655, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9655, .value=0x60, .type=IO_READ},
        {.addr=0x9656, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x4319, .a=0x9a, .x=0xab, .y=0xd6, .sp=0x79, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4319, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x431a, .a=0x9a, .x=0xab, .y=0xd6, .sp=0x79, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x4319, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4319, .value=0x60, .type=IO_READ},
        {.addr=0x431a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x6e83, .a=0xdb, .x=0x5a, .y=0xdc, .sp=0x68, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x6e83, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6e84, .a=0xdb, .x=0x5a, .y=0xdc, .sp=0x68, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x6e83, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6e83, .value=0x60, .type=IO_READ},
        {.addr=0x6e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xcdf8, .a=0x21, .x=0xb5, .y=0x3f, .sp=0x12, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcdf9, .a=0x21, .x=0xb5, .y=0x3f, .sp=0x12, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xcdf8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcdf8, .value=0x60, .type=IO_READ},
        {.addr=0xcdf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x51ba, .a=0x1f, .x=0x45, .y=0x66, .sp=0xe3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x51ba, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x51bb, .a=0x1f, .x=0x45, .y=0x66, .sp=0xe3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x51ba, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x51ba, .value=0x60, .type=IO_READ},
        {.addr=0x51bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe934, .a=0xaf, .x=0x8e, .y=0x1e, .sp=0x47, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe934, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe935, .a=0xaf, .x=0x8e, .y=0x1e, .sp=0x47, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xe934, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe934, .value=0x60, .type=IO_READ},
        {.addr=0xe935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xa99a, .a=0xde, .x=0x1b, .y=0xd4, .sp=0x17, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa99a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa99b, .a=0xde, .x=0x1b, .y=0xd4, .sp=0x17, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa99a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa99a, .value=0x60, .type=IO_READ},
        {.addr=0xa99b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x0432, .a=0xce, .x=0xe3, .y=0x34, .sp=0x15, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0432, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0433, .a=0xce, .x=0xe3, .y=0x34, .sp=0x15, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0432, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0432, .value=0x60, .type=IO_READ},
        {.addr=0x0433, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x3765, .a=0xfd, .x=0xc3, .y=0x75, .sp=0xfa, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3765, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3766, .a=0xfd, .x=0xc3, .y=0x75, .sp=0xfa, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x3765, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3765, .value=0x60, .type=IO_READ},
        {.addr=0x3766, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x961b, .a=0x85, .x=0x81, .y=0x1c, .sp=0x3e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x961b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x961c, .a=0x85, .x=0x81, .y=0x1c, .sp=0x3e, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x961b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x961b, .value=0x60, .type=IO_READ},
        {.addr=0x961c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x6cc0, .a=0x59, .x=0x58, .y=0x54, .sp=0x37, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6cc0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6cc1, .a=0x59, .x=0x58, .y=0x54, .sp=0x37, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x6cc0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6cc0, .value=0x60, .type=IO_READ},
        {.addr=0x6cc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x3724, .a=0x3a, .x=0x79, .y=0x2e, .sp=0xa8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3724, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3725, .a=0x3a, .x=0x79, .y=0x2e, .sp=0xa8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3724, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3724, .value=0x60, .type=IO_READ},
        {.addr=0x3725, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x6cea, .a=0xc4, .x=0x34, .y=0x5d, .sp=0xe1, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x6cea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6ceb, .a=0xc4, .x=0x34, .y=0x5d, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6cea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6cea, .value=0x60, .type=IO_READ},
        {.addr=0x6ceb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x213b, .a=0xa0, .x=0x5f, .y=0x04, .sp=0xaa, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x213b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0xa0, .x=0x5f, .y=0x04, .sp=0xaa, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x213b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x213b, .value=0x60, .type=IO_READ},
        {.addr=0x213c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x5442, .a=0x59, .x=0x4e, .y=0x65, .sp=0x01, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5442, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5443, .a=0x59, .x=0x4e, .y=0x65, .sp=0x01, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x5442, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5442, .value=0x60, .type=IO_READ},
        {.addr=0x5443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xaa6e, .a=0x6a, .x=0xe1, .y=0xfb, .sp=0xf9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xaa6e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaa6f, .a=0x6a, .x=0xe1, .y=0xfb, .sp=0xf9, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xaa6e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaa6e, .value=0x60, .type=IO_READ},
        {.addr=0xaa6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x778c, .a=0x2d, .x=0x27, .y=0xf5, .sp=0x63, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x778c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x778d, .a=0x2d, .x=0x27, .y=0xf5, .sp=0x63, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x778c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x778c, .value=0x60, .type=IO_READ},
        {.addr=0x778d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x09d0, .a=0x42, .x=0x0a, .y=0xac, .sp=0x39, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x09d0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x09d1, .a=0x42, .x=0x0a, .y=0xac, .sp=0x39, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x09d0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x09d0, .value=0x60, .type=IO_READ},
        {.addr=0x09d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xcd5d, .a=0x88, .x=0x8e, .y=0xb9, .sp=0x17, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcd5e, .a=0x88, .x=0x8e, .y=0xb9, .sp=0x17, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcd5d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcd5d, .value=0x60, .type=IO_READ},
        {.addr=0xcd5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x5d2d, .a=0x8f, .x=0xcd, .y=0x4f, .sp=0x24, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5d2e, .a=0x8f, .x=0xcd, .y=0x4f, .sp=0x24, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5d2d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5d2d, .value=0x60, .type=IO_READ},
        {.addr=0x5d2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x0ae5, .a=0x27, .x=0x3b, .y=0x5e, .sp=0xb7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0ae6, .a=0x27, .x=0x3b, .y=0x5e, .sp=0xb7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0ae5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0ae5, .value=0x60, .type=IO_READ},
        {.addr=0x0ae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x7e47, .a=0x34, .x=0x8a, .y=0x3a, .sp=0xb9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x7e47, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7e48, .a=0x34, .x=0x8a, .y=0x3a, .sp=0xb9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7e47, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7e47, .value=0x60, .type=IO_READ},
        {.addr=0x7e48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x861b, .a=0x87, .x=0xc6, .y=0xfa, .sp=0x2f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x861b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x861c, .a=0x87, .x=0xc6, .y=0xfa, .sp=0x2f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x861b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x861b, .value=0x60, .type=IO_READ},
        {.addr=0x861c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xa002, .a=0x15, .x=0x74, .y=0xe2, .sp=0x22, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa002, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa003, .a=0x15, .x=0x74, .y=0xe2, .sp=0x22, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa002, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa002, .value=0x60, .type=IO_READ},
        {.addr=0xa003, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xa1a2, .a=0x5f, .x=0xeb, .y=0x6e, .sp=0xd7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa1a3, .a=0x5f, .x=0xeb, .y=0x6e, .sp=0xd7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa1a2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa1a2, .value=0x60, .type=IO_READ},
        {.addr=0xa1a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x4ea3, .a=0x0b, .x=0x1c, .y=0x34, .sp=0xd1, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4ea4, .a=0x0b, .x=0x1c, .y=0x34, .sp=0xd1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4ea3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4ea3, .value=0x60, .type=IO_READ},
        {.addr=0x4ea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x861b, .a=0xbe, .x=0x61, .y=0x31, .sp=0x33, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x861b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x861c, .a=0xbe, .x=0x61, .y=0x31, .sp=0x33, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x861b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x861b, .value=0x60, .type=IO_READ},
        {.addr=0x861c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x7d52, .a=0xb2, .x=0x7f, .y=0x03, .sp=0x16, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x7d52, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7d53, .a=0xb2, .x=0x7f, .y=0x03, .sp=0x16, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7d52, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7d52, .value=0x60, .type=IO_READ},
        {.addr=0x7d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x6514, .a=0x8c, .x=0xb9, .y=0x90, .sp=0x0f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6514, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6515, .a=0x8c, .x=0xb9, .y=0x90, .sp=0x0f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6514, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6514, .value=0x60, .type=IO_READ},
        {.addr=0x6515, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x26e0, .a=0x82, .x=0x76, .y=0x9e, .sp=0x88, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x26e0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x26e1, .a=0x82, .x=0x76, .y=0x9e, .sp=0x88, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x26e0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x26e0, .value=0x60, .type=IO_READ},
        {.addr=0x26e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x56ef, .a=0xcd, .x=0x2c, .y=0xc4, .sp=0xd9, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x56ef, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x56f0, .a=0xcd, .x=0x2c, .y=0xc4, .sp=0xd9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x56ef, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x56ef, .value=0x60, .type=IO_READ},
        {.addr=0x56f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x2bf6, .a=0x65, .x=0xfe, .y=0x3a, .sp=0xd2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2bf6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2bf7, .a=0x65, .x=0xfe, .y=0x3a, .sp=0xd2, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x2bf6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2bf6, .value=0x60, .type=IO_READ},
        {.addr=0x2bf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x899d, .a=0x8a, .x=0x37, .y=0x38, .sp=0xf5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x899d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x899e, .a=0x8a, .x=0x37, .y=0x38, .sp=0xf5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x899d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x899d, .value=0x60, .type=IO_READ},
        {.addr=0x899e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xb639, .a=0x8c, .x=0xe8, .y=0x71, .sp=0x39, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb639, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb63a, .a=0x8c, .x=0xe8, .y=0x71, .sp=0x39, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xb639, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb639, .value=0x60, .type=IO_READ},
        {.addr=0xb63a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x5d6f, .a=0x82, .x=0xb4, .y=0x40, .sp=0x6b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5d70, .a=0x82, .x=0xb4, .y=0x40, .sp=0x6b, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x5d6f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5d6f, .value=0x60, .type=IO_READ},
        {.addr=0x5d70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x7bdb, .a=0x18, .x=0xe7, .y=0x5a, .sp=0x53, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7bdb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7bdc, .a=0x18, .x=0xe7, .y=0x5a, .sp=0x53, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x7bdb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7bdb, .value=0x60, .type=IO_READ},
        {.addr=0x7bdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xd7b7, .a=0xb3, .x=0xd3, .y=0x30, .sp=0xa3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd7b8, .a=0xb3, .x=0xd3, .y=0x30, .sp=0xa3, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xd7b7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd7b7, .value=0x60, .type=IO_READ},
        {.addr=0xd7b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x2fe9, .a=0xfa, .x=0x2a, .y=0x1b, .sp=0xdc, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2fea, .a=0xfa, .x=0x2a, .y=0x1b, .sp=0xdc, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x2fe9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2fe9, .value=0x60, .type=IO_READ},
        {.addr=0x2fea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x98f0, .a=0x52, .x=0x78, .y=0x0f, .sp=0xfa, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x98f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x98f1, .a=0x52, .x=0x78, .y=0x0f, .sp=0xfa, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x98f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x98f0, .value=0x60, .type=IO_READ},
        {.addr=0x98f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xe7a9, .a=0x6f, .x=0x23, .y=0x60, .sp=0x03, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe7a9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe7aa, .a=0x6f, .x=0x23, .y=0x60, .sp=0x03, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe7a9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe7a9, .value=0x60, .type=IO_READ},
        {.addr=0xe7aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xeab3, .a=0xb8, .x=0xb8, .y=0x34, .sp=0x55, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xeab3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeab4, .a=0xb8, .x=0xb8, .y=0x34, .sp=0x55, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xeab3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeab3, .value=0x60, .type=IO_READ},
        {.addr=0xeab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x940e, .a=0x6a, .x=0xad, .y=0x9e, .sp=0xe8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x940e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x940f, .a=0x6a, .x=0xad, .y=0x9e, .sp=0xe8, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x940e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x940e, .value=0x60, .type=IO_READ},
        {.addr=0x940f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x6b77, .a=0xad, .x=0x9b, .y=0x94, .sp=0xb2, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6b77, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6b78, .a=0xad, .x=0x9b, .y=0x94, .sp=0xb2, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x6b77, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6b77, .value=0x60, .type=IO_READ},
        {.addr=0x6b78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xb2d3, .a=0x13, .x=0x90, .y=0xa1, .sp=0x9b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb2d4, .a=0x13, .x=0x90, .y=0xa1, .sp=0x9b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xb2d3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb2d3, .value=0x60, .type=IO_READ},
        {.addr=0xb2d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x7872, .a=0xa5, .x=0x5b, .y=0xb5, .sp=0x9e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x7872, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7873, .a=0xa5, .x=0x5b, .y=0xb5, .sp=0x9e, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x7872, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7872, .value=0x60, .type=IO_READ},
        {.addr=0x7873, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x2095, .a=0xe8, .x=0x3f, .y=0x87, .sp=0xe9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x2095, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2096, .a=0xe8, .x=0x3f, .y=0x87, .sp=0xe9, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x2095, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2095, .value=0x60, .type=IO_READ},
        {.addr=0x2096, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xa4e1, .a=0xee, .x=0xcc, .y=0x91, .sp=0x4c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa4e2, .a=0xee, .x=0xcc, .y=0x91, .sp=0x4c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa4e1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa4e1, .value=0x60, .type=IO_READ},
        {.addr=0xa4e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x166b, .a=0x8c, .x=0xfd, .y=0x22, .sp=0x1c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x166b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x166c, .a=0x8c, .x=0xfd, .y=0x22, .sp=0x1c, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x166b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x166b, .value=0x60, .type=IO_READ},
        {.addr=0x166c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xb640, .a=0xe0, .x=0x05, .y=0x8a, .sp=0xbd, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb640, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb641, .a=0xe0, .x=0x05, .y=0x8a, .sp=0xbd, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb640, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb640, .value=0x60, .type=IO_READ},
        {.addr=0xb641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x9dae, .a=0x41, .x=0x2d, .y=0x7a, .sp=0x87, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x9dae, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9daf, .a=0x41, .x=0x2d, .y=0x7a, .sp=0x87, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9dae, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9dae, .value=0x60, .type=IO_READ},
        {.addr=0x9daf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xf6ab, .a=0x7b, .x=0xfe, .y=0x52, .sp=0xc1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ab, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf6ac, .a=0x7b, .x=0xfe, .y=0x52, .sp=0xc1, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf6ab, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf6ab, .value=0x60, .type=IO_READ},
        {.addr=0xf6ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x1653, .a=0xe9, .x=0x50, .y=0x26, .sp=0xbc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1653, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1654, .a=0xe9, .x=0x50, .y=0x26, .sp=0xbc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1653, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1653, .value=0x60, .type=IO_READ},
        {.addr=0x1654, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x45f9, .a=0x58, .x=0xb5, .y=0x7a, .sp=0x72, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x45f9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x45fa, .a=0x58, .x=0xb5, .y=0x7a, .sp=0x72, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x45f9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x45f9, .value=0x60, .type=IO_READ},
        {.addr=0x45fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0300) {
    const struct CPU_State initial_cpu = {.pc=0x2a7f, .a=0xa2, .x=0xdc, .y=0xdd, .sp=0x8c, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2a80, .a=0xa2, .x=0xdc, .y=0xdd, .sp=0x8c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2a7f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2a7f, .value=0x60, .type=IO_READ},
        {.addr=0x2a80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0301) {
    const struct CPU_State initial_cpu = {.pc=0x632a, .a=0x13, .x=0x6f, .y=0x81, .sp=0x1b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x632a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x632b, .a=0x13, .x=0x6f, .y=0x81, .sp=0x1b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x632a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x632a, .value=0x60, .type=IO_READ},
        {.addr=0x632b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0302) {
    const struct CPU_State initial_cpu = {.pc=0x0abc, .a=0x41, .x=0xf0, .y=0x88, .sp=0x8b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0abc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0abd, .a=0x41, .x=0xf0, .y=0x88, .sp=0x8b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0abc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0abc, .value=0x60, .type=IO_READ},
        {.addr=0x0abd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0303) {
    const struct CPU_State initial_cpu = {.pc=0xe526, .a=0x28, .x=0x5f, .y=0x89, .sp=0xf1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe526, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe527, .a=0x28, .x=0x5f, .y=0x89, .sp=0xf1, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xe526, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe526, .value=0x60, .type=IO_READ},
        {.addr=0xe527, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0304) {
    const struct CPU_State initial_cpu = {.pc=0x0aed, .a=0xad, .x=0xa8, .y=0xf4, .sp=0xf5, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0aed, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0aee, .a=0xad, .x=0xa8, .y=0xf4, .sp=0xf5, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0aed, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0aed, .value=0x60, .type=IO_READ},
        {.addr=0x0aee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0305) {
    const struct CPU_State initial_cpu = {.pc=0xe8b3, .a=0x25, .x=0x41, .y=0x03, .sp=0xf9, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe8b4, .a=0x25, .x=0x41, .y=0x03, .sp=0xf9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe8b3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe8b3, .value=0x60, .type=IO_READ},
        {.addr=0xe8b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0306) {
    const struct CPU_State initial_cpu = {.pc=0xa014, .a=0x9f, .x=0x23, .y=0xad, .sp=0x93, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa014, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa015, .a=0x9f, .x=0x23, .y=0xad, .sp=0x93, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xa014, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa014, .value=0x60, .type=IO_READ},
        {.addr=0xa015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0307) {
    const struct CPU_State initial_cpu = {.pc=0xc863, .a=0x03, .x=0xc6, .y=0xc9, .sp=0xb7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xc863, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc864, .a=0x03, .x=0xc6, .y=0xc9, .sp=0xb7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc863, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc863, .value=0x60, .type=IO_READ},
        {.addr=0xc864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0308) {
    const struct CPU_State initial_cpu = {.pc=0x540a, .a=0x99, .x=0x66, .y=0x60, .sp=0x2f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x540a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x540b, .a=0x99, .x=0x66, .y=0x60, .sp=0x2f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x540a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x540a, .value=0x60, .type=IO_READ},
        {.addr=0x540b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0309) {
    const struct CPU_State initial_cpu = {.pc=0xaf4d, .a=0x92, .x=0x37, .y=0xc8, .sp=0x27, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xaf4d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaf4e, .a=0x92, .x=0x37, .y=0xc8, .sp=0x27, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xaf4d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaf4d, .value=0x60, .type=IO_READ},
        {.addr=0xaf4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_030A) {
    const struct CPU_State initial_cpu = {.pc=0x7401, .a=0x90, .x=0x59, .y=0xc9, .sp=0xb7, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x7401, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7402, .a=0x90, .x=0x59, .y=0xc9, .sp=0xb7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7401, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7401, .value=0x60, .type=IO_READ},
        {.addr=0x7402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_030B) {
    const struct CPU_State initial_cpu = {.pc=0x092f, .a=0x98, .x=0x3f, .y=0x24, .sp=0xa6, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x092f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0930, .a=0x98, .x=0x3f, .y=0x24, .sp=0xa6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x092f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x092f, .value=0x60, .type=IO_READ},
        {.addr=0x0930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_030C) {
    const struct CPU_State initial_cpu = {.pc=0x268a, .a=0xe5, .x=0xc2, .y=0x7e, .sp=0x04, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x268a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x268b, .a=0xe5, .x=0xc2, .y=0x7e, .sp=0x04, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x268a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x268a, .value=0x60, .type=IO_READ},
        {.addr=0x268b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_030D) {
    const struct CPU_State initial_cpu = {.pc=0xa426, .a=0xfa, .x=0xe1, .y=0xa8, .sp=0x79, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa426, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa427, .a=0xfa, .x=0xe1, .y=0xa8, .sp=0x79, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xa426, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa426, .value=0x60, .type=IO_READ},
        {.addr=0xa427, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_030E) {
    const struct CPU_State initial_cpu = {.pc=0xb617, .a=0xa2, .x=0x3d, .y=0x8d, .sp=0x57, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb617, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb618, .a=0xa2, .x=0x3d, .y=0x8d, .sp=0x57, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xb617, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb617, .value=0x60, .type=IO_READ},
        {.addr=0xb618, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_030F) {
    const struct CPU_State initial_cpu = {.pc=0x08bf, .a=0xe2, .x=0x93, .y=0x9b, .sp=0xfc, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x08bf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x08c0, .a=0xe2, .x=0x93, .y=0x9b, .sp=0xfc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x08bf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x08bf, .value=0x60, .type=IO_READ},
        {.addr=0x08c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0310) {
    const struct CPU_State initial_cpu = {.pc=0x655f, .a=0x99, .x=0x83, .y=0x4e, .sp=0x4b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x655f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6560, .a=0x99, .x=0x83, .y=0x4e, .sp=0x4b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x655f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x655f, .value=0x60, .type=IO_READ},
        {.addr=0x6560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0311) {
    const struct CPU_State initial_cpu = {.pc=0x333a, .a=0x84, .x=0x2f, .y=0x98, .sp=0xfe, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x333a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x333b, .a=0x84, .x=0x2f, .y=0x98, .sp=0xfe, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x333a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x333a, .value=0x60, .type=IO_READ},
        {.addr=0x333b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0312) {
    const struct CPU_State initial_cpu = {.pc=0x3bf1, .a=0x15, .x=0xa0, .y=0x0f, .sp=0x2f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3bf2, .a=0x15, .x=0xa0, .y=0x0f, .sp=0x2f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3bf1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3bf1, .value=0x60, .type=IO_READ},
        {.addr=0x3bf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0313) {
    const struct CPU_State initial_cpu = {.pc=0x7e54, .a=0xac, .x=0xe1, .y=0xe8, .sp=0x87, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7e54, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7e55, .a=0xac, .x=0xe1, .y=0xe8, .sp=0x87, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7e54, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7e54, .value=0x60, .type=IO_READ},
        {.addr=0x7e55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0314) {
    const struct CPU_State initial_cpu = {.pc=0x45c8, .a=0x05, .x=0xf2, .y=0xc0, .sp=0xa7, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x45c8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x45c9, .a=0x05, .x=0xf2, .y=0xc0, .sp=0xa7, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x45c8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x45c8, .value=0x60, .type=IO_READ},
        {.addr=0x45c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0315) {
    const struct CPU_State initial_cpu = {.pc=0x4494, .a=0xf3, .x=0xe7, .y=0x6a, .sp=0x2e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4494, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4495, .a=0xf3, .x=0xe7, .y=0x6a, .sp=0x2e, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x4494, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4494, .value=0x60, .type=IO_READ},
        {.addr=0x4495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0316) {
    const struct CPU_State initial_cpu = {.pc=0xf235, .a=0x24, .x=0xc8, .y=0x80, .sp=0xc5, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf235, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf236, .a=0x24, .x=0xc8, .y=0x80, .sp=0xc5, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf235, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf235, .value=0x60, .type=IO_READ},
        {.addr=0xf236, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0317) {
    const struct CPU_State initial_cpu = {.pc=0x8308, .a=0xc0, .x=0x1f, .y=0x04, .sp=0x22, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8308, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8309, .a=0xc0, .x=0x1f, .y=0x04, .sp=0x22, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x8308, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8308, .value=0x60, .type=IO_READ},
        {.addr=0x8309, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0318) {
    const struct CPU_State initial_cpu = {.pc=0x7882, .a=0xef, .x=0x4f, .y=0x84, .sp=0xaa, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7882, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7883, .a=0xef, .x=0x4f, .y=0x84, .sp=0xaa, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x7882, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7882, .value=0x60, .type=IO_READ},
        {.addr=0x7883, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0319) {
    const struct CPU_State initial_cpu = {.pc=0xcf46, .a=0x7b, .x=0x73, .y=0x6e, .sp=0x73, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xcf46, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcf47, .a=0x7b, .x=0x73, .y=0x6e, .sp=0x73, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xcf46, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcf46, .value=0x60, .type=IO_READ},
        {.addr=0xcf47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_031A) {
    const struct CPU_State initial_cpu = {.pc=0x0d5c, .a=0x55, .x=0xe3, .y=0x5d, .sp=0x0c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0d5d, .a=0x55, .x=0xe3, .y=0x5d, .sp=0x0c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0d5c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0d5c, .value=0x60, .type=IO_READ},
        {.addr=0x0d5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_031B) {
    const struct CPU_State initial_cpu = {.pc=0x4dd6, .a=0x5e, .x=0x28, .y=0x67, .sp=0x6e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4dd7, .a=0x5e, .x=0x28, .y=0x67, .sp=0x6e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4dd6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4dd6, .value=0x60, .type=IO_READ},
        {.addr=0x4dd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_031C) {
    const struct CPU_State initial_cpu = {.pc=0xede4, .a=0x70, .x=0xa3, .y=0xe3, .sp=0xd3, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xede4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xede5, .a=0x70, .x=0xa3, .y=0xe3, .sp=0xd3, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xede4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xede4, .value=0x60, .type=IO_READ},
        {.addr=0xede5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_031D) {
    const struct CPU_State initial_cpu = {.pc=0x10b0, .a=0x90, .x=0xba, .y=0xbe, .sp=0x96, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x10b0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x10b1, .a=0x90, .x=0xba, .y=0xbe, .sp=0x96, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x10b0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x10b0, .value=0x60, .type=IO_READ},
        {.addr=0x10b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_031E) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0xd0, .x=0xa9, .y=0x84, .sp=0x93, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdf1f, .a=0xd0, .x=0xa9, .y=0x84, .sp=0x93, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0x60, .type=IO_READ},
        {.addr=0xdf1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_031F) {
    const struct CPU_State initial_cpu = {.pc=0x76ab, .a=0x24, .x=0x31, .y=0xae, .sp=0xdd, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x76ab, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x76ac, .a=0x24, .x=0x31, .y=0xae, .sp=0xdd, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x76ab, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x76ab, .value=0x60, .type=IO_READ},
        {.addr=0x76ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0320) {
    const struct CPU_State initial_cpu = {.pc=0xb8b3, .a=0xf2, .x=0x7d, .y=0x15, .sp=0x83, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb8b4, .a=0xf2, .x=0x7d, .y=0x15, .sp=0x83, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xb8b3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb8b3, .value=0x60, .type=IO_READ},
        {.addr=0xb8b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0321) {
    const struct CPU_State initial_cpu = {.pc=0xbddf, .a=0x9c, .x=0xea, .y=0x91, .sp=0xe6, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xbddf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbde0, .a=0x9c, .x=0xea, .y=0x91, .sp=0xe6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbddf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbddf, .value=0x60, .type=IO_READ},
        {.addr=0xbde0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0322) {
    const struct CPU_State initial_cpu = {.pc=0x4dfd, .a=0x35, .x=0x08, .y=0xb5, .sp=0xb3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4dfd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4dfe, .a=0x35, .x=0x08, .y=0xb5, .sp=0xb3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4dfd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4dfd, .value=0x60, .type=IO_READ},
        {.addr=0x4dfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0323) {
    const struct CPU_State initial_cpu = {.pc=0xc326, .a=0x73, .x=0xa3, .y=0xfc, .sp=0x4d, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc326, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc327, .a=0x73, .x=0xa3, .y=0xfc, .sp=0x4d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc326, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc326, .value=0x60, .type=IO_READ},
        {.addr=0xc327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0324) {
    const struct CPU_State initial_cpu = {.pc=0x6b1c, .a=0x72, .x=0x9c, .y=0x72, .sp=0x0e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x6b1c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6b1d, .a=0x72, .x=0x9c, .y=0x72, .sp=0x0e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6b1c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6b1c, .value=0x60, .type=IO_READ},
        {.addr=0x6b1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0325) {
    const struct CPU_State initial_cpu = {.pc=0x1697, .a=0x45, .x=0x90, .y=0x82, .sp=0x41, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1697, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1698, .a=0x45, .x=0x90, .y=0x82, .sp=0x41, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1697, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1697, .value=0x60, .type=IO_READ},
        {.addr=0x1698, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3fd7, .a=0x02, .x=0xe3, .y=0x08, .sp=0xab, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3fd7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3fd8, .a=0x02, .x=0xe3, .y=0x08, .sp=0xab, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x3fd7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3fd7, .value=0x60, .type=IO_READ},
        {.addr=0x3fd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0327) {
    const struct CPU_State initial_cpu = {.pc=0xc5e5, .a=0x62, .x=0x1e, .y=0xa7, .sp=0x4e, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xc5e5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc5e6, .a=0x62, .x=0x1e, .y=0xa7, .sp=0x4e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xc5e5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc5e5, .value=0x60, .type=IO_READ},
        {.addr=0xc5e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0328) {
    const struct CPU_State initial_cpu = {.pc=0xe6e6, .a=0x53, .x=0xe6, .y=0xee, .sp=0x59, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe6e7, .a=0x53, .x=0xe6, .y=0xee, .sp=0x59, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xe6e6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe6e6, .value=0x60, .type=IO_READ},
        {.addr=0xe6e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf684, .a=0x7e, .x=0xea, .y=0x1d, .sp=0x7f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf684, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf685, .a=0x7e, .x=0xea, .y=0x1d, .sp=0x7f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf684, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf684, .value=0x60, .type=IO_READ},
        {.addr=0xf685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_032A) {
    const struct CPU_State initial_cpu = {.pc=0x48c3, .a=0xbf, .x=0xb3, .y=0x9f, .sp=0x78, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x48c3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x48c4, .a=0xbf, .x=0xb3, .y=0x9f, .sp=0x78, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x48c3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x48c3, .value=0x60, .type=IO_READ},
        {.addr=0x48c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_032B) {
    const struct CPU_State initial_cpu = {.pc=0xac43, .a=0x43, .x=0xb5, .y=0x90, .sp=0x1d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xac43, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xac44, .a=0x43, .x=0xb5, .y=0x90, .sp=0x1d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xac43, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xac43, .value=0x60, .type=IO_READ},
        {.addr=0xac44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_032C) {
    const struct CPU_State initial_cpu = {.pc=0x91b8, .a=0x3f, .x=0x8c, .y=0x7e, .sp=0x50, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x91b8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x91b9, .a=0x3f, .x=0x8c, .y=0x7e, .sp=0x50, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x91b8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x91b8, .value=0x60, .type=IO_READ},
        {.addr=0x91b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_032D) {
    const struct CPU_State initial_cpu = {.pc=0x3545, .a=0x55, .x=0xb5, .y=0x33, .sp=0x5e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x3545, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3546, .a=0x55, .x=0xb5, .y=0x33, .sp=0x5e, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x3545, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3545, .value=0x60, .type=IO_READ},
        {.addr=0x3546, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_032E) {
    const struct CPU_State initial_cpu = {.pc=0x6bcf, .a=0x9e, .x=0xcc, .y=0x48, .sp=0x26, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcf, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6bd0, .a=0x9e, .x=0xcc, .y=0x48, .sp=0x26, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x6bcf, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6bcf, .value=0x60, .type=IO_READ},
        {.addr=0x6bd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_032F) {
    const struct CPU_State initial_cpu = {.pc=0x13cd, .a=0x09, .x=0x1a, .y=0x39, .sp=0xbf, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x13cd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x13ce, .a=0x09, .x=0x1a, .y=0x39, .sp=0xbf, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x13cd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x13cd, .value=0x60, .type=IO_READ},
        {.addr=0x13ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0330) {
    const struct CPU_State initial_cpu = {.pc=0xbe58, .a=0x62, .x=0x23, .y=0x21, .sp=0x48, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe58, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbe59, .a=0x62, .x=0x23, .y=0x21, .sp=0x48, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xbe58, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbe58, .value=0x60, .type=IO_READ},
        {.addr=0xbe59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0331) {
    const struct CPU_State initial_cpu = {.pc=0xbb64, .a=0x80, .x=0x6b, .y=0x22, .sp=0x3f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xbb64, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbb65, .a=0x80, .x=0x6b, .y=0x22, .sp=0x3f, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xbb64, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbb64, .value=0x60, .type=IO_READ},
        {.addr=0xbb65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0332) {
    const struct CPU_State initial_cpu = {.pc=0x3dd5, .a=0xcb, .x=0x08, .y=0x73, .sp=0xe2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3dd6, .a=0xcb, .x=0x08, .y=0x73, .sp=0xe2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3dd5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3dd5, .value=0x60, .type=IO_READ},
        {.addr=0x3dd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0333) {
    const struct CPU_State initial_cpu = {.pc=0x960c, .a=0x66, .x=0x9f, .y=0x37, .sp=0xab, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x960c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x960d, .a=0x66, .x=0x9f, .y=0x37, .sp=0xab, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x960c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x960c, .value=0x60, .type=IO_READ},
        {.addr=0x960d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0334) {
    const struct CPU_State initial_cpu = {.pc=0x1ea3, .a=0x5d, .x=0x53, .y=0xb6, .sp=0x1c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1ea3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1ea4, .a=0x5d, .x=0x53, .y=0xb6, .sp=0x1c, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x1ea3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1ea3, .value=0x60, .type=IO_READ},
        {.addr=0x1ea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0335) {
    const struct CPU_State initial_cpu = {.pc=0xa145, .a=0x9d, .x=0x3c, .y=0x18, .sp=0x3c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa145, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa146, .a=0x9d, .x=0x3c, .y=0x18, .sp=0x3c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa145, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa145, .value=0x60, .type=IO_READ},
        {.addr=0xa146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3171, .a=0x26, .x=0x12, .y=0x83, .sp=0x27, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3171, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3172, .a=0x26, .x=0x12, .y=0x83, .sp=0x27, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3171, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3171, .value=0x60, .type=IO_READ},
        {.addr=0x3172, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0337) {
    const struct CPU_State initial_cpu = {.pc=0xb533, .a=0xf1, .x=0x79, .y=0x36, .sp=0x04, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb533, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb534, .a=0xf1, .x=0x79, .y=0x36, .sp=0x04, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb533, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb533, .value=0x60, .type=IO_READ},
        {.addr=0xb534, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0338) {
    const struct CPU_State initial_cpu = {.pc=0x2f56, .a=0xb8, .x=0xd5, .y=0x61, .sp=0xe1, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2f56, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2f57, .a=0xb8, .x=0xd5, .y=0x61, .sp=0xe1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2f56, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2f56, .value=0x60, .type=IO_READ},
        {.addr=0x2f57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0339) {
    const struct CPU_State initial_cpu = {.pc=0x85c2, .a=0x5b, .x=0xc9, .y=0x38, .sp=0xd3, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x85c2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x85c3, .a=0x5b, .x=0xc9, .y=0x38, .sp=0xd3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x85c2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x85c2, .value=0x60, .type=IO_READ},
        {.addr=0x85c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_033A) {
    const struct CPU_State initial_cpu = {.pc=0x558a, .a=0x82, .x=0x7b, .y=0x06, .sp=0xbc, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x558a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x558b, .a=0x82, .x=0x7b, .y=0x06, .sp=0xbc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x558a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x558a, .value=0x60, .type=IO_READ},
        {.addr=0x558b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_033B) {
    const struct CPU_State initial_cpu = {.pc=0x2d82, .a=0x39, .x=0x7f, .y=0x63, .sp=0xd1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x2d82, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2d83, .a=0x39, .x=0x7f, .y=0x63, .sp=0xd1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2d82, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2d82, .value=0x60, .type=IO_READ},
        {.addr=0x2d83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_033C) {
    const struct CPU_State initial_cpu = {.pc=0x4631, .a=0xfa, .x=0x89, .y=0x27, .sp=0xb0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x4631, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4632, .a=0xfa, .x=0x89, .y=0x27, .sp=0xb0, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x4631, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4631, .value=0x60, .type=IO_READ},
        {.addr=0x4632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_033D) {
    const struct CPU_State initial_cpu = {.pc=0x6316, .a=0x99, .x=0x04, .y=0xfa, .sp=0xe2, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6316, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6317, .a=0x99, .x=0x04, .y=0xfa, .sp=0xe2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6316, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6316, .value=0x60, .type=IO_READ},
        {.addr=0x6317, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc9da, .a=0x6e, .x=0xa7, .y=0x22, .sp=0x3f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc9da, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc9db, .a=0x6e, .x=0xa7, .y=0x22, .sp=0x3f, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xc9da, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc9da, .value=0x60, .type=IO_READ},
        {.addr=0xc9db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_033F) {
    const struct CPU_State initial_cpu = {.pc=0xc3c6, .a=0xe2, .x=0xf1, .y=0xff, .sp=0x9f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3c7, .a=0xe2, .x=0xf1, .y=0xff, .sp=0x9f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xc3c6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3c6, .value=0x60, .type=IO_READ},
        {.addr=0xc3c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0340) {
    const struct CPU_State initial_cpu = {.pc=0x34ea, .a=0x2c, .x=0x43, .y=0xd7, .sp=0xd7, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x34ea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x34eb, .a=0x2c, .x=0x43, .y=0xd7, .sp=0xd7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x34ea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x34ea, .value=0x60, .type=IO_READ},
        {.addr=0x34eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0341) {
    const struct CPU_State initial_cpu = {.pc=0xe3df, .a=0xc6, .x=0xed, .y=0x12, .sp=0x29, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe3df, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe3e0, .a=0xc6, .x=0xed, .y=0x12, .sp=0x29, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xe3df, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe3df, .value=0x60, .type=IO_READ},
        {.addr=0xe3e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0342) {
    const struct CPU_State initial_cpu = {.pc=0xc2fd, .a=0xc7, .x=0x0e, .y=0x3f, .sp=0xa3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc2fd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc2fe, .a=0xc7, .x=0x0e, .y=0x3f, .sp=0xa3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc2fd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc2fd, .value=0x60, .type=IO_READ},
        {.addr=0xc2fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0343) {
    const struct CPU_State initial_cpu = {.pc=0x90f7, .a=0x3b, .x=0x5d, .y=0x99, .sp=0x89, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x90f7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x90f8, .a=0x3b, .x=0x5d, .y=0x99, .sp=0x89, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x90f7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x90f7, .value=0x60, .type=IO_READ},
        {.addr=0x90f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0344) {
    const struct CPU_State initial_cpu = {.pc=0xfd94, .a=0xfb, .x=0x83, .y=0xd1, .sp=0xf0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfd94, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfd95, .a=0xfb, .x=0x83, .y=0xd1, .sp=0xf0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xfd94, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfd94, .value=0x60, .type=IO_READ},
        {.addr=0xfd95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0345) {
    const struct CPU_State initial_cpu = {.pc=0x401e, .a=0x9e, .x=0x8d, .y=0xae, .sp=0xdf, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x401e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x401f, .a=0x9e, .x=0x8d, .y=0xae, .sp=0xdf, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x401e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x401e, .value=0x60, .type=IO_READ},
        {.addr=0x401f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0346) {
    const struct CPU_State initial_cpu = {.pc=0x1950, .a=0x64, .x=0x5b, .y=0xd2, .sp=0x88, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1950, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1951, .a=0x64, .x=0x5b, .y=0xd2, .sp=0x88, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1950, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1950, .value=0x60, .type=IO_READ},
        {.addr=0x1951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0347) {
    const struct CPU_State initial_cpu = {.pc=0xcc1e, .a=0xa6, .x=0x9e, .y=0x08, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcc1f, .a=0xa6, .x=0x9e, .y=0x08, .sp=0xe3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xcc1e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcc1e, .value=0x60, .type=IO_READ},
        {.addr=0xcc1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0348) {
    const struct CPU_State initial_cpu = {.pc=0xfb0d, .a=0x0d, .x=0x33, .y=0xdf, .sp=0xfe, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfb0d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfb0e, .a=0x0d, .x=0x33, .y=0xdf, .sp=0xfe, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xfb0d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfb0d, .value=0x60, .type=IO_READ},
        {.addr=0xfb0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0349) {
    const struct CPU_State initial_cpu = {.pc=0x8a5c, .a=0x35, .x=0x0d, .y=0x0c, .sp=0xbc, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8a5c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8a5d, .a=0x35, .x=0x0d, .y=0x0c, .sp=0xbc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8a5c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8a5c, .value=0x60, .type=IO_READ},
        {.addr=0x8a5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_034A) {
    const struct CPU_State initial_cpu = {.pc=0x4e66, .a=0x3f, .x=0xd2, .y=0xb8, .sp=0x56, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4e66, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4e67, .a=0x3f, .x=0xd2, .y=0xb8, .sp=0x56, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4e66, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4e66, .value=0x60, .type=IO_READ},
        {.addr=0x4e67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_034B) {
    const struct CPU_State initial_cpu = {.pc=0xf256, .a=0x9c, .x=0xcb, .y=0xab, .sp=0xbd, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf256, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf257, .a=0x9c, .x=0xcb, .y=0xab, .sp=0xbd, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xf256, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf256, .value=0x60, .type=IO_READ},
        {.addr=0xf257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_034C) {
    const struct CPU_State initial_cpu = {.pc=0x6ad0, .a=0xd0, .x=0xb4, .y=0xd6, .sp=0x75, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6ad1, .a=0xd0, .x=0xb4, .y=0xd6, .sp=0x75, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6ad0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6ad0, .value=0x60, .type=IO_READ},
        {.addr=0x6ad1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_034D) {
    const struct CPU_State initial_cpu = {.pc=0x230f, .a=0x9c, .x=0xe5, .y=0xe0, .sp=0xe3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x230f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2310, .a=0x9c, .x=0xe5, .y=0xe0, .sp=0xe3, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x230f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x230f, .value=0x60, .type=IO_READ},
        {.addr=0x2310, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_034E) {
    const struct CPU_State initial_cpu = {.pc=0x6522, .a=0x48, .x=0x7e, .y=0x01, .sp=0x01, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x6522, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6523, .a=0x48, .x=0x7e, .y=0x01, .sp=0x01, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x6522, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6522, .value=0x60, .type=IO_READ},
        {.addr=0x6523, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_034F) {
    const struct CPU_State initial_cpu = {.pc=0xda82, .a=0xed, .x=0x87, .y=0x63, .sp=0x82, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xda82, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xda83, .a=0xed, .x=0x87, .y=0x63, .sp=0x82, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xda82, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xda82, .value=0x60, .type=IO_READ},
        {.addr=0xda83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0350) {
    const struct CPU_State initial_cpu = {.pc=0x9525, .a=0x18, .x=0xc4, .y=0x6d, .sp=0xf1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9525, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9526, .a=0x18, .x=0xc4, .y=0x6d, .sp=0xf1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9525, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9525, .value=0x60, .type=IO_READ},
        {.addr=0x9526, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5deb, .a=0xb7, .x=0x3a, .y=0x7b, .sp=0xf1, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x5deb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5dec, .a=0xb7, .x=0x3a, .y=0x7b, .sp=0xf1, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x5deb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5deb, .value=0x60, .type=IO_READ},
        {.addr=0x5dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0352) {
    const struct CPU_State initial_cpu = {.pc=0xf5f0, .a=0x95, .x=0x20, .y=0x45, .sp=0x46, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf5f1, .a=0x95, .x=0x20, .y=0x45, .sp=0x46, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xf5f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf5f0, .value=0x60, .type=IO_READ},
        {.addr=0xf5f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0353) {
    const struct CPU_State initial_cpu = {.pc=0xaa9a, .a=0x30, .x=0xab, .y=0x78, .sp=0xfb, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xaa9a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaa9b, .a=0x30, .x=0xab, .y=0x78, .sp=0xfb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xaa9a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaa9a, .value=0x60, .type=IO_READ},
        {.addr=0xaa9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0354) {
    const struct CPU_State initial_cpu = {.pc=0xe973, .a=0x2b, .x=0xd2, .y=0x72, .sp=0x07, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe973, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe974, .a=0x2b, .x=0xd2, .y=0x72, .sp=0x07, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xe973, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe973, .value=0x60, .type=IO_READ},
        {.addr=0xe974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0355) {
    const struct CPU_State initial_cpu = {.pc=0xbded, .a=0x7d, .x=0x03, .y=0x5f, .sp=0xe4, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xbded, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbdee, .a=0x7d, .x=0x03, .y=0x5f, .sp=0xe4, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xbded, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbded, .value=0x60, .type=IO_READ},
        {.addr=0xbdee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0356) {
    const struct CPU_State initial_cpu = {.pc=0x4daa, .a=0x5e, .x=0xd1, .y=0x9e, .sp=0x0f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4daa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4dab, .a=0x5e, .x=0xd1, .y=0x9e, .sp=0x0f, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x4daa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4daa, .value=0x60, .type=IO_READ},
        {.addr=0x4dab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0357) {
    const struct CPU_State initial_cpu = {.pc=0x9161, .a=0x09, .x=0xa2, .y=0x92, .sp=0xe3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9161, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9162, .a=0x09, .x=0xa2, .y=0x92, .sp=0xe3, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x9161, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9161, .value=0x60, .type=IO_READ},
        {.addr=0x9162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0358) {
    const struct CPU_State initial_cpu = {.pc=0xed1f, .a=0x24, .x=0x50, .y=0xbf, .sp=0x45, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xed1f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xed20, .a=0x24, .x=0x50, .y=0xbf, .sp=0x45, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xed1f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xed1f, .value=0x60, .type=IO_READ},
        {.addr=0xed20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0359) {
    const struct CPU_State initial_cpu = {.pc=0xf1ef, .a=0x17, .x=0x32, .y=0xa9, .sp=0x9d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ef, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf1f0, .a=0x17, .x=0x32, .y=0xa9, .sp=0x9d, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xf1ef, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf1ef, .value=0x60, .type=IO_READ},
        {.addr=0xf1f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_035A) {
    const struct CPU_State initial_cpu = {.pc=0x3cb6, .a=0xfe, .x=0x59, .y=0x50, .sp=0xd0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3cb7, .a=0xfe, .x=0x59, .y=0x50, .sp=0xd0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3cb6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3cb6, .value=0x60, .type=IO_READ},
        {.addr=0x3cb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_035B) {
    const struct CPU_State initial_cpu = {.pc=0x62ab, .a=0x6f, .x=0x19, .y=0x6b, .sp=0xce, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x62ab, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x62ac, .a=0x6f, .x=0x19, .y=0x6b, .sp=0xce, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x62ab, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x62ab, .value=0x60, .type=IO_READ},
        {.addr=0x62ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_035C) {
    const struct CPU_State initial_cpu = {.pc=0x0dfa, .a=0x55, .x=0xc4, .y=0xdc, .sp=0xfb, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0dfb, .a=0x55, .x=0xc4, .y=0xdc, .sp=0xfb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0dfa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0dfa, .value=0x60, .type=IO_READ},
        {.addr=0x0dfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_035D) {
    const struct CPU_State initial_cpu = {.pc=0xad32, .a=0x8f, .x=0xd6, .y=0xa5, .sp=0x84, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xad32, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xad33, .a=0x8f, .x=0xd6, .y=0xa5, .sp=0x84, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xad32, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xad32, .value=0x60, .type=IO_READ},
        {.addr=0xad33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_035E) {
    const struct CPU_State initial_cpu = {.pc=0x5aea, .a=0x01, .x=0xd5, .y=0x84, .sp=0xbc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5aea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5aeb, .a=0x01, .x=0xd5, .y=0x84, .sp=0xbc, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x5aea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5aea, .value=0x60, .type=IO_READ},
        {.addr=0x5aeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_035F) {
    const struct CPU_State initial_cpu = {.pc=0x6812, .a=0xa1, .x=0x53, .y=0x87, .sp=0x89, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x6812, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6813, .a=0xa1, .x=0x53, .y=0x87, .sp=0x89, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x6812, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6812, .value=0x60, .type=IO_READ},
        {.addr=0x6813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0360) {
    const struct CPU_State initial_cpu = {.pc=0xc862, .a=0x37, .x=0xe0, .y=0xb7, .sp=0x2e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc862, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc863, .a=0x37, .x=0xe0, .y=0xb7, .sp=0x2e, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xc862, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc862, .value=0x60, .type=IO_READ},
        {.addr=0xc863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0361) {
    const struct CPU_State initial_cpu = {.pc=0xda57, .a=0x97, .x=0x7a, .y=0x61, .sp=0x9a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xda57, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xda58, .a=0x97, .x=0x7a, .y=0x61, .sp=0x9a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xda57, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xda57, .value=0x60, .type=IO_READ},
        {.addr=0xda58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0362) {
    const struct CPU_State initial_cpu = {.pc=0x6b54, .a=0xe4, .x=0x37, .y=0x05, .sp=0x36, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6b54, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6b55, .a=0xe4, .x=0x37, .y=0x05, .sp=0x36, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6b54, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6b54, .value=0x60, .type=IO_READ},
        {.addr=0x6b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0363) {
    const struct CPU_State initial_cpu = {.pc=0x57b1, .a=0xf2, .x=0x55, .y=0xfe, .sp=0x8f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x57b1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x57b2, .a=0xf2, .x=0x55, .y=0xfe, .sp=0x8f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x57b1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x57b1, .value=0x60, .type=IO_READ},
        {.addr=0x57b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf4d2, .a=0x32, .x=0xb7, .y=0x3a, .sp=0xc3, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf4d3, .a=0x32, .x=0xb7, .y=0x3a, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf4d2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf4d2, .value=0x60, .type=IO_READ},
        {.addr=0xf4d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0365) {
    const struct CPU_State initial_cpu = {.pc=0x5f7e, .a=0x54, .x=0x5a, .y=0xd1, .sp=0x40, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x5f7e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5f7f, .a=0x54, .x=0x5a, .y=0xd1, .sp=0x40, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5f7e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5f7e, .value=0x60, .type=IO_READ},
        {.addr=0x5f7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0366) {
    const struct CPU_State initial_cpu = {.pc=0xb38c, .a=0x3a, .x=0xe8, .y=0xb4, .sp=0xe1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb38c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb38d, .a=0x3a, .x=0xe8, .y=0xb4, .sp=0xe1, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb38c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb38c, .value=0x60, .type=IO_READ},
        {.addr=0xb38d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0367) {
    const struct CPU_State initial_cpu = {.pc=0xf1d3, .a=0xfb, .x=0xd9, .y=0x6a, .sp=0xb2, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf1d3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf1d4, .a=0xfb, .x=0xd9, .y=0x6a, .sp=0xb2, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xf1d3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf1d3, .value=0x60, .type=IO_READ},
        {.addr=0xf1d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0368) {
    const struct CPU_State initial_cpu = {.pc=0xfa3f, .a=0xa5, .x=0x23, .y=0x24, .sp=0xb2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfa40, .a=0xa5, .x=0x23, .y=0x24, .sp=0xb2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xfa3f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfa3f, .value=0x60, .type=IO_READ},
        {.addr=0xfa40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0369) {
    const struct CPU_State initial_cpu = {.pc=0xa7b0, .a=0xb5, .x=0x68, .y=0x0a, .sp=0xba, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa7b0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa7b1, .a=0xb5, .x=0x68, .y=0x0a, .sp=0xba, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa7b0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa7b0, .value=0x60, .type=IO_READ},
        {.addr=0xa7b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_036A) {
    const struct CPU_State initial_cpu = {.pc=0xb44a, .a=0x83, .x=0xa2, .y=0x78, .sp=0x5b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xb44a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb44b, .a=0x83, .x=0xa2, .y=0x78, .sp=0x5b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb44a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb44a, .value=0x60, .type=IO_READ},
        {.addr=0xb44b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_036B) {
    const struct CPU_State initial_cpu = {.pc=0x28df, .a=0x0a, .x=0x14, .y=0xd1, .sp=0xee, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x28df, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x28e0, .a=0x0a, .x=0x14, .y=0xd1, .sp=0xee, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x28df, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x28df, .value=0x60, .type=IO_READ},
        {.addr=0x28e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_036C) {
    const struct CPU_State initial_cpu = {.pc=0x1684, .a=0xdd, .x=0xd6, .y=0x73, .sp=0x8c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1684, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1685, .a=0xdd, .x=0xd6, .y=0x73, .sp=0x8c, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x1684, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1684, .value=0x60, .type=IO_READ},
        {.addr=0x1685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_036D) {
    const struct CPU_State initial_cpu = {.pc=0xe64a, .a=0xb7, .x=0xdb, .y=0x3e, .sp=0x1b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xe64a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe64b, .a=0xb7, .x=0xdb, .y=0x3e, .sp=0x1b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xe64a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe64a, .value=0x60, .type=IO_READ},
        {.addr=0xe64b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1ee2, .a=0xcb, .x=0xcb, .y=0xc5, .sp=0x4d, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1ee3, .a=0xcb, .x=0xcb, .y=0xc5, .sp=0x4d, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x1ee2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1ee2, .value=0x60, .type=IO_READ},
        {.addr=0x1ee3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_036F) {
    const struct CPU_State initial_cpu = {.pc=0xf541, .a=0x44, .x=0xac, .y=0xad, .sp=0xba, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xf541, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf542, .a=0x44, .x=0xac, .y=0xad, .sp=0xba, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf541, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf541, .value=0x60, .type=IO_READ},
        {.addr=0xf542, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0370) {
    const struct CPU_State initial_cpu = {.pc=0xa426, .a=0xd7, .x=0xb0, .y=0x37, .sp=0x7b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa426, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa427, .a=0xd7, .x=0xb0, .y=0x37, .sp=0x7b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xa426, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa426, .value=0x60, .type=IO_READ},
        {.addr=0xa427, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0371) {
    const struct CPU_State initial_cpu = {.pc=0xcc8d, .a=0x4c, .x=0xea, .y=0x77, .sp=0x49, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xcc8d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xcc8e, .a=0x4c, .x=0xea, .y=0x77, .sp=0x49, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcc8d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xcc8d, .value=0x60, .type=IO_READ},
        {.addr=0xcc8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0372) {
    const struct CPU_State initial_cpu = {.pc=0x8d7d, .a=0x5b, .x=0x0d, .y=0x16, .sp=0x20, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8d7d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8d7e, .a=0x5b, .x=0x0d, .y=0x16, .sp=0x20, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8d7d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8d7d, .value=0x60, .type=IO_READ},
        {.addr=0x8d7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0373) {
    const struct CPU_State initial_cpu = {.pc=0x8a47, .a=0xb9, .x=0x1d, .y=0xfb, .sp=0x6a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8a47, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8a48, .a=0xb9, .x=0x1d, .y=0xfb, .sp=0x6a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8a47, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8a47, .value=0x60, .type=IO_READ},
        {.addr=0x8a48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0374) {
    const struct CPU_State initial_cpu = {.pc=0x8131, .a=0xab, .x=0x2f, .y=0xbf, .sp=0xb6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x8131, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8132, .a=0xab, .x=0x2f, .y=0xbf, .sp=0xb6, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x8131, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8131, .value=0x60, .type=IO_READ},
        {.addr=0x8132, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0375) {
    const struct CPU_State initial_cpu = {.pc=0x4bb3, .a=0x71, .x=0xee, .y=0x55, .sp=0x5f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x4bb3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4bb4, .a=0x71, .x=0xee, .y=0x55, .sp=0x5f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x4bb3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4bb3, .value=0x60, .type=IO_READ},
        {.addr=0x4bb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0376) {
    const struct CPU_State initial_cpu = {.pc=0x8766, .a=0xcb, .x=0x61, .y=0x44, .sp=0x01, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8766, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8767, .a=0xcb, .x=0x61, .y=0x44, .sp=0x01, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x8766, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8766, .value=0x60, .type=IO_READ},
        {.addr=0x8767, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0377) {
    const struct CPU_State initial_cpu = {.pc=0x4cf7, .a=0xc6, .x=0xf0, .y=0x54, .sp=0xf4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4cf8, .a=0xc6, .x=0xf0, .y=0x54, .sp=0xf4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4cf7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4cf7, .value=0x60, .type=IO_READ},
        {.addr=0x4cf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0378) {
    const struct CPU_State initial_cpu = {.pc=0x4bac, .a=0xf8, .x=0x04, .y=0x5e, .sp=0x5e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4bac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4bad, .a=0xf8, .x=0x04, .y=0x5e, .sp=0x5e, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x4bac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4bac, .value=0x60, .type=IO_READ},
        {.addr=0x4bad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0379) {
    const struct CPU_State initial_cpu = {.pc=0xaa5e, .a=0x32, .x=0xe3, .y=0x8f, .sp=0x34, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaa5f, .a=0x32, .x=0xe3, .y=0x8f, .sp=0x34, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xaa5e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaa5e, .value=0x60, .type=IO_READ},
        {.addr=0xaa5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_037A) {
    const struct CPU_State initial_cpu = {.pc=0xf240, .a=0x70, .x=0x67, .y=0xb1, .sp=0x72, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf240, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf241, .a=0x70, .x=0x67, .y=0xb1, .sp=0x72, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xf240, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf240, .value=0x60, .type=IO_READ},
        {.addr=0xf241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_037B) {
    const struct CPU_State initial_cpu = {.pc=0xe10c, .a=0x62, .x=0x59, .y=0xfd, .sp=0x22, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe10c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe10d, .a=0x62, .x=0x59, .y=0xfd, .sp=0x22, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xe10c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe10c, .value=0x60, .type=IO_READ},
        {.addr=0xe10d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_037C) {
    const struct CPU_State initial_cpu = {.pc=0x3eb1, .a=0xdd, .x=0x59, .y=0x90, .sp=0x8e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3eb2, .a=0xdd, .x=0x59, .y=0x90, .sp=0x8e, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x3eb1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3eb1, .value=0x60, .type=IO_READ},
        {.addr=0x3eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_037D) {
    const struct CPU_State initial_cpu = {.pc=0xad58, .a=0xb1, .x=0xfb, .y=0x08, .sp=0xb4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xad58, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xad59, .a=0xb1, .x=0xfb, .y=0x08, .sp=0xb4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xad58, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xad58, .value=0x60, .type=IO_READ},
        {.addr=0xad59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_037E) {
    const struct CPU_State initial_cpu = {.pc=0xc3c2, .a=0x46, .x=0xc9, .y=0x8b, .sp=0x7c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc3c3, .a=0x46, .x=0xc9, .y=0x8b, .sp=0x7c, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xc3c2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc3c2, .value=0x60, .type=IO_READ},
        {.addr=0xc3c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_037F) {
    const struct CPU_State initial_cpu = {.pc=0x487e, .a=0x43, .x=0x80, .y=0x40, .sp=0x41, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x487e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x487f, .a=0x43, .x=0x80, .y=0x40, .sp=0x41, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x487e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x487e, .value=0x60, .type=IO_READ},
        {.addr=0x487f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0380) {
    const struct CPU_State initial_cpu = {.pc=0x064c, .a=0xe8, .x=0xfa, .y=0x51, .sp=0x59, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x064c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x064d, .a=0xe8, .x=0xfa, .y=0x51, .sp=0x59, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x064c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x064c, .value=0x60, .type=IO_READ},
        {.addr=0x064d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0381) {
    const struct CPU_State initial_cpu = {.pc=0xa089, .a=0xa1, .x=0xde, .y=0x1a, .sp=0x5a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa089, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa08a, .a=0xa1, .x=0xde, .y=0x1a, .sp=0x5a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xa089, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa089, .value=0x60, .type=IO_READ},
        {.addr=0xa08a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0382) {
    const struct CPU_State initial_cpu = {.pc=0xbd21, .a=0x7e, .x=0x22, .y=0xef, .sp=0x1d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xbd21, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbd22, .a=0x7e, .x=0x22, .y=0xef, .sp=0x1d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbd21, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbd21, .value=0x60, .type=IO_READ},
        {.addr=0xbd22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0383) {
    const struct CPU_State initial_cpu = {.pc=0x9449, .a=0x2a, .x=0x3f, .y=0x47, .sp=0x68, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9449, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x944a, .a=0x2a, .x=0x3f, .y=0x47, .sp=0x68, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9449, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9449, .value=0x60, .type=IO_READ},
        {.addr=0x944a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0384) {
    const struct CPU_State initial_cpu = {.pc=0x0c07, .a=0x05, .x=0xaf, .y=0x98, .sp=0xf4, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0c07, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0c08, .a=0x05, .x=0xaf, .y=0x98, .sp=0xf4, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0c07, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0c07, .value=0x60, .type=IO_READ},
        {.addr=0x0c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2e6d, .a=0xb5, .x=0xd7, .y=0x9a, .sp=0xbc, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2e6d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2e6e, .a=0xb5, .x=0xd7, .y=0x9a, .sp=0xbc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2e6d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2e6d, .value=0x60, .type=IO_READ},
        {.addr=0x2e6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0386) {
    const struct CPU_State initial_cpu = {.pc=0xe47c, .a=0x17, .x=0x1d, .y=0xfe, .sp=0x08, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe47c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe47d, .a=0x17, .x=0x1d, .y=0xfe, .sp=0x08, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe47c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe47c, .value=0x60, .type=IO_READ},
        {.addr=0xe47d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0387) {
    const struct CPU_State initial_cpu = {.pc=0x8ff5, .a=0xea, .x=0x42, .y=0x3a, .sp=0xf8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8ff6, .a=0xea, .x=0x42, .y=0x3a, .sp=0xf8, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8ff5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8ff5, .value=0x60, .type=IO_READ},
        {.addr=0x8ff6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0388) {
    const struct CPU_State initial_cpu = {.pc=0x2065, .a=0x31, .x=0xfe, .y=0x23, .sp=0x4a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2065, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2066, .a=0x31, .x=0xfe, .y=0x23, .sp=0x4a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2065, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2065, .value=0x60, .type=IO_READ},
        {.addr=0x2066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0389) {
    const struct CPU_State initial_cpu = {.pc=0x7317, .a=0xd8, .x=0x8e, .y=0xec, .sp=0x17, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7317, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7318, .a=0xd8, .x=0x8e, .y=0xec, .sp=0x17, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x7317, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7317, .value=0x60, .type=IO_READ},
        {.addr=0x7318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_038A) {
    const struct CPU_State initial_cpu = {.pc=0xd367, .a=0x18, .x=0x46, .y=0x76, .sp=0x17, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xd367, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd368, .a=0x18, .x=0x46, .y=0x76, .sp=0x17, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xd367, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd367, .value=0x60, .type=IO_READ},
        {.addr=0xd368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7323, .a=0x68, .x=0xeb, .y=0xee, .sp=0xb7, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7323, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7324, .a=0x68, .x=0xeb, .y=0xee, .sp=0xb7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7323, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7323, .value=0x60, .type=IO_READ},
        {.addr=0x7324, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_038C) {
    const struct CPU_State initial_cpu = {.pc=0xab3a, .a=0xd0, .x=0x9d, .y=0x40, .sp=0x88, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xab3a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xab3b, .a=0xd0, .x=0x9d, .y=0x40, .sp=0x88, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xab3a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xab3a, .value=0x60, .type=IO_READ},
        {.addr=0xab3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_038D) {
    const struct CPU_State initial_cpu = {.pc=0xefb0, .a=0x37, .x=0x00, .y=0xe6, .sp=0xc6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xefb0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xefb1, .a=0x37, .x=0x00, .y=0xe6, .sp=0xc6, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xefb0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xefb0, .value=0x60, .type=IO_READ},
        {.addr=0xefb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_038E) {
    const struct CPU_State initial_cpu = {.pc=0x335c, .a=0x46, .x=0x81, .y=0x56, .sp=0xa6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x335c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x335d, .a=0x46, .x=0x81, .y=0x56, .sp=0xa6, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x335c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x335c, .value=0x60, .type=IO_READ},
        {.addr=0x335d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_038F) {
    const struct CPU_State initial_cpu = {.pc=0x1520, .a=0x94, .x=0x86, .y=0xb3, .sp=0x9f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1520, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1521, .a=0x94, .x=0x86, .y=0xb3, .sp=0x9f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1520, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1520, .value=0x60, .type=IO_READ},
        {.addr=0x1521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0390) {
    const struct CPU_State initial_cpu = {.pc=0x9032, .a=0x3b, .x=0xf5, .y=0x1f, .sp=0x31, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x9032, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9033, .a=0x3b, .x=0xf5, .y=0x1f, .sp=0x31, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9032, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9032, .value=0x60, .type=IO_READ},
        {.addr=0x9033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0391) {
    const struct CPU_State initial_cpu = {.pc=0xafd6, .a=0x65, .x=0x4a, .y=0xd5, .sp=0x66, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xafd6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xafd7, .a=0x65, .x=0x4a, .y=0xd5, .sp=0x66, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xafd6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xafd6, .value=0x60, .type=IO_READ},
        {.addr=0xafd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0392) {
    const struct CPU_State initial_cpu = {.pc=0xb442, .a=0xf2, .x=0x69, .y=0xe6, .sp=0xe8, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb442, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb443, .a=0xf2, .x=0x69, .y=0xe6, .sp=0xe8, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xb442, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb442, .value=0x60, .type=IO_READ},
        {.addr=0xb443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0393) {
    const struct CPU_State initial_cpu = {.pc=0x242a, .a=0x20, .x=0x53, .y=0xa6, .sp=0x07, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x242a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x242b, .a=0x20, .x=0x53, .y=0xa6, .sp=0x07, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x242a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x242a, .value=0x60, .type=IO_READ},
        {.addr=0x242b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0394) {
    const struct CPU_State initial_cpu = {.pc=0x9746, .a=0x01, .x=0x07, .y=0x7c, .sp=0x56, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9746, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9747, .a=0x01, .x=0x07, .y=0x7c, .sp=0x56, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x9746, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9746, .value=0x60, .type=IO_READ},
        {.addr=0x9747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0395) {
    const struct CPU_State initial_cpu = {.pc=0x2a10, .a=0x56, .x=0x44, .y=0x37, .sp=0x18, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2a10, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2a11, .a=0x56, .x=0x44, .y=0x37, .sp=0x18, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2a10, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2a10, .value=0x60, .type=IO_READ},
        {.addr=0x2a11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0396) {
    const struct CPU_State initial_cpu = {.pc=0xbb3b, .a=0xdf, .x=0x63, .y=0x48, .sp=0xd0, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb3b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbb3c, .a=0xdf, .x=0x63, .y=0x48, .sp=0xd0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xbb3b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbb3b, .value=0x60, .type=IO_READ},
        {.addr=0xbb3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0397) {
    const struct CPU_State initial_cpu = {.pc=0x26b8, .a=0xb9, .x=0x22, .y=0xb0, .sp=0xad, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x26b8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x26b9, .a=0xb9, .x=0x22, .y=0xb0, .sp=0xad, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x26b8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x26b8, .value=0x60, .type=IO_READ},
        {.addr=0x26b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0398) {
    const struct CPU_State initial_cpu = {.pc=0x22bd, .a=0x42, .x=0x5f, .y=0x3d, .sp=0x60, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x22bd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x22be, .a=0x42, .x=0x5f, .y=0x3d, .sp=0x60, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x22bd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x22bd, .value=0x60, .type=IO_READ},
        {.addr=0x22be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4b48, .a=0x2f, .x=0x20, .y=0x6a, .sp=0x5d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4b48, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4b49, .a=0x2f, .x=0x20, .y=0x6a, .sp=0x5d, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x4b48, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4b48, .value=0x60, .type=IO_READ},
        {.addr=0x4b49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_039A) {
    const struct CPU_State initial_cpu = {.pc=0x69a7, .a=0xc1, .x=0x6b, .y=0x72, .sp=0x36, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x69a7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x69a8, .a=0xc1, .x=0x6b, .y=0x72, .sp=0x36, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x69a7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x69a7, .value=0x60, .type=IO_READ},
        {.addr=0x69a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_039B) {
    const struct CPU_State initial_cpu = {.pc=0xc461, .a=0x22, .x=0xdf, .y=0x19, .sp=0x2a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xc461, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc462, .a=0x22, .x=0xdf, .y=0x19, .sp=0x2a, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xc461, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc461, .value=0x60, .type=IO_READ},
        {.addr=0xc462, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_039C) {
    const struct CPU_State initial_cpu = {.pc=0x91e6, .a=0xa1, .x=0x70, .y=0x7b, .sp=0xc0, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x91e6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x91e7, .a=0xa1, .x=0x70, .y=0x7b, .sp=0xc0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x91e6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x91e6, .value=0x60, .type=IO_READ},
        {.addr=0x91e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_039D) {
    const struct CPU_State initial_cpu = {.pc=0x8b10, .a=0x85, .x=0xda, .y=0x21, .sp=0x0d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x8b10, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8b11, .a=0x85, .x=0xda, .y=0x21, .sp=0x0d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8b10, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8b10, .value=0x60, .type=IO_READ},
        {.addr=0x8b11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_039E) {
    const struct CPU_State initial_cpu = {.pc=0xc9ad, .a=0x2c, .x=0x82, .y=0xb2, .sp=0x2f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xc9ad, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc9ae, .a=0x2c, .x=0x82, .y=0xb2, .sp=0x2f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xc9ad, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc9ad, .value=0x60, .type=IO_READ},
        {.addr=0xc9ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_039F) {
    const struct CPU_State initial_cpu = {.pc=0xe5a1, .a=0x27, .x=0xce, .y=0x6f, .sp=0x91, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe5a2, .a=0x27, .x=0xce, .y=0x6f, .sp=0x91, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xe5a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe5a1, .value=0x60, .type=IO_READ},
        {.addr=0xe5a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x002e, .a=0xc0, .x=0xa8, .y=0xb8, .sp=0xfd, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x002f, .a=0xc0, .x=0xa8, .y=0xb8, .sp=0xfd, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x002e, .value=0x60, .type=IO_READ},
        {.addr=0x002f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x7e47, .a=0x24, .x=0xa2, .y=0xce, .sp=0x2a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7e47, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7e48, .a=0x24, .x=0xa2, .y=0xce, .sp=0x2a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7e47, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7e47, .value=0x60, .type=IO_READ},
        {.addr=0x7e48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x62bd, .a=0x98, .x=0xf8, .y=0xeb, .sp=0xe4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x62bd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x62be, .a=0x98, .x=0xf8, .y=0xeb, .sp=0xe4, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x62bd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x62bd, .value=0x60, .type=IO_READ},
        {.addr=0x62be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x42ff, .a=0xb5, .x=0x2d, .y=0xac, .sp=0x73, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x42ff, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4300, .a=0xb5, .x=0x2d, .y=0xac, .sp=0x73, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x42ff, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x42ff, .value=0x60, .type=IO_READ},
        {.addr=0x4300, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xa841, .a=0xa4, .x=0xdc, .y=0xc2, .sp=0x96, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa841, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa842, .a=0xa4, .x=0xdc, .y=0xc2, .sp=0x96, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xa841, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa841, .value=0x60, .type=IO_READ},
        {.addr=0xa842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x03c4, .a=0xd6, .x=0x05, .y=0xa0, .sp=0xbc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x03c4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x03c5, .a=0xd6, .x=0x05, .y=0xa0, .sp=0xbc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x03c4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x03c4, .value=0x60, .type=IO_READ},
        {.addr=0x03c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x84c8, .a=0x1a, .x=0xc8, .y=0x81, .sp=0x4e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x84c8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x84c9, .a=0x1a, .x=0xc8, .y=0x81, .sp=0x4e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x84c8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x84c8, .value=0x60, .type=IO_READ},
        {.addr=0x84c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x5e97, .a=0x64, .x=0x93, .y=0xb7, .sp=0x57, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5e97, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5e98, .a=0x64, .x=0x93, .y=0xb7, .sp=0x57, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5e97, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5e97, .value=0x60, .type=IO_READ},
        {.addr=0x5e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xf286, .a=0xa5, .x=0x43, .y=0xe4, .sp=0x33, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xf286, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf287, .a=0xa5, .x=0x43, .y=0xe4, .sp=0x33, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xf286, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf286, .value=0x60, .type=IO_READ},
        {.addr=0xf287, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x795c, .a=0xa6, .x=0x26, .y=0x96, .sp=0xbf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x795c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x795d, .a=0xa6, .x=0x26, .y=0x96, .sp=0xbf, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x795c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x795c, .value=0x60, .type=IO_READ},
        {.addr=0x795d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x0e4a, .a=0x03, .x=0xa6, .y=0x92, .sp=0x5b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0e4a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0e4b, .a=0x03, .x=0xa6, .y=0x92, .sp=0x5b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0e4a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0e4a, .value=0x60, .type=IO_READ},
        {.addr=0x0e4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x587c, .a=0x4c, .x=0xa4, .y=0xeb, .sp=0xd1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x587c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x587d, .a=0x4c, .x=0xa4, .y=0xeb, .sp=0xd1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x587c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x587c, .value=0x60, .type=IO_READ},
        {.addr=0x587d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xbbbb, .a=0x98, .x=0x40, .y=0xc2, .sp=0x74, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xbbbb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbbbc, .a=0x98, .x=0x40, .y=0xc2, .sp=0x74, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xbbbb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbbbb, .value=0x60, .type=IO_READ},
        {.addr=0xbbbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x5652, .a=0xc0, .x=0xac, .y=0xee, .sp=0xae, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5652, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5653, .a=0xc0, .x=0xac, .y=0xee, .sp=0xae, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5652, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5652, .value=0x60, .type=IO_READ},
        {.addr=0x5653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x83a1, .a=0x1e, .x=0x34, .y=0x0c, .sp=0x4e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x83a1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x83a2, .a=0x1e, .x=0x34, .y=0x0c, .sp=0x4e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x83a1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x83a1, .value=0x60, .type=IO_READ},
        {.addr=0x83a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x85d0, .a=0x4f, .x=0x17, .y=0xc9, .sp=0x38, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x85d0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x85d1, .a=0x4f, .x=0x17, .y=0xc9, .sp=0x38, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x85d0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x85d0, .value=0x60, .type=IO_READ},
        {.addr=0x85d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x0099, .a=0xe8, .x=0x75, .y=0x69, .sp=0xdb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x009a, .a=0xe8, .x=0x75, .y=0x69, .sp=0xdb, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0099, .value=0x60, .type=IO_READ},
        {.addr=0x009a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x8bf4, .a=0x3f, .x=0xb0, .y=0x39, .sp=0x0c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x8bf4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8bf5, .a=0x3f, .x=0xb0, .y=0x39, .sp=0x0c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8bf4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8bf4, .value=0x60, .type=IO_READ},
        {.addr=0x8bf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xfbe9, .a=0x38, .x=0x50, .y=0xe0, .sp=0x3a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfbea, .a=0x38, .x=0x50, .y=0xe0, .sp=0x3a, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xfbe9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfbe9, .value=0x60, .type=IO_READ},
        {.addr=0xfbea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xf1f7, .a=0x58, .x=0x86, .y=0xa1, .sp=0xdd, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf1f7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf1f8, .a=0x58, .x=0x86, .y=0xa1, .sp=0xdd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf1f7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf1f7, .value=0x60, .type=IO_READ},
        {.addr=0xf1f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x64a6, .a=0xe1, .x=0x94, .y=0xf6, .sp=0x5a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x64a6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x64a7, .a=0xe1, .x=0x94, .y=0xf6, .sp=0x5a, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x64a6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x64a6, .value=0x60, .type=IO_READ},
        {.addr=0x64a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1b7f, .a=0x2e, .x=0x2b, .y=0xae, .sp=0x0e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x1b7f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1b80, .a=0x2e, .x=0x2b, .y=0xae, .sp=0x0e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x1b7f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1b7f, .value=0x60, .type=IO_READ},
        {.addr=0x1b80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x904f, .a=0xb6, .x=0xfb, .y=0x1f, .sp=0xa1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x904f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9050, .a=0xb6, .x=0xfb, .y=0x1f, .sp=0xa1, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x904f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x904f, .value=0x60, .type=IO_READ},
        {.addr=0x9050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x8c4f, .a=0xdd, .x=0x65, .y=0x2b, .sp=0x9b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8c4f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8c50, .a=0xdd, .x=0x65, .y=0x2b, .sp=0x9b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x8c4f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8c4f, .value=0x60, .type=IO_READ},
        {.addr=0x8c50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x54ac, .a=0x4f, .x=0xfc, .y=0x76, .sp=0x00, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x54ac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x54ad, .a=0x4f, .x=0xfc, .y=0x76, .sp=0x00, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x54ac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x54ac, .value=0x60, .type=IO_READ},
        {.addr=0x54ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x1539, .a=0xfd, .x=0xcb, .y=0x31, .sp=0xdf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x1539, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x153a, .a=0xfd, .x=0xcb, .y=0x31, .sp=0xdf, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1539, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1539, .value=0x60, .type=IO_READ},
        {.addr=0x153a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x2945, .a=0x9a, .x=0xfb, .y=0xe5, .sp=0x36, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x2945, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2946, .a=0x9a, .x=0xfb, .y=0xe5, .sp=0x36, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x2945, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2945, .value=0x60, .type=IO_READ},
        {.addr=0x2946, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x74e7, .a=0xa3, .x=0xbf, .y=0xf3, .sp=0x38, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x74e7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x74e8, .a=0xa3, .x=0xbf, .y=0xf3, .sp=0x38, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x74e7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x74e7, .value=0x60, .type=IO_READ},
        {.addr=0x74e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xb392, .a=0x00, .x=0xfa, .y=0x8b, .sp=0x6a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb392, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb393, .a=0x00, .x=0xfa, .y=0x8b, .sp=0x6a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb392, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb392, .value=0x60, .type=IO_READ},
        {.addr=0xb393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xe1f0, .a=0x0b, .x=0xf0, .y=0x92, .sp=0x7f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xe1f0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe1f1, .a=0x0b, .x=0xf0, .y=0x92, .sp=0x7f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe1f0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe1f0, .value=0x60, .type=IO_READ},
        {.addr=0xe1f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xd6b4, .a=0x8e, .x=0x4c, .y=0x9a, .sp=0x26, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd6b5, .a=0x8e, .x=0x4c, .y=0x9a, .sp=0x26, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xd6b4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd6b4, .value=0x60, .type=IO_READ},
        {.addr=0xd6b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xbbe1, .a=0xab, .x=0x28, .y=0x15, .sp=0xc1, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xbbe1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbbe2, .a=0xab, .x=0x28, .y=0x15, .sp=0xc1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbbe1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbbe1, .value=0x60, .type=IO_READ},
        {.addr=0xbbe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x1947, .a=0x15, .x=0xca, .y=0xe7, .sp=0xaa, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x1947, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1948, .a=0x15, .x=0xca, .y=0xe7, .sp=0xaa, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1947, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1947, .value=0x60, .type=IO_READ},
        {.addr=0x1948, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x6622, .a=0x49, .x=0xba, .y=0x71, .sp=0xbe, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6622, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6623, .a=0x49, .x=0xba, .y=0x71, .sp=0xbe, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x6622, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6622, .value=0x60, .type=IO_READ},
        {.addr=0x6623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xb8e7, .a=0x0c, .x=0xf6, .y=0x42, .sp=0xf8, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb8e7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb8e8, .a=0x0c, .x=0xf6, .y=0x42, .sp=0xf8, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xb8e7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb8e7, .value=0x60, .type=IO_READ},
        {.addr=0xb8e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xe90e, .a=0x14, .x=0x65, .y=0xe3, .sp=0x6a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe90e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe90f, .a=0x14, .x=0x65, .y=0xe3, .sp=0x6a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe90e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe90e, .value=0x60, .type=IO_READ},
        {.addr=0xe90f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x8c87, .a=0x22, .x=0x71, .y=0x9e, .sp=0x2a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x8c87, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8c88, .a=0x22, .x=0x71, .y=0x9e, .sp=0x2a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8c87, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8c87, .value=0x60, .type=IO_READ},
        {.addr=0x8c88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xe513, .a=0x0b, .x=0x80, .y=0x7b, .sp=0xca, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe513, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe514, .a=0x0b, .x=0x80, .y=0x7b, .sp=0xca, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe513, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe513, .value=0x60, .type=IO_READ},
        {.addr=0xe514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf9f6, .a=0xfe, .x=0x5a, .y=0x57, .sp=0xa8, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf9f7, .a=0xfe, .x=0x5a, .y=0x57, .sp=0xa8, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xf9f6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf9f6, .value=0x60, .type=IO_READ},
        {.addr=0xf9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x41dd, .a=0x6e, .x=0xd0, .y=0x73, .sp=0xc4, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x41dd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x41de, .a=0x6e, .x=0xd0, .y=0x73, .sp=0xc4, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x41dd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x41dd, .value=0x60, .type=IO_READ},
        {.addr=0x41de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x40b6, .a=0x03, .x=0x1e, .y=0x81, .sp=0x76, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x40b6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x40b7, .a=0x03, .x=0x1e, .y=0x81, .sp=0x76, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x40b6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x40b6, .value=0x60, .type=IO_READ},
        {.addr=0x40b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xa3cb, .a=0xf1, .x=0xf0, .y=0xfe, .sp=0x04, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa3cb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa3cc, .a=0xf1, .x=0xf0, .y=0xfe, .sp=0x04, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa3cb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa3cb, .value=0x60, .type=IO_READ},
        {.addr=0xa3cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x1d43, .a=0xd1, .x=0xb2, .y=0x73, .sp=0xfa, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d43, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1d44, .a=0xd1, .x=0xb2, .y=0x73, .sp=0xfa, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1d43, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1d43, .value=0x60, .type=IO_READ},
        {.addr=0x1d44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x7cac, .a=0xfe, .x=0x41, .y=0x25, .sp=0xdb, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7cac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7cad, .a=0xfe, .x=0x41, .y=0x25, .sp=0xdb, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x7cac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7cac, .value=0x60, .type=IO_READ},
        {.addr=0x7cad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xfaef, .a=0x4b, .x=0xa4, .y=0x0d, .sp=0xc1, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xfaef, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfaf0, .a=0x4b, .x=0xa4, .y=0x0d, .sp=0xc1, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xfaef, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfaef, .value=0x60, .type=IO_READ},
        {.addr=0xfaf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x8c43, .a=0xc0, .x=0xcb, .y=0x67, .sp=0xcc, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x8c43, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8c44, .a=0xc0, .x=0xcb, .y=0x67, .sp=0xcc, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8c43, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8c43, .value=0x60, .type=IO_READ},
        {.addr=0x8c44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xebf8, .a=0x7c, .x=0xa8, .y=0x59, .sp=0x0e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xebf8, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xebf9, .a=0x7c, .x=0xa8, .y=0x59, .sp=0x0e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xebf8, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xebf8, .value=0x60, .type=IO_READ},
        {.addr=0xebf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x8326, .a=0x34, .x=0x23, .y=0x83, .sp=0x45, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8326, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8327, .a=0x34, .x=0x23, .y=0x83, .sp=0x45, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8326, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8326, .value=0x60, .type=IO_READ},
        {.addr=0x8327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x52aa, .a=0xef, .x=0x05, .y=0x59, .sp=0xef, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x52aa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x52ab, .a=0xef, .x=0x05, .y=0x59, .sp=0xef, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x52aa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x52aa, .value=0x60, .type=IO_READ},
        {.addr=0x52ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x5ed0, .a=0x73, .x=0x0d, .y=0x28, .sp=0x33, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5ed1, .a=0x73, .x=0x0d, .y=0x28, .sp=0x33, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x5ed0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5ed0, .value=0x60, .type=IO_READ},
        {.addr=0x5ed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xa840, .a=0x48, .x=0xcd, .y=0x29, .sp=0x39, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa840, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa841, .a=0x48, .x=0xcd, .y=0x29, .sp=0x39, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xa840, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa840, .value=0x60, .type=IO_READ},
        {.addr=0xa841, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xefd4, .a=0x5e, .x=0xab, .y=0x93, .sp=0x37, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xefd4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xefd5, .a=0x5e, .x=0xab, .y=0x93, .sp=0x37, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xefd4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xefd4, .value=0x60, .type=IO_READ},
        {.addr=0xefd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x43a5, .a=0xc9, .x=0x1d, .y=0xe0, .sp=0x93, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x43a5, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x43a6, .a=0xc9, .x=0x1d, .y=0xe0, .sp=0x93, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x43a5, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x43a5, .value=0x60, .type=IO_READ},
        {.addr=0x43a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x8a22, .a=0xaf, .x=0x99, .y=0x91, .sp=0x7e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8a22, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8a23, .a=0xaf, .x=0x99, .y=0x91, .sp=0x7e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8a22, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8a22, .value=0x60, .type=IO_READ},
        {.addr=0x8a23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x0b42, .a=0x1d, .x=0x7b, .y=0xba, .sp=0x8f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0b42, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0b43, .a=0x1d, .x=0x7b, .y=0xba, .sp=0x8f, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0b42, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0b42, .value=0x60, .type=IO_READ},
        {.addr=0x0b43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xc626, .a=0x57, .x=0x89, .y=0xfc, .sp=0xea, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc626, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc627, .a=0x57, .x=0x89, .y=0xfc, .sp=0xea, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xc626, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc626, .value=0x60, .type=IO_READ},
        {.addr=0xc627, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xa6b4, .a=0x8d, .x=0x8d, .y=0x5f, .sp=0x45, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa6b5, .a=0x8d, .x=0x8d, .y=0x5f, .sp=0x45, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xa6b4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa6b4, .value=0x60, .type=IO_READ},
        {.addr=0xa6b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xd563, .a=0x42, .x=0x23, .y=0xc9, .sp=0xab, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd563, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd564, .a=0x42, .x=0x23, .y=0xc9, .sp=0xab, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xd563, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd563, .value=0x60, .type=IO_READ},
        {.addr=0xd564, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x858a, .a=0xfe, .x=0x6b, .y=0xb9, .sp=0xc5, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x858a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x858b, .a=0xfe, .x=0x6b, .y=0xb9, .sp=0xc5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x858a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x858a, .value=0x60, .type=IO_READ},
        {.addr=0x858b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x6ec6, .a=0x62, .x=0x28, .y=0xff, .sp=0xb4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6ec7, .a=0x62, .x=0x28, .y=0xff, .sp=0xb4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6ec6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6ec6, .value=0x60, .type=IO_READ},
        {.addr=0x6ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xeb65, .a=0xf1, .x=0x5d, .y=0x2c, .sp=0x7d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xeb65, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeb66, .a=0xf1, .x=0x5d, .y=0x2c, .sp=0x7d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xeb65, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xeb65, .value=0x60, .type=IO_READ},
        {.addr=0xeb66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xaa0e, .a=0xa7, .x=0xd6, .y=0xf4, .sp=0xc5, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0e, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaa0f, .a=0xa7, .x=0xd6, .y=0xf4, .sp=0xc5, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xaa0e, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaa0e, .value=0x60, .type=IO_READ},
        {.addr=0xaa0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xf4b1, .a=0xd1, .x=0x32, .y=0xae, .sp=0xeb, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf4b2, .a=0xd1, .x=0x32, .y=0xae, .sp=0xeb, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xf4b1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf4b1, .value=0x60, .type=IO_READ},
        {.addr=0xf4b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x706f, .a=0xda, .x=0x63, .y=0xf4, .sp=0x7a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x706f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7070, .a=0xda, .x=0x63, .y=0xf4, .sp=0x7a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x706f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x706f, .value=0x60, .type=IO_READ},
        {.addr=0x7070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x32db, .a=0xed, .x=0x57, .y=0xd3, .sp=0xf0, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x32db, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x32dc, .a=0xed, .x=0x57, .y=0xd3, .sp=0xf0, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x32db, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x32db, .value=0x60, .type=IO_READ},
        {.addr=0x32dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xf586, .a=0x27, .x=0xa4, .y=0xdb, .sp=0x8b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xf586, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf587, .a=0x27, .x=0xa4, .y=0xdb, .sp=0x8b, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xf586, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf586, .value=0x60, .type=IO_READ},
        {.addr=0xf587, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xaed0, .a=0x51, .x=0x5b, .y=0x1b, .sp=0xed, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xaed0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaed1, .a=0x51, .x=0x5b, .y=0x1b, .sp=0xed, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xaed0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaed0, .value=0x60, .type=IO_READ},
        {.addr=0xaed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x97e2, .a=0x45, .x=0x76, .y=0xd5, .sp=0xec, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x97e2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x97e3, .a=0x45, .x=0x76, .y=0xd5, .sp=0xec, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x97e2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x97e2, .value=0x60, .type=IO_READ},
        {.addr=0x97e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x5423, .a=0x63, .x=0x61, .y=0x2e, .sp=0x5c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5423, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5424, .a=0x63, .x=0x61, .y=0x2e, .sp=0x5c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5423, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x5423, .value=0x60, .type=IO_READ},
        {.addr=0x5424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x40ae, .a=0xd4, .x=0xbf, .y=0x6f, .sp=0x67, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x40ae, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x40af, .a=0xd4, .x=0xbf, .y=0x6f, .sp=0x67, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x40ae, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x40ae, .value=0x60, .type=IO_READ},
        {.addr=0x40af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x8888, .a=0xba, .x=0xee, .y=0x0c, .sp=0xc8, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8888, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8889, .a=0xba, .x=0xee, .y=0x0c, .sp=0xc8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8888, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8888, .value=0x60, .type=IO_READ},
        {.addr=0x8889, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_60, _60_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x3c8f, .a=0x69, .x=0xe4, .y=0x97, .sp=0x49, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x3c8f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3c90, .a=0x69, .x=0xe4, .y=0x97, .sp=0x49, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x3c8f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3c8f, .value=0x60, .type=IO_READ},
        {.addr=0x3c90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("60 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
