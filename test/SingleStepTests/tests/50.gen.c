#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_50, _50_0000) {
    const struct CPU_State initial_cpu = {.pc=0x0799, .a=0x07, .x=0x30, .y=0x25, .sp=0xaf, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0799, .value=0x50}, {.addr=0x079a, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x07b9, .a=0x07, .x=0x30, .y=0x25, .sp=0xaf, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0799, .value=0x50}, {.addr=0x079a, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x0799, .value=0x50, .type=IO_READ},
        {.addr=0x079a, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0001) {
    const struct CPU_State initial_cpu = {.pc=0x73c0, .a=0xa6, .x=0x94, .y=0x4c, .sp=0x67, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x73c0, .value=0x50}, {.addr=0x73c1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x73cf, .a=0xa6, .x=0x94, .y=0x4c, .sp=0x67, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x73c0, .value=0x50}, {.addr=0x73c1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x73c0, .value=0x50, .type=IO_READ},
        {.addr=0x73c1, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0002) {
    const struct CPU_State initial_cpu = {.pc=0xf3bc, .a=0x62, .x=0xe0, .y=0xc2, .sp=0x21, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf3bc, .value=0x50}, {.addr=0xf3bd, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xf3fd, .a=0x62, .x=0xe0, .y=0xc2, .sp=0x21, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf3bc, .value=0x50}, {.addr=0xf3bd, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xf3bc, .value=0x50, .type=IO_READ},
        {.addr=0xf3bd, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0003) {
    const struct CPU_State initial_cpu = {.pc=0xadd6, .a=0xa6, .x=0x80, .y=0x66, .sp=0x70, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xadd6, .value=0x50}, {.addr=0xadd7, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xae4d, .a=0xa6, .x=0x80, .y=0x66, .sp=0x70, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xadd6, .value=0x50}, {.addr=0xadd7, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xadd6, .value=0x50, .type=IO_READ},
        {.addr=0xadd7, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0004) {
    const struct CPU_State initial_cpu = {.pc=0x6663, .a=0x79, .x=0xf2, .y=0xe4, .sp=0xa9, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6663, .value=0x50}, {.addr=0x6664, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x6665, .a=0x79, .x=0xf2, .y=0xe4, .sp=0xa9, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x6663, .value=0x50}, {.addr=0x6664, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x6663, .value=0x50, .type=IO_READ},
        {.addr=0x6664, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0005) {
    const struct CPU_State initial_cpu = {.pc=0xc050, .a=0x2c, .x=0x64, .y=0xdb, .sp=0x06, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc050, .value=0x50}, {.addr=0xc051, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xc014, .a=0x2c, .x=0x64, .y=0xdb, .sp=0x06, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc050, .value=0x50}, {.addr=0xc051, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xc050, .value=0x50, .type=IO_READ},
        {.addr=0xc051, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb92a, .a=0xee, .x=0x6e, .y=0xfb, .sp=0x35, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb92a, .value=0x50}, {.addr=0xb92b, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xb927, .a=0xee, .x=0x6e, .y=0xfb, .sp=0x35, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb92a, .value=0x50}, {.addr=0xb92b, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xb92a, .value=0x50, .type=IO_READ},
        {.addr=0xb92b, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0007) {
    const struct CPU_State initial_cpu = {.pc=0x09da, .a=0x81, .x=0xe8, .y=0xde, .sp=0xdc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x09da, .value=0x50}, {.addr=0x09db, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x09dc, .a=0x81, .x=0xe8, .y=0xde, .sp=0xdc, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x09da, .value=0x50}, {.addr=0x09db, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x09da, .value=0x50, .type=IO_READ},
        {.addr=0x09db, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0008) {
    const struct CPU_State initial_cpu = {.pc=0x8a9e, .a=0xfc, .x=0x66, .y=0xb5, .sp=0xd7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8a9e, .value=0x50}, {.addr=0x8a9f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8aa0, .a=0xfc, .x=0x66, .y=0xb5, .sp=0xd7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8a9e, .value=0x50}, {.addr=0x8a9f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8a9e, .value=0x50, .type=IO_READ},
        {.addr=0x8a9f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0009) {
    const struct CPU_State initial_cpu = {.pc=0x8a00, .a=0x91, .x=0xa7, .y=0x44, .sp=0x6b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a00, .value=0x50}, {.addr=0x8a01, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8a02, .a=0x91, .x=0xa7, .y=0x44, .sp=0x6b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8a00, .value=0x50}, {.addr=0x8a01, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8a00, .value=0x50, .type=IO_READ},
        {.addr=0x8a01, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_000A) {
    const struct CPU_State initial_cpu = {.pc=0x9724, .a=0x99, .x=0xae, .y=0x97, .sp=0x83, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9724, .value=0x50}, {.addr=0x9725, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x9726, .a=0x99, .x=0xae, .y=0x97, .sp=0x83, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x9724, .value=0x50}, {.addr=0x9725, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x9724, .value=0x50, .type=IO_READ},
        {.addr=0x9725, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_000B) {
    const struct CPU_State initial_cpu = {.pc=0x2239, .a=0xc1, .x=0x97, .y=0x50, .sp=0x21, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x2239, .value=0x50}, {.addr=0x223a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x223b, .a=0xc1, .x=0x97, .y=0x50, .sp=0x21, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x2239, .value=0x50}, {.addr=0x223a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2239, .value=0x50, .type=IO_READ},
        {.addr=0x223a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_000C) {
    const struct CPU_State initial_cpu = {.pc=0x27f3, .a=0x08, .x=0xde, .y=0xc7, .sp=0x39, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x27f3, .value=0x50}, {.addr=0x27f4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2795, .a=0x08, .x=0xde, .y=0xc7, .sp=0x39, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x27f3, .value=0x50}, {.addr=0x27f4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x27f3, .value=0x50, .type=IO_READ},
        {.addr=0x27f4, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_000D) {
    const struct CPU_State initial_cpu = {.pc=0x397d, .a=0xee, .x=0xb7, .y=0xab, .sp=0x71, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x397d, .value=0x50}, {.addr=0x397e, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x397f, .a=0xee, .x=0xb7, .y=0xab, .sp=0x71, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x397d, .value=0x50}, {.addr=0x397e, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x397d, .value=0x50, .type=IO_READ},
        {.addr=0x397e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_000E) {
    const struct CPU_State initial_cpu = {.pc=0x7258, .a=0x56, .x=0xcd, .y=0xda, .sp=0xf6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7258, .value=0x50}, {.addr=0x7259, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7216, .a=0x56, .x=0xcd, .y=0xda, .sp=0xf6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7258, .value=0x50}, {.addr=0x7259, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7258, .value=0x50, .type=IO_READ},
        {.addr=0x7259, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_000F) {
    const struct CPU_State initial_cpu = {.pc=0x3f6b, .a=0xc6, .x=0x50, .y=0x9d, .sp=0xd5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3f6b, .value=0x50}, {.addr=0x3f6c, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3f6d, .a=0xc6, .x=0x50, .y=0x9d, .sp=0xd5, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x3f6b, .value=0x50}, {.addr=0x3f6c, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3f6b, .value=0x50, .type=IO_READ},
        {.addr=0x3f6c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0010) {
    const struct CPU_State initial_cpu = {.pc=0xea77, .a=0x64, .x=0xbd, .y=0x96, .sp=0xb4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xea77, .value=0x50}, {.addr=0xea78, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xea6e, .a=0x64, .x=0xbd, .y=0x96, .sp=0xb4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xea77, .value=0x50}, {.addr=0xea78, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xea77, .value=0x50, .type=IO_READ},
        {.addr=0xea78, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6a4e, .a=0x41, .x=0x7f, .y=0x74, .sp=0x31, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6a4e, .value=0x50}, {.addr=0x6a4f, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x6ab8, .a=0x41, .x=0x7f, .y=0x74, .sp=0x31, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6a4e, .value=0x50}, {.addr=0x6a4f, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x6a4e, .value=0x50, .type=IO_READ},
        {.addr=0x6a4f, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0012) {
    const struct CPU_State initial_cpu = {.pc=0x1910, .a=0x57, .x=0xba, .y=0xc7, .sp=0xe3, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1910, .value=0x50}, {.addr=0x1911, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x18d2, .a=0x57, .x=0xba, .y=0xc7, .sp=0xe3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1910, .value=0x50}, {.addr=0x1911, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1910, .value=0x50, .type=IO_READ},
        {.addr=0x1911, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0013) {
    const struct CPU_State initial_cpu = {.pc=0xceec, .a=0x79, .x=0x11, .y=0x7e, .sp=0x6f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xceec, .value=0x50}, {.addr=0xceed, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xceee, .a=0x79, .x=0x11, .y=0x7e, .sp=0x6f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xceec, .value=0x50}, {.addr=0xceed, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xceec, .value=0x50, .type=IO_READ},
        {.addr=0xceed, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0014) {
    const struct CPU_State initial_cpu = {.pc=0x4fef, .a=0x7d, .x=0xa4, .y=0x48, .sp=0x8f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x4fef, .value=0x50}, {.addr=0x4ff0, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x4ff1, .a=0x7d, .x=0xa4, .y=0x48, .sp=0x8f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4fef, .value=0x50}, {.addr=0x4ff0, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x4fef, .value=0x50, .type=IO_READ},
        {.addr=0x4ff0, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6d6c, .a=0x0c, .x=0x1f, .y=0x52, .sp=0x2f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6d6c, .value=0x50}, {.addr=0x6d6d, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x6d6e, .a=0x0c, .x=0x1f, .y=0x52, .sp=0x2f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x6d6c, .value=0x50}, {.addr=0x6d6d, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x6d6c, .value=0x50, .type=IO_READ},
        {.addr=0x6d6d, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0016) {
    const struct CPU_State initial_cpu = {.pc=0x48be, .a=0xc7, .x=0x3d, .y=0x6e, .sp=0xe5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x48be, .value=0x50}, {.addr=0x48bf, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x48b1, .a=0xc7, .x=0x3d, .y=0x6e, .sp=0xe5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x48be, .value=0x50}, {.addr=0x48bf, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x48be, .value=0x50, .type=IO_READ},
        {.addr=0x48bf, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0017) {
    const struct CPU_State initial_cpu = {.pc=0x0025, .a=0xb8, .x=0xeb, .y=0xa2, .sp=0x09, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x50}, {.addr=0x0026, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x001f, .a=0xb8, .x=0xeb, .y=0xa2, .sp=0x09, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x50}, {.addr=0x0026, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x0025, .value=0x50, .type=IO_READ},
        {.addr=0x0026, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0018) {
    const struct CPU_State initial_cpu = {.pc=0x0b9b, .a=0xbc, .x=0x59, .y=0xdd, .sp=0x49, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0b9b, .value=0x50}, {.addr=0x0b9c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0b2b, .a=0xbc, .x=0x59, .y=0xdd, .sp=0x49, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0b9b, .value=0x50}, {.addr=0x0b9c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0b9b, .value=0x50, .type=IO_READ},
        {.addr=0x0b9c, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0019) {
    const struct CPU_State initial_cpu = {.pc=0x7c1c, .a=0x35, .x=0x33, .y=0x00, .sp=0xfa, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x7c1c, .value=0x50}, {.addr=0x7c1d, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x7c0e, .a=0x35, .x=0x33, .y=0x00, .sp=0xfa, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x7c1c, .value=0x50}, {.addr=0x7c1d, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x7c1c, .value=0x50, .type=IO_READ},
        {.addr=0x7c1d, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_001A) {
    const struct CPU_State initial_cpu = {.pc=0x0da3, .a=0x9f, .x=0xa4, .y=0x44, .sp=0xa0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0da3, .value=0x50}, {.addr=0x0da4, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x0da5, .a=0x9f, .x=0xa4, .y=0x44, .sp=0xa0, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0da3, .value=0x50}, {.addr=0x0da4, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x0da3, .value=0x50, .type=IO_READ},
        {.addr=0x0da4, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_001B) {
    const struct CPU_State initial_cpu = {.pc=0xae59, .a=0xf3, .x=0x55, .y=0x17, .sp=0x53, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xae59, .value=0x50}, {.addr=0xae5a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xae5b, .a=0xf3, .x=0x55, .y=0x17, .sp=0x53, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xae59, .value=0x50}, {.addr=0xae5a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xae59, .value=0x50, .type=IO_READ},
        {.addr=0xae5a, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_001C) {
    const struct CPU_State initial_cpu = {.pc=0x812f, .a=0xb8, .x=0xd4, .y=0xf9, .sp=0x70, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x812f, .value=0x50}, {.addr=0x8130, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x8131, .a=0xb8, .x=0xd4, .y=0xf9, .sp=0x70, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x812f, .value=0x50}, {.addr=0x8130, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x812f, .value=0x50, .type=IO_READ},
        {.addr=0x8130, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5257, .a=0x1b, .x=0x0f, .y=0x81, .sp=0x2e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5257, .value=0x50}, {.addr=0x5258, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x5259, .a=0x1b, .x=0x0f, .y=0x81, .sp=0x2e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5257, .value=0x50}, {.addr=0x5258, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x5257, .value=0x50, .type=IO_READ},
        {.addr=0x5258, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_001E) {
    const struct CPU_State initial_cpu = {.pc=0xaa3a, .a=0x8d, .x=0x73, .y=0xf2, .sp=0x13, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xaa3a, .value=0x50}, {.addr=0xaa3b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xaa3c, .a=0x8d, .x=0x73, .y=0xf2, .sp=0x13, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xaa3a, .value=0x50}, {.addr=0xaa3b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xaa3a, .value=0x50, .type=IO_READ},
        {.addr=0xaa3b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_001F) {
    const struct CPU_State initial_cpu = {.pc=0xa1d0, .a=0xb9, .x=0x51, .y=0x7a, .sp=0xad, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa1d0, .value=0x50}, {.addr=0xa1d1, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xa1d2, .a=0xb9, .x=0x51, .y=0x7a, .sp=0xad, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa1d0, .value=0x50}, {.addr=0xa1d1, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xa1d0, .value=0x50, .type=IO_READ},
        {.addr=0xa1d1, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0020) {
    const struct CPU_State initial_cpu = {.pc=0x1bdb, .a=0x58, .x=0x59, .y=0x40, .sp=0x8b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1bdb, .value=0x50}, {.addr=0x1bdc, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1c4b, .a=0x58, .x=0x59, .y=0x40, .sp=0x8b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x1bdb, .value=0x50}, {.addr=0x1bdc, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x1bdb, .value=0x50, .type=IO_READ},
        {.addr=0x1bdc, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0021) {
    const struct CPU_State initial_cpu = {.pc=0x0242, .a=0x12, .x=0x42, .y=0xaf, .sp=0x05, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0242, .value=0x50}, {.addr=0x0243, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x01fa, .a=0x12, .x=0x42, .y=0xaf, .sp=0x05, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0242, .value=0x50}, {.addr=0x0243, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x0242, .value=0x50, .type=IO_READ},
        {.addr=0x0243, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0022) {
    const struct CPU_State initial_cpu = {.pc=0x65d0, .a=0xfc, .x=0x01, .y=0x1d, .sp=0x98, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x65d0, .value=0x50}, {.addr=0x65d1, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x65d2, .a=0xfc, .x=0x01, .y=0x1d, .sp=0x98, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x65d0, .value=0x50}, {.addr=0x65d1, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x65d0, .value=0x50, .type=IO_READ},
        {.addr=0x65d1, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0023) {
    const struct CPU_State initial_cpu = {.pc=0x572c, .a=0xdd, .x=0x6c, .y=0xab, .sp=0x86, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x572c, .value=0x50}, {.addr=0x572d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x572e, .a=0xdd, .x=0x6c, .y=0xab, .sp=0x86, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x572c, .value=0x50}, {.addr=0x572d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x572c, .value=0x50, .type=IO_READ},
        {.addr=0x572d, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0024) {
    const struct CPU_State initial_cpu = {.pc=0xa591, .a=0x9d, .x=0x3b, .y=0x16, .sp=0x36, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa591, .value=0x50}, {.addr=0xa592, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xa57e, .a=0x9d, .x=0x3b, .y=0x16, .sp=0x36, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa591, .value=0x50}, {.addr=0xa592, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xa591, .value=0x50, .type=IO_READ},
        {.addr=0xa592, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0025) {
    const struct CPU_State initial_cpu = {.pc=0xf60d, .a=0x9e, .x=0x12, .y=0x48, .sp=0x28, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xf60d, .value=0x50}, {.addr=0xf60e, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xf60f, .a=0x9e, .x=0x12, .y=0x48, .sp=0x28, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xf60d, .value=0x50}, {.addr=0xf60e, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xf60d, .value=0x50, .type=IO_READ},
        {.addr=0xf60e, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0026) {
    const struct CPU_State initial_cpu = {.pc=0x4797, .a=0x53, .x=0x76, .y=0x88, .sp=0x11, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4797, .value=0x50}, {.addr=0x4798, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x47cf, .a=0x53, .x=0x76, .y=0x88, .sp=0x11, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4797, .value=0x50}, {.addr=0x4798, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x4797, .value=0x50, .type=IO_READ},
        {.addr=0x4798, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0027) {
    const struct CPU_State initial_cpu = {.pc=0x078d, .a=0x1d, .x=0x65, .y=0x96, .sp=0x30, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x078d, .value=0x50}, {.addr=0x078e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x078f, .a=0x1d, .x=0x65, .y=0x96, .sp=0x30, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x078d, .value=0x50}, {.addr=0x078e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x078d, .value=0x50, .type=IO_READ},
        {.addr=0x078e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0028) {
    const struct CPU_State initial_cpu = {.pc=0xaa84, .a=0x9c, .x=0xd6, .y=0xd6, .sp=0xb0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xaa84, .value=0x50}, {.addr=0xaa85, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xaa75, .a=0x9c, .x=0xd6, .y=0xd6, .sp=0xb0, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xaa84, .value=0x50}, {.addr=0xaa85, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xaa84, .value=0x50, .type=IO_READ},
        {.addr=0xaa85, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0029) {
    const struct CPU_State initial_cpu = {.pc=0x3209, .a=0x5b, .x=0x69, .y=0x18, .sp=0xf8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3209, .value=0x50}, {.addr=0x320a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x320b, .a=0x5b, .x=0x69, .y=0x18, .sp=0xf8, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x3209, .value=0x50}, {.addr=0x320a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3209, .value=0x50, .type=IO_READ},
        {.addr=0x320a, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_002A) {
    const struct CPU_State initial_cpu = {.pc=0x15b9, .a=0x97, .x=0xc2, .y=0xb7, .sp=0xe8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x15b9, .value=0x50}, {.addr=0x15ba, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x1594, .a=0x97, .x=0xc2, .y=0xb7, .sp=0xe8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x15b9, .value=0x50}, {.addr=0x15ba, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x15b9, .value=0x50, .type=IO_READ},
        {.addr=0x15ba, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9691, .a=0x6f, .x=0x28, .y=0x2c, .sp=0x62, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x9691, .value=0x50}, {.addr=0x9692, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x96c6, .a=0x6f, .x=0x28, .y=0x2c, .sp=0x62, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9691, .value=0x50}, {.addr=0x9692, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x9691, .value=0x50, .type=IO_READ},
        {.addr=0x9692, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_002C) {
    const struct CPU_State initial_cpu = {.pc=0x95c8, .a=0xfd, .x=0x47, .y=0xc6, .sp=0xca, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x95c8, .value=0x50}, {.addr=0x95c9, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x95ca, .a=0xfd, .x=0x47, .y=0xc6, .sp=0xca, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x95c8, .value=0x50}, {.addr=0x95c9, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x95c8, .value=0x50, .type=IO_READ},
        {.addr=0x95c9, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_002D) {
    const struct CPU_State initial_cpu = {.pc=0x7aa2, .a=0x0b, .x=0x65, .y=0x51, .sp=0x8f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa2, .value=0x50}, {.addr=0x7aa3, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x7aa4, .a=0x0b, .x=0x65, .y=0x51, .sp=0x8f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7aa2, .value=0x50}, {.addr=0x7aa3, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x7aa2, .value=0x50, .type=IO_READ},
        {.addr=0x7aa3, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_002E) {
    const struct CPU_State initial_cpu = {.pc=0xf079, .a=0x19, .x=0x32, .y=0xd6, .sp=0x3f, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf079, .value=0x50}, {.addr=0xf07a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf07b, .a=0x19, .x=0x32, .y=0xd6, .sp=0x3f, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf079, .value=0x50}, {.addr=0xf07a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf079, .value=0x50, .type=IO_READ},
        {.addr=0xf07a, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_002F) {
    const struct CPU_State initial_cpu = {.pc=0xbb60, .a=0x37, .x=0xbe, .y=0x9e, .sp=0x29, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xbb60, .value=0x50}, {.addr=0xbb61, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xbb1c, .a=0x37, .x=0xbe, .y=0x9e, .sp=0x29, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbb60, .value=0x50}, {.addr=0xbb61, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xbb60, .value=0x50, .type=IO_READ},
        {.addr=0xbb61, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0030) {
    const struct CPU_State initial_cpu = {.pc=0xf6a1, .a=0x63, .x=0xe5, .y=0x4f, .sp=0x8b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a1, .value=0x50}, {.addr=0xf6a2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf700, .a=0x63, .x=0xe5, .y=0x4f, .sp=0x8b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xf6a1, .value=0x50}, {.addr=0xf6a2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf6a1, .value=0x50, .type=IO_READ},
        {.addr=0xf6a2, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0031) {
    const struct CPU_State initial_cpu = {.pc=0x3abb, .a=0xdc, .x=0x52, .y=0x21, .sp=0x2a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x3abb, .value=0x50}, {.addr=0x3abc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3abd, .a=0xdc, .x=0x52, .y=0x21, .sp=0x2a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3abb, .value=0x50}, {.addr=0x3abc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3abb, .value=0x50, .type=IO_READ},
        {.addr=0x3abc, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0032) {
    const struct CPU_State initial_cpu = {.pc=0xc5b7, .a=0x38, .x=0xb9, .y=0xc3, .sp=0xbb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b7, .value=0x50}, {.addr=0xc5b8, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xc61b, .a=0x38, .x=0xb9, .y=0xc3, .sp=0xbb, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xc5b7, .value=0x50}, {.addr=0xc5b8, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xc5b7, .value=0x50, .type=IO_READ},
        {.addr=0xc5b8, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0033) {
    const struct CPU_State initial_cpu = {.pc=0xf9ed, .a=0x40, .x=0x10, .y=0xd0, .sp=0x12, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ed, .value=0x50}, {.addr=0xf9ee, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xf9ef, .a=0x40, .x=0x10, .y=0xd0, .sp=0x12, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xf9ed, .value=0x50}, {.addr=0xf9ee, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xf9ed, .value=0x50, .type=IO_READ},
        {.addr=0xf9ee, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0034) {
    const struct CPU_State initial_cpu = {.pc=0xe2a7, .a=0x7f, .x=0xe2, .y=0x5e, .sp=0xb1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a7, .value=0x50}, {.addr=0xe2a8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe2a9, .a=0x7f, .x=0xe2, .y=0x5e, .sp=0xb1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe2a7, .value=0x50}, {.addr=0xe2a8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe2a7, .value=0x50, .type=IO_READ},
        {.addr=0xe2a8, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0035) {
    const struct CPU_State initial_cpu = {.pc=0xe612, .a=0xd8, .x=0x6f, .y=0x7e, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xe612, .value=0x50}, {.addr=0xe613, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xe614, .a=0xd8, .x=0x6f, .y=0x7e, .sp=0x12, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xe612, .value=0x50}, {.addr=0xe613, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xe612, .value=0x50, .type=IO_READ},
        {.addr=0xe613, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0036) {
    const struct CPU_State initial_cpu = {.pc=0x3070, .a=0xf0, .x=0x0d, .y=0x2b, .sp=0xdd, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x3070, .value=0x50}, {.addr=0x3071, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x3070, .a=0xf0, .x=0x0d, .y=0x2b, .sp=0xdd, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x3070, .value=0x50}, {.addr=0x3071, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x3070, .value=0x50, .type=IO_READ},
        {.addr=0x3071, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0037) {
    const struct CPU_State initial_cpu = {.pc=0x29c6, .a=0xc5, .x=0xc1, .y=0x21, .sp=0x36, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x29c6, .value=0x50}, {.addr=0x29c7, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x29c8, .a=0xc5, .x=0xc1, .y=0x21, .sp=0x36, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x29c6, .value=0x50}, {.addr=0x29c7, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x29c6, .value=0x50, .type=IO_READ},
        {.addr=0x29c7, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0038) {
    const struct CPU_State initial_cpu = {.pc=0xc973, .a=0xcd, .x=0x0a, .y=0xcb, .sp=0x0a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc973, .value=0x50}, {.addr=0xc974, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc905, .a=0xcd, .x=0x0a, .y=0xcb, .sp=0x0a, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xc973, .value=0x50}, {.addr=0xc974, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc973, .value=0x50, .type=IO_READ},
        {.addr=0xc974, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0039) {
    const struct CPU_State initial_cpu = {.pc=0xceb6, .a=0x4b, .x=0x00, .y=0xa7, .sp=0x0a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xceb6, .value=0x50}, {.addr=0xceb7, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xcf07, .a=0x4b, .x=0x00, .y=0xa7, .sp=0x0a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xceb6, .value=0x50}, {.addr=0xceb7, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xceb6, .value=0x50, .type=IO_READ},
        {.addr=0xceb7, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_003A) {
    const struct CPU_State initial_cpu = {.pc=0x6f96, .a=0x4d, .x=0x3f, .y=0x58, .sp=0x4d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x6f96, .value=0x50}, {.addr=0x6f97, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x6f98, .a=0x4d, .x=0x3f, .y=0x58, .sp=0x4d, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x6f96, .value=0x50}, {.addr=0x6f97, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x6f96, .value=0x50, .type=IO_READ},
        {.addr=0x6f97, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_003B) {
    const struct CPU_State initial_cpu = {.pc=0x742a, .a=0xa5, .x=0x56, .y=0xf3, .sp=0xde, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x742a, .value=0x50}, {.addr=0x742b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x742c, .a=0xa5, .x=0x56, .y=0xf3, .sp=0xde, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x742a, .value=0x50}, {.addr=0x742b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x742a, .value=0x50, .type=IO_READ},
        {.addr=0x742b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_003C) {
    const struct CPU_State initial_cpu = {.pc=0xb117, .a=0xcf, .x=0x95, .y=0x5d, .sp=0xc3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xb117, .value=0x50}, {.addr=0xb118, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xb0b7, .a=0xcf, .x=0x95, .y=0x5d, .sp=0xc3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb117, .value=0x50}, {.addr=0xb118, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xb117, .value=0x50, .type=IO_READ},
        {.addr=0xb118, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_003D) {
    const struct CPU_State initial_cpu = {.pc=0x29a2, .a=0xe0, .x=0x98, .y=0xd8, .sp=0x4d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x29a2, .value=0x50}, {.addr=0x29a3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x29c0, .a=0xe0, .x=0x98, .y=0xd8, .sp=0x4d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x29a2, .value=0x50}, {.addr=0x29a3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x29a2, .value=0x50, .type=IO_READ},
        {.addr=0x29a3, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_003E) {
    const struct CPU_State initial_cpu = {.pc=0x699b, .a=0xb0, .x=0xe8, .y=0x2e, .sp=0x5d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x699b, .value=0x50}, {.addr=0x699c, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x69d4, .a=0xb0, .x=0xe8, .y=0x2e, .sp=0x5d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x699b, .value=0x50}, {.addr=0x699c, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x699b, .value=0x50, .type=IO_READ},
        {.addr=0x699c, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_003F) {
    const struct CPU_State initial_cpu = {.pc=0x19d7, .a=0x3f, .x=0xfb, .y=0x8e, .sp=0x99, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x19d7, .value=0x50}, {.addr=0x19d8, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x19d9, .a=0x3f, .x=0xfb, .y=0x8e, .sp=0x99, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x19d7, .value=0x50}, {.addr=0x19d8, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x19d7, .value=0x50, .type=IO_READ},
        {.addr=0x19d8, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0040) {
    const struct CPU_State initial_cpu = {.pc=0x0ec3, .a=0x41, .x=0x78, .y=0x3f, .sp=0x40, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec3, .value=0x50}, {.addr=0x0ec4, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x0ea6, .a=0x41, .x=0x78, .y=0x3f, .sp=0x40, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0ec3, .value=0x50}, {.addr=0x0ec4, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x0ec3, .value=0x50, .type=IO_READ},
        {.addr=0x0ec4, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0041) {
    const struct CPU_State initial_cpu = {.pc=0x73fb, .a=0x54, .x=0x55, .y=0x9b, .sp=0x60, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x73fb, .value=0x50}, {.addr=0x73fc, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x7444, .a=0x54, .x=0x55, .y=0x9b, .sp=0x60, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x73fb, .value=0x50}, {.addr=0x73fc, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x73fb, .value=0x50, .type=IO_READ},
        {.addr=0x73fc, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0042) {
    const struct CPU_State initial_cpu = {.pc=0x1e26, .a=0x9d, .x=0xb4, .y=0x25, .sp=0x03, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1e26, .value=0x50}, {.addr=0x1e27, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1da8, .a=0x9d, .x=0xb4, .y=0x25, .sp=0x03, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1e26, .value=0x50}, {.addr=0x1e27, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1e26, .value=0x50, .type=IO_READ},
        {.addr=0x1e27, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0043) {
    const struct CPU_State initial_cpu = {.pc=0x9735, .a=0x54, .x=0xe7, .y=0x86, .sp=0x6c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9735, .value=0x50}, {.addr=0x9736, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x96e4, .a=0x54, .x=0xe7, .y=0x86, .sp=0x6c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9735, .value=0x50}, {.addr=0x9736, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x9735, .value=0x50, .type=IO_READ},
        {.addr=0x9736, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0f86, .a=0xe7, .x=0x9a, .y=0xbe, .sp=0x22, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0f86, .value=0x50}, {.addr=0x0f87, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x0f88, .a=0xe7, .x=0x9a, .y=0xbe, .sp=0x22, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0f86, .value=0x50}, {.addr=0x0f87, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0f86, .value=0x50, .type=IO_READ},
        {.addr=0x0f87, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0045) {
    const struct CPU_State initial_cpu = {.pc=0xb805, .a=0x1c, .x=0x39, .y=0xe5, .sp=0x9b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb805, .value=0x50}, {.addr=0xb806, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb867, .a=0x1c, .x=0x39, .y=0xe5, .sp=0x9b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb805, .value=0x50}, {.addr=0xb806, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb805, .value=0x50, .type=IO_READ},
        {.addr=0xb806, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0046) {
    const struct CPU_State initial_cpu = {.pc=0x881b, .a=0x3c, .x=0x89, .y=0xc3, .sp=0xbe, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x881b, .value=0x50}, {.addr=0x881c, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x881d, .a=0x3c, .x=0x89, .y=0xc3, .sp=0xbe, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x881b, .value=0x50}, {.addr=0x881c, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x881b, .value=0x50, .type=IO_READ},
        {.addr=0x881c, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0047) {
    const struct CPU_State initial_cpu = {.pc=0x99c8, .a=0x5f, .x=0x91, .y=0xfd, .sp=0xa2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x99c8, .value=0x50}, {.addr=0x99c9, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x994c, .a=0x5f, .x=0x91, .y=0xfd, .sp=0xa2, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x99c8, .value=0x50}, {.addr=0x99c9, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x99c8, .value=0x50, .type=IO_READ},
        {.addr=0x99c9, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0048) {
    const struct CPU_State initial_cpu = {.pc=0xe1cd, .a=0x02, .x=0x73, .y=0x9b, .sp=0xa9, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xe1cd, .value=0x50}, {.addr=0xe1ce, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xe1cf, .a=0x02, .x=0x73, .y=0x9b, .sp=0xa9, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xe1cd, .value=0x50}, {.addr=0xe1ce, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xe1cd, .value=0x50, .type=IO_READ},
        {.addr=0xe1ce, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0049) {
    const struct CPU_State initial_cpu = {.pc=0xa204, .a=0x23, .x=0x36, .y=0x8a, .sp=0x5a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa204, .value=0x50}, {.addr=0xa205, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xa206, .a=0x23, .x=0x36, .y=0x8a, .sp=0x5a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa204, .value=0x50}, {.addr=0xa205, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xa204, .value=0x50, .type=IO_READ},
        {.addr=0xa205, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_004A) {
    const struct CPU_State initial_cpu = {.pc=0x53d2, .a=0x2d, .x=0x3f, .y=0xe5, .sp=0x4d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x53d2, .value=0x50}, {.addr=0x53d3, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x53d4, .a=0x2d, .x=0x3f, .y=0xe5, .sp=0x4d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x53d2, .value=0x50}, {.addr=0x53d3, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x53d2, .value=0x50, .type=IO_READ},
        {.addr=0x53d3, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_004B) {
    const struct CPU_State initial_cpu = {.pc=0xf42b, .a=0xd2, .x=0x96, .y=0x1e, .sp=0x30, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf42b, .value=0x50}, {.addr=0xf42c, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xf407, .a=0xd2, .x=0x96, .y=0x1e, .sp=0x30, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf42b, .value=0x50}, {.addr=0xf42c, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xf42b, .value=0x50, .type=IO_READ},
        {.addr=0xf42c, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_004C) {
    const struct CPU_State initial_cpu = {.pc=0xdb20, .a=0xa9, .x=0xd3, .y=0xe7, .sp=0xba, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xdb20, .value=0x50}, {.addr=0xdb21, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdb22, .a=0xa9, .x=0xd3, .y=0xe7, .sp=0xba, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xdb20, .value=0x50}, {.addr=0xdb21, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdb20, .value=0x50, .type=IO_READ},
        {.addr=0xdb21, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_004D) {
    const struct CPU_State initial_cpu = {.pc=0xd0e4, .a=0x5e, .x=0x94, .y=0x08, .sp=0x93, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e4, .value=0x50}, {.addr=0xd0e5, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xd0bf, .a=0x5e, .x=0x94, .y=0x08, .sp=0x93, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xd0e4, .value=0x50}, {.addr=0xd0e5, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xd0e4, .value=0x50, .type=IO_READ},
        {.addr=0xd0e5, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc662, .a=0xc6, .x=0x43, .y=0x70, .sp=0xee, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc662, .value=0x50}, {.addr=0xc663, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xc664, .a=0xc6, .x=0x43, .y=0x70, .sp=0xee, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xc662, .value=0x50}, {.addr=0xc663, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xc662, .value=0x50, .type=IO_READ},
        {.addr=0xc663, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_004F) {
    const struct CPU_State initial_cpu = {.pc=0x69c6, .a=0xc6, .x=0x89, .y=0x4a, .sp=0x8b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x69c6, .value=0x50}, {.addr=0x69c7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x69c8, .a=0xc6, .x=0x89, .y=0x4a, .sp=0x8b, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x69c6, .value=0x50}, {.addr=0x69c7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x69c6, .value=0x50, .type=IO_READ},
        {.addr=0x69c7, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0050) {
    const struct CPU_State initial_cpu = {.pc=0x6441, .a=0xa5, .x=0x77, .y=0xb1, .sp=0x2b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6441, .value=0x50}, {.addr=0x6442, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x646e, .a=0xa5, .x=0x77, .y=0xb1, .sp=0x2b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6441, .value=0x50}, {.addr=0x6442, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6441, .value=0x50, .type=IO_READ},
        {.addr=0x6442, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0051) {
    const struct CPU_State initial_cpu = {.pc=0x9af2, .a=0x02, .x=0x90, .y=0x99, .sp=0x35, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9af2, .value=0x50}, {.addr=0x9af3, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x9acd, .a=0x02, .x=0x90, .y=0x99, .sp=0x35, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9af2, .value=0x50}, {.addr=0x9af3, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x9af2, .value=0x50, .type=IO_READ},
        {.addr=0x9af3, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0052) {
    const struct CPU_State initial_cpu = {.pc=0x25da, .a=0xf9, .x=0xc1, .y=0xf2, .sp=0x36, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x25da, .value=0x50}, {.addr=0x25db, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x2592, .a=0xf9, .x=0xc1, .y=0xf2, .sp=0x36, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x25da, .value=0x50}, {.addr=0x25db, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x25da, .value=0x50, .type=IO_READ},
        {.addr=0x25db, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0053) {
    const struct CPU_State initial_cpu = {.pc=0x7d9d, .a=0x06, .x=0xf5, .y=0x52, .sp=0xe5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7d9d, .value=0x50}, {.addr=0x7d9e, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x7d9f, .a=0x06, .x=0xf5, .y=0x52, .sp=0xe5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7d9d, .value=0x50}, {.addr=0x7d9e, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x7d9d, .value=0x50, .type=IO_READ},
        {.addr=0x7d9e, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0054) {
    const struct CPU_State initial_cpu = {.pc=0x4a3d, .a=0xef, .x=0x5a, .y=0x76, .sp=0xb9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3d, .value=0x50}, {.addr=0x4a3e, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4a84, .a=0xef, .x=0x5a, .y=0x76, .sp=0xb9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4a3d, .value=0x50}, {.addr=0x4a3e, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4a3d, .value=0x50, .type=IO_READ},
        {.addr=0x4a3e, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0055) {
    const struct CPU_State initial_cpu = {.pc=0xce87, .a=0xe3, .x=0xbd, .y=0x97, .sp=0x1d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xce87, .value=0x50}, {.addr=0xce88, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xce36, .a=0xe3, .x=0xbd, .y=0x97, .sp=0x1d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xce87, .value=0x50}, {.addr=0xce88, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xce87, .value=0x50, .type=IO_READ},
        {.addr=0xce88, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0056) {
    const struct CPU_State initial_cpu = {.pc=0xdfe1, .a=0x93, .x=0x0b, .y=0x5f, .sp=0xc3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe1, .value=0x50}, {.addr=0xdfe2, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xdfe3, .a=0x93, .x=0x0b, .y=0x5f, .sp=0xc3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xdfe1, .value=0x50}, {.addr=0xdfe2, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xdfe1, .value=0x50, .type=IO_READ},
        {.addr=0xdfe2, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0057) {
    const struct CPU_State initial_cpu = {.pc=0x79dd, .a=0x68, .x=0xc5, .y=0x1f, .sp=0xe8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x79dd, .value=0x50}, {.addr=0x79de, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x7a19, .a=0x68, .x=0xc5, .y=0x1f, .sp=0xe8, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x79dd, .value=0x50}, {.addr=0x79de, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x79dd, .value=0x50, .type=IO_READ},
        {.addr=0x79de, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0058) {
    const struct CPU_State initial_cpu = {.pc=0xd166, .a=0xd0, .x=0x27, .y=0x29, .sp=0xd9, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd166, .value=0x50}, {.addr=0xd167, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xd0f9, .a=0xd0, .x=0x27, .y=0x29, .sp=0xd9, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd166, .value=0x50}, {.addr=0xd167, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xd166, .value=0x50, .type=IO_READ},
        {.addr=0xd167, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0059) {
    const struct CPU_State initial_cpu = {.pc=0x3441, .a=0x0e, .x=0x4c, .y=0xbe, .sp=0x37, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3441, .value=0x50}, {.addr=0x3442, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x3443, .a=0x0e, .x=0x4c, .y=0xbe, .sp=0x37, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3441, .value=0x50}, {.addr=0x3442, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x3441, .value=0x50, .type=IO_READ},
        {.addr=0x3442, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_005A) {
    const struct CPU_State initial_cpu = {.pc=0x0bd2, .a=0x95, .x=0x38, .y=0x5c, .sp=0xbf, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd2, .value=0x50}, {.addr=0x0bd3, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x0c47, .a=0x95, .x=0x38, .y=0x5c, .sp=0xbf, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0bd2, .value=0x50}, {.addr=0x0bd3, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x0bd2, .value=0x50, .type=IO_READ},
        {.addr=0x0bd3, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_005B) {
    const struct CPU_State initial_cpu = {.pc=0xcd32, .a=0x2b, .x=0xdd, .y=0xdf, .sp=0x31, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xcd32, .value=0x50}, {.addr=0xcd33, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xccc8, .a=0x2b, .x=0xdd, .y=0xdf, .sp=0x31, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xcd32, .value=0x50}, {.addr=0xcd33, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcd32, .value=0x50, .type=IO_READ},
        {.addr=0xcd33, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_005C) {
    const struct CPU_State initial_cpu = {.pc=0x0ccd, .a=0xa5, .x=0x67, .y=0xf4, .sp=0x79, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ccd, .value=0x50}, {.addr=0x0cce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0d4b, .a=0xa5, .x=0x67, .y=0xf4, .sp=0x79, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0ccd, .value=0x50}, {.addr=0x0cce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0ccd, .value=0x50, .type=IO_READ},
        {.addr=0x0cce, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_005D) {
    const struct CPU_State initial_cpu = {.pc=0x8093, .a=0x65, .x=0x93, .y=0xdc, .sp=0x25, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8093, .value=0x50}, {.addr=0x8094, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x8095, .a=0x65, .x=0x93, .y=0xdc, .sp=0x25, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8093, .value=0x50}, {.addr=0x8094, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x8093, .value=0x50, .type=IO_READ},
        {.addr=0x8094, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_005E) {
    const struct CPU_State initial_cpu = {.pc=0x71e7, .a=0xb5, .x=0xd5, .y=0xa2, .sp=0xce, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x71e7, .value=0x50}, {.addr=0x71e8, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x7228, .a=0xb5, .x=0xd5, .y=0xa2, .sp=0xce, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x71e7, .value=0x50}, {.addr=0x71e8, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x71e7, .value=0x50, .type=IO_READ},
        {.addr=0x71e8, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_005F) {
    const struct CPU_State initial_cpu = {.pc=0x8803, .a=0x8a, .x=0x6c, .y=0x44, .sp=0xff, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8803, .value=0x50}, {.addr=0x8804, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x8805, .a=0x8a, .x=0x6c, .y=0x44, .sp=0xff, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x8803, .value=0x50}, {.addr=0x8804, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x8803, .value=0x50, .type=IO_READ},
        {.addr=0x8804, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0060) {
    const struct CPU_State initial_cpu = {.pc=0xd169, .a=0xe0, .x=0xa4, .y=0xb1, .sp=0x5c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd169, .value=0x50}, {.addr=0xd16a, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xd16b, .a=0xe0, .x=0xa4, .y=0xb1, .sp=0x5c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xd169, .value=0x50}, {.addr=0xd16a, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xd169, .value=0x50, .type=IO_READ},
        {.addr=0xd16a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0061) {
    const struct CPU_State initial_cpu = {.pc=0x7387, .a=0x88, .x=0x32, .y=0xad, .sp=0x09, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x7387, .value=0x50}, {.addr=0x7388, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x7389, .a=0x88, .x=0x32, .y=0xad, .sp=0x09, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x7387, .value=0x50}, {.addr=0x7388, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x7387, .value=0x50, .type=IO_READ},
        {.addr=0x7388, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9e49, .a=0x3e, .x=0x69, .y=0x10, .sp=0xb7, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9e49, .value=0x50}, {.addr=0x9e4a, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x9e4b, .a=0x3e, .x=0x69, .y=0x10, .sp=0xb7, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9e49, .value=0x50}, {.addr=0x9e4a, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x9e49, .value=0x50, .type=IO_READ},
        {.addr=0x9e4a, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0063) {
    const struct CPU_State initial_cpu = {.pc=0x4767, .a=0xf3, .x=0x6b, .y=0x09, .sp=0x83, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4767, .value=0x50}, {.addr=0x4768, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x4703, .a=0xf3, .x=0x6b, .y=0x09, .sp=0x83, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4767, .value=0x50}, {.addr=0x4768, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x4767, .value=0x50, .type=IO_READ},
        {.addr=0x4768, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0064) {
    const struct CPU_State initial_cpu = {.pc=0x194b, .a=0x9f, .x=0x5c, .y=0xd7, .sp=0xf6, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x194b, .value=0x50}, {.addr=0x194c, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x19a4, .a=0x9f, .x=0x5c, .y=0xd7, .sp=0xf6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x194b, .value=0x50}, {.addr=0x194c, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x194b, .value=0x50, .type=IO_READ},
        {.addr=0x194c, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0065) {
    const struct CPU_State initial_cpu = {.pc=0x0ebe, .a=0x43, .x=0x35, .y=0x97, .sp=0x5b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0ebe, .value=0x50}, {.addr=0x0ebf, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x0ec0, .a=0x43, .x=0x35, .y=0x97, .sp=0x5b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0ebe, .value=0x50}, {.addr=0x0ebf, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x0ebe, .value=0x50, .type=IO_READ},
        {.addr=0x0ebf, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0066) {
    const struct CPU_State initial_cpu = {.pc=0x89c6, .a=0xfc, .x=0x01, .y=0x7e, .sp=0xf8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x89c6, .value=0x50}, {.addr=0x89c7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x89b5, .a=0xfc, .x=0x01, .y=0x7e, .sp=0xf8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x89c6, .value=0x50}, {.addr=0x89c7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x89c6, .value=0x50, .type=IO_READ},
        {.addr=0x89c7, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0067) {
    const struct CPU_State initial_cpu = {.pc=0x8a19, .a=0x65, .x=0x1c, .y=0xac, .sp=0x32, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8a19, .value=0x50}, {.addr=0x8a1a, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x8a1b, .a=0x65, .x=0x1c, .y=0xac, .sp=0x32, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8a19, .value=0x50}, {.addr=0x8a1a, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x8a19, .value=0x50, .type=IO_READ},
        {.addr=0x8a1a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0068) {
    const struct CPU_State initial_cpu = {.pc=0x91c8, .a=0x73, .x=0x8d, .y=0x13, .sp=0xb3, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x91c8, .value=0x50}, {.addr=0x91c9, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x9180, .a=0x73, .x=0x8d, .y=0x13, .sp=0xb3, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x91c8, .value=0x50}, {.addr=0x91c9, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x91c8, .value=0x50, .type=IO_READ},
        {.addr=0x91c9, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0069) {
    const struct CPU_State initial_cpu = {.pc=0x7573, .a=0x97, .x=0xba, .y=0xbc, .sp=0xac, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7573, .value=0x50}, {.addr=0x7574, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x75c3, .a=0x97, .x=0xba, .y=0xbc, .sp=0xac, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7573, .value=0x50}, {.addr=0x7574, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x7573, .value=0x50, .type=IO_READ},
        {.addr=0x7574, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_006A) {
    const struct CPU_State initial_cpu = {.pc=0x95df, .a=0xd2, .x=0x1f, .y=0xcf, .sp=0xe4, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x95df, .value=0x50}, {.addr=0x95e0, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x95e1, .a=0xd2, .x=0x1f, .y=0xcf, .sp=0xe4, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x95df, .value=0x50}, {.addr=0x95e0, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x95df, .value=0x50, .type=IO_READ},
        {.addr=0x95e0, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_006B) {
    const struct CPU_State initial_cpu = {.pc=0x1e78, .a=0x4e, .x=0x73, .y=0x06, .sp=0x09, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1e78, .value=0x50}, {.addr=0x1e79, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x1e7a, .a=0x4e, .x=0x73, .y=0x06, .sp=0x09, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1e78, .value=0x50}, {.addr=0x1e79, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x1e78, .value=0x50, .type=IO_READ},
        {.addr=0x1e79, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_006C) {
    const struct CPU_State initial_cpu = {.pc=0x7d62, .a=0x24, .x=0x36, .y=0x35, .sp=0x65, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x7d62, .value=0x50}, {.addr=0x7d63, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x7d64, .a=0x24, .x=0x36, .y=0x35, .sp=0x65, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x7d62, .value=0x50}, {.addr=0x7d63, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x7d62, .value=0x50, .type=IO_READ},
        {.addr=0x7d63, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_006D) {
    const struct CPU_State initial_cpu = {.pc=0x00ae, .a=0x94, .x=0xbc, .y=0x88, .sp=0xf3, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x50}, {.addr=0x00af, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x0065, .a=0x94, .x=0xbc, .y=0x88, .sp=0xf3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x50}, {.addr=0x00af, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x00ae, .value=0x50, .type=IO_READ},
        {.addr=0x00af, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_006E) {
    const struct CPU_State initial_cpu = {.pc=0xc58f, .a=0x0c, .x=0x20, .y=0xce, .sp=0xbe, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc58f, .value=0x50}, {.addr=0xc590, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc591, .a=0x0c, .x=0x20, .y=0xce, .sp=0xbe, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xc58f, .value=0x50}, {.addr=0xc590, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc58f, .value=0x50, .type=IO_READ},
        {.addr=0xc590, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_006F) {
    const struct CPU_State initial_cpu = {.pc=0x2b9f, .a=0x50, .x=0x3e, .y=0x69, .sp=0xff, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9f, .value=0x50}, {.addr=0x2ba0, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x2b76, .a=0x50, .x=0x3e, .y=0x69, .sp=0xff, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2b9f, .value=0x50}, {.addr=0x2ba0, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2b9f, .value=0x50, .type=IO_READ},
        {.addr=0x2ba0, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0070) {
    const struct CPU_State initial_cpu = {.pc=0xe2c1, .a=0x0c, .x=0x12, .y=0xb6, .sp=0xd4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe2c1, .value=0x50}, {.addr=0xe2c2, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xe2c3, .a=0x0c, .x=0x12, .y=0xb6, .sp=0xd4, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xe2c1, .value=0x50}, {.addr=0xe2c2, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xe2c1, .value=0x50, .type=IO_READ},
        {.addr=0xe2c2, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0071) {
    const struct CPU_State initial_cpu = {.pc=0x7cd4, .a=0x6c, .x=0x24, .y=0x25, .sp=0x53, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd4, .value=0x50}, {.addr=0x7cd5, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x7cd6, .a=0x6c, .x=0x24, .y=0x25, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7cd4, .value=0x50}, {.addr=0x7cd5, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x7cd4, .value=0x50, .type=IO_READ},
        {.addr=0x7cd5, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0072) {
    const struct CPU_State initial_cpu = {.pc=0x766a, .a=0xec, .x=0xf9, .y=0x98, .sp=0x1a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x766a, .value=0x50}, {.addr=0x766b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x768c, .a=0xec, .x=0xf9, .y=0x98, .sp=0x1a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x766a, .value=0x50}, {.addr=0x766b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x766a, .value=0x50, .type=IO_READ},
        {.addr=0x766b, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0073) {
    const struct CPU_State initial_cpu = {.pc=0x5674, .a=0xf9, .x=0x12, .y=0xca, .sp=0x64, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5674, .value=0x50}, {.addr=0x5675, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x5676, .a=0xf9, .x=0x12, .y=0xca, .sp=0x64, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x5674, .value=0x50}, {.addr=0x5675, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x5674, .value=0x50, .type=IO_READ},
        {.addr=0x5675, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0074) {
    const struct CPU_State initial_cpu = {.pc=0x5bee, .a=0x7e, .x=0x41, .y=0x12, .sp=0x8d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5bee, .value=0x50}, {.addr=0x5bef, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x5bf1, .a=0x7e, .x=0x41, .y=0x12, .sp=0x8d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5bee, .value=0x50}, {.addr=0x5bef, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x5bee, .value=0x50, .type=IO_READ},
        {.addr=0x5bef, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0075) {
    const struct CPU_State initial_cpu = {.pc=0x4672, .a=0x67, .x=0x32, .y=0xab, .sp=0x4b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4672, .value=0x50}, {.addr=0x4673, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x4674, .a=0x67, .x=0x32, .y=0xab, .sp=0x4b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4672, .value=0x50}, {.addr=0x4673, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x4672, .value=0x50, .type=IO_READ},
        {.addr=0x4673, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0076) {
    const struct CPU_State initial_cpu = {.pc=0xeda1, .a=0xe1, .x=0x55, .y=0xc3, .sp=0xff, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xeda1, .value=0x50}, {.addr=0xeda2, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xedbc, .a=0xe1, .x=0x55, .y=0xc3, .sp=0xff, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xeda1, .value=0x50}, {.addr=0xeda2, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xeda1, .value=0x50, .type=IO_READ},
        {.addr=0xeda2, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0077) {
    const struct CPU_State initial_cpu = {.pc=0xee4f, .a=0x22, .x=0x13, .y=0x6f, .sp=0x22, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xee4f, .value=0x50}, {.addr=0xee50, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xeebb, .a=0x22, .x=0x13, .y=0x6f, .sp=0x22, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xee4f, .value=0x50}, {.addr=0xee50, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xee4f, .value=0x50, .type=IO_READ},
        {.addr=0xee50, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0078) {
    const struct CPU_State initial_cpu = {.pc=0x1f4b, .a=0x9b, .x=0x10, .y=0xb9, .sp=0x30, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1f4b, .value=0x50}, {.addr=0x1f4c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1f4d, .a=0x9b, .x=0x10, .y=0xb9, .sp=0x30, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1f4b, .value=0x50}, {.addr=0x1f4c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1f4b, .value=0x50, .type=IO_READ},
        {.addr=0x1f4c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0079) {
    const struct CPU_State initial_cpu = {.pc=0x5efa, .a=0x16, .x=0x45, .y=0x01, .sp=0xe9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5efa, .value=0x50}, {.addr=0x5efb, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x5efc, .a=0x16, .x=0x45, .y=0x01, .sp=0xe9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5efa, .value=0x50}, {.addr=0x5efb, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x5efa, .value=0x50, .type=IO_READ},
        {.addr=0x5efb, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_007A) {
    const struct CPU_State initial_cpu = {.pc=0x02c8, .a=0x6e, .x=0xc5, .y=0xdc, .sp=0xbe, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x02c8, .value=0x50}, {.addr=0x02c9, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x02ca, .a=0x6e, .x=0xc5, .y=0xdc, .sp=0xbe, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x02c8, .value=0x50}, {.addr=0x02c9, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x02c8, .value=0x50, .type=IO_READ},
        {.addr=0x02c9, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_007B) {
    const struct CPU_State initial_cpu = {.pc=0xdc01, .a=0x26, .x=0x2d, .y=0xe6, .sp=0xea, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xdc01, .value=0x50}, {.addr=0xdc02, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xdc03, .a=0x26, .x=0x2d, .y=0xe6, .sp=0xea, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xdc01, .value=0x50}, {.addr=0xdc02, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xdc01, .value=0x50, .type=IO_READ},
        {.addr=0xdc02, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_007C) {
    const struct CPU_State initial_cpu = {.pc=0xfc92, .a=0x8e, .x=0xb5, .y=0x9b, .sp=0x56, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfc92, .value=0x50}, {.addr=0xfc93, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xfcb9, .a=0x8e, .x=0xb5, .y=0x9b, .sp=0x56, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xfc92, .value=0x50}, {.addr=0xfc93, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xfc92, .value=0x50, .type=IO_READ},
        {.addr=0xfc93, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_007D) {
    const struct CPU_State initial_cpu = {.pc=0xb9f0, .a=0xdc, .x=0xf3, .y=0x3f, .sp=0x6e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f0, .value=0x50}, {.addr=0xb9f1, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xba3c, .a=0xdc, .x=0xf3, .y=0x3f, .sp=0x6e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb9f0, .value=0x50}, {.addr=0xb9f1, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xb9f0, .value=0x50, .type=IO_READ},
        {.addr=0xb9f1, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_007E) {
    const struct CPU_State initial_cpu = {.pc=0xd029, .a=0x3c, .x=0x4c, .y=0x88, .sp=0x75, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd029, .value=0x50}, {.addr=0xd02a, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd02b, .a=0x3c, .x=0x4c, .y=0x88, .sp=0x75, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd029, .value=0x50}, {.addr=0xd02a, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd029, .value=0x50, .type=IO_READ},
        {.addr=0xd02a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3a8d, .a=0x8f, .x=0x6a, .y=0x88, .sp=0x37, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8d, .value=0x50}, {.addr=0x3a8e, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x3a8f, .a=0x8f, .x=0x6a, .y=0x88, .sp=0x37, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x3a8d, .value=0x50}, {.addr=0x3a8e, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x3a8d, .value=0x50, .type=IO_READ},
        {.addr=0x3a8e, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0080) {
    const struct CPU_State initial_cpu = {.pc=0xe589, .a=0xab, .x=0x34, .y=0x16, .sp=0x74, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe589, .value=0x50}, {.addr=0xe58a, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xe58b, .a=0xab, .x=0x34, .y=0x16, .sp=0x74, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe589, .value=0x50}, {.addr=0xe58a, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xe589, .value=0x50, .type=IO_READ},
        {.addr=0xe58a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0081) {
    const struct CPU_State initial_cpu = {.pc=0x5b2b, .a=0xcd, .x=0x51, .y=0xef, .sp=0x88, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2b, .value=0x50}, {.addr=0x5b2c, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x5b2d, .a=0xcd, .x=0x51, .y=0xef, .sp=0x88, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x5b2b, .value=0x50}, {.addr=0x5b2c, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x5b2b, .value=0x50, .type=IO_READ},
        {.addr=0x5b2c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0082) {
    const struct CPU_State initial_cpu = {.pc=0xbd11, .a=0xe3, .x=0xa4, .y=0xad, .sp=0x0a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xbd11, .value=0x50}, {.addr=0xbd12, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xbcb6, .a=0xe3, .x=0xa4, .y=0xad, .sp=0x0a, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xbd11, .value=0x50}, {.addr=0xbd12, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xbd11, .value=0x50, .type=IO_READ},
        {.addr=0xbd12, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0083) {
    const struct CPU_State initial_cpu = {.pc=0xb56f, .a=0x63, .x=0xfe, .y=0xfe, .sp=0x24, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb56f, .value=0x50}, {.addr=0xb570, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xb571, .a=0x63, .x=0xfe, .y=0xfe, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb56f, .value=0x50}, {.addr=0xb570, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xb56f, .value=0x50, .type=IO_READ},
        {.addr=0xb570, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0084) {
    const struct CPU_State initial_cpu = {.pc=0xc1bd, .a=0xfd, .x=0xc2, .y=0xbd, .sp=0x65, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc1bd, .value=0x50}, {.addr=0xc1be, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc1bf, .a=0xfd, .x=0xc2, .y=0xbd, .sp=0x65, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xc1bd, .value=0x50}, {.addr=0xc1be, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc1bd, .value=0x50, .type=IO_READ},
        {.addr=0xc1be, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0085) {
    const struct CPU_State initial_cpu = {.pc=0x79e7, .a=0xda, .x=0x97, .y=0x85, .sp=0xeb, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x79e7, .value=0x50}, {.addr=0x79e8, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x79e9, .a=0xda, .x=0x97, .y=0x85, .sp=0xeb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x79e7, .value=0x50}, {.addr=0x79e8, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x79e7, .value=0x50, .type=IO_READ},
        {.addr=0x79e8, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0086) {
    const struct CPU_State initial_cpu = {.pc=0xe8c8, .a=0x74, .x=0xe4, .y=0x2a, .sp=0xc5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xe8c8, .value=0x50}, {.addr=0xe8c9, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xe8ca, .a=0x74, .x=0xe4, .y=0x2a, .sp=0xc5, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xe8c8, .value=0x50}, {.addr=0xe8c9, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xe8c8, .value=0x50, .type=IO_READ},
        {.addr=0xe8c9, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0087) {
    const struct CPU_State initial_cpu = {.pc=0x3789, .a=0x8d, .x=0x10, .y=0x0e, .sp=0x1e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3789, .value=0x50}, {.addr=0x378a, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x3789, .a=0x8d, .x=0x10, .y=0x0e, .sp=0x1e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3789, .value=0x50}, {.addr=0x378a, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x3789, .value=0x50, .type=IO_READ},
        {.addr=0x378a, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0088) {
    const struct CPU_State initial_cpu = {.pc=0x731c, .a=0x88, .x=0x90, .y=0xef, .sp=0x43, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x731c, .value=0x50}, {.addr=0x731d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x731e, .a=0x88, .x=0x90, .y=0xef, .sp=0x43, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x731c, .value=0x50}, {.addr=0x731d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x731c, .value=0x50, .type=IO_READ},
        {.addr=0x731d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0089) {
    const struct CPU_State initial_cpu = {.pc=0xdf6f, .a=0xf4, .x=0xd9, .y=0x33, .sp=0x2e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6f, .value=0x50}, {.addr=0xdf70, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xdfe4, .a=0xf4, .x=0xd9, .y=0x33, .sp=0x2e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdf6f, .value=0x50}, {.addr=0xdf70, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xdf6f, .value=0x50, .type=IO_READ},
        {.addr=0xdf70, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_008A) {
    const struct CPU_State initial_cpu = {.pc=0xcf61, .a=0x44, .x=0x2c, .y=0xb5, .sp=0xa8, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xcf61, .value=0x50}, {.addr=0xcf62, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xcfa4, .a=0x44, .x=0x2c, .y=0xb5, .sp=0xa8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xcf61, .value=0x50}, {.addr=0xcf62, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xcf61, .value=0x50, .type=IO_READ},
        {.addr=0xcf62, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_008B) {
    const struct CPU_State initial_cpu = {.pc=0xcc28, .a=0x69, .x=0x30, .y=0x12, .sp=0xef, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc28, .value=0x50}, {.addr=0xcc29, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcc2a, .a=0x69, .x=0x30, .y=0x12, .sp=0xef, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xcc28, .value=0x50}, {.addr=0xcc29, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcc28, .value=0x50, .type=IO_READ},
        {.addr=0xcc29, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_008C) {
    const struct CPU_State initial_cpu = {.pc=0xbb9c, .a=0x4e, .x=0xeb, .y=0xaa, .sp=0x6a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9c, .value=0x50}, {.addr=0xbb9d, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xbb80, .a=0x4e, .x=0xeb, .y=0xaa, .sp=0x6a, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xbb9c, .value=0x50}, {.addr=0xbb9d, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xbb9c, .value=0x50, .type=IO_READ},
        {.addr=0xbb9d, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_008D) {
    const struct CPU_State initial_cpu = {.pc=0x54d9, .a=0x06, .x=0x55, .y=0x0e, .sp=0x27, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x54d9, .value=0x50}, {.addr=0x54da, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x54db, .a=0x06, .x=0x55, .y=0x0e, .sp=0x27, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x54d9, .value=0x50}, {.addr=0x54da, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x54d9, .value=0x50, .type=IO_READ},
        {.addr=0x54da, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_008E) {
    const struct CPU_State initial_cpu = {.pc=0x8804, .a=0xd0, .x=0x71, .y=0xf5, .sp=0x7e, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8804, .value=0x50}, {.addr=0x8805, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x878b, .a=0xd0, .x=0x71, .y=0xf5, .sp=0x7e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8804, .value=0x50}, {.addr=0x8805, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x8804, .value=0x50, .type=IO_READ},
        {.addr=0x8805, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_008F) {
    const struct CPU_State initial_cpu = {.pc=0x4018, .a=0x1d, .x=0xfe, .y=0xde, .sp=0x2f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4018, .value=0x50}, {.addr=0x4019, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x401a, .a=0x1d, .x=0xfe, .y=0xde, .sp=0x2f, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x4018, .value=0x50}, {.addr=0x4019, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x4018, .value=0x50, .type=IO_READ},
        {.addr=0x4019, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0090) {
    const struct CPU_State initial_cpu = {.pc=0xb289, .a=0x8b, .x=0x54, .y=0x1d, .sp=0x91, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb289, .value=0x50}, {.addr=0xb28a, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xb2b3, .a=0x8b, .x=0x54, .y=0x1d, .sp=0x91, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb289, .value=0x50}, {.addr=0xb28a, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xb289, .value=0x50, .type=IO_READ},
        {.addr=0xb28a, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0091) {
    const struct CPU_State initial_cpu = {.pc=0x6962, .a=0x55, .x=0xb1, .y=0xf1, .sp=0x07, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6962, .value=0x50}, {.addr=0x6963, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x6964, .a=0x55, .x=0xb1, .y=0xf1, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6962, .value=0x50}, {.addr=0x6963, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x6962, .value=0x50, .type=IO_READ},
        {.addr=0x6963, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0092) {
    const struct CPU_State initial_cpu = {.pc=0x3a17, .a=0x31, .x=0x28, .y=0x3f, .sp=0xee, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3a17, .value=0x50}, {.addr=0x3a18, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3a36, .a=0x31, .x=0x28, .y=0x3f, .sp=0xee, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x3a17, .value=0x50}, {.addr=0x3a18, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3a17, .value=0x50, .type=IO_READ},
        {.addr=0x3a18, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0093) {
    const struct CPU_State initial_cpu = {.pc=0x293e, .a=0x56, .x=0x66, .y=0x98, .sp=0x46, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x293e, .value=0x50}, {.addr=0x293f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2940, .a=0x56, .x=0x66, .y=0x98, .sp=0x46, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x293e, .value=0x50}, {.addr=0x293f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x293e, .value=0x50, .type=IO_READ},
        {.addr=0x293f, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0094) {
    const struct CPU_State initial_cpu = {.pc=0x16e8, .a=0x0d, .x=0xf5, .y=0x57, .sp=0xab, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x16e8, .value=0x50}, {.addr=0x16e9, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x16d1, .a=0x0d, .x=0xf5, .y=0x57, .sp=0xab, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x16e8, .value=0x50}, {.addr=0x16e9, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x16e8, .value=0x50, .type=IO_READ},
        {.addr=0x16e9, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0095) {
    const struct CPU_State initial_cpu = {.pc=0x5d42, .a=0x9c, .x=0x02, .y=0x5e, .sp=0xaa, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5d42, .value=0x50}, {.addr=0x5d43, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x5d44, .a=0x9c, .x=0x02, .y=0x5e, .sp=0xaa, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5d42, .value=0x50}, {.addr=0x5d43, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x5d42, .value=0x50, .type=IO_READ},
        {.addr=0x5d43, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0096) {
    const struct CPU_State initial_cpu = {.pc=0xd360, .a=0x60, .x=0xa8, .y=0x92, .sp=0x87, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd360, .value=0x50}, {.addr=0xd361, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xd3c0, .a=0x60, .x=0xa8, .y=0x92, .sp=0x87, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd360, .value=0x50}, {.addr=0xd361, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xd360, .value=0x50, .type=IO_READ},
        {.addr=0xd361, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0097) {
    const struct CPU_State initial_cpu = {.pc=0xcd82, .a=0x98, .x=0xa6, .y=0x8e, .sp=0x46, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xcd82, .value=0x50}, {.addr=0xcd83, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xcd84, .a=0x98, .x=0xa6, .y=0x8e, .sp=0x46, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xcd82, .value=0x50}, {.addr=0xcd83, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xcd82, .value=0x50, .type=IO_READ},
        {.addr=0xcd83, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0098) {
    const struct CPU_State initial_cpu = {.pc=0x1d63, .a=0xd3, .x=0x10, .y=0x13, .sp=0x53, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1d63, .value=0x50}, {.addr=0x1d64, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x1dc4, .a=0xd3, .x=0x10, .y=0x13, .sp=0x53, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x1d63, .value=0x50}, {.addr=0x1d64, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x1d63, .value=0x50, .type=IO_READ},
        {.addr=0x1d64, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0099) {
    const struct CPU_State initial_cpu = {.pc=0xddff, .a=0x13, .x=0x3a, .y=0x1c, .sp=0xa0, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xddff, .value=0x50}, {.addr=0xde00, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xde01, .a=0x13, .x=0x3a, .y=0x1c, .sp=0xa0, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xddff, .value=0x50}, {.addr=0xde00, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xddff, .value=0x50, .type=IO_READ},
        {.addr=0xde00, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_009A) {
    const struct CPU_State initial_cpu = {.pc=0xccbf, .a=0x10, .x=0xff, .y=0x5b, .sp=0xa2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xccbf, .value=0x50}, {.addr=0xccc0, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xccc1, .a=0x10, .x=0xff, .y=0x5b, .sp=0xa2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xccbf, .value=0x50}, {.addr=0xccc0, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xccbf, .value=0x50, .type=IO_READ},
        {.addr=0xccc0, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_009B) {
    const struct CPU_State initial_cpu = {.pc=0xed2e, .a=0xd4, .x=0xbe, .y=0xb2, .sp=0xb0, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xed2e, .value=0x50}, {.addr=0xed2f, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xed30, .a=0xd4, .x=0xbe, .y=0xb2, .sp=0xb0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xed2e, .value=0x50}, {.addr=0xed2f, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xed2e, .value=0x50, .type=IO_READ},
        {.addr=0xed2f, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_009C) {
    const struct CPU_State initial_cpu = {.pc=0x5fe7, .a=0x82, .x=0x90, .y=0x6d, .sp=0x2a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe7, .value=0x50}, {.addr=0x5fe8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5fc5, .a=0x82, .x=0x90, .y=0x6d, .sp=0x2a, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x5fe7, .value=0x50}, {.addr=0x5fe8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5fe7, .value=0x50, .type=IO_READ},
        {.addr=0x5fe8, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_009D) {
    const struct CPU_State initial_cpu = {.pc=0xa8dd, .a=0x4b, .x=0x14, .y=0x0e, .sp=0xa5, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa8dd, .value=0x50}, {.addr=0xa8de, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xa8b7, .a=0x4b, .x=0x14, .y=0x0e, .sp=0xa5, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xa8dd, .value=0x50}, {.addr=0xa8de, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xa8dd, .value=0x50, .type=IO_READ},
        {.addr=0xa8de, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_009E) {
    const struct CPU_State initial_cpu = {.pc=0x599a, .a=0xff, .x=0x09, .y=0x58, .sp=0x34, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x599a, .value=0x50}, {.addr=0x599b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x599c, .a=0xff, .x=0x09, .y=0x58, .sp=0x34, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x599a, .value=0x50}, {.addr=0x599b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x599a, .value=0x50, .type=IO_READ},
        {.addr=0x599b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_009F) {
    const struct CPU_State initial_cpu = {.pc=0xae1d, .a=0xa2, .x=0xf3, .y=0x23, .sp=0x30, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xae1d, .value=0x50}, {.addr=0xae1e, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xadc8, .a=0xa2, .x=0xf3, .y=0x23, .sp=0x30, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xae1d, .value=0x50}, {.addr=0xae1e, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xae1d, .value=0x50, .type=IO_READ},
        {.addr=0xae1e, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd55e, .a=0x63, .x=0xde, .y=0x0b, .sp=0x7f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd55e, .value=0x50}, {.addr=0xd55f, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xd560, .a=0x63, .x=0xde, .y=0x0b, .sp=0x7f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd55e, .value=0x50}, {.addr=0xd55f, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xd55e, .value=0x50, .type=IO_READ},
        {.addr=0xd55f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x22cb, .a=0xd0, .x=0x61, .y=0xa6, .sp=0xb6, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x22cb, .value=0x50}, {.addr=0x22cc, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x22cd, .a=0xd0, .x=0x61, .y=0xa6, .sp=0xb6, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x22cb, .value=0x50}, {.addr=0x22cc, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x22cb, .value=0x50, .type=IO_READ},
        {.addr=0x22cc, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xe802, .a=0x2e, .x=0x09, .y=0x2d, .sp=0x95, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe802, .value=0x50}, {.addr=0xe803, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xe7b1, .a=0x2e, .x=0x09, .y=0x2d, .sp=0x95, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe802, .value=0x50}, {.addr=0xe803, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xe802, .value=0x50, .type=IO_READ},
        {.addr=0xe803, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xde6c, .a=0xce, .x=0xf9, .y=0xbb, .sp=0x9d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xde6c, .value=0x50}, {.addr=0xde6d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xde6a, .a=0xce, .x=0xf9, .y=0xbb, .sp=0x9d, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xde6c, .value=0x50}, {.addr=0xde6d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xde6c, .value=0x50, .type=IO_READ},
        {.addr=0xde6d, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x30d9, .a=0x20, .x=0x92, .y=0x60, .sp=0xb7, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x30d9, .value=0x50}, {.addr=0x30da, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x30db, .a=0x20, .x=0x92, .y=0x60, .sp=0xb7, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x30d9, .value=0x50}, {.addr=0x30da, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x30d9, .value=0x50, .type=IO_READ},
        {.addr=0x30da, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x85be, .a=0x8b, .x=0xc5, .y=0x7d, .sp=0xce, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x85be, .value=0x50}, {.addr=0x85bf, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x855b, .a=0x8b, .x=0xc5, .y=0x7d, .sp=0xce, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x85be, .value=0x50}, {.addr=0x85bf, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x85be, .value=0x50, .type=IO_READ},
        {.addr=0x85bf, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xa120, .a=0x04, .x=0x82, .y=0x06, .sp=0xa5, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa120, .value=0x50}, {.addr=0xa121, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xa122, .a=0x04, .x=0x82, .y=0x06, .sp=0xa5, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa120, .value=0x50}, {.addr=0xa121, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xa120, .value=0x50, .type=IO_READ},
        {.addr=0xa121, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x8baf, .a=0xf9, .x=0x33, .y=0x98, .sp=0xbc, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8baf, .value=0x50}, {.addr=0x8bb0, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x8c1a, .a=0xf9, .x=0x33, .y=0x98, .sp=0xbc, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x8baf, .value=0x50}, {.addr=0x8bb0, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x8baf, .value=0x50, .type=IO_READ},
        {.addr=0x8bb0, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xb0cb, .a=0xed, .x=0xff, .y=0x8c, .sp=0xd0, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb0cb, .value=0x50}, {.addr=0xb0cc, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xb0cd, .a=0xed, .x=0xff, .y=0x8c, .sp=0xd0, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xb0cb, .value=0x50}, {.addr=0xb0cc, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xb0cb, .value=0x50, .type=IO_READ},
        {.addr=0xb0cc, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xa6f1, .a=0x86, .x=0x58, .y=0x75, .sp=0x53, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f1, .value=0x50}, {.addr=0xa6f2, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa6aa, .a=0x86, .x=0x58, .y=0x75, .sp=0x53, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xa6f1, .value=0x50}, {.addr=0xa6f2, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa6f1, .value=0x50, .type=IO_READ},
        {.addr=0xa6f2, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x155b, .a=0xbb, .x=0x04, .y=0x59, .sp=0x59, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x155b, .value=0x50}, {.addr=0x155c, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x155d, .a=0xbb, .x=0x04, .y=0x59, .sp=0x59, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x155b, .value=0x50}, {.addr=0x155c, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x155b, .value=0x50, .type=IO_READ},
        {.addr=0x155c, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x45d5, .a=0xfd, .x=0x3e, .y=0x29, .sp=0x78, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x45d5, .value=0x50}, {.addr=0x45d6, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x45d6, .a=0xfd, .x=0x3e, .y=0x29, .sp=0x78, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x45d5, .value=0x50}, {.addr=0x45d6, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x45d5, .value=0x50, .type=IO_READ},
        {.addr=0x45d6, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x5e69, .a=0xcd, .x=0x78, .y=0x1c, .sp=0x5a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x5e69, .value=0x50}, {.addr=0x5e6a, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5e8e, .a=0xcd, .x=0x78, .y=0x1c, .sp=0x5a, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x5e69, .value=0x50}, {.addr=0x5e6a, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5e69, .value=0x50, .type=IO_READ},
        {.addr=0x5e6a, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xfb6c, .a=0xe0, .x=0xc1, .y=0x08, .sp=0xb3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6c, .value=0x50}, {.addr=0xfb6d, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xfb5a, .a=0xe0, .x=0xc1, .y=0x08, .sp=0xb3, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xfb6c, .value=0x50}, {.addr=0xfb6d, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xfb6c, .value=0x50, .type=IO_READ},
        {.addr=0xfb6d, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x9fe8, .a=0x15, .x=0xe6, .y=0x65, .sp=0x0a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe8, .value=0x50}, {.addr=0x9fe9, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x9fe3, .a=0x15, .x=0xe6, .y=0x65, .sp=0x0a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9fe8, .value=0x50}, {.addr=0x9fe9, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x9fe8, .value=0x50, .type=IO_READ},
        {.addr=0x9fe9, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x6a20, .a=0xdb, .x=0xa9, .y=0xbb, .sp=0x65, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a20, .value=0x50}, {.addr=0x6a21, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x6a22, .a=0xdb, .x=0xa9, .y=0xbb, .sp=0x65, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6a20, .value=0x50}, {.addr=0x6a21, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x6a20, .value=0x50, .type=IO_READ},
        {.addr=0x6a21, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xed7b, .a=0x32, .x=0xd0, .y=0xec, .sp=0xda, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xed7b, .value=0x50}, {.addr=0xed7c, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xed7d, .a=0x32, .x=0xd0, .y=0xec, .sp=0xda, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xed7b, .value=0x50}, {.addr=0xed7c, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xed7b, .value=0x50, .type=IO_READ},
        {.addr=0xed7c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xa016, .a=0x36, .x=0x05, .y=0xdf, .sp=0x54, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa016, .value=0x50}, {.addr=0xa017, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x9fa8, .a=0x36, .x=0x05, .y=0xdf, .sp=0x54, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xa016, .value=0x50}, {.addr=0xa017, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xa016, .value=0x50, .type=IO_READ},
        {.addr=0xa017, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xcfff, .a=0xa9, .x=0x30, .y=0x70, .sp=0xad, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xcfff, .value=0x50}, {.addr=0xd000, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xcfb4, .a=0xa9, .x=0x30, .y=0x70, .sp=0xad, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcfff, .value=0x50}, {.addr=0xd000, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xcfff, .value=0x50, .type=IO_READ},
        {.addr=0xd000, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x6bea, .a=0xd9, .x=0x85, .y=0x90, .sp=0x3a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6bea, .value=0x50}, {.addr=0x6beb, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x6c2e, .a=0xd9, .x=0x85, .y=0x90, .sp=0x3a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6bea, .value=0x50}, {.addr=0x6beb, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x6bea, .value=0x50, .type=IO_READ},
        {.addr=0x6beb, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xc44b, .a=0x27, .x=0xfd, .y=0xec, .sp=0x6b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc44b, .value=0x50}, {.addr=0xc44c, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xc44d, .a=0x27, .x=0xfd, .y=0xec, .sp=0x6b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc44b, .value=0x50}, {.addr=0xc44c, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xc44b, .value=0x50, .type=IO_READ},
        {.addr=0xc44c, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xcc07, .a=0x5f, .x=0xac, .y=0xc5, .sp=0x5c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc07, .value=0x50}, {.addr=0xcc08, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xcc28, .a=0x5f, .x=0xac, .y=0xc5, .sp=0x5c, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xcc07, .value=0x50}, {.addr=0xcc08, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xcc07, .value=0x50, .type=IO_READ},
        {.addr=0xcc08, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x4df9, .a=0xc1, .x=0x85, .y=0x75, .sp=0x96, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4df9, .value=0x50}, {.addr=0x4dfa, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x4e73, .a=0xc1, .x=0x85, .y=0x75, .sp=0x96, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4df9, .value=0x50}, {.addr=0x4dfa, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x4df9, .value=0x50, .type=IO_READ},
        {.addr=0x4dfa, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xadb6, .a=0x00, .x=0x96, .y=0x36, .sp=0x76, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xadb6, .value=0x50}, {.addr=0xadb7, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xae26, .a=0x00, .x=0x96, .y=0x36, .sp=0x76, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xadb6, .value=0x50}, {.addr=0xadb7, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xadb6, .value=0x50, .type=IO_READ},
        {.addr=0xadb7, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xeeb8, .a=0x26, .x=0xf1, .y=0xf0, .sp=0xab, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb8, .value=0x50}, {.addr=0xeeb9, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xeeba, .a=0x26, .x=0xf1, .y=0xf0, .sp=0xab, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xeeb8, .value=0x50}, {.addr=0xeeb9, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xeeb8, .value=0x50, .type=IO_READ},
        {.addr=0xeeb9, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xf6d2, .a=0x85, .x=0xd7, .y=0xfb, .sp=0x5a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf6d2, .value=0x50}, {.addr=0xf6d3, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xf6f3, .a=0x85, .x=0xd7, .y=0xfb, .sp=0x5a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf6d2, .value=0x50}, {.addr=0xf6d3, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xf6d2, .value=0x50, .type=IO_READ},
        {.addr=0xf6d3, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x6593, .a=0xd9, .x=0xff, .y=0x8f, .sp=0xa1, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6593, .value=0x50}, {.addr=0x6594, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6535, .a=0xd9, .x=0xff, .y=0x8f, .sp=0xa1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x6593, .value=0x50}, {.addr=0x6594, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6593, .value=0x50, .type=IO_READ},
        {.addr=0x6594, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x0626, .a=0x0b, .x=0x16, .y=0x3c, .sp=0x7d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0626, .value=0x50}, {.addr=0x0627, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x0628, .a=0x0b, .x=0x16, .y=0x3c, .sp=0x7d, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0626, .value=0x50}, {.addr=0x0627, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x0626, .value=0x50, .type=IO_READ},
        {.addr=0x0627, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xa34f, .a=0x2c, .x=0xff, .y=0xdf, .sp=0x9c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xa34f, .value=0x50}, {.addr=0xa350, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xa351, .a=0x2c, .x=0xff, .y=0xdf, .sp=0x9c, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xa34f, .value=0x50}, {.addr=0xa350, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xa34f, .value=0x50, .type=IO_READ},
        {.addr=0xa350, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xd5b2, .a=0x84, .x=0xf7, .y=0x08, .sp=0x0f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b2, .value=0x50}, {.addr=0xd5b3, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xd54b, .a=0x84, .x=0xf7, .y=0x08, .sp=0x0f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd5b2, .value=0x50}, {.addr=0xd5b3, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xd5b2, .value=0x50, .type=IO_READ},
        {.addr=0xd5b3, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x4a7c, .a=0xc0, .x=0x0a, .y=0xfb, .sp=0x97, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7c, .value=0x50}, {.addr=0x4a7d, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4a7e, .a=0xc0, .x=0x0a, .y=0xfb, .sp=0x97, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x4a7c, .value=0x50}, {.addr=0x4a7d, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x4a7c, .value=0x50, .type=IO_READ},
        {.addr=0x4a7d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x302c, .a=0x2a, .x=0x20, .y=0xc4, .sp=0xef, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x302c, .value=0x50}, {.addr=0x302d, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x302e, .a=0x2a, .x=0x20, .y=0xc4, .sp=0xef, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x302c, .value=0x50}, {.addr=0x302d, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x302c, .value=0x50, .type=IO_READ},
        {.addr=0x302d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x64dc, .a=0x00, .x=0x01, .y=0x5b, .sp=0xf0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x64dc, .value=0x50}, {.addr=0x64dd, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x64f1, .a=0x00, .x=0x01, .y=0x5b, .sp=0xf0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x64dc, .value=0x50}, {.addr=0x64dd, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x64dc, .value=0x50, .type=IO_READ},
        {.addr=0x64dd, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xd9da, .a=0x3b, .x=0x61, .y=0x28, .sp=0x7d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd9da, .value=0x50}, {.addr=0xd9db, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd9dc, .a=0x3b, .x=0x61, .y=0x28, .sp=0x7d, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xd9da, .value=0x50}, {.addr=0xd9db, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd9da, .value=0x50, .type=IO_READ},
        {.addr=0xd9db, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xa754, .a=0xd9, .x=0x5a, .y=0x68, .sp=0x76, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa754, .value=0x50}, {.addr=0xa755, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa77c, .a=0xd9, .x=0x5a, .y=0x68, .sp=0x76, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa754, .value=0x50}, {.addr=0xa755, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa754, .value=0x50, .type=IO_READ},
        {.addr=0xa755, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xad08, .a=0x0e, .x=0xee, .y=0xa1, .sp=0x73, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xad08, .value=0x50}, {.addr=0xad09, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xacc4, .a=0x0e, .x=0xee, .y=0xa1, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xad08, .value=0x50}, {.addr=0xad09, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xad08, .value=0x50, .type=IO_READ},
        {.addr=0xad09, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x889f, .a=0x27, .x=0x5c, .y=0x7b, .sp=0x3a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x889f, .value=0x50}, {.addr=0x88a0, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x88a1, .a=0x27, .x=0x5c, .y=0x7b, .sp=0x3a, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x889f, .value=0x50}, {.addr=0x88a0, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x889f, .value=0x50, .type=IO_READ},
        {.addr=0x88a0, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x25c5, .a=0x57, .x=0x60, .y=0x03, .sp=0xd2, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x25c5, .value=0x50}, {.addr=0x25c6, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x25c7, .a=0x57, .x=0x60, .y=0x03, .sp=0xd2, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x25c5, .value=0x50}, {.addr=0x25c6, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x25c5, .value=0x50, .type=IO_READ},
        {.addr=0x25c6, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x45d9, .a=0x48, .x=0xcb, .y=0x48, .sp=0x1a, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x45d9, .value=0x50}, {.addr=0x45da, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x4568, .a=0x48, .x=0xcb, .y=0x48, .sp=0x1a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x45d9, .value=0x50}, {.addr=0x45da, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x45d9, .value=0x50, .type=IO_READ},
        {.addr=0x45da, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x56ff, .a=0x4e, .x=0x4f, .y=0x44, .sp=0xd9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x56ff, .value=0x50}, {.addr=0x5700, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x576a, .a=0x4e, .x=0x4f, .y=0x44, .sp=0xd9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x56ff, .value=0x50}, {.addr=0x5700, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x56ff, .value=0x50, .type=IO_READ},
        {.addr=0x5700, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x0511, .a=0x84, .x=0x66, .y=0x8d, .sp=0x10, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0511, .value=0x50}, {.addr=0x0512, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x0513, .a=0x84, .x=0x66, .y=0x8d, .sp=0x10, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0511, .value=0x50}, {.addr=0x0512, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x0511, .value=0x50, .type=IO_READ},
        {.addr=0x0512, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xfa0b, .a=0x4e, .x=0x2e, .y=0x6d, .sp=0xee, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfa0b, .value=0x50}, {.addr=0xfa0c, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xfa0d, .a=0x4e, .x=0x2e, .y=0x6d, .sp=0xee, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xfa0b, .value=0x50}, {.addr=0xfa0c, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xfa0b, .value=0x50, .type=IO_READ},
        {.addr=0xfa0c, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x9689, .a=0xb4, .x=0xab, .y=0x8f, .sp=0x90, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9689, .value=0x50}, {.addr=0x968a, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x968b, .a=0xb4, .x=0xab, .y=0x8f, .sp=0x90, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9689, .value=0x50}, {.addr=0x968a, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x9689, .value=0x50, .type=IO_READ},
        {.addr=0x968a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x69f8, .a=0xa8, .x=0x94, .y=0x4a, .sp=0x18, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x69f8, .value=0x50}, {.addr=0x69f9, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x69fa, .a=0xa8, .x=0x94, .y=0x4a, .sp=0x18, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x69f8, .value=0x50}, {.addr=0x69f9, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x69f8, .value=0x50, .type=IO_READ},
        {.addr=0x69f9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x35b9, .a=0x72, .x=0x7e, .y=0xca, .sp=0x72, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x35b9, .value=0x50}, {.addr=0x35ba, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x35d6, .a=0x72, .x=0x7e, .y=0xca, .sp=0x72, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x35b9, .value=0x50}, {.addr=0x35ba, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x35b9, .value=0x50, .type=IO_READ},
        {.addr=0x35ba, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xe775, .a=0xdd, .x=0x32, .y=0x2d, .sp=0x8a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe775, .value=0x50}, {.addr=0xe776, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe79f, .a=0xdd, .x=0x32, .y=0x2d, .sp=0x8a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe775, .value=0x50}, {.addr=0xe776, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe775, .value=0x50, .type=IO_READ},
        {.addr=0xe776, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x157f, .a=0xd2, .x=0x7f, .y=0x01, .sp=0xc8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x157f, .value=0x50}, {.addr=0x1580, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x15a9, .a=0xd2, .x=0x7f, .y=0x01, .sp=0xc8, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x157f, .value=0x50}, {.addr=0x1580, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x157f, .value=0x50, .type=IO_READ},
        {.addr=0x1580, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x45d4, .a=0xe4, .x=0x0e, .y=0xb4, .sp=0xd2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x45d4, .value=0x50}, {.addr=0x45d5, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x4624, .a=0xe4, .x=0x0e, .y=0xb4, .sp=0xd2, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x45d4, .value=0x50}, {.addr=0x45d5, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x45d4, .value=0x50, .type=IO_READ},
        {.addr=0x45d5, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x3dc6, .a=0x0d, .x=0xec, .y=0x46, .sp=0x69, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x3dc6, .value=0x50}, {.addr=0x3dc7, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x3d9a, .a=0x0d, .x=0xec, .y=0x46, .sp=0x69, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3dc6, .value=0x50}, {.addr=0x3dc7, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x3dc6, .value=0x50, .type=IO_READ},
        {.addr=0x3dc7, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x5f19, .a=0xfe, .x=0x17, .y=0xf7, .sp=0xfd, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x5f19, .value=0x50}, {.addr=0x5f1a, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x5ead, .a=0xfe, .x=0x17, .y=0xf7, .sp=0xfd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5f19, .value=0x50}, {.addr=0x5f1a, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x5f19, .value=0x50, .type=IO_READ},
        {.addr=0x5f1a, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x71b7, .a=0xf3, .x=0x44, .y=0xb6, .sp=0xd1, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x71b7, .value=0x50}, {.addr=0x71b8, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x71b9, .a=0xf3, .x=0x44, .y=0xb6, .sp=0xd1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x71b7, .value=0x50}, {.addr=0x71b8, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x71b7, .value=0x50, .type=IO_READ},
        {.addr=0x71b8, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x19e3, .a=0x6d, .x=0x20, .y=0x96, .sp=0x9f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x19e3, .value=0x50}, {.addr=0x19e4, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x19f5, .a=0x6d, .x=0x20, .y=0x96, .sp=0x9f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x19e3, .value=0x50}, {.addr=0x19e4, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x19e3, .value=0x50, .type=IO_READ},
        {.addr=0x19e4, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x6c8b, .a=0xd5, .x=0x88, .y=0x2c, .sp=0x2b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6c8b, .value=0x50}, {.addr=0x6c8c, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x6c8d, .a=0xd5, .x=0x88, .y=0x2c, .sp=0x2b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6c8b, .value=0x50}, {.addr=0x6c8c, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x6c8b, .value=0x50, .type=IO_READ},
        {.addr=0x6c8c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x2e53, .a=0xb8, .x=0x6d, .y=0x9f, .sp=0xf1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e53, .value=0x50}, {.addr=0x2e54, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x2e55, .a=0xb8, .x=0x6d, .y=0x9f, .sp=0xf1, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x2e53, .value=0x50}, {.addr=0x2e54, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x2e53, .value=0x50, .type=IO_READ},
        {.addr=0x2e54, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x791f, .a=0x9d, .x=0x66, .y=0x19, .sp=0x12, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x791f, .value=0x50}, {.addr=0x7920, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x7921, .a=0x9d, .x=0x66, .y=0x19, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x791f, .value=0x50}, {.addr=0x7920, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x791f, .value=0x50, .type=IO_READ},
        {.addr=0x7920, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x332c, .a=0xdf, .x=0x9d, .y=0xc6, .sp=0x17, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x332c, .value=0x50}, {.addr=0x332d, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x3368, .a=0xdf, .x=0x9d, .y=0xc6, .sp=0x17, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x332c, .value=0x50}, {.addr=0x332d, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x332c, .value=0x50, .type=IO_READ},
        {.addr=0x332d, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x6671, .a=0x21, .x=0x42, .y=0xf9, .sp=0xfa, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6671, .value=0x50}, {.addr=0x6672, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x6673, .a=0x21, .x=0x42, .y=0xf9, .sp=0xfa, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x6671, .value=0x50}, {.addr=0x6672, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x6671, .value=0x50, .type=IO_READ},
        {.addr=0x6672, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xc730, .a=0x63, .x=0x31, .y=0x80, .sp=0xbf, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc730, .value=0x50}, {.addr=0xc731, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xc789, .a=0x63, .x=0x31, .y=0x80, .sp=0xbf, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xc730, .value=0x50}, {.addr=0xc731, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xc730, .value=0x50, .type=IO_READ},
        {.addr=0xc731, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x3b8f, .a=0x2b, .x=0x80, .y=0x34, .sp=0xd9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x3b8f, .value=0x50}, {.addr=0x3b90, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x3ba6, .a=0x2b, .x=0x80, .y=0x34, .sp=0xd9, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x3b8f, .value=0x50}, {.addr=0x3b90, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x3b8f, .value=0x50, .type=IO_READ},
        {.addr=0x3b90, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x5176, .a=0x13, .x=0x36, .y=0xad, .sp=0x96, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5176, .value=0x50}, {.addr=0x5177, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x5188, .a=0x13, .x=0x36, .y=0xad, .sp=0x96, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x5176, .value=0x50}, {.addr=0x5177, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x5176, .value=0x50, .type=IO_READ},
        {.addr=0x5177, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x9a92, .a=0x68, .x=0xef, .y=0x6a, .sp=0x24, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x9a92, .value=0x50}, {.addr=0x9a93, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x9afd, .a=0x68, .x=0xef, .y=0x6a, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9a92, .value=0x50}, {.addr=0x9a93, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x9a92, .value=0x50, .type=IO_READ},
        {.addr=0x9a93, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xee5c, .a=0x03, .x=0x07, .y=0xef, .sp=0x3c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xee5c, .value=0x50}, {.addr=0xee5d, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xede1, .a=0x03, .x=0x07, .y=0xef, .sp=0x3c, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xee5c, .value=0x50}, {.addr=0xee5d, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xee5c, .value=0x50, .type=IO_READ},
        {.addr=0xee5d, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x8d5a, .a=0x0e, .x=0x7d, .y=0x02, .sp=0xbb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5a, .value=0x50}, {.addr=0x8d5b, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x8d80, .a=0x0e, .x=0x7d, .y=0x02, .sp=0xbb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8d5a, .value=0x50}, {.addr=0x8d5b, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x8d5a, .value=0x50, .type=IO_READ},
        {.addr=0x8d5b, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x6b99, .a=0x5e, .x=0xf8, .y=0x0a, .sp=0xa1, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6b99, .value=0x50}, {.addr=0x6b9a, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6b9b, .a=0x5e, .x=0xf8, .y=0x0a, .sp=0xa1, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6b99, .value=0x50}, {.addr=0x6b9a, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6b99, .value=0x50, .type=IO_READ},
        {.addr=0x6b9a, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x0d05, .a=0x27, .x=0xc3, .y=0x7c, .sp=0x50, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d05, .value=0x50}, {.addr=0x0d06, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0d07, .a=0x27, .x=0xc3, .y=0x7c, .sp=0x50, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0d05, .value=0x50}, {.addr=0x0d06, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0d05, .value=0x50, .type=IO_READ},
        {.addr=0x0d06, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x88fe, .a=0xcd, .x=0x20, .y=0x75, .sp=0x39, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x88fe, .value=0x50}, {.addr=0x88ff, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x88cf, .a=0xcd, .x=0x20, .y=0x75, .sp=0x39, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x88fe, .value=0x50}, {.addr=0x88ff, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x88fe, .value=0x50, .type=IO_READ},
        {.addr=0x88ff, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x7696, .a=0xa3, .x=0x9f, .y=0xba, .sp=0x44, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7696, .value=0x50}, {.addr=0x7697, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x7698, .a=0xa3, .x=0x9f, .y=0xba, .sp=0x44, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7696, .value=0x50}, {.addr=0x7697, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x7696, .value=0x50, .type=IO_READ},
        {.addr=0x7697, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x629e, .a=0xb1, .x=0x7c, .y=0x5d, .sp=0x5b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x629e, .value=0x50}, {.addr=0x629f, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x623b, .a=0xb1, .x=0x7c, .y=0x5d, .sp=0x5b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x629e, .value=0x50}, {.addr=0x629f, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x629e, .value=0x50, .type=IO_READ},
        {.addr=0x629f, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x588a, .a=0x91, .x=0x30, .y=0x4b, .sp=0x9a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x588a, .value=0x50}, {.addr=0x588b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x580c, .a=0x91, .x=0x30, .y=0x4b, .sp=0x9a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x588a, .value=0x50}, {.addr=0x588b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x588a, .value=0x50, .type=IO_READ},
        {.addr=0x588b, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xa961, .a=0xd5, .x=0x61, .y=0x93, .sp=0x31, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xa961, .value=0x50}, {.addr=0xa962, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa963, .a=0xd5, .x=0x61, .y=0x93, .sp=0x31, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa961, .value=0x50}, {.addr=0xa962, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa961, .value=0x50, .type=IO_READ},
        {.addr=0xa962, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xd887, .a=0xde, .x=0xff, .y=0xbf, .sp=0x00, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd887, .value=0x50}, {.addr=0xd888, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xd815, .a=0xde, .x=0xff, .y=0xbf, .sp=0x00, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd887, .value=0x50}, {.addr=0xd888, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xd887, .value=0x50, .type=IO_READ},
        {.addr=0xd888, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x82be, .a=0xd9, .x=0x0b, .y=0xd3, .sp=0x20, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x82be, .value=0x50}, {.addr=0x82bf, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x826c, .a=0xd9, .x=0x0b, .y=0xd3, .sp=0x20, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x82be, .value=0x50}, {.addr=0x82bf, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x82be, .value=0x50, .type=IO_READ},
        {.addr=0x82bf, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x546c, .a=0xd3, .x=0x1d, .y=0x50, .sp=0x5e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x546c, .value=0x50}, {.addr=0x546d, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x546e, .a=0xd3, .x=0x1d, .y=0x50, .sp=0x5e, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x546c, .value=0x50}, {.addr=0x546d, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x546c, .value=0x50, .type=IO_READ},
        {.addr=0x546d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x9929, .a=0x74, .x=0x2b, .y=0x93, .sp=0x1d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9929, .value=0x50}, {.addr=0x992a, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x992b, .a=0x74, .x=0x2b, .y=0x93, .sp=0x1d, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x9929, .value=0x50}, {.addr=0x992a, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x9929, .value=0x50, .type=IO_READ},
        {.addr=0x992a, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xbd81, .a=0xd1, .x=0x07, .y=0x3d, .sp=0x92, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xbd81, .value=0x50}, {.addr=0xbd82, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xbd83, .a=0xd1, .x=0x07, .y=0x3d, .sp=0x92, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbd81, .value=0x50}, {.addr=0xbd82, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xbd81, .value=0x50, .type=IO_READ},
        {.addr=0xbd82, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x931c, .a=0xa5, .x=0xfa, .y=0x5c, .sp=0xc1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x931c, .value=0x50}, {.addr=0x931d, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x931e, .a=0xa5, .x=0xfa, .y=0x5c, .sp=0xc1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x931c, .value=0x50}, {.addr=0x931d, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x931c, .value=0x50, .type=IO_READ},
        {.addr=0x931d, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xb3b2, .a=0x1c, .x=0x45, .y=0xbe, .sp=0x8a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xb3b2, .value=0x50}, {.addr=0xb3b3, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xb3eb, .a=0x1c, .x=0x45, .y=0xbe, .sp=0x8a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xb3b2, .value=0x50}, {.addr=0xb3b3, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xb3b2, .value=0x50, .type=IO_READ},
        {.addr=0xb3b3, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x1c57, .a=0xab, .x=0xab, .y=0x68, .sp=0xb5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1c57, .value=0x50}, {.addr=0x1c58, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x1c59, .a=0xab, .x=0xab, .y=0x68, .sp=0xb5, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1c57, .value=0x50}, {.addr=0x1c58, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x1c57, .value=0x50, .type=IO_READ},
        {.addr=0x1c58, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x9da8, .a=0xda, .x=0x79, .y=0x10, .sp=0x70, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9da8, .value=0x50}, {.addr=0x9da9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9df0, .a=0xda, .x=0x79, .y=0x10, .sp=0x70, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x9da8, .value=0x50}, {.addr=0x9da9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9da8, .value=0x50, .type=IO_READ},
        {.addr=0x9da9, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x9e1c, .a=0x97, .x=0x1f, .y=0xda, .sp=0xfb, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x9e1c, .value=0x50}, {.addr=0x9e1d, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x9db5, .a=0x97, .x=0x1f, .y=0xda, .sp=0xfb, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x9e1c, .value=0x50}, {.addr=0x9e1d, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x9e1c, .value=0x50, .type=IO_READ},
        {.addr=0x9e1d, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x72e7, .a=0x0c, .x=0xaf, .y=0x81, .sp=0x37, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x72e7, .value=0x50}, {.addr=0x72e8, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x728c, .a=0x0c, .x=0xaf, .y=0x81, .sp=0x37, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x72e7, .value=0x50}, {.addr=0x72e8, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x72e7, .value=0x50, .type=IO_READ},
        {.addr=0x72e8, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x3e1c, .a=0x7a, .x=0x79, .y=0xe0, .sp=0x99, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3e1c, .value=0x50}, {.addr=0x3e1d, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x3e25, .a=0x7a, .x=0x79, .y=0xe0, .sp=0x99, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3e1c, .value=0x50}, {.addr=0x3e1d, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x3e1c, .value=0x50, .type=IO_READ},
        {.addr=0x3e1d, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xfc67, .a=0x81, .x=0xc2, .y=0xde, .sp=0xa4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xfc67, .value=0x50}, {.addr=0xfc68, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xfc69, .a=0x81, .x=0xc2, .y=0xde, .sp=0xa4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xfc67, .value=0x50}, {.addr=0xfc68, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xfc67, .value=0x50, .type=IO_READ},
        {.addr=0xfc68, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x9731, .a=0x8f, .x=0xbf, .y=0x03, .sp=0x0e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9731, .value=0x50}, {.addr=0x9732, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x96ed, .a=0x8f, .x=0xbf, .y=0x03, .sp=0x0e, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x9731, .value=0x50}, {.addr=0x9732, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x9731, .value=0x50, .type=IO_READ},
        {.addr=0x9732, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x1f8b, .a=0x6a, .x=0xa9, .y=0x92, .sp=0x84, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8b, .value=0x50}, {.addr=0x1f8c, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x1f8d, .a=0x6a, .x=0xa9, .y=0x92, .sp=0x84, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1f8b, .value=0x50}, {.addr=0x1f8c, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x1f8b, .value=0x50, .type=IO_READ},
        {.addr=0x1f8c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xbaa0, .a=0x76, .x=0x67, .y=0x87, .sp=0x32, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa0, .value=0x50}, {.addr=0xbaa1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbaa2, .a=0x76, .x=0x67, .y=0x87, .sp=0x32, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xbaa0, .value=0x50}, {.addr=0xbaa1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbaa0, .value=0x50, .type=IO_READ},
        {.addr=0xbaa1, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x2924, .a=0xbb, .x=0x17, .y=0x50, .sp=0xfc, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2924, .value=0x50}, {.addr=0x2925, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x2926, .a=0xbb, .x=0x17, .y=0x50, .sp=0xfc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2924, .value=0x50}, {.addr=0x2925, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2924, .value=0x50, .type=IO_READ},
        {.addr=0x2925, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x3a23, .a=0xfb, .x=0xdf, .y=0x13, .sp=0x7d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a23, .value=0x50}, {.addr=0x3a24, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3a65, .a=0xfb, .x=0xdf, .y=0x13, .sp=0x7d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3a23, .value=0x50}, {.addr=0x3a24, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3a23, .value=0x50, .type=IO_READ},
        {.addr=0x3a24, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x6a46, .a=0x54, .x=0x75, .y=0x96, .sp=0x91, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6a46, .value=0x50}, {.addr=0x6a47, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x69d7, .a=0x54, .x=0x75, .y=0x96, .sp=0x91, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x6a46, .value=0x50}, {.addr=0x6a47, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x6a46, .value=0x50, .type=IO_READ},
        {.addr=0x6a47, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x5c69, .a=0x01, .x=0xb8, .y=0x12, .sp=0x78, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5c69, .value=0x50}, {.addr=0x5c6a, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x5c6b, .a=0x01, .x=0xb8, .y=0x12, .sp=0x78, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5c69, .value=0x50}, {.addr=0x5c6a, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x5c69, .value=0x50, .type=IO_READ},
        {.addr=0x5c6a, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb4f4, .a=0x80, .x=0x83, .y=0x71, .sp=0x79, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f4, .value=0x50}, {.addr=0xb4f5, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xb55d, .a=0x80, .x=0x83, .y=0x71, .sp=0x79, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb4f4, .value=0x50}, {.addr=0xb4f5, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xb4f4, .value=0x50, .type=IO_READ},
        {.addr=0xb4f5, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x99e8, .a=0x6f, .x=0x7e, .y=0x4e, .sp=0xee, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x99e8, .value=0x50}, {.addr=0x99e9, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x9a32, .a=0x6f, .x=0x7e, .y=0x4e, .sp=0xee, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x99e8, .value=0x50}, {.addr=0x99e9, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x99e8, .value=0x50, .type=IO_READ},
        {.addr=0x99e9, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xc2f7, .a=0x3e, .x=0x18, .y=0x8e, .sp=0x8e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f7, .value=0x50}, {.addr=0xc2f8, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xc2e1, .a=0x3e, .x=0x18, .y=0x8e, .sp=0x8e, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xc2f7, .value=0x50}, {.addr=0xc2f8, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xc2f7, .value=0x50, .type=IO_READ},
        {.addr=0xc2f8, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x90b0, .a=0x9e, .x=0x7e, .y=0xab, .sp=0xf2, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x90b0, .value=0x50}, {.addr=0x90b1, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x9095, .a=0x9e, .x=0x7e, .y=0xab, .sp=0xf2, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x90b0, .value=0x50}, {.addr=0x90b1, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x90b0, .value=0x50, .type=IO_READ},
        {.addr=0x90b1, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x78cc, .a=0xac, .x=0x7f, .y=0xb3, .sp=0x04, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x78cc, .value=0x50}, {.addr=0x78cd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x78ce, .a=0xac, .x=0x7f, .y=0xb3, .sp=0x04, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x78cc, .value=0x50}, {.addr=0x78cd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x78cc, .value=0x50, .type=IO_READ},
        {.addr=0x78cd, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xf5e5, .a=0x8c, .x=0x2b, .y=0xde, .sp=0xd0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf5e5, .value=0x50}, {.addr=0xf5e6, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xf589, .a=0x8c, .x=0x2b, .y=0xde, .sp=0xd0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf5e5, .value=0x50}, {.addr=0xf5e6, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xf5e5, .value=0x50, .type=IO_READ},
        {.addr=0xf5e6, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0100) {
    const struct CPU_State initial_cpu = {.pc=0xafba, .a=0xc4, .x=0xfc, .y=0xaf, .sp=0x42, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xafba, .value=0x50}, {.addr=0xafbb, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xaf5a, .a=0xc4, .x=0xfc, .y=0xaf, .sp=0x42, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xafba, .value=0x50}, {.addr=0xafbb, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xafba, .value=0x50, .type=IO_READ},
        {.addr=0xafbb, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf2c7, .a=0x3d, .x=0x5d, .y=0x95, .sp=0x20, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c7, .value=0x50}, {.addr=0xf2c8, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xf31d, .a=0x3d, .x=0x5d, .y=0x95, .sp=0x20, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xf2c7, .value=0x50}, {.addr=0xf2c8, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xf2c7, .value=0x50, .type=IO_READ},
        {.addr=0xf2c8, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0102) {
    const struct CPU_State initial_cpu = {.pc=0xd641, .a=0xf9, .x=0x68, .y=0x8f, .sp=0x96, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xd641, .value=0x50}, {.addr=0xd642, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xd643, .a=0xf9, .x=0x68, .y=0x8f, .sp=0x96, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xd641, .value=0x50}, {.addr=0xd642, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xd641, .value=0x50, .type=IO_READ},
        {.addr=0xd642, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0103) {
    const struct CPU_State initial_cpu = {.pc=0x7a53, .a=0x86, .x=0x08, .y=0x83, .sp=0x96, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7a53, .value=0x50}, {.addr=0x7a54, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x7a97, .a=0x86, .x=0x08, .y=0x83, .sp=0x96, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x7a53, .value=0x50}, {.addr=0x7a54, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x7a53, .value=0x50, .type=IO_READ},
        {.addr=0x7a54, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0104) {
    const struct CPU_State initial_cpu = {.pc=0xd2b6, .a=0x9b, .x=0x12, .y=0xe4, .sp=0x65, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd2b6, .value=0x50}, {.addr=0xd2b7, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xd282, .a=0x9b, .x=0x12, .y=0xe4, .sp=0x65, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd2b6, .value=0x50}, {.addr=0xd2b7, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xd2b6, .value=0x50, .type=IO_READ},
        {.addr=0xd2b7, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0105) {
    const struct CPU_State initial_cpu = {.pc=0x699b, .a=0xea, .x=0xd1, .y=0xe7, .sp=0x08, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x699b, .value=0x50}, {.addr=0x699c, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x6a10, .a=0xea, .x=0xd1, .y=0xe7, .sp=0x08, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x699b, .value=0x50}, {.addr=0x699c, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x699b, .value=0x50, .type=IO_READ},
        {.addr=0x699c, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0106) {
    const struct CPU_State initial_cpu = {.pc=0x5627, .a=0x76, .x=0xf6, .y=0xbb, .sp=0x89, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5627, .value=0x50}, {.addr=0x5628, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5629, .a=0x76, .x=0xf6, .y=0xbb, .sp=0x89, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x5627, .value=0x50}, {.addr=0x5628, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5627, .value=0x50, .type=IO_READ},
        {.addr=0x5628, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0107) {
    const struct CPU_State initial_cpu = {.pc=0x719c, .a=0x7e, .x=0x7a, .y=0xee, .sp=0x38, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x719c, .value=0x50}, {.addr=0x719d, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7158, .a=0x7e, .x=0x7a, .y=0xee, .sp=0x38, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x719c, .value=0x50}, {.addr=0x719d, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x719c, .value=0x50, .type=IO_READ},
        {.addr=0x719d, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0108) {
    const struct CPU_State initial_cpu = {.pc=0x43b4, .a=0x3a, .x=0xa1, .y=0xa9, .sp=0x0b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x43b4, .value=0x50}, {.addr=0x43b5, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x43b6, .a=0x3a, .x=0xa1, .y=0xa9, .sp=0x0b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x43b4, .value=0x50}, {.addr=0x43b5, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x43b4, .value=0x50, .type=IO_READ},
        {.addr=0x43b5, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0109) {
    const struct CPU_State initial_cpu = {.pc=0xc3df, .a=0xb5, .x=0x03, .y=0xc0, .sp=0x46, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xc3df, .value=0x50}, {.addr=0xc3e0, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xc365, .a=0xb5, .x=0x03, .y=0xc0, .sp=0x46, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc3df, .value=0x50}, {.addr=0xc3e0, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xc3df, .value=0x50, .type=IO_READ},
        {.addr=0xc3e0, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_010A) {
    const struct CPU_State initial_cpu = {.pc=0xe7b5, .a=0x45, .x=0xa4, .y=0x48, .sp=0xd2, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b5, .value=0x50}, {.addr=0xe7b6, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xe832, .a=0x45, .x=0xa4, .y=0x48, .sp=0xd2, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xe7b5, .value=0x50}, {.addr=0xe7b6, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xe7b5, .value=0x50, .type=IO_READ},
        {.addr=0xe7b6, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_010B) {
    const struct CPU_State initial_cpu = {.pc=0x5ab2, .a=0x1f, .x=0x33, .y=0x9c, .sp=0x39, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5ab2, .value=0x50}, {.addr=0x5ab3, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x5ae7, .a=0x1f, .x=0x33, .y=0x9c, .sp=0x39, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5ab2, .value=0x50}, {.addr=0x5ab3, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x5ab2, .value=0x50, .type=IO_READ},
        {.addr=0x5ab3, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_010C) {
    const struct CPU_State initial_cpu = {.pc=0x46a1, .a=0x07, .x=0xe7, .y=0xac, .sp=0x86, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x46a1, .value=0x50}, {.addr=0x46a2, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x4667, .a=0x07, .x=0xe7, .y=0xac, .sp=0x86, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x46a1, .value=0x50}, {.addr=0x46a2, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x46a1, .value=0x50, .type=IO_READ},
        {.addr=0x46a2, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_010D) {
    const struct CPU_State initial_cpu = {.pc=0x0f10, .a=0x7e, .x=0x9a, .y=0xe4, .sp=0xde, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0f10, .value=0x50}, {.addr=0x0f11, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0f12, .a=0x7e, .x=0x9a, .y=0xe4, .sp=0xde, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0f10, .value=0x50}, {.addr=0x0f11, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0f10, .value=0x50, .type=IO_READ},
        {.addr=0x0f11, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_010E) {
    const struct CPU_State initial_cpu = {.pc=0xfa7a, .a=0xe2, .x=0xad, .y=0xc6, .sp=0x99, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xfa7a, .value=0x50}, {.addr=0xfa7b, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xfa7c, .a=0xe2, .x=0xad, .y=0xc6, .sp=0x99, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xfa7a, .value=0x50}, {.addr=0xfa7b, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xfa7a, .value=0x50, .type=IO_READ},
        {.addr=0xfa7b, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_010F) {
    const struct CPU_State initial_cpu = {.pc=0x0f2e, .a=0xe3, .x=0xd4, .y=0x04, .sp=0x5c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0f2e, .value=0x50}, {.addr=0x0f2f, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x0f30, .a=0xe3, .x=0xd4, .y=0x04, .sp=0x5c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0f2e, .value=0x50}, {.addr=0x0f2f, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x0f2e, .value=0x50, .type=IO_READ},
        {.addr=0x0f2f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0110) {
    const struct CPU_State initial_cpu = {.pc=0x924c, .a=0x7f, .x=0x94, .y=0xb2, .sp=0x16, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x924c, .value=0x50}, {.addr=0x924d, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x924e, .a=0x7f, .x=0x94, .y=0xb2, .sp=0x16, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x924c, .value=0x50}, {.addr=0x924d, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x924c, .value=0x50, .type=IO_READ},
        {.addr=0x924d, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0111) {
    const struct CPU_State initial_cpu = {.pc=0x6126, .a=0x82, .x=0x4a, .y=0xd8, .sp=0x1d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6126, .value=0x50}, {.addr=0x6127, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x611b, .a=0x82, .x=0x4a, .y=0xd8, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6126, .value=0x50}, {.addr=0x6127, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6126, .value=0x50, .type=IO_READ},
        {.addr=0x6127, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0112) {
    const struct CPU_State initial_cpu = {.pc=0x0204, .a=0x4a, .x=0x08, .y=0x9f, .sp=0xfe, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0204, .value=0x50}, {.addr=0x0205, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x0206, .a=0x4a, .x=0x08, .y=0x9f, .sp=0xfe, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0204, .value=0x50}, {.addr=0x0205, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x0204, .value=0x50, .type=IO_READ},
        {.addr=0x0205, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0113) {
    const struct CPU_State initial_cpu = {.pc=0x602f, .a=0x5b, .x=0xf7, .y=0xdd, .sp=0xb0, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x602f, .value=0x50}, {.addr=0x6030, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x6031, .a=0x5b, .x=0xf7, .y=0xdd, .sp=0xb0, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x602f, .value=0x50}, {.addr=0x6030, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x602f, .value=0x50, .type=IO_READ},
        {.addr=0x6030, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0114) {
    const struct CPU_State initial_cpu = {.pc=0x5cd2, .a=0xf5, .x=0x53, .y=0x95, .sp=0x00, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd2, .value=0x50}, {.addr=0x5cd3, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x5c9d, .a=0xf5, .x=0x53, .y=0x95, .sp=0x00, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x5cd2, .value=0x50}, {.addr=0x5cd3, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x5cd2, .value=0x50, .type=IO_READ},
        {.addr=0x5cd3, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0115) {
    const struct CPU_State initial_cpu = {.pc=0xa426, .a=0x60, .x=0x03, .y=0x4e, .sp=0x7f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xa426, .value=0x50}, {.addr=0xa427, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xa3f9, .a=0x60, .x=0x03, .y=0x4e, .sp=0x7f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa426, .value=0x50}, {.addr=0xa427, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xa426, .value=0x50, .type=IO_READ},
        {.addr=0xa427, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0116) {
    const struct CPU_State initial_cpu = {.pc=0x9b05, .a=0x90, .x=0x5d, .y=0x8b, .sp=0xe8, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9b05, .value=0x50}, {.addr=0x9b06, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9b07, .a=0x90, .x=0x5d, .y=0x8b, .sp=0xe8, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9b05, .value=0x50}, {.addr=0x9b06, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9b05, .value=0x50, .type=IO_READ},
        {.addr=0x9b06, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0117) {
    const struct CPU_State initial_cpu = {.pc=0x72a7, .a=0x60, .x=0xed, .y=0xcb, .sp=0xea, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x72a7, .value=0x50}, {.addr=0x72a8, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x72a9, .a=0x60, .x=0xed, .y=0xcb, .sp=0xea, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x72a7, .value=0x50}, {.addr=0x72a8, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x72a7, .value=0x50, .type=IO_READ},
        {.addr=0x72a8, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0118) {
    const struct CPU_State initial_cpu = {.pc=0x2cff, .a=0x52, .x=0x63, .y=0x8f, .sp=0x5e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x2cff, .value=0x50}, {.addr=0x2d00, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x2cd0, .a=0x52, .x=0x63, .y=0x8f, .sp=0x5e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2cff, .value=0x50}, {.addr=0x2d00, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x2cff, .value=0x50, .type=IO_READ},
        {.addr=0x2d00, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0119) {
    const struct CPU_State initial_cpu = {.pc=0xc867, .a=0xa3, .x=0x97, .y=0x7c, .sp=0xaf, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xc867, .value=0x50}, {.addr=0xc868, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc7ef, .a=0xa3, .x=0x97, .y=0x7c, .sp=0xaf, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xc867, .value=0x50}, {.addr=0xc868, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc867, .value=0x50, .type=IO_READ},
        {.addr=0xc868, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_011A) {
    const struct CPU_State initial_cpu = {.pc=0x88c2, .a=0x5c, .x=0x16, .y=0xaa, .sp=0xdd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x88c2, .value=0x50}, {.addr=0x88c3, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x88c4, .a=0x5c, .x=0x16, .y=0xaa, .sp=0xdd, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x88c2, .value=0x50}, {.addr=0x88c3, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x88c2, .value=0x50, .type=IO_READ},
        {.addr=0x88c3, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_011B) {
    const struct CPU_State initial_cpu = {.pc=0xd820, .a=0x42, .x=0xea, .y=0xba, .sp=0xe1, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd820, .value=0x50}, {.addr=0xd821, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd7d0, .a=0x42, .x=0xea, .y=0xba, .sp=0xe1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd820, .value=0x50}, {.addr=0xd821, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd820, .value=0x50, .type=IO_READ},
        {.addr=0xd821, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_011C) {
    const struct CPU_State initial_cpu = {.pc=0x0f99, .a=0x18, .x=0x90, .y=0xa6, .sp=0xdc, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f99, .value=0x50}, {.addr=0x0f9a, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x0f9b, .a=0x18, .x=0x90, .y=0xa6, .sp=0xdc, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0f99, .value=0x50}, {.addr=0x0f9a, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x0f99, .value=0x50, .type=IO_READ},
        {.addr=0x0f9a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_011D) {
    const struct CPU_State initial_cpu = {.pc=0x039d, .a=0x69, .x=0x96, .y=0x31, .sp=0x6e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x039d, .value=0x50}, {.addr=0x039e, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x03d8, .a=0x69, .x=0x96, .y=0x31, .sp=0x6e, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x039d, .value=0x50}, {.addr=0x039e, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x039d, .value=0x50, .type=IO_READ},
        {.addr=0x039e, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_011E) {
    const struct CPU_State initial_cpu = {.pc=0x2b25, .a=0x32, .x=0x3b, .y=0x3f, .sp=0xc2, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2b25, .value=0x50}, {.addr=0x2b26, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x2b27, .a=0x32, .x=0x3b, .y=0x3f, .sp=0xc2, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x2b25, .value=0x50}, {.addr=0x2b26, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x2b25, .value=0x50, .type=IO_READ},
        {.addr=0x2b26, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_011F) {
    const struct CPU_State initial_cpu = {.pc=0x759e, .a=0x45, .x=0x58, .y=0x58, .sp=0xd1, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x759e, .value=0x50}, {.addr=0x759f, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x756f, .a=0x45, .x=0x58, .y=0x58, .sp=0xd1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x759e, .value=0x50}, {.addr=0x759f, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x759e, .value=0x50, .type=IO_READ},
        {.addr=0x759f, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0120) {
    const struct CPU_State initial_cpu = {.pc=0x17c2, .a=0xad, .x=0x11, .y=0x0d, .sp=0x38, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x17c2, .value=0x50}, {.addr=0x17c3, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x17d5, .a=0xad, .x=0x11, .y=0x0d, .sp=0x38, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x17c2, .value=0x50}, {.addr=0x17c3, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x17c2, .value=0x50, .type=IO_READ},
        {.addr=0x17c3, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0121) {
    const struct CPU_State initial_cpu = {.pc=0x1713, .a=0x5b, .x=0x0d, .y=0x87, .sp=0x94, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x1713, .value=0x50}, {.addr=0x1714, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1715, .a=0x5b, .x=0x0d, .y=0x87, .sp=0x94, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x1713, .value=0x50}, {.addr=0x1714, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1713, .value=0x50, .type=IO_READ},
        {.addr=0x1714, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0122) {
    const struct CPU_State initial_cpu = {.pc=0x6198, .a=0x8f, .x=0x7d, .y=0x7f, .sp=0x95, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x6198, .value=0x50}, {.addr=0x6199, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x619a, .a=0x8f, .x=0x7d, .y=0x7f, .sp=0x95, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x6198, .value=0x50}, {.addr=0x6199, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6198, .value=0x50, .type=IO_READ},
        {.addr=0x6199, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0123) {
    const struct CPU_State initial_cpu = {.pc=0xf4b9, .a=0x4c, .x=0x76, .y=0xde, .sp=0x8b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b9, .value=0x50}, {.addr=0xf4ba, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xf4bb, .a=0x4c, .x=0x76, .y=0xde, .sp=0x8b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf4b9, .value=0x50}, {.addr=0xf4ba, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xf4b9, .value=0x50, .type=IO_READ},
        {.addr=0xf4ba, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0124) {
    const struct CPU_State initial_cpu = {.pc=0xda4c, .a=0x1f, .x=0xca, .y=0xac, .sp=0x5b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xda4c, .value=0x50}, {.addr=0xda4d, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xda4e, .a=0x1f, .x=0xca, .y=0xac, .sp=0x5b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xda4c, .value=0x50}, {.addr=0xda4d, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xda4c, .value=0x50, .type=IO_READ},
        {.addr=0xda4d, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0125) {
    const struct CPU_State initial_cpu = {.pc=0x254f, .a=0x53, .x=0x6a, .y=0x90, .sp=0xc1, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x254f, .value=0x50}, {.addr=0x2550, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x255a, .a=0x53, .x=0x6a, .y=0x90, .sp=0xc1, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x254f, .value=0x50}, {.addr=0x2550, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x254f, .value=0x50, .type=IO_READ},
        {.addr=0x2550, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0126) {
    const struct CPU_State initial_cpu = {.pc=0x3405, .a=0x41, .x=0x1f, .y=0x1e, .sp=0xc0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x3405, .value=0x50}, {.addr=0x3406, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x347f, .a=0x41, .x=0x1f, .y=0x1e, .sp=0xc0, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x3405, .value=0x50}, {.addr=0x3406, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3405, .value=0x50, .type=IO_READ},
        {.addr=0x3406, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0127) {
    const struct CPU_State initial_cpu = {.pc=0xa143, .a=0xed, .x=0x2b, .y=0x8c, .sp=0x63, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa143, .value=0x50}, {.addr=0xa144, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa18d, .a=0xed, .x=0x2b, .y=0x8c, .sp=0x63, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa143, .value=0x50}, {.addr=0xa144, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa143, .value=0x50, .type=IO_READ},
        {.addr=0xa144, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0128) {
    const struct CPU_State initial_cpu = {.pc=0x422a, .a=0x2c, .x=0x91, .y=0x60, .sp=0x56, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x422a, .value=0x50}, {.addr=0x422b, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x4260, .a=0x2c, .x=0x91, .y=0x60, .sp=0x56, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x422a, .value=0x50}, {.addr=0x422b, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x422a, .value=0x50, .type=IO_READ},
        {.addr=0x422b, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0129) {
    const struct CPU_State initial_cpu = {.pc=0xf298, .a=0x4c, .x=0x10, .y=0x50, .sp=0xb7, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf298, .value=0x50}, {.addr=0xf299, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xf29a, .a=0x4c, .x=0x10, .y=0x50, .sp=0xb7, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xf298, .value=0x50}, {.addr=0xf299, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xf298, .value=0x50, .type=IO_READ},
        {.addr=0xf299, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_012A) {
    const struct CPU_State initial_cpu = {.pc=0x4961, .a=0x09, .x=0x4c, .y=0xa6, .sp=0xac, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4961, .value=0x50}, {.addr=0x4962, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4900, .a=0x09, .x=0x4c, .y=0xa6, .sp=0xac, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4961, .value=0x50}, {.addr=0x4962, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4961, .value=0x50, .type=IO_READ},
        {.addr=0x4962, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_012B) {
    const struct CPU_State initial_cpu = {.pc=0x3c36, .a=0xd1, .x=0x42, .y=0x67, .sp=0xf1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3c36, .value=0x50}, {.addr=0x3c37, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x3c38, .a=0xd1, .x=0x42, .y=0x67, .sp=0xf1, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x3c36, .value=0x50}, {.addr=0x3c37, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x3c36, .value=0x50, .type=IO_READ},
        {.addr=0x3c37, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_012C) {
    const struct CPU_State initial_cpu = {.pc=0x1abf, .a=0xb7, .x=0xb4, .y=0xba, .sp=0x35, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1abf, .value=0x50}, {.addr=0x1ac0, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x1ac1, .a=0xb7, .x=0xb4, .y=0xba, .sp=0x35, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x1abf, .value=0x50}, {.addr=0x1ac0, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x1abf, .value=0x50, .type=IO_READ},
        {.addr=0x1ac0, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_012D) {
    const struct CPU_State initial_cpu = {.pc=0x94c6, .a=0x42, .x=0x2e, .y=0x6d, .sp=0x20, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x94c6, .value=0x50}, {.addr=0x94c7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9496, .a=0x42, .x=0x2e, .y=0x6d, .sp=0x20, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x94c6, .value=0x50}, {.addr=0x94c7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x94c6, .value=0x50, .type=IO_READ},
        {.addr=0x94c7, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_012E) {
    const struct CPU_State initial_cpu = {.pc=0x0e87, .a=0x8b, .x=0xd5, .y=0xbf, .sp=0x68, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0e87, .value=0x50}, {.addr=0x0e88, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0e89, .a=0x8b, .x=0xd5, .y=0xbf, .sp=0x68, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0e87, .value=0x50}, {.addr=0x0e88, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0e87, .value=0x50, .type=IO_READ},
        {.addr=0x0e88, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_012F) {
    const struct CPU_State initial_cpu = {.pc=0x6493, .a=0x3c, .x=0xf4, .y=0xea, .sp=0x5b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6493, .value=0x50}, {.addr=0x6494, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x6495, .a=0x3c, .x=0xf4, .y=0xea, .sp=0x5b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x6493, .value=0x50}, {.addr=0x6494, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x6493, .value=0x50, .type=IO_READ},
        {.addr=0x6494, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0130) {
    const struct CPU_State initial_cpu = {.pc=0xc88a, .a=0xde, .x=0x04, .y=0x2c, .sp=0x44, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc88a, .value=0x50}, {.addr=0xc88b, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xc88c, .a=0xde, .x=0x04, .y=0x2c, .sp=0x44, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xc88a, .value=0x50}, {.addr=0xc88b, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xc88a, .value=0x50, .type=IO_READ},
        {.addr=0xc88b, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0131) {
    const struct CPU_State initial_cpu = {.pc=0xa9ae, .a=0xef, .x=0x67, .y=0xcf, .sp=0xd5, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ae, .value=0x50}, {.addr=0xa9af, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa9cc, .a=0xef, .x=0x67, .y=0xcf, .sp=0xd5, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xa9ae, .value=0x50}, {.addr=0xa9af, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa9ae, .value=0x50, .type=IO_READ},
        {.addr=0xa9af, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0132) {
    const struct CPU_State initial_cpu = {.pc=0x25cd, .a=0x71, .x=0xcf, .y=0x29, .sp=0x2a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x25cd, .value=0x50}, {.addr=0x25ce, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x2574, .a=0x71, .x=0xcf, .y=0x29, .sp=0x2a, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x25cd, .value=0x50}, {.addr=0x25ce, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x25cd, .value=0x50, .type=IO_READ},
        {.addr=0x25ce, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0133) {
    const struct CPU_State initial_cpu = {.pc=0xe387, .a=0xf1, .x=0xab, .y=0x1b, .sp=0x5e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe387, .value=0x50}, {.addr=0xe388, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xe389, .a=0xf1, .x=0xab, .y=0x1b, .sp=0x5e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe387, .value=0x50}, {.addr=0xe388, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xe387, .value=0x50, .type=IO_READ},
        {.addr=0xe388, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0134) {
    const struct CPU_State initial_cpu = {.pc=0x1353, .a=0x81, .x=0x09, .y=0xc1, .sp=0x08, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1353, .value=0x50}, {.addr=0x1354, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x1355, .a=0x81, .x=0x09, .y=0xc1, .sp=0x08, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1353, .value=0x50}, {.addr=0x1354, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x1353, .value=0x50, .type=IO_READ},
        {.addr=0x1354, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0135) {
    const struct CPU_State initial_cpu = {.pc=0x1078, .a=0x5c, .x=0x39, .y=0x79, .sp=0xc5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1078, .value=0x50}, {.addr=0x1079, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1077, .a=0x5c, .x=0x39, .y=0x79, .sp=0xc5, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x1078, .value=0x50}, {.addr=0x1079, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1078, .value=0x50, .type=IO_READ},
        {.addr=0x1079, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0136) {
    const struct CPU_State initial_cpu = {.pc=0xeccf, .a=0xe8, .x=0xef, .y=0x89, .sp=0x4f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xeccf, .value=0x50}, {.addr=0xecd0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xecce, .a=0xe8, .x=0xef, .y=0x89, .sp=0x4f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xeccf, .value=0x50}, {.addr=0xecd0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xeccf, .value=0x50, .type=IO_READ},
        {.addr=0xecd0, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0137) {
    const struct CPU_State initial_cpu = {.pc=0x5676, .a=0x1e, .x=0xda, .y=0x67, .sp=0x09, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5676, .value=0x50}, {.addr=0x5677, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x569b, .a=0x1e, .x=0xda, .y=0x67, .sp=0x09, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5676, .value=0x50}, {.addr=0x5677, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5676, .value=0x50, .type=IO_READ},
        {.addr=0x5677, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0138) {
    const struct CPU_State initial_cpu = {.pc=0x2dfa, .a=0xb8, .x=0x34, .y=0x4e, .sp=0xc5, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x2dfa, .value=0x50}, {.addr=0x2dfb, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x2dfc, .a=0xb8, .x=0x34, .y=0x4e, .sp=0xc5, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x2dfa, .value=0x50}, {.addr=0x2dfb, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x2dfa, .value=0x50, .type=IO_READ},
        {.addr=0x2dfb, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0139) {
    const struct CPU_State initial_cpu = {.pc=0xc95a, .a=0xb7, .x=0xfd, .y=0xc7, .sp=0x35, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc95a, .value=0x50}, {.addr=0xc95b, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xc8e6, .a=0xb7, .x=0xfd, .y=0xc7, .sp=0x35, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xc95a, .value=0x50}, {.addr=0xc95b, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xc95a, .value=0x50, .type=IO_READ},
        {.addr=0xc95b, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_013A) {
    const struct CPU_State initial_cpu = {.pc=0x48fa, .a=0x7e, .x=0xe7, .y=0x32, .sp=0x7b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x48fa, .value=0x50}, {.addr=0x48fb, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x4933, .a=0x7e, .x=0xe7, .y=0x32, .sp=0x7b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x48fa, .value=0x50}, {.addr=0x48fb, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x48fa, .value=0x50, .type=IO_READ},
        {.addr=0x48fb, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_013B) {
    const struct CPU_State initial_cpu = {.pc=0x099c, .a=0x4b, .x=0x3d, .y=0xd4, .sp=0x9c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x099c, .value=0x50}, {.addr=0x099d, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x099e, .a=0x4b, .x=0x3d, .y=0xd4, .sp=0x9c, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x099c, .value=0x50}, {.addr=0x099d, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x099c, .value=0x50, .type=IO_READ},
        {.addr=0x099d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_013C) {
    const struct CPU_State initial_cpu = {.pc=0xd0fa, .a=0xf7, .x=0x21, .y=0xb3, .sp=0xc3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd0fa, .value=0x50}, {.addr=0xd0fb, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xd11a, .a=0xf7, .x=0x21, .y=0xb3, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd0fa, .value=0x50}, {.addr=0xd0fb, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xd0fa, .value=0x50, .type=IO_READ},
        {.addr=0xd0fb, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_013D) {
    const struct CPU_State initial_cpu = {.pc=0x2361, .a=0x8b, .x=0xf3, .y=0xf8, .sp=0x74, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2361, .value=0x50}, {.addr=0x2362, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x23df, .a=0x8b, .x=0xf3, .y=0xf8, .sp=0x74, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2361, .value=0x50}, {.addr=0x2362, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2361, .value=0x50, .type=IO_READ},
        {.addr=0x2362, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc347, .a=0x0e, .x=0xbe, .y=0x7e, .sp=0xef, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc347, .value=0x50}, {.addr=0xc348, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xc349, .a=0x0e, .x=0xbe, .y=0x7e, .sp=0xef, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc347, .value=0x50}, {.addr=0xc348, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xc347, .value=0x50, .type=IO_READ},
        {.addr=0xc348, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_013F) {
    const struct CPU_State initial_cpu = {.pc=0x93af, .a=0xcd, .x=0x0c, .y=0x13, .sp=0x97, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x93af, .value=0x50}, {.addr=0x93b0, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x93b1, .a=0xcd, .x=0x0c, .y=0x13, .sp=0x97, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x93af, .value=0x50}, {.addr=0x93b0, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x93af, .value=0x50, .type=IO_READ},
        {.addr=0x93b0, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0140) {
    const struct CPU_State initial_cpu = {.pc=0x880f, .a=0x55, .x=0xa9, .y=0x7d, .sp=0xde, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x880f, .value=0x50}, {.addr=0x8810, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x8811, .a=0x55, .x=0xa9, .y=0x7d, .sp=0xde, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x880f, .value=0x50}, {.addr=0x8810, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x880f, .value=0x50, .type=IO_READ},
        {.addr=0x8810, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0141) {
    const struct CPU_State initial_cpu = {.pc=0xc0a8, .a=0x92, .x=0xfc, .y=0x38, .sp=0x10, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc0a8, .value=0x50}, {.addr=0xc0a9, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xc0aa, .a=0x92, .x=0xfc, .y=0x38, .sp=0x10, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc0a8, .value=0x50}, {.addr=0xc0a9, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xc0a8, .value=0x50, .type=IO_READ},
        {.addr=0xc0a9, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0142) {
    const struct CPU_State initial_cpu = {.pc=0xb0ac, .a=0xdf, .x=0x72, .y=0x3a, .sp=0xa1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ac, .value=0x50}, {.addr=0xb0ad, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb119, .a=0xdf, .x=0x72, .y=0x3a, .sp=0xa1, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xb0ac, .value=0x50}, {.addr=0xb0ad, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb0ac, .value=0x50, .type=IO_READ},
        {.addr=0xb0ad, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0143) {
    const struct CPU_State initial_cpu = {.pc=0xc96b, .a=0xe5, .x=0x8e, .y=0xbe, .sp=0xa0, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc96b, .value=0x50}, {.addr=0xc96c, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xc96d, .a=0xe5, .x=0x8e, .y=0xbe, .sp=0xa0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc96b, .value=0x50}, {.addr=0xc96c, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xc96b, .value=0x50, .type=IO_READ},
        {.addr=0xc96c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0144) {
    const struct CPU_State initial_cpu = {.pc=0x75e2, .a=0x49, .x=0xdc, .y=0x7b, .sp=0x7e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x75e2, .value=0x50}, {.addr=0x75e3, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x75e4, .a=0x49, .x=0xdc, .y=0x7b, .sp=0x7e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x75e2, .value=0x50}, {.addr=0x75e3, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x75e2, .value=0x50, .type=IO_READ},
        {.addr=0x75e3, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0145) {
    const struct CPU_State initial_cpu = {.pc=0x7ae3, .a=0x33, .x=0xd2, .y=0x75, .sp=0xd5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae3, .value=0x50}, {.addr=0x7ae4, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x7ae5, .a=0x33, .x=0xd2, .y=0x75, .sp=0xd5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7ae3, .value=0x50}, {.addr=0x7ae4, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x7ae3, .value=0x50, .type=IO_READ},
        {.addr=0x7ae4, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0146) {
    const struct CPU_State initial_cpu = {.pc=0x16fb, .a=0x77, .x=0x6b, .y=0x0e, .sp=0x55, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x16fb, .value=0x50}, {.addr=0x16fc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x16fd, .a=0x77, .x=0x6b, .y=0x0e, .sp=0x55, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x16fb, .value=0x50}, {.addr=0x16fc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x16fb, .value=0x50, .type=IO_READ},
        {.addr=0x16fc, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0147) {
    const struct CPU_State initial_cpu = {.pc=0x720e, .a=0xf9, .x=0xf4, .y=0xdc, .sp=0xc3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x720e, .value=0x50}, {.addr=0x720f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x71de, .a=0xf9, .x=0xf4, .y=0xdc, .sp=0xc3, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x720e, .value=0x50}, {.addr=0x720f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x720e, .value=0x50, .type=IO_READ},
        {.addr=0x720f, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0148) {
    const struct CPU_State initial_cpu = {.pc=0x6c3c, .a=0xf2, .x=0x8a, .y=0x32, .sp=0x57, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6c3c, .value=0x50}, {.addr=0x6c3d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x6c3e, .a=0xf2, .x=0x8a, .y=0x32, .sp=0x57, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6c3c, .value=0x50}, {.addr=0x6c3d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x6c3c, .value=0x50, .type=IO_READ},
        {.addr=0x6c3d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0149) {
    const struct CPU_State initial_cpu = {.pc=0x3ae0, .a=0xde, .x=0xe0, .y=0x74, .sp=0x49, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae0, .value=0x50}, {.addr=0x3ae1, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x3ad2, .a=0xde, .x=0xe0, .y=0x74, .sp=0x49, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3ae0, .value=0x50}, {.addr=0x3ae1, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x3ae0, .value=0x50, .type=IO_READ},
        {.addr=0x3ae1, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_014A) {
    const struct CPU_State initial_cpu = {.pc=0xb963, .a=0xb2, .x=0xe0, .y=0x2f, .sp=0x77, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb963, .value=0x50}, {.addr=0xb964, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xb965, .a=0xb2, .x=0xe0, .y=0x2f, .sp=0x77, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xb963, .value=0x50}, {.addr=0xb964, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xb963, .value=0x50, .type=IO_READ},
        {.addr=0xb964, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_014B) {
    const struct CPU_State initial_cpu = {.pc=0x293f, .a=0x85, .x=0xcd, .y=0xea, .sp=0xbc, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x293f, .value=0x50}, {.addr=0x2940, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x28e9, .a=0x85, .x=0xcd, .y=0xea, .sp=0xbc, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x293f, .value=0x50}, {.addr=0x2940, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x293f, .value=0x50, .type=IO_READ},
        {.addr=0x2940, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_014C) {
    const struct CPU_State initial_cpu = {.pc=0xd3f6, .a=0xe4, .x=0xe0, .y=0x14, .sp=0x02, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f6, .value=0x50}, {.addr=0xd3f7, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xd3f8, .a=0xe4, .x=0xe0, .y=0x14, .sp=0x02, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd3f6, .value=0x50}, {.addr=0xd3f7, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xd3f6, .value=0x50, .type=IO_READ},
        {.addr=0xd3f7, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_014D) {
    const struct CPU_State initial_cpu = {.pc=0xeb7f, .a=0x7d, .x=0x46, .y=0x17, .sp=0x49, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb7f, .value=0x50}, {.addr=0xeb80, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xebd4, .a=0x7d, .x=0x46, .y=0x17, .sp=0x49, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xeb7f, .value=0x50}, {.addr=0xeb80, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xeb7f, .value=0x50, .type=IO_READ},
        {.addr=0xeb80, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_014E) {
    const struct CPU_State initial_cpu = {.pc=0x8b50, .a=0x9d, .x=0x30, .y=0x07, .sp=0x18, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8b50, .value=0x50}, {.addr=0x8b51, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x8b83, .a=0x9d, .x=0x30, .y=0x07, .sp=0x18, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x8b50, .value=0x50}, {.addr=0x8b51, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x8b50, .value=0x50, .type=IO_READ},
        {.addr=0x8b51, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_014F) {
    const struct CPU_State initial_cpu = {.pc=0xb383, .a=0xcb, .x=0x54, .y=0x6e, .sp=0xb8, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb383, .value=0x50}, {.addr=0xb384, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xb385, .a=0xcb, .x=0x54, .y=0x6e, .sp=0xb8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb383, .value=0x50}, {.addr=0xb384, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xb383, .value=0x50, .type=IO_READ},
        {.addr=0xb384, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0150) {
    const struct CPU_State initial_cpu = {.pc=0x9f0e, .a=0x29, .x=0x1c, .y=0xea, .sp=0xb1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x9f0e, .value=0x50}, {.addr=0x9f0f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9ecc, .a=0x29, .x=0x1c, .y=0xea, .sp=0xb1, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x9f0e, .value=0x50}, {.addr=0x9f0f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9f0e, .value=0x50, .type=IO_READ},
        {.addr=0x9f0f, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0151) {
    const struct CPU_State initial_cpu = {.pc=0xb905, .a=0x04, .x=0xa9, .y=0x2d, .sp=0x8a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb905, .value=0x50}, {.addr=0xb906, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xb8f8, .a=0x04, .x=0xa9, .y=0x2d, .sp=0x8a, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xb905, .value=0x50}, {.addr=0xb906, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xb905, .value=0x50, .type=IO_READ},
        {.addr=0xb906, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0152) {
    const struct CPU_State initial_cpu = {.pc=0xfc10, .a=0xf4, .x=0x40, .y=0x4a, .sp=0x0d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xfc10, .value=0x50}, {.addr=0xfc11, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xfc12, .a=0xf4, .x=0x40, .y=0x4a, .sp=0x0d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xfc10, .value=0x50}, {.addr=0xfc11, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xfc10, .value=0x50, .type=IO_READ},
        {.addr=0xfc11, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0153) {
    const struct CPU_State initial_cpu = {.pc=0xae95, .a=0x96, .x=0x18, .y=0xc6, .sp=0x40, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xae95, .value=0x50}, {.addr=0xae96, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xae97, .a=0x96, .x=0x18, .y=0xc6, .sp=0x40, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xae95, .value=0x50}, {.addr=0xae96, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xae95, .value=0x50, .type=IO_READ},
        {.addr=0xae96, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0154) {
    const struct CPU_State initial_cpu = {.pc=0xfd1c, .a=0xa6, .x=0xae, .y=0xc7, .sp=0xdd, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1c, .value=0x50}, {.addr=0xfd1d, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xfd1e, .a=0xa6, .x=0xae, .y=0xc7, .sp=0xdd, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xfd1c, .value=0x50}, {.addr=0xfd1d, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xfd1c, .value=0x50, .type=IO_READ},
        {.addr=0xfd1d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0155) {
    const struct CPU_State initial_cpu = {.pc=0x0aa2, .a=0x52, .x=0xc3, .y=0x20, .sp=0xe1, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa2, .value=0x50}, {.addr=0x0aa3, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x0b13, .a=0x52, .x=0xc3, .y=0x20, .sp=0xe1, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0aa2, .value=0x50}, {.addr=0x0aa3, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x0aa2, .value=0x50, .type=IO_READ},
        {.addr=0x0aa3, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0156) {
    const struct CPU_State initial_cpu = {.pc=0x4e1b, .a=0xf6, .x=0xd1, .y=0xf7, .sp=0x40, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4e1b, .value=0x50}, {.addr=0x4e1c, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4d9f, .a=0xf6, .x=0xd1, .y=0xf7, .sp=0x40, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x4e1b, .value=0x50}, {.addr=0x4e1c, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x4e1b, .value=0x50, .type=IO_READ},
        {.addr=0x4e1c, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0157) {
    const struct CPU_State initial_cpu = {.pc=0x87da, .a=0xd4, .x=0x32, .y=0xce, .sp=0x2e, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x87da, .value=0x50}, {.addr=0x87db, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8829, .a=0xd4, .x=0x32, .y=0xce, .sp=0x2e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x87da, .value=0x50}, {.addr=0x87db, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x87da, .value=0x50, .type=IO_READ},
        {.addr=0x87db, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0158) {
    const struct CPU_State initial_cpu = {.pc=0xa2fa, .a=0x2a, .x=0xf4, .y=0x8b, .sp=0xa8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa2fa, .value=0x50}, {.addr=0xa2fb, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa2fc, .a=0x2a, .x=0xf4, .y=0x8b, .sp=0xa8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa2fa, .value=0x50}, {.addr=0xa2fb, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa2fa, .value=0x50, .type=IO_READ},
        {.addr=0xa2fb, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0159) {
    const struct CPU_State initial_cpu = {.pc=0x6259, .a=0x83, .x=0x1a, .y=0x6b, .sp=0x68, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6259, .value=0x50}, {.addr=0x625a, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x625b, .a=0x83, .x=0x1a, .y=0x6b, .sp=0x68, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x6259, .value=0x50}, {.addr=0x625a, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x6259, .value=0x50, .type=IO_READ},
        {.addr=0x625a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_015A) {
    const struct CPU_State initial_cpu = {.pc=0xbca1, .a=0x7c, .x=0x0b, .y=0x6b, .sp=0x68, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xbca1, .value=0x50}, {.addr=0xbca2, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xbca3, .a=0x7c, .x=0x0b, .y=0x6b, .sp=0x68, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xbca1, .value=0x50}, {.addr=0xbca2, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xbca1, .value=0x50, .type=IO_READ},
        {.addr=0xbca2, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_015B) {
    const struct CPU_State initial_cpu = {.pc=0x22b3, .a=0x6a, .x=0x71, .y=0xd1, .sp=0x0b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x22b3, .value=0x50}, {.addr=0x22b4, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x2297, .a=0x6a, .x=0x71, .y=0xd1, .sp=0x0b, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x22b3, .value=0x50}, {.addr=0x22b4, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x22b3, .value=0x50, .type=IO_READ},
        {.addr=0x22b4, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_015C) {
    const struct CPU_State initial_cpu = {.pc=0xfdee, .a=0x25, .x=0x3a, .y=0x67, .sp=0x1a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xfdee, .value=0x50}, {.addr=0xfdef, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xfdf0, .a=0x25, .x=0x3a, .y=0x67, .sp=0x1a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xfdee, .value=0x50}, {.addr=0xfdef, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xfdee, .value=0x50, .type=IO_READ},
        {.addr=0xfdef, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_015D) {
    const struct CPU_State initial_cpu = {.pc=0xeedc, .a=0xdc, .x=0x55, .y=0xd5, .sp=0x54, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xeedc, .value=0x50}, {.addr=0xeedd, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xee78, .a=0xdc, .x=0x55, .y=0xd5, .sp=0x54, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xeedc, .value=0x50}, {.addr=0xeedd, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xeedc, .value=0x50, .type=IO_READ},
        {.addr=0xeedd, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_015E) {
    const struct CPU_State initial_cpu = {.pc=0x9d81, .a=0x49, .x=0xb0, .y=0x20, .sp=0xc1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9d81, .value=0x50}, {.addr=0x9d82, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x9d83, .a=0x49, .x=0xb0, .y=0x20, .sp=0xc1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9d81, .value=0x50}, {.addr=0x9d82, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x9d81, .value=0x50, .type=IO_READ},
        {.addr=0x9d82, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_015F) {
    const struct CPU_State initial_cpu = {.pc=0x187b, .a=0x35, .x=0xbc, .y=0x37, .sp=0x38, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x187b, .value=0x50}, {.addr=0x187c, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x187d, .a=0x35, .x=0xbc, .y=0x37, .sp=0x38, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x187b, .value=0x50}, {.addr=0x187c, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x187b, .value=0x50, .type=IO_READ},
        {.addr=0x187c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0160) {
    const struct CPU_State initial_cpu = {.pc=0xf25e, .a=0x8c, .x=0xda, .y=0xd9, .sp=0x99, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xf25e, .value=0x50}, {.addr=0xf25f, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xf1f7, .a=0x8c, .x=0xda, .y=0xd9, .sp=0x99, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xf25e, .value=0x50}, {.addr=0xf25f, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xf25e, .value=0x50, .type=IO_READ},
        {.addr=0xf25f, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0161) {
    const struct CPU_State initial_cpu = {.pc=0xda85, .a=0x12, .x=0x01, .y=0xa0, .sp=0xcc, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xda85, .value=0x50}, {.addr=0xda86, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xdaae, .a=0x12, .x=0x01, .y=0xa0, .sp=0xcc, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xda85, .value=0x50}, {.addr=0xda86, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xda85, .value=0x50, .type=IO_READ},
        {.addr=0xda86, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0162) {
    const struct CPU_State initial_cpu = {.pc=0x411e, .a=0x69, .x=0x6c, .y=0x1b, .sp=0x01, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x411e, .value=0x50}, {.addr=0x411f, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x40da, .a=0x69, .x=0x6c, .y=0x1b, .sp=0x01, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x411e, .value=0x50}, {.addr=0x411f, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x411e, .value=0x50, .type=IO_READ},
        {.addr=0x411f, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0163) {
    const struct CPU_State initial_cpu = {.pc=0x5d09, .a=0xed, .x=0x46, .y=0xa7, .sp=0xe4, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5d09, .value=0x50}, {.addr=0x5d0a, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x5d0b, .a=0xed, .x=0x46, .y=0xa7, .sp=0xe4, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x5d09, .value=0x50}, {.addr=0x5d0a, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x5d09, .value=0x50, .type=IO_READ},
        {.addr=0x5d0a, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0164) {
    const struct CPU_State initial_cpu = {.pc=0x063f, .a=0x76, .x=0xc5, .y=0xfc, .sp=0xfa, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x063f, .value=0x50}, {.addr=0x0640, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x05e2, .a=0x76, .x=0xc5, .y=0xfc, .sp=0xfa, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x063f, .value=0x50}, {.addr=0x0640, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x063f, .value=0x50, .type=IO_READ},
        {.addr=0x0640, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0165) {
    const struct CPU_State initial_cpu = {.pc=0x8cf8, .a=0xeb, .x=0x9e, .y=0x8f, .sp=0x39, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8cf8, .value=0x50}, {.addr=0x8cf9, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x8cfa, .a=0xeb, .x=0x9e, .y=0x8f, .sp=0x39, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x8cf8, .value=0x50}, {.addr=0x8cf9, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x8cf8, .value=0x50, .type=IO_READ},
        {.addr=0x8cf9, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0166) {
    const struct CPU_State initial_cpu = {.pc=0x2aa7, .a=0x49, .x=0xac, .y=0x9f, .sp=0x81, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2aa7, .value=0x50}, {.addr=0x2aa8, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x2aa9, .a=0x49, .x=0xac, .y=0x9f, .sp=0x81, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2aa7, .value=0x50}, {.addr=0x2aa8, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x2aa7, .value=0x50, .type=IO_READ},
        {.addr=0x2aa8, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0167) {
    const struct CPU_State initial_cpu = {.pc=0xe2a2, .a=0x04, .x=0x12, .y=0x96, .sp=0xcf, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a2, .value=0x50}, {.addr=0xe2a3, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xe2ae, .a=0x04, .x=0x12, .y=0x96, .sp=0xcf, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xe2a2, .value=0x50}, {.addr=0xe2a3, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xe2a2, .value=0x50, .type=IO_READ},
        {.addr=0xe2a3, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0168) {
    const struct CPU_State initial_cpu = {.pc=0xcd9c, .a=0xd0, .x=0x17, .y=0x0f, .sp=0x5d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xcd9c, .value=0x50}, {.addr=0xcd9d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcd44, .a=0xd0, .x=0x17, .y=0x0f, .sp=0x5d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xcd9c, .value=0x50}, {.addr=0xcd9d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcd9c, .value=0x50, .type=IO_READ},
        {.addr=0xcd9d, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0169) {
    const struct CPU_State initial_cpu = {.pc=0x3d85, .a=0x96, .x=0xbc, .y=0x91, .sp=0x3b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3d85, .value=0x50}, {.addr=0x3d86, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x3d1a, .a=0x96, .x=0xbc, .y=0x91, .sp=0x3b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3d85, .value=0x50}, {.addr=0x3d86, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x3d85, .value=0x50, .type=IO_READ},
        {.addr=0x3d86, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_016A) {
    const struct CPU_State initial_cpu = {.pc=0x9096, .a=0x7f, .x=0xf1, .y=0x69, .sp=0xd9, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9096, .value=0x50}, {.addr=0x9097, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x90df, .a=0x7f, .x=0xf1, .y=0x69, .sp=0xd9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9096, .value=0x50}, {.addr=0x9097, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9096, .value=0x50, .type=IO_READ},
        {.addr=0x9097, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_016B) {
    const struct CPU_State initial_cpu = {.pc=0x7d8a, .a=0x56, .x=0x1b, .y=0x93, .sp=0x17, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7d8a, .value=0x50}, {.addr=0x7d8b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x7d41, .a=0x56, .x=0x1b, .y=0x93, .sp=0x17, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7d8a, .value=0x50}, {.addr=0x7d8b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x7d8a, .value=0x50, .type=IO_READ},
        {.addr=0x7d8b, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_016C) {
    const struct CPU_State initial_cpu = {.pc=0x2743, .a=0x6b, .x=0xd4, .y=0x69, .sp=0x8b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2743, .value=0x50}, {.addr=0x2744, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x2700, .a=0x6b, .x=0xd4, .y=0x69, .sp=0x8b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x2743, .value=0x50}, {.addr=0x2744, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x2743, .value=0x50, .type=IO_READ},
        {.addr=0x2744, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_016D) {
    const struct CPU_State initial_cpu = {.pc=0x135a, .a=0x67, .x=0xfd, .y=0x09, .sp=0x8a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x135a, .value=0x50}, {.addr=0x135b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x135c, .a=0x67, .x=0xfd, .y=0x09, .sp=0x8a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x135a, .value=0x50}, {.addr=0x135b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x135a, .value=0x50, .type=IO_READ},
        {.addr=0x135b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_016E) {
    const struct CPU_State initial_cpu = {.pc=0x9f09, .a=0x25, .x=0x14, .y=0x83, .sp=0x4e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9f09, .value=0x50}, {.addr=0x9f0a, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x9f0b, .a=0x25, .x=0x14, .y=0x83, .sp=0x4e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9f09, .value=0x50}, {.addr=0x9f0a, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x9f09, .value=0x50, .type=IO_READ},
        {.addr=0x9f0a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_016F) {
    const struct CPU_State initial_cpu = {.pc=0x8d5e, .a=0x92, .x=0xcb, .y=0x18, .sp=0xd6, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5e, .value=0x50}, {.addr=0x8d5f, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x8d9e, .a=0x92, .x=0xcb, .y=0x18, .sp=0xd6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8d5e, .value=0x50}, {.addr=0x8d5f, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x8d5e, .value=0x50, .type=IO_READ},
        {.addr=0x8d5f, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0170) {
    const struct CPU_State initial_cpu = {.pc=0x878c, .a=0xa5, .x=0x0e, .y=0x68, .sp=0xa0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x878c, .value=0x50}, {.addr=0x878d, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x878e, .a=0xa5, .x=0x0e, .y=0x68, .sp=0xa0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x878c, .value=0x50}, {.addr=0x878d, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x878c, .value=0x50, .type=IO_READ},
        {.addr=0x878d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0171) {
    const struct CPU_State initial_cpu = {.pc=0x7a8c, .a=0xf8, .x=0xef, .y=0x82, .sp=0xff, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7a8c, .value=0x50}, {.addr=0x7a8d, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x7a8e, .a=0xf8, .x=0xef, .y=0x82, .sp=0xff, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x7a8c, .value=0x50}, {.addr=0x7a8d, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x7a8c, .value=0x50, .type=IO_READ},
        {.addr=0x7a8d, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0172) {
    const struct CPU_State initial_cpu = {.pc=0x44f9, .a=0x6f, .x=0x72, .y=0x1e, .sp=0xd9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x44f9, .value=0x50}, {.addr=0x44fa, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x4523, .a=0x6f, .x=0x72, .y=0x1e, .sp=0xd9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x44f9, .value=0x50}, {.addr=0x44fa, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x44f9, .value=0x50, .type=IO_READ},
        {.addr=0x44fa, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0173) {
    const struct CPU_State initial_cpu = {.pc=0x8874, .a=0x1e, .x=0x42, .y=0x32, .sp=0xf8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x8874, .value=0x50}, {.addr=0x8875, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8844, .a=0x1e, .x=0x42, .y=0x32, .sp=0xf8, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x8874, .value=0x50}, {.addr=0x8875, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8874, .value=0x50, .type=IO_READ},
        {.addr=0x8875, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0174) {
    const struct CPU_State initial_cpu = {.pc=0xb4f3, .a=0x31, .x=0x74, .y=0x5a, .sp=0x34, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f3, .value=0x50}, {.addr=0xb4f4, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xb480, .a=0x31, .x=0x74, .y=0x5a, .sp=0x34, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb4f3, .value=0x50}, {.addr=0xb4f4, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xb4f3, .value=0x50, .type=IO_READ},
        {.addr=0xb4f4, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0175) {
    const struct CPU_State initial_cpu = {.pc=0xc160, .a=0x86, .x=0x7d, .y=0x1a, .sp=0x7d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc160, .value=0x50}, {.addr=0xc161, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xc170, .a=0x86, .x=0x7d, .y=0x1a, .sp=0x7d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc160, .value=0x50}, {.addr=0xc161, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xc160, .value=0x50, .type=IO_READ},
        {.addr=0xc161, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1108, .a=0xfc, .x=0x49, .y=0x0c, .sp=0x9c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1108, .value=0x50}, {.addr=0x1109, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1147, .a=0xfc, .x=0x49, .y=0x0c, .sp=0x9c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1108, .value=0x50}, {.addr=0x1109, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1108, .value=0x50, .type=IO_READ},
        {.addr=0x1109, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0177) {
    const struct CPU_State initial_cpu = {.pc=0x4e84, .a=0x39, .x=0xab, .y=0xd6, .sp=0xb1, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x4e84, .value=0x50}, {.addr=0x4e85, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x4e86, .a=0x39, .x=0xab, .y=0xd6, .sp=0xb1, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x4e84, .value=0x50}, {.addr=0x4e85, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x4e84, .value=0x50, .type=IO_READ},
        {.addr=0x4e85, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0178) {
    const struct CPU_State initial_cpu = {.pc=0xa567, .a=0x04, .x=0x5a, .y=0x41, .sp=0x4c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa567, .value=0x50}, {.addr=0xa568, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xa569, .a=0x04, .x=0x5a, .y=0x41, .sp=0x4c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa567, .value=0x50}, {.addr=0xa568, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xa567, .value=0x50, .type=IO_READ},
        {.addr=0xa568, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0179) {
    const struct CPU_State initial_cpu = {.pc=0x0a0d, .a=0xea, .x=0x7a, .y=0x07, .sp=0x4b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a0d, .value=0x50}, {.addr=0x0a0e, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x0a0f, .a=0xea, .x=0x7a, .y=0x07, .sp=0x4b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0a0d, .value=0x50}, {.addr=0x0a0e, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x0a0d, .value=0x50, .type=IO_READ},
        {.addr=0x0a0e, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_017A) {
    const struct CPU_State initial_cpu = {.pc=0x11db, .a=0x15, .x=0x6a, .y=0x52, .sp=0xcb, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x11db, .value=0x50}, {.addr=0x11dc, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x11dd, .a=0x15, .x=0x6a, .y=0x52, .sp=0xcb, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x11db, .value=0x50}, {.addr=0x11dc, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x11db, .value=0x50, .type=IO_READ},
        {.addr=0x11dc, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_017B) {
    const struct CPU_State initial_cpu = {.pc=0x4d63, .a=0xb0, .x=0xa0, .y=0x31, .sp=0x23, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4d63, .value=0x50}, {.addr=0x4d64, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x4d65, .a=0xb0, .x=0xa0, .y=0x31, .sp=0x23, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4d63, .value=0x50}, {.addr=0x4d64, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x4d63, .value=0x50, .type=IO_READ},
        {.addr=0x4d64, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_017C) {
    const struct CPU_State initial_cpu = {.pc=0x5f0d, .a=0x57, .x=0xac, .y=0xa8, .sp=0xb4, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0d, .value=0x50}, {.addr=0x5f0e, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x5f09, .a=0x57, .x=0xac, .y=0xa8, .sp=0xb4, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x5f0d, .value=0x50}, {.addr=0x5f0e, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x5f0d, .value=0x50, .type=IO_READ},
        {.addr=0x5f0e, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_017D) {
    const struct CPU_State initial_cpu = {.pc=0x1b59, .a=0xd6, .x=0xb7, .y=0x32, .sp=0x1c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x1b59, .value=0x50}, {.addr=0x1b5a, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x1b5b, .a=0xd6, .x=0xb7, .y=0x32, .sp=0x1c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1b59, .value=0x50}, {.addr=0x1b5a, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x1b59, .value=0x50, .type=IO_READ},
        {.addr=0x1b5a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_017E) {
    const struct CPU_State initial_cpu = {.pc=0xf3c0, .a=0x99, .x=0x17, .y=0xdc, .sp=0x7c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf3c0, .value=0x50}, {.addr=0xf3c1, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xf3c2, .a=0x99, .x=0x17, .y=0xdc, .sp=0x7c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf3c0, .value=0x50}, {.addr=0xf3c1, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xf3c0, .value=0x50, .type=IO_READ},
        {.addr=0xf3c1, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_017F) {
    const struct CPU_State initial_cpu = {.pc=0x0bad, .a=0xcd, .x=0xfd, .y=0x06, .sp=0xb4, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0bad, .value=0x50}, {.addr=0x0bae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0baf, .a=0xcd, .x=0xfd, .y=0x06, .sp=0xb4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0bad, .value=0x50}, {.addr=0x0bae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0bad, .value=0x50, .type=IO_READ},
        {.addr=0x0bae, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0180) {
    const struct CPU_State initial_cpu = {.pc=0xbf77, .a=0x70, .x=0x1b, .y=0x55, .sp=0x81, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xbf77, .value=0x50}, {.addr=0xbf78, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xbf05, .a=0x70, .x=0x1b, .y=0x55, .sp=0x81, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xbf77, .value=0x50}, {.addr=0xbf78, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xbf77, .value=0x50, .type=IO_READ},
        {.addr=0xbf78, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0181) {
    const struct CPU_State initial_cpu = {.pc=0xed57, .a=0xfb, .x=0xdc, .y=0xb6, .sp=0x4f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xed57, .value=0x50}, {.addr=0xed58, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xed59, .a=0xfb, .x=0xdc, .y=0xb6, .sp=0x4f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xed57, .value=0x50}, {.addr=0xed58, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xed57, .value=0x50, .type=IO_READ},
        {.addr=0xed58, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0182) {
    const struct CPU_State initial_cpu = {.pc=0x1c14, .a=0x65, .x=0xa5, .y=0x3b, .sp=0xf0, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x1c14, .value=0x50}, {.addr=0x1c15, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1bbc, .a=0x65, .x=0xa5, .y=0x3b, .sp=0xf0, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x1c14, .value=0x50}, {.addr=0x1c15, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1c14, .value=0x50, .type=IO_READ},
        {.addr=0x1c15, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0183) {
    const struct CPU_State initial_cpu = {.pc=0x68d0, .a=0xcd, .x=0x2b, .y=0xb6, .sp=0x3c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x68d0, .value=0x50}, {.addr=0x68d1, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x68d2, .a=0xcd, .x=0x2b, .y=0xb6, .sp=0x3c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x68d0, .value=0x50}, {.addr=0x68d1, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x68d0, .value=0x50, .type=IO_READ},
        {.addr=0x68d1, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0184) {
    const struct CPU_State initial_cpu = {.pc=0x2bd4, .a=0x59, .x=0xb7, .y=0xbe, .sp=0x23, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd4, .value=0x50}, {.addr=0x2bd5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2c32, .a=0x59, .x=0xb7, .y=0xbe, .sp=0x23, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2bd4, .value=0x50}, {.addr=0x2bd5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2bd4, .value=0x50, .type=IO_READ},
        {.addr=0x2bd5, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0185) {
    const struct CPU_State initial_cpu = {.pc=0x5ea3, .a=0x17, .x=0xbc, .y=0x96, .sp=0x7a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea3, .value=0x50}, {.addr=0x5ea4, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x5e6a, .a=0x17, .x=0xbc, .y=0x96, .sp=0x7a, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x5ea3, .value=0x50}, {.addr=0x5ea4, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x5ea3, .value=0x50, .type=IO_READ},
        {.addr=0x5ea4, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0186) {
    const struct CPU_State initial_cpu = {.pc=0x34aa, .a=0x69, .x=0xb1, .y=0xe2, .sp=0x43, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x34aa, .value=0x50}, {.addr=0x34ab, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x3494, .a=0x69, .x=0xb1, .y=0xe2, .sp=0x43, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x34aa, .value=0x50}, {.addr=0x34ab, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x34aa, .value=0x50, .type=IO_READ},
        {.addr=0x34ab, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0187) {
    const struct CPU_State initial_cpu = {.pc=0xfd1c, .a=0x68, .x=0xd1, .y=0x3d, .sp=0xae, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1c, .value=0x50}, {.addr=0xfd1d, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xfd51, .a=0x68, .x=0xd1, .y=0x3d, .sp=0xae, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xfd1c, .value=0x50}, {.addr=0xfd1d, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xfd1c, .value=0x50, .type=IO_READ},
        {.addr=0xfd1d, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0188) {
    const struct CPU_State initial_cpu = {.pc=0xa27f, .a=0x4d, .x=0xff, .y=0x38, .sp=0x02, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa27f, .value=0x50}, {.addr=0xa280, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xa252, .a=0x4d, .x=0xff, .y=0x38, .sp=0x02, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa27f, .value=0x50}, {.addr=0xa280, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xa27f, .value=0x50, .type=IO_READ},
        {.addr=0xa280, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0189) {
    const struct CPU_State initial_cpu = {.pc=0x1c2a, .a=0xef, .x=0x4a, .y=0x77, .sp=0xbc, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2a, .value=0x50}, {.addr=0x1c2b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1bcc, .a=0xef, .x=0x4a, .y=0x77, .sp=0xbc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1c2a, .value=0x50}, {.addr=0x1c2b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1c2a, .value=0x50, .type=IO_READ},
        {.addr=0x1c2b, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_018A) {
    const struct CPU_State initial_cpu = {.pc=0x027d, .a=0x0d, .x=0x81, .y=0x85, .sp=0x4e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x027d, .value=0x50}, {.addr=0x027e, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x020f, .a=0x0d, .x=0x81, .y=0x85, .sp=0x4e, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x027d, .value=0x50}, {.addr=0x027e, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x027d, .value=0x50, .type=IO_READ},
        {.addr=0x027e, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_018B) {
    const struct CPU_State initial_cpu = {.pc=0x8663, .a=0x0d, .x=0x6c, .y=0x15, .sp=0x1f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8663, .value=0x50}, {.addr=0x8664, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x861b, .a=0x0d, .x=0x6c, .y=0x15, .sp=0x1f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8663, .value=0x50}, {.addr=0x8664, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x8663, .value=0x50, .type=IO_READ},
        {.addr=0x8664, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_018C) {
    const struct CPU_State initial_cpu = {.pc=0x4f52, .a=0xd1, .x=0x86, .y=0xf8, .sp=0x8c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4f52, .value=0x50}, {.addr=0x4f53, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4f4d, .a=0xd1, .x=0x86, .y=0xf8, .sp=0x8c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x4f52, .value=0x50}, {.addr=0x4f53, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4f52, .value=0x50, .type=IO_READ},
        {.addr=0x4f53, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_018D) {
    const struct CPU_State initial_cpu = {.pc=0x9b65, .a=0x54, .x=0x9e, .y=0x2f, .sp=0x47, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9b65, .value=0x50}, {.addr=0x9b66, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x9b67, .a=0x54, .x=0x9e, .y=0x2f, .sp=0x47, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9b65, .value=0x50}, {.addr=0x9b66, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x9b65, .value=0x50, .type=IO_READ},
        {.addr=0x9b66, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_018E) {
    const struct CPU_State initial_cpu = {.pc=0xa22a, .a=0x22, .x=0x8d, .y=0x22, .sp=0x00, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa22a, .value=0x50}, {.addr=0xa22b, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xa22c, .a=0x22, .x=0x8d, .y=0x22, .sp=0x00, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xa22a, .value=0x50}, {.addr=0xa22b, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xa22a, .value=0x50, .type=IO_READ},
        {.addr=0xa22b, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_018F) {
    const struct CPU_State initial_cpu = {.pc=0x56cc, .a=0x45, .x=0xd9, .y=0xe8, .sp=0x48, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x56cc, .value=0x50}, {.addr=0x56cd, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x56ce, .a=0x45, .x=0xd9, .y=0xe8, .sp=0x48, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x56cc, .value=0x50}, {.addr=0x56cd, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x56cc, .value=0x50, .type=IO_READ},
        {.addr=0x56cd, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0190) {
    const struct CPU_State initial_cpu = {.pc=0x6295, .a=0x21, .x=0x0f, .y=0xda, .sp=0x91, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x6295, .value=0x50}, {.addr=0x6296, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x6297, .a=0x21, .x=0x0f, .y=0xda, .sp=0x91, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6295, .value=0x50}, {.addr=0x6296, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x6295, .value=0x50, .type=IO_READ},
        {.addr=0x6296, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0191) {
    const struct CPU_State initial_cpu = {.pc=0x72d9, .a=0xee, .x=0x58, .y=0x3e, .sp=0x96, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x72d9, .value=0x50}, {.addr=0x72da, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x72bc, .a=0xee, .x=0x58, .y=0x3e, .sp=0x96, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x72d9, .value=0x50}, {.addr=0x72da, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x72d9, .value=0x50, .type=IO_READ},
        {.addr=0x72da, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0192) {
    const struct CPU_State initial_cpu = {.pc=0xf502, .a=0xb2, .x=0x36, .y=0xe5, .sp=0x0d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf502, .value=0x50}, {.addr=0xf503, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xf504, .a=0xb2, .x=0x36, .y=0xe5, .sp=0x0d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf502, .value=0x50}, {.addr=0xf503, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xf502, .value=0x50, .type=IO_READ},
        {.addr=0xf503, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0193) {
    const struct CPU_State initial_cpu = {.pc=0xccc5, .a=0x22, .x=0x3b, .y=0x8b, .sp=0x38, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xccc5, .value=0x50}, {.addr=0xccc6, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xccc7, .a=0x22, .x=0x3b, .y=0x8b, .sp=0x38, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xccc5, .value=0x50}, {.addr=0xccc6, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xccc5, .value=0x50, .type=IO_READ},
        {.addr=0xccc6, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0194) {
    const struct CPU_State initial_cpu = {.pc=0xffde, .a=0xc7, .x=0x6a, .y=0x90, .sp=0xc4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xffde, .value=0x50}, {.addr=0xffdf, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xffe0, .a=0xc7, .x=0x6a, .y=0x90, .sp=0xc4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xffde, .value=0x50}, {.addr=0xffdf, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xffde, .value=0x50, .type=IO_READ},
        {.addr=0xffdf, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0195) {
    const struct CPU_State initial_cpu = {.pc=0xcd19, .a=0x92, .x=0x87, .y=0x33, .sp=0xef, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xcd19, .value=0x50}, {.addr=0xcd1a, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xcd7d, .a=0x92, .x=0x87, .y=0x33, .sp=0xef, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xcd19, .value=0x50}, {.addr=0xcd1a, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xcd19, .value=0x50, .type=IO_READ},
        {.addr=0xcd1a, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0196) {
    const struct CPU_State initial_cpu = {.pc=0x8a77, .a=0xbc, .x=0x17, .y=0x36, .sp=0x40, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x8a77, .value=0x50}, {.addr=0x8a78, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x8aa5, .a=0xbc, .x=0x17, .y=0x36, .sp=0x40, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x8a77, .value=0x50}, {.addr=0x8a78, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8a77, .value=0x50, .type=IO_READ},
        {.addr=0x8a78, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0197) {
    const struct CPU_State initial_cpu = {.pc=0xe377, .a=0x3f, .x=0x5d, .y=0x74, .sp=0x0b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xe377, .value=0x50}, {.addr=0xe378, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe379, .a=0x3f, .x=0x5d, .y=0x74, .sp=0x0b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe377, .value=0x50}, {.addr=0xe378, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe377, .value=0x50, .type=IO_READ},
        {.addr=0xe378, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0198) {
    const struct CPU_State initial_cpu = {.pc=0x0129, .a=0x8c, .x=0x81, .y=0x7e, .sp=0x25, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x50}, {.addr=0x012a, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x012b, .a=0x8c, .x=0x81, .y=0x7e, .sp=0x25, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x50}, {.addr=0x012a, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x0129, .value=0x50, .type=IO_READ},
        {.addr=0x012a, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0199) {
    const struct CPU_State initial_cpu = {.pc=0xc13d, .a=0x14, .x=0x29, .y=0x57, .sp=0x95, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc13d, .value=0x50}, {.addr=0xc13e, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xc123, .a=0x14, .x=0x29, .y=0x57, .sp=0x95, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc13d, .value=0x50}, {.addr=0xc13e, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xc13d, .value=0x50, .type=IO_READ},
        {.addr=0xc13e, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_019A) {
    const struct CPU_State initial_cpu = {.pc=0xeeda, .a=0x95, .x=0xd0, .y=0x59, .sp=0x51, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xeeda, .value=0x50}, {.addr=0xeedb, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xeedc, .a=0x95, .x=0xd0, .y=0x59, .sp=0x51, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xeeda, .value=0x50}, {.addr=0xeedb, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xeeda, .value=0x50, .type=IO_READ},
        {.addr=0xeedb, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_019B) {
    const struct CPU_State initial_cpu = {.pc=0xbcda, .a=0x19, .x=0x40, .y=0x7c, .sp=0x37, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xbcda, .value=0x50}, {.addr=0xbcdb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbcdc, .a=0x19, .x=0x40, .y=0x7c, .sp=0x37, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xbcda, .value=0x50}, {.addr=0xbcdb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbcda, .value=0x50, .type=IO_READ},
        {.addr=0xbcdb, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_019C) {
    const struct CPU_State initial_cpu = {.pc=0x1a9e, .a=0x8e, .x=0x23, .y=0xa4, .sp=0xc7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x1a9e, .value=0x50}, {.addr=0x1a9f, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x1a5a, .a=0x8e, .x=0x23, .y=0xa4, .sp=0xc7, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x1a9e, .value=0x50}, {.addr=0x1a9f, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x1a9e, .value=0x50, .type=IO_READ},
        {.addr=0x1a9f, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_019D) {
    const struct CPU_State initial_cpu = {.pc=0x9e89, .a=0x9f, .x=0xf9, .y=0x88, .sp=0x6d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9e89, .value=0x50}, {.addr=0x9e8a, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x9e8b, .a=0x9f, .x=0xf9, .y=0x88, .sp=0x6d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9e89, .value=0x50}, {.addr=0x9e8a, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x9e89, .value=0x50, .type=IO_READ},
        {.addr=0x9e8a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_019E) {
    const struct CPU_State initial_cpu = {.pc=0x9ada, .a=0xac, .x=0xf8, .y=0x73, .sp=0x60, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x9ada, .value=0x50}, {.addr=0x9adb, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x9b0a, .a=0xac, .x=0xf8, .y=0x73, .sp=0x60, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9ada, .value=0x50}, {.addr=0x9adb, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x9ada, .value=0x50, .type=IO_READ},
        {.addr=0x9adb, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_019F) {
    const struct CPU_State initial_cpu = {.pc=0xb88b, .a=0x84, .x=0x09, .y=0x77, .sp=0x88, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb88b, .value=0x50}, {.addr=0xb88c, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb88d, .a=0x84, .x=0x09, .y=0x77, .sp=0x88, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xb88b, .value=0x50}, {.addr=0xb88c, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb88b, .value=0x50, .type=IO_READ},
        {.addr=0xb88c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x46a4, .a=0xba, .x=0xad, .y=0x75, .sp=0x9c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x46a4, .value=0x50}, {.addr=0x46a5, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x463d, .a=0xba, .x=0xad, .y=0x75, .sp=0x9c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x46a4, .value=0x50}, {.addr=0x46a5, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x46a4, .value=0x50, .type=IO_READ},
        {.addr=0x46a5, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5cbd, .a=0x51, .x=0xc8, .y=0x2f, .sp=0x85, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbd, .value=0x50}, {.addr=0x5cbe, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5cbf, .a=0x51, .x=0xc8, .y=0x2f, .sp=0x85, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5cbd, .value=0x50}, {.addr=0x5cbe, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5cbd, .value=0x50, .type=IO_READ},
        {.addr=0x5cbe, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xa0ce, .a=0x9c, .x=0x14, .y=0xd6, .sp=0x69, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ce, .value=0x50}, {.addr=0xa0cf, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xa0d0, .a=0x9c, .x=0x14, .y=0xd6, .sp=0x69, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xa0ce, .value=0x50}, {.addr=0xa0cf, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xa0ce, .value=0x50, .type=IO_READ},
        {.addr=0xa0cf, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x7525, .a=0x8b, .x=0xe1, .y=0xbe, .sp=0xce, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7525, .value=0x50}, {.addr=0x7526, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x7527, .a=0x8b, .x=0xe1, .y=0xbe, .sp=0xce, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x7525, .value=0x50}, {.addr=0x7526, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x7525, .value=0x50, .type=IO_READ},
        {.addr=0x7526, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x904e, .a=0x8b, .x=0x2c, .y=0x20, .sp=0xa7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x904e, .value=0x50}, {.addr=0x904f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8fef, .a=0x8b, .x=0x2c, .y=0x20, .sp=0xa7, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x904e, .value=0x50}, {.addr=0x904f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x904e, .value=0x50, .type=IO_READ},
        {.addr=0x904f, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x8b3c, .a=0xdf, .x=0xaf, .y=0x05, .sp=0x3b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8b3c, .value=0x50}, {.addr=0x8b3d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8b3e, .a=0xdf, .x=0xaf, .y=0x05, .sp=0x3b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8b3c, .value=0x50}, {.addr=0x8b3d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8b3c, .value=0x50, .type=IO_READ},
        {.addr=0x8b3d, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x3644, .a=0xb5, .x=0x07, .y=0x9d, .sp=0x85, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3644, .value=0x50}, {.addr=0x3645, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x36c0, .a=0xb5, .x=0x07, .y=0x9d, .sp=0x85, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x3644, .value=0x50}, {.addr=0x3645, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3644, .value=0x50, .type=IO_READ},
        {.addr=0x3645, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xbdf6, .a=0xe4, .x=0x65, .y=0x4c, .sp=0xb8, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf6, .value=0x50}, {.addr=0xbdf7, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xbd91, .a=0xe4, .x=0x65, .y=0x4c, .sp=0xb8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbdf6, .value=0x50}, {.addr=0xbdf7, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xbdf6, .value=0x50, .type=IO_READ},
        {.addr=0xbdf7, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xe916, .a=0x2b, .x=0x8d, .y=0x7b, .sp=0xb2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe916, .value=0x50}, {.addr=0xe917, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xe918, .a=0x2b, .x=0x8d, .y=0x7b, .sp=0xb2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe916, .value=0x50}, {.addr=0xe917, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xe916, .value=0x50, .type=IO_READ},
        {.addr=0xe917, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xf686, .a=0x63, .x=0x3b, .y=0xa1, .sp=0x6b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf686, .value=0x50}, {.addr=0xf687, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xf688, .a=0x63, .x=0x3b, .y=0xa1, .sp=0x6b, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xf686, .value=0x50}, {.addr=0xf687, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xf686, .value=0x50, .type=IO_READ},
        {.addr=0xf687, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4ed7, .a=0x42, .x=0x28, .y=0x8a, .sp=0x74, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed7, .value=0x50}, {.addr=0x4ed8, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x4ed9, .a=0x42, .x=0x28, .y=0x8a, .sp=0x74, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x4ed7, .value=0x50}, {.addr=0x4ed8, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x4ed7, .value=0x50, .type=IO_READ},
        {.addr=0x4ed8, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x9f69, .a=0xd6, .x=0x17, .y=0x4d, .sp=0xfc, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x9f69, .value=0x50}, {.addr=0x9f6a, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x9f6b, .a=0xd6, .x=0x17, .y=0x4d, .sp=0xfc, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x9f69, .value=0x50}, {.addr=0x9f6a, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x9f69, .value=0x50, .type=IO_READ},
        {.addr=0x9f6a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xd4e6, .a=0xe3, .x=0xf0, .y=0x8e, .sp=0xb7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e6, .value=0x50}, {.addr=0xd4e7, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xd490, .a=0xe3, .x=0xf0, .y=0x8e, .sp=0xb7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xd4e6, .value=0x50}, {.addr=0xd4e7, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xd4e6, .value=0x50, .type=IO_READ},
        {.addr=0xd4e7, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x10d2, .a=0x77, .x=0x5d, .y=0xf2, .sp=0x06, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x10d2, .value=0x50}, {.addr=0x10d3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1092, .a=0x77, .x=0x5d, .y=0xf2, .sp=0x06, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x10d2, .value=0x50}, {.addr=0x10d3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x10d2, .value=0x50, .type=IO_READ},
        {.addr=0x10d3, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xa215, .a=0xc4, .x=0x6d, .y=0xd3, .sp=0x10, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xa215, .value=0x50}, {.addr=0xa216, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xa217, .a=0xc4, .x=0x6d, .y=0xd3, .sp=0x10, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa215, .value=0x50}, {.addr=0xa216, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xa215, .value=0x50, .type=IO_READ},
        {.addr=0xa216, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xf90e, .a=0xf1, .x=0x4b, .y=0xa3, .sp=0x90, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf90e, .value=0x50}, {.addr=0xf90f, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xf909, .a=0xf1, .x=0x4b, .y=0xa3, .sp=0x90, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf90e, .value=0x50}, {.addr=0xf90f, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xf90e, .value=0x50, .type=IO_READ},
        {.addr=0xf90f, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x6af0, .a=0x8d, .x=0x14, .y=0x93, .sp=0x8b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x6af0, .value=0x50}, {.addr=0x6af1, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x6af2, .a=0x8d, .x=0x14, .y=0x93, .sp=0x8b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x6af0, .value=0x50}, {.addr=0x6af1, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x6af0, .value=0x50, .type=IO_READ},
        {.addr=0x6af1, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x900a, .a=0x46, .x=0xc9, .y=0x43, .sp=0x82, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x900a, .value=0x50}, {.addr=0x900b, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x900c, .a=0x46, .x=0xc9, .y=0x43, .sp=0x82, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x900a, .value=0x50}, {.addr=0x900b, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x900a, .value=0x50, .type=IO_READ},
        {.addr=0x900b, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xe116, .a=0xce, .x=0x1b, .y=0x9c, .sp=0xf7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xe116, .value=0x50}, {.addr=0xe117, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xe118, .a=0xce, .x=0x1b, .y=0x9c, .sp=0xf7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe116, .value=0x50}, {.addr=0xe117, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xe116, .value=0x50, .type=IO_READ},
        {.addr=0xe117, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x652b, .a=0x19, .x=0x5a, .y=0x33, .sp=0x2c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x652b, .value=0x50}, {.addr=0x652c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x652d, .a=0x19, .x=0x5a, .y=0x33, .sp=0x2c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x652b, .value=0x50}, {.addr=0x652c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x652b, .value=0x50, .type=IO_READ},
        {.addr=0x652c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x54c3, .a=0x10, .x=0x0c, .y=0xed, .sp=0x53, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x54c3, .value=0x50}, {.addr=0x54c4, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x5517, .a=0x10, .x=0x0c, .y=0xed, .sp=0x53, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x54c3, .value=0x50}, {.addr=0x54c4, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x54c3, .value=0x50, .type=IO_READ},
        {.addr=0x54c4, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xf01d, .a=0xf6, .x=0xdc, .y=0xed, .sp=0x28, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf01d, .value=0x50}, {.addr=0xf01e, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xf040, .a=0xf6, .x=0xdc, .y=0xed, .sp=0x28, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf01d, .value=0x50}, {.addr=0xf01e, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xf01d, .value=0x50, .type=IO_READ},
        {.addr=0xf01e, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4868, .a=0x5c, .x=0x3f, .y=0x5c, .sp=0x32, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4868, .value=0x50}, {.addr=0x4869, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x486a, .a=0x5c, .x=0x3f, .y=0x5c, .sp=0x32, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4868, .value=0x50}, {.addr=0x4869, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x4868, .value=0x50, .type=IO_READ},
        {.addr=0x4869, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xfdb9, .a=0x60, .x=0xfc, .y=0x3b, .sp=0xd8, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb9, .value=0x50}, {.addr=0xfdba, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xfdbb, .a=0x60, .x=0xfc, .y=0x3b, .sp=0xd8, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xfdb9, .value=0x50}, {.addr=0xfdba, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xfdb9, .value=0x50, .type=IO_READ},
        {.addr=0xfdba, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x466e, .a=0x66, .x=0x65, .y=0x0e, .sp=0xe3, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x466e, .value=0x50}, {.addr=0x466f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x46b6, .a=0x66, .x=0x65, .y=0x0e, .sp=0xe3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x466e, .value=0x50}, {.addr=0x466f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x466e, .value=0x50, .type=IO_READ},
        {.addr=0x466f, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x86b3, .a=0x02, .x=0xa4, .y=0x4c, .sp=0xab, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x86b3, .value=0x50}, {.addr=0x86b4, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x86b9, .a=0x02, .x=0xa4, .y=0x4c, .sp=0xab, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x86b3, .value=0x50}, {.addr=0x86b4, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x86b3, .value=0x50, .type=IO_READ},
        {.addr=0x86b4, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x3f21, .a=0x9e, .x=0x41, .y=0xf5, .sp=0x12, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x3f21, .value=0x50}, {.addr=0x3f22, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3f9d, .a=0x9e, .x=0x41, .y=0xf5, .sp=0x12, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3f21, .value=0x50}, {.addr=0x3f22, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3f21, .value=0x50, .type=IO_READ},
        {.addr=0x3f22, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x2238, .a=0x7e, .x=0x20, .y=0x33, .sp=0x2a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2238, .value=0x50}, {.addr=0x2239, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x223a, .a=0x7e, .x=0x20, .y=0x33, .sp=0x2a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x2238, .value=0x50}, {.addr=0x2239, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x2238, .value=0x50, .type=IO_READ},
        {.addr=0x2239, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x11bb, .a=0xa6, .x=0x5c, .y=0xd5, .sp=0x2c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x11bb, .value=0x50}, {.addr=0x11bc, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x11bd, .a=0xa6, .x=0x5c, .y=0xd5, .sp=0x2c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x11bb, .value=0x50}, {.addr=0x11bc, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x11bb, .value=0x50, .type=IO_READ},
        {.addr=0x11bc, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x0260, .a=0xe2, .x=0xa7, .y=0xf5, .sp=0x64, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0260, .value=0x50}, {.addr=0x0261, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x0287, .a=0xe2, .x=0xa7, .y=0xf5, .sp=0x64, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0260, .value=0x50}, {.addr=0x0261, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x0260, .value=0x50, .type=IO_READ},
        {.addr=0x0261, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x38a7, .a=0x43, .x=0x55, .y=0x6f, .sp=0x79, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x38a7, .value=0x50}, {.addr=0x38a8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x38a9, .a=0x43, .x=0x55, .y=0x6f, .sp=0x79, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x38a7, .value=0x50}, {.addr=0x38a8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x38a7, .value=0x50, .type=IO_READ},
        {.addr=0x38a8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x2e1b, .a=0x5b, .x=0xac, .y=0x40, .sp=0x42, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2e1b, .value=0x50}, {.addr=0x2e1c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x2e1d, .a=0x5b, .x=0xac, .y=0x40, .sp=0x42, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2e1b, .value=0x50}, {.addr=0x2e1c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x2e1b, .value=0x50, .type=IO_READ},
        {.addr=0x2e1c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xa2f8, .a=0x06, .x=0x9a, .y=0x0b, .sp=0x0e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f8, .value=0x50}, {.addr=0xa2f9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa2fa, .a=0x06, .x=0x9a, .y=0x0b, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa2f8, .value=0x50}, {.addr=0xa2f9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa2f8, .value=0x50, .type=IO_READ},
        {.addr=0xa2f9, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x9d0e, .a=0xde, .x=0x9e, .y=0x67, .sp=0x50, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x9d0e, .value=0x50}, {.addr=0x9d0f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x9d10, .a=0xde, .x=0x9e, .y=0x67, .sp=0x50, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9d0e, .value=0x50}, {.addr=0x9d0f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9d0e, .value=0x50, .type=IO_READ},
        {.addr=0x9d0f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xab44, .a=0x7a, .x=0x9b, .y=0xd9, .sp=0x23, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xab44, .value=0x50}, {.addr=0xab45, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xab46, .a=0x7a, .x=0x9b, .y=0xd9, .sp=0x23, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xab44, .value=0x50}, {.addr=0xab45, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xab44, .value=0x50, .type=IO_READ},
        {.addr=0xab45, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x58a0, .a=0x0a, .x=0xa5, .y=0x01, .sp=0xeb, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x58a0, .value=0x50}, {.addr=0x58a1, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x583b, .a=0x0a, .x=0xa5, .y=0x01, .sp=0xeb, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x58a0, .value=0x50}, {.addr=0x58a1, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x58a0, .value=0x50, .type=IO_READ},
        {.addr=0x58a1, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3c58, .a=0x93, .x=0x3d, .y=0x06, .sp=0xba, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3c58, .value=0x50}, {.addr=0x3c59, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x3c23, .a=0x93, .x=0x3d, .y=0x06, .sp=0xba, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3c58, .value=0x50}, {.addr=0x3c59, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x3c58, .value=0x50, .type=IO_READ},
        {.addr=0x3c59, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x4a7d, .a=0xd4, .x=0x13, .y=0x0a, .sp=0xe2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7d, .value=0x50}, {.addr=0x4a7e, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x4a5d, .a=0xd4, .x=0x13, .y=0x0a, .sp=0xe2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4a7d, .value=0x50}, {.addr=0x4a7e, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x4a7d, .value=0x50, .type=IO_READ},
        {.addr=0x4a7e, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x1d36, .a=0x12, .x=0x0d, .y=0xda, .sp=0x38, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d36, .value=0x50}, {.addr=0x1d37, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x1d38, .a=0x12, .x=0x0d, .y=0xda, .sp=0x38, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x1d36, .value=0x50}, {.addr=0x1d37, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x1d36, .value=0x50, .type=IO_READ},
        {.addr=0x1d37, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x6c56, .a=0x3b, .x=0xf8, .y=0xea, .sp=0xc3, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6c56, .value=0x50}, {.addr=0x6c57, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x6bfd, .a=0x3b, .x=0xf8, .y=0xea, .sp=0xc3, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x6c56, .value=0x50}, {.addr=0x6c57, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x6c56, .value=0x50, .type=IO_READ},
        {.addr=0x6c57, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x2e3d, .a=0xa8, .x=0xc9, .y=0xb4, .sp=0xce, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x2e3d, .value=0x50}, {.addr=0x2e3e, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x2e3f, .a=0xa8, .x=0xc9, .y=0xb4, .sp=0xce, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x2e3d, .value=0x50}, {.addr=0x2e3e, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x2e3d, .value=0x50, .type=IO_READ},
        {.addr=0x2e3e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x0830, .a=0xd3, .x=0xc5, .y=0x45, .sp=0xcf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0830, .value=0x50}, {.addr=0x0831, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x07f9, .a=0xd3, .x=0xc5, .y=0x45, .sp=0xcf, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0830, .value=0x50}, {.addr=0x0831, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0830, .value=0x50, .type=IO_READ},
        {.addr=0x0831, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x7942, .a=0xcb, .x=0xe7, .y=0x07, .sp=0x88, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7942, .value=0x50}, {.addr=0x7943, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x78c7, .a=0xcb, .x=0xe7, .y=0x07, .sp=0x88, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7942, .value=0x50}, {.addr=0x7943, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x7942, .value=0x50, .type=IO_READ},
        {.addr=0x7943, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x1904, .a=0x53, .x=0x48, .y=0x7f, .sp=0x38, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x1904, .value=0x50}, {.addr=0x1905, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x193f, .a=0x53, .x=0x48, .y=0x7f, .sp=0x38, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x1904, .value=0x50}, {.addr=0x1905, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x1904, .value=0x50, .type=IO_READ},
        {.addr=0x1905, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xb4bd, .a=0xc5, .x=0x6e, .y=0x27, .sp=0xcb, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb4bd, .value=0x50}, {.addr=0xb4be, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xb4bf, .a=0xc5, .x=0x6e, .y=0x27, .sp=0xcb, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xb4bd, .value=0x50}, {.addr=0xb4be, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xb4bd, .value=0x50, .type=IO_READ},
        {.addr=0xb4be, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x6c5a, .a=0x5a, .x=0x93, .y=0x53, .sp=0x38, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5a, .value=0x50}, {.addr=0x6c5b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6bf9, .a=0x5a, .x=0x93, .y=0x53, .sp=0x38, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6c5a, .value=0x50}, {.addr=0x6c5b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6c5a, .value=0x50, .type=IO_READ},
        {.addr=0x6c5b, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xd872, .a=0x10, .x=0x63, .y=0xbd, .sp=0x1b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd872, .value=0x50}, {.addr=0xd873, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xd869, .a=0x10, .x=0x63, .y=0xbd, .sp=0x1b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd872, .value=0x50}, {.addr=0xd873, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xd872, .value=0x50, .type=IO_READ},
        {.addr=0xd873, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x0928, .a=0x18, .x=0x71, .y=0xe5, .sp=0x89, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0928, .value=0x50}, {.addr=0x0929, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x092a, .a=0x18, .x=0x71, .y=0xe5, .sp=0x89, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0928, .value=0x50}, {.addr=0x0929, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x0928, .value=0x50, .type=IO_READ},
        {.addr=0x0929, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x86e5, .a=0x54, .x=0x5c, .y=0x3d, .sp=0xe7, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x86e5, .value=0x50}, {.addr=0x86e6, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x875e, .a=0x54, .x=0x5c, .y=0x3d, .sp=0xe7, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x86e5, .value=0x50}, {.addr=0x86e6, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x86e5, .value=0x50, .type=IO_READ},
        {.addr=0x86e6, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x2e00, .a=0xb4, .x=0xe9, .y=0xc6, .sp=0x7e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2e00, .value=0x50}, {.addr=0x2e01, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x2e30, .a=0xb4, .x=0xe9, .y=0xc6, .sp=0x7e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2e00, .value=0x50}, {.addr=0x2e01, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x2e00, .value=0x50, .type=IO_READ},
        {.addr=0x2e01, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x0315, .a=0xef, .x=0xd6, .y=0xa9, .sp=0x9d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0315, .value=0x50}, {.addr=0x0316, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x0317, .a=0xef, .x=0xd6, .y=0xa9, .sp=0x9d, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0315, .value=0x50}, {.addr=0x0316, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x0315, .value=0x50, .type=IO_READ},
        {.addr=0x0316, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x7d5a, .a=0x33, .x=0x7e, .y=0x29, .sp=0xa7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x7d5a, .value=0x50}, {.addr=0x7d5b, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x7cee, .a=0x33, .x=0x7e, .y=0x29, .sp=0xa7, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x7d5a, .value=0x50}, {.addr=0x7d5b, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x7d5a, .value=0x50, .type=IO_READ},
        {.addr=0x7d5b, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x017c, .a=0x1c, .x=0xfc, .y=0x03, .sp=0xc0, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x50}, {.addr=0x017d, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x0165, .a=0x1c, .x=0xfc, .y=0x03, .sp=0xc0, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x50}, {.addr=0x017d, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x017c, .value=0x50, .type=IO_READ},
        {.addr=0x017d, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x000a, .a=0xeb, .x=0xee, .y=0x70, .sp=0x20, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x50}, {.addr=0x000b, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x000c, .a=0xeb, .x=0xee, .y=0x70, .sp=0x20, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x50}, {.addr=0x000b, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x000a, .value=0x50, .type=IO_READ},
        {.addr=0x000b, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x61b4, .a=0xf5, .x=0x3f, .y=0x04, .sp=0x60, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x61b4, .value=0x50}, {.addr=0x61b5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6174, .a=0xf5, .x=0x3f, .y=0x04, .sp=0x60, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x61b4, .value=0x50}, {.addr=0x61b5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x61b4, .value=0x50, .type=IO_READ},
        {.addr=0x61b5, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x79e0, .a=0x77, .x=0x69, .y=0xda, .sp=0xc9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x79e0, .value=0x50}, {.addr=0x79e1, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x79e2, .a=0x77, .x=0x69, .y=0xda, .sp=0xc9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x79e0, .value=0x50}, {.addr=0x79e1, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x79e0, .value=0x50, .type=IO_READ},
        {.addr=0x79e1, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x7c89, .a=0x58, .x=0x32, .y=0xba, .sp=0x89, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c89, .value=0x50}, {.addr=0x7c8a, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x7cdd, .a=0x58, .x=0x32, .y=0xba, .sp=0x89, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x7c89, .value=0x50}, {.addr=0x7c8a, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x7c89, .value=0x50, .type=IO_READ},
        {.addr=0x7c8a, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xca46, .a=0x0a, .x=0xf9, .y=0x52, .sp=0xbd, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xca46, .value=0x50}, {.addr=0xca47, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xca48, .a=0x0a, .x=0xf9, .y=0x52, .sp=0xbd, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xca46, .value=0x50}, {.addr=0xca47, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xca46, .value=0x50, .type=IO_READ},
        {.addr=0xca47, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2830, .a=0x7c, .x=0xc7, .y=0xec, .sp=0xcf, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2830, .value=0x50}, {.addr=0x2831, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x2832, .a=0x7c, .x=0xc7, .y=0xec, .sp=0xcf, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2830, .value=0x50}, {.addr=0x2831, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x2830, .value=0x50, .type=IO_READ},
        {.addr=0x2831, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xd456, .a=0x1b, .x=0x27, .y=0xaa, .sp=0x85, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd456, .value=0x50}, {.addr=0xd457, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xd458, .a=0x1b, .x=0x27, .y=0xaa, .sp=0x85, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xd456, .value=0x50}, {.addr=0xd457, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xd456, .value=0x50, .type=IO_READ},
        {.addr=0xd457, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x47bf, .a=0x51, .x=0xb5, .y=0x10, .sp=0xa2, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x47bf, .value=0x50}, {.addr=0x47c0, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x47c1, .a=0x51, .x=0xb5, .y=0x10, .sp=0xa2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x47bf, .value=0x50}, {.addr=0x47c0, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x47bf, .value=0x50, .type=IO_READ},
        {.addr=0x47c0, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x8b75, .a=0x81, .x=0x2c, .y=0x38, .sp=0xef, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8b75, .value=0x50}, {.addr=0x8b76, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8bdd, .a=0x81, .x=0x2c, .y=0x38, .sp=0xef, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x8b75, .value=0x50}, {.addr=0x8b76, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8b75, .value=0x50, .type=IO_READ},
        {.addr=0x8b76, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x65ba, .a=0xcf, .x=0xd4, .y=0x7b, .sp=0xcd, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x65ba, .value=0x50}, {.addr=0x65bb, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x65c0, .a=0xcf, .x=0xd4, .y=0x7b, .sp=0xcd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x65ba, .value=0x50}, {.addr=0x65bb, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x65ba, .value=0x50, .type=IO_READ},
        {.addr=0x65bb, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x4e7d, .a=0x2d, .x=0x4a, .y=0x3d, .sp=0x47, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4e7d, .value=0x50}, {.addr=0x4e7e, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x4e7f, .a=0x2d, .x=0x4a, .y=0x3d, .sp=0x47, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x4e7d, .value=0x50}, {.addr=0x4e7e, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x4e7d, .value=0x50, .type=IO_READ},
        {.addr=0x4e7e, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x384b, .a=0xd5, .x=0x73, .y=0x7f, .sp=0x78, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x384b, .value=0x50}, {.addr=0x384c, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x38cc, .a=0xd5, .x=0x73, .y=0x7f, .sp=0x78, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x384b, .value=0x50}, {.addr=0x384c, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x384b, .value=0x50, .type=IO_READ},
        {.addr=0x384c, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xf553, .a=0xc8, .x=0x2a, .y=0x9b, .sp=0x71, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf553, .value=0x50}, {.addr=0xf554, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xf4eb, .a=0xc8, .x=0x2a, .y=0x9b, .sp=0x71, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf553, .value=0x50}, {.addr=0xf554, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xf553, .value=0x50, .type=IO_READ},
        {.addr=0xf554, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x8ab5, .a=0x06, .x=0x1f, .y=0x41, .sp=0x12, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab5, .value=0x50}, {.addr=0x8ab6, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x8aae, .a=0x06, .x=0x1f, .y=0x41, .sp=0x12, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x8ab5, .value=0x50}, {.addr=0x8ab6, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x8ab5, .value=0x50, .type=IO_READ},
        {.addr=0x8ab6, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xc598, .a=0x1e, .x=0x65, .y=0x5b, .sp=0x4d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc598, .value=0x50}, {.addr=0xc599, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xc59a, .a=0x1e, .x=0x65, .y=0x5b, .sp=0x4d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc598, .value=0x50}, {.addr=0xc599, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xc598, .value=0x50, .type=IO_READ},
        {.addr=0xc599, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x589b, .a=0x4e, .x=0x5e, .y=0xd3, .sp=0x2a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x589b, .value=0x50}, {.addr=0x589c, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x58d2, .a=0x4e, .x=0x5e, .y=0xd3, .sp=0x2a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x589b, .value=0x50}, {.addr=0x589c, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x589b, .value=0x50, .type=IO_READ},
        {.addr=0x589c, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xbba1, .a=0xda, .x=0xa8, .y=0x21, .sp=0x48, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xbba1, .value=0x50}, {.addr=0xbba2, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xbbe6, .a=0xda, .x=0xa8, .y=0x21, .sp=0x48, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbba1, .value=0x50}, {.addr=0xbba2, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xbba1, .value=0x50, .type=IO_READ},
        {.addr=0xbba2, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xfb8c, .a=0xb8, .x=0x1f, .y=0x6a, .sp=0x3a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xfb8c, .value=0x50}, {.addr=0xfb8d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfb8e, .a=0xb8, .x=0x1f, .y=0x6a, .sp=0x3a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xfb8c, .value=0x50}, {.addr=0xfb8d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfb8c, .value=0x50, .type=IO_READ},
        {.addr=0xfb8d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x19b4, .a=0x0c, .x=0x57, .y=0xba, .sp=0x8d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x19b4, .value=0x50}, {.addr=0x19b5, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x1a2e, .a=0x0c, .x=0x57, .y=0xba, .sp=0x8d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x19b4, .value=0x50}, {.addr=0x19b5, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x19b4, .value=0x50, .type=IO_READ},
        {.addr=0x19b5, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x3875, .a=0xe7, .x=0xb8, .y=0x5a, .sp=0x20, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3875, .value=0x50}, {.addr=0x3876, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x3877, .a=0xe7, .x=0xb8, .y=0x5a, .sp=0x20, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3875, .value=0x50}, {.addr=0x3876, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x3875, .value=0x50, .type=IO_READ},
        {.addr=0x3876, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x3707, .a=0x7d, .x=0xca, .y=0x24, .sp=0xe1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x3707, .value=0x50}, {.addr=0x3708, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x3709, .a=0x7d, .x=0xca, .y=0x24, .sp=0xe1, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x3707, .value=0x50}, {.addr=0x3708, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x3707, .value=0x50, .type=IO_READ},
        {.addr=0x3708, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x8a19, .a=0xbc, .x=0x2f, .y=0xaf, .sp=0x1b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x8a19, .value=0x50}, {.addr=0x8a1a, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x89a4, .a=0xbc, .x=0x2f, .y=0xaf, .sp=0x1b, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x8a19, .value=0x50}, {.addr=0x8a1a, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x8a19, .value=0x50, .type=IO_READ},
        {.addr=0x8a1a, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x9451, .a=0xf5, .x=0x0f, .y=0x14, .sp=0x65, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9451, .value=0x50}, {.addr=0x9452, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9453, .a=0xf5, .x=0x0f, .y=0x14, .sp=0x65, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9451, .value=0x50}, {.addr=0x9452, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9451, .value=0x50, .type=IO_READ},
        {.addr=0x9452, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x257b, .a=0x19, .x=0x1b, .y=0x40, .sp=0xf4, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x257b, .value=0x50}, {.addr=0x257c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x251d, .a=0x19, .x=0x1b, .y=0x40, .sp=0xf4, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x257b, .value=0x50}, {.addr=0x257c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x257b, .value=0x50, .type=IO_READ},
        {.addr=0x257c, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xcf04, .a=0x6d, .x=0xa7, .y=0x89, .sp=0x49, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf04, .value=0x50}, {.addr=0xcf05, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xcf2b, .a=0x6d, .x=0xa7, .y=0x89, .sp=0x49, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xcf04, .value=0x50}, {.addr=0xcf05, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xcf04, .value=0x50, .type=IO_READ},
        {.addr=0xcf05, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x33d0, .a=0xe9, .x=0xcc, .y=0x9e, .sp=0xcb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x33d0, .value=0x50}, {.addr=0x33d1, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x341d, .a=0xe9, .x=0xcc, .y=0x9e, .sp=0xcb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x33d0, .value=0x50}, {.addr=0x33d1, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x33d0, .value=0x50, .type=IO_READ},
        {.addr=0x33d1, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xcc71, .a=0x8f, .x=0xb8, .y=0xeb, .sp=0xaf, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xcc71, .value=0x50}, {.addr=0xcc72, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xcc73, .a=0x8f, .x=0xb8, .y=0xeb, .sp=0xaf, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xcc71, .value=0x50}, {.addr=0xcc72, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xcc71, .value=0x50, .type=IO_READ},
        {.addr=0xcc72, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xf551, .a=0x64, .x=0xdf, .y=0x4f, .sp=0x9a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf551, .value=0x50}, {.addr=0xf552, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xf553, .a=0x64, .x=0xdf, .y=0x4f, .sp=0x9a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf551, .value=0x50}, {.addr=0xf552, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xf551, .value=0x50, .type=IO_READ},
        {.addr=0xf552, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x0158, .a=0xe3, .x=0x7f, .y=0xcc, .sp=0x30, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x50}, {.addr=0x0159, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x015a, .a=0xe3, .x=0x7f, .y=0xcc, .sp=0x30, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x50}, {.addr=0x0159, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x0158, .value=0x50, .type=IO_READ},
        {.addr=0x0159, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x70e5, .a=0xdc, .x=0xd4, .y=0x34, .sp=0x1f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x70e5, .value=0x50}, {.addr=0x70e6, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x70e7, .a=0xdc, .x=0xd4, .y=0x34, .sp=0x1f, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x70e5, .value=0x50}, {.addr=0x70e6, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x70e5, .value=0x50, .type=IO_READ},
        {.addr=0x70e6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xd7e6, .a=0xe4, .x=0x3b, .y=0xd3, .sp=0x72, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e6, .value=0x50}, {.addr=0xd7e7, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xd7e8, .a=0xe4, .x=0x3b, .y=0xd3, .sp=0x72, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xd7e6, .value=0x50}, {.addr=0xd7e7, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xd7e6, .value=0x50, .type=IO_READ},
        {.addr=0xd7e7, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x6c9f, .a=0x76, .x=0xa2, .y=0x19, .sp=0xf2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6c9f, .value=0x50}, {.addr=0x6ca0, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x6ca1, .a=0x76, .x=0xa2, .y=0x19, .sp=0xf2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6c9f, .value=0x50}, {.addr=0x6ca0, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x6c9f, .value=0x50, .type=IO_READ},
        {.addr=0x6ca0, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xd344, .a=0x32, .x=0x13, .y=0x25, .sp=0xc4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xd344, .value=0x50}, {.addr=0xd345, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xd346, .a=0x32, .x=0x13, .y=0x25, .sp=0xc4, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xd344, .value=0x50}, {.addr=0xd345, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xd344, .value=0x50, .type=IO_READ},
        {.addr=0xd345, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xc270, .a=0xe4, .x=0xf0, .y=0xb1, .sp=0xe1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc270, .value=0x50}, {.addr=0xc271, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc220, .a=0xe4, .x=0xf0, .y=0xb1, .sp=0xe1, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xc270, .value=0x50}, {.addr=0xc271, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc270, .value=0x50, .type=IO_READ},
        {.addr=0xc271, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x4c46, .a=0x6d, .x=0x8e, .y=0x8b, .sp=0xcb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c46, .value=0x50}, {.addr=0x4c47, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x4c48, .a=0x6d, .x=0x8e, .y=0x8b, .sp=0xcb, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x4c46, .value=0x50}, {.addr=0x4c47, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x4c46, .value=0x50, .type=IO_READ},
        {.addr=0x4c47, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x7f3a, .a=0x07, .x=0xba, .y=0x8e, .sp=0x74, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7f3a, .value=0x50}, {.addr=0x7f3b, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x7ecd, .a=0x07, .x=0xba, .y=0x8e, .sp=0x74, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7f3a, .value=0x50}, {.addr=0x7f3b, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x7f3a, .value=0x50, .type=IO_READ},
        {.addr=0x7f3b, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xaceb, .a=0xf2, .x=0x54, .y=0x2d, .sp=0x31, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xaceb, .value=0x50}, {.addr=0xacec, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xac93, .a=0xf2, .x=0x54, .y=0x2d, .sp=0x31, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xaceb, .value=0x50}, {.addr=0xacec, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaceb, .value=0x50, .type=IO_READ},
        {.addr=0xacec, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xe8f0, .a=0xc8, .x=0xf0, .y=0x20, .sp=0xaf, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f0, .value=0x50}, {.addr=0xe8f1, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xe8f2, .a=0xc8, .x=0xf0, .y=0x20, .sp=0xaf, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xe8f0, .value=0x50}, {.addr=0xe8f1, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xe8f0, .value=0x50, .type=IO_READ},
        {.addr=0xe8f1, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xbb45, .a=0xc5, .x=0xd4, .y=0x9c, .sp=0x8b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xbb45, .value=0x50}, {.addr=0xbb46, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbb47, .a=0xc5, .x=0xd4, .y=0x9c, .sp=0x8b, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xbb45, .value=0x50}, {.addr=0xbb46, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbb45, .value=0x50, .type=IO_READ},
        {.addr=0xbb46, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x91b8, .a=0x0c, .x=0x1b, .y=0x7c, .sp=0x03, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x91b8, .value=0x50}, {.addr=0x91b9, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x91ba, .a=0x0c, .x=0x1b, .y=0x7c, .sp=0x03, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x91b8, .value=0x50}, {.addr=0x91b9, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x91b8, .value=0x50, .type=IO_READ},
        {.addr=0x91b9, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x38d7, .a=0xd7, .x=0x23, .y=0x79, .sp=0x2c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x38d7, .value=0x50}, {.addr=0x38d8, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x3862, .a=0xd7, .x=0x23, .y=0x79, .sp=0x2c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x38d7, .value=0x50}, {.addr=0x38d8, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x38d7, .value=0x50, .type=IO_READ},
        {.addr=0x38d8, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x8248, .a=0x49, .x=0xc5, .y=0x5b, .sp=0x77, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8248, .value=0x50}, {.addr=0x8249, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x81f6, .a=0x49, .x=0xc5, .y=0x5b, .sp=0x77, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8248, .value=0x50}, {.addr=0x8249, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x8248, .value=0x50, .type=IO_READ},
        {.addr=0x8249, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x7756, .a=0xdb, .x=0x74, .y=0xff, .sp=0x41, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7756, .value=0x50}, {.addr=0x7757, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x7758, .a=0xdb, .x=0x74, .y=0xff, .sp=0x41, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x7756, .value=0x50}, {.addr=0x7757, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x7756, .value=0x50, .type=IO_READ},
        {.addr=0x7757, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0200) {
    const struct CPU_State initial_cpu = {.pc=0x306f, .a=0x93, .x=0x32, .y=0x52, .sp=0xd2, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x306f, .value=0x50}, {.addr=0x3070, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x3061, .a=0x93, .x=0x32, .y=0x52, .sp=0xd2, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x306f, .value=0x50}, {.addr=0x3070, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x306f, .value=0x50, .type=IO_READ},
        {.addr=0x3070, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0201) {
    const struct CPU_State initial_cpu = {.pc=0x7b79, .a=0x43, .x=0x56, .y=0x44, .sp=0xc1, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b79, .value=0x50}, {.addr=0x7b7a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7b57, .a=0x43, .x=0x56, .y=0x44, .sp=0xc1, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x7b79, .value=0x50}, {.addr=0x7b7a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7b79, .value=0x50, .type=IO_READ},
        {.addr=0x7b7a, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0202) {
    const struct CPU_State initial_cpu = {.pc=0x8b48, .a=0xde, .x=0xcd, .y=0xfd, .sp=0xa4, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8b48, .value=0x50}, {.addr=0x8b49, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x8bc2, .a=0xde, .x=0xcd, .y=0xfd, .sp=0xa4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8b48, .value=0x50}, {.addr=0x8b49, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x8b48, .value=0x50, .type=IO_READ},
        {.addr=0x8b49, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0203) {
    const struct CPU_State initial_cpu = {.pc=0x84db, .a=0x04, .x=0xf6, .y=0x2d, .sp=0xac, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x84db, .value=0x50}, {.addr=0x84dc, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x84dd, .a=0x04, .x=0xf6, .y=0x2d, .sp=0xac, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x84db, .value=0x50}, {.addr=0x84dc, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x84db, .value=0x50, .type=IO_READ},
        {.addr=0x84dc, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2d91, .a=0xaa, .x=0xbf, .y=0x7c, .sp=0x51, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x2d91, .value=0x50}, {.addr=0x2d92, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x2d66, .a=0xaa, .x=0xbf, .y=0x7c, .sp=0x51, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2d91, .value=0x50}, {.addr=0x2d92, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x2d91, .value=0x50, .type=IO_READ},
        {.addr=0x2d92, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0205) {
    const struct CPU_State initial_cpu = {.pc=0xfba7, .a=0x52, .x=0x9f, .y=0x18, .sp=0x32, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xfba7, .value=0x50}, {.addr=0xfba8, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xfb8e, .a=0x52, .x=0x9f, .y=0x18, .sp=0x32, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xfba7, .value=0x50}, {.addr=0xfba8, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xfba7, .value=0x50, .type=IO_READ},
        {.addr=0xfba8, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0206) {
    const struct CPU_State initial_cpu = {.pc=0x8e0a, .a=0x81, .x=0xd4, .y=0x76, .sp=0xbb, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8e0a, .value=0x50}, {.addr=0x8e0b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8de9, .a=0x81, .x=0xd4, .y=0x76, .sp=0xbb, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x8e0a, .value=0x50}, {.addr=0x8e0b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8e0a, .value=0x50, .type=IO_READ},
        {.addr=0x8e0b, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0207) {
    const struct CPU_State initial_cpu = {.pc=0x8e60, .a=0xcb, .x=0xa1, .y=0xb6, .sp=0xfc, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8e60, .value=0x50}, {.addr=0x8e61, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x8e32, .a=0xcb, .x=0xa1, .y=0xb6, .sp=0xfc, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x8e60, .value=0x50}, {.addr=0x8e61, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x8e60, .value=0x50, .type=IO_READ},
        {.addr=0x8e61, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0208) {
    const struct CPU_State initial_cpu = {.pc=0x8a89, .a=0x31, .x=0x90, .y=0x1f, .sp=0x84, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x8a89, .value=0x50}, {.addr=0x8a8a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a8b, .a=0x31, .x=0x90, .y=0x1f, .sp=0x84, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x8a89, .value=0x50}, {.addr=0x8a8a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a89, .value=0x50, .type=IO_READ},
        {.addr=0x8a8a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0209) {
    const struct CPU_State initial_cpu = {.pc=0x2d1b, .a=0x2f, .x=0x07, .y=0xb4, .sp=0xe1, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2d1b, .value=0x50}, {.addr=0x2d1c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2cfa, .a=0x2f, .x=0x07, .y=0xb4, .sp=0xe1, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x2d1b, .value=0x50}, {.addr=0x2d1c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2d1b, .value=0x50, .type=IO_READ},
        {.addr=0x2d1c, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_020A) {
    const struct CPU_State initial_cpu = {.pc=0x580b, .a=0x96, .x=0xb3, .y=0x80, .sp=0x52, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x580b, .value=0x50}, {.addr=0x580c, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x57e3, .a=0x96, .x=0xb3, .y=0x80, .sp=0x52, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x580b, .value=0x50}, {.addr=0x580c, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x580b, .value=0x50, .type=IO_READ},
        {.addr=0x580c, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_020B) {
    const struct CPU_State initial_cpu = {.pc=0x1284, .a=0x5e, .x=0xd2, .y=0x07, .sp=0x2c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x1284, .value=0x50}, {.addr=0x1285, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x120b, .a=0x5e, .x=0xd2, .y=0x07, .sp=0x2c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x1284, .value=0x50}, {.addr=0x1285, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1284, .value=0x50, .type=IO_READ},
        {.addr=0x1285, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_020C) {
    const struct CPU_State initial_cpu = {.pc=0x7ac6, .a=0xae, .x=0xee, .y=0x03, .sp=0x6f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7ac6, .value=0x50}, {.addr=0x7ac7, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x7ac8, .a=0xae, .x=0xee, .y=0x03, .sp=0x6f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7ac6, .value=0x50}, {.addr=0x7ac7, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x7ac6, .value=0x50, .type=IO_READ},
        {.addr=0x7ac7, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_020D) {
    const struct CPU_State initial_cpu = {.pc=0xdbf6, .a=0x2d, .x=0x33, .y=0x5c, .sp=0x41, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf6, .value=0x50}, {.addr=0xdbf7, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xdbf8, .a=0x2d, .x=0x33, .y=0x5c, .sp=0x41, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xdbf6, .value=0x50}, {.addr=0xdbf7, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xdbf6, .value=0x50, .type=IO_READ},
        {.addr=0xdbf7, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_020E) {
    const struct CPU_State initial_cpu = {.pc=0x0c66, .a=0x39, .x=0xd7, .y=0xee, .sp=0xe5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0c66, .value=0x50}, {.addr=0x0c67, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x0c68, .a=0x39, .x=0xd7, .y=0xee, .sp=0xe5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0c66, .value=0x50}, {.addr=0x0c67, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x0c66, .value=0x50, .type=IO_READ},
        {.addr=0x0c67, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_020F) {
    const struct CPU_State initial_cpu = {.pc=0x1ebd, .a=0x37, .x=0x9d, .y=0x68, .sp=0x53, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1ebd, .value=0x50}, {.addr=0x1ebe, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x1e77, .a=0x37, .x=0x9d, .y=0x68, .sp=0x53, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x1ebd, .value=0x50}, {.addr=0x1ebe, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x1ebd, .value=0x50, .type=IO_READ},
        {.addr=0x1ebe, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4fc9, .a=0x59, .x=0x96, .y=0xb5, .sp=0x89, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc9, .value=0x50}, {.addr=0x4fca, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x503a, .a=0x59, .x=0x96, .y=0xb5, .sp=0x89, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4fc9, .value=0x50}, {.addr=0x4fca, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x4fc9, .value=0x50, .type=IO_READ},
        {.addr=0x4fca, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0211) {
    const struct CPU_State initial_cpu = {.pc=0xdc09, .a=0xb7, .x=0x25, .y=0xad, .sp=0x1d, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xdc09, .value=0x50}, {.addr=0xdc0a, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xdc0b, .a=0xb7, .x=0x25, .y=0xad, .sp=0x1d, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xdc09, .value=0x50}, {.addr=0xdc0a, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xdc09, .value=0x50, .type=IO_READ},
        {.addr=0xdc0a, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0212) {
    const struct CPU_State initial_cpu = {.pc=0x7329, .a=0x76, .x=0x23, .y=0xa7, .sp=0x19, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7329, .value=0x50}, {.addr=0x732a, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x732b, .a=0x76, .x=0x23, .y=0xa7, .sp=0x19, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7329, .value=0x50}, {.addr=0x732a, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x7329, .value=0x50, .type=IO_READ},
        {.addr=0x732a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0213) {
    const struct CPU_State initial_cpu = {.pc=0x7618, .a=0x50, .x=0x3c, .y=0x9f, .sp=0x14, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x7618, .value=0x50}, {.addr=0x7619, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x761a, .a=0x50, .x=0x3c, .y=0x9f, .sp=0x14, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x7618, .value=0x50}, {.addr=0x7619, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7618, .value=0x50, .type=IO_READ},
        {.addr=0x7619, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0214) {
    const struct CPU_State initial_cpu = {.pc=0x59a6, .a=0x85, .x=0x21, .y=0xaa, .sp=0xd4, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x59a6, .value=0x50}, {.addr=0x59a7, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x59a8, .a=0x85, .x=0x21, .y=0xaa, .sp=0xd4, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x59a6, .value=0x50}, {.addr=0x59a7, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x59a6, .value=0x50, .type=IO_READ},
        {.addr=0x59a7, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0215) {
    const struct CPU_State initial_cpu = {.pc=0xb795, .a=0xa1, .x=0x64, .y=0xdd, .sp=0x29, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xb795, .value=0x50}, {.addr=0xb796, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb7b9, .a=0xa1, .x=0x64, .y=0xdd, .sp=0x29, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xb795, .value=0x50}, {.addr=0xb796, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb795, .value=0x50, .type=IO_READ},
        {.addr=0xb796, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0216) {
    const struct CPU_State initial_cpu = {.pc=0x8ed6, .a=0xd3, .x=0x32, .y=0x43, .sp=0x24, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8ed6, .value=0x50}, {.addr=0x8ed7, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x8ed8, .a=0xd3, .x=0x32, .y=0x43, .sp=0x24, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8ed6, .value=0x50}, {.addr=0x8ed7, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x8ed6, .value=0x50, .type=IO_READ},
        {.addr=0x8ed7, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0217) {
    const struct CPU_State initial_cpu = {.pc=0x94c7, .a=0x3b, .x=0xe3, .y=0xb4, .sp=0xa8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x94c7, .value=0x50}, {.addr=0x94c8, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x949d, .a=0x3b, .x=0xe3, .y=0xb4, .sp=0xa8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x94c7, .value=0x50}, {.addr=0x94c8, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x94c7, .value=0x50, .type=IO_READ},
        {.addr=0x94c8, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0218) {
    const struct CPU_State initial_cpu = {.pc=0x2d4d, .a=0x19, .x=0x6d, .y=0xc0, .sp=0xb3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x2d4d, .value=0x50}, {.addr=0x2d4e, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x2d4f, .a=0x19, .x=0x6d, .y=0xc0, .sp=0xb3, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x2d4d, .value=0x50}, {.addr=0x2d4e, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x2d4d, .value=0x50, .type=IO_READ},
        {.addr=0x2d4e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0219) {
    const struct CPU_State initial_cpu = {.pc=0x86f8, .a=0x1d, .x=0x36, .y=0xb3, .sp=0x87, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x86f8, .value=0x50}, {.addr=0x86f9, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x86c5, .a=0x1d, .x=0x36, .y=0xb3, .sp=0x87, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x86f8, .value=0x50}, {.addr=0x86f9, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x86f8, .value=0x50, .type=IO_READ},
        {.addr=0x86f9, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_021A) {
    const struct CPU_State initial_cpu = {.pc=0x12ac, .a=0xac, .x=0x1d, .y=0xbc, .sp=0x1f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x12ac, .value=0x50}, {.addr=0x12ad, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x1302, .a=0xac, .x=0x1d, .y=0xbc, .sp=0x1f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x12ac, .value=0x50}, {.addr=0x12ad, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x12ac, .value=0x50, .type=IO_READ},
        {.addr=0x12ad, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_021B) {
    const struct CPU_State initial_cpu = {.pc=0xf1ce, .a=0x3e, .x=0x5f, .y=0x24, .sp=0x34, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ce, .value=0x50}, {.addr=0xf1cf, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xf1d0, .a=0x3e, .x=0x5f, .y=0x24, .sp=0x34, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xf1ce, .value=0x50}, {.addr=0xf1cf, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xf1ce, .value=0x50, .type=IO_READ},
        {.addr=0xf1cf, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_021C) {
    const struct CPU_State initial_cpu = {.pc=0x79ed, .a=0x95, .x=0x02, .y=0x0b, .sp=0xc4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x79ed, .value=0x50}, {.addr=0x79ee, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x7a67, .a=0x95, .x=0x02, .y=0x0b, .sp=0xc4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x79ed, .value=0x50}, {.addr=0x79ee, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x79ed, .value=0x50, .type=IO_READ},
        {.addr=0x79ee, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_021D) {
    const struct CPU_State initial_cpu = {.pc=0xb0c6, .a=0x5a, .x=0x31, .y=0xc0, .sp=0x0f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c6, .value=0x50}, {.addr=0xb0c7, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xb0c8, .a=0x5a, .x=0x31, .y=0xc0, .sp=0x0f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb0c6, .value=0x50}, {.addr=0xb0c7, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xb0c6, .value=0x50, .type=IO_READ},
        {.addr=0xb0c7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_021E) {
    const struct CPU_State initial_cpu = {.pc=0x8f37, .a=0xbb, .x=0x29, .y=0xe2, .sp=0x5d, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x8f37, .value=0x50}, {.addr=0x8f38, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x8f39, .a=0xbb, .x=0x29, .y=0xe2, .sp=0x5d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8f37, .value=0x50}, {.addr=0x8f38, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x8f37, .value=0x50, .type=IO_READ},
        {.addr=0x8f38, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_021F) {
    const struct CPU_State initial_cpu = {.pc=0x1a91, .a=0x55, .x=0x29, .y=0x50, .sp=0x7f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1a91, .value=0x50}, {.addr=0x1a92, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x1aa1, .a=0x55, .x=0x29, .y=0x50, .sp=0x7f, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x1a91, .value=0x50}, {.addr=0x1a92, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x1a91, .value=0x50, .type=IO_READ},
        {.addr=0x1a92, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0220) {
    const struct CPU_State initial_cpu = {.pc=0x33a3, .a=0x1a, .x=0x28, .y=0xee, .sp=0xdb, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x33a3, .value=0x50}, {.addr=0x33a4, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x3339, .a=0x1a, .x=0x28, .y=0xee, .sp=0xdb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x33a3, .value=0x50}, {.addr=0x33a4, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x33a3, .value=0x50, .type=IO_READ},
        {.addr=0x33a4, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0221) {
    const struct CPU_State initial_cpu = {.pc=0x9f1d, .a=0x04, .x=0x8d, .y=0x89, .sp=0xee, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9f1d, .value=0x50}, {.addr=0x9f1e, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x9f1f, .a=0x04, .x=0x8d, .y=0x89, .sp=0xee, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x9f1d, .value=0x50}, {.addr=0x9f1e, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x9f1d, .value=0x50, .type=IO_READ},
        {.addr=0x9f1e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0222) {
    const struct CPU_State initial_cpu = {.pc=0x4d3e, .a=0xc7, .x=0x86, .y=0x03, .sp=0x04, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x4d3e, .value=0x50}, {.addr=0x4d3f, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x4d13, .a=0xc7, .x=0x86, .y=0x03, .sp=0x04, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4d3e, .value=0x50}, {.addr=0x4d3f, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x4d3e, .value=0x50, .type=IO_READ},
        {.addr=0x4d3f, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0223) {
    const struct CPU_State initial_cpu = {.pc=0xaffa, .a=0x80, .x=0x88, .y=0xf6, .sp=0x8f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xaffa, .value=0x50}, {.addr=0xaffb, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xaf9f, .a=0x80, .x=0x88, .y=0xf6, .sp=0x8f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xaffa, .value=0x50}, {.addr=0xaffb, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xaffa, .value=0x50, .type=IO_READ},
        {.addr=0xaffb, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0224) {
    const struct CPU_State initial_cpu = {.pc=0xb807, .a=0xad, .x=0x60, .y=0x22, .sp=0xea, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb807, .value=0x50}, {.addr=0xb808, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xb809, .a=0xad, .x=0x60, .y=0x22, .sp=0xea, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb807, .value=0x50}, {.addr=0xb808, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xb807, .value=0x50, .type=IO_READ},
        {.addr=0xb808, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0225) {
    const struct CPU_State initial_cpu = {.pc=0xa454, .a=0x46, .x=0x22, .y=0xaf, .sp=0xbc, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa454, .value=0x50}, {.addr=0xa455, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xa456, .a=0x46, .x=0x22, .y=0xaf, .sp=0xbc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa454, .value=0x50}, {.addr=0xa455, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xa454, .value=0x50, .type=IO_READ},
        {.addr=0xa455, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0226) {
    const struct CPU_State initial_cpu = {.pc=0xb3df, .a=0x49, .x=0x3f, .y=0x1c, .sp=0xf1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb3df, .value=0x50}, {.addr=0xb3e0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb3e1, .a=0x49, .x=0x3f, .y=0x1c, .sp=0xf1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb3df, .value=0x50}, {.addr=0xb3e0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb3df, .value=0x50, .type=IO_READ},
        {.addr=0xb3e0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0227) {
    const struct CPU_State initial_cpu = {.pc=0x5be1, .a=0x97, .x=0xc5, .y=0x7c, .sp=0xed, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5be1, .value=0x50}, {.addr=0x5be2, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x5be3, .a=0x97, .x=0xc5, .y=0x7c, .sp=0xed, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x5be1, .value=0x50}, {.addr=0x5be2, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x5be1, .value=0x50, .type=IO_READ},
        {.addr=0x5be2, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0846, .a=0x81, .x=0xe0, .y=0x6c, .sp=0x99, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0846, .value=0x50}, {.addr=0x0847, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x0850, .a=0x81, .x=0xe0, .y=0x6c, .sp=0x99, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0846, .value=0x50}, {.addr=0x0847, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x0846, .value=0x50, .type=IO_READ},
        {.addr=0x0847, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0229) {
    const struct CPU_State initial_cpu = {.pc=0x19f7, .a=0xe2, .x=0x4d, .y=0x00, .sp=0x1c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x19f7, .value=0x50}, {.addr=0x19f8, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1a6e, .a=0xe2, .x=0x4d, .y=0x00, .sp=0x1c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x19f7, .value=0x50}, {.addr=0x19f8, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x19f7, .value=0x50, .type=IO_READ},
        {.addr=0x19f8, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_022A) {
    const struct CPU_State initial_cpu = {.pc=0xda08, .a=0xe9, .x=0x11, .y=0xba, .sp=0x1b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xda08, .value=0x50}, {.addr=0xda09, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xd9fd, .a=0xe9, .x=0x11, .y=0xba, .sp=0x1b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xda08, .value=0x50}, {.addr=0xda09, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xda08, .value=0x50, .type=IO_READ},
        {.addr=0xda09, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_022B) {
    const struct CPU_State initial_cpu = {.pc=0xc69c, .a=0x1a, .x=0xf3, .y=0x2f, .sp=0x81, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc69c, .value=0x50}, {.addr=0xc69d, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xc6cd, .a=0x1a, .x=0xf3, .y=0x2f, .sp=0x81, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc69c, .value=0x50}, {.addr=0xc69d, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xc69c, .value=0x50, .type=IO_READ},
        {.addr=0xc69d, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7fd9, .a=0x1e, .x=0x4d, .y=0x24, .sp=0x34, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd9, .value=0x50}, {.addr=0x7fda, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x8032, .a=0x1e, .x=0x4d, .y=0x24, .sp=0x34, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7fd9, .value=0x50}, {.addr=0x7fda, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x7fd9, .value=0x50, .type=IO_READ},
        {.addr=0x7fda, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_022D) {
    const struct CPU_State initial_cpu = {.pc=0x7b7e, .a=0xc2, .x=0x69, .y=0x12, .sp=0xa5, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x7b7e, .value=0x50}, {.addr=0x7b7f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x7ba7, .a=0xc2, .x=0x69, .y=0x12, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7b7e, .value=0x50}, {.addr=0x7b7f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x7b7e, .value=0x50, .type=IO_READ},
        {.addr=0x7b7f, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_022E) {
    const struct CPU_State initial_cpu = {.pc=0x2cb8, .a=0xdf, .x=0x2a, .y=0xa1, .sp=0x79, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2cb8, .value=0x50}, {.addr=0x2cb9, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x2c9c, .a=0xdf, .x=0x2a, .y=0xa1, .sp=0x79, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2cb8, .value=0x50}, {.addr=0x2cb9, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x2cb8, .value=0x50, .type=IO_READ},
        {.addr=0x2cb9, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_022F) {
    const struct CPU_State initial_cpu = {.pc=0x74ce, .a=0x83, .x=0xb1, .y=0x80, .sp=0xeb, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x74ce, .value=0x50}, {.addr=0x74cf, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x74d0, .a=0x83, .x=0xb1, .y=0x80, .sp=0xeb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x74ce, .value=0x50}, {.addr=0x74cf, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x74ce, .value=0x50, .type=IO_READ},
        {.addr=0x74cf, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0230) {
    const struct CPU_State initial_cpu = {.pc=0xfa97, .a=0x07, .x=0x4e, .y=0xb1, .sp=0x49, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xfa97, .value=0x50}, {.addr=0xfa98, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xfa21, .a=0x07, .x=0x4e, .y=0xb1, .sp=0x49, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfa97, .value=0x50}, {.addr=0xfa98, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xfa97, .value=0x50, .type=IO_READ},
        {.addr=0xfa98, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0231) {
    const struct CPU_State initial_cpu = {.pc=0x2a6f, .a=0x27, .x=0x9e, .y=0xba, .sp=0x86, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x2a6f, .value=0x50}, {.addr=0x2a70, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x2a79, .a=0x27, .x=0x9e, .y=0xba, .sp=0x86, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2a6f, .value=0x50}, {.addr=0x2a70, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x2a6f, .value=0x50, .type=IO_READ},
        {.addr=0x2a70, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0232) {
    const struct CPU_State initial_cpu = {.pc=0x533a, .a=0xe3, .x=0xce, .y=0xc7, .sp=0x75, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x533a, .value=0x50}, {.addr=0x533b, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x537d, .a=0xe3, .x=0xce, .y=0xc7, .sp=0x75, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x533a, .value=0x50}, {.addr=0x533b, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x533a, .value=0x50, .type=IO_READ},
        {.addr=0x533b, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0233) {
    const struct CPU_State initial_cpu = {.pc=0x3319, .a=0xcf, .x=0x03, .y=0x3d, .sp=0x73, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3319, .value=0x50}, {.addr=0x331a, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x331b, .a=0xcf, .x=0x03, .y=0x3d, .sp=0x73, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x3319, .value=0x50}, {.addr=0x331a, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x3319, .value=0x50, .type=IO_READ},
        {.addr=0x331a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0234) {
    const struct CPU_State initial_cpu = {.pc=0x5fc7, .a=0x5e, .x=0xed, .y=0x10, .sp=0x8b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc7, .value=0x50}, {.addr=0x5fc8, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x5fc9, .a=0x5e, .x=0xed, .y=0x10, .sp=0x8b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5fc7, .value=0x50}, {.addr=0x5fc8, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x5fc7, .value=0x50, .type=IO_READ},
        {.addr=0x5fc8, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0235) {
    const struct CPU_State initial_cpu = {.pc=0x20da, .a=0x76, .x=0xac, .y=0x4c, .sp=0xc2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x20da, .value=0x50}, {.addr=0x20db, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x2065, .a=0x76, .x=0xac, .y=0x4c, .sp=0xc2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x20da, .value=0x50}, {.addr=0x20db, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x20da, .value=0x50, .type=IO_READ},
        {.addr=0x20db, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0236) {
    const struct CPU_State initial_cpu = {.pc=0xf697, .a=0x76, .x=0x22, .y=0x89, .sp=0xf7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf697, .value=0x50}, {.addr=0xf698, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xf699, .a=0x76, .x=0x22, .y=0x89, .sp=0xf7, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xf697, .value=0x50}, {.addr=0xf698, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xf697, .value=0x50, .type=IO_READ},
        {.addr=0xf698, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0237) {
    const struct CPU_State initial_cpu = {.pc=0x82f5, .a=0x26, .x=0xa6, .y=0xc6, .sp=0x93, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x82f5, .value=0x50}, {.addr=0x82f6, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x82f7, .a=0x26, .x=0xa6, .y=0xc6, .sp=0x93, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x82f5, .value=0x50}, {.addr=0x82f6, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x82f5, .value=0x50, .type=IO_READ},
        {.addr=0x82f6, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0238) {
    const struct CPU_State initial_cpu = {.pc=0xd768, .a=0xfd, .x=0x43, .y=0xe8, .sp=0xda, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd768, .value=0x50}, {.addr=0xd769, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xd76a, .a=0xfd, .x=0x43, .y=0xe8, .sp=0xda, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xd768, .value=0x50}, {.addr=0xd769, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xd768, .value=0x50, .type=IO_READ},
        {.addr=0xd769, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0239) {
    const struct CPU_State initial_cpu = {.pc=0x9565, .a=0x68, .x=0xb9, .y=0xa0, .sp=0xa4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9565, .value=0x50}, {.addr=0x9566, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x950d, .a=0x68, .x=0xb9, .y=0xa0, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9565, .value=0x50}, {.addr=0x9566, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9565, .value=0x50, .type=IO_READ},
        {.addr=0x9566, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_023A) {
    const struct CPU_State initial_cpu = {.pc=0xc061, .a=0x58, .x=0x65, .y=0xf1, .sp=0x5a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc061, .value=0x50}, {.addr=0xc062, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xbff0, .a=0x58, .x=0x65, .y=0xf1, .sp=0x5a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xc061, .value=0x50}, {.addr=0xc062, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xc061, .value=0x50, .type=IO_READ},
        {.addr=0xc062, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_023B) {
    const struct CPU_State initial_cpu = {.pc=0xde63, .a=0x7a, .x=0x0c, .y=0xb4, .sp=0x20, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xde63, .value=0x50}, {.addr=0xde64, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xded2, .a=0x7a, .x=0x0c, .y=0xb4, .sp=0x20, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xde63, .value=0x50}, {.addr=0xde64, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xde63, .value=0x50, .type=IO_READ},
        {.addr=0xde64, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_023C) {
    const struct CPU_State initial_cpu = {.pc=0x1f2c, .a=0x91, .x=0x59, .y=0xee, .sp=0x16, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x1f2c, .value=0x50}, {.addr=0x1f2d, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x1fa7, .a=0x91, .x=0x59, .y=0xee, .sp=0x16, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1f2c, .value=0x50}, {.addr=0x1f2d, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x1f2c, .value=0x50, .type=IO_READ},
        {.addr=0x1f2d, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_023D) {
    const struct CPU_State initial_cpu = {.pc=0xafb0, .a=0xc5, .x=0x84, .y=0xc0, .sp=0x4a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xafb0, .value=0x50}, {.addr=0xafb1, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xafb2, .a=0xc5, .x=0x84, .y=0xc0, .sp=0x4a, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xafb0, .value=0x50}, {.addr=0xafb1, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xafb0, .value=0x50, .type=IO_READ},
        {.addr=0xafb1, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_023E) {
    const struct CPU_State initial_cpu = {.pc=0xd909, .a=0x85, .x=0xc4, .y=0xcc, .sp=0x50, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd909, .value=0x50}, {.addr=0xd90a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xd90b, .a=0x85, .x=0xc4, .y=0xcc, .sp=0x50, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xd909, .value=0x50}, {.addr=0xd90a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xd909, .value=0x50, .type=IO_READ},
        {.addr=0xd90a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_023F) {
    const struct CPU_State initial_cpu = {.pc=0xa935, .a=0x9f, .x=0x23, .y=0x8e, .sp=0x1d, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa935, .value=0x50}, {.addr=0xa936, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xa90c, .a=0x9f, .x=0x23, .y=0x8e, .sp=0x1d, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xa935, .value=0x50}, {.addr=0xa936, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xa935, .value=0x50, .type=IO_READ},
        {.addr=0xa936, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0240) {
    const struct CPU_State initial_cpu = {.pc=0xc4af, .a=0x95, .x=0x9f, .y=0x8b, .sp=0x3b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc4af, .value=0x50}, {.addr=0xc4b0, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc4a3, .a=0x95, .x=0x9f, .y=0x8b, .sp=0x3b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc4af, .value=0x50}, {.addr=0xc4b0, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc4af, .value=0x50, .type=IO_READ},
        {.addr=0xc4b0, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0241) {
    const struct CPU_State initial_cpu = {.pc=0x795d, .a=0xc2, .x=0xbe, .y=0x13, .sp=0x6e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x795d, .value=0x50}, {.addr=0x795e, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x793a, .a=0xc2, .x=0xbe, .y=0x13, .sp=0x6e, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x795d, .value=0x50}, {.addr=0x795e, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x795d, .value=0x50, .type=IO_READ},
        {.addr=0x795e, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0242) {
    const struct CPU_State initial_cpu = {.pc=0xae02, .a=0x1b, .x=0x0d, .y=0x5a, .sp=0xc1, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xae02, .value=0x50}, {.addr=0xae03, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae04, .a=0x1b, .x=0x0d, .y=0x5a, .sp=0xc1, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xae02, .value=0x50}, {.addr=0xae03, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae02, .value=0x50, .type=IO_READ},
        {.addr=0xae03, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0243) {
    const struct CPU_State initial_cpu = {.pc=0x669e, .a=0x20, .x=0xb8, .y=0x82, .sp=0x5c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x669e, .value=0x50}, {.addr=0x669f, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x66a4, .a=0x20, .x=0xb8, .y=0x82, .sp=0x5c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x669e, .value=0x50}, {.addr=0x669f, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x669e, .value=0x50, .type=IO_READ},
        {.addr=0x669f, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0244) {
    const struct CPU_State initial_cpu = {.pc=0xc583, .a=0xd6, .x=0x7a, .y=0x01, .sp=0x13, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc583, .value=0x50}, {.addr=0xc584, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc515, .a=0xd6, .x=0x7a, .y=0x01, .sp=0x13, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc583, .value=0x50}, {.addr=0xc584, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc583, .value=0x50, .type=IO_READ},
        {.addr=0xc584, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0245) {
    const struct CPU_State initial_cpu = {.pc=0x7c6b, .a=0x77, .x=0xc2, .y=0xb7, .sp=0xe8, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6b, .value=0x50}, {.addr=0x7c6c, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x7c6d, .a=0x77, .x=0xc2, .y=0xb7, .sp=0xe8, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x7c6b, .value=0x50}, {.addr=0x7c6c, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x7c6b, .value=0x50, .type=IO_READ},
        {.addr=0x7c6c, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0246) {
    const struct CPU_State initial_cpu = {.pc=0x17af, .a=0x50, .x=0x79, .y=0x97, .sp=0x82, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x17af, .value=0x50}, {.addr=0x17b0, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x17b1, .a=0x50, .x=0x79, .y=0x97, .sp=0x82, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x17af, .value=0x50}, {.addr=0x17b0, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x17af, .value=0x50, .type=IO_READ},
        {.addr=0x17b0, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0247) {
    const struct CPU_State initial_cpu = {.pc=0xd109, .a=0x50, .x=0x4e, .y=0x3d, .sp=0x37, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xd109, .value=0x50}, {.addr=0xd10a, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xd0bf, .a=0x50, .x=0x4e, .y=0x3d, .sp=0x37, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd109, .value=0x50}, {.addr=0xd10a, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xd109, .value=0x50, .type=IO_READ},
        {.addr=0xd10a, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0248) {
    const struct CPU_State initial_cpu = {.pc=0xf79d, .a=0x8a, .x=0xaf, .y=0x4b, .sp=0x04, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf79d, .value=0x50}, {.addr=0xf79e, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xf79f, .a=0x8a, .x=0xaf, .y=0x4b, .sp=0x04, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xf79d, .value=0x50}, {.addr=0xf79e, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xf79d, .value=0x50, .type=IO_READ},
        {.addr=0xf79e, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0249) {
    const struct CPU_State initial_cpu = {.pc=0x2a27, .a=0x31, .x=0x66, .y=0x37, .sp=0x1e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2a27, .value=0x50}, {.addr=0x2a28, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x2a6d, .a=0x31, .x=0x66, .y=0x37, .sp=0x1e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2a27, .value=0x50}, {.addr=0x2a28, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x2a27, .value=0x50, .type=IO_READ},
        {.addr=0x2a28, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_024A) {
    const struct CPU_State initial_cpu = {.pc=0xcf16, .a=0x10, .x=0xe5, .y=0x0c, .sp=0x5f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xcf16, .value=0x50}, {.addr=0xcf17, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xcf18, .a=0x10, .x=0xe5, .y=0x0c, .sp=0x5f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xcf16, .value=0x50}, {.addr=0xcf17, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xcf16, .value=0x50, .type=IO_READ},
        {.addr=0xcf17, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa631, .a=0x3c, .x=0x99, .y=0xb9, .sp=0xeb, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa631, .value=0x50}, {.addr=0xa632, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xa633, .a=0x3c, .x=0x99, .y=0xb9, .sp=0xeb, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa631, .value=0x50}, {.addr=0xa632, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xa631, .value=0x50, .type=IO_READ},
        {.addr=0xa632, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_024C) {
    const struct CPU_State initial_cpu = {.pc=0xa18b, .a=0x62, .x=0x89, .y=0x59, .sp=0xdb, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa18b, .value=0x50}, {.addr=0xa18c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa153, .a=0x62, .x=0x89, .y=0x59, .sp=0xdb, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xa18b, .value=0x50}, {.addr=0xa18c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa18b, .value=0x50, .type=IO_READ},
        {.addr=0xa18c, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_024D) {
    const struct CPU_State initial_cpu = {.pc=0x034f, .a=0x7a, .x=0xf1, .y=0x72, .sp=0x79, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x034f, .value=0x50}, {.addr=0x0350, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x02fd, .a=0x7a, .x=0xf1, .y=0x72, .sp=0x79, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x034f, .value=0x50}, {.addr=0x0350, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x034f, .value=0x50, .type=IO_READ},
        {.addr=0x0350, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_024E) {
    const struct CPU_State initial_cpu = {.pc=0xa4bc, .a=0x34, .x=0xbe, .y=0x40, .sp=0xf7, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa4bc, .value=0x50}, {.addr=0xa4bd, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xa4be, .a=0x34, .x=0xbe, .y=0x40, .sp=0xf7, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xa4bc, .value=0x50}, {.addr=0xa4bd, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xa4bc, .value=0x50, .type=IO_READ},
        {.addr=0xa4bd, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_024F) {
    const struct CPU_State initial_cpu = {.pc=0xe337, .a=0xd8, .x=0xb1, .y=0x14, .sp=0xfc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe337, .value=0x50}, {.addr=0xe338, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe37c, .a=0xd8, .x=0xb1, .y=0x14, .sp=0xfc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe337, .value=0x50}, {.addr=0xe338, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe337, .value=0x50, .type=IO_READ},
        {.addr=0xe338, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0250) {
    const struct CPU_State initial_cpu = {.pc=0x2f25, .a=0x8f, .x=0x65, .y=0x4a, .sp=0x02, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2f25, .value=0x50}, {.addr=0x2f26, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2f23, .a=0x8f, .x=0x65, .y=0x4a, .sp=0x02, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x2f25, .value=0x50}, {.addr=0x2f26, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2f25, .value=0x50, .type=IO_READ},
        {.addr=0x2f26, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0251) {
    const struct CPU_State initial_cpu = {.pc=0x5791, .a=0xde, .x=0x5c, .y=0xa8, .sp=0x24, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5791, .value=0x50}, {.addr=0x5792, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x580f, .a=0xde, .x=0x5c, .y=0xa8, .sp=0x24, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x5791, .value=0x50}, {.addr=0x5792, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5791, .value=0x50, .type=IO_READ},
        {.addr=0x5792, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0252) {
    const struct CPU_State initial_cpu = {.pc=0xbc09, .a=0x6b, .x=0x28, .y=0xb2, .sp=0x7a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc09, .value=0x50}, {.addr=0xbc0a, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xbc73, .a=0x6b, .x=0x28, .y=0xb2, .sp=0x7a, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xbc09, .value=0x50}, {.addr=0xbc0a, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xbc09, .value=0x50, .type=IO_READ},
        {.addr=0xbc0a, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0253) {
    const struct CPU_State initial_cpu = {.pc=0x8b86, .a=0xf7, .x=0x84, .y=0x4c, .sp=0xda, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b86, .value=0x50}, {.addr=0x8b87, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8b6e, .a=0xf7, .x=0x84, .y=0x4c, .sp=0xda, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8b86, .value=0x50}, {.addr=0x8b87, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8b86, .value=0x50, .type=IO_READ},
        {.addr=0x8b87, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0254) {
    const struct CPU_State initial_cpu = {.pc=0x74ce, .a=0xc2, .x=0xeb, .y=0xc1, .sp=0xfc, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x74ce, .value=0x50}, {.addr=0x74cf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x74d0, .a=0xc2, .x=0xeb, .y=0xc1, .sp=0xfc, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x74ce, .value=0x50}, {.addr=0x74cf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x74ce, .value=0x50, .type=IO_READ},
        {.addr=0x74cf, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0255) {
    const struct CPU_State initial_cpu = {.pc=0x9643, .a=0xef, .x=0xc4, .y=0x69, .sp=0xcd, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9643, .value=0x50}, {.addr=0x9644, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x9645, .a=0xef, .x=0xc4, .y=0x69, .sp=0xcd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9643, .value=0x50}, {.addr=0x9644, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x9643, .value=0x50, .type=IO_READ},
        {.addr=0x9644, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0256) {
    const struct CPU_State initial_cpu = {.pc=0xc2ad, .a=0x39, .x=0xd9, .y=0x01, .sp=0x6c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ad, .value=0x50}, {.addr=0xc2ae, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xc2af, .a=0x39, .x=0xd9, .y=0x01, .sp=0x6c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc2ad, .value=0x50}, {.addr=0xc2ae, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xc2ad, .value=0x50, .type=IO_READ},
        {.addr=0xc2ae, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0257) {
    const struct CPU_State initial_cpu = {.pc=0x62a8, .a=0x4a, .x=0xc1, .y=0x42, .sp=0x78, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x62a8, .value=0x50}, {.addr=0x62a9, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x6239, .a=0x4a, .x=0xc1, .y=0x42, .sp=0x78, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x62a8, .value=0x50}, {.addr=0x62a9, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x62a8, .value=0x50, .type=IO_READ},
        {.addr=0x62a9, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0258) {
    const struct CPU_State initial_cpu = {.pc=0x5125, .a=0xc9, .x=0x49, .y=0x8f, .sp=0xa1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5125, .value=0x50}, {.addr=0x5126, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x50c2, .a=0xc9, .x=0x49, .y=0x8f, .sp=0xa1, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x5125, .value=0x50}, {.addr=0x5126, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x5125, .value=0x50, .type=IO_READ},
        {.addr=0x5126, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0259) {
    const struct CPU_State initial_cpu = {.pc=0xdc0e, .a=0x45, .x=0x16, .y=0x15, .sp=0xcb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0e, .value=0x50}, {.addr=0xdc0f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xdc10, .a=0x45, .x=0x16, .y=0x15, .sp=0xcb, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xdc0e, .value=0x50}, {.addr=0xdc0f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xdc0e, .value=0x50, .type=IO_READ},
        {.addr=0xdc0f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_025A) {
    const struct CPU_State initial_cpu = {.pc=0x505f, .a=0xce, .x=0xce, .y=0xeb, .sp=0x73, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x505f, .value=0x50}, {.addr=0x5060, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5061, .a=0xce, .x=0xce, .y=0xeb, .sp=0x73, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x505f, .value=0x50}, {.addr=0x5060, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x505f, .value=0x50, .type=IO_READ},
        {.addr=0x5060, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_025B) {
    const struct CPU_State initial_cpu = {.pc=0xaf3d, .a=0xea, .x=0x08, .y=0x48, .sp=0x18, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xaf3d, .value=0x50}, {.addr=0xaf3e, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xaf39, .a=0xea, .x=0x08, .y=0x48, .sp=0x18, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xaf3d, .value=0x50}, {.addr=0xaf3e, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xaf3d, .value=0x50, .type=IO_READ},
        {.addr=0xaf3e, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_025C) {
    const struct CPU_State initial_cpu = {.pc=0x5249, .a=0xca, .x=0x11, .y=0x25, .sp=0xa4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5249, .value=0x50}, {.addr=0x524a, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x524b, .a=0xca, .x=0x11, .y=0x25, .sp=0xa4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5249, .value=0x50}, {.addr=0x524a, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x5249, .value=0x50, .type=IO_READ},
        {.addr=0x524a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_025D) {
    const struct CPU_State initial_cpu = {.pc=0x5cbb, .a=0xff, .x=0x37, .y=0x78, .sp=0x07, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbb, .value=0x50}, {.addr=0x5cbc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5d39, .a=0xff, .x=0x37, .y=0x78, .sp=0x07, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x5cbb, .value=0x50}, {.addr=0x5cbc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5cbb, .value=0x50, .type=IO_READ},
        {.addr=0x5cbc, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_025E) {
    const struct CPU_State initial_cpu = {.pc=0xc26d, .a=0x9d, .x=0x76, .y=0xc5, .sp=0xc2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc26d, .value=0x50}, {.addr=0xc26e, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xc264, .a=0x9d, .x=0x76, .y=0xc5, .sp=0xc2, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xc26d, .value=0x50}, {.addr=0xc26e, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xc26d, .value=0x50, .type=IO_READ},
        {.addr=0xc26e, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_025F) {
    const struct CPU_State initial_cpu = {.pc=0x7b3a, .a=0x5c, .x=0x98, .y=0xfb, .sp=0xb7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x7b3a, .value=0x50}, {.addr=0x7b3b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x7b14, .a=0x5c, .x=0x98, .y=0xfb, .sp=0xb7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7b3a, .value=0x50}, {.addr=0x7b3b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x7b3a, .value=0x50, .type=IO_READ},
        {.addr=0x7b3b, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0260) {
    const struct CPU_State initial_cpu = {.pc=0x0a61, .a=0xa0, .x=0xe0, .y=0xf9, .sp=0xfe, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0a61, .value=0x50}, {.addr=0x0a62, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x0a7c, .a=0xa0, .x=0xe0, .y=0xf9, .sp=0xfe, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0a61, .value=0x50}, {.addr=0x0a62, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x0a61, .value=0x50, .type=IO_READ},
        {.addr=0x0a62, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0261) {
    const struct CPU_State initial_cpu = {.pc=0x862a, .a=0xea, .x=0xc9, .y=0xb4, .sp=0x34, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x862a, .value=0x50}, {.addr=0x862b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x868c, .a=0xea, .x=0xc9, .y=0xb4, .sp=0x34, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x862a, .value=0x50}, {.addr=0x862b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x862a, .value=0x50, .type=IO_READ},
        {.addr=0x862b, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0262) {
    const struct CPU_State initial_cpu = {.pc=0x162c, .a=0x41, .x=0x5d, .y=0x76, .sp=0x54, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x162c, .value=0x50}, {.addr=0x162d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1634, .a=0x41, .x=0x5d, .y=0x76, .sp=0x54, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x162c, .value=0x50}, {.addr=0x162d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x162c, .value=0x50, .type=IO_READ},
        {.addr=0x162d, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0263) {
    const struct CPU_State initial_cpu = {.pc=0xe524, .a=0xf5, .x=0x1f, .y=0x39, .sp=0x54, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe524, .value=0x50}, {.addr=0xe525, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xe58a, .a=0xf5, .x=0x1f, .y=0x39, .sp=0x54, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe524, .value=0x50}, {.addr=0xe525, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xe524, .value=0x50, .type=IO_READ},
        {.addr=0xe525, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0264) {
    const struct CPU_State initial_cpu = {.pc=0x297a, .a=0x4c, .x=0x98, .y=0xfc, .sp=0x91, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x297a, .value=0x50}, {.addr=0x297b, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x297c, .a=0x4c, .x=0x98, .y=0xfc, .sp=0x91, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x297a, .value=0x50}, {.addr=0x297b, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x297a, .value=0x50, .type=IO_READ},
        {.addr=0x297b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6098, .a=0x71, .x=0xd3, .y=0x7e, .sp=0x66, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x6098, .value=0x50}, {.addr=0x6099, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6100, .a=0x71, .x=0xd3, .y=0x7e, .sp=0x66, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6098, .value=0x50}, {.addr=0x6099, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6098, .value=0x50, .type=IO_READ},
        {.addr=0x6099, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0266) {
    const struct CPU_State initial_cpu = {.pc=0x2d59, .a=0xe4, .x=0x77, .y=0x46, .sp=0x21, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d59, .value=0x50}, {.addr=0x2d5a, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x2d04, .a=0xe4, .x=0x77, .y=0x46, .sp=0x21, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x2d59, .value=0x50}, {.addr=0x2d5a, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x2d59, .value=0x50, .type=IO_READ},
        {.addr=0x2d5a, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0267) {
    const struct CPU_State initial_cpu = {.pc=0xd505, .a=0x43, .x=0x6a, .y=0x0a, .sp=0x29, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd505, .value=0x50}, {.addr=0xd506, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xd507, .a=0x43, .x=0x6a, .y=0x0a, .sp=0x29, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xd505, .value=0x50}, {.addr=0xd506, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xd505, .value=0x50, .type=IO_READ},
        {.addr=0xd506, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0268) {
    const struct CPU_State initial_cpu = {.pc=0xa952, .a=0x88, .x=0x05, .y=0x22, .sp=0x5a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa952, .value=0x50}, {.addr=0xa953, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xa954, .a=0x88, .x=0x05, .y=0x22, .sp=0x5a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xa952, .value=0x50}, {.addr=0xa953, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xa952, .value=0x50, .type=IO_READ},
        {.addr=0xa953, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0269) {
    const struct CPU_State initial_cpu = {.pc=0xc122, .a=0xc4, .x=0xb8, .y=0xc4, .sp=0x08, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc122, .value=0x50}, {.addr=0xc123, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xc124, .a=0xc4, .x=0xb8, .y=0xc4, .sp=0x08, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc122, .value=0x50}, {.addr=0xc123, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc122, .value=0x50, .type=IO_READ},
        {.addr=0xc123, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_026A) {
    const struct CPU_State initial_cpu = {.pc=0x8f35, .a=0x9f, .x=0x63, .y=0x44, .sp=0xfb, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8f35, .value=0x50}, {.addr=0x8f36, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x8f37, .a=0x9f, .x=0x63, .y=0x44, .sp=0xfb, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8f35, .value=0x50}, {.addr=0x8f36, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x8f35, .value=0x50, .type=IO_READ},
        {.addr=0x8f36, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_026B) {
    const struct CPU_State initial_cpu = {.pc=0x5376, .a=0x9a, .x=0x07, .y=0xa3, .sp=0x55, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x5376, .value=0x50}, {.addr=0x5377, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x5378, .a=0x9a, .x=0x07, .y=0xa3, .sp=0x55, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5376, .value=0x50}, {.addr=0x5377, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x5376, .value=0x50, .type=IO_READ},
        {.addr=0x5377, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_026C) {
    const struct CPU_State initial_cpu = {.pc=0x480b, .a=0x9f, .x=0x06, .y=0x31, .sp=0x52, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x480b, .value=0x50}, {.addr=0x480c, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4842, .a=0x9f, .x=0x06, .y=0x31, .sp=0x52, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x480b, .value=0x50}, {.addr=0x480c, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x480b, .value=0x50, .type=IO_READ},
        {.addr=0x480c, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_026D) {
    const struct CPU_State initial_cpu = {.pc=0xda9d, .a=0xdd, .x=0x91, .y=0x31, .sp=0x31, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xda9d, .value=0x50}, {.addr=0xda9e, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xdae1, .a=0xdd, .x=0x91, .y=0x31, .sp=0x31, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xda9d, .value=0x50}, {.addr=0xda9e, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xda9d, .value=0x50, .type=IO_READ},
        {.addr=0xda9e, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_026E) {
    const struct CPU_State initial_cpu = {.pc=0x46f7, .a=0x36, .x=0x3a, .y=0xde, .sp=0xbf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x46f7, .value=0x50}, {.addr=0x46f8, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x46a0, .a=0x36, .x=0x3a, .y=0xde, .sp=0xbf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x46f7, .value=0x50}, {.addr=0x46f8, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x46f7, .value=0x50, .type=IO_READ},
        {.addr=0x46f8, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_026F) {
    const struct CPU_State initial_cpu = {.pc=0xd946, .a=0x48, .x=0x65, .y=0x3a, .sp=0xaa, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xd946, .value=0x50}, {.addr=0xd947, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xd97d, .a=0x48, .x=0x65, .y=0x3a, .sp=0xaa, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd946, .value=0x50}, {.addr=0xd947, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xd946, .value=0x50, .type=IO_READ},
        {.addr=0xd947, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0270) {
    const struct CPU_State initial_cpu = {.pc=0x226e, .a=0x5a, .x=0x04, .y=0x67, .sp=0xff, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x226e, .value=0x50}, {.addr=0x226f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x224d, .a=0x5a, .x=0x04, .y=0x67, .sp=0xff, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x226e, .value=0x50}, {.addr=0x226f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x226e, .value=0x50, .type=IO_READ},
        {.addr=0x226f, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0271) {
    const struct CPU_State initial_cpu = {.pc=0x90cc, .a=0xa3, .x=0xaa, .y=0x47, .sp=0x6d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x90cc, .value=0x50}, {.addr=0x90cd, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x90ce, .a=0xa3, .x=0xaa, .y=0x47, .sp=0x6d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x90cc, .value=0x50}, {.addr=0x90cd, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x90cc, .value=0x50, .type=IO_READ},
        {.addr=0x90cd, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0272) {
    const struct CPU_State initial_cpu = {.pc=0x9aea, .a=0x9b, .x=0xa3, .y=0x4e, .sp=0xaa, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9aea, .value=0x50}, {.addr=0x9aeb, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x9a9e, .a=0x9b, .x=0xa3, .y=0x4e, .sp=0xaa, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x9aea, .value=0x50}, {.addr=0x9aeb, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x9aea, .value=0x50, .type=IO_READ},
        {.addr=0x9aeb, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0273) {
    const struct CPU_State initial_cpu = {.pc=0xdd26, .a=0x05, .x=0xaf, .y=0x47, .sp=0xbb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xdd26, .value=0x50}, {.addr=0xdd27, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdd28, .a=0x05, .x=0xaf, .y=0x47, .sp=0xbb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xdd26, .value=0x50}, {.addr=0xdd27, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdd26, .value=0x50, .type=IO_READ},
        {.addr=0xdd27, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0274) {
    const struct CPU_State initial_cpu = {.pc=0x41d0, .a=0x9f, .x=0x01, .y=0x46, .sp=0x48, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x41d0, .value=0x50}, {.addr=0x41d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x41df, .a=0x9f, .x=0x01, .y=0x46, .sp=0x48, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x41d0, .value=0x50}, {.addr=0x41d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x41d0, .value=0x50, .type=IO_READ},
        {.addr=0x41d1, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5efd, .a=0xe2, .x=0xe1, .y=0x4c, .sp=0x3c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5efd, .value=0x50}, {.addr=0x5efe, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x5e80, .a=0xe2, .x=0xe1, .y=0x4c, .sp=0x3c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5efd, .value=0x50}, {.addr=0x5efe, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x5efd, .value=0x50, .type=IO_READ},
        {.addr=0x5efe, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0276) {
    const struct CPU_State initial_cpu = {.pc=0x801a, .a=0xe6, .x=0x49, .y=0xec, .sp=0x19, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x801a, .value=0x50}, {.addr=0x801b, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x805a, .a=0xe6, .x=0x49, .y=0xec, .sp=0x19, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x801a, .value=0x50}, {.addr=0x801b, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x801a, .value=0x50, .type=IO_READ},
        {.addr=0x801b, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0277) {
    const struct CPU_State initial_cpu = {.pc=0xb195, .a=0xde, .x=0x43, .y=0xe3, .sp=0x2a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb195, .value=0x50}, {.addr=0xb196, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xb197, .a=0xde, .x=0x43, .y=0xe3, .sp=0x2a, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xb195, .value=0x50}, {.addr=0xb196, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xb195, .value=0x50, .type=IO_READ},
        {.addr=0xb196, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0278) {
    const struct CPU_State initial_cpu = {.pc=0x9ef7, .a=0xd3, .x=0xc5, .y=0xe1, .sp=0xe3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef7, .value=0x50}, {.addr=0x9ef8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ed5, .a=0xd3, .x=0xc5, .y=0xe1, .sp=0xe3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9ef7, .value=0x50}, {.addr=0x9ef8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ef7, .value=0x50, .type=IO_READ},
        {.addr=0x9ef8, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0279) {
    const struct CPU_State initial_cpu = {.pc=0xa249, .a=0x73, .x=0x73, .y=0x79, .sp=0x4d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa249, .value=0x50}, {.addr=0xa24a, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xa24b, .a=0x73, .x=0x73, .y=0x79, .sp=0x4d, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xa249, .value=0x50}, {.addr=0xa24a, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xa249, .value=0x50, .type=IO_READ},
        {.addr=0xa24a, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_027A) {
    const struct CPU_State initial_cpu = {.pc=0xd3dd, .a=0xdc, .x=0x20, .y=0xd4, .sp=0xf6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd3dd, .value=0x50}, {.addr=0xd3de, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xd3c3, .a=0xdc, .x=0x20, .y=0xd4, .sp=0xf6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd3dd, .value=0x50}, {.addr=0xd3de, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xd3dd, .value=0x50, .type=IO_READ},
        {.addr=0xd3de, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_027B) {
    const struct CPU_State initial_cpu = {.pc=0xe469, .a=0x6e, .x=0x51, .y=0x5d, .sp=0xc1, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe469, .value=0x50}, {.addr=0xe46a, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe46b, .a=0x6e, .x=0x51, .y=0x5d, .sp=0xc1, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xe469, .value=0x50}, {.addr=0xe46a, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe469, .value=0x50, .type=IO_READ},
        {.addr=0xe46a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_027C) {
    const struct CPU_State initial_cpu = {.pc=0x420d, .a=0xcf, .x=0x03, .y=0x18, .sp=0x9a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x420d, .value=0x50}, {.addr=0x420e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x4258, .a=0xcf, .x=0x03, .y=0x18, .sp=0x9a, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x420d, .value=0x50}, {.addr=0x420e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x420d, .value=0x50, .type=IO_READ},
        {.addr=0x420e, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_027D) {
    const struct CPU_State initial_cpu = {.pc=0x945c, .a=0x8e, .x=0x97, .y=0x5c, .sp=0x64, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x945c, .value=0x50}, {.addr=0x945d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x945e, .a=0x8e, .x=0x97, .y=0x5c, .sp=0x64, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x945c, .value=0x50}, {.addr=0x945d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x945c, .value=0x50, .type=IO_READ},
        {.addr=0x945d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_027E) {
    const struct CPU_State initial_cpu = {.pc=0x14c7, .a=0x31, .x=0xde, .y=0xe8, .sp=0xd2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x14c7, .value=0x50}, {.addr=0x14c8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x14c9, .a=0x31, .x=0xde, .y=0xe8, .sp=0xd2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x14c7, .value=0x50}, {.addr=0x14c8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x14c7, .value=0x50, .type=IO_READ},
        {.addr=0x14c8, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_027F) {
    const struct CPU_State initial_cpu = {.pc=0x85fc, .a=0xab, .x=0xac, .y=0x3c, .sp=0x91, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x85fc, .value=0x50}, {.addr=0x85fd, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x85fe, .a=0xab, .x=0xac, .y=0x3c, .sp=0x91, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x85fc, .value=0x50}, {.addr=0x85fd, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x85fc, .value=0x50, .type=IO_READ},
        {.addr=0x85fd, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0280) {
    const struct CPU_State initial_cpu = {.pc=0xeae4, .a=0xa2, .x=0x4a, .y=0x18, .sp=0x9f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xeae4, .value=0x50}, {.addr=0xeae5, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xeae6, .a=0xa2, .x=0x4a, .y=0x18, .sp=0x9f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xeae4, .value=0x50}, {.addr=0xeae5, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xeae4, .value=0x50, .type=IO_READ},
        {.addr=0xeae5, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0281) {
    const struct CPU_State initial_cpu = {.pc=0x0ae5, .a=0x7e, .x=0x5a, .y=0x4b, .sp=0x2c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae5, .value=0x50}, {.addr=0x0ae6, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x0ae7, .a=0x7e, .x=0x5a, .y=0x4b, .sp=0x2c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0ae5, .value=0x50}, {.addr=0x0ae6, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x0ae5, .value=0x50, .type=IO_READ},
        {.addr=0x0ae6, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0282) {
    const struct CPU_State initial_cpu = {.pc=0x45ca, .a=0xfc, .x=0x01, .y=0xe9, .sp=0x93, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x45ca, .value=0x50}, {.addr=0x45cb, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x45cc, .a=0xfc, .x=0x01, .y=0xe9, .sp=0x93, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x45ca, .value=0x50}, {.addr=0x45cb, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x45ca, .value=0x50, .type=IO_READ},
        {.addr=0x45cb, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0283) {
    const struct CPU_State initial_cpu = {.pc=0xc348, .a=0x58, .x=0x8e, .y=0xdc, .sp=0xf7, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc348, .value=0x50}, {.addr=0xc349, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc34a, .a=0x58, .x=0x8e, .y=0xdc, .sp=0xf7, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xc348, .value=0x50}, {.addr=0xc349, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc348, .value=0x50, .type=IO_READ},
        {.addr=0xc349, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0284) {
    const struct CPU_State initial_cpu = {.pc=0xe184, .a=0xe1, .x=0x7d, .y=0x4d, .sp=0x77, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe184, .value=0x50}, {.addr=0xe185, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xe186, .a=0xe1, .x=0x7d, .y=0x4d, .sp=0x77, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe184, .value=0x50}, {.addr=0xe185, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xe184, .value=0x50, .type=IO_READ},
        {.addr=0xe185, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0285) {
    const struct CPU_State initial_cpu = {.pc=0x194e, .a=0x40, .x=0x80, .y=0xee, .sp=0x65, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x194e, .value=0x50}, {.addr=0x194f, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x1950, .a=0x40, .x=0x80, .y=0xee, .sp=0x65, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x194e, .value=0x50}, {.addr=0x194f, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x194e, .value=0x50, .type=IO_READ},
        {.addr=0x194f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0286) {
    const struct CPU_State initial_cpu = {.pc=0xedb4, .a=0xc5, .x=0xcf, .y=0x06, .sp=0xe7, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xedb4, .value=0x50}, {.addr=0xedb5, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xedb6, .a=0xc5, .x=0xcf, .y=0x06, .sp=0xe7, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xedb4, .value=0x50}, {.addr=0xedb5, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xedb4, .value=0x50, .type=IO_READ},
        {.addr=0xedb5, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0287) {
    const struct CPU_State initial_cpu = {.pc=0x6ef8, .a=0x42, .x=0xeb, .y=0x54, .sp=0x20, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6ef8, .value=0x50}, {.addr=0x6ef9, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x6f2c, .a=0x42, .x=0xeb, .y=0x54, .sp=0x20, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x6ef8, .value=0x50}, {.addr=0x6ef9, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x6ef8, .value=0x50, .type=IO_READ},
        {.addr=0x6ef9, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0288) {
    const struct CPU_State initial_cpu = {.pc=0x349d, .a=0xdf, .x=0x2f, .y=0x53, .sp=0xc5, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x349d, .value=0x50}, {.addr=0x349e, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x349f, .a=0xdf, .x=0x2f, .y=0x53, .sp=0xc5, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x349d, .value=0x50}, {.addr=0x349e, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x349d, .value=0x50, .type=IO_READ},
        {.addr=0x349e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0289) {
    const struct CPU_State initial_cpu = {.pc=0x1466, .a=0xf2, .x=0x78, .y=0xcb, .sp=0xda, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1466, .value=0x50}, {.addr=0x1467, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x1468, .a=0xf2, .x=0x78, .y=0xcb, .sp=0xda, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x1466, .value=0x50}, {.addr=0x1467, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x1466, .value=0x50, .type=IO_READ},
        {.addr=0x1467, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_028A) {
    const struct CPU_State initial_cpu = {.pc=0xb31a, .a=0x14, .x=0xa3, .y=0x44, .sp=0xc9, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb31a, .value=0x50}, {.addr=0xb31b, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xb31c, .a=0x14, .x=0xa3, .y=0x44, .sp=0xc9, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xb31a, .value=0x50}, {.addr=0xb31b, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xb31a, .value=0x50, .type=IO_READ},
        {.addr=0xb31b, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_028B) {
    const struct CPU_State initial_cpu = {.pc=0xafff, .a=0x83, .x=0x0a, .y=0xe6, .sp=0x10, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xafff, .value=0x50}, {.addr=0xb000, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xb001, .a=0x83, .x=0x0a, .y=0xe6, .sp=0x10, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xafff, .value=0x50}, {.addr=0xb000, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xafff, .value=0x50, .type=IO_READ},
        {.addr=0xb000, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_028C) {
    const struct CPU_State initial_cpu = {.pc=0x71a7, .a=0x08, .x=0x7d, .y=0x13, .sp=0x76, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x71a7, .value=0x50}, {.addr=0x71a8, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x7181, .a=0x08, .x=0x7d, .y=0x13, .sp=0x76, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x71a7, .value=0x50}, {.addr=0x71a8, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x71a7, .value=0x50, .type=IO_READ},
        {.addr=0x71a8, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_028D) {
    const struct CPU_State initial_cpu = {.pc=0x18a8, .a=0xe4, .x=0x92, .y=0xfc, .sp=0x8e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x18a8, .value=0x50}, {.addr=0x18a9, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x186b, .a=0xe4, .x=0x92, .y=0xfc, .sp=0x8e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x18a8, .value=0x50}, {.addr=0x18a9, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x18a8, .value=0x50, .type=IO_READ},
        {.addr=0x18a9, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_028E) {
    const struct CPU_State initial_cpu = {.pc=0xe356, .a=0x36, .x=0xb9, .y=0x7b, .sp=0x28, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe356, .value=0x50}, {.addr=0xe357, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xe3ce, .a=0x36, .x=0xb9, .y=0x7b, .sp=0x28, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xe356, .value=0x50}, {.addr=0xe357, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xe356, .value=0x50, .type=IO_READ},
        {.addr=0xe357, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_028F) {
    const struct CPU_State initial_cpu = {.pc=0x365e, .a=0xfd, .x=0x33, .y=0x07, .sp=0xce, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x365e, .value=0x50}, {.addr=0x365f, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x3660, .a=0xfd, .x=0x33, .y=0x07, .sp=0xce, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x365e, .value=0x50}, {.addr=0x365f, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x365e, .value=0x50, .type=IO_READ},
        {.addr=0x365f, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0290) {
    const struct CPU_State initial_cpu = {.pc=0x41b5, .a=0xc8, .x=0xaa, .y=0x9e, .sp=0xc5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x41b5, .value=0x50}, {.addr=0x41b6, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x41b7, .a=0xc8, .x=0xaa, .y=0x9e, .sp=0xc5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x41b5, .value=0x50}, {.addr=0x41b6, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x41b5, .value=0x50, .type=IO_READ},
        {.addr=0x41b6, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0291) {
    const struct CPU_State initial_cpu = {.pc=0x165c, .a=0x3f, .x=0x37, .y=0x6d, .sp=0xc9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x165c, .value=0x50}, {.addr=0x165d, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x165e, .a=0x3f, .x=0x37, .y=0x6d, .sp=0xc9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x165c, .value=0x50}, {.addr=0x165d, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x165c, .value=0x50, .type=IO_READ},
        {.addr=0x165d, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0292) {
    const struct CPU_State initial_cpu = {.pc=0x0360, .a=0xe4, .x=0xcd, .y=0xc5, .sp=0x93, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0360, .value=0x50}, {.addr=0x0361, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x02ef, .a=0xe4, .x=0xcd, .y=0xc5, .sp=0x93, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0360, .value=0x50}, {.addr=0x0361, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x0360, .value=0x50, .type=IO_READ},
        {.addr=0x0361, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0293) {
    const struct CPU_State initial_cpu = {.pc=0xcf30, .a=0x54, .x=0x7d, .y=0xa5, .sp=0x0f, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xcf30, .value=0x50}, {.addr=0xcf31, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xcf32, .a=0x54, .x=0x7d, .y=0xa5, .sp=0x0f, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xcf30, .value=0x50}, {.addr=0xcf31, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xcf30, .value=0x50, .type=IO_READ},
        {.addr=0xcf31, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0294) {
    const struct CPU_State initial_cpu = {.pc=0xc035, .a=0xdf, .x=0xe5, .y=0x0a, .sp=0xb5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc035, .value=0x50}, {.addr=0xc036, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xc038, .a=0xdf, .x=0xe5, .y=0x0a, .sp=0xb5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc035, .value=0x50}, {.addr=0xc036, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xc035, .value=0x50, .type=IO_READ},
        {.addr=0xc036, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0295) {
    const struct CPU_State initial_cpu = {.pc=0x0a77, .a=0x70, .x=0xf8, .y=0xbc, .sp=0x37, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0a77, .value=0x50}, {.addr=0x0a78, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0a79, .a=0x70, .x=0xf8, .y=0xbc, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0a77, .value=0x50}, {.addr=0x0a78, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0a77, .value=0x50, .type=IO_READ},
        {.addr=0x0a78, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0296) {
    const struct CPU_State initial_cpu = {.pc=0x1798, .a=0x4f, .x=0x6c, .y=0xab, .sp=0xff, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x1798, .value=0x50}, {.addr=0x1799, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x17a9, .a=0x4f, .x=0x6c, .y=0xab, .sp=0xff, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1798, .value=0x50}, {.addr=0x1799, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x1798, .value=0x50, .type=IO_READ},
        {.addr=0x1799, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0297) {
    const struct CPU_State initial_cpu = {.pc=0xe98e, .a=0x02, .x=0x95, .y=0x0a, .sp=0x48, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xe98e, .value=0x50}, {.addr=0xe98f, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xe990, .a=0x02, .x=0x95, .y=0x0a, .sp=0x48, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xe98e, .value=0x50}, {.addr=0xe98f, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xe98e, .value=0x50, .type=IO_READ},
        {.addr=0xe98f, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0298) {
    const struct CPU_State initial_cpu = {.pc=0x4277, .a=0x66, .x=0x71, .y=0xfd, .sp=0x3d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4277, .value=0x50}, {.addr=0x4278, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4279, .a=0x66, .x=0x71, .y=0xfd, .sp=0x3d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4277, .value=0x50}, {.addr=0x4278, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4277, .value=0x50, .type=IO_READ},
        {.addr=0x4278, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0299) {
    const struct CPU_State initial_cpu = {.pc=0xcd97, .a=0xf4, .x=0x7f, .y=0x38, .sp=0x42, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xcd97, .value=0x50}, {.addr=0xcd98, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcd99, .a=0xf4, .x=0x7f, .y=0x38, .sp=0x42, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcd97, .value=0x50}, {.addr=0xcd98, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcd97, .value=0x50, .type=IO_READ},
        {.addr=0xcd98, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_029A) {
    const struct CPU_State initial_cpu = {.pc=0x3998, .a=0xd4, .x=0xeb, .y=0xf4, .sp=0xfa, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x3998, .value=0x50}, {.addr=0x3999, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x399a, .a=0xd4, .x=0xeb, .y=0xf4, .sp=0xfa, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x3998, .value=0x50}, {.addr=0x3999, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x3998, .value=0x50, .type=IO_READ},
        {.addr=0x3999, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_029B) {
    const struct CPU_State initial_cpu = {.pc=0x1b7c, .a=0xcc, .x=0x24, .y=0x3d, .sp=0xb5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1b7c, .value=0x50}, {.addr=0x1b7d, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1bd0, .a=0xcc, .x=0x24, .y=0x3d, .sp=0xb5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1b7c, .value=0x50}, {.addr=0x1b7d, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1b7c, .value=0x50, .type=IO_READ},
        {.addr=0x1b7d, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_029C) {
    const struct CPU_State initial_cpu = {.pc=0xfa0d, .a=0x25, .x=0x46, .y=0x60, .sp=0xd2, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xfa0d, .value=0x50}, {.addr=0xfa0e, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xfa18, .a=0x25, .x=0x46, .y=0x60, .sp=0xd2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xfa0d, .value=0x50}, {.addr=0xfa0e, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xfa0d, .value=0x50, .type=IO_READ},
        {.addr=0xfa0e, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_029D) {
    const struct CPU_State initial_cpu = {.pc=0x0b67, .a=0x14, .x=0x36, .y=0x2b, .sp=0x2a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0b67, .value=0x50}, {.addr=0x0b68, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x0b69, .a=0x14, .x=0x36, .y=0x2b, .sp=0x2a, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0b67, .value=0x50}, {.addr=0x0b68, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x0b67, .value=0x50, .type=IO_READ},
        {.addr=0x0b68, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_029E) {
    const struct CPU_State initial_cpu = {.pc=0xc0f1, .a=0xf0, .x=0x3e, .y=0x40, .sp=0x8d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f1, .value=0x50}, {.addr=0xc0f2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc120, .a=0xf0, .x=0x3e, .y=0x40, .sp=0x8d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc0f1, .value=0x50}, {.addr=0xc0f2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc0f1, .value=0x50, .type=IO_READ},
        {.addr=0xc0f2, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_029F) {
    const struct CPU_State initial_cpu = {.pc=0x8306, .a=0x99, .x=0x27, .y=0x97, .sp=0xbb, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8306, .value=0x50}, {.addr=0x8307, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x8308, .a=0x99, .x=0x27, .y=0x97, .sp=0xbb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8306, .value=0x50}, {.addr=0x8307, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x8306, .value=0x50, .type=IO_READ},
        {.addr=0x8307, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xb2a3, .a=0x6e, .x=0x82, .y=0xfb, .sp=0xee, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a3, .value=0x50}, {.addr=0xb2a4, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xb2fc, .a=0x6e, .x=0x82, .y=0xfb, .sp=0xee, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb2a3, .value=0x50}, {.addr=0xb2a4, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xb2a3, .value=0x50, .type=IO_READ},
        {.addr=0xb2a4, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xa50c, .a=0xa1, .x=0xee, .y=0xcc, .sp=0x55, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa50c, .value=0x50}, {.addr=0xa50d, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xa4a9, .a=0xa1, .x=0xee, .y=0xcc, .sp=0x55, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa50c, .value=0x50}, {.addr=0xa50d, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xa50c, .value=0x50, .type=IO_READ},
        {.addr=0xa50d, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x16d7, .a=0x68, .x=0xfb, .y=0x01, .sp=0xc2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x16d7, .value=0x50}, {.addr=0x16d8, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x165d, .a=0x68, .x=0xfb, .y=0x01, .sp=0xc2, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x16d7, .value=0x50}, {.addr=0x16d8, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x16d7, .value=0x50, .type=IO_READ},
        {.addr=0x16d8, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x4a9c, .a=0x93, .x=0x2e, .y=0x94, .sp=0x37, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4a9c, .value=0x50}, {.addr=0x4a9d, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x4a79, .a=0x93, .x=0x2e, .y=0x94, .sp=0x37, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4a9c, .value=0x50}, {.addr=0x4a9d, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x4a9c, .value=0x50, .type=IO_READ},
        {.addr=0x4a9d, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xf0fd, .a=0x65, .x=0x98, .y=0x8a, .sp=0x20, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xf0fd, .value=0x50}, {.addr=0xf0fe, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xf097, .a=0x65, .x=0x98, .y=0x8a, .sp=0x20, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf0fd, .value=0x50}, {.addr=0xf0fe, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xf0fd, .value=0x50, .type=IO_READ},
        {.addr=0xf0fe, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x715e, .a=0x38, .x=0x11, .y=0x8f, .sp=0x0d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x715e, .value=0x50}, {.addr=0x715f, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x7160, .a=0x38, .x=0x11, .y=0x8f, .sp=0x0d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x715e, .value=0x50}, {.addr=0x715f, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x715e, .value=0x50, .type=IO_READ},
        {.addr=0x715f, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x8962, .a=0x83, .x=0xe1, .y=0xa3, .sp=0x04, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8962, .value=0x50}, {.addr=0x8963, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8964, .a=0x83, .x=0xe1, .y=0xa3, .sp=0x04, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8962, .value=0x50}, {.addr=0x8963, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8962, .value=0x50, .type=IO_READ},
        {.addr=0x8963, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x1f59, .a=0xe0, .x=0xaa, .y=0xd4, .sp=0x69, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f59, .value=0x50}, {.addr=0x1f5a, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x1ee4, .a=0xe0, .x=0xaa, .y=0xd4, .sp=0x69, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x1f59, .value=0x50}, {.addr=0x1f5a, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x1f59, .value=0x50, .type=IO_READ},
        {.addr=0x1f5a, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x5143, .a=0x94, .x=0xb8, .y=0x38, .sp=0x57, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5143, .value=0x50}, {.addr=0x5144, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x5145, .a=0x94, .x=0xb8, .y=0x38, .sp=0x57, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5143, .value=0x50}, {.addr=0x5144, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x5143, .value=0x50, .type=IO_READ},
        {.addr=0x5144, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x993c, .a=0xb9, .x=0xde, .y=0x6d, .sp=0xfa, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x993c, .value=0x50}, {.addr=0x993d, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x98ce, .a=0xb9, .x=0xde, .y=0x6d, .sp=0xfa, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x993c, .value=0x50}, {.addr=0x993d, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x993c, .value=0x50, .type=IO_READ},
        {.addr=0x993d, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xa3d5, .a=0x94, .x=0x30, .y=0xca, .sp=0xb3, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d5, .value=0x50}, {.addr=0xa3d6, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xa363, .a=0x94, .x=0x30, .y=0xca, .sp=0xb3, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xa3d5, .value=0x50}, {.addr=0xa3d6, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xa3d5, .value=0x50, .type=IO_READ},
        {.addr=0xa3d6, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x1e52, .a=0x0a, .x=0x0b, .y=0x02, .sp=0xe9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1e52, .value=0x50}, {.addr=0x1e53, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x1e44, .a=0x0a, .x=0x0b, .y=0x02, .sp=0xe9, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x1e52, .value=0x50}, {.addr=0x1e53, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x1e52, .value=0x50, .type=IO_READ},
        {.addr=0x1e53, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x98e6, .a=0xb9, .x=0x90, .y=0xa5, .sp=0x25, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x98e6, .value=0x50}, {.addr=0x98e7, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x98e8, .a=0xb9, .x=0x90, .y=0xa5, .sp=0x25, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x98e6, .value=0x50}, {.addr=0x98e7, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x98e6, .value=0x50, .type=IO_READ},
        {.addr=0x98e7, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x17ad, .a=0x81, .x=0xce, .y=0x73, .sp=0xfe, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x17ad, .value=0x50}, {.addr=0x17ae, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x17af, .a=0x81, .x=0xce, .y=0x73, .sp=0xfe, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x17ad, .value=0x50}, {.addr=0x17ae, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x17ad, .value=0x50, .type=IO_READ},
        {.addr=0x17ae, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x82b3, .a=0x7f, .x=0xe0, .y=0x88, .sp=0x84, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x82b3, .value=0x50}, {.addr=0x82b4, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x82e1, .a=0x7f, .x=0xe0, .y=0x88, .sp=0x84, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x82b3, .value=0x50}, {.addr=0x82b4, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x82b3, .value=0x50, .type=IO_READ},
        {.addr=0x82b4, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x18b2, .a=0x71, .x=0xa0, .y=0x20, .sp=0x6c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x18b2, .value=0x50}, {.addr=0x18b3, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x18ae, .a=0x71, .x=0xa0, .y=0x20, .sp=0x6c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x18b2, .value=0x50}, {.addr=0x18b3, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x18b2, .value=0x50, .type=IO_READ},
        {.addr=0x18b3, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x4440, .a=0x12, .x=0x44, .y=0x64, .sp=0xec, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4440, .value=0x50}, {.addr=0x4441, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x43ec, .a=0x12, .x=0x44, .y=0x64, .sp=0xec, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4440, .value=0x50}, {.addr=0x4441, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x4440, .value=0x50, .type=IO_READ},
        {.addr=0x4441, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xd29f, .a=0x95, .x=0xb0, .y=0xf9, .sp=0xc0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd29f, .value=0x50}, {.addr=0xd2a0, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0x95, .x=0xb0, .y=0xf9, .sp=0xc0, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xd29f, .value=0x50}, {.addr=0xd2a0, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xd29f, .value=0x50, .type=IO_READ},
        {.addr=0xd2a0, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x5d0d, .a=0x22, .x=0x48, .y=0x5b, .sp=0x07, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0d, .value=0x50}, {.addr=0x5d0e, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5d65, .a=0x22, .x=0x48, .y=0x5b, .sp=0x07, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5d0d, .value=0x50}, {.addr=0x5d0e, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5d0d, .value=0x50, .type=IO_READ},
        {.addr=0x5d0e, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xe2ce, .a=0x2e, .x=0x21, .y=0x27, .sp=0xf2, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ce, .value=0x50}, {.addr=0xe2cf, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xe2e5, .a=0x2e, .x=0x21, .y=0x27, .sp=0xf2, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xe2ce, .value=0x50}, {.addr=0xe2cf, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xe2ce, .value=0x50, .type=IO_READ},
        {.addr=0xe2cf, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x1f17, .a=0xea, .x=0x52, .y=0xa4, .sp=0x61, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1f17, .value=0x50}, {.addr=0x1f18, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x1eb4, .a=0xea, .x=0x52, .y=0xa4, .sp=0x61, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1f17, .value=0x50}, {.addr=0x1f18, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x1f17, .value=0x50, .type=IO_READ},
        {.addr=0x1f18, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe675, .a=0x8d, .x=0xe8, .y=0x5a, .sp=0xae, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe675, .value=0x50}, {.addr=0xe676, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xe677, .a=0x8d, .x=0xe8, .y=0x5a, .sp=0xae, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe675, .value=0x50}, {.addr=0xe676, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xe675, .value=0x50, .type=IO_READ},
        {.addr=0xe676, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xe2d0, .a=0x95, .x=0x06, .y=0x1f, .sp=0x39, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d0, .value=0x50}, {.addr=0xe2d1, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xe2d2, .a=0x95, .x=0x06, .y=0x1f, .sp=0x39, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xe2d0, .value=0x50}, {.addr=0xe2d1, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xe2d0, .value=0x50, .type=IO_READ},
        {.addr=0xe2d1, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x35a0, .a=0xf1, .x=0xb2, .y=0xf6, .sp=0x55, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x35a0, .value=0x50}, {.addr=0x35a1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x35a2, .a=0xf1, .x=0xb2, .y=0xf6, .sp=0x55, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x35a0, .value=0x50}, {.addr=0x35a1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x35a0, .value=0x50, .type=IO_READ},
        {.addr=0x35a1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x4cfd, .a=0x83, .x=0xba, .y=0x4a, .sp=0xe2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfd, .value=0x50}, {.addr=0x4cfe, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4ccd, .a=0x83, .x=0xba, .y=0x4a, .sp=0xe2, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4cfd, .value=0x50}, {.addr=0x4cfe, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4cfd, .value=0x50, .type=IO_READ},
        {.addr=0x4cfe, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xf011, .a=0x46, .x=0x17, .y=0xa8, .sp=0x3f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xf011, .value=0x50}, {.addr=0xf012, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xf013, .a=0x46, .x=0x17, .y=0xa8, .sp=0x3f, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xf011, .value=0x50}, {.addr=0xf012, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xf011, .value=0x50, .type=IO_READ},
        {.addr=0xf012, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xd39e, .a=0xd8, .x=0x56, .y=0x11, .sp=0x13, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xd39e, .value=0x50}, {.addr=0xd39f, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xd3a0, .a=0xd8, .x=0x56, .y=0x11, .sp=0x13, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd39e, .value=0x50}, {.addr=0xd39f, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xd39e, .value=0x50, .type=IO_READ},
        {.addr=0xd39f, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xba3f, .a=0xb6, .x=0x2f, .y=0x90, .sp=0x17, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xba3f, .value=0x50}, {.addr=0xba40, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xba0d, .a=0xb6, .x=0x2f, .y=0x90, .sp=0x17, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xba3f, .value=0x50}, {.addr=0xba40, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xba3f, .value=0x50, .type=IO_READ},
        {.addr=0xba40, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x875b, .a=0xd9, .x=0x8a, .y=0xa3, .sp=0x2d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x875b, .value=0x50}, {.addr=0x875c, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x875d, .a=0xd9, .x=0x8a, .y=0xa3, .sp=0x2d, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x875b, .value=0x50}, {.addr=0x875c, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x875b, .value=0x50, .type=IO_READ},
        {.addr=0x875c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x231a, .a=0xaa, .x=0x54, .y=0x28, .sp=0x47, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x231a, .value=0x50}, {.addr=0x231b, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x22c8, .a=0xaa, .x=0x54, .y=0x28, .sp=0x47, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x231a, .value=0x50}, {.addr=0x231b, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x231a, .value=0x50, .type=IO_READ},
        {.addr=0x231b, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x0b0c, .a=0x64, .x=0xfa, .y=0xe9, .sp=0xeb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0b0c, .value=0x50}, {.addr=0x0b0d, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x0aba, .a=0x64, .x=0xfa, .y=0xe9, .sp=0xeb, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0b0c, .value=0x50}, {.addr=0x0b0d, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x0b0c, .value=0x50, .type=IO_READ},
        {.addr=0x0b0d, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x64b8, .a=0x4c, .x=0xd1, .y=0x83, .sp=0x6c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x64b8, .value=0x50}, {.addr=0x64b9, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x6526, .a=0x4c, .x=0xd1, .y=0x83, .sp=0x6c, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x64b8, .value=0x50}, {.addr=0x64b9, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x64b8, .value=0x50, .type=IO_READ},
        {.addr=0x64b9, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xb376, .a=0xbc, .x=0x0c, .y=0x56, .sp=0xd2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb376, .value=0x50}, {.addr=0xb377, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xb378, .a=0xbc, .x=0x0c, .y=0x56, .sp=0xd2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb376, .value=0x50}, {.addr=0xb377, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xb376, .value=0x50, .type=IO_READ},
        {.addr=0xb377, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xfb8d, .a=0xd1, .x=0x66, .y=0x2d, .sp=0x06, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xfb8d, .value=0x50}, {.addr=0xfb8e, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xfb76, .a=0xd1, .x=0x66, .y=0x2d, .sp=0x06, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfb8d, .value=0x50}, {.addr=0xfb8e, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xfb8d, .value=0x50, .type=IO_READ},
        {.addr=0xfb8e, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xfc70, .a=0x61, .x=0x92, .y=0x05, .sp=0x32, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xfc70, .value=0x50}, {.addr=0xfc71, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xfc72, .a=0x61, .x=0x92, .y=0x05, .sp=0x32, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfc70, .value=0x50}, {.addr=0xfc71, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xfc70, .value=0x50, .type=IO_READ},
        {.addr=0xfc71, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xc8f5, .a=0x3f, .x=0x22, .y=0x64, .sp=0x58, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc8f5, .value=0x50}, {.addr=0xc8f6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xc969, .a=0x3f, .x=0x22, .y=0x64, .sp=0x58, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xc8f5, .value=0x50}, {.addr=0xc8f6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xc8f5, .value=0x50, .type=IO_READ},
        {.addr=0xc8f6, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x9a3e, .a=0x37, .x=0x42, .y=0xe9, .sp=0x00, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9a3e, .value=0x50}, {.addr=0x9a3f, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x9a40, .a=0x37, .x=0x42, .y=0xe9, .sp=0x00, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x9a3e, .value=0x50}, {.addr=0x9a3f, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x9a3e, .value=0x50, .type=IO_READ},
        {.addr=0x9a3f, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x58ab, .a=0x06, .x=0x66, .y=0x41, .sp=0x42, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x58ab, .value=0x50}, {.addr=0x58ac, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x588a, .a=0x06, .x=0x66, .y=0x41, .sp=0x42, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x58ab, .value=0x50}, {.addr=0x58ac, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x58ab, .value=0x50, .type=IO_READ},
        {.addr=0x58ac, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x34c7, .a=0xa3, .x=0x84, .y=0x95, .sp=0x88, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x34c7, .value=0x50}, {.addr=0x34c8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3509, .a=0xa3, .x=0x84, .y=0x95, .sp=0x88, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x34c7, .value=0x50}, {.addr=0x34c8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x34c7, .value=0x50, .type=IO_READ},
        {.addr=0x34c8, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x117e, .a=0x4e, .x=0x5f, .y=0x01, .sp=0xbd, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x117e, .value=0x50}, {.addr=0x117f, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x11d3, .a=0x4e, .x=0x5f, .y=0x01, .sp=0xbd, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x117e, .value=0x50}, {.addr=0x117f, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x117e, .value=0x50, .type=IO_READ},
        {.addr=0x117f, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xf701, .a=0xce, .x=0x5f, .y=0x74, .sp=0xf4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf701, .value=0x50}, {.addr=0xf702, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xf703, .a=0xce, .x=0x5f, .y=0x74, .sp=0xf4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf701, .value=0x50}, {.addr=0xf702, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xf701, .value=0x50, .type=IO_READ},
        {.addr=0xf702, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x1b0c, .a=0x6a, .x=0x8e, .y=0x28, .sp=0x2d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x1b0c, .value=0x50}, {.addr=0x1b0d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x1b0e, .a=0x6a, .x=0x8e, .y=0x28, .sp=0x2d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x1b0c, .value=0x50}, {.addr=0x1b0d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x1b0c, .value=0x50, .type=IO_READ},
        {.addr=0x1b0d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe8b7, .a=0x83, .x=0xee, .y=0x1f, .sp=0x03, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b7, .value=0x50}, {.addr=0xe8b8, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xe8b9, .a=0x83, .x=0xee, .y=0x1f, .sp=0x03, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xe8b7, .value=0x50}, {.addr=0xe8b8, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xe8b7, .value=0x50, .type=IO_READ},
        {.addr=0xe8b8, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x3cd5, .a=0x61, .x=0xe7, .y=0x21, .sp=0x55, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd5, .value=0x50}, {.addr=0x3cd6, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x3cd7, .a=0x61, .x=0xe7, .y=0x21, .sp=0x55, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3cd5, .value=0x50}, {.addr=0x3cd6, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x3cd5, .value=0x50, .type=IO_READ},
        {.addr=0x3cd6, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x2fe4, .a=0xb0, .x=0x70, .y=0x1d, .sp=0x31, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe4, .value=0x50}, {.addr=0x2fe5, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x3055, .a=0xb0, .x=0x70, .y=0x1d, .sp=0x31, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2fe4, .value=0x50}, {.addr=0x2fe5, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x2fe4, .value=0x50, .type=IO_READ},
        {.addr=0x2fe5, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xaab4, .a=0x12, .x=0x9f, .y=0x78, .sp=0x7f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xaab4, .value=0x50}, {.addr=0xaab5, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xaab6, .a=0x12, .x=0x9f, .y=0x78, .sp=0x7f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xaab4, .value=0x50}, {.addr=0xaab5, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xaab4, .value=0x50, .type=IO_READ},
        {.addr=0xaab5, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x4ab3, .a=0xbb, .x=0x61, .y=0x61, .sp=0xa9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x4ab3, .value=0x50}, {.addr=0x4ab4, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x4ab5, .a=0xbb, .x=0x61, .y=0x61, .sp=0xa9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4ab3, .value=0x50}, {.addr=0x4ab4, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x4ab3, .value=0x50, .type=IO_READ},
        {.addr=0x4ab4, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x5908, .a=0x2f, .x=0xf1, .y=0x5c, .sp=0x2f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5908, .value=0x50}, {.addr=0x5909, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x590a, .a=0x2f, .x=0xf1, .y=0x5c, .sp=0x2f, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x5908, .value=0x50}, {.addr=0x5909, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5908, .value=0x50, .type=IO_READ},
        {.addr=0x5909, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x50c9, .a=0x30, .x=0x9e, .y=0xd4, .sp=0x73, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x50c9, .value=0x50}, {.addr=0x50ca, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x50cb, .a=0x30, .x=0x9e, .y=0xd4, .sp=0x73, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x50c9, .value=0x50}, {.addr=0x50ca, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x50c9, .value=0x50, .type=IO_READ},
        {.addr=0x50ca, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x5bb8, .a=0xca, .x=0x66, .y=0x77, .sp=0xc5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x5bb8, .value=0x50}, {.addr=0x5bb9, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x5bba, .a=0xca, .x=0x66, .y=0x77, .sp=0xc5, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x5bb8, .value=0x50}, {.addr=0x5bb9, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x5bb8, .value=0x50, .type=IO_READ},
        {.addr=0x5bb9, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xe122, .a=0x6e, .x=0xab, .y=0x4a, .sp=0x18, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe122, .value=0x50}, {.addr=0xe123, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xe0f5, .a=0x6e, .x=0xab, .y=0x4a, .sp=0x18, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xe122, .value=0x50}, {.addr=0xe123, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xe122, .value=0x50, .type=IO_READ},
        {.addr=0xe123, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xa7e2, .a=0xb3, .x=0x00, .y=0x8b, .sp=0x37, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e2, .value=0x50}, {.addr=0xa7e3, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xa815, .a=0xb3, .x=0x00, .y=0x8b, .sp=0x37, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xa7e2, .value=0x50}, {.addr=0xa7e3, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xa7e2, .value=0x50, .type=IO_READ},
        {.addr=0xa7e3, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xbc97, .a=0x6a, .x=0xf1, .y=0x83, .sp=0xf5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xbc97, .value=0x50}, {.addr=0xbc98, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xbcfc, .a=0x6a, .x=0xf1, .y=0x83, .sp=0xf5, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xbc97, .value=0x50}, {.addr=0xbc98, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xbc97, .value=0x50, .type=IO_READ},
        {.addr=0xbc98, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x4fb4, .a=0x95, .x=0x29, .y=0x45, .sp=0x91, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb4, .value=0x50}, {.addr=0x4fb5, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x4fb6, .a=0x95, .x=0x29, .y=0x45, .sp=0x91, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4fb4, .value=0x50}, {.addr=0x4fb5, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x4fb4, .value=0x50, .type=IO_READ},
        {.addr=0x4fb5, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x7036, .a=0x33, .x=0x2e, .y=0x47, .sp=0x31, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7036, .value=0x50}, {.addr=0x7037, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x707c, .a=0x33, .x=0x2e, .y=0x47, .sp=0x31, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x7036, .value=0x50}, {.addr=0x7037, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x7036, .value=0x50, .type=IO_READ},
        {.addr=0x7037, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xbdf7, .a=0x18, .x=0x18, .y=0x15, .sp=0x61, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf7, .value=0x50}, {.addr=0xbdf8, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xbdf9, .a=0x18, .x=0x18, .y=0x15, .sp=0x61, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbdf7, .value=0x50}, {.addr=0xbdf8, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xbdf7, .value=0x50, .type=IO_READ},
        {.addr=0xbdf8, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x9fdc, .a=0xce, .x=0xe2, .y=0x61, .sp=0xde, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x9fdc, .value=0x50}, {.addr=0x9fdd, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xa00e, .a=0xce, .x=0xe2, .y=0x61, .sp=0xde, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x9fdc, .value=0x50}, {.addr=0x9fdd, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x9fdc, .value=0x50, .type=IO_READ},
        {.addr=0x9fdd, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x8c5b, .a=0x54, .x=0x35, .y=0x18, .sp=0xaf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x8c5b, .value=0x50}, {.addr=0x8c5c, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x8c5b, .a=0x54, .x=0x35, .y=0x18, .sp=0xaf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8c5b, .value=0x50}, {.addr=0x8c5c, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x8c5b, .value=0x50, .type=IO_READ},
        {.addr=0x8c5c, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x4314, .a=0x1f, .x=0xef, .y=0x4a, .sp=0x20, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x4314, .value=0x50}, {.addr=0x4315, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x4316, .a=0x1f, .x=0xef, .y=0x4a, .sp=0x20, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4314, .value=0x50}, {.addr=0x4315, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x4314, .value=0x50, .type=IO_READ},
        {.addr=0x4315, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x887e, .a=0xd7, .x=0x90, .y=0x36, .sp=0x3f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x887e, .value=0x50}, {.addr=0x887f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x88a7, .a=0xd7, .x=0x90, .y=0x36, .sp=0x3f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x887e, .value=0x50}, {.addr=0x887f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x887e, .value=0x50, .type=IO_READ},
        {.addr=0x887f, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x29cb, .a=0xcd, .x=0x2f, .y=0xb5, .sp=0x5d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x29cb, .value=0x50}, {.addr=0x29cc, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x29cd, .a=0xcd, .x=0x2f, .y=0xb5, .sp=0x5d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x29cb, .value=0x50}, {.addr=0x29cc, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x29cb, .value=0x50, .type=IO_READ},
        {.addr=0x29cc, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xc99d, .a=0x09, .x=0x3c, .y=0x3d, .sp=0x9c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc99d, .value=0x50}, {.addr=0xc99e, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xc99f, .a=0x09, .x=0x3c, .y=0x3d, .sp=0x9c, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xc99d, .value=0x50}, {.addr=0xc99e, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xc99d, .value=0x50, .type=IO_READ},
        {.addr=0xc99e, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4366, .a=0x2b, .x=0xcf, .y=0xfc, .sp=0x42, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4366, .value=0x50}, {.addr=0x4367, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x43e3, .a=0x2b, .x=0xcf, .y=0xfc, .sp=0x42, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x4366, .value=0x50}, {.addr=0x4367, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x4366, .value=0x50, .type=IO_READ},
        {.addr=0x4367, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xd33d, .a=0xed, .x=0xdf, .y=0x17, .sp=0x1c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xd33d, .value=0x50}, {.addr=0xd33e, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xd2c2, .a=0xed, .x=0xdf, .y=0x17, .sp=0x1c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd33d, .value=0x50}, {.addr=0xd33e, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xd33d, .value=0x50, .type=IO_READ},
        {.addr=0xd33e, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x761e, .a=0xa7, .x=0x12, .y=0xe5, .sp=0x6a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x761e, .value=0x50}, {.addr=0x761f, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x75a1, .a=0xa7, .x=0x12, .y=0xe5, .sp=0x6a, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x761e, .value=0x50}, {.addr=0x761f, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x761e, .value=0x50, .type=IO_READ},
        {.addr=0x761f, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x0713, .a=0x06, .x=0xad, .y=0x33, .sp=0x2b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0713, .value=0x50}, {.addr=0x0714, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x0715, .a=0x06, .x=0xad, .y=0x33, .sp=0x2b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0713, .value=0x50}, {.addr=0x0714, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x0713, .value=0x50, .type=IO_READ},
        {.addr=0x0714, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x5804, .a=0x77, .x=0x4d, .y=0xdc, .sp=0xc9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x5804, .value=0x50}, {.addr=0x5805, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x5806, .a=0x77, .x=0x4d, .y=0xdc, .sp=0xc9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5804, .value=0x50}, {.addr=0x5805, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x5804, .value=0x50, .type=IO_READ},
        {.addr=0x5805, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x5f40, .a=0x35, .x=0x4d, .y=0x4f, .sp=0xd1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5f40, .value=0x50}, {.addr=0x5f41, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5f65, .a=0x35, .x=0x4d, .y=0x4f, .sp=0xd1, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5f40, .value=0x50}, {.addr=0x5f41, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5f40, .value=0x50, .type=IO_READ},
        {.addr=0x5f41, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x20d0, .a=0x1f, .x=0x20, .y=0x9b, .sp=0x98, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x20d0, .value=0x50}, {.addr=0x20d1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x20cf, .a=0x1f, .x=0x20, .y=0x9b, .sp=0x98, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x20d0, .value=0x50}, {.addr=0x20d1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x20d0, .value=0x50, .type=IO_READ},
        {.addr=0x20d1, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xaa03, .a=0xb1, .x=0x76, .y=0x37, .sp=0x03, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xaa03, .value=0x50}, {.addr=0xaa04, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaa05, .a=0xb1, .x=0x76, .y=0x37, .sp=0x03, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xaa03, .value=0x50}, {.addr=0xaa04, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaa03, .value=0x50, .type=IO_READ},
        {.addr=0xaa04, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x7226, .a=0xd2, .x=0xc9, .y=0x34, .sp=0x34, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x7226, .value=0x50}, {.addr=0x7227, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x71fe, .a=0xd2, .x=0xc9, .y=0x34, .sp=0x34, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7226, .value=0x50}, {.addr=0x7227, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x7226, .value=0x50, .type=IO_READ},
        {.addr=0x7227, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x925b, .a=0xe8, .x=0xaf, .y=0xe2, .sp=0x2c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x925b, .value=0x50}, {.addr=0x925c, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x9288, .a=0xe8, .x=0xaf, .y=0xe2, .sp=0x2c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x925b, .value=0x50}, {.addr=0x925c, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x925b, .value=0x50, .type=IO_READ},
        {.addr=0x925c, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x678e, .a=0x61, .x=0x63, .y=0x99, .sp=0xf3, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x678e, .value=0x50}, {.addr=0x678f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x67ed, .a=0x61, .x=0x63, .y=0x99, .sp=0xf3, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x678e, .value=0x50}, {.addr=0x678f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x678e, .value=0x50, .type=IO_READ},
        {.addr=0x678f, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x5f46, .a=0x06, .x=0x19, .y=0x01, .sp=0x3b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5f46, .value=0x50}, {.addr=0x5f47, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x5f21, .a=0x06, .x=0x19, .y=0x01, .sp=0x3b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5f46, .value=0x50}, {.addr=0x5f47, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x5f46, .value=0x50, .type=IO_READ},
        {.addr=0x5f47, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x5eb9, .a=0xd2, .x=0x15, .y=0xc8, .sp=0xc8, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5eb9, .value=0x50}, {.addr=0x5eba, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x5f0f, .a=0xd2, .x=0x15, .y=0xc8, .sp=0xc8, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x5eb9, .value=0x50}, {.addr=0x5eba, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x5eb9, .value=0x50, .type=IO_READ},
        {.addr=0x5eba, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xd376, .a=0x9a, .x=0xc3, .y=0x66, .sp=0x9e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xd376, .value=0x50}, {.addr=0xd377, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd3be, .a=0x9a, .x=0xc3, .y=0x66, .sp=0x9e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd376, .value=0x50}, {.addr=0xd377, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd376, .value=0x50, .type=IO_READ},
        {.addr=0xd377, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xa80e, .a=0x2b, .x=0x39, .y=0xd8, .sp=0x99, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xa80e, .value=0x50}, {.addr=0xa80f, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa810, .a=0x2b, .x=0x39, .y=0xd8, .sp=0x99, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xa80e, .value=0x50}, {.addr=0xa80f, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa80e, .value=0x50, .type=IO_READ},
        {.addr=0xa80f, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x059d, .a=0x66, .x=0xb8, .y=0xe4, .sp=0x4e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x059d, .value=0x50}, {.addr=0x059e, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x0576, .a=0x66, .x=0xb8, .y=0xe4, .sp=0x4e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x059d, .value=0x50}, {.addr=0x059e, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x059d, .value=0x50, .type=IO_READ},
        {.addr=0x059e, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x38b6, .a=0x6a, .x=0x07, .y=0x74, .sp=0xba, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x38b6, .value=0x50}, {.addr=0x38b7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x38b8, .a=0x6a, .x=0x07, .y=0x74, .sp=0xba, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x38b6, .value=0x50}, {.addr=0x38b7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x38b6, .value=0x50, .type=IO_READ},
        {.addr=0x38b7, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xf417, .a=0x10, .x=0xc2, .y=0xe1, .sp=0xb5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf417, .value=0x50}, {.addr=0xf418, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xf419, .a=0x10, .x=0xc2, .y=0xe1, .sp=0xb5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf417, .value=0x50}, {.addr=0xf418, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xf417, .value=0x50, .type=IO_READ},
        {.addr=0xf418, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x7208, .a=0xf5, .x=0x2f, .y=0xb2, .sp=0x7c, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7208, .value=0x50}, {.addr=0x7209, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x720a, .a=0xf5, .x=0x2f, .y=0xb2, .sp=0x7c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7208, .value=0x50}, {.addr=0x7209, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x7208, .value=0x50, .type=IO_READ},
        {.addr=0x7209, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x6ae4, .a=0xe5, .x=0x3e, .y=0x1e, .sp=0x1a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae4, .value=0x50}, {.addr=0x6ae5, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x6ae6, .a=0xe5, .x=0x3e, .y=0x1e, .sp=0x1a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x6ae4, .value=0x50}, {.addr=0x6ae5, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x6ae4, .value=0x50, .type=IO_READ},
        {.addr=0x6ae5, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x1b58, .a=0x1a, .x=0x06, .y=0x2a, .sp=0x3a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1b58, .value=0x50}, {.addr=0x1b59, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x1ba3, .a=0x1a, .x=0x06, .y=0x2a, .sp=0x3a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1b58, .value=0x50}, {.addr=0x1b59, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x1b58, .value=0x50, .type=IO_READ},
        {.addr=0x1b59, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xcf35, .a=0x8c, .x=0x50, .y=0x59, .sp=0xb5, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xcf35, .value=0x50}, {.addr=0xcf36, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xcf37, .a=0x8c, .x=0x50, .y=0x59, .sp=0xb5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcf35, .value=0x50}, {.addr=0xcf36, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xcf35, .value=0x50, .type=IO_READ},
        {.addr=0xcf36, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x6b18, .a=0xfc, .x=0xa9, .y=0x4d, .sp=0xad, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6b18, .value=0x50}, {.addr=0x6b19, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x6b1a, .a=0xfc, .x=0xa9, .y=0x4d, .sp=0xad, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6b18, .value=0x50}, {.addr=0x6b19, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x6b18, .value=0x50, .type=IO_READ},
        {.addr=0x6b19, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x7197, .a=0x50, .x=0xc2, .y=0x54, .sp=0xa8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7197, .value=0x50}, {.addr=0x7198, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x715a, .a=0x50, .x=0xc2, .y=0x54, .sp=0xa8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7197, .value=0x50}, {.addr=0x7198, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x7197, .value=0x50, .type=IO_READ},
        {.addr=0x7198, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xbfed, .a=0x1c, .x=0xee, .y=0x5a, .sp=0xc9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xbfed, .value=0x50}, {.addr=0xbfee, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbfef, .a=0x1c, .x=0xee, .y=0x5a, .sp=0xc9, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xbfed, .value=0x50}, {.addr=0xbfee, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbfed, .value=0x50, .type=IO_READ},
        {.addr=0xbfee, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x3af7, .a=0xfa, .x=0xc6, .y=0x3b, .sp=0x65, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3af7, .value=0x50}, {.addr=0x3af8, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x3ad1, .a=0xfa, .x=0xc6, .y=0x3b, .sp=0x65, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x3af7, .value=0x50}, {.addr=0x3af8, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x3af7, .value=0x50, .type=IO_READ},
        {.addr=0x3af8, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xa397, .a=0xf4, .x=0xee, .y=0x10, .sp=0x73, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xa397, .value=0x50}, {.addr=0xa398, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xa399, .a=0xf4, .x=0xee, .y=0x10, .sp=0x73, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xa397, .value=0x50}, {.addr=0xa398, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xa397, .value=0x50, .type=IO_READ},
        {.addr=0xa398, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x4b98, .a=0x07, .x=0x80, .y=0xd1, .sp=0x85, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x4b98, .value=0x50}, {.addr=0x4b99, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x4b5c, .a=0x07, .x=0x80, .y=0xd1, .sp=0x85, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x4b98, .value=0x50}, {.addr=0x4b99, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x4b98, .value=0x50, .type=IO_READ},
        {.addr=0x4b99, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xb9a3, .a=0x6c, .x=0x00, .y=0x99, .sp=0xec, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a3, .value=0x50}, {.addr=0xb9a4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb963, .a=0x6c, .x=0x00, .y=0x99, .sp=0xec, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb9a3, .value=0x50}, {.addr=0xb9a4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb9a3, .value=0x50, .type=IO_READ},
        {.addr=0xb9a4, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xf9d6, .a=0xad, .x=0x51, .y=0xce, .sp=0xe2, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d6, .value=0x50}, {.addr=0xf9d7, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf9aa, .a=0xad, .x=0x51, .y=0xce, .sp=0xe2, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xf9d6, .value=0x50}, {.addr=0xf9d7, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf9d6, .value=0x50, .type=IO_READ},
        {.addr=0xf9d7, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb6ca, .a=0xed, .x=0x33, .y=0x91, .sp=0xb4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ca, .value=0x50}, {.addr=0xb6cb, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb6ef, .a=0xed, .x=0x33, .y=0x91, .sp=0xb4, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xb6ca, .value=0x50}, {.addr=0xb6cb, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb6ca, .value=0x50, .type=IO_READ},
        {.addr=0xb6cb, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x39d1, .a=0xc3, .x=0x11, .y=0x05, .sp=0x78, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x39d1, .value=0x50}, {.addr=0x39d2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x39d3, .a=0xc3, .x=0x11, .y=0x05, .sp=0x78, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x39d1, .value=0x50}, {.addr=0x39d2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x39d1, .value=0x50, .type=IO_READ},
        {.addr=0x39d2, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xedbf, .a=0x3d, .x=0xc9, .y=0x41, .sp=0x64, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xedbf, .value=0x50}, {.addr=0xedc0, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xedc1, .a=0x3d, .x=0xc9, .y=0x41, .sp=0x64, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xedbf, .value=0x50}, {.addr=0xedc0, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xedbf, .value=0x50, .type=IO_READ},
        {.addr=0xedc0, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xabaa, .a=0x86, .x=0x98, .y=0xf2, .sp=0x99, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xabaa, .value=0x50}, {.addr=0xabab, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xab98, .a=0x86, .x=0x98, .y=0xf2, .sp=0x99, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xabaa, .value=0x50}, {.addr=0xabab, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xabaa, .value=0x50, .type=IO_READ},
        {.addr=0xabab, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0300) {
    const struct CPU_State initial_cpu = {.pc=0x401b, .a=0x01, .x=0x14, .y=0x1a, .sp=0xfb, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x401b, .value=0x50}, {.addr=0x401c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x401d, .a=0x01, .x=0x14, .y=0x1a, .sp=0xfb, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x401b, .value=0x50}, {.addr=0x401c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x401b, .value=0x50, .type=IO_READ},
        {.addr=0x401c, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0301) {
    const struct CPU_State initial_cpu = {.pc=0x91d3, .a=0x6b, .x=0x9c, .y=0xd8, .sp=0xee, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x91d3, .value=0x50}, {.addr=0x91d4, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x91d5, .a=0x6b, .x=0x9c, .y=0xd8, .sp=0xee, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x91d3, .value=0x50}, {.addr=0x91d4, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x91d3, .value=0x50, .type=IO_READ},
        {.addr=0x91d4, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0302) {
    const struct CPU_State initial_cpu = {.pc=0xe332, .a=0x02, .x=0x01, .y=0xa4, .sp=0x65, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe332, .value=0x50}, {.addr=0xe333, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xe31d, .a=0x02, .x=0x01, .y=0xa4, .sp=0x65, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe332, .value=0x50}, {.addr=0xe333, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xe332, .value=0x50, .type=IO_READ},
        {.addr=0xe333, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0303) {
    const struct CPU_State initial_cpu = {.pc=0x0517, .a=0x39, .x=0x70, .y=0x2c, .sp=0x78, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0517, .value=0x50}, {.addr=0x0518, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x04c4, .a=0x39, .x=0x70, .y=0x2c, .sp=0x78, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0517, .value=0x50}, {.addr=0x0518, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x0517, .value=0x50, .type=IO_READ},
        {.addr=0x0518, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0304) {
    const struct CPU_State initial_cpu = {.pc=0x1dd5, .a=0x11, .x=0xa6, .y=0x08, .sp=0x36, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd5, .value=0x50}, {.addr=0x1dd6, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x1e21, .a=0x11, .x=0xa6, .y=0x08, .sp=0x36, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1dd5, .value=0x50}, {.addr=0x1dd6, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x1dd5, .value=0x50, .type=IO_READ},
        {.addr=0x1dd6, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0305) {
    const struct CPU_State initial_cpu = {.pc=0x66b3, .a=0x25, .x=0xe8, .y=0xc8, .sp=0x9f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x66b3, .value=0x50}, {.addr=0x66b4, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x671c, .a=0x25, .x=0xe8, .y=0xc8, .sp=0x9f, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x66b3, .value=0x50}, {.addr=0x66b4, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x66b3, .value=0x50, .type=IO_READ},
        {.addr=0x66b4, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0306) {
    const struct CPU_State initial_cpu = {.pc=0x3ebe, .a=0x46, .x=0xe5, .y=0xfa, .sp=0x9f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3ebe, .value=0x50}, {.addr=0x3ebf, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x3f3b, .a=0x46, .x=0xe5, .y=0xfa, .sp=0x9f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3ebe, .value=0x50}, {.addr=0x3ebf, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x3ebe, .value=0x50, .type=IO_READ},
        {.addr=0x3ebf, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0307) {
    const struct CPU_State initial_cpu = {.pc=0x9dd3, .a=0x24, .x=0x46, .y=0x5f, .sp=0xb9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd3, .value=0x50}, {.addr=0x9dd4, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x9e50, .a=0x24, .x=0x46, .y=0x5f, .sp=0xb9, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x9dd3, .value=0x50}, {.addr=0x9dd4, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x9dd3, .value=0x50, .type=IO_READ},
        {.addr=0x9dd4, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0308) {
    const struct CPU_State initial_cpu = {.pc=0x951e, .a=0x88, .x=0x23, .y=0xdc, .sp=0x96, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x951e, .value=0x50}, {.addr=0x951f, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9520, .a=0x88, .x=0x23, .y=0xdc, .sp=0x96, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x951e, .value=0x50}, {.addr=0x951f, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x951e, .value=0x50, .type=IO_READ},
        {.addr=0x951f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0309) {
    const struct CPU_State initial_cpu = {.pc=0xc716, .a=0x95, .x=0x04, .y=0x5b, .sp=0x0d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc716, .value=0x50}, {.addr=0xc717, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xc718, .a=0x95, .x=0x04, .y=0x5b, .sp=0x0d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc716, .value=0x50}, {.addr=0xc717, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xc716, .value=0x50, .type=IO_READ},
        {.addr=0xc717, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_030A) {
    const struct CPU_State initial_cpu = {.pc=0xa999, .a=0x32, .x=0x20, .y=0xfe, .sp=0x76, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa999, .value=0x50}, {.addr=0xa99a, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xa99b, .a=0x32, .x=0x20, .y=0xfe, .sp=0x76, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xa999, .value=0x50}, {.addr=0xa99a, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xa999, .value=0x50, .type=IO_READ},
        {.addr=0xa99a, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_030B) {
    const struct CPU_State initial_cpu = {.pc=0xe0c2, .a=0x73, .x=0x44, .y=0x62, .sp=0xc7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c2, .value=0x50}, {.addr=0xe0c3, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xe0c4, .a=0x73, .x=0x44, .y=0x62, .sp=0xc7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe0c2, .value=0x50}, {.addr=0xe0c3, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xe0c2, .value=0x50, .type=IO_READ},
        {.addr=0xe0c3, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_030C) {
    const struct CPU_State initial_cpu = {.pc=0xfc2a, .a=0xe1, .x=0xcd, .y=0x55, .sp=0xc6, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xfc2a, .value=0x50}, {.addr=0xfc2b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfc2c, .a=0xe1, .x=0xcd, .y=0x55, .sp=0xc6, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xfc2a, .value=0x50}, {.addr=0xfc2b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfc2a, .value=0x50, .type=IO_READ},
        {.addr=0xfc2b, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_030D) {
    const struct CPU_State initial_cpu = {.pc=0x54a8, .a=0x50, .x=0xdc, .y=0xee, .sp=0xef, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x54a8, .value=0x50}, {.addr=0x54a9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x54aa, .a=0x50, .x=0xdc, .y=0xee, .sp=0xef, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x54a8, .value=0x50}, {.addr=0x54a9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x54a8, .value=0x50, .type=IO_READ},
        {.addr=0x54a9, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_030E) {
    const struct CPU_State initial_cpu = {.pc=0x7186, .a=0x7d, .x=0x12, .y=0x90, .sp=0xbe, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7186, .value=0x50}, {.addr=0x7187, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x717d, .a=0x7d, .x=0x12, .y=0x90, .sp=0xbe, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x7186, .value=0x50}, {.addr=0x7187, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7186, .value=0x50, .type=IO_READ},
        {.addr=0x7187, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_030F) {
    const struct CPU_State initial_cpu = {.pc=0xf152, .a=0x71, .x=0xda, .y=0xa1, .sp=0xac, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf152, .value=0x50}, {.addr=0xf153, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf1b4, .a=0x71, .x=0xda, .y=0xa1, .sp=0xac, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf152, .value=0x50}, {.addr=0xf153, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf152, .value=0x50, .type=IO_READ},
        {.addr=0xf153, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0310) {
    const struct CPU_State initial_cpu = {.pc=0x58dd, .a=0x3b, .x=0x3c, .y=0x8d, .sp=0xbd, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x58dd, .value=0x50}, {.addr=0x58de, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x58d1, .a=0x3b, .x=0x3c, .y=0x8d, .sp=0xbd, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x58dd, .value=0x50}, {.addr=0x58de, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x58dd, .value=0x50, .type=IO_READ},
        {.addr=0x58de, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0311) {
    const struct CPU_State initial_cpu = {.pc=0xc2bf, .a=0xd1, .x=0x88, .y=0xc3, .sp=0x62, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc2bf, .value=0x50}, {.addr=0xc2c0, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc30c, .a=0xd1, .x=0x88, .y=0xc3, .sp=0x62, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xc2bf, .value=0x50}, {.addr=0xc2c0, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc2bf, .value=0x50, .type=IO_READ},
        {.addr=0xc2c0, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0312) {
    const struct CPU_State initial_cpu = {.pc=0xa19b, .a=0xa4, .x=0x8e, .y=0xdc, .sp=0x71, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xa19b, .value=0x50}, {.addr=0xa19c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa1da, .a=0xa4, .x=0x8e, .y=0xdc, .sp=0x71, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa19b, .value=0x50}, {.addr=0xa19c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa19b, .value=0x50, .type=IO_READ},
        {.addr=0xa19c, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0313) {
    const struct CPU_State initial_cpu = {.pc=0xb918, .a=0x37, .x=0xd8, .y=0x19, .sp=0xa5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb918, .value=0x50}, {.addr=0xb919, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xb91a, .a=0x37, .x=0xd8, .y=0x19, .sp=0xa5, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xb918, .value=0x50}, {.addr=0xb919, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xb918, .value=0x50, .type=IO_READ},
        {.addr=0xb919, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0314) {
    const struct CPU_State initial_cpu = {.pc=0xfd39, .a=0x7b, .x=0x05, .y=0x0e, .sp=0x1e, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xfd39, .value=0x50}, {.addr=0xfd3a, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xfd11, .a=0x7b, .x=0x05, .y=0x0e, .sp=0x1e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xfd39, .value=0x50}, {.addr=0xfd3a, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xfd39, .value=0x50, .type=IO_READ},
        {.addr=0xfd3a, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0315) {
    const struct CPU_State initial_cpu = {.pc=0x042c, .a=0x77, .x=0x0a, .y=0xa0, .sp=0x11, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x042c, .value=0x50}, {.addr=0x042d, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x03c9, .a=0x77, .x=0x0a, .y=0xa0, .sp=0x11, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x042c, .value=0x50}, {.addr=0x042d, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x042c, .value=0x50, .type=IO_READ},
        {.addr=0x042d, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0316) {
    const struct CPU_State initial_cpu = {.pc=0x61f2, .a=0x99, .x=0x68, .y=0xc3, .sp=0xef, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x61f2, .value=0x50}, {.addr=0x61f3, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x61f4, .a=0x99, .x=0x68, .y=0xc3, .sp=0xef, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x61f2, .value=0x50}, {.addr=0x61f3, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x61f2, .value=0x50, .type=IO_READ},
        {.addr=0x61f3, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0317) {
    const struct CPU_State initial_cpu = {.pc=0xd9b3, .a=0x16, .x=0xce, .y=0x20, .sp=0xc3, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xd9b3, .value=0x50}, {.addr=0xd9b4, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xd9b5, .a=0x16, .x=0xce, .y=0x20, .sp=0xc3, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xd9b3, .value=0x50}, {.addr=0xd9b4, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xd9b3, .value=0x50, .type=IO_READ},
        {.addr=0xd9b4, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0318) {
    const struct CPU_State initial_cpu = {.pc=0x7e22, .a=0xe3, .x=0x4a, .y=0xfd, .sp=0x7d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x7e22, .value=0x50}, {.addr=0x7e23, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x7e4b, .a=0xe3, .x=0x4a, .y=0xfd, .sp=0x7d, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x7e22, .value=0x50}, {.addr=0x7e23, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x7e22, .value=0x50, .type=IO_READ},
        {.addr=0x7e23, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0319) {
    const struct CPU_State initial_cpu = {.pc=0x6c10, .a=0xd5, .x=0x34, .y=0x6e, .sp=0xdb, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6c10, .value=0x50}, {.addr=0x6c11, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x6c12, .a=0xd5, .x=0x34, .y=0x6e, .sp=0xdb, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x6c10, .value=0x50}, {.addr=0x6c11, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x6c10, .value=0x50, .type=IO_READ},
        {.addr=0x6c11, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_031A) {
    const struct CPU_State initial_cpu = {.pc=0xbd03, .a=0xa7, .x=0xf4, .y=0x5f, .sp=0x5f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xbd03, .value=0x50}, {.addr=0xbd04, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbd05, .a=0xa7, .x=0xf4, .y=0x5f, .sp=0x5f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbd03, .value=0x50}, {.addr=0xbd04, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbd03, .value=0x50, .type=IO_READ},
        {.addr=0xbd04, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_031B) {
    const struct CPU_State initial_cpu = {.pc=0x8db4, .a=0x19, .x=0x9c, .y=0x3a, .sp=0x4b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8db4, .value=0x50}, {.addr=0x8db5, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x8de2, .a=0x19, .x=0x9c, .y=0x3a, .sp=0x4b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8db4, .value=0x50}, {.addr=0x8db5, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8db4, .value=0x50, .type=IO_READ},
        {.addr=0x8db5, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_031C) {
    const struct CPU_State initial_cpu = {.pc=0x04f8, .a=0x97, .x=0xab, .y=0xbb, .sp=0x70, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x04f8, .value=0x50}, {.addr=0x04f9, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x047b, .a=0x97, .x=0xab, .y=0xbb, .sp=0x70, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x04f8, .value=0x50}, {.addr=0x04f9, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x04f8, .value=0x50, .type=IO_READ},
        {.addr=0x04f9, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_031D) {
    const struct CPU_State initial_cpu = {.pc=0x3372, .a=0x10, .x=0xe2, .y=0xdc, .sp=0xa0, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3372, .value=0x50}, {.addr=0x3373, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x3374, .a=0x10, .x=0xe2, .y=0xdc, .sp=0xa0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3372, .value=0x50}, {.addr=0x3373, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x3372, .value=0x50, .type=IO_READ},
        {.addr=0x3373, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_031E) {
    const struct CPU_State initial_cpu = {.pc=0xd03c, .a=0xa8, .x=0x60, .y=0xbb, .sp=0x64, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd03c, .value=0x50}, {.addr=0xd03d, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xd03e, .a=0xa8, .x=0x60, .y=0xbb, .sp=0x64, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd03c, .value=0x50}, {.addr=0xd03d, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xd03c, .value=0x50, .type=IO_READ},
        {.addr=0xd03d, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_031F) {
    const struct CPU_State initial_cpu = {.pc=0xf6ad, .a=0xfa, .x=0xf3, .y=0x5d, .sp=0xd3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ad, .value=0x50}, {.addr=0xf6ae, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xf6af, .a=0xfa, .x=0xf3, .y=0x5d, .sp=0xd3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf6ad, .value=0x50}, {.addr=0xf6ae, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xf6ad, .value=0x50, .type=IO_READ},
        {.addr=0xf6ae, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0320) {
    const struct CPU_State initial_cpu = {.pc=0xabf3, .a=0xa7, .x=0x28, .y=0x34, .sp=0x12, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xabf3, .value=0x50}, {.addr=0xabf4, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xabf5, .a=0xa7, .x=0x28, .y=0x34, .sp=0x12, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xabf3, .value=0x50}, {.addr=0xabf4, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xabf3, .value=0x50, .type=IO_READ},
        {.addr=0xabf4, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0321) {
    const struct CPU_State initial_cpu = {.pc=0x1d82, .a=0x6f, .x=0x63, .y=0xc6, .sp=0xe1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1d82, .value=0x50}, {.addr=0x1d83, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x1d84, .a=0x6f, .x=0x63, .y=0xc6, .sp=0xe1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1d82, .value=0x50}, {.addr=0x1d83, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x1d82, .value=0x50, .type=IO_READ},
        {.addr=0x1d83, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0322) {
    const struct CPU_State initial_cpu = {.pc=0x831a, .a=0x38, .x=0x6b, .y=0xe3, .sp=0xe4, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x831a, .value=0x50}, {.addr=0x831b, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x831c, .a=0x38, .x=0x6b, .y=0xe3, .sp=0xe4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x831a, .value=0x50}, {.addr=0x831b, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x831a, .value=0x50, .type=IO_READ},
        {.addr=0x831b, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0323) {
    const struct CPU_State initial_cpu = {.pc=0xfe0c, .a=0xd5, .x=0xe8, .y=0x54, .sp=0x0d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xfe0c, .value=0x50}, {.addr=0xfe0d, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xfe56, .a=0xd5, .x=0xe8, .y=0x54, .sp=0x0d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xfe0c, .value=0x50}, {.addr=0xfe0d, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xfe0c, .value=0x50, .type=IO_READ},
        {.addr=0xfe0d, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0324) {
    const struct CPU_State initial_cpu = {.pc=0x69cc, .a=0x2f, .x=0x89, .y=0xc1, .sp=0x36, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x69cc, .value=0x50}, {.addr=0x69cd, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x69ce, .a=0x2f, .x=0x89, .y=0xc1, .sp=0x36, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x69cc, .value=0x50}, {.addr=0x69cd, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x69cc, .value=0x50, .type=IO_READ},
        {.addr=0x69cd, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0325) {
    const struct CPU_State initial_cpu = {.pc=0x6b10, .a=0x3b, .x=0x86, .y=0x8b, .sp=0xc4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6b10, .value=0x50}, {.addr=0x6b11, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x6b12, .a=0x3b, .x=0x86, .y=0x8b, .sp=0xc4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6b10, .value=0x50}, {.addr=0x6b11, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x6b10, .value=0x50, .type=IO_READ},
        {.addr=0x6b11, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0326) {
    const struct CPU_State initial_cpu = {.pc=0x7f27, .a=0xc8, .x=0x71, .y=0xc4, .sp=0xb6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7f27, .value=0x50}, {.addr=0x7f28, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7f37, .a=0xc8, .x=0x71, .y=0xc4, .sp=0xb6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x7f27, .value=0x50}, {.addr=0x7f28, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7f27, .value=0x50, .type=IO_READ},
        {.addr=0x7f28, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0327) {
    const struct CPU_State initial_cpu = {.pc=0xa3aa, .a=0x59, .x=0x81, .y=0x69, .sp=0xc8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa3aa, .value=0x50}, {.addr=0xa3ab, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xa3ac, .a=0x59, .x=0x81, .y=0x69, .sp=0xc8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa3aa, .value=0x50}, {.addr=0xa3ab, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xa3aa, .value=0x50, .type=IO_READ},
        {.addr=0xa3ab, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0328) {
    const struct CPU_State initial_cpu = {.pc=0xaeea, .a=0x68, .x=0x75, .y=0x1c, .sp=0x7b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xaeea, .value=0x50}, {.addr=0xaeeb, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xaf66, .a=0x68, .x=0x75, .y=0x1c, .sp=0x7b, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xaeea, .value=0x50}, {.addr=0xaeeb, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xaeea, .value=0x50, .type=IO_READ},
        {.addr=0xaeeb, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0329) {
    const struct CPU_State initial_cpu = {.pc=0x1944, .a=0x8d, .x=0xe9, .y=0xbc, .sp=0x35, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1944, .value=0x50}, {.addr=0x1945, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x1946, .a=0x8d, .x=0xe9, .y=0xbc, .sp=0x35, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1944, .value=0x50}, {.addr=0x1945, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x1944, .value=0x50, .type=IO_READ},
        {.addr=0x1945, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4865, .a=0xd3, .x=0x87, .y=0x3c, .sp=0x41, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x4865, .value=0x50}, {.addr=0x4866, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x487d, .a=0xd3, .x=0x87, .y=0x3c, .sp=0x41, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x4865, .value=0x50}, {.addr=0x4866, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4865, .value=0x50, .type=IO_READ},
        {.addr=0x4866, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_032B) {
    const struct CPU_State initial_cpu = {.pc=0x2293, .a=0xc8, .x=0x6f, .y=0xe3, .sp=0x48, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x2293, .value=0x50}, {.addr=0x2294, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x2295, .a=0xc8, .x=0x6f, .y=0xe3, .sp=0x48, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x2293, .value=0x50}, {.addr=0x2294, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x2293, .value=0x50, .type=IO_READ},
        {.addr=0x2294, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_032C) {
    const struct CPU_State initial_cpu = {.pc=0x9e4b, .a=0x68, .x=0x8f, .y=0x9b, .sp=0xdf, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x9e4b, .value=0x50}, {.addr=0x9e4c, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x9ec7, .a=0x68, .x=0x8f, .y=0x9b, .sp=0xdf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9e4b, .value=0x50}, {.addr=0x9e4c, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x9e4b, .value=0x50, .type=IO_READ},
        {.addr=0x9e4c, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_032D) {
    const struct CPU_State initial_cpu = {.pc=0xe3e3, .a=0x3c, .x=0x2d, .y=0xb0, .sp=0xdd, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e3, .value=0x50}, {.addr=0xe3e4, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xe366, .a=0x3c, .x=0x2d, .y=0xb0, .sp=0xdd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe3e3, .value=0x50}, {.addr=0xe3e4, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xe3e3, .value=0x50, .type=IO_READ},
        {.addr=0xe3e4, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_032E) {
    const struct CPU_State initial_cpu = {.pc=0xe86a, .a=0x19, .x=0xdb, .y=0xf0, .sp=0x9f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe86a, .value=0x50}, {.addr=0xe86b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe80b, .a=0x19, .x=0xdb, .y=0xf0, .sp=0x9f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe86a, .value=0x50}, {.addr=0xe86b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe86a, .value=0x50, .type=IO_READ},
        {.addr=0xe86b, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_032F) {
    const struct CPU_State initial_cpu = {.pc=0x5e5a, .a=0xb4, .x=0xfd, .y=0x67, .sp=0x6e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5e5a, .value=0x50}, {.addr=0x5e5b, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x5eda, .a=0xb4, .x=0xfd, .y=0x67, .sp=0x6e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5e5a, .value=0x50}, {.addr=0x5e5b, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x5e5a, .value=0x50, .type=IO_READ},
        {.addr=0x5e5b, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0330) {
    const struct CPU_State initial_cpu = {.pc=0x6c3a, .a=0x6b, .x=0x05, .y=0x6d, .sp=0x4e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x6c3a, .value=0x50}, {.addr=0x6c3b, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x6cb7, .a=0x6b, .x=0x05, .y=0x6d, .sp=0x4e, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x6c3a, .value=0x50}, {.addr=0x6c3b, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x6c3a, .value=0x50, .type=IO_READ},
        {.addr=0x6c3b, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0331) {
    const struct CPU_State initial_cpu = {.pc=0x48b5, .a=0x06, .x=0x0c, .y=0x7a, .sp=0x4f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x48b5, .value=0x50}, {.addr=0x48b6, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x48a2, .a=0x06, .x=0x0c, .y=0x7a, .sp=0x4f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x48b5, .value=0x50}, {.addr=0x48b6, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x48b5, .value=0x50, .type=IO_READ},
        {.addr=0x48b6, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0332) {
    const struct CPU_State initial_cpu = {.pc=0xac3a, .a=0xed, .x=0x41, .y=0x58, .sp=0xea, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xac3a, .value=0x50}, {.addr=0xac3b, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xac9c, .a=0xed, .x=0x41, .y=0x58, .sp=0xea, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xac3a, .value=0x50}, {.addr=0xac3b, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xac3a, .value=0x50, .type=IO_READ},
        {.addr=0xac3b, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0333) {
    const struct CPU_State initial_cpu = {.pc=0x2d81, .a=0x7f, .x=0x0d, .y=0xee, .sp=0x42, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2d81, .value=0x50}, {.addr=0x2d82, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x2d83, .a=0x7f, .x=0x0d, .y=0xee, .sp=0x42, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x2d81, .value=0x50}, {.addr=0x2d82, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x2d81, .value=0x50, .type=IO_READ},
        {.addr=0x2d82, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0334) {
    const struct CPU_State initial_cpu = {.pc=0xcc94, .a=0x79, .x=0xb8, .y=0x69, .sp=0x92, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xcc94, .value=0x50}, {.addr=0xcc95, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xcc96, .a=0x79, .x=0xb8, .y=0x69, .sp=0x92, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xcc94, .value=0x50}, {.addr=0xcc95, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xcc94, .value=0x50, .type=IO_READ},
        {.addr=0xcc95, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0335) {
    const struct CPU_State initial_cpu = {.pc=0xdb71, .a=0x14, .x=0xa9, .y=0x7e, .sp=0x20, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xdb71, .value=0x50}, {.addr=0xdb72, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xdb73, .a=0x14, .x=0xa9, .y=0x7e, .sp=0x20, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xdb71, .value=0x50}, {.addr=0xdb72, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xdb71, .value=0x50, .type=IO_READ},
        {.addr=0xdb72, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0336) {
    const struct CPU_State initial_cpu = {.pc=0xa4b8, .a=0x36, .x=0x2c, .y=0xe4, .sp=0x0c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b8, .value=0x50}, {.addr=0xa4b9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa4ba, .a=0x36, .x=0x2c, .y=0xe4, .sp=0x0c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa4b8, .value=0x50}, {.addr=0xa4b9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa4b8, .value=0x50, .type=IO_READ},
        {.addr=0xa4b9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0337) {
    const struct CPU_State initial_cpu = {.pc=0xe6be, .a=0xf3, .x=0x00, .y=0x2b, .sp=0x17, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe6be, .value=0x50}, {.addr=0xe6bf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe6c0, .a=0xf3, .x=0x00, .y=0x2b, .sp=0x17, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xe6be, .value=0x50}, {.addr=0xe6bf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe6be, .value=0x50, .type=IO_READ},
        {.addr=0xe6bf, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0338) {
    const struct CPU_State initial_cpu = {.pc=0x9004, .a=0x1b, .x=0x90, .y=0xf7, .sp=0x54, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9004, .value=0x50}, {.addr=0x9005, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x9006, .a=0x1b, .x=0x90, .y=0xf7, .sp=0x54, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x9004, .value=0x50}, {.addr=0x9005, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x9004, .value=0x50, .type=IO_READ},
        {.addr=0x9005, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0339) {
    const struct CPU_State initial_cpu = {.pc=0xf606, .a=0xf7, .x=0x74, .y=0xda, .sp=0xa4, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf606, .value=0x50}, {.addr=0xf607, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xf608, .a=0xf7, .x=0x74, .y=0xda, .sp=0xa4, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xf606, .value=0x50}, {.addr=0xf607, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xf606, .value=0x50, .type=IO_READ},
        {.addr=0xf607, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_033A) {
    const struct CPU_State initial_cpu = {.pc=0x055b, .a=0x86, .x=0x20, .y=0xaa, .sp=0x55, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x055b, .value=0x50}, {.addr=0x055c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x057d, .a=0x86, .x=0x20, .y=0xaa, .sp=0x55, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x055b, .value=0x50}, {.addr=0x055c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x055b, .value=0x50, .type=IO_READ},
        {.addr=0x055c, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_033B) {
    const struct CPU_State initial_cpu = {.pc=0x0e63, .a=0x7a, .x=0x50, .y=0x05, .sp=0xa8, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0e63, .value=0x50}, {.addr=0x0e64, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x0eb5, .a=0x7a, .x=0x50, .y=0x05, .sp=0xa8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0e63, .value=0x50}, {.addr=0x0e64, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x0e63, .value=0x50, .type=IO_READ},
        {.addr=0x0e64, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1d92, .a=0xb6, .x=0xeb, .y=0x72, .sp=0x6b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d92, .value=0x50}, {.addr=0x1d93, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x1d95, .a=0xb6, .x=0xeb, .y=0x72, .sp=0x6b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x1d92, .value=0x50}, {.addr=0x1d93, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x1d92, .value=0x50, .type=IO_READ},
        {.addr=0x1d93, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_033D) {
    const struct CPU_State initial_cpu = {.pc=0xad03, .a=0x2c, .x=0xf2, .y=0xa2, .sp=0x55, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xad03, .value=0x50}, {.addr=0xad04, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xad05, .a=0x2c, .x=0xf2, .y=0xa2, .sp=0x55, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xad03, .value=0x50}, {.addr=0xad04, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xad03, .value=0x50, .type=IO_READ},
        {.addr=0xad04, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_033E) {
    const struct CPU_State initial_cpu = {.pc=0x62fb, .a=0x26, .x=0xee, .y=0x94, .sp=0x52, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x62fb, .value=0x50}, {.addr=0x62fc, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x633b, .a=0x26, .x=0xee, .y=0x94, .sp=0x52, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x62fb, .value=0x50}, {.addr=0x62fc, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x62fb, .value=0x50, .type=IO_READ},
        {.addr=0x62fc, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_033F) {
    const struct CPU_State initial_cpu = {.pc=0xdc4a, .a=0x4c, .x=0xf4, .y=0xe6, .sp=0x72, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xdc4a, .value=0x50}, {.addr=0xdc4b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xdc3e, .a=0x4c, .x=0xf4, .y=0xe6, .sp=0x72, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xdc4a, .value=0x50}, {.addr=0xdc4b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xdc4a, .value=0x50, .type=IO_READ},
        {.addr=0xdc4b, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0340) {
    const struct CPU_State initial_cpu = {.pc=0x3e33, .a=0xf6, .x=0x46, .y=0x3b, .sp=0xbe, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3e33, .value=0x50}, {.addr=0x3e34, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3e75, .a=0xf6, .x=0x46, .y=0x3b, .sp=0xbe, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3e33, .value=0x50}, {.addr=0x3e34, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3e33, .value=0x50, .type=IO_READ},
        {.addr=0x3e34, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0341) {
    const struct CPU_State initial_cpu = {.pc=0xfc39, .a=0x57, .x=0xa3, .y=0xde, .sp=0x18, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xfc39, .value=0x50}, {.addr=0xfc3a, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xfc3b, .a=0x57, .x=0xa3, .y=0xde, .sp=0x18, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xfc39, .value=0x50}, {.addr=0xfc3a, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xfc39, .value=0x50, .type=IO_READ},
        {.addr=0xfc3a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0342) {
    const struct CPU_State initial_cpu = {.pc=0x162d, .a=0x5d, .x=0x43, .y=0xa5, .sp=0x3f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x162d, .value=0x50}, {.addr=0x162e, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x167d, .a=0x5d, .x=0x43, .y=0xa5, .sp=0x3f, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x162d, .value=0x50}, {.addr=0x162e, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x162d, .value=0x50, .type=IO_READ},
        {.addr=0x162e, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0343) {
    const struct CPU_State initial_cpu = {.pc=0x7c31, .a=0x61, .x=0xa2, .y=0x34, .sp=0x6d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7c31, .value=0x50}, {.addr=0x7c32, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7c33, .a=0x61, .x=0xa2, .y=0x34, .sp=0x6d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7c31, .value=0x50}, {.addr=0x7c32, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7c31, .value=0x50, .type=IO_READ},
        {.addr=0x7c32, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0344) {
    const struct CPU_State initial_cpu = {.pc=0xf13a, .a=0x69, .x=0x80, .y=0x4a, .sp=0x3f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf13a, .value=0x50}, {.addr=0xf13b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf13c, .a=0x69, .x=0x80, .y=0x4a, .sp=0x3f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf13a, .value=0x50}, {.addr=0xf13b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf13a, .value=0x50, .type=IO_READ},
        {.addr=0xf13b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0345) {
    const struct CPU_State initial_cpu = {.pc=0x0a6f, .a=0x7d, .x=0x18, .y=0x26, .sp=0x4f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0a6f, .value=0x50}, {.addr=0x0a70, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x0a71, .a=0x7d, .x=0x18, .y=0x26, .sp=0x4f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0a6f, .value=0x50}, {.addr=0x0a70, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x0a6f, .value=0x50, .type=IO_READ},
        {.addr=0x0a70, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0346) {
    const struct CPU_State initial_cpu = {.pc=0x73ea, .a=0x0b, .x=0xf0, .y=0x45, .sp=0xca, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x73ea, .value=0x50}, {.addr=0x73eb, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x738a, .a=0x0b, .x=0xf0, .y=0x45, .sp=0xca, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x73ea, .value=0x50}, {.addr=0x73eb, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x73ea, .value=0x50, .type=IO_READ},
        {.addr=0x73eb, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0347) {
    const struct CPU_State initial_cpu = {.pc=0x7d80, .a=0x20, .x=0xff, .y=0x3a, .sp=0x8e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x7d80, .value=0x50}, {.addr=0x7d81, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7d82, .a=0x20, .x=0xff, .y=0x3a, .sp=0x8e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7d80, .value=0x50}, {.addr=0x7d81, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x7d80, .value=0x50, .type=IO_READ},
        {.addr=0x7d81, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0348) {
    const struct CPU_State initial_cpu = {.pc=0xdd1f, .a=0xcd, .x=0x75, .y=0x03, .sp=0xf3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xdd1f, .value=0x50}, {.addr=0xdd20, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xdd21, .a=0xcd, .x=0x75, .y=0x03, .sp=0xf3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xdd1f, .value=0x50}, {.addr=0xdd20, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xdd1f, .value=0x50, .type=IO_READ},
        {.addr=0xdd20, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0349) {
    const struct CPU_State initial_cpu = {.pc=0x7d94, .a=0xe2, .x=0x43, .y=0xcf, .sp=0x76, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7d94, .value=0x50}, {.addr=0x7d95, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x7dde, .a=0xe2, .x=0x43, .y=0xcf, .sp=0x76, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x7d94, .value=0x50}, {.addr=0x7d95, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x7d94, .value=0x50, .type=IO_READ},
        {.addr=0x7d95, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_034A) {
    const struct CPU_State initial_cpu = {.pc=0x2518, .a=0x1c, .x=0x75, .y=0x18, .sp=0xfa, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2518, .value=0x50}, {.addr=0x2519, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2596, .a=0x1c, .x=0x75, .y=0x18, .sp=0xfa, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x2518, .value=0x50}, {.addr=0x2519, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2518, .value=0x50, .type=IO_READ},
        {.addr=0x2519, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_034B) {
    const struct CPU_State initial_cpu = {.pc=0x5444, .a=0xc1, .x=0xdd, .y=0x4f, .sp=0xe4, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5444, .value=0x50}, {.addr=0x5445, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x5446, .a=0xc1, .x=0xdd, .y=0x4f, .sp=0xe4, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5444, .value=0x50}, {.addr=0x5445, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x5444, .value=0x50, .type=IO_READ},
        {.addr=0x5445, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_034C) {
    const struct CPU_State initial_cpu = {.pc=0x6645, .a=0x7c, .x=0x8d, .y=0x0a, .sp=0x32, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6645, .value=0x50}, {.addr=0x6646, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x6647, .a=0x7c, .x=0x8d, .y=0x0a, .sp=0x32, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6645, .value=0x50}, {.addr=0x6646, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x6645, .value=0x50, .type=IO_READ},
        {.addr=0x6646, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_034D) {
    const struct CPU_State initial_cpu = {.pc=0x0ab2, .a=0x08, .x=0x4f, .y=0x6a, .sp=0x58, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0ab2, .value=0x50}, {.addr=0x0ab3, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0b15, .a=0x08, .x=0x4f, .y=0x6a, .sp=0x58, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0ab2, .value=0x50}, {.addr=0x0ab3, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0ab2, .value=0x50, .type=IO_READ},
        {.addr=0x0ab3, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_034E) {
    const struct CPU_State initial_cpu = {.pc=0x0b05, .a=0x88, .x=0xa0, .y=0xfd, .sp=0x72, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b05, .value=0x50}, {.addr=0x0b06, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x0b07, .a=0x88, .x=0xa0, .y=0xfd, .sp=0x72, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0b05, .value=0x50}, {.addr=0x0b06, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x0b05, .value=0x50, .type=IO_READ},
        {.addr=0x0b06, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_034F) {
    const struct CPU_State initial_cpu = {.pc=0xaf9a, .a=0x6c, .x=0x56, .y=0xe0, .sp=0xdb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xaf9a, .value=0x50}, {.addr=0xaf9b, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xaf9c, .a=0x6c, .x=0x56, .y=0xe0, .sp=0xdb, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xaf9a, .value=0x50}, {.addr=0xaf9b, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xaf9a, .value=0x50, .type=IO_READ},
        {.addr=0xaf9b, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0350) {
    const struct CPU_State initial_cpu = {.pc=0x44cc, .a=0x69, .x=0xaa, .y=0x94, .sp=0x81, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x44cc, .value=0x50}, {.addr=0x44cd, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x448f, .a=0x69, .x=0xaa, .y=0x94, .sp=0x81, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x44cc, .value=0x50}, {.addr=0x44cd, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x44cc, .value=0x50, .type=IO_READ},
        {.addr=0x44cd, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5ec0, .a=0x79, .x=0xa6, .y=0x34, .sp=0x76, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec0, .value=0x50}, {.addr=0x5ec1, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x5ec2, .a=0x79, .x=0xa6, .y=0x34, .sp=0x76, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x5ec0, .value=0x50}, {.addr=0x5ec1, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x5ec0, .value=0x50, .type=IO_READ},
        {.addr=0x5ec1, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0352) {
    const struct CPU_State initial_cpu = {.pc=0x8299, .a=0x98, .x=0x6c, .y=0x0c, .sp=0x33, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x8299, .value=0x50}, {.addr=0x829a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x829b, .a=0x98, .x=0x6c, .y=0x0c, .sp=0x33, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x8299, .value=0x50}, {.addr=0x829a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8299, .value=0x50, .type=IO_READ},
        {.addr=0x829a, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0353) {
    const struct CPU_State initial_cpu = {.pc=0xe5f9, .a=0x78, .x=0xb2, .y=0x16, .sp=0x90, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f9, .value=0x50}, {.addr=0xe5fa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe5fb, .a=0x78, .x=0xb2, .y=0x16, .sp=0x90, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xe5f9, .value=0x50}, {.addr=0xe5fa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe5f9, .value=0x50, .type=IO_READ},
        {.addr=0xe5fa, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0354) {
    const struct CPU_State initial_cpu = {.pc=0xc001, .a=0xe7, .x=0x9e, .y=0xcf, .sp=0x9e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc001, .value=0x50}, {.addr=0xc002, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xc003, .a=0xe7, .x=0x9e, .y=0xcf, .sp=0x9e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc001, .value=0x50}, {.addr=0xc002, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xc001, .value=0x50, .type=IO_READ},
        {.addr=0xc002, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0355) {
    const struct CPU_State initial_cpu = {.pc=0xfe12, .a=0xef, .x=0x32, .y=0xd0, .sp=0xa5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xfe12, .value=0x50}, {.addr=0xfe13, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xfe14, .a=0xef, .x=0x32, .y=0xd0, .sp=0xa5, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xfe12, .value=0x50}, {.addr=0xfe13, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xfe12, .value=0x50, .type=IO_READ},
        {.addr=0xfe13, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0356) {
    const struct CPU_State initial_cpu = {.pc=0xe524, .a=0xce, .x=0xd5, .y=0x93, .sp=0xaf, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe524, .value=0x50}, {.addr=0xe525, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xe59d, .a=0xce, .x=0xd5, .y=0x93, .sp=0xaf, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe524, .value=0x50}, {.addr=0xe525, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xe524, .value=0x50, .type=IO_READ},
        {.addr=0xe525, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6218, .a=0x9e, .x=0xee, .y=0xba, .sp=0xb4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6218, .value=0x50}, {.addr=0x6219, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x6245, .a=0x9e, .x=0xee, .y=0xba, .sp=0xb4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6218, .value=0x50}, {.addr=0x6219, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6218, .value=0x50, .type=IO_READ},
        {.addr=0x6219, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0358) {
    const struct CPU_State initial_cpu = {.pc=0x6223, .a=0x02, .x=0x52, .y=0x99, .sp=0x30, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6223, .value=0x50}, {.addr=0x6224, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x6225, .a=0x02, .x=0x52, .y=0x99, .sp=0x30, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6223, .value=0x50}, {.addr=0x6224, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x6223, .value=0x50, .type=IO_READ},
        {.addr=0x6224, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3476, .a=0x84, .x=0xdd, .y=0xa0, .sp=0xe8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x3476, .value=0x50}, {.addr=0x3477, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x3478, .a=0x84, .x=0xdd, .y=0xa0, .sp=0xe8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3476, .value=0x50}, {.addr=0x3477, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x3476, .value=0x50, .type=IO_READ},
        {.addr=0x3477, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_035A) {
    const struct CPU_State initial_cpu = {.pc=0x0498, .a=0x1c, .x=0x2b, .y=0x21, .sp=0x33, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0498, .value=0x50}, {.addr=0x0499, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x045b, .a=0x1c, .x=0x2b, .y=0x21, .sp=0x33, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0498, .value=0x50}, {.addr=0x0499, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x0498, .value=0x50, .type=IO_READ},
        {.addr=0x0499, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_035B) {
    const struct CPU_State initial_cpu = {.pc=0xeedc, .a=0x7c, .x=0x04, .y=0xd9, .sp=0xcd, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xeedc, .value=0x50}, {.addr=0xeedd, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xeede, .a=0x7c, .x=0x04, .y=0xd9, .sp=0xcd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xeedc, .value=0x50}, {.addr=0xeedd, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xeedc, .value=0x50, .type=IO_READ},
        {.addr=0xeedd, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_035C) {
    const struct CPU_State initial_cpu = {.pc=0xf550, .a=0xdd, .x=0x61, .y=0x29, .sp=0xf1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf550, .value=0x50}, {.addr=0xf551, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xf552, .a=0xdd, .x=0x61, .y=0x29, .sp=0xf1, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xf550, .value=0x50}, {.addr=0xf551, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xf550, .value=0x50, .type=IO_READ},
        {.addr=0xf551, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_035D) {
    const struct CPU_State initial_cpu = {.pc=0x776f, .a=0xf1, .x=0xc4, .y=0x51, .sp=0x93, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x776f, .value=0x50}, {.addr=0x7770, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x76f8, .a=0xf1, .x=0xc4, .y=0x51, .sp=0x93, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x776f, .value=0x50}, {.addr=0x7770, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x776f, .value=0x50, .type=IO_READ},
        {.addr=0x7770, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_035E) {
    const struct CPU_State initial_cpu = {.pc=0xfcc1, .a=0x40, .x=0xf5, .y=0xac, .sp=0x72, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc1, .value=0x50}, {.addr=0xfcc2, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xfcc3, .a=0x40, .x=0xf5, .y=0xac, .sp=0x72, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xfcc1, .value=0x50}, {.addr=0xfcc2, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xfcc1, .value=0x50, .type=IO_READ},
        {.addr=0xfcc2, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_035F) {
    const struct CPU_State initial_cpu = {.pc=0xddc7, .a=0x03, .x=0xea, .y=0xed, .sp=0xe0, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xddc7, .value=0x50}, {.addr=0xddc8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xddc9, .a=0x03, .x=0xea, .y=0xed, .sp=0xe0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xddc7, .value=0x50}, {.addr=0xddc8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xddc7, .value=0x50, .type=IO_READ},
        {.addr=0xddc8, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0360) {
    const struct CPU_State initial_cpu = {.pc=0x3ed3, .a=0xac, .x=0xf7, .y=0xeb, .sp=0x64, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed3, .value=0x50}, {.addr=0x3ed4, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x3f23, .a=0xac, .x=0xf7, .y=0xeb, .sp=0x64, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3ed3, .value=0x50}, {.addr=0x3ed4, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x3ed3, .value=0x50, .type=IO_READ},
        {.addr=0x3ed4, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4d77, .a=0x88, .x=0x73, .y=0x82, .sp=0x9f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d77, .value=0x50}, {.addr=0x4d78, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x4d60, .a=0x88, .x=0x73, .y=0x82, .sp=0x9f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4d77, .value=0x50}, {.addr=0x4d78, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x4d77, .value=0x50, .type=IO_READ},
        {.addr=0x4d78, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0362) {
    const struct CPU_State initial_cpu = {.pc=0x84b4, .a=0xc7, .x=0x2a, .y=0x6e, .sp=0x71, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x84b4, .value=0x50}, {.addr=0x84b5, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x8479, .a=0xc7, .x=0x2a, .y=0x6e, .sp=0x71, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x84b4, .value=0x50}, {.addr=0x84b5, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x84b4, .value=0x50, .type=IO_READ},
        {.addr=0x84b5, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0363) {
    const struct CPU_State initial_cpu = {.pc=0x24d8, .a=0x48, .x=0x35, .y=0x0b, .sp=0xf4, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x24d8, .value=0x50}, {.addr=0x24d9, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x24c4, .a=0x48, .x=0x35, .y=0x0b, .sp=0xf4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x24d8, .value=0x50}, {.addr=0x24d9, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x24d8, .value=0x50, .type=IO_READ},
        {.addr=0x24d9, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0364) {
    const struct CPU_State initial_cpu = {.pc=0x0571, .a=0x8d, .x=0x38, .y=0x01, .sp=0xd7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0571, .value=0x50}, {.addr=0x0572, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x051e, .a=0x8d, .x=0x38, .y=0x01, .sp=0xd7, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0571, .value=0x50}, {.addr=0x0572, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x0571, .value=0x50, .type=IO_READ},
        {.addr=0x0572, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0365) {
    const struct CPU_State initial_cpu = {.pc=0x0da5, .a=0xe9, .x=0x9f, .y=0x5b, .sp=0x2b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0da5, .value=0x50}, {.addr=0x0da6, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x0da7, .a=0xe9, .x=0x9f, .y=0x5b, .sp=0x2b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0da5, .value=0x50}, {.addr=0x0da6, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x0da5, .value=0x50, .type=IO_READ},
        {.addr=0x0da6, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0366) {
    const struct CPU_State initial_cpu = {.pc=0xb47f, .a=0x73, .x=0xb4, .y=0xca, .sp=0x71, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb47f, .value=0x50}, {.addr=0xb480, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb446, .a=0x73, .x=0xb4, .y=0xca, .sp=0x71, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xb47f, .value=0x50}, {.addr=0xb480, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb47f, .value=0x50, .type=IO_READ},
        {.addr=0xb480, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0367) {
    const struct CPU_State initial_cpu = {.pc=0x0091, .a=0x80, .x=0x8b, .y=0xe3, .sp=0xec, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x50}, {.addr=0x0092, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x0093, .a=0x80, .x=0x8b, .y=0xe3, .sp=0xec, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x50}, {.addr=0x0092, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x0091, .value=0x50, .type=IO_READ},
        {.addr=0x0092, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0368) {
    const struct CPU_State initial_cpu = {.pc=0x3441, .a=0x4d, .x=0x4b, .y=0xcf, .sp=0x8d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3441, .value=0x50}, {.addr=0x3442, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x3443, .a=0x4d, .x=0x4b, .y=0xcf, .sp=0x8d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3441, .value=0x50}, {.addr=0x3442, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x3441, .value=0x50, .type=IO_READ},
        {.addr=0x3442, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0369) {
    const struct CPU_State initial_cpu = {.pc=0xb2a1, .a=0xbc, .x=0x8c, .y=0x8c, .sp=0x95, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a1, .value=0x50}, {.addr=0xb2a2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb2a3, .a=0xbc, .x=0x8c, .y=0x8c, .sp=0x95, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xb2a1, .value=0x50}, {.addr=0xb2a2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb2a1, .value=0x50, .type=IO_READ},
        {.addr=0xb2a2, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_036A) {
    const struct CPU_State initial_cpu = {.pc=0x65b8, .a=0xcc, .x=0xe3, .y=0xd3, .sp=0x00, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x65b8, .value=0x50}, {.addr=0x65b9, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x65ba, .a=0xcc, .x=0xe3, .y=0xd3, .sp=0x00, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x65b8, .value=0x50}, {.addr=0x65b9, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x65b8, .value=0x50, .type=IO_READ},
        {.addr=0x65b9, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_036B) {
    const struct CPU_State initial_cpu = {.pc=0x8604, .a=0x6b, .x=0x9f, .y=0x46, .sp=0xa7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x8604, .value=0x50}, {.addr=0x8605, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8653, .a=0x6b, .x=0x9f, .y=0x46, .sp=0xa7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8604, .value=0x50}, {.addr=0x8605, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8604, .value=0x50, .type=IO_READ},
        {.addr=0x8605, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_036C) {
    const struct CPU_State initial_cpu = {.pc=0x28e3, .a=0x2b, .x=0x1d, .y=0x82, .sp=0x12, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x28e3, .value=0x50}, {.addr=0x28e4, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x28e5, .a=0x2b, .x=0x1d, .y=0x82, .sp=0x12, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x28e3, .value=0x50}, {.addr=0x28e4, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x28e3, .value=0x50, .type=IO_READ},
        {.addr=0x28e4, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_036D) {
    const struct CPU_State initial_cpu = {.pc=0xc385, .a=0xeb, .x=0x7f, .y=0xed, .sp=0xbc, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc385, .value=0x50}, {.addr=0xc386, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xc387, .a=0xeb, .x=0x7f, .y=0xed, .sp=0xbc, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xc385, .value=0x50}, {.addr=0xc386, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xc385, .value=0x50, .type=IO_READ},
        {.addr=0xc386, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1cba, .a=0xe6, .x=0xd5, .y=0x11, .sp=0xb6, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1cba, .value=0x50}, {.addr=0x1cbb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1cdc, .a=0xe6, .x=0xd5, .y=0x11, .sp=0xb6, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x1cba, .value=0x50}, {.addr=0x1cbb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1cba, .value=0x50, .type=IO_READ},
        {.addr=0x1cbb, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_036F) {
    const struct CPU_State initial_cpu = {.pc=0xcca2, .a=0x7b, .x=0x3b, .y=0x4c, .sp=0x31, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xcca2, .value=0x50}, {.addr=0xcca3, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xcca4, .a=0x7b, .x=0x3b, .y=0x4c, .sp=0x31, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xcca2, .value=0x50}, {.addr=0xcca3, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xcca2, .value=0x50, .type=IO_READ},
        {.addr=0xcca3, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0370) {
    const struct CPU_State initial_cpu = {.pc=0xff3a, .a=0x05, .x=0x60, .y=0xc4, .sp=0x5c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xff3a, .value=0x50}, {.addr=0xff3b, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xff7b, .a=0x05, .x=0x60, .y=0xc4, .sp=0x5c, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xff3a, .value=0x50}, {.addr=0xff3b, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xff3a, .value=0x50, .type=IO_READ},
        {.addr=0xff3b, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0371) {
    const struct CPU_State initial_cpu = {.pc=0xe06c, .a=0x62, .x=0xbb, .y=0xe6, .sp=0xf4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe06c, .value=0x50}, {.addr=0xe06d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe06e, .a=0x62, .x=0xbb, .y=0xe6, .sp=0xf4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe06c, .value=0x50}, {.addr=0xe06d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe06c, .value=0x50, .type=IO_READ},
        {.addr=0xe06d, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0372) {
    const struct CPU_State initial_cpu = {.pc=0x4251, .a=0xaa, .x=0x66, .y=0xaf, .sp=0x35, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4251, .value=0x50}, {.addr=0x4252, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x41db, .a=0xaa, .x=0x66, .y=0xaf, .sp=0x35, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x4251, .value=0x50}, {.addr=0x4252, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x4251, .value=0x50, .type=IO_READ},
        {.addr=0x4252, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0373) {
    const struct CPU_State initial_cpu = {.pc=0x6e57, .a=0x17, .x=0xff, .y=0x8f, .sp=0x1f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6e57, .value=0x50}, {.addr=0x6e58, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x6e59, .a=0x17, .x=0xff, .y=0x8f, .sp=0x1f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6e57, .value=0x50}, {.addr=0x6e58, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x6e57, .value=0x50, .type=IO_READ},
        {.addr=0x6e58, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0374) {
    const struct CPU_State initial_cpu = {.pc=0xa014, .a=0x14, .x=0xe4, .y=0xd9, .sp=0xd1, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xa014, .value=0x50}, {.addr=0xa015, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xa016, .a=0x14, .x=0xe4, .y=0xd9, .sp=0xd1, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xa014, .value=0x50}, {.addr=0xa015, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xa014, .value=0x50, .type=IO_READ},
        {.addr=0xa015, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0375) {
    const struct CPU_State initial_cpu = {.pc=0x0af6, .a=0xcd, .x=0xc8, .y=0x22, .sp=0x81, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0af6, .value=0x50}, {.addr=0x0af7, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x0b46, .a=0xcd, .x=0xc8, .y=0x22, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0af6, .value=0x50}, {.addr=0x0af7, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x0af6, .value=0x50, .type=IO_READ},
        {.addr=0x0af7, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0376) {
    const struct CPU_State initial_cpu = {.pc=0x0355, .a=0x7a, .x=0x9c, .y=0x6e, .sp=0xcc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0355, .value=0x50}, {.addr=0x0356, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x02d8, .a=0x7a, .x=0x9c, .y=0x6e, .sp=0xcc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0355, .value=0x50}, {.addr=0x0356, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x0355, .value=0x50, .type=IO_READ},
        {.addr=0x0356, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0377) {
    const struct CPU_State initial_cpu = {.pc=0xe949, .a=0x17, .x=0x1c, .y=0xe9, .sp=0x98, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe949, .value=0x50}, {.addr=0xe94a, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xe94b, .a=0x17, .x=0x1c, .y=0xe9, .sp=0x98, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xe949, .value=0x50}, {.addr=0xe94a, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xe949, .value=0x50, .type=IO_READ},
        {.addr=0xe94a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0378) {
    const struct CPU_State initial_cpu = {.pc=0xe3bb, .a=0x66, .x=0x21, .y=0x50, .sp=0x81, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xe3bb, .value=0x50}, {.addr=0xe3bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe3bd, .a=0x66, .x=0x21, .y=0x50, .sp=0x81, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xe3bb, .value=0x50}, {.addr=0xe3bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe3bb, .value=0x50, .type=IO_READ},
        {.addr=0xe3bc, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0379) {
    const struct CPU_State initial_cpu = {.pc=0x6fb4, .a=0x84, .x=0x5d, .y=0x3f, .sp=0x37, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb4, .value=0x50}, {.addr=0x6fb5, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x6f8a, .a=0x84, .x=0x5d, .y=0x3f, .sp=0x37, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x6fb4, .value=0x50}, {.addr=0x6fb5, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x6fb4, .value=0x50, .type=IO_READ},
        {.addr=0x6fb5, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_037A) {
    const struct CPU_State initial_cpu = {.pc=0x7142, .a=0x10, .x=0x7e, .y=0x8a, .sp=0xe8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x7142, .value=0x50}, {.addr=0x7143, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x7144, .a=0x10, .x=0x7e, .y=0x8a, .sp=0xe8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7142, .value=0x50}, {.addr=0x7143, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x7142, .value=0x50, .type=IO_READ},
        {.addr=0x7143, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_037B) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0x00, .x=0xf5, .y=0x8a, .sp=0x1e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0x50}, {.addr=0x0747, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x0748, .a=0x00, .x=0xf5, .y=0x8a, .sp=0x1e, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0x50}, {.addr=0x0747, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x50, .type=IO_READ},
        {.addr=0x0747, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_037C) {
    const struct CPU_State initial_cpu = {.pc=0x6b4c, .a=0x5e, .x=0xaf, .y=0x26, .sp=0x51, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6b4c, .value=0x50}, {.addr=0x6b4d, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x6b4e, .a=0x5e, .x=0xaf, .y=0x26, .sp=0x51, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6b4c, .value=0x50}, {.addr=0x6b4d, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x6b4c, .value=0x50, .type=IO_READ},
        {.addr=0x6b4d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_037D) {
    const struct CPU_State initial_cpu = {.pc=0x156e, .a=0xbb, .x=0x2c, .y=0xf4, .sp=0x49, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x156e, .value=0x50}, {.addr=0x156f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1570, .a=0xbb, .x=0x2c, .y=0xf4, .sp=0x49, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x156e, .value=0x50}, {.addr=0x156f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x156e, .value=0x50, .type=IO_READ},
        {.addr=0x156f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_037E) {
    const struct CPU_State initial_cpu = {.pc=0xf647, .a=0x40, .x=0x63, .y=0x88, .sp=0x97, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf647, .value=0x50}, {.addr=0xf648, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf649, .a=0x40, .x=0x63, .y=0x88, .sp=0x97, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xf647, .value=0x50}, {.addr=0xf648, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf647, .value=0x50, .type=IO_READ},
        {.addr=0xf648, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_037F) {
    const struct CPU_State initial_cpu = {.pc=0x1e53, .a=0x3d, .x=0xbf, .y=0xbe, .sp=0xe2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x1e53, .value=0x50}, {.addr=0x1e54, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1e40, .a=0x3d, .x=0xbf, .y=0xbe, .sp=0xe2, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x1e53, .value=0x50}, {.addr=0x1e54, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1e53, .value=0x50, .type=IO_READ},
        {.addr=0x1e54, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3bb6, .a=0x90, .x=0xaf, .y=0xa4, .sp=0xd9, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb6, .value=0x50}, {.addr=0x3bb7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3b98, .a=0x90, .x=0xaf, .y=0xa4, .sp=0xd9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3bb6, .value=0x50}, {.addr=0x3bb7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3bb6, .value=0x50, .type=IO_READ},
        {.addr=0x3bb7, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0381) {
    const struct CPU_State initial_cpu = {.pc=0x7f91, .a=0x80, .x=0xb3, .y=0x23, .sp=0xb4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7f91, .value=0x50}, {.addr=0x7f92, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x7f1c, .a=0x80, .x=0xb3, .y=0x23, .sp=0xb4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7f91, .value=0x50}, {.addr=0x7f92, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x7f91, .value=0x50, .type=IO_READ},
        {.addr=0x7f92, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0382) {
    const struct CPU_State initial_cpu = {.pc=0x18b0, .a=0xb8, .x=0x9a, .y=0xa5, .sp=0x90, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x18b0, .value=0x50}, {.addr=0x18b1, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x18b2, .a=0xb8, .x=0x9a, .y=0xa5, .sp=0x90, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x18b0, .value=0x50}, {.addr=0x18b1, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x18b0, .value=0x50, .type=IO_READ},
        {.addr=0x18b1, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0383) {
    const struct CPU_State initial_cpu = {.pc=0x515a, .a=0x4f, .x=0x68, .y=0x59, .sp=0x99, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x515a, .value=0x50}, {.addr=0x515b, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x51d5, .a=0x4f, .x=0x68, .y=0x59, .sp=0x99, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x515a, .value=0x50}, {.addr=0x515b, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x515a, .value=0x50, .type=IO_READ},
        {.addr=0x515b, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0384) {
    const struct CPU_State initial_cpu = {.pc=0x909e, .a=0x4c, .x=0xad, .y=0xf1, .sp=0x30, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x909e, .value=0x50}, {.addr=0x909f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x90ad, .a=0x4c, .x=0xad, .y=0xf1, .sp=0x30, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x909e, .value=0x50}, {.addr=0x909f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x909e, .value=0x50, .type=IO_READ},
        {.addr=0x909f, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0385) {
    const struct CPU_State initial_cpu = {.pc=0x0f2d, .a=0x54, .x=0x14, .y=0xf0, .sp=0xb7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0f2d, .value=0x50}, {.addr=0x0f2e, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0f2f, .a=0x54, .x=0x14, .y=0xf0, .sp=0xb7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0f2d, .value=0x50}, {.addr=0x0f2e, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0f2d, .value=0x50, .type=IO_READ},
        {.addr=0x0f2e, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0386) {
    const struct CPU_State initial_cpu = {.pc=0x6401, .a=0xa1, .x=0xf5, .y=0xf0, .sp=0x73, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6401, .value=0x50}, {.addr=0x6402, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x63ff, .a=0xa1, .x=0xf5, .y=0xf0, .sp=0x73, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6401, .value=0x50}, {.addr=0x6402, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6401, .value=0x50, .type=IO_READ},
        {.addr=0x6402, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0387) {
    const struct CPU_State initial_cpu = {.pc=0xb614, .a=0x56, .x=0xf4, .y=0xa9, .sp=0xe5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb614, .value=0x50}, {.addr=0xb615, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb616, .a=0x56, .x=0xf4, .y=0xa9, .sp=0xe5, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xb614, .value=0x50}, {.addr=0xb615, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb614, .value=0x50, .type=IO_READ},
        {.addr=0xb615, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0388) {
    const struct CPU_State initial_cpu = {.pc=0x086a, .a=0xaf, .x=0xfe, .y=0xea, .sp=0x61, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x086a, .value=0x50}, {.addr=0x086b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x084f, .a=0xaf, .x=0xfe, .y=0xea, .sp=0x61, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x086a, .value=0x50}, {.addr=0x086b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x086a, .value=0x50, .type=IO_READ},
        {.addr=0x086b, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0389) {
    const struct CPU_State initial_cpu = {.pc=0x2b88, .a=0x7f, .x=0x0b, .y=0x10, .sp=0xe3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x2b88, .value=0x50}, {.addr=0x2b89, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2bea, .a=0x7f, .x=0x0b, .y=0x10, .sp=0xe3, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x2b88, .value=0x50}, {.addr=0x2b89, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2b88, .value=0x50, .type=IO_READ},
        {.addr=0x2b89, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_038A) {
    const struct CPU_State initial_cpu = {.pc=0x69ed, .a=0xfe, .x=0xd9, .y=0x53, .sp=0x40, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x69ed, .value=0x50}, {.addr=0x69ee, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x6a01, .a=0xfe, .x=0xd9, .y=0x53, .sp=0x40, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x69ed, .value=0x50}, {.addr=0x69ee, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x69ed, .value=0x50, .type=IO_READ},
        {.addr=0x69ee, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_038B) {
    const struct CPU_State initial_cpu = {.pc=0x1f02, .a=0x21, .x=0x0f, .y=0x7c, .sp=0x13, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1f02, .value=0x50}, {.addr=0x1f03, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1f04, .a=0x21, .x=0x0f, .y=0x7c, .sp=0x13, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1f02, .value=0x50}, {.addr=0x1f03, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1f02, .value=0x50, .type=IO_READ},
        {.addr=0x1f03, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_038C) {
    const struct CPU_State initial_cpu = {.pc=0xc3cb, .a=0xa2, .x=0x3f, .y=0x6d, .sp=0x24, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xc3cb, .value=0x50}, {.addr=0xc3cc, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xc3cd, .a=0xa2, .x=0x3f, .y=0x6d, .sp=0x24, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xc3cb, .value=0x50}, {.addr=0xc3cc, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xc3cb, .value=0x50, .type=IO_READ},
        {.addr=0xc3cc, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_038D) {
    const struct CPU_State initial_cpu = {.pc=0x569b, .a=0xda, .x=0x5d, .y=0x85, .sp=0x04, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x569b, .value=0x50}, {.addr=0x569c, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x56a6, .a=0xda, .x=0x5d, .y=0x85, .sp=0x04, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x569b, .value=0x50}, {.addr=0x569c, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x569b, .value=0x50, .type=IO_READ},
        {.addr=0x569c, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_038E) {
    const struct CPU_State initial_cpu = {.pc=0xf9ec, .a=0x62, .x=0xc3, .y=0x28, .sp=0xbf, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ec, .value=0x50}, {.addr=0xf9ed, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xf9ee, .a=0x62, .x=0xc3, .y=0x28, .sp=0xbf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf9ec, .value=0x50}, {.addr=0xf9ed, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xf9ec, .value=0x50, .type=IO_READ},
        {.addr=0xf9ed, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_038F) {
    const struct CPU_State initial_cpu = {.pc=0x7ca1, .a=0x58, .x=0xd9, .y=0x53, .sp=0xa8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca1, .value=0x50}, {.addr=0x7ca2, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x7c55, .a=0x58, .x=0xd9, .y=0x53, .sp=0xa8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7ca1, .value=0x50}, {.addr=0x7ca2, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x7ca1, .value=0x50, .type=IO_READ},
        {.addr=0x7ca2, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0390) {
    const struct CPU_State initial_cpu = {.pc=0xba66, .a=0xa4, .x=0x8a, .y=0x1b, .sp=0xb5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xba66, .value=0x50}, {.addr=0xba67, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xba68, .a=0xa4, .x=0x8a, .y=0x1b, .sp=0xb5, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xba66, .value=0x50}, {.addr=0xba67, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xba66, .value=0x50, .type=IO_READ},
        {.addr=0xba67, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0391) {
    const struct CPU_State initial_cpu = {.pc=0xa5d4, .a=0x9f, .x=0x94, .y=0xea, .sp=0xe1, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d4, .value=0x50}, {.addr=0xa5d5, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xa5d6, .a=0x9f, .x=0x94, .y=0xea, .sp=0xe1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa5d4, .value=0x50}, {.addr=0xa5d5, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xa5d4, .value=0x50, .type=IO_READ},
        {.addr=0xa5d5, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0392) {
    const struct CPU_State initial_cpu = {.pc=0x0548, .a=0xf6, .x=0x2c, .y=0x3d, .sp=0x37, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0548, .value=0x50}, {.addr=0x0549, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x0524, .a=0xf6, .x=0x2c, .y=0x3d, .sp=0x37, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0548, .value=0x50}, {.addr=0x0549, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x0548, .value=0x50, .type=IO_READ},
        {.addr=0x0549, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0393) {
    const struct CPU_State initial_cpu = {.pc=0x0161, .a=0x3f, .x=0x2b, .y=0x36, .sp=0xf8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x50}, {.addr=0x0162, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0163, .a=0x3f, .x=0x2b, .y=0x36, .sp=0xf8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x50}, {.addr=0x0162, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0161, .value=0x50, .type=IO_READ},
        {.addr=0x0162, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0394) {
    const struct CPU_State initial_cpu = {.pc=0x24cd, .a=0x37, .x=0xb8, .y=0xd3, .sp=0x80, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x24cd, .value=0x50}, {.addr=0x24ce, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x24cf, .a=0x37, .x=0xb8, .y=0xd3, .sp=0x80, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x24cd, .value=0x50}, {.addr=0x24ce, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x24cd, .value=0x50, .type=IO_READ},
        {.addr=0x24ce, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0395) {
    const struct CPU_State initial_cpu = {.pc=0x1bda, .a=0xed, .x=0x64, .y=0xfc, .sp=0xa8, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1bda, .value=0x50}, {.addr=0x1bdb, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x1b94, .a=0xed, .x=0x64, .y=0xfc, .sp=0xa8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1bda, .value=0x50}, {.addr=0x1bdb, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x1bda, .value=0x50, .type=IO_READ},
        {.addr=0x1bdb, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0396) {
    const struct CPU_State initial_cpu = {.pc=0xf58f, .a=0xdb, .x=0x3e, .y=0xeb, .sp=0x81, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf58f, .value=0x50}, {.addr=0xf590, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xf5bc, .a=0xdb, .x=0x3e, .y=0xeb, .sp=0x81, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf58f, .value=0x50}, {.addr=0xf590, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xf58f, .value=0x50, .type=IO_READ},
        {.addr=0xf590, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0397) {
    const struct CPU_State initial_cpu = {.pc=0x3981, .a=0xba, .x=0x09, .y=0x83, .sp=0xda, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3981, .value=0x50}, {.addr=0x3982, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x392b, .a=0xba, .x=0x09, .y=0x83, .sp=0xda, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x3981, .value=0x50}, {.addr=0x3982, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x3981, .value=0x50, .type=IO_READ},
        {.addr=0x3982, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0398) {
    const struct CPU_State initial_cpu = {.pc=0x5191, .a=0xa4, .x=0x51, .y=0x02, .sp=0xb2, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x5191, .value=0x50}, {.addr=0x5192, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x5193, .a=0xa4, .x=0x51, .y=0x02, .sp=0xb2, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5191, .value=0x50}, {.addr=0x5192, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x5191, .value=0x50, .type=IO_READ},
        {.addr=0x5192, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_0399) {
    const struct CPU_State initial_cpu = {.pc=0x17d8, .a=0x22, .x=0xc0, .y=0x43, .sp=0xa1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x17d8, .value=0x50}, {.addr=0x17d9, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x17da, .a=0x22, .x=0xc0, .y=0x43, .sp=0xa1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x17d8, .value=0x50}, {.addr=0x17d9, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x17d8, .value=0x50, .type=IO_READ},
        {.addr=0x17d9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd974, .a=0xd3, .x=0x67, .y=0x1f, .sp=0xbe, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xd974, .value=0x50}, {.addr=0xd975, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xd976, .a=0xd3, .x=0x67, .y=0x1f, .sp=0xbe, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xd974, .value=0x50}, {.addr=0xd975, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xd974, .value=0x50, .type=IO_READ},
        {.addr=0xd975, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_039B) {
    const struct CPU_State initial_cpu = {.pc=0x4789, .a=0xd9, .x=0x49, .y=0x0f, .sp=0x4a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4789, .value=0x50}, {.addr=0x478a, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x47f2, .a=0xd9, .x=0x49, .y=0x0f, .sp=0x4a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4789, .value=0x50}, {.addr=0x478a, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x4789, .value=0x50, .type=IO_READ},
        {.addr=0x478a, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_039C) {
    const struct CPU_State initial_cpu = {.pc=0x33d3, .a=0xc0, .x=0x35, .y=0x18, .sp=0xdb, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x33d3, .value=0x50}, {.addr=0x33d4, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x33d5, .a=0xc0, .x=0x35, .y=0x18, .sp=0xdb, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x33d3, .value=0x50}, {.addr=0x33d4, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x33d3, .value=0x50, .type=IO_READ},
        {.addr=0x33d4, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc5f3, .a=0xc8, .x=0xfb, .y=0x8f, .sp=0xcc, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f3, .value=0x50}, {.addr=0xc5f4, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xc5f5, .a=0xc8, .x=0xfb, .y=0x8f, .sp=0xcc, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xc5f3, .value=0x50}, {.addr=0xc5f4, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xc5f3, .value=0x50, .type=IO_READ},
        {.addr=0xc5f4, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_039E) {
    const struct CPU_State initial_cpu = {.pc=0x0762, .a=0xdd, .x=0x45, .y=0xe7, .sp=0xff, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0762, .value=0x50}, {.addr=0x0763, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x0778, .a=0xdd, .x=0x45, .y=0xe7, .sp=0xff, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0762, .value=0x50}, {.addr=0x0763, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x0762, .value=0x50, .type=IO_READ},
        {.addr=0x0763, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3dd9, .a=0x68, .x=0x86, .y=0x9a, .sp=0x44, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd9, .value=0x50}, {.addr=0x3dda, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3ddb, .a=0x68, .x=0x86, .y=0x9a, .sp=0x44, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3dd9, .value=0x50}, {.addr=0x3dda, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3dd9, .value=0x50, .type=IO_READ},
        {.addr=0x3dda, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x92cc, .a=0xdc, .x=0x37, .y=0x87, .sp=0x86, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x92cc, .value=0x50}, {.addr=0x92cd, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x92ce, .a=0xdc, .x=0x37, .y=0x87, .sp=0x86, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x92cc, .value=0x50}, {.addr=0x92cd, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x92cc, .value=0x50, .type=IO_READ},
        {.addr=0x92cd, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xc3fd, .a=0x4e, .x=0xc9, .y=0x5d, .sp=0x72, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc3fd, .value=0x50}, {.addr=0xc3fe, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xc3ff, .a=0x4e, .x=0xc9, .y=0x5d, .sp=0x72, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc3fd, .value=0x50}, {.addr=0xc3fe, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xc3fd, .value=0x50, .type=IO_READ},
        {.addr=0xc3fe, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xaea0, .a=0x19, .x=0x99, .y=0xa7, .sp=0xb0, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xaea0, .value=0x50}, {.addr=0xaea1, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xaea2, .a=0x19, .x=0x99, .y=0xa7, .sp=0xb0, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xaea0, .value=0x50}, {.addr=0xaea1, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xaea0, .value=0x50, .type=IO_READ},
        {.addr=0xaea1, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x1ffd, .a=0xa7, .x=0x27, .y=0x3e, .sp=0x07, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffd, .value=0x50}, {.addr=0x1ffe, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x203d, .a=0xa7, .x=0x27, .y=0x3e, .sp=0x07, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x1ffd, .value=0x50}, {.addr=0x1ffe, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x1ffd, .value=0x50, .type=IO_READ},
        {.addr=0x1ffe, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x6723, .a=0x84, .x=0x2e, .y=0xa6, .sp=0xfa, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6723, .value=0x50}, {.addr=0x6724, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x66da, .a=0x84, .x=0x2e, .y=0xa6, .sp=0xfa, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6723, .value=0x50}, {.addr=0x6724, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x6723, .value=0x50, .type=IO_READ},
        {.addr=0x6724, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x1b29, .a=0xf0, .x=0xf6, .y=0x64, .sp=0x05, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1b29, .value=0x50}, {.addr=0x1b2a, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x1b2b, .a=0xf0, .x=0xf6, .y=0x64, .sp=0x05, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x1b29, .value=0x50}, {.addr=0x1b2a, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x1b29, .value=0x50, .type=IO_READ},
        {.addr=0x1b2a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x4a07, .a=0xe7, .x=0xc6, .y=0x45, .sp=0x76, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4a07, .value=0x50}, {.addr=0x4a08, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4a49, .a=0xe7, .x=0xc6, .y=0x45, .sp=0x76, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4a07, .value=0x50}, {.addr=0x4a08, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4a07, .value=0x50, .type=IO_READ},
        {.addr=0x4a08, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xa88b, .a=0x6d, .x=0x59, .y=0x3a, .sp=0x10, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xa88b, .value=0x50}, {.addr=0xa88c, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xa8c2, .a=0x6d, .x=0x59, .y=0x3a, .sp=0x10, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xa88b, .value=0x50}, {.addr=0xa88c, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xa88b, .value=0x50, .type=IO_READ},
        {.addr=0xa88c, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xcd71, .a=0x97, .x=0x5e, .y=0x7b, .sp=0xec, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xcd71, .value=0x50}, {.addr=0xcd72, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcd73, .a=0x97, .x=0x5e, .y=0x7b, .sp=0xec, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xcd71, .value=0x50}, {.addr=0xcd72, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcd71, .value=0x50, .type=IO_READ},
        {.addr=0xcd72, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x2e7b, .a=0x8b, .x=0xae, .y=0x4f, .sp=0xcb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x2e7b, .value=0x50}, {.addr=0x2e7c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2e1c, .a=0x8b, .x=0xae, .y=0x4f, .sp=0xcb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2e7b, .value=0x50}, {.addr=0x2e7c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2e7b, .value=0x50, .type=IO_READ},
        {.addr=0x2e7c, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x9e5c, .a=0xbf, .x=0xe7, .y=0xc2, .sp=0xb0, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5c, .value=0x50}, {.addr=0x9e5d, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9df2, .a=0xbf, .x=0xe7, .y=0xc2, .sp=0xb0, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9e5c, .value=0x50}, {.addr=0x9e5d, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9e5c, .value=0x50, .type=IO_READ},
        {.addr=0x9e5d, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xcd38, .a=0x46, .x=0xba, .y=0xa2, .sp=0x09, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xcd38, .value=0x50}, {.addr=0xcd39, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xcd3a, .a=0x46, .x=0xba, .y=0xa2, .sp=0x09, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xcd38, .value=0x50}, {.addr=0xcd39, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xcd38, .value=0x50, .type=IO_READ},
        {.addr=0xcd39, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcd1b, .a=0xa1, .x=0x75, .y=0x8d, .sp=0x51, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1b, .value=0x50}, {.addr=0xcd1c, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xcd36, .a=0xa1, .x=0x75, .y=0x8d, .sp=0x51, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xcd1b, .value=0x50}, {.addr=0xcd1c, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xcd1b, .value=0x50, .type=IO_READ},
        {.addr=0xcd1c, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xa909, .a=0xec, .x=0x03, .y=0xb2, .sp=0xa6, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xa909, .value=0x50}, {.addr=0xa90a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xa900, .a=0xec, .x=0x03, .y=0xb2, .sp=0xa6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa909, .value=0x50}, {.addr=0xa90a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xa909, .value=0x50, .type=IO_READ},
        {.addr=0xa90a, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3d6e, .a=0xe5, .x=0xfc, .y=0xcb, .sp=0x93, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x3d6e, .value=0x50}, {.addr=0x3d6f, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x3d3a, .a=0xe5, .x=0xfc, .y=0xcb, .sp=0x93, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3d6e, .value=0x50}, {.addr=0x3d6f, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x3d6e, .value=0x50, .type=IO_READ},
        {.addr=0x3d6f, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xc473, .a=0xbf, .x=0xb0, .y=0xa1, .sp=0x3a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xc473, .value=0x50}, {.addr=0xc474, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc463, .a=0xbf, .x=0xb0, .y=0xa1, .sp=0x3a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc473, .value=0x50}, {.addr=0xc474, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc473, .value=0x50, .type=IO_READ},
        {.addr=0xc474, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x86af, .a=0xfb, .x=0x15, .y=0x63, .sp=0x4c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x86af, .value=0x50}, {.addr=0x86b0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8631, .a=0xfb, .x=0x15, .y=0x63, .sp=0x4c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x86af, .value=0x50}, {.addr=0x86b0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x86af, .value=0x50, .type=IO_READ},
        {.addr=0x86b0, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x3873, .a=0x4b, .x=0xbc, .y=0x8a, .sp=0xf3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3873, .value=0x50}, {.addr=0x3874, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3875, .a=0x4b, .x=0xbc, .y=0x8a, .sp=0xf3, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x3873, .value=0x50}, {.addr=0x3874, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3873, .value=0x50, .type=IO_READ},
        {.addr=0x3874, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x99e1, .a=0xf8, .x=0x32, .y=0xa8, .sp=0x87, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x99e1, .value=0x50}, {.addr=0x99e2, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x99e3, .a=0xf8, .x=0x32, .y=0xa8, .sp=0x87, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x99e1, .value=0x50}, {.addr=0x99e2, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x99e1, .value=0x50, .type=IO_READ},
        {.addr=0x99e2, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xcbe3, .a=0xa7, .x=0x95, .y=0x24, .sp=0x9d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe3, .value=0x50}, {.addr=0xcbe4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcbe5, .a=0xa7, .x=0x95, .y=0x24, .sp=0x9d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcbe3, .value=0x50}, {.addr=0xcbe4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcbe3, .value=0x50, .type=IO_READ},
        {.addr=0xcbe4, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x72a6, .a=0x47, .x=0x86, .y=0xd6, .sp=0xba, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x72a6, .value=0x50}, {.addr=0x72a7, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x72ec, .a=0x47, .x=0x86, .y=0xd6, .sp=0xba, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x72a6, .value=0x50}, {.addr=0x72a7, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x72a6, .value=0x50, .type=IO_READ},
        {.addr=0x72a7, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xf11b, .a=0xf8, .x=0xa4, .y=0xf5, .sp=0xd7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf11b, .value=0x50}, {.addr=0xf11c, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xf11d, .a=0xf8, .x=0xa4, .y=0xf5, .sp=0xd7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf11b, .value=0x50}, {.addr=0xf11c, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xf11b, .value=0x50, .type=IO_READ},
        {.addr=0xf11c, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xca70, .a=0x63, .x=0x64, .y=0x01, .sp=0x2b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xca70, .value=0x50}, {.addr=0xca71, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xca72, .a=0x63, .x=0x64, .y=0x01, .sp=0x2b, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xca70, .value=0x50}, {.addr=0xca71, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xca70, .value=0x50, .type=IO_READ},
        {.addr=0xca71, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x23af, .a=0x1f, .x=0xeb, .y=0xc7, .sp=0xb6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x23af, .value=0x50}, {.addr=0x23b0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2390, .a=0x1f, .x=0xeb, .y=0xc7, .sp=0xb6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x23af, .value=0x50}, {.addr=0x23b0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x23af, .value=0x50, .type=IO_READ},
        {.addr=0x23b0, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x308f, .a=0xf8, .x=0xc0, .y=0xa0, .sp=0xeb, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x308f, .value=0x50}, {.addr=0x3090, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x30f2, .a=0xf8, .x=0xc0, .y=0xa0, .sp=0xeb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x308f, .value=0x50}, {.addr=0x3090, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x308f, .value=0x50, .type=IO_READ},
        {.addr=0x3090, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x4302, .a=0xc8, .x=0xc3, .y=0x7a, .sp=0x71, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4302, .value=0x50}, {.addr=0x4303, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x42f9, .a=0xc8, .x=0xc3, .y=0x7a, .sp=0x71, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4302, .value=0x50}, {.addr=0x4303, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x4302, .value=0x50, .type=IO_READ},
        {.addr=0x4303, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x3d2a, .a=0x3c, .x=0x3d, .y=0xed, .sp=0x8c, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3d2a, .value=0x50}, {.addr=0x3d2b, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x3d2c, .a=0x3c, .x=0x3d, .y=0xed, .sp=0x8c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3d2a, .value=0x50}, {.addr=0x3d2b, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x3d2a, .value=0x50, .type=IO_READ},
        {.addr=0x3d2b, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x0556, .a=0xfc, .x=0x67, .y=0x19, .sp=0x04, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0556, .value=0x50}, {.addr=0x0557, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x04dc, .a=0xfc, .x=0x67, .y=0x19, .sp=0x04, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0556, .value=0x50}, {.addr=0x0557, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x0556, .value=0x50, .type=IO_READ},
        {.addr=0x0557, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x4984, .a=0xae, .x=0xba, .y=0xa2, .sp=0xda, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4984, .value=0x50}, {.addr=0x4985, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x497b, .a=0xae, .x=0xba, .y=0xa2, .sp=0xda, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x4984, .value=0x50}, {.addr=0x4985, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x4984, .value=0x50, .type=IO_READ},
        {.addr=0x4985, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x1000, .a=0x2a, .x=0x16, .y=0x6c, .sp=0x86, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x1000, .value=0x50}, {.addr=0x1001, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x103c, .a=0x2a, .x=0x16, .y=0x6c, .sp=0x86, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1000, .value=0x50}, {.addr=0x1001, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x1000, .value=0x50, .type=IO_READ},
        {.addr=0x1001, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xc10c, .a=0xcd, .x=0x76, .y=0x73, .sp=0xde, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc10c, .value=0x50}, {.addr=0xc10d, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xc10e, .a=0xcd, .x=0x76, .y=0x73, .sp=0xde, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xc10c, .value=0x50}, {.addr=0xc10d, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xc10c, .value=0x50, .type=IO_READ},
        {.addr=0xc10d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x41cc, .a=0xc8, .x=0x23, .y=0xd6, .sp=0x51, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x41cc, .value=0x50}, {.addr=0x41cd, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x4167, .a=0xc8, .x=0x23, .y=0xd6, .sp=0x51, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x41cc, .value=0x50}, {.addr=0x41cd, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x41cc, .value=0x50, .type=IO_READ},
        {.addr=0x41cd, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x0371, .a=0x11, .x=0x40, .y=0x4b, .sp=0x23, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0371, .value=0x50}, {.addr=0x0372, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0373, .a=0x11, .x=0x40, .y=0x4b, .sp=0x23, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0371, .value=0x50}, {.addr=0x0372, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0371, .value=0x50, .type=IO_READ},
        {.addr=0x0372, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x7e14, .a=0x5c, .x=0x01, .y=0xa2, .sp=0x37, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x7e14, .value=0x50}, {.addr=0x7e15, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x7e16, .a=0x5c, .x=0x01, .y=0xa2, .sp=0x37, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x7e14, .value=0x50}, {.addr=0x7e15, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x7e14, .value=0x50, .type=IO_READ},
        {.addr=0x7e15, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x16c4, .a=0xbb, .x=0x98, .y=0x95, .sp=0x63, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x16c4, .value=0x50}, {.addr=0x16c5, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x168b, .a=0xbb, .x=0x98, .y=0x95, .sp=0x63, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x16c4, .value=0x50}, {.addr=0x16c5, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x16c4, .value=0x50, .type=IO_READ},
        {.addr=0x16c5, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xb253, .a=0x0b, .x=0x9d, .y=0x17, .sp=0x04, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xb253, .value=0x50}, {.addr=0xb254, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xb255, .a=0x0b, .x=0x9d, .y=0x17, .sp=0x04, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xb253, .value=0x50}, {.addr=0xb254, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xb253, .value=0x50, .type=IO_READ},
        {.addr=0xb254, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x875b, .a=0xc0, .x=0x54, .y=0x24, .sp=0x76, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x875b, .value=0x50}, {.addr=0x875c, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x875d, .a=0xc0, .x=0x54, .y=0x24, .sp=0x76, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x875b, .value=0x50}, {.addr=0x875c, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x875b, .value=0x50, .type=IO_READ},
        {.addr=0x875c, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x8e3b, .a=0xd3, .x=0x94, .y=0x71, .sp=0xdb, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8e3b, .value=0x50}, {.addr=0x8e3c, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x8e3d, .a=0xd3, .x=0x94, .y=0x71, .sp=0xdb, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x8e3b, .value=0x50}, {.addr=0x8e3c, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x8e3b, .value=0x50, .type=IO_READ},
        {.addr=0x8e3c, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x27c1, .a=0x8a, .x=0x21, .y=0x78, .sp=0xd4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x27c1, .value=0x50}, {.addr=0x27c2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x27b0, .a=0x8a, .x=0x21, .y=0x78, .sp=0xd4, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x27c1, .value=0x50}, {.addr=0x27c2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x27c1, .value=0x50, .type=IO_READ},
        {.addr=0x27c2, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x3a28, .a=0x5d, .x=0x31, .y=0x12, .sp=0x5d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3a28, .value=0x50}, {.addr=0x3a29, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x3a2a, .a=0x5d, .x=0x31, .y=0x12, .sp=0x5d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x3a28, .value=0x50}, {.addr=0x3a29, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x3a28, .value=0x50, .type=IO_READ},
        {.addr=0x3a29, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xabf6, .a=0x57, .x=0x0e, .y=0xe5, .sp=0xce, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xabf6, .value=0x50}, {.addr=0xabf7, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xabf8, .a=0x57, .x=0x0e, .y=0xe5, .sp=0xce, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xabf6, .value=0x50}, {.addr=0xabf7, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xabf6, .value=0x50, .type=IO_READ},
        {.addr=0xabf7, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xaf33, .a=0xc8, .x=0xcb, .y=0x3b, .sp=0xc2, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xaf33, .value=0x50}, {.addr=0xaf34, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaf5b, .a=0xc8, .x=0xcb, .y=0x3b, .sp=0xc2, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xaf33, .value=0x50}, {.addr=0xaf34, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaf33, .value=0x50, .type=IO_READ},
        {.addr=0xaf34, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xb81d, .a=0xbc, .x=0x25, .y=0xa6, .sp=0xfb, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb81d, .value=0x50}, {.addr=0xb81e, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xb81f, .a=0xbc, .x=0x25, .y=0xa6, .sp=0xfb, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb81d, .value=0x50}, {.addr=0xb81e, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xb81d, .value=0x50, .type=IO_READ},
        {.addr=0xb81e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x5ad9, .a=0x97, .x=0xed, .y=0xca, .sp=0xc3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5ad9, .value=0x50}, {.addr=0x5ada, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x5adb, .a=0x97, .x=0xed, .y=0xca, .sp=0xc3, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x5ad9, .value=0x50}, {.addr=0x5ada, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x5ad9, .value=0x50, .type=IO_READ},
        {.addr=0x5ada, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xe0d8, .a=0xdf, .x=0x88, .y=0xa2, .sp=0x72, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d8, .value=0x50}, {.addr=0xe0d9, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xe0da, .a=0xdf, .x=0x88, .y=0xa2, .sp=0x72, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xe0d8, .value=0x50}, {.addr=0xe0d9, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xe0d8, .value=0x50, .type=IO_READ},
        {.addr=0xe0d9, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x67de, .a=0x46, .x=0x6a, .y=0x79, .sp=0xeb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x67de, .value=0x50}, {.addr=0x67df, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x6836, .a=0x46, .x=0x6a, .y=0x79, .sp=0xeb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x67de, .value=0x50}, {.addr=0x67df, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x67de, .value=0x50, .type=IO_READ},
        {.addr=0x67df, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xaf63, .a=0xbd, .x=0x0a, .y=0x45, .sp=0xa6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xaf63, .value=0x50}, {.addr=0xaf64, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaf65, .a=0xbd, .x=0x0a, .y=0x45, .sp=0xa6, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xaf63, .value=0x50}, {.addr=0xaf64, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaf63, .value=0x50, .type=IO_READ},
        {.addr=0xaf64, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x453a, .a=0x2a, .x=0x83, .y=0xa3, .sp=0xb4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x453a, .value=0x50}, {.addr=0x453b, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x453c, .a=0x2a, .x=0x83, .y=0xa3, .sp=0xb4, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x453a, .value=0x50}, {.addr=0x453b, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x453a, .value=0x50, .type=IO_READ},
        {.addr=0x453b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xcf5f, .a=0xb9, .x=0x81, .y=0xe6, .sp=0xd9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xcf5f, .value=0x50}, {.addr=0xcf60, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xcf61, .a=0xb9, .x=0x81, .y=0xe6, .sp=0xd9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xcf5f, .value=0x50}, {.addr=0xcf60, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xcf5f, .value=0x50, .type=IO_READ},
        {.addr=0xcf60, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf8cf, .a=0x36, .x=0xb0, .y=0x2b, .sp=0x4a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cf, .value=0x50}, {.addr=0xf8d0, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xf8e8, .a=0x36, .x=0xb0, .y=0x2b, .sp=0x4a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf8cf, .value=0x50}, {.addr=0xf8d0, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xf8cf, .value=0x50, .type=IO_READ},
        {.addr=0xf8d0, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xce23, .a=0xc6, .x=0xcf, .y=0x23, .sp=0xcf, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xce23, .value=0x50}, {.addr=0xce24, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xce25, .a=0xc6, .x=0xcf, .y=0x23, .sp=0xcf, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xce23, .value=0x50}, {.addr=0xce24, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xce23, .value=0x50, .type=IO_READ},
        {.addr=0xce24, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x465b, .a=0xd8, .x=0xb6, .y=0xce, .sp=0x54, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x465b, .value=0x50}, {.addr=0x465c, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x465d, .a=0xd8, .x=0xb6, .y=0xce, .sp=0x54, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x465b, .value=0x50}, {.addr=0x465c, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x465b, .value=0x50, .type=IO_READ},
        {.addr=0x465c, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x5cda, .a=0xc0, .x=0x26, .y=0xa1, .sp=0xf3, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x5cda, .value=0x50}, {.addr=0x5cdb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5cdc, .a=0xc0, .x=0x26, .y=0xa1, .sp=0xf3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5cda, .value=0x50}, {.addr=0x5cdb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5cda, .value=0x50, .type=IO_READ},
        {.addr=0x5cdb, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xdaeb, .a=0xcf, .x=0x86, .y=0xfc, .sp=0x08, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xdaeb, .value=0x50}, {.addr=0xdaec, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xda82, .a=0xcf, .x=0x86, .y=0xfc, .sp=0x08, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xdaeb, .value=0x50}, {.addr=0xdaec, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xdaeb, .value=0x50, .type=IO_READ},
        {.addr=0xdaec, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x2a44, .a=0x61, .x=0x8d, .y=0x2b, .sp=0xcd, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2a44, .value=0x50}, {.addr=0x2a45, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x2a39, .a=0x61, .x=0x8d, .y=0x2b, .sp=0xcd, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x2a44, .value=0x50}, {.addr=0x2a45, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x2a44, .value=0x50, .type=IO_READ},
        {.addr=0x2a45, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x4a53, .a=0xc7, .x=0xfa, .y=0x6b, .sp=0x8b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4a53, .value=0x50}, {.addr=0x4a54, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x49fb, .a=0xc7, .x=0xfa, .y=0x6b, .sp=0x8b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4a53, .value=0x50}, {.addr=0x4a54, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4a53, .value=0x50, .type=IO_READ},
        {.addr=0x4a54, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x2039, .a=0xa8, .x=0xda, .y=0x13, .sp=0x5f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x2039, .value=0x50}, {.addr=0x203a, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x203b, .a=0xa8, .x=0xda, .y=0x13, .sp=0x5f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2039, .value=0x50}, {.addr=0x203a, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x2039, .value=0x50, .type=IO_READ},
        {.addr=0x203a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x877d, .a=0x14, .x=0x7c, .y=0x74, .sp=0xdb, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x877d, .value=0x50}, {.addr=0x877e, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x87da, .a=0x14, .x=0x7c, .y=0x74, .sp=0xdb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x877d, .value=0x50}, {.addr=0x877e, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x877d, .value=0x50, .type=IO_READ},
        {.addr=0x877e, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x05fc, .a=0x57, .x=0x6d, .y=0xc3, .sp=0x90, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x05fc, .value=0x50}, {.addr=0x05fd, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x05fe, .a=0x57, .x=0x6d, .y=0xc3, .sp=0x90, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x05fc, .value=0x50}, {.addr=0x05fd, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x05fc, .value=0x50, .type=IO_READ},
        {.addr=0x05fd, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xbd29, .a=0x87, .x=0x70, .y=0x02, .sp=0xc7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xbd29, .value=0x50}, {.addr=0xbd2a, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xbd74, .a=0x87, .x=0x70, .y=0x02, .sp=0xc7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xbd29, .value=0x50}, {.addr=0xbd2a, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xbd29, .value=0x50, .type=IO_READ},
        {.addr=0xbd2a, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x9cf1, .a=0x91, .x=0xeb, .y=0xc4, .sp=0xcf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf1, .value=0x50}, {.addr=0x9cf2, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x9cbb, .a=0x91, .x=0xeb, .y=0xc4, .sp=0xcf, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x9cf1, .value=0x50}, {.addr=0x9cf2, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x9cf1, .value=0x50, .type=IO_READ},
        {.addr=0x9cf2, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x8c4b, .a=0x66, .x=0x78, .y=0xbc, .sp=0xe4, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8c4b, .value=0x50}, {.addr=0x8c4c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8c6a, .a=0x66, .x=0x78, .y=0xbc, .sp=0xe4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8c4b, .value=0x50}, {.addr=0x8c4c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8c4b, .value=0x50, .type=IO_READ},
        {.addr=0x8c4c, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xedc0, .a=0x2b, .x=0x49, .y=0xf3, .sp=0x24, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xedc0, .value=0x50}, {.addr=0xedc1, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xed58, .a=0x2b, .x=0x49, .y=0xf3, .sp=0x24, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xedc0, .value=0x50}, {.addr=0xedc1, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xedc0, .value=0x50, .type=IO_READ},
        {.addr=0xedc1, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x91a5, .a=0x62, .x=0x0b, .y=0xe7, .sp=0x25, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x91a5, .value=0x50}, {.addr=0x91a6, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x914a, .a=0x62, .x=0x0b, .y=0xe7, .sp=0x25, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x91a5, .value=0x50}, {.addr=0x91a6, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x91a5, .value=0x50, .type=IO_READ},
        {.addr=0x91a6, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x3509, .a=0x8c, .x=0xe4, .y=0x70, .sp=0x3d, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3509, .value=0x50}, {.addr=0x350a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x350b, .a=0x8c, .x=0xe4, .y=0x70, .sp=0x3d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3509, .value=0x50}, {.addr=0x350a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x3509, .value=0x50, .type=IO_READ},
        {.addr=0x350a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xdff0, .a=0xb4, .x=0x15, .y=0xaa, .sp=0x09, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xdff0, .value=0x50}, {.addr=0xdff1, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xdff4, .a=0xb4, .x=0x15, .y=0xaa, .sp=0x09, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xdff0, .value=0x50}, {.addr=0xdff1, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xdff0, .value=0x50, .type=IO_READ},
        {.addr=0xdff1, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x2387, .a=0xe8, .x=0xb5, .y=0xd3, .sp=0x45, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2387, .value=0x50}, {.addr=0x2388, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x23cc, .a=0xe8, .x=0xb5, .y=0xd3, .sp=0x45, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2387, .value=0x50}, {.addr=0x2388, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x2387, .value=0x50, .type=IO_READ},
        {.addr=0x2388, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x105a, .a=0x2f, .x=0xa2, .y=0x9c, .sp=0x3f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x105a, .value=0x50}, {.addr=0x105b, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x105c, .a=0x2f, .x=0xa2, .y=0x9c, .sp=0x3f, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x105a, .value=0x50}, {.addr=0x105b, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x105a, .value=0x50, .type=IO_READ},
        {.addr=0x105b, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xc8fc, .a=0x80, .x=0x8a, .y=0x54, .sp=0xb0, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc8fc, .value=0x50}, {.addr=0xc8fd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc8bd, .a=0x80, .x=0x8a, .y=0x54, .sp=0xb0, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xc8fc, .value=0x50}, {.addr=0xc8fd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc8fc, .value=0x50, .type=IO_READ},
        {.addr=0xc8fd, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x1e8e, .a=0x0a, .x=0xb0, .y=0xcc, .sp=0x9e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1e8e, .value=0x50}, {.addr=0x1e8f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1e90, .a=0x0a, .x=0xb0, .y=0xcc, .sp=0x9e, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x1e8e, .value=0x50}, {.addr=0x1e8f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1e8e, .value=0x50, .type=IO_READ},
        {.addr=0x1e8f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xed7b, .a=0xba, .x=0x24, .y=0x98, .sp=0x01, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xed7b, .value=0x50}, {.addr=0xed7c, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xed7d, .a=0xba, .x=0x24, .y=0x98, .sp=0x01, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xed7b, .value=0x50}, {.addr=0xed7c, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xed7b, .value=0x50, .type=IO_READ},
        {.addr=0xed7c, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_50, _50_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xac26, .a=0xad, .x=0x48, .y=0x1f, .sp=0x6e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xac26, .value=0x50}, {.addr=0xac27, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xac32, .a=0xad, .x=0x48, .y=0x1f, .sp=0x6e, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xac26, .value=0x50}, {.addr=0xac27, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xac26, .value=0x50, .type=IO_READ},
        {.addr=0xac27, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("50 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
