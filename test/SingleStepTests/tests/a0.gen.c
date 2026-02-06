#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_A0, _A0_0000) {
    const struct CPU_State initial_cpu = {.pc=0xf1da, .a=0x30, .x=0x21, .y=0x08, .sp=0x82, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf1da, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf1db, .a=0x30, .x=0x21, .y=0x08, .sp=0x82, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf1da, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf1da, .value=0xa0, .type=IO_READ},
        {.addr=0xf1db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2862, .a=0x45, .x=0xb0, .y=0x8c, .sp=0xe9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2862, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2863, .a=0x45, .x=0xb0, .y=0x8c, .sp=0xe9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2862, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2862, .value=0xa0, .type=IO_READ},
        {.addr=0x2863, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd5ca, .a=0xe3, .x=0x2c, .y=0xbf, .sp=0x0d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd5ca, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd5cb, .a=0xe3, .x=0x2c, .y=0xbf, .sp=0x0d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd5ca, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd5ca, .value=0xa0, .type=IO_READ},
        {.addr=0xd5cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0003) {
    const struct CPU_State initial_cpu = {.pc=0x2574, .a=0xbb, .x=0xa3, .y=0xe8, .sp=0x0f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2574, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2575, .a=0xbb, .x=0xa3, .y=0xe8, .sp=0x0f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2574, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2574, .value=0xa0, .type=IO_READ},
        {.addr=0x2575, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0004) {
    const struct CPU_State initial_cpu = {.pc=0xd490, .a=0x58, .x=0x23, .y=0xc1, .sp=0x86, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xd490, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd491, .a=0x58, .x=0x23, .y=0xc1, .sp=0x86, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd490, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd490, .value=0xa0, .type=IO_READ},
        {.addr=0xd491, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0005) {
    const struct CPU_State initial_cpu = {.pc=0xd06f, .a=0xd0, .x=0x69, .y=0xcf, .sp=0xb1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xd06f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd070, .a=0xd0, .x=0x69, .y=0xcf, .sp=0xb1, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xd06f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd06f, .value=0xa0, .type=IO_READ},
        {.addr=0xd070, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0006) {
    const struct CPU_State initial_cpu = {.pc=0x380b, .a=0xf9, .x=0x5e, .y=0xb7, .sp=0x78, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x380b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x380c, .a=0xf9, .x=0x5e, .y=0xb7, .sp=0x78, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x380b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x380b, .value=0xa0, .type=IO_READ},
        {.addr=0x380c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0007) {
    const struct CPU_State initial_cpu = {.pc=0x9037, .a=0x37, .x=0x73, .y=0x56, .sp=0x1f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9037, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9038, .a=0x37, .x=0x73, .y=0x56, .sp=0x1f, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x9037, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9037, .value=0xa0, .type=IO_READ},
        {.addr=0x9038, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0008) {
    const struct CPU_State initial_cpu = {.pc=0xcd9b, .a=0xca, .x=0xd4, .y=0x99, .sp=0x52, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xcd9b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcd9c, .a=0xca, .x=0xd4, .y=0x99, .sp=0x52, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcd9b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcd9b, .value=0xa0, .type=IO_READ},
        {.addr=0xcd9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf2c3, .a=0x62, .x=0x60, .y=0xf6, .sp=0x0f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf2c4, .a=0x62, .x=0x60, .y=0xf6, .sp=0x0f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf2c3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf2c3, .value=0xa0, .type=IO_READ},
        {.addr=0xf2c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_000A) {
    const struct CPU_State initial_cpu = {.pc=0xe16a, .a=0x4d, .x=0xe7, .y=0xcb, .sp=0x9b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe16a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe16b, .a=0x4d, .x=0xe7, .y=0xcb, .sp=0x9b, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xe16a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe16a, .value=0xa0, .type=IO_READ},
        {.addr=0xe16b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_000B) {
    const struct CPU_State initial_cpu = {.pc=0xfd10, .a=0x3b, .x=0xe7, .y=0xcc, .sp=0x03, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xfd10, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfd11, .a=0x3b, .x=0xe7, .y=0xcc, .sp=0x03, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xfd10, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfd10, .value=0xa0, .type=IO_READ},
        {.addr=0xfd11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_000C) {
    const struct CPU_State initial_cpu = {.pc=0xbd34, .a=0x85, .x=0xeb, .y=0xad, .sp=0xcd, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xbd34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbd35, .a=0x85, .x=0xeb, .y=0xad, .sp=0xcd, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xbd34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbd34, .value=0xa0, .type=IO_READ},
        {.addr=0xbd35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_000D) {
    const struct CPU_State initial_cpu = {.pc=0x8f6a, .a=0x13, .x=0x32, .y=0x7b, .sp=0x1d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x8f6a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8f6b, .a=0x13, .x=0x32, .y=0x7b, .sp=0x1d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8f6a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8f6a, .value=0xa0, .type=IO_READ},
        {.addr=0x8f6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_000E) {
    const struct CPU_State initial_cpu = {.pc=0xabb1, .a=0x9e, .x=0xb2, .y=0x3d, .sp=0x23, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xabb1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xabb2, .a=0x9e, .x=0xb2, .y=0x3d, .sp=0x23, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xabb1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xabb1, .value=0xa0, .type=IO_READ},
        {.addr=0xabb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_000F) {
    const struct CPU_State initial_cpu = {.pc=0xb82b, .a=0xb6, .x=0x44, .y=0x46, .sp=0x4f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb82b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb82c, .a=0xb6, .x=0x44, .y=0x46, .sp=0x4f, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xb82b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb82b, .value=0xa0, .type=IO_READ},
        {.addr=0xb82c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0010) {
    const struct CPU_State initial_cpu = {.pc=0x98a0, .a=0x54, .x=0x1d, .y=0x1c, .sp=0x2c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x98a0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x98a1, .a=0x54, .x=0x1d, .y=0x1c, .sp=0x2c, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x98a0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x98a0, .value=0xa0, .type=IO_READ},
        {.addr=0x98a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0011) {
    const struct CPU_State initial_cpu = {.pc=0x0b28, .a=0x8e, .x=0x60, .y=0x57, .sp=0x77, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0b28, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0b29, .a=0x8e, .x=0x60, .y=0x57, .sp=0x77, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0b28, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0b28, .value=0xa0, .type=IO_READ},
        {.addr=0x0b29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0012) {
    const struct CPU_State initial_cpu = {.pc=0xfb73, .a=0xd1, .x=0x4e, .y=0xe9, .sp=0xae, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xfb73, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfb74, .a=0xd1, .x=0x4e, .y=0xe9, .sp=0xae, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xfb73, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfb73, .value=0xa0, .type=IO_READ},
        {.addr=0xfb74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0013) {
    const struct CPU_State initial_cpu = {.pc=0xc678, .a=0x38, .x=0xc8, .y=0x38, .sp=0x85, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc678, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc679, .a=0x38, .x=0xc8, .y=0x38, .sp=0x85, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xc678, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc678, .value=0xa0, .type=IO_READ},
        {.addr=0xc679, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0014) {
    const struct CPU_State initial_cpu = {.pc=0x1340, .a=0x73, .x=0xb2, .y=0x48, .sp=0x18, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1340, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1341, .a=0x73, .x=0xb2, .y=0x48, .sp=0x18, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1340, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1340, .value=0xa0, .type=IO_READ},
        {.addr=0x1341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0015) {
    const struct CPU_State initial_cpu = {.pc=0xbbde, .a=0xab, .x=0xa1, .y=0x08, .sp=0x07, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xbbde, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbbdf, .a=0xab, .x=0xa1, .y=0x08, .sp=0x07, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbbde, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbbde, .value=0xa0, .type=IO_READ},
        {.addr=0xbbdf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0016) {
    const struct CPU_State initial_cpu = {.pc=0xed76, .a=0xa5, .x=0x71, .y=0x49, .sp=0xbf, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xed76, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xed77, .a=0xa5, .x=0x71, .y=0x49, .sp=0xbf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xed76, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xed76, .value=0xa0, .type=IO_READ},
        {.addr=0xed77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0017) {
    const struct CPU_State initial_cpu = {.pc=0xd7d1, .a=0x0d, .x=0xea, .y=0x4b, .sp=0xd7, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd7d2, .a=0x0d, .x=0xea, .y=0x4b, .sp=0xd7, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xd7d1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd7d1, .value=0xa0, .type=IO_READ},
        {.addr=0xd7d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0018) {
    const struct CPU_State initial_cpu = {.pc=0x61de, .a=0x07, .x=0xa5, .y=0x0b, .sp=0x86, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x61de, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x61df, .a=0x07, .x=0xa5, .y=0x0b, .sp=0x86, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x61de, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x61de, .value=0xa0, .type=IO_READ},
        {.addr=0x61df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0019) {
    const struct CPU_State initial_cpu = {.pc=0x3979, .a=0xa3, .x=0xc2, .y=0xc8, .sp=0xcb, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3979, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x397a, .a=0xa3, .x=0xc2, .y=0xc8, .sp=0xcb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3979, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3979, .value=0xa0, .type=IO_READ},
        {.addr=0x397a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_001A) {
    const struct CPU_State initial_cpu = {.pc=0x2f20, .a=0x38, .x=0xc2, .y=0x61, .sp=0xbf, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f20, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2f21, .a=0x38, .x=0xc2, .y=0x61, .sp=0xbf, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2f20, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2f20, .value=0xa0, .type=IO_READ},
        {.addr=0x2f21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_001B) {
    const struct CPU_State initial_cpu = {.pc=0x5f36, .a=0xbc, .x=0x8c, .y=0x85, .sp=0x83, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5f36, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5f37, .a=0xbc, .x=0x8c, .y=0x85, .sp=0x83, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x5f36, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5f36, .value=0xa0, .type=IO_READ},
        {.addr=0x5f37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_001C) {
    const struct CPU_State initial_cpu = {.pc=0x896b, .a=0x3a, .x=0x82, .y=0x9f, .sp=0x85, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x896b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x896c, .a=0x3a, .x=0x82, .y=0x9f, .sp=0x85, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x896b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x896b, .value=0xa0, .type=IO_READ},
        {.addr=0x896c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_001D) {
    const struct CPU_State initial_cpu = {.pc=0xa0c4, .a=0xef, .x=0xc4, .y=0x40, .sp=0x0b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa0c5, .a=0xef, .x=0xc4, .y=0x40, .sp=0x0b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xa0c4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa0c4, .value=0xa0, .type=IO_READ},
        {.addr=0xa0c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_001E) {
    const struct CPU_State initial_cpu = {.pc=0x16dd, .a=0x48, .x=0x33, .y=0xb0, .sp=0xbf, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x16dd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x16de, .a=0x48, .x=0x33, .y=0xb0, .sp=0xbf, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x16dd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x16dd, .value=0xa0, .type=IO_READ},
        {.addr=0x16de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_001F) {
    const struct CPU_State initial_cpu = {.pc=0xcb1f, .a=0xb3, .x=0x1c, .y=0x9c, .sp=0x75, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcb20, .a=0xb3, .x=0x1c, .y=0x9c, .sp=0x75, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xcb1f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcb1f, .value=0xa0, .type=IO_READ},
        {.addr=0xcb20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0020) {
    const struct CPU_State initial_cpu = {.pc=0x7042, .a=0x03, .x=0xd9, .y=0x20, .sp=0xfb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7042, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7043, .a=0x03, .x=0xd9, .y=0x20, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x7042, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7042, .value=0xa0, .type=IO_READ},
        {.addr=0x7043, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0021) {
    const struct CPU_State initial_cpu = {.pc=0xf783, .a=0x54, .x=0x60, .y=0xcd, .sp=0xaf, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf783, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf784, .a=0x54, .x=0x60, .y=0xcd, .sp=0xaf, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xf783, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf783, .value=0xa0, .type=IO_READ},
        {.addr=0xf784, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0022) {
    const struct CPU_State initial_cpu = {.pc=0x2c25, .a=0x39, .x=0xd3, .y=0x52, .sp=0x7d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2c25, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2c26, .a=0x39, .x=0xd3, .y=0x52, .sp=0x7d, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x2c25, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2c25, .value=0xa0, .type=IO_READ},
        {.addr=0x2c26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0023) {
    const struct CPU_State initial_cpu = {.pc=0xe000, .a=0x08, .x=0xc0, .y=0xf2, .sp=0xda, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe000, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe001, .a=0x08, .x=0xc0, .y=0xf2, .sp=0xda, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xe000, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe000, .value=0xa0, .type=IO_READ},
        {.addr=0xe001, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf920, .a=0x8f, .x=0x5c, .y=0x82, .sp=0x7e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xf920, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf921, .a=0x8f, .x=0x5c, .y=0x82, .sp=0x7e, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf920, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf920, .value=0xa0, .type=IO_READ},
        {.addr=0xf921, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0025) {
    const struct CPU_State initial_cpu = {.pc=0x887b, .a=0xc9, .x=0x62, .y=0xd4, .sp=0xef, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x887b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x887c, .a=0xc9, .x=0x62, .y=0xd4, .sp=0xef, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x887b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x887b, .value=0xa0, .type=IO_READ},
        {.addr=0x887c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0026) {
    const struct CPU_State initial_cpu = {.pc=0x90e2, .a=0x82, .x=0x55, .y=0xcb, .sp=0x7f, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x90e2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x90e3, .a=0x82, .x=0x55, .y=0xcb, .sp=0x7f, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x90e2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x90e2, .value=0xa0, .type=IO_READ},
        {.addr=0x90e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0027) {
    const struct CPU_State initial_cpu = {.pc=0x8d2b, .a=0xb3, .x=0xbf, .y=0x84, .sp=0xa4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8d2c, .a=0xb3, .x=0xbf, .y=0x84, .sp=0xa4, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8d2b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8d2b, .value=0xa0, .type=IO_READ},
        {.addr=0x8d2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0028) {
    const struct CPU_State initial_cpu = {.pc=0x61ff, .a=0xf7, .x=0x25, .y=0x0a, .sp=0x3a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x61ff, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6200, .a=0xf7, .x=0x25, .y=0x0a, .sp=0x3a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x61ff, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x61ff, .value=0xa0, .type=IO_READ},
        {.addr=0x6200, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0029) {
    const struct CPU_State initial_cpu = {.pc=0xa9b6, .a=0xef, .x=0x23, .y=0x41, .sp=0xc0, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa9b7, .a=0xef, .x=0x23, .y=0x41, .sp=0xc0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa9b6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa9b6, .value=0xa0, .type=IO_READ},
        {.addr=0xa9b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_002A) {
    const struct CPU_State initial_cpu = {.pc=0xd89c, .a=0x26, .x=0x33, .y=0x87, .sp=0x6b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd89c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd89d, .a=0x26, .x=0x33, .y=0x87, .sp=0x6b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd89c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd89c, .value=0xa0, .type=IO_READ},
        {.addr=0xd89d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_002B) {
    const struct CPU_State initial_cpu = {.pc=0xbe7e, .a=0xad, .x=0xbd, .y=0x0b, .sp=0x8f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbe7e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbe7f, .a=0xad, .x=0xbd, .y=0x0b, .sp=0x8f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xbe7e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbe7e, .value=0xa0, .type=IO_READ},
        {.addr=0xbe7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_002C) {
    const struct CPU_State initial_cpu = {.pc=0xb141, .a=0xeb, .x=0x3f, .y=0x46, .sp=0x17, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb141, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb142, .a=0xeb, .x=0x3f, .y=0x46, .sp=0x17, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xb141, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb141, .value=0xa0, .type=IO_READ},
        {.addr=0xb142, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_002D) {
    const struct CPU_State initial_cpu = {.pc=0x589f, .a=0xad, .x=0xdb, .y=0x21, .sp=0xc9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x589f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x58a0, .a=0xad, .x=0xdb, .y=0x21, .sp=0xc9, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x589f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x589f, .value=0xa0, .type=IO_READ},
        {.addr=0x58a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_002E) {
    const struct CPU_State initial_cpu = {.pc=0x1684, .a=0x80, .x=0x2c, .y=0x23, .sp=0x39, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1684, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1685, .a=0x80, .x=0x2c, .y=0x23, .sp=0x39, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x1684, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1684, .value=0xa0, .type=IO_READ},
        {.addr=0x1685, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8189, .a=0x23, .x=0x9f, .y=0x17, .sp=0x98, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8189, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x818a, .a=0x23, .x=0x9f, .y=0x17, .sp=0x98, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8189, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8189, .value=0xa0, .type=IO_READ},
        {.addr=0x818a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0030) {
    const struct CPU_State initial_cpu = {.pc=0x6f55, .a=0xf9, .x=0x89, .y=0x33, .sp=0x40, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6f55, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6f56, .a=0xf9, .x=0x89, .y=0x33, .sp=0x40, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6f55, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6f55, .value=0xa0, .type=IO_READ},
        {.addr=0x6f56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0031) {
    const struct CPU_State initial_cpu = {.pc=0x34d9, .a=0xa6, .x=0xe2, .y=0x9c, .sp=0xdb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x34d9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x34da, .a=0xa6, .x=0xe2, .y=0x9c, .sp=0xdb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x34d9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x34d9, .value=0xa0, .type=IO_READ},
        {.addr=0x34da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0032) {
    const struct CPU_State initial_cpu = {.pc=0x7bae, .a=0x41, .x=0x67, .y=0x9c, .sp=0x7e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x7bae, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7baf, .a=0x41, .x=0x67, .y=0x9c, .sp=0x7e, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x7bae, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7bae, .value=0xa0, .type=IO_READ},
        {.addr=0x7baf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0033) {
    const struct CPU_State initial_cpu = {.pc=0xdb90, .a=0xeb, .x=0x5e, .y=0xc4, .sp=0x06, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdb90, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdb91, .a=0xeb, .x=0x5e, .y=0xc4, .sp=0x06, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xdb90, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdb90, .value=0xa0, .type=IO_READ},
        {.addr=0xdb91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0034) {
    const struct CPU_State initial_cpu = {.pc=0x0adc, .a=0x5c, .x=0xd4, .y=0xe3, .sp=0x02, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0adc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0add, .a=0x5c, .x=0xd4, .y=0xe3, .sp=0x02, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0adc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0adc, .value=0xa0, .type=IO_READ},
        {.addr=0x0add, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0035) {
    const struct CPU_State initial_cpu = {.pc=0x493b, .a=0x3a, .x=0xf6, .y=0xd1, .sp=0xfe, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x493b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x493c, .a=0x3a, .x=0xf6, .y=0xd1, .sp=0xfe, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x493b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x493b, .value=0xa0, .type=IO_READ},
        {.addr=0x493c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0036) {
    const struct CPU_State initial_cpu = {.pc=0xf7ee, .a=0x42, .x=0x1d, .y=0x9f, .sp=0x34, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf7ee, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf7ef, .a=0x42, .x=0x1d, .y=0x9f, .sp=0x34, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xf7ee, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf7ee, .value=0xa0, .type=IO_READ},
        {.addr=0xf7ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0037) {
    const struct CPU_State initial_cpu = {.pc=0x5c91, .a=0xec, .x=0xa6, .y=0x0b, .sp=0xf9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5c91, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5c92, .a=0xec, .x=0xa6, .y=0x0b, .sp=0xf9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5c91, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5c91, .value=0xa0, .type=IO_READ},
        {.addr=0x5c92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0038) {
    const struct CPU_State initial_cpu = {.pc=0xb9f1, .a=0x92, .x=0x44, .y=0x90, .sp=0xfa, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb9f2, .a=0x92, .x=0x44, .y=0x90, .sp=0xfa, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xb9f1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb9f1, .value=0xa0, .type=IO_READ},
        {.addr=0xb9f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0039) {
    const struct CPU_State initial_cpu = {.pc=0x9a7b, .a=0x1e, .x=0x09, .y=0x97, .sp=0xf2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9a7c, .a=0x1e, .x=0x09, .y=0x97, .sp=0xf2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9a7b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9a7b, .value=0xa0, .type=IO_READ},
        {.addr=0x9a7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_003A) {
    const struct CPU_State initial_cpu = {.pc=0xc1bf, .a=0x42, .x=0xfb, .y=0x65, .sp=0x41, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc1bf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc1c0, .a=0x42, .x=0xfb, .y=0x65, .sp=0x41, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc1bf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc1bf, .value=0xa0, .type=IO_READ},
        {.addr=0xc1c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_003B) {
    const struct CPU_State initial_cpu = {.pc=0x1b80, .a=0x83, .x=0x6f, .y=0x1c, .sp=0x33, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1b80, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1b81, .a=0x83, .x=0x6f, .y=0x1c, .sp=0x33, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1b80, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1b80, .value=0xa0, .type=IO_READ},
        {.addr=0x1b81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_003C) {
    const struct CPU_State initial_cpu = {.pc=0x2ca6, .a=0xad, .x=0x32, .y=0xfa, .sp=0x0a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ca7, .a=0xad, .x=0x32, .y=0xfa, .sp=0x0a, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x2ca6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ca6, .value=0xa0, .type=IO_READ},
        {.addr=0x2ca7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_003D) {
    const struct CPU_State initial_cpu = {.pc=0xcc88, .a=0x9c, .x=0x80, .y=0xb4, .sp=0xae, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xcc88, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcc89, .a=0x9c, .x=0x80, .y=0xb4, .sp=0xae, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xcc88, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcc88, .value=0xa0, .type=IO_READ},
        {.addr=0xcc89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_003E) {
    const struct CPU_State initial_cpu = {.pc=0xb15c, .a=0xcf, .x=0x48, .y=0xdd, .sp=0x13, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb15c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb15d, .a=0xcf, .x=0x48, .y=0xdd, .sp=0x13, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb15c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb15c, .value=0xa0, .type=IO_READ},
        {.addr=0xb15d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_003F) {
    const struct CPU_State initial_cpu = {.pc=0x5828, .a=0x15, .x=0xa3, .y=0xb5, .sp=0x97, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5828, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5829, .a=0x15, .x=0xa3, .y=0xb5, .sp=0x97, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5828, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5828, .value=0xa0, .type=IO_READ},
        {.addr=0x5829, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0040) {
    const struct CPU_State initial_cpu = {.pc=0x1cd5, .a=0x2c, .x=0xcb, .y=0xe1, .sp=0x17, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1cd6, .a=0x2c, .x=0xcb, .y=0xe1, .sp=0x17, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x1cd5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1cd5, .value=0xa0, .type=IO_READ},
        {.addr=0x1cd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0041) {
    const struct CPU_State initial_cpu = {.pc=0x2299, .a=0xa1, .x=0x2c, .y=0x84, .sp=0x3f, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2299, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x229a, .a=0xa1, .x=0x2c, .y=0x84, .sp=0x3f, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x2299, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2299, .value=0xa0, .type=IO_READ},
        {.addr=0x229a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0042) {
    const struct CPU_State initial_cpu = {.pc=0x66e3, .a=0x23, .x=0xd1, .y=0x4a, .sp=0x20, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x66e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x66e4, .a=0x23, .x=0xd1, .y=0x4a, .sp=0x20, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x66e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x66e3, .value=0xa0, .type=IO_READ},
        {.addr=0x66e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0043) {
    const struct CPU_State initial_cpu = {.pc=0xbaf4, .a=0xe8, .x=0x6b, .y=0xba, .sp=0x42, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xbaf4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbaf5, .a=0xe8, .x=0x6b, .y=0xba, .sp=0x42, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xbaf4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbaf4, .value=0xa0, .type=IO_READ},
        {.addr=0xbaf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0044) {
    const struct CPU_State initial_cpu = {.pc=0xe6b2, .a=0x43, .x=0x75, .y=0x49, .sp=0x23, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe6b2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe6b3, .a=0x43, .x=0x75, .y=0x49, .sp=0x23, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xe6b2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe6b2, .value=0xa0, .type=IO_READ},
        {.addr=0xe6b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0045) {
    const struct CPU_State initial_cpu = {.pc=0xa313, .a=0xa8, .x=0x4d, .y=0x49, .sp=0x49, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xa313, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa314, .a=0xa8, .x=0x4d, .y=0x49, .sp=0x49, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa313, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa313, .value=0xa0, .type=IO_READ},
        {.addr=0xa314, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0046) {
    const struct CPU_State initial_cpu = {.pc=0xcc70, .a=0x0f, .x=0x03, .y=0x95, .sp=0xe2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xcc70, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcc71, .a=0x0f, .x=0x03, .y=0x95, .sp=0xe2, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xcc70, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcc70, .value=0xa0, .type=IO_READ},
        {.addr=0xcc71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0047) {
    const struct CPU_State initial_cpu = {.pc=0x402f, .a=0xdd, .x=0xe2, .y=0xe2, .sp=0x67, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x402f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4030, .a=0xdd, .x=0xe2, .y=0xe2, .sp=0x67, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x402f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x402f, .value=0xa0, .type=IO_READ},
        {.addr=0x4030, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0048) {
    const struct CPU_State initial_cpu = {.pc=0xe81d, .a=0xee, .x=0xed, .y=0x76, .sp=0x27, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe81d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe81e, .a=0xee, .x=0xed, .y=0x76, .sp=0x27, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe81d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe81d, .value=0xa0, .type=IO_READ},
        {.addr=0xe81e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0049) {
    const struct CPU_State initial_cpu = {.pc=0xfff9, .a=0x30, .x=0x07, .y=0x5c, .sp=0xb3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xfff9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfffa, .a=0x30, .x=0x07, .y=0x5c, .sp=0xb3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfff9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfff9, .value=0xa0, .type=IO_READ},
        {.addr=0xfffa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_004A) {
    const struct CPU_State initial_cpu = {.pc=0xa32b, .a=0x45, .x=0x26, .y=0x88, .sp=0xf7, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa32b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa32c, .a=0x45, .x=0x26, .y=0x88, .sp=0xf7, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa32b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa32b, .value=0xa0, .type=IO_READ},
        {.addr=0xa32c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_004B) {
    const struct CPU_State initial_cpu = {.pc=0x08ae, .a=0x66, .x=0xb8, .y=0x3a, .sp=0xd0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x08ae, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x08af, .a=0x66, .x=0xb8, .y=0x3a, .sp=0xd0, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x08ae, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x08ae, .value=0xa0, .type=IO_READ},
        {.addr=0x08af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_004C) {
    const struct CPU_State initial_cpu = {.pc=0x574c, .a=0x50, .x=0x96, .y=0xab, .sp=0x98, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x574c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x574d, .a=0x50, .x=0x96, .y=0xab, .sp=0x98, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x574c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x574c, .value=0xa0, .type=IO_READ},
        {.addr=0x574d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_004D) {
    const struct CPU_State initial_cpu = {.pc=0x253d, .a=0x1c, .x=0xfb, .y=0x4b, .sp=0x4c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x253d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x253e, .a=0x1c, .x=0xfb, .y=0x4b, .sp=0x4c, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x253d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x253d, .value=0xa0, .type=IO_READ},
        {.addr=0x253e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_004E) {
    const struct CPU_State initial_cpu = {.pc=0xb73c, .a=0xbc, .x=0x44, .y=0xe7, .sp=0xb3, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xb73c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb73d, .a=0xbc, .x=0x44, .y=0xe7, .sp=0xb3, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb73c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb73c, .value=0xa0, .type=IO_READ},
        {.addr=0xb73d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_004F) {
    const struct CPU_State initial_cpu = {.pc=0xf852, .a=0xee, .x=0xac, .y=0x11, .sp=0x6f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf852, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf853, .a=0xee, .x=0xac, .y=0x11, .sp=0x6f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf852, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf852, .value=0xa0, .type=IO_READ},
        {.addr=0xf853, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0050) {
    const struct CPU_State initial_cpu = {.pc=0x8a57, .a=0x14, .x=0xdb, .y=0x78, .sp=0x83, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8a57, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8a58, .a=0x14, .x=0xdb, .y=0x78, .sp=0x83, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8a57, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8a57, .value=0xa0, .type=IO_READ},
        {.addr=0x8a58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0051) {
    const struct CPU_State initial_cpu = {.pc=0x48b5, .a=0xa9, .x=0xf7, .y=0xab, .sp=0x66, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x48b5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x48b6, .a=0xa9, .x=0xf7, .y=0xab, .sp=0x66, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x48b5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x48b5, .value=0xa0, .type=IO_READ},
        {.addr=0x48b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0052) {
    const struct CPU_State initial_cpu = {.pc=0xd1bb, .a=0x89, .x=0x48, .y=0x24, .sp=0x28, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd1bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd1bc, .a=0x89, .x=0x48, .y=0x24, .sp=0x28, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd1bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd1bb, .value=0xa0, .type=IO_READ},
        {.addr=0xd1bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0053) {
    const struct CPU_State initial_cpu = {.pc=0x6b87, .a=0xa6, .x=0x1d, .y=0x61, .sp=0x36, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6b87, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6b88, .a=0xa6, .x=0x1d, .y=0x61, .sp=0x36, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6b87, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6b87, .value=0xa0, .type=IO_READ},
        {.addr=0x6b88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0054) {
    const struct CPU_State initial_cpu = {.pc=0xa588, .a=0xb7, .x=0xcb, .y=0x25, .sp=0xf5, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa588, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa589, .a=0xb7, .x=0xcb, .y=0x25, .sp=0xf5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa588, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa588, .value=0xa0, .type=IO_READ},
        {.addr=0xa589, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0055) {
    const struct CPU_State initial_cpu = {.pc=0x5412, .a=0x0a, .x=0xa7, .y=0xc9, .sp=0x46, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5412, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5413, .a=0x0a, .x=0xa7, .y=0xc9, .sp=0x46, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x5412, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5412, .value=0xa0, .type=IO_READ},
        {.addr=0x5413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0056) {
    const struct CPU_State initial_cpu = {.pc=0x3baa, .a=0xee, .x=0x8b, .y=0x05, .sp=0x38, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3baa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3bab, .a=0xee, .x=0x8b, .y=0x05, .sp=0x38, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3baa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3baa, .value=0xa0, .type=IO_READ},
        {.addr=0x3bab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0057) {
    const struct CPU_State initial_cpu = {.pc=0x9ff1, .a=0x2d, .x=0x1b, .y=0x5d, .sp=0xef, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9ff1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9ff2, .a=0x2d, .x=0x1b, .y=0x5d, .sp=0xef, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9ff1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9ff1, .value=0xa0, .type=IO_READ},
        {.addr=0x9ff2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0058) {
    const struct CPU_State initial_cpu = {.pc=0xbdb7, .a=0x1d, .x=0xb9, .y=0x6e, .sp=0xae, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbdb8, .a=0x1d, .x=0xb9, .y=0x6e, .sp=0xae, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xbdb7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbdb7, .value=0xa0, .type=IO_READ},
        {.addr=0xbdb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0059) {
    const struct CPU_State initial_cpu = {.pc=0x6e4f, .a=0x8b, .x=0x4e, .y=0x9a, .sp=0x81, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x6e4f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6e50, .a=0x8b, .x=0x4e, .y=0x9a, .sp=0x81, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x6e4f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6e4f, .value=0xa0, .type=IO_READ},
        {.addr=0x6e50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf2f2, .a=0xf1, .x=0x3d, .y=0x04, .sp=0x20, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xf2f2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf2f3, .a=0xf1, .x=0x3d, .y=0x04, .sp=0x20, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf2f2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf2f2, .value=0xa0, .type=IO_READ},
        {.addr=0xf2f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_005B) {
    const struct CPU_State initial_cpu = {.pc=0xd92d, .a=0x35, .x=0x75, .y=0x5c, .sp=0x94, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd92d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd92e, .a=0x35, .x=0x75, .y=0x5c, .sp=0x94, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd92d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd92d, .value=0xa0, .type=IO_READ},
        {.addr=0xd92e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7ea7, .a=0x68, .x=0x28, .y=0xb0, .sp=0x52, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7ea8, .a=0x68, .x=0x28, .y=0xb0, .sp=0x52, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x7ea7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7ea7, .value=0xa0, .type=IO_READ},
        {.addr=0x7ea8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_005D) {
    const struct CPU_State initial_cpu = {.pc=0x1bec, .a=0xe0, .x=0x3f, .y=0xb4, .sp=0x02, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1bec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1bed, .a=0xe0, .x=0x3f, .y=0xb4, .sp=0x02, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1bec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1bec, .value=0xa0, .type=IO_READ},
        {.addr=0x1bed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_005E) {
    const struct CPU_State initial_cpu = {.pc=0x77a4, .a=0x5a, .x=0xc3, .y=0x68, .sp=0xc1, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x77a4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x77a5, .a=0x5a, .x=0xc3, .y=0x68, .sp=0xc1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x77a4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x77a4, .value=0xa0, .type=IO_READ},
        {.addr=0x77a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_005F) {
    const struct CPU_State initial_cpu = {.pc=0x8402, .a=0x03, .x=0x49, .y=0x7a, .sp=0xbb, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x8402, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8403, .a=0x03, .x=0x49, .y=0x7a, .sp=0xbb, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x8402, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8402, .value=0xa0, .type=IO_READ},
        {.addr=0x8403, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0060) {
    const struct CPU_State initial_cpu = {.pc=0xbfb4, .a=0xbe, .x=0xb6, .y=0xf2, .sp=0x0a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbfb5, .a=0xbe, .x=0xb6, .y=0xf2, .sp=0x0a, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xbfb4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbfb4, .value=0xa0, .type=IO_READ},
        {.addr=0xbfb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9ad2, .a=0x31, .x=0x72, .y=0x82, .sp=0x4a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9ad3, .a=0x31, .x=0x72, .y=0x82, .sp=0x4a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9ad2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9ad2, .value=0xa0, .type=IO_READ},
        {.addr=0x9ad3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0062) {
    const struct CPU_State initial_cpu = {.pc=0x32e9, .a=0xaf, .x=0x73, .y=0x1a, .sp=0x57, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x32e9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x32ea, .a=0xaf, .x=0x73, .y=0x1a, .sp=0x57, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x32e9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x32e9, .value=0xa0, .type=IO_READ},
        {.addr=0x32ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0063) {
    const struct CPU_State initial_cpu = {.pc=0x01c3, .a=0x3d, .x=0x79, .y=0x87, .sp=0xc1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x01c4, .a=0x3d, .x=0x79, .y=0x87, .sp=0xc1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x01c3, .value=0xa0, .type=IO_READ},
        {.addr=0x01c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0064) {
    const struct CPU_State initial_cpu = {.pc=0xdf81, .a=0x5f, .x=0xf1, .y=0x8f, .sp=0x87, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xdf81, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdf82, .a=0x5f, .x=0xf1, .y=0x8f, .sp=0x87, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xdf81, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdf81, .value=0xa0, .type=IO_READ},
        {.addr=0xdf82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0065) {
    const struct CPU_State initial_cpu = {.pc=0xf782, .a=0x15, .x=0x6b, .y=0x8c, .sp=0x28, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xf782, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf783, .a=0x15, .x=0x6b, .y=0x8c, .sp=0x28, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xf782, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf782, .value=0xa0, .type=IO_READ},
        {.addr=0xf783, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0066) {
    const struct CPU_State initial_cpu = {.pc=0x2d97, .a=0x98, .x=0xdf, .y=0x9e, .sp=0x22, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2d97, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2d98, .a=0x98, .x=0xdf, .y=0x9e, .sp=0x22, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x2d97, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2d97, .value=0xa0, .type=IO_READ},
        {.addr=0x2d98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0067) {
    const struct CPU_State initial_cpu = {.pc=0x0648, .a=0xdb, .x=0xf4, .y=0x2c, .sp=0xb7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0648, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0649, .a=0xdb, .x=0xf4, .y=0x2c, .sp=0xb7, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0648, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0648, .value=0xa0, .type=IO_READ},
        {.addr=0x0649, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0068) {
    const struct CPU_State initial_cpu = {.pc=0x600f, .a=0x04, .x=0x74, .y=0xd7, .sp=0x53, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x600f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6010, .a=0x04, .x=0x74, .y=0xd7, .sp=0x53, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x600f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x600f, .value=0xa0, .type=IO_READ},
        {.addr=0x6010, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0069) {
    const struct CPU_State initial_cpu = {.pc=0x679f, .a=0xd7, .x=0xb1, .y=0x64, .sp=0x6c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x679f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x67a0, .a=0xd7, .x=0xb1, .y=0x64, .sp=0x6c, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x679f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x679f, .value=0xa0, .type=IO_READ},
        {.addr=0x67a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_006A) {
    const struct CPU_State initial_cpu = {.pc=0xd383, .a=0x28, .x=0x94, .y=0x5e, .sp=0x48, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd383, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd384, .a=0x28, .x=0x94, .y=0x5e, .sp=0x48, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xd383, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd383, .value=0xa0, .type=IO_READ},
        {.addr=0xd384, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_006B) {
    const struct CPU_State initial_cpu = {.pc=0x4340, .a=0x66, .x=0xf5, .y=0xf2, .sp=0xc5, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4340, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4341, .a=0x66, .x=0xf5, .y=0xf2, .sp=0xc5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4340, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4340, .value=0xa0, .type=IO_READ},
        {.addr=0x4341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_006C) {
    const struct CPU_State initial_cpu = {.pc=0xc8df, .a=0xd8, .x=0x7f, .y=0x98, .sp=0x3f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc8df, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc8e0, .a=0xd8, .x=0x7f, .y=0x98, .sp=0x3f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc8df, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc8df, .value=0xa0, .type=IO_READ},
        {.addr=0xc8e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_006D) {
    const struct CPU_State initial_cpu = {.pc=0x41d4, .a=0x7d, .x=0x8a, .y=0xa8, .sp=0xb4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x41d4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x41d5, .a=0x7d, .x=0x8a, .y=0xa8, .sp=0xb4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x41d4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x41d4, .value=0xa0, .type=IO_READ},
        {.addr=0x41d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_006E) {
    const struct CPU_State initial_cpu = {.pc=0x7931, .a=0xb5, .x=0x0a, .y=0x4d, .sp=0x46, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7931, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7932, .a=0xb5, .x=0x0a, .y=0x4d, .sp=0x46, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x7931, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7931, .value=0xa0, .type=IO_READ},
        {.addr=0x7932, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_006F) {
    const struct CPU_State initial_cpu = {.pc=0x5600, .a=0xbd, .x=0x69, .y=0x7e, .sp=0xce, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x5600, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5601, .a=0xbd, .x=0x69, .y=0x7e, .sp=0xce, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x5600, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5600, .value=0xa0, .type=IO_READ},
        {.addr=0x5601, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0070) {
    const struct CPU_State initial_cpu = {.pc=0xbc15, .a=0x62, .x=0x2c, .y=0xdc, .sp=0xbf, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xbc15, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbc16, .a=0x62, .x=0x2c, .y=0xdc, .sp=0xbf, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xbc15, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbc15, .value=0xa0, .type=IO_READ},
        {.addr=0xbc16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0071) {
    const struct CPU_State initial_cpu = {.pc=0x4225, .a=0x62, .x=0xbf, .y=0xf7, .sp=0x67, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x4225, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4226, .a=0x62, .x=0xbf, .y=0xf7, .sp=0x67, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x4225, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4225, .value=0xa0, .type=IO_READ},
        {.addr=0x4226, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0072) {
    const struct CPU_State initial_cpu = {.pc=0xfac5, .a=0xdb, .x=0x57, .y=0x6d, .sp=0x7b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xfac5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfac6, .a=0xdb, .x=0x57, .y=0x6d, .sp=0x7b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfac5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfac5, .value=0xa0, .type=IO_READ},
        {.addr=0xfac6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0073) {
    const struct CPU_State initial_cpu = {.pc=0x4f13, .a=0x91, .x=0x0a, .y=0x6c, .sp=0x73, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4f13, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4f14, .a=0x91, .x=0x0a, .y=0x6c, .sp=0x73, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x4f13, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4f13, .value=0xa0, .type=IO_READ},
        {.addr=0x4f14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe341, .a=0xe9, .x=0xc2, .y=0x26, .sp=0xa2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe341, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe342, .a=0xe9, .x=0xc2, .y=0x26, .sp=0xa2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe341, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe341, .value=0xa0, .type=IO_READ},
        {.addr=0xe342, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0075) {
    const struct CPU_State initial_cpu = {.pc=0x8562, .a=0x79, .x=0xe9, .y=0xdc, .sp=0x36, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8562, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8563, .a=0x79, .x=0xe9, .y=0xdc, .sp=0x36, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8562, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8562, .value=0xa0, .type=IO_READ},
        {.addr=0x8563, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0076) {
    const struct CPU_State initial_cpu = {.pc=0xa4c5, .a=0x98, .x=0x93, .y=0xb2, .sp=0xf7, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa4c6, .a=0x98, .x=0x93, .y=0xb2, .sp=0xf7, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xa4c5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa4c5, .value=0xa0, .type=IO_READ},
        {.addr=0xa4c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0077) {
    const struct CPU_State initial_cpu = {.pc=0x7828, .a=0x38, .x=0x2a, .y=0x7d, .sp=0x59, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7828, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7829, .a=0x38, .x=0x2a, .y=0x7d, .sp=0x59, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7828, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7828, .value=0xa0, .type=IO_READ},
        {.addr=0x7829, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0078) {
    const struct CPU_State initial_cpu = {.pc=0x5920, .a=0xa6, .x=0x3f, .y=0xe4, .sp=0xaa, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5920, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5921, .a=0xa6, .x=0x3f, .y=0xe4, .sp=0xaa, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5920, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5920, .value=0xa0, .type=IO_READ},
        {.addr=0x5921, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0079) {
    const struct CPU_State initial_cpu = {.pc=0xbf97, .a=0x1b, .x=0x59, .y=0xa5, .sp=0xd0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf97, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0x1b, .x=0x59, .y=0xa5, .sp=0xd0, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xbf97, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbf97, .value=0xa0, .type=IO_READ},
        {.addr=0xbf98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_007A) {
    const struct CPU_State initial_cpu = {.pc=0x0ead, .a=0x58, .x=0xfa, .y=0x3a, .sp=0x2e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0ead, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0eae, .a=0x58, .x=0xfa, .y=0x3a, .sp=0x2e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0ead, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0ead, .value=0xa0, .type=IO_READ},
        {.addr=0x0eae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_007B) {
    const struct CPU_State initial_cpu = {.pc=0x0d3a, .a=0x5f, .x=0xd9, .y=0xc2, .sp=0x1b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0d3a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0d3b, .a=0x5f, .x=0xd9, .y=0xc2, .sp=0x1b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0d3a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0d3a, .value=0xa0, .type=IO_READ},
        {.addr=0x0d3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_007C) {
    const struct CPU_State initial_cpu = {.pc=0xa14c, .a=0x1a, .x=0x38, .y=0x7b, .sp=0x14, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa14c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa14d, .a=0x1a, .x=0x38, .y=0x7b, .sp=0x14, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xa14c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa14c, .value=0xa0, .type=IO_READ},
        {.addr=0xa14d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_007D) {
    const struct CPU_State initial_cpu = {.pc=0x8012, .a=0x37, .x=0xdb, .y=0x67, .sp=0x8d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x8012, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8013, .a=0x37, .x=0xdb, .y=0x67, .sp=0x8d, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x8012, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8012, .value=0xa0, .type=IO_READ},
        {.addr=0x8013, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_007E) {
    const struct CPU_State initial_cpu = {.pc=0x72dd, .a=0x21, .x=0x77, .y=0xb3, .sp=0xc1, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x72dd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x72de, .a=0x21, .x=0x77, .y=0xb3, .sp=0xc1, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x72dd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x72dd, .value=0xa0, .type=IO_READ},
        {.addr=0x72de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1412, .a=0xd3, .x=0x91, .y=0x6a, .sp=0x2a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1412, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1413, .a=0xd3, .x=0x91, .y=0x6a, .sp=0x2a, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x1412, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1412, .value=0xa0, .type=IO_READ},
        {.addr=0x1413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0080) {
    const struct CPU_State initial_cpu = {.pc=0x9bcf, .a=0xac, .x=0x1b, .y=0x9e, .sp=0xe4, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9bcf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9bd0, .a=0xac, .x=0x1b, .y=0x9e, .sp=0xe4, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x9bcf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9bcf, .value=0xa0, .type=IO_READ},
        {.addr=0x9bd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0081) {
    const struct CPU_State initial_cpu = {.pc=0x1079, .a=0x7d, .x=0xc4, .y=0x06, .sp=0xb1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x1079, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x107a, .a=0x7d, .x=0xc4, .y=0x06, .sp=0xb1, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x1079, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1079, .value=0xa0, .type=IO_READ},
        {.addr=0x107a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0082) {
    const struct CPU_State initial_cpu = {.pc=0x910f, .a=0xdb, .x=0x4e, .y=0x07, .sp=0x71, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x910f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9110, .a=0xdb, .x=0x4e, .y=0x07, .sp=0x71, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x910f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x910f, .value=0xa0, .type=IO_READ},
        {.addr=0x9110, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0083) {
    const struct CPU_State initial_cpu = {.pc=0xe63c, .a=0x47, .x=0xfa, .y=0x08, .sp=0x00, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe63c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe63d, .a=0x47, .x=0xfa, .y=0x08, .sp=0x00, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xe63c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe63c, .value=0xa0, .type=IO_READ},
        {.addr=0xe63d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0084) {
    const struct CPU_State initial_cpu = {.pc=0xd646, .a=0xc6, .x=0x3f, .y=0x98, .sp=0x08, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xd646, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd647, .a=0xc6, .x=0x3f, .y=0x98, .sp=0x08, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd646, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd646, .value=0xa0, .type=IO_READ},
        {.addr=0xd647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0085) {
    const struct CPU_State initial_cpu = {.pc=0x4445, .a=0x7f, .x=0x6f, .y=0x3a, .sp=0x12, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4445, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4446, .a=0x7f, .x=0x6f, .y=0x3a, .sp=0x12, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4445, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4445, .value=0xa0, .type=IO_READ},
        {.addr=0x4446, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0086) {
    const struct CPU_State initial_cpu = {.pc=0xb620, .a=0x00, .x=0xe7, .y=0xf8, .sp=0x0f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb620, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb621, .a=0x00, .x=0xe7, .y=0xf8, .sp=0x0f, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xb620, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb620, .value=0xa0, .type=IO_READ},
        {.addr=0xb621, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0087) {
    const struct CPU_State initial_cpu = {.pc=0x344e, .a=0xbc, .x=0xcf, .y=0xb3, .sp=0xe2, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x344e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x344f, .a=0xbc, .x=0xcf, .y=0xb3, .sp=0xe2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x344e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x344e, .value=0xa0, .type=IO_READ},
        {.addr=0x344f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0088) {
    const struct CPU_State initial_cpu = {.pc=0xf57c, .a=0x43, .x=0x05, .y=0x27, .sp=0x64, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf57c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf57d, .a=0x43, .x=0x05, .y=0x27, .sp=0x64, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf57c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf57c, .value=0xa0, .type=IO_READ},
        {.addr=0xf57d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0089) {
    const struct CPU_State initial_cpu = {.pc=0x8383, .a=0xbb, .x=0xb6, .y=0xa1, .sp=0x7c, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x8383, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8384, .a=0xbb, .x=0xb6, .y=0xa1, .sp=0x7c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x8383, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8383, .value=0xa0, .type=IO_READ},
        {.addr=0x8384, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_008A) {
    const struct CPU_State initial_cpu = {.pc=0xe97b, .a=0x19, .x=0x8d, .y=0x62, .sp=0x24, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe97b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe97c, .a=0x19, .x=0x8d, .y=0x62, .sp=0x24, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xe97b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe97b, .value=0xa0, .type=IO_READ},
        {.addr=0xe97c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_008B) {
    const struct CPU_State initial_cpu = {.pc=0x7493, .a=0x88, .x=0x89, .y=0xe1, .sp=0x31, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7493, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7494, .a=0x88, .x=0x89, .y=0xe1, .sp=0x31, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x7493, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7493, .value=0xa0, .type=IO_READ},
        {.addr=0x7494, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_008C) {
    const struct CPU_State initial_cpu = {.pc=0x6d29, .a=0xc4, .x=0xba, .y=0x3b, .sp=0xf1, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6d29, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d2a, .a=0xc4, .x=0xba, .y=0x3b, .sp=0xf1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x6d29, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d29, .value=0xa0, .type=IO_READ},
        {.addr=0x6d2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_008D) {
    const struct CPU_State initial_cpu = {.pc=0xfabb, .a=0x60, .x=0x06, .y=0x9b, .sp=0x8e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xfabb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfabc, .a=0x60, .x=0x06, .y=0x9b, .sp=0x8e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xfabb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfabb, .value=0xa0, .type=IO_READ},
        {.addr=0xfabc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_008E) {
    const struct CPU_State initial_cpu = {.pc=0x3481, .a=0x29, .x=0x13, .y=0x75, .sp=0xf1, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x3481, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3482, .a=0x29, .x=0x13, .y=0x75, .sp=0xf1, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x3481, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3481, .value=0xa0, .type=IO_READ},
        {.addr=0x3482, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_008F) {
    const struct CPU_State initial_cpu = {.pc=0x80f9, .a=0xd9, .x=0xd0, .y=0x46, .sp=0x50, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x80f9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x80fa, .a=0xd9, .x=0xd0, .y=0x46, .sp=0x50, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x80f9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x80f9, .value=0xa0, .type=IO_READ},
        {.addr=0x80fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0090) {
    const struct CPU_State initial_cpu = {.pc=0xdc63, .a=0xee, .x=0x2a, .y=0x78, .sp=0x4b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xdc63, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdc64, .a=0xee, .x=0x2a, .y=0x78, .sp=0x4b, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xdc63, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdc63, .value=0xa0, .type=IO_READ},
        {.addr=0xdc64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0091) {
    const struct CPU_State initial_cpu = {.pc=0x2654, .a=0xfe, .x=0xcd, .y=0xf4, .sp=0x1c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2654, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2655, .a=0xfe, .x=0xcd, .y=0xf4, .sp=0x1c, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x2654, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2654, .value=0xa0, .type=IO_READ},
        {.addr=0x2655, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0092) {
    const struct CPU_State initial_cpu = {.pc=0x3baa, .a=0x94, .x=0xb2, .y=0x55, .sp=0x28, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x3baa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3bab, .a=0x94, .x=0xb2, .y=0x55, .sp=0x28, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x3baa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3baa, .value=0xa0, .type=IO_READ},
        {.addr=0x3bab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0093) {
    const struct CPU_State initial_cpu = {.pc=0x4cd8, .a=0x10, .x=0x2c, .y=0x30, .sp=0x20, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4cd9, .a=0x10, .x=0x2c, .y=0x30, .sp=0x20, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x4cd8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4cd8, .value=0xa0, .type=IO_READ},
        {.addr=0x4cd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0094) {
    const struct CPU_State initial_cpu = {.pc=0x8e02, .a=0x64, .x=0x96, .y=0x6b, .sp=0x99, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8e02, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8e03, .a=0x64, .x=0x96, .y=0x6b, .sp=0x99, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x8e02, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8e02, .value=0xa0, .type=IO_READ},
        {.addr=0x8e03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0095) {
    const struct CPU_State initial_cpu = {.pc=0x93f9, .a=0xd2, .x=0x01, .y=0x9f, .sp=0x24, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x93f9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x93fa, .a=0xd2, .x=0x01, .y=0x9f, .sp=0x24, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x93f9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x93f9, .value=0xa0, .type=IO_READ},
        {.addr=0x93fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0096) {
    const struct CPU_State initial_cpu = {.pc=0xa296, .a=0xda, .x=0x4c, .y=0xd1, .sp=0x23, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa296, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa297, .a=0xda, .x=0x4c, .y=0xd1, .sp=0x23, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa296, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa296, .value=0xa0, .type=IO_READ},
        {.addr=0xa297, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0097) {
    const struct CPU_State initial_cpu = {.pc=0x367d, .a=0x16, .x=0x78, .y=0x96, .sp=0x09, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x367d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x367e, .a=0x16, .x=0x78, .y=0x96, .sp=0x09, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x367d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x367d, .value=0xa0, .type=IO_READ},
        {.addr=0x367e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0098) {
    const struct CPU_State initial_cpu = {.pc=0x7e04, .a=0x9b, .x=0x01, .y=0xe0, .sp=0x54, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7e04, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7e05, .a=0x9b, .x=0x01, .y=0xe0, .sp=0x54, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x7e04, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7e04, .value=0xa0, .type=IO_READ},
        {.addr=0x7e05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0099) {
    const struct CPU_State initial_cpu = {.pc=0x82bd, .a=0x4a, .x=0x27, .y=0xf5, .sp=0x57, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x82bd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x82be, .a=0x4a, .x=0x27, .y=0xf5, .sp=0x57, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x82bd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x82bd, .value=0xa0, .type=IO_READ},
        {.addr=0x82be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_009A) {
    const struct CPU_State initial_cpu = {.pc=0xc4e3, .a=0x18, .x=0x32, .y=0xa4, .sp=0xac, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xc4e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc4e4, .a=0x18, .x=0x32, .y=0xa4, .sp=0xac, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc4e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc4e3, .value=0xa0, .type=IO_READ},
        {.addr=0xc4e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_009B) {
    const struct CPU_State initial_cpu = {.pc=0x904b, .a=0x53, .x=0x55, .y=0x68, .sp=0x81, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x904b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x904c, .a=0x53, .x=0x55, .y=0x68, .sp=0x81, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x904b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x904b, .value=0xa0, .type=IO_READ},
        {.addr=0x904c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_009C) {
    const struct CPU_State initial_cpu = {.pc=0x2724, .a=0x83, .x=0x38, .y=0x29, .sp=0xdb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2724, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2725, .a=0x83, .x=0x38, .y=0x29, .sp=0xdb, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2724, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2724, .value=0xa0, .type=IO_READ},
        {.addr=0x2725, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_009D) {
    const struct CPU_State initial_cpu = {.pc=0xc16f, .a=0x43, .x=0xb0, .y=0x87, .sp=0x69, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc16f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc170, .a=0x43, .x=0xb0, .y=0x87, .sp=0x69, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc16f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc16f, .value=0xa0, .type=IO_READ},
        {.addr=0xc170, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_009E) {
    const struct CPU_State initial_cpu = {.pc=0x5e25, .a=0x6b, .x=0xa4, .y=0xa3, .sp=0x90, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5e25, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5e26, .a=0x6b, .x=0xa4, .y=0xa3, .sp=0x90, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x5e25, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5e25, .value=0xa0, .type=IO_READ},
        {.addr=0x5e26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_009F) {
    const struct CPU_State initial_cpu = {.pc=0xffd0, .a=0xba, .x=0xe2, .y=0x06, .sp=0x2a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xffd0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xffd1, .a=0xba, .x=0xe2, .y=0x06, .sp=0x2a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xffd0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xffd0, .value=0xa0, .type=IO_READ},
        {.addr=0xffd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xf743, .a=0xfd, .x=0xad, .y=0xad, .sp=0x58, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf743, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf744, .a=0xfd, .x=0xad, .y=0xad, .sp=0x58, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xf743, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf743, .value=0xa0, .type=IO_READ},
        {.addr=0xf744, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x47b5, .a=0x50, .x=0xe2, .y=0x07, .sp=0xdb, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x47b5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x47b6, .a=0x50, .x=0xe2, .y=0x07, .sp=0xdb, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x47b5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x47b5, .value=0xa0, .type=IO_READ},
        {.addr=0x47b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x15c2, .a=0x07, .x=0x1c, .y=0x2f, .sp=0x0c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x15c2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x15c3, .a=0x07, .x=0x1c, .y=0x2f, .sp=0x0c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x15c2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x15c2, .value=0xa0, .type=IO_READ},
        {.addr=0x15c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x3ca2, .a=0x97, .x=0x48, .y=0xa2, .sp=0x3e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3ca3, .a=0x97, .x=0x48, .y=0xa2, .sp=0x3e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3ca2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3ca2, .value=0xa0, .type=IO_READ},
        {.addr=0x3ca3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x6bd8, .a=0x58, .x=0xb3, .y=0x61, .sp=0x2b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6bd9, .a=0x58, .x=0xb3, .y=0x61, .sp=0x2b, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x6bd8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6bd8, .value=0xa0, .type=IO_READ},
        {.addr=0x6bd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x93cd, .a=0x51, .x=0x35, .y=0xe9, .sp=0x25, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x93cd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x93ce, .a=0x51, .x=0x35, .y=0xe9, .sp=0x25, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x93cd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x93cd, .value=0xa0, .type=IO_READ},
        {.addr=0x93ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x7eb6, .a=0x80, .x=0xb7, .y=0xd6, .sp=0xd2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7eb7, .a=0x80, .x=0xb7, .y=0xd6, .sp=0xd2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7eb6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7eb6, .value=0xa0, .type=IO_READ},
        {.addr=0x7eb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x4bf3, .a=0x20, .x=0xc3, .y=0x70, .sp=0x62, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x4bf3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4bf4, .a=0x20, .x=0xc3, .y=0x70, .sp=0x62, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x4bf3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4bf3, .value=0xa0, .type=IO_READ},
        {.addr=0x4bf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xff58, .a=0x67, .x=0x78, .y=0xec, .sp=0xae, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xff58, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xff59, .a=0x67, .x=0x78, .y=0xec, .sp=0xae, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xff58, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xff58, .value=0xa0, .type=IO_READ},
        {.addr=0xff59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x35a1, .a=0x8e, .x=0x78, .y=0x11, .sp=0x0a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x35a1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x35a2, .a=0x8e, .x=0x78, .y=0x11, .sp=0x0a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x35a1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x35a1, .value=0xa0, .type=IO_READ},
        {.addr=0x35a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x0445, .a=0xf3, .x=0xc5, .y=0x39, .sp=0xcd, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0445, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0446, .a=0xf3, .x=0xc5, .y=0x39, .sp=0xcd, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0445, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0445, .value=0xa0, .type=IO_READ},
        {.addr=0x0446, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xcffd, .a=0x75, .x=0x96, .y=0xa9, .sp=0x44, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xcffd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcffe, .a=0x75, .x=0x96, .y=0xa9, .sp=0x44, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xcffd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcffd, .value=0xa0, .type=IO_READ},
        {.addr=0xcffe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xe874, .a=0xe9, .x=0x0b, .y=0xa5, .sp=0xfc, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xe874, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe875, .a=0xe9, .x=0x0b, .y=0xa5, .sp=0xfc, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xe874, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe874, .value=0xa0, .type=IO_READ},
        {.addr=0xe875, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x99ce, .a=0xa8, .x=0xe1, .y=0x47, .sp=0x07, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x99ce, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x99cf, .a=0xa8, .x=0xe1, .y=0x47, .sp=0x07, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x99ce, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x99ce, .value=0xa0, .type=IO_READ},
        {.addr=0x99cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x157e, .a=0xf4, .x=0x13, .y=0x3f, .sp=0x71, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x157e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x157f, .a=0xf4, .x=0x13, .y=0x3f, .sp=0x71, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x157e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x157e, .value=0xa0, .type=IO_READ},
        {.addr=0x157f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xd472, .a=0xef, .x=0xca, .y=0xb3, .sp=0x98, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd472, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd473, .a=0xef, .x=0xca, .y=0xb3, .sp=0x98, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xd472, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd472, .value=0xa0, .type=IO_READ},
        {.addr=0xd473, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xaca9, .a=0xc0, .x=0x46, .y=0xa8, .sp=0xd5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xaca9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xacaa, .a=0xc0, .x=0x46, .y=0xa8, .sp=0xd5, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xaca9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaca9, .value=0xa0, .type=IO_READ},
        {.addr=0xacaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x2c3e, .a=0xcc, .x=0xa4, .y=0x4c, .sp=0xc1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2c3e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2c3f, .a=0xcc, .x=0xa4, .y=0x4c, .sp=0xc1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x2c3e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2c3e, .value=0xa0, .type=IO_READ},
        {.addr=0x2c3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xe527, .a=0x39, .x=0x22, .y=0x3d, .sp=0x61, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe527, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe528, .a=0x39, .x=0x22, .y=0x3d, .sp=0x61, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe527, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe527, .value=0xa0, .type=IO_READ},
        {.addr=0xe528, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xb38e, .a=0x9a, .x=0xf3, .y=0xbf, .sp=0xb9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb38e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb38f, .a=0x9a, .x=0xf3, .y=0xbf, .sp=0xb9, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xb38e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb38e, .value=0xa0, .type=IO_READ},
        {.addr=0xb38f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x00e3, .a=0x5b, .x=0x83, .y=0x3a, .sp=0x61, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x00e4, .a=0x5b, .x=0x83, .y=0x3a, .sp=0x61, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x00e3, .value=0xa0, .type=IO_READ},
        {.addr=0x00e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x2985, .a=0xbc, .x=0x4d, .y=0x3a, .sp=0x5a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2985, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2986, .a=0xbc, .x=0x4d, .y=0x3a, .sp=0x5a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2985, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2985, .value=0xa0, .type=IO_READ},
        {.addr=0x2986, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x8dbd, .a=0xea, .x=0x65, .y=0xf1, .sp=0xa5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x8dbd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8dbe, .a=0xea, .x=0x65, .y=0xf1, .sp=0xa5, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x8dbd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8dbd, .value=0xa0, .type=IO_READ},
        {.addr=0x8dbe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x6450, .a=0x24, .x=0xa6, .y=0x00, .sp=0x91, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6450, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6451, .a=0x24, .x=0xa6, .y=0x00, .sp=0x91, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x6450, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6450, .value=0xa0, .type=IO_READ},
        {.addr=0x6451, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x2645, .a=0xd8, .x=0x37, .y=0x39, .sp=0x2d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2645, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2646, .a=0xd8, .x=0x37, .y=0x39, .sp=0x2d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2645, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2645, .value=0xa0, .type=IO_READ},
        {.addr=0x2646, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xda22, .a=0x93, .x=0x6e, .y=0x1e, .sp=0x54, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xda22, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xda23, .a=0x93, .x=0x6e, .y=0x1e, .sp=0x54, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xda22, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xda22, .value=0xa0, .type=IO_READ},
        {.addr=0xda23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xfc46, .a=0xf9, .x=0xc5, .y=0x6b, .sp=0xd1, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xfc46, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfc47, .a=0xf9, .x=0xc5, .y=0x6b, .sp=0xd1, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xfc46, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfc46, .value=0xa0, .type=IO_READ},
        {.addr=0xfc47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xdc39, .a=0x48, .x=0x70, .y=0x66, .sp=0x01, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xdc39, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdc3a, .a=0x48, .x=0x70, .y=0x66, .sp=0x01, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xdc39, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdc39, .value=0xa0, .type=IO_READ},
        {.addr=0xdc3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x517a, .a=0xf7, .x=0x63, .y=0xe0, .sp=0x02, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x517a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x517b, .a=0xf7, .x=0x63, .y=0xe0, .sp=0x02, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x517a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x517a, .value=0xa0, .type=IO_READ},
        {.addr=0x517b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xd9ff, .a=0xe9, .x=0xdf, .y=0x9b, .sp=0xaa, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ff, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xda00, .a=0xe9, .x=0xdf, .y=0x9b, .sp=0xaa, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xd9ff, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd9ff, .value=0xa0, .type=IO_READ},
        {.addr=0xda00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xaf19, .a=0xc0, .x=0x4a, .y=0xa7, .sp=0xef, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xaf19, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaf1a, .a=0xc0, .x=0x4a, .y=0xa7, .sp=0xef, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xaf19, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaf19, .value=0xa0, .type=IO_READ},
        {.addr=0xaf1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x11a6, .a=0xd0, .x=0xa2, .y=0x7e, .sp=0x38, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x11a6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x11a7, .a=0xd0, .x=0xa2, .y=0x7e, .sp=0x38, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x11a6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x11a6, .value=0xa0, .type=IO_READ},
        {.addr=0x11a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xb9ec, .a=0x0e, .x=0x63, .y=0x54, .sp=0x24, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xb9ec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb9ed, .a=0x0e, .x=0x63, .y=0x54, .sp=0x24, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb9ec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb9ec, .value=0xa0, .type=IO_READ},
        {.addr=0xb9ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xcda2, .a=0x54, .x=0x8d, .y=0x23, .sp=0x97, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xcda2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcda3, .a=0x54, .x=0x8d, .y=0x23, .sp=0x97, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xcda2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcda2, .value=0xa0, .type=IO_READ},
        {.addr=0xcda3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x93d2, .a=0xa3, .x=0x34, .y=0x9f, .sp=0x53, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x93d2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x93d3, .a=0xa3, .x=0x34, .y=0x9f, .sp=0x53, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x93d2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x93d2, .value=0xa0, .type=IO_READ},
        {.addr=0x93d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x49ec, .a=0x78, .x=0x99, .y=0xe2, .sp=0x76, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x49ec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x49ed, .a=0x78, .x=0x99, .y=0xe2, .sp=0x76, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x49ec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x49ec, .value=0xa0, .type=IO_READ},
        {.addr=0x49ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xff5e, .a=0xed, .x=0x35, .y=0x53, .sp=0x04, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xff5e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xff5f, .a=0xed, .x=0x35, .y=0x53, .sp=0x04, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xff5e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xff5e, .value=0xa0, .type=IO_READ},
        {.addr=0xff5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xad44, .a=0x77, .x=0x8e, .y=0xb9, .sp=0x99, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xad44, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xad45, .a=0x77, .x=0x8e, .y=0xb9, .sp=0x99, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xad44, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xad44, .value=0xa0, .type=IO_READ},
        {.addr=0xad45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xd21d, .a=0x19, .x=0x9c, .y=0xef, .sp=0x3c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd21d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd21e, .a=0x19, .x=0x9c, .y=0xef, .sp=0x3c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd21d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd21d, .value=0xa0, .type=IO_READ},
        {.addr=0xd21e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x032f, .a=0x03, .x=0xd0, .y=0x25, .sp=0xe7, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x032f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0330, .a=0x03, .x=0xd0, .y=0x25, .sp=0xe7, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x032f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x032f, .value=0xa0, .type=IO_READ},
        {.addr=0x0330, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xeb05, .a=0x7d, .x=0xec, .y=0x44, .sp=0xf7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xeb05, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeb06, .a=0x7d, .x=0xec, .y=0x44, .sp=0xf7, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xeb05, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeb05, .value=0xa0, .type=IO_READ},
        {.addr=0xeb06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x01ed, .a=0xee, .x=0x0c, .y=0xc4, .sp=0xf5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x01ee, .a=0xee, .x=0x0c, .y=0xc4, .sp=0xf5, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x01ed, .value=0xa0, .type=IO_READ},
        {.addr=0x01ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0102, .a=0xa2, .x=0x71, .y=0x42, .sp=0x14, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0103, .a=0xa2, .x=0x71, .y=0x42, .sp=0x14, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0102, .value=0xa0, .type=IO_READ},
        {.addr=0x0103, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x83a7, .a=0x28, .x=0xae, .y=0x40, .sp=0x26, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x83a7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x83a8, .a=0x28, .x=0xae, .y=0x40, .sp=0x26, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x83a7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x83a7, .value=0xa0, .type=IO_READ},
        {.addr=0x83a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x149a, .a=0x65, .x=0x2a, .y=0x4d, .sp=0x33, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x149a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x149b, .a=0x65, .x=0x2a, .y=0x4d, .sp=0x33, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x149a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x149a, .value=0xa0, .type=IO_READ},
        {.addr=0x149b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xffbd, .a=0x49, .x=0x16, .y=0xa1, .sp=0x64, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xffbd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xffbe, .a=0x49, .x=0x16, .y=0xa1, .sp=0x64, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xffbd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xffbd, .value=0xa0, .type=IO_READ},
        {.addr=0xffbe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x3097, .a=0x31, .x=0x58, .y=0xed, .sp=0x3c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3097, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3098, .a=0x31, .x=0x58, .y=0xed, .sp=0x3c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3097, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3097, .value=0xa0, .type=IO_READ},
        {.addr=0x3098, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x294b, .a=0xb5, .x=0x10, .y=0x48, .sp=0xcf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x294b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x294c, .a=0xb5, .x=0x10, .y=0x48, .sp=0xcf, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x294b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x294b, .value=0xa0, .type=IO_READ},
        {.addr=0x294c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x48b0, .a=0x21, .x=0x35, .y=0xc6, .sp=0x3d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x48b0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x48b1, .a=0x21, .x=0x35, .y=0xc6, .sp=0x3d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x48b0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x48b0, .value=0xa0, .type=IO_READ},
        {.addr=0x48b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xfec5, .a=0x1c, .x=0x81, .y=0xb7, .sp=0x9a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xfec5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfec6, .a=0x1c, .x=0x81, .y=0xb7, .sp=0x9a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfec5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfec5, .value=0xa0, .type=IO_READ},
        {.addr=0xfec6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x0244, .a=0x43, .x=0xa2, .y=0x71, .sp=0x6c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0244, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0245, .a=0x43, .x=0xa2, .y=0x71, .sp=0x6c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0244, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0244, .value=0xa0, .type=IO_READ},
        {.addr=0x0245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x204c, .a=0x15, .x=0x28, .y=0x55, .sp=0x42, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x204c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x204d, .a=0x15, .x=0x28, .y=0x55, .sp=0x42, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x204c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x204c, .value=0xa0, .type=IO_READ},
        {.addr=0x204d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x9ecf, .a=0x03, .x=0xe2, .y=0x66, .sp=0xb2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9ecf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9ed0, .a=0x03, .x=0xe2, .y=0x66, .sp=0xb2, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9ecf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9ecf, .value=0xa0, .type=IO_READ},
        {.addr=0x9ed0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x0e76, .a=0x1b, .x=0xe1, .y=0x0b, .sp=0x28, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0e76, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0e77, .a=0x1b, .x=0xe1, .y=0x0b, .sp=0x28, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0e76, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0e76, .value=0xa0, .type=IO_READ},
        {.addr=0x0e77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xac00, .a=0x43, .x=0x51, .y=0xda, .sp=0x49, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xac00, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xac01, .a=0x43, .x=0x51, .y=0xda, .sp=0x49, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xac00, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xac00, .value=0xa0, .type=IO_READ},
        {.addr=0xac01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xf782, .a=0x62, .x=0x14, .y=0xe2, .sp=0x7e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xf782, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf783, .a=0x62, .x=0x14, .y=0xe2, .sp=0x7e, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xf782, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf782, .value=0xa0, .type=IO_READ},
        {.addr=0xf783, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x8cbe, .a=0xf7, .x=0xa7, .y=0xe8, .sp=0x4d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8cbe, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8cbf, .a=0xf7, .x=0xa7, .y=0xe8, .sp=0x4d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8cbe, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8cbe, .value=0xa0, .type=IO_READ},
        {.addr=0x8cbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x249c, .a=0x95, .x=0x05, .y=0x00, .sp=0x0c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x249c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x249d, .a=0x95, .x=0x05, .y=0x00, .sp=0x0c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x249c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x249c, .value=0xa0, .type=IO_READ},
        {.addr=0x249d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xd2ba, .a=0x36, .x=0xbf, .y=0x54, .sp=0xaa, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ba, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd2bb, .a=0x36, .x=0xbf, .y=0x54, .sp=0xaa, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xd2ba, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd2ba, .value=0xa0, .type=IO_READ},
        {.addr=0xd2bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb84c, .a=0xae, .x=0x4e, .y=0x3d, .sp=0xea, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb84c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb84d, .a=0xae, .x=0x4e, .y=0x3d, .sp=0xea, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb84c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb84c, .value=0xa0, .type=IO_READ},
        {.addr=0xb84d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xa1eb, .a=0xcf, .x=0x49, .y=0x8e, .sp=0x55, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa1eb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa1ec, .a=0xcf, .x=0x49, .y=0x8e, .sp=0x55, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa1eb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa1eb, .value=0xa0, .type=IO_READ},
        {.addr=0xa1ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xec9b, .a=0x0a, .x=0x0a, .y=0x3e, .sp=0x0f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xec9b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xec9c, .a=0x0a, .x=0x0a, .y=0x3e, .sp=0x0f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xec9b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xec9b, .value=0xa0, .type=IO_READ},
        {.addr=0xec9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xa37d, .a=0xdc, .x=0xb1, .y=0x4e, .sp=0x9f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa37d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa37e, .a=0xdc, .x=0xb1, .y=0x4e, .sp=0x9f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa37d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa37d, .value=0xa0, .type=IO_READ},
        {.addr=0xa37e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8875, .a=0x17, .x=0x00, .y=0x2c, .sp=0x04, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x8875, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8876, .a=0x17, .x=0x00, .y=0x2c, .sp=0x04, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x8875, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8875, .value=0xa0, .type=IO_READ},
        {.addr=0x8876, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc8c2, .a=0x5f, .x=0xa8, .y=0x73, .sp=0x32, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc8c3, .a=0x5f, .x=0xa8, .y=0x73, .sp=0x32, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc8c2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc8c2, .value=0xa0, .type=IO_READ},
        {.addr=0xc8c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x6d76, .a=0x55, .x=0x2c, .y=0xfd, .sp=0x91, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x6d76, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d77, .a=0x55, .x=0x2c, .y=0xfd, .sp=0x91, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x6d76, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d76, .value=0xa0, .type=IO_READ},
        {.addr=0x6d77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x568d, .a=0xc8, .x=0x36, .y=0x93, .sp=0x00, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x568d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x568e, .a=0xc8, .x=0x36, .y=0x93, .sp=0x00, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x568d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x568d, .value=0xa0, .type=IO_READ},
        {.addr=0x568e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x514e, .a=0x87, .x=0xaa, .y=0x98, .sp=0xe0, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x514e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x514f, .a=0x87, .x=0xaa, .y=0x98, .sp=0xe0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x514e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x514e, .value=0xa0, .type=IO_READ},
        {.addr=0x514f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x808c, .a=0xb2, .x=0x34, .y=0xfb, .sp=0x7a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x808c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x808d, .a=0xb2, .x=0x34, .y=0xfb, .sp=0x7a, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x808c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x808c, .value=0xa0, .type=IO_READ},
        {.addr=0x808d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x667a, .a=0x11, .x=0xcb, .y=0xd3, .sp=0x9c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x667a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x667b, .a=0x11, .x=0xcb, .y=0xd3, .sp=0x9c, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x667a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x667a, .value=0xa0, .type=IO_READ},
        {.addr=0x667b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x9894, .a=0x4a, .x=0xd2, .y=0xa2, .sp=0xfa, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9894, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9895, .a=0x4a, .x=0xd2, .y=0xa2, .sp=0xfa, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x9894, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9894, .value=0xa0, .type=IO_READ},
        {.addr=0x9895, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x34de, .a=0x50, .x=0x4d, .y=0xa7, .sp=0x72, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x34de, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x34df, .a=0x50, .x=0x4d, .y=0xa7, .sp=0x72, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x34de, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x34de, .value=0xa0, .type=IO_READ},
        {.addr=0x34df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x5fad, .a=0x41, .x=0x76, .y=0x89, .sp=0xcf, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5fad, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5fae, .a=0x41, .x=0x76, .y=0x89, .sp=0xcf, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5fad, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5fad, .value=0xa0, .type=IO_READ},
        {.addr=0x5fae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x027c, .a=0x66, .x=0xc0, .y=0x42, .sp=0x43, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x027c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x027d, .a=0x66, .x=0xc0, .y=0x42, .sp=0x43, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x027c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x027c, .value=0xa0, .type=IO_READ},
        {.addr=0x027d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x983f, .a=0x1a, .x=0x48, .y=0xc1, .sp=0x33, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x983f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9840, .a=0x1a, .x=0x48, .y=0xc1, .sp=0x33, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x983f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x983f, .value=0xa0, .type=IO_READ},
        {.addr=0x9840, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x6b62, .a=0xa2, .x=0x13, .y=0x14, .sp=0x81, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6b62, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6b63, .a=0xa2, .x=0x13, .y=0x14, .sp=0x81, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6b62, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6b62, .value=0xa0, .type=IO_READ},
        {.addr=0x6b63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xa867, .a=0xb6, .x=0x8e, .y=0x28, .sp=0xef, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa867, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa868, .a=0xb6, .x=0x8e, .y=0x28, .sp=0xef, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xa867, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa867, .value=0xa0, .type=IO_READ},
        {.addr=0xa868, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x4eb0, .a=0x95, .x=0x2c, .y=0xc9, .sp=0x17, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4eb1, .a=0x95, .x=0x2c, .y=0xc9, .sp=0x17, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4eb0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4eb0, .value=0xa0, .type=IO_READ},
        {.addr=0x4eb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x56f0, .a=0x83, .x=0x89, .y=0x1f, .sp=0xac, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x56f0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x56f1, .a=0x83, .x=0x89, .y=0x1f, .sp=0xac, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x56f0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x56f0, .value=0xa0, .type=IO_READ},
        {.addr=0x56f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x97a9, .a=0xd0, .x=0xae, .y=0xa1, .sp=0x0b, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x97a9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x97aa, .a=0xd0, .x=0xae, .y=0xa1, .sp=0x0b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x97a9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x97a9, .value=0xa0, .type=IO_READ},
        {.addr=0x97aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x5561, .a=0xe1, .x=0x79, .y=0xab, .sp=0x27, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x5561, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5562, .a=0xe1, .x=0x79, .y=0xab, .sp=0x27, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x5561, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5561, .value=0xa0, .type=IO_READ},
        {.addr=0x5562, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xb050, .a=0xe5, .x=0xc1, .y=0xff, .sp=0x93, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb050, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb051, .a=0xe5, .x=0xc1, .y=0xff, .sp=0x93, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb050, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb050, .value=0xa0, .type=IO_READ},
        {.addr=0xb051, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xf9c2, .a=0x2c, .x=0x74, .y=0xb1, .sp=0x15, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf9c2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf9c3, .a=0x2c, .x=0x74, .y=0xb1, .sp=0x15, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf9c2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf9c2, .value=0xa0, .type=IO_READ},
        {.addr=0xf9c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x99d0, .a=0xdc, .x=0x39, .y=0x42, .sp=0xac, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x99d0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x99d1, .a=0xdc, .x=0x39, .y=0x42, .sp=0xac, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x99d0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x99d0, .value=0xa0, .type=IO_READ},
        {.addr=0x99d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x46e0, .a=0x5d, .x=0xe1, .y=0xeb, .sp=0x7b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x46e0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x46e1, .a=0x5d, .x=0xe1, .y=0xeb, .sp=0x7b, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x46e0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x46e0, .value=0xa0, .type=IO_READ},
        {.addr=0x46e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x6eae, .a=0x22, .x=0x21, .y=0x95, .sp=0xb3, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6eae, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6eaf, .a=0x22, .x=0x21, .y=0x95, .sp=0xb3, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x6eae, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6eae, .value=0xa0, .type=IO_READ},
        {.addr=0x6eaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x754e, .a=0x1d, .x=0xd5, .y=0x1c, .sp=0xd3, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x754e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x754f, .a=0x1d, .x=0xd5, .y=0x1c, .sp=0xd3, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x754e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x754e, .value=0xa0, .type=IO_READ},
        {.addr=0x754f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x4407, .a=0x27, .x=0xa6, .y=0x71, .sp=0xf8, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4407, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4408, .a=0x27, .x=0xa6, .y=0x71, .sp=0xf8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4407, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4407, .value=0xa0, .type=IO_READ},
        {.addr=0x4408, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x48ab, .a=0xa3, .x=0xd1, .y=0x5f, .sp=0x87, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x48ab, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x48ac, .a=0xa3, .x=0xd1, .y=0x5f, .sp=0x87, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x48ab, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x48ab, .value=0xa0, .type=IO_READ},
        {.addr=0x48ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x478b, .a=0x79, .x=0x27, .y=0xca, .sp=0xb5, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x478b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x478c, .a=0x79, .x=0x27, .y=0xca, .sp=0xb5, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x478b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x478b, .value=0xa0, .type=IO_READ},
        {.addr=0x478c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x8616, .a=0x87, .x=0x1d, .y=0x76, .sp=0xd5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8616, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8617, .a=0x87, .x=0x1d, .y=0x76, .sp=0xd5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8616, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8616, .value=0xa0, .type=IO_READ},
        {.addr=0x8617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xa3e9, .a=0xee, .x=0x64, .y=0x2f, .sp=0xef, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa3ea, .a=0xee, .x=0x64, .y=0x2f, .sp=0xef, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa3e9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa3e9, .value=0xa0, .type=IO_READ},
        {.addr=0xa3ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xadc7, .a=0x3b, .x=0x97, .y=0xc3, .sp=0x23, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xadc7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xadc8, .a=0x3b, .x=0x97, .y=0xc3, .sp=0x23, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xadc7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xadc7, .value=0xa0, .type=IO_READ},
        {.addr=0xadc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x910d, .a=0x8a, .x=0xe2, .y=0x59, .sp=0x4c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x910d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x910e, .a=0x8a, .x=0xe2, .y=0x59, .sp=0x4c, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x910d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x910d, .value=0xa0, .type=IO_READ},
        {.addr=0x910e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xa2bf, .a=0xf9, .x=0x51, .y=0x43, .sp=0xd0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa2bf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa2c0, .a=0xf9, .x=0x51, .y=0x43, .sp=0xd0, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xa2bf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa2bf, .value=0xa0, .type=IO_READ},
        {.addr=0xa2c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x86a1, .a=0x14, .x=0xc3, .y=0x3b, .sp=0xb5, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x86a1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x86a2, .a=0x14, .x=0xc3, .y=0x3b, .sp=0xb5, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x86a1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x86a1, .value=0xa0, .type=IO_READ},
        {.addr=0x86a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0100) {
    const struct CPU_State initial_cpu = {.pc=0xcabd, .a=0xa0, .x=0x37, .y=0x2a, .sp=0xf0, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xcabd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcabe, .a=0xa0, .x=0x37, .y=0x2a, .sp=0xf0, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xcabd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcabd, .value=0xa0, .type=IO_READ},
        {.addr=0xcabe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0101) {
    const struct CPU_State initial_cpu = {.pc=0xadec, .a=0x26, .x=0x86, .y=0xbf, .sp=0x54, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xadec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaded, .a=0x26, .x=0x86, .y=0xbf, .sp=0x54, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xadec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xadec, .value=0xa0, .type=IO_READ},
        {.addr=0xaded, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf030, .a=0xbd, .x=0xd2, .y=0xb7, .sp=0x75, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf030, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf031, .a=0xbd, .x=0xd2, .y=0xb7, .sp=0x75, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xf030, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf030, .value=0xa0, .type=IO_READ},
        {.addr=0xf031, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0103) {
    const struct CPU_State initial_cpu = {.pc=0x5618, .a=0xd3, .x=0x40, .y=0x87, .sp=0xef, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5618, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5619, .a=0xd3, .x=0x40, .y=0x87, .sp=0xef, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x5618, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5618, .value=0xa0, .type=IO_READ},
        {.addr=0x5619, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0104) {
    const struct CPU_State initial_cpu = {.pc=0xbcb8, .a=0x06, .x=0xd6, .y=0x18, .sp=0xe1, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbcb8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbcb9, .a=0x06, .x=0xd6, .y=0x18, .sp=0xe1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xbcb8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbcb8, .value=0xa0, .type=IO_READ},
        {.addr=0xbcb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0105) {
    const struct CPU_State initial_cpu = {.pc=0x08ab, .a=0x33, .x=0x68, .y=0x37, .sp=0xfe, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x08ab, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x08ac, .a=0x33, .x=0x68, .y=0x37, .sp=0xfe, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x08ab, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x08ab, .value=0xa0, .type=IO_READ},
        {.addr=0x08ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0106) {
    const struct CPU_State initial_cpu = {.pc=0x33ea, .a=0x0a, .x=0x49, .y=0xc5, .sp=0x3d, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x33ea, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x33eb, .a=0x0a, .x=0x49, .y=0xc5, .sp=0x3d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x33ea, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x33ea, .value=0xa0, .type=IO_READ},
        {.addr=0x33eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0107) {
    const struct CPU_State initial_cpu = {.pc=0xf73b, .a=0x5f, .x=0x5d, .y=0x9a, .sp=0x65, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf73b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf73c, .a=0x5f, .x=0x5d, .y=0x9a, .sp=0x65, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf73b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf73b, .value=0xa0, .type=IO_READ},
        {.addr=0xf73c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0108) {
    const struct CPU_State initial_cpu = {.pc=0x7c15, .a=0x67, .x=0xb1, .y=0xe6, .sp=0x29, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7c15, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7c16, .a=0x67, .x=0xb1, .y=0xe6, .sp=0x29, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7c15, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7c15, .value=0xa0, .type=IO_READ},
        {.addr=0x7c16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0109) {
    const struct CPU_State initial_cpu = {.pc=0x6b6c, .a=0xf7, .x=0xf1, .y=0xd2, .sp=0x14, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6b6c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6b6d, .a=0xf7, .x=0xf1, .y=0xd2, .sp=0x14, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6b6c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6b6c, .value=0xa0, .type=IO_READ},
        {.addr=0x6b6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_010A) {
    const struct CPU_State initial_cpu = {.pc=0x5327, .a=0x97, .x=0xe1, .y=0xd4, .sp=0x20, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x5327, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5328, .a=0x97, .x=0xe1, .y=0xd4, .sp=0x20, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5327, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5327, .value=0xa0, .type=IO_READ},
        {.addr=0x5328, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_010B) {
    const struct CPU_State initial_cpu = {.pc=0x7c2d, .a=0x99, .x=0x50, .y=0x41, .sp=0xf5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7c2d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7c2e, .a=0x99, .x=0x50, .y=0x41, .sp=0xf5, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x7c2d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7c2d, .value=0xa0, .type=IO_READ},
        {.addr=0x7c2e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_010C) {
    const struct CPU_State initial_cpu = {.pc=0xe60d, .a=0xd1, .x=0xa0, .y=0x1d, .sp=0x3b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe60d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe60e, .a=0xd1, .x=0xa0, .y=0x1d, .sp=0x3b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe60d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe60d, .value=0xa0, .type=IO_READ},
        {.addr=0xe60e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_010D) {
    const struct CPU_State initial_cpu = {.pc=0x6aa4, .a=0xde, .x=0xf3, .y=0xd5, .sp=0x2e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6aa5, .a=0xde, .x=0xf3, .y=0xd5, .sp=0x2e, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x6aa4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6aa4, .value=0xa0, .type=IO_READ},
        {.addr=0x6aa5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_010E) {
    const struct CPU_State initial_cpu = {.pc=0xb326, .a=0x7e, .x=0x94, .y=0x51, .sp=0x05, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb326, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb327, .a=0x7e, .x=0x94, .y=0x51, .sp=0x05, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb326, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb326, .value=0xa0, .type=IO_READ},
        {.addr=0xb327, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_010F) {
    const struct CPU_State initial_cpu = {.pc=0xc4e9, .a=0xa9, .x=0xc1, .y=0x1c, .sp=0x75, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc4e9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc4ea, .a=0xa9, .x=0xc1, .y=0x1c, .sp=0x75, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc4e9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc4e9, .value=0xa0, .type=IO_READ},
        {.addr=0xc4ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0110) {
    const struct CPU_State initial_cpu = {.pc=0x08a7, .a=0x6f, .x=0x78, .y=0xce, .sp=0xff, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x08a7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x08a8, .a=0x6f, .x=0x78, .y=0xce, .sp=0xff, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x08a7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x08a7, .value=0xa0, .type=IO_READ},
        {.addr=0x08a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0111) {
    const struct CPU_State initial_cpu = {.pc=0xe9fd, .a=0x58, .x=0x6b, .y=0x37, .sp=0xee, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe9fd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe9fe, .a=0x58, .x=0x6b, .y=0x37, .sp=0xee, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xe9fd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe9fd, .value=0xa0, .type=IO_READ},
        {.addr=0xe9fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0112) {
    const struct CPU_State initial_cpu = {.pc=0x1933, .a=0xb1, .x=0x52, .y=0x0d, .sp=0xb6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1933, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1934, .a=0xb1, .x=0x52, .y=0x0d, .sp=0xb6, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x1933, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1933, .value=0xa0, .type=IO_READ},
        {.addr=0x1934, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0113) {
    const struct CPU_State initial_cpu = {.pc=0xf8fa, .a=0x7a, .x=0x56, .y=0xc2, .sp=0x89, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf8fa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf8fb, .a=0x7a, .x=0x56, .y=0xc2, .sp=0x89, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xf8fa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf8fa, .value=0xa0, .type=IO_READ},
        {.addr=0xf8fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0114) {
    const struct CPU_State initial_cpu = {.pc=0xff51, .a=0x18, .x=0x7b, .y=0xbb, .sp=0x6d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xff51, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xff52, .a=0x18, .x=0x7b, .y=0xbb, .sp=0x6d, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xff51, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xff51, .value=0xa0, .type=IO_READ},
        {.addr=0xff52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0115) {
    const struct CPU_State initial_cpu = {.pc=0x027a, .a=0xbd, .x=0xfa, .y=0x28, .sp=0xbc, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x027a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x027b, .a=0xbd, .x=0xfa, .y=0x28, .sp=0xbc, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x027a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x027a, .value=0xa0, .type=IO_READ},
        {.addr=0x027b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0116) {
    const struct CPU_State initial_cpu = {.pc=0x4ec1, .a=0x2c, .x=0x58, .y=0x02, .sp=0x51, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4ec2, .a=0x2c, .x=0x58, .y=0x02, .sp=0x51, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4ec1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4ec1, .value=0xa0, .type=IO_READ},
        {.addr=0x4ec2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0117) {
    const struct CPU_State initial_cpu = {.pc=0xe065, .a=0xaa, .x=0x30, .y=0x7b, .sp=0x8a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe065, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe066, .a=0xaa, .x=0x30, .y=0x7b, .sp=0x8a, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xe065, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe065, .value=0xa0, .type=IO_READ},
        {.addr=0xe066, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0118) {
    const struct CPU_State initial_cpu = {.pc=0x70a5, .a=0xc3, .x=0x9e, .y=0x30, .sp=0xe8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x70a5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x70a6, .a=0xc3, .x=0x9e, .y=0x30, .sp=0xe8, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x70a5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x70a5, .value=0xa0, .type=IO_READ},
        {.addr=0x70a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0119) {
    const struct CPU_State initial_cpu = {.pc=0x8eb5, .a=0x45, .x=0x2d, .y=0x83, .sp=0x0c, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8eb6, .a=0x45, .x=0x2d, .y=0x83, .sp=0x0c, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x8eb5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8eb5, .value=0xa0, .type=IO_READ},
        {.addr=0x8eb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_011A) {
    const struct CPU_State initial_cpu = {.pc=0xa7e8, .a=0xa6, .x=0x87, .y=0x84, .sp=0x5c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa7e9, .a=0xa6, .x=0x87, .y=0x84, .sp=0x5c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa7e8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa7e8, .value=0xa0, .type=IO_READ},
        {.addr=0xa7e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_011B) {
    const struct CPU_State initial_cpu = {.pc=0xcbb9, .a=0x15, .x=0xa7, .y=0x5e, .sp=0x0d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcbb9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcbba, .a=0x15, .x=0xa7, .y=0x5e, .sp=0x0d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcbb9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcbb9, .value=0xa0, .type=IO_READ},
        {.addr=0xcbba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_011C) {
    const struct CPU_State initial_cpu = {.pc=0x574d, .a=0xfd, .x=0x16, .y=0x1a, .sp=0xff, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x574d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x574e, .a=0xfd, .x=0x16, .y=0x1a, .sp=0xff, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x574d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x574d, .value=0xa0, .type=IO_READ},
        {.addr=0x574e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_011D) {
    const struct CPU_State initial_cpu = {.pc=0x37e2, .a=0x69, .x=0x4d, .y=0x72, .sp=0x47, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x37e2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x37e3, .a=0x69, .x=0x4d, .y=0x72, .sp=0x47, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x37e2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x37e2, .value=0xa0, .type=IO_READ},
        {.addr=0x37e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_011E) {
    const struct CPU_State initial_cpu = {.pc=0xce5c, .a=0x6a, .x=0x3c, .y=0x8c, .sp=0x0a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xce5c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xce5d, .a=0x6a, .x=0x3c, .y=0x8c, .sp=0x0a, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xce5c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xce5c, .value=0xa0, .type=IO_READ},
        {.addr=0xce5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7fb9, .a=0xe7, .x=0xf8, .y=0x1b, .sp=0xa8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x7fb9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7fba, .a=0xe7, .x=0xf8, .y=0x1b, .sp=0xa8, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x7fb9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7fb9, .value=0xa0, .type=IO_READ},
        {.addr=0x7fba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0120) {
    const struct CPU_State initial_cpu = {.pc=0xa943, .a=0xa3, .x=0x7e, .y=0x72, .sp=0xcd, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa943, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa944, .a=0xa3, .x=0x7e, .y=0x72, .sp=0xcd, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xa943, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa943, .value=0xa0, .type=IO_READ},
        {.addr=0xa944, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0121) {
    const struct CPU_State initial_cpu = {.pc=0x987a, .a=0x02, .x=0xff, .y=0x6e, .sp=0x84, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x987a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x987b, .a=0x02, .x=0xff, .y=0x6e, .sp=0x84, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x987a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x987a, .value=0xa0, .type=IO_READ},
        {.addr=0x987b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0122) {
    const struct CPU_State initial_cpu = {.pc=0x0192, .a=0x4e, .x=0x71, .y=0xb4, .sp=0x53, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0193, .a=0x4e, .x=0x71, .y=0xb4, .sp=0x53, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0192, .value=0xa0, .type=IO_READ},
        {.addr=0x0193, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0123) {
    const struct CPU_State initial_cpu = {.pc=0x4261, .a=0x18, .x=0xd9, .y=0x0c, .sp=0x38, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4261, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4262, .a=0x18, .x=0xd9, .y=0x0c, .sp=0x38, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4261, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4261, .value=0xa0, .type=IO_READ},
        {.addr=0x4262, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0124) {
    const struct CPU_State initial_cpu = {.pc=0xe422, .a=0xaa, .x=0x28, .y=0xab, .sp=0xdc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe422, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe423, .a=0xaa, .x=0x28, .y=0xab, .sp=0xdc, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xe422, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe422, .value=0xa0, .type=IO_READ},
        {.addr=0xe423, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0125) {
    const struct CPU_State initial_cpu = {.pc=0x2eb0, .a=0xfc, .x=0x4a, .y=0x4d, .sp=0xb0, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2eb0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2eb1, .a=0xfc, .x=0x4a, .y=0x4d, .sp=0xb0, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2eb0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2eb0, .value=0xa0, .type=IO_READ},
        {.addr=0x2eb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0126) {
    const struct CPU_State initial_cpu = {.pc=0x61b3, .a=0x4f, .x=0xa1, .y=0xea, .sp=0x55, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x61b3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x61b4, .a=0x4f, .x=0xa1, .y=0xea, .sp=0x55, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x61b3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x61b3, .value=0xa0, .type=IO_READ},
        {.addr=0x61b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0127) {
    const struct CPU_State initial_cpu = {.pc=0x27a2, .a=0x1b, .x=0xce, .y=0xe8, .sp=0x0d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x27a2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x27a3, .a=0x1b, .x=0xce, .y=0xe8, .sp=0x0d, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x27a2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x27a2, .value=0xa0, .type=IO_READ},
        {.addr=0x27a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0128) {
    const struct CPU_State initial_cpu = {.pc=0x8bcc, .a=0x94, .x=0x89, .y=0x1d, .sp=0x9a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8bcc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8bcd, .a=0x94, .x=0x89, .y=0x1d, .sp=0x9a, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x8bcc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8bcc, .value=0xa0, .type=IO_READ},
        {.addr=0x8bcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0129) {
    const struct CPU_State initial_cpu = {.pc=0x5635, .a=0x15, .x=0x38, .y=0x3f, .sp=0x95, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5635, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5636, .a=0x15, .x=0x38, .y=0x3f, .sp=0x95, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5635, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5635, .value=0xa0, .type=IO_READ},
        {.addr=0x5636, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_012A) {
    const struct CPU_State initial_cpu = {.pc=0xc3b3, .a=0x2c, .x=0x3e, .y=0xeb, .sp=0x21, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc3b4, .a=0x2c, .x=0x3e, .y=0xeb, .sp=0x21, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xc3b3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc3b3, .value=0xa0, .type=IO_READ},
        {.addr=0xc3b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_012B) {
    const struct CPU_State initial_cpu = {.pc=0xaeb4, .a=0xee, .x=0xdc, .y=0x4d, .sp=0x64, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaeb5, .a=0xee, .x=0xdc, .y=0x4d, .sp=0x64, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaeb4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaeb4, .value=0xa0, .type=IO_READ},
        {.addr=0xaeb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_012C) {
    const struct CPU_State initial_cpu = {.pc=0xcde4, .a=0x4d, .x=0x63, .y=0x4b, .sp=0x3e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xcde4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcde5, .a=0x4d, .x=0x63, .y=0x4b, .sp=0x3e, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xcde4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcde4, .value=0xa0, .type=IO_READ},
        {.addr=0xcde5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_012D) {
    const struct CPU_State initial_cpu = {.pc=0x170e, .a=0xb5, .x=0x9e, .y=0x0f, .sp=0x66, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x170e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x170f, .a=0xb5, .x=0x9e, .y=0x0f, .sp=0x66, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x170e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x170e, .value=0xa0, .type=IO_READ},
        {.addr=0x170f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_012E) {
    const struct CPU_State initial_cpu = {.pc=0x4f18, .a=0x24, .x=0x05, .y=0x51, .sp=0xa2, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x4f18, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4f19, .a=0x24, .x=0x05, .y=0x51, .sp=0xa2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4f18, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4f18, .value=0xa0, .type=IO_READ},
        {.addr=0x4f19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_012F) {
    const struct CPU_State initial_cpu = {.pc=0x717e, .a=0xd3, .x=0xdd, .y=0x9b, .sp=0x30, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x717e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x717f, .a=0xd3, .x=0xdd, .y=0x9b, .sp=0x30, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x717e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x717e, .value=0xa0, .type=IO_READ},
        {.addr=0x717f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0130) {
    const struct CPU_State initial_cpu = {.pc=0x75d6, .a=0x2e, .x=0xfe, .y=0x40, .sp=0xc2, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x75d6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x75d7, .a=0x2e, .x=0xfe, .y=0x40, .sp=0xc2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x75d6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x75d6, .value=0xa0, .type=IO_READ},
        {.addr=0x75d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0131) {
    const struct CPU_State initial_cpu = {.pc=0x0cf7, .a=0xc1, .x=0x86, .y=0x74, .sp=0x27, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0cf7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0cf8, .a=0xc1, .x=0x86, .y=0x74, .sp=0x27, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0cf7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0cf7, .value=0xa0, .type=IO_READ},
        {.addr=0x0cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0132) {
    const struct CPU_State initial_cpu = {.pc=0x71a9, .a=0xae, .x=0x8d, .y=0xcc, .sp=0x12, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x71a9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x71aa, .a=0xae, .x=0x8d, .y=0xcc, .sp=0x12, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x71a9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x71a9, .value=0xa0, .type=IO_READ},
        {.addr=0x71aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0133) {
    const struct CPU_State initial_cpu = {.pc=0x2db7, .a=0x15, .x=0xac, .y=0x36, .sp=0xbe, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2db7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2db8, .a=0x15, .x=0xac, .y=0x36, .sp=0xbe, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2db7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2db7, .value=0xa0, .type=IO_READ},
        {.addr=0x2db8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0134) {
    const struct CPU_State initial_cpu = {.pc=0x39a0, .a=0xb7, .x=0x9e, .y=0xc1, .sp=0x80, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x39a0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x39a1, .a=0xb7, .x=0x9e, .y=0xc1, .sp=0x80, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x39a0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x39a0, .value=0xa0, .type=IO_READ},
        {.addr=0x39a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0135) {
    const struct CPU_State initial_cpu = {.pc=0x9b20, .a=0x05, .x=0xb6, .y=0xc9, .sp=0xfa, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9b20, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9b21, .a=0x05, .x=0xb6, .y=0xc9, .sp=0xfa, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x9b20, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9b20, .value=0xa0, .type=IO_READ},
        {.addr=0x9b21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0136) {
    const struct CPU_State initial_cpu = {.pc=0xdc7e, .a=0x65, .x=0x14, .y=0x5e, .sp=0xe7, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xdc7e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdc7f, .a=0x65, .x=0x14, .y=0x5e, .sp=0xe7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xdc7e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdc7e, .value=0xa0, .type=IO_READ},
        {.addr=0xdc7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0137) {
    const struct CPU_State initial_cpu = {.pc=0xbf6d, .a=0x7b, .x=0x6a, .y=0xcc, .sp=0x96, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbf6e, .a=0x7b, .x=0x6a, .y=0xcc, .sp=0x96, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xbf6d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbf6d, .value=0xa0, .type=IO_READ},
        {.addr=0xbf6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8851, .a=0x0c, .x=0x73, .y=0x3d, .sp=0xfe, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x8851, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8852, .a=0x0c, .x=0x73, .y=0x3d, .sp=0xfe, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x8851, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8851, .value=0xa0, .type=IO_READ},
        {.addr=0x8852, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0139) {
    const struct CPU_State initial_cpu = {.pc=0x28fd, .a=0x03, .x=0xf7, .y=0x37, .sp=0x75, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x28fd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x28fe, .a=0x03, .x=0xf7, .y=0x37, .sp=0x75, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x28fd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x28fd, .value=0xa0, .type=IO_READ},
        {.addr=0x28fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_013A) {
    const struct CPU_State initial_cpu = {.pc=0x1cb4, .a=0xa5, .x=0x4b, .y=0x0e, .sp=0x50, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x1cb4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1cb5, .a=0xa5, .x=0x4b, .y=0x0e, .sp=0x50, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1cb4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1cb4, .value=0xa0, .type=IO_READ},
        {.addr=0x1cb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_013B) {
    const struct CPU_State initial_cpu = {.pc=0xe669, .a=0x09, .x=0x24, .y=0xd2, .sp=0x4b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe669, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe66a, .a=0x09, .x=0x24, .y=0xd2, .sp=0x4b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xe669, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe669, .value=0xa0, .type=IO_READ},
        {.addr=0xe66a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_013C) {
    const struct CPU_State initial_cpu = {.pc=0x10e4, .a=0xa9, .x=0xd0, .y=0x04, .sp=0xfe, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x10e4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x10e5, .a=0xa9, .x=0xd0, .y=0x04, .sp=0xfe, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x10e4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x10e4, .value=0xa0, .type=IO_READ},
        {.addr=0x10e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_013D) {
    const struct CPU_State initial_cpu = {.pc=0x3194, .a=0xb8, .x=0xab, .y=0x85, .sp=0x1b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x3194, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3195, .a=0xb8, .x=0xab, .y=0x85, .sp=0x1b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3194, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3194, .value=0xa0, .type=IO_READ},
        {.addr=0x3195, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_013E) {
    const struct CPU_State initial_cpu = {.pc=0x434e, .a=0xd9, .x=0x3c, .y=0x5a, .sp=0xe4, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x434e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x434f, .a=0xd9, .x=0x3c, .y=0x5a, .sp=0xe4, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x434e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x434e, .value=0xa0, .type=IO_READ},
        {.addr=0x434f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_013F) {
    const struct CPU_State initial_cpu = {.pc=0x6d5a, .a=0x8d, .x=0xda, .y=0xc2, .sp=0x5c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d5b, .a=0x8d, .x=0xda, .y=0xc2, .sp=0x5c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6d5a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d5a, .value=0xa0, .type=IO_READ},
        {.addr=0x6d5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5371, .a=0xb2, .x=0xb5, .y=0x74, .sp=0x4f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5371, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5372, .a=0xb2, .x=0xb5, .y=0x74, .sp=0x4f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5371, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5371, .value=0xa0, .type=IO_READ},
        {.addr=0x5372, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0141) {
    const struct CPU_State initial_cpu = {.pc=0xb051, .a=0xab, .x=0x85, .y=0x01, .sp=0x52, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb051, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb052, .a=0xab, .x=0x85, .y=0x01, .sp=0x52, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xb051, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb051, .value=0xa0, .type=IO_READ},
        {.addr=0xb052, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0142) {
    const struct CPU_State initial_cpu = {.pc=0x070a, .a=0xf0, .x=0x13, .y=0xf6, .sp=0x39, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x070a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x070b, .a=0xf0, .x=0x13, .y=0xf6, .sp=0x39, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x070a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x070a, .value=0xa0, .type=IO_READ},
        {.addr=0x070b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0143) {
    const struct CPU_State initial_cpu = {.pc=0xc9e6, .a=0x74, .x=0x42, .y=0x2c, .sp=0x0e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc9e6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc9e7, .a=0x74, .x=0x42, .y=0x2c, .sp=0x0e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc9e6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc9e6, .value=0xa0, .type=IO_READ},
        {.addr=0xc9e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0144) {
    const struct CPU_State initial_cpu = {.pc=0x4a11, .a=0xd4, .x=0x59, .y=0x76, .sp=0xbc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4a11, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4a12, .a=0xd4, .x=0x59, .y=0x76, .sp=0xbc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4a11, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4a11, .value=0xa0, .type=IO_READ},
        {.addr=0x4a12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0145) {
    const struct CPU_State initial_cpu = {.pc=0xab34, .a=0x8d, .x=0x94, .y=0x55, .sp=0x19, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xab34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xab35, .a=0x8d, .x=0x94, .y=0x55, .sp=0x19, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xab34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xab34, .value=0xa0, .type=IO_READ},
        {.addr=0xab35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0146) {
    const struct CPU_State initial_cpu = {.pc=0xaeb6, .a=0x03, .x=0x8d, .y=0x53, .sp=0xb0, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaeb7, .a=0x03, .x=0x8d, .y=0x53, .sp=0xb0, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xaeb6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaeb6, .value=0xa0, .type=IO_READ},
        {.addr=0xaeb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0147) {
    const struct CPU_State initial_cpu = {.pc=0x19ab, .a=0x4a, .x=0xe6, .y=0x03, .sp=0xe0, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x19ab, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x19ac, .a=0x4a, .x=0xe6, .y=0x03, .sp=0xe0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x19ab, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x19ab, .value=0xa0, .type=IO_READ},
        {.addr=0x19ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0148) {
    const struct CPU_State initial_cpu = {.pc=0x9a12, .a=0xe5, .x=0x10, .y=0x99, .sp=0x18, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9a12, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9a13, .a=0xe5, .x=0x10, .y=0x99, .sp=0x18, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9a12, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9a12, .value=0xa0, .type=IO_READ},
        {.addr=0x9a13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0149) {
    const struct CPU_State initial_cpu = {.pc=0x59de, .a=0x0c, .x=0x12, .y=0x4f, .sp=0xcb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x59de, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x59df, .a=0x0c, .x=0x12, .y=0x4f, .sp=0xcb, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x59de, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x59de, .value=0xa0, .type=IO_READ},
        {.addr=0x59df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_014A) {
    const struct CPU_State initial_cpu = {.pc=0x0931, .a=0xdd, .x=0x84, .y=0x35, .sp=0xee, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0931, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0932, .a=0xdd, .x=0x84, .y=0x35, .sp=0xee, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0931, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0931, .value=0xa0, .type=IO_READ},
        {.addr=0x0932, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_014B) {
    const struct CPU_State initial_cpu = {.pc=0xf7bf, .a=0xf1, .x=0x07, .y=0x96, .sp=0x60, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xf7bf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf7c0, .a=0xf1, .x=0x07, .y=0x96, .sp=0x60, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xf7bf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf7bf, .value=0xa0, .type=IO_READ},
        {.addr=0xf7c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_014C) {
    const struct CPU_State initial_cpu = {.pc=0xfc1f, .a=0x6f, .x=0x26, .y=0xb2, .sp=0x2f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfc1f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfc20, .a=0x6f, .x=0x26, .y=0xb2, .sp=0x2f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfc1f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfc1f, .value=0xa0, .type=IO_READ},
        {.addr=0xfc20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_014D) {
    const struct CPU_State initial_cpu = {.pc=0xdfe3, .a=0xf5, .x=0x6d, .y=0xc9, .sp=0xd7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdfe4, .a=0xf5, .x=0x6d, .y=0xc9, .sp=0xd7, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xdfe3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdfe3, .value=0xa0, .type=IO_READ},
        {.addr=0xdfe4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_014E) {
    const struct CPU_State initial_cpu = {.pc=0x4239, .a=0x91, .x=0x3d, .y=0xf7, .sp=0x15, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x4239, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x423a, .a=0x91, .x=0x3d, .y=0xf7, .sp=0x15, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4239, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4239, .value=0xa0, .type=IO_READ},
        {.addr=0x423a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_014F) {
    const struct CPU_State initial_cpu = {.pc=0x9558, .a=0x26, .x=0xc5, .y=0x83, .sp=0x64, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9558, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9559, .a=0x26, .x=0xc5, .y=0x83, .sp=0x64, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x9558, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9558, .value=0xa0, .type=IO_READ},
        {.addr=0x9559, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0150) {
    const struct CPU_State initial_cpu = {.pc=0xe6a9, .a=0x2e, .x=0xe6, .y=0x6b, .sp=0x9c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe6aa, .a=0x2e, .x=0xe6, .y=0x6b, .sp=0x9c, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xe6a9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe6a9, .value=0xa0, .type=IO_READ},
        {.addr=0xe6aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd97b, .a=0xe0, .x=0x92, .y=0xca, .sp=0x2e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd97b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd97c, .a=0xe0, .x=0x92, .y=0xca, .sp=0x2e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd97b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd97b, .value=0xa0, .type=IO_READ},
        {.addr=0xd97c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0152) {
    const struct CPU_State initial_cpu = {.pc=0x2e08, .a=0x36, .x=0xcd, .y=0x6b, .sp=0xd0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2e08, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2e09, .a=0x36, .x=0xcd, .y=0x6b, .sp=0xd0, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x2e08, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2e08, .value=0xa0, .type=IO_READ},
        {.addr=0x2e09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0153) {
    const struct CPU_State initial_cpu = {.pc=0x6155, .a=0xb6, .x=0xa0, .y=0x14, .sp=0x6d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6155, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6156, .a=0xb6, .x=0xa0, .y=0x14, .sp=0x6d, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x6155, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6155, .value=0xa0, .type=IO_READ},
        {.addr=0x6156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0154) {
    const struct CPU_State initial_cpu = {.pc=0xaaa2, .a=0x74, .x=0xc4, .y=0xfc, .sp=0xfe, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaaa3, .a=0x74, .x=0xc4, .y=0xfc, .sp=0xfe, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xaaa2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaaa2, .value=0xa0, .type=IO_READ},
        {.addr=0xaaa3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0155) {
    const struct CPU_State initial_cpu = {.pc=0x4982, .a=0x9a, .x=0x05, .y=0xe9, .sp=0xe7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4982, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4983, .a=0x9a, .x=0x05, .y=0xe9, .sp=0xe7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4982, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4982, .value=0xa0, .type=IO_READ},
        {.addr=0x4983, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0156) {
    const struct CPU_State initial_cpu = {.pc=0xd7cb, .a=0x64, .x=0xec, .y=0x36, .sp=0xdd, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xd7cb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd7cc, .a=0x64, .x=0xec, .y=0x36, .sp=0xdd, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xd7cb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd7cb, .value=0xa0, .type=IO_READ},
        {.addr=0xd7cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0157) {
    const struct CPU_State initial_cpu = {.pc=0xe9d2, .a=0x2b, .x=0x82, .y=0x0f, .sp=0xfb, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xe9d2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe9d3, .a=0x2b, .x=0x82, .y=0x0f, .sp=0xfb, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xe9d2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe9d2, .value=0xa0, .type=IO_READ},
        {.addr=0xe9d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0158) {
    const struct CPU_State initial_cpu = {.pc=0x09f3, .a=0xbe, .x=0x1d, .y=0x30, .sp=0x31, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x09f3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x09f4, .a=0xbe, .x=0x1d, .y=0x30, .sp=0x31, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x09f3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x09f3, .value=0xa0, .type=IO_READ},
        {.addr=0x09f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0159) {
    const struct CPU_State initial_cpu = {.pc=0x2a4e, .a=0xb0, .x=0x78, .y=0xe9, .sp=0xb1, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x2a4e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2a4f, .a=0xb0, .x=0x78, .y=0xe9, .sp=0xb1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2a4e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2a4e, .value=0xa0, .type=IO_READ},
        {.addr=0x2a4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_015A) {
    const struct CPU_State initial_cpu = {.pc=0x1dfa, .a=0xf6, .x=0x6a, .y=0x33, .sp=0x18, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1dfa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1dfb, .a=0xf6, .x=0x6a, .y=0x33, .sp=0x18, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x1dfa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1dfa, .value=0xa0, .type=IO_READ},
        {.addr=0x1dfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_015B) {
    const struct CPU_State initial_cpu = {.pc=0x859e, .a=0xad, .x=0x9c, .y=0x1a, .sp=0x37, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x859e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x859f, .a=0xad, .x=0x9c, .y=0x1a, .sp=0x37, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x859e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x859e, .value=0xa0, .type=IO_READ},
        {.addr=0x859f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_015C) {
    const struct CPU_State initial_cpu = {.pc=0xe90b, .a=0x39, .x=0xac, .y=0x37, .sp=0xdc, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xe90b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe90c, .a=0x39, .x=0xac, .y=0x37, .sp=0xdc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe90b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe90b, .value=0xa0, .type=IO_READ},
        {.addr=0xe90c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_015D) {
    const struct CPU_State initial_cpu = {.pc=0xb8d8, .a=0xec, .x=0x7a, .y=0x4b, .sp=0xec, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb8d8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb8d9, .a=0xec, .x=0x7a, .y=0x4b, .sp=0xec, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xb8d8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb8d8, .value=0xa0, .type=IO_READ},
        {.addr=0xb8d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_015E) {
    const struct CPU_State initial_cpu = {.pc=0xb6e0, .a=0xc3, .x=0xdd, .y=0x40, .sp=0xea, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb6e1, .a=0xc3, .x=0xdd, .y=0x40, .sp=0xea, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xb6e0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb6e0, .value=0xa0, .type=IO_READ},
        {.addr=0xb6e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_015F) {
    const struct CPU_State initial_cpu = {.pc=0x9481, .a=0x38, .x=0x31, .y=0x46, .sp=0x08, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x9481, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9482, .a=0x38, .x=0x31, .y=0x46, .sp=0x08, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9481, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9481, .value=0xa0, .type=IO_READ},
        {.addr=0x9482, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0160) {
    const struct CPU_State initial_cpu = {.pc=0xc77d, .a=0x7a, .x=0x37, .y=0xb7, .sp=0x60, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xc77d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc77e, .a=0x7a, .x=0x37, .y=0xb7, .sp=0x60, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc77d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc77d, .value=0xa0, .type=IO_READ},
        {.addr=0xc77e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0161) {
    const struct CPU_State initial_cpu = {.pc=0x1652, .a=0xf5, .x=0x5d, .y=0x10, .sp=0x05, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1652, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1653, .a=0xf5, .x=0x5d, .y=0x10, .sp=0x05, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1652, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1652, .value=0xa0, .type=IO_READ},
        {.addr=0x1653, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0162) {
    const struct CPU_State initial_cpu = {.pc=0x2ee4, .a=0xfb, .x=0x10, .y=0x5d, .sp=0x20, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2ee4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ee5, .a=0xfb, .x=0x10, .y=0x5d, .sp=0x20, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x2ee4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ee4, .value=0xa0, .type=IO_READ},
        {.addr=0x2ee5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0163) {
    const struct CPU_State initial_cpu = {.pc=0x877d, .a=0x36, .x=0x3f, .y=0xbd, .sp=0x4f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x877d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x877e, .a=0x36, .x=0x3f, .y=0xbd, .sp=0x4f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x877d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x877d, .value=0xa0, .type=IO_READ},
        {.addr=0x877e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0164) {
    const struct CPU_State initial_cpu = {.pc=0xa55b, .a=0xaa, .x=0x03, .y=0x5a, .sp=0x96, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa55b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa55c, .a=0xaa, .x=0x03, .y=0x5a, .sp=0x96, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xa55b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa55b, .value=0xa0, .type=IO_READ},
        {.addr=0xa55c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0165) {
    const struct CPU_State initial_cpu = {.pc=0x771c, .a=0x53, .x=0xdb, .y=0x39, .sp=0x82, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x771c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x771d, .a=0x53, .x=0xdb, .y=0x39, .sp=0x82, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x771c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x771c, .value=0xa0, .type=IO_READ},
        {.addr=0x771d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0166) {
    const struct CPU_State initial_cpu = {.pc=0xdf2e, .a=0x22, .x=0x42, .y=0x9e, .sp=0x1d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xdf2e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdf2f, .a=0x22, .x=0x42, .y=0x9e, .sp=0x1d, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xdf2e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdf2e, .value=0xa0, .type=IO_READ},
        {.addr=0xdf2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0167) {
    const struct CPU_State initial_cpu = {.pc=0x6c5e, .a=0xad, .x=0x3a, .y=0xf4, .sp=0x9f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6c5f, .a=0xad, .x=0x3a, .y=0xf4, .sp=0x9f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x6c5e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6c5e, .value=0xa0, .type=IO_READ},
        {.addr=0x6c5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0168) {
    const struct CPU_State initial_cpu = {.pc=0xfa15, .a=0xe9, .x=0x49, .y=0x60, .sp=0xc5, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xfa15, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfa16, .a=0xe9, .x=0x49, .y=0x60, .sp=0xc5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfa15, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfa15, .value=0xa0, .type=IO_READ},
        {.addr=0xfa16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0169) {
    const struct CPU_State initial_cpu = {.pc=0x9343, .a=0x00, .x=0x0c, .y=0x2d, .sp=0x45, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9343, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9344, .a=0x00, .x=0x0c, .y=0x2d, .sp=0x45, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9343, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9343, .value=0xa0, .type=IO_READ},
        {.addr=0x9344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_016A) {
    const struct CPU_State initial_cpu = {.pc=0xf7bd, .a=0xc0, .x=0xac, .y=0xfc, .sp=0x33, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf7bd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf7be, .a=0xc0, .x=0xac, .y=0xfc, .sp=0x33, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf7bd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf7bd, .value=0xa0, .type=IO_READ},
        {.addr=0xf7be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_016B) {
    const struct CPU_State initial_cpu = {.pc=0x142c, .a=0xb8, .x=0x79, .y=0xed, .sp=0x5f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x142c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x142d, .a=0xb8, .x=0x79, .y=0xed, .sp=0x5f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x142c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x142c, .value=0xa0, .type=IO_READ},
        {.addr=0x142d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_016C) {
    const struct CPU_State initial_cpu = {.pc=0x9788, .a=0x91, .x=0x84, .y=0xe3, .sp=0x95, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x9788, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9789, .a=0x91, .x=0x84, .y=0xe3, .sp=0x95, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x9788, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9788, .value=0xa0, .type=IO_READ},
        {.addr=0x9789, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_016D) {
    const struct CPU_State initial_cpu = {.pc=0x0f61, .a=0xb2, .x=0x45, .y=0xa0, .sp=0x31, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0f61, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0f62, .a=0xb2, .x=0x45, .y=0xa0, .sp=0x31, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0f61, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0f61, .value=0xa0, .type=IO_READ},
        {.addr=0x0f62, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_016E) {
    const struct CPU_State initial_cpu = {.pc=0x4221, .a=0xb5, .x=0x74, .y=0x65, .sp=0xc0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4221, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4222, .a=0xb5, .x=0x74, .y=0x65, .sp=0xc0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4221, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4221, .value=0xa0, .type=IO_READ},
        {.addr=0x4222, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_016F) {
    const struct CPU_State initial_cpu = {.pc=0x6f6a, .a=0x0b, .x=0x9f, .y=0xe7, .sp=0x94, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6f6a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6f6b, .a=0x0b, .x=0x9f, .y=0xe7, .sp=0x94, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x6f6a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6f6a, .value=0xa0, .type=IO_READ},
        {.addr=0x6f6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7363, .a=0xc2, .x=0x8d, .y=0x20, .sp=0xd0, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x7363, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7364, .a=0xc2, .x=0x8d, .y=0x20, .sp=0xd0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7363, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7363, .value=0xa0, .type=IO_READ},
        {.addr=0x7364, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0171) {
    const struct CPU_State initial_cpu = {.pc=0x2195, .a=0xc5, .x=0x3a, .y=0x87, .sp=0xd2, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2195, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2196, .a=0xc5, .x=0x3a, .y=0x87, .sp=0xd2, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2195, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2195, .value=0xa0, .type=IO_READ},
        {.addr=0x2196, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0172) {
    const struct CPU_State initial_cpu = {.pc=0x063b, .a=0x72, .x=0x5b, .y=0x8e, .sp=0x8a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x063b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x063c, .a=0x72, .x=0x5b, .y=0x8e, .sp=0x8a, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x063b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x063b, .value=0xa0, .type=IO_READ},
        {.addr=0x063c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0173) {
    const struct CPU_State initial_cpu = {.pc=0xc40e, .a=0x64, .x=0x98, .y=0xd3, .sp=0x27, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc40e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc40f, .a=0x64, .x=0x98, .y=0xd3, .sp=0x27, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xc40e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc40e, .value=0xa0, .type=IO_READ},
        {.addr=0xc40f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0174) {
    const struct CPU_State initial_cpu = {.pc=0x472b, .a=0x72, .x=0x24, .y=0x31, .sp=0x04, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x472b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x472c, .a=0x72, .x=0x24, .y=0x31, .sp=0x04, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x472b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x472b, .value=0xa0, .type=IO_READ},
        {.addr=0x472c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0175) {
    const struct CPU_State initial_cpu = {.pc=0xed77, .a=0x6b, .x=0xf3, .y=0x73, .sp=0x43, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xed77, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xed78, .a=0x6b, .x=0xf3, .y=0x73, .sp=0x43, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xed77, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xed77, .value=0xa0, .type=IO_READ},
        {.addr=0xed78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0176) {
    const struct CPU_State initial_cpu = {.pc=0x87af, .a=0xe6, .x=0xfd, .y=0xf1, .sp=0xb2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x87af, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x87b0, .a=0xe6, .x=0xfd, .y=0xf1, .sp=0xb2, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x87af, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x87af, .value=0xa0, .type=IO_READ},
        {.addr=0x87b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0177) {
    const struct CPU_State initial_cpu = {.pc=0xe273, .a=0xf9, .x=0xd0, .y=0x68, .sp=0x5b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe273, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe274, .a=0xf9, .x=0xd0, .y=0x68, .sp=0x5b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe273, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe273, .value=0xa0, .type=IO_READ},
        {.addr=0xe274, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0178) {
    const struct CPU_State initial_cpu = {.pc=0x708e, .a=0x6f, .x=0x37, .y=0x9b, .sp=0x46, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x708e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x708f, .a=0x6f, .x=0x37, .y=0x9b, .sp=0x46, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x708e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x708e, .value=0xa0, .type=IO_READ},
        {.addr=0x708f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0179) {
    const struct CPU_State initial_cpu = {.pc=0x52b6, .a=0x42, .x=0x24, .y=0x8b, .sp=0x20, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x52b6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x52b7, .a=0x42, .x=0x24, .y=0x8b, .sp=0x20, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x52b6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x52b6, .value=0xa0, .type=IO_READ},
        {.addr=0x52b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_017A) {
    const struct CPU_State initial_cpu = {.pc=0xc7fc, .a=0x4c, .x=0x47, .y=0x3d, .sp=0x2c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xc7fc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc7fd, .a=0x4c, .x=0x47, .y=0x3d, .sp=0x2c, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xc7fc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc7fc, .value=0xa0, .type=IO_READ},
        {.addr=0xc7fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_017B) {
    const struct CPU_State initial_cpu = {.pc=0xdc24, .a=0xa1, .x=0x13, .y=0x13, .sp=0xf7, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xdc24, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdc25, .a=0xa1, .x=0x13, .y=0x13, .sp=0xf7, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xdc24, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdc24, .value=0xa0, .type=IO_READ},
        {.addr=0xdc25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_017C) {
    const struct CPU_State initial_cpu = {.pc=0xa8ad, .a=0x38, .x=0x0c, .y=0xc0, .sp=0x18, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ad, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa8ae, .a=0x38, .x=0x0c, .y=0xc0, .sp=0x18, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xa8ad, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa8ad, .value=0xa0, .type=IO_READ},
        {.addr=0xa8ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_017D) {
    const struct CPU_State initial_cpu = {.pc=0x5e34, .a=0xf2, .x=0x78, .y=0x28, .sp=0x32, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5e34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5e35, .a=0xf2, .x=0x78, .y=0x28, .sp=0x32, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5e34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5e34, .value=0xa0, .type=IO_READ},
        {.addr=0x5e35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_017E) {
    const struct CPU_State initial_cpu = {.pc=0x8f56, .a=0xef, .x=0x75, .y=0x5c, .sp=0x1c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8f56, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8f57, .a=0xef, .x=0x75, .y=0x5c, .sp=0x1c, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x8f56, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8f56, .value=0xa0, .type=IO_READ},
        {.addr=0x8f57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_017F) {
    const struct CPU_State initial_cpu = {.pc=0x047f, .a=0x51, .x=0xed, .y=0xcf, .sp=0x34, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x047f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0480, .a=0x51, .x=0xed, .y=0xcf, .sp=0x34, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x047f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x047f, .value=0xa0, .type=IO_READ},
        {.addr=0x0480, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0180) {
    const struct CPU_State initial_cpu = {.pc=0x1f9b, .a=0x43, .x=0xea, .y=0x58, .sp=0x4f, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1f9c, .a=0x43, .x=0xea, .y=0x58, .sp=0x4f, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x1f9b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1f9b, .value=0xa0, .type=IO_READ},
        {.addr=0x1f9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9d3e, .a=0xb6, .x=0x8d, .y=0x43, .sp=0x26, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9d3e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9d3f, .a=0xb6, .x=0x8d, .y=0x43, .sp=0x26, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9d3e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9d3e, .value=0xa0, .type=IO_READ},
        {.addr=0x9d3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0182) {
    const struct CPU_State initial_cpu = {.pc=0x6572, .a=0xa0, .x=0x42, .y=0x83, .sp=0x8b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6572, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6573, .a=0xa0, .x=0x42, .y=0x83, .sp=0x8b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6572, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6572, .value=0xa0, .type=IO_READ},
        {.addr=0x6573, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0183) {
    const struct CPU_State initial_cpu = {.pc=0x29bd, .a=0x12, .x=0x18, .y=0x6c, .sp=0xbe, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x29bd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x29be, .a=0x12, .x=0x18, .y=0x6c, .sp=0xbe, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x29bd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x29bd, .value=0xa0, .type=IO_READ},
        {.addr=0x29be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0184) {
    const struct CPU_State initial_cpu = {.pc=0xd196, .a=0xf6, .x=0xa9, .y=0x2b, .sp=0x89, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd196, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd197, .a=0xf6, .x=0xa9, .y=0x2b, .sp=0x89, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd196, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd196, .value=0xa0, .type=IO_READ},
        {.addr=0xd197, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0185) {
    const struct CPU_State initial_cpu = {.pc=0x755a, .a=0xe0, .x=0x71, .y=0xfc, .sp=0x51, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x755a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x755b, .a=0xe0, .x=0x71, .y=0xfc, .sp=0x51, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x755a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x755a, .value=0xa0, .type=IO_READ},
        {.addr=0x755b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0186) {
    const struct CPU_State initial_cpu = {.pc=0xe8dd, .a=0x7c, .x=0x44, .y=0x6f, .sp=0x0c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xe8dd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe8de, .a=0x7c, .x=0x44, .y=0x6f, .sp=0x0c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xe8dd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe8dd, .value=0xa0, .type=IO_READ},
        {.addr=0xe8de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0187) {
    const struct CPU_State initial_cpu = {.pc=0xc59c, .a=0x98, .x=0x57, .y=0x17, .sp=0xf0, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc59c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc59d, .a=0x98, .x=0x57, .y=0x17, .sp=0xf0, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xc59c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc59c, .value=0xa0, .type=IO_READ},
        {.addr=0xc59d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0188) {
    const struct CPU_State initial_cpu = {.pc=0x46a9, .a=0x4c, .x=0xab, .y=0x8d, .sp=0xa5, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x46a9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x46aa, .a=0x4c, .x=0xab, .y=0x8d, .sp=0xa5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x46a9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x46a9, .value=0xa0, .type=IO_READ},
        {.addr=0x46aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0189) {
    const struct CPU_State initial_cpu = {.pc=0x8b3d, .a=0x33, .x=0x20, .y=0x8c, .sp=0x2a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8b3d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8b3e, .a=0x33, .x=0x20, .y=0x8c, .sp=0x2a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8b3d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8b3d, .value=0xa0, .type=IO_READ},
        {.addr=0x8b3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_018A) {
    const struct CPU_State initial_cpu = {.pc=0x7233, .a=0x68, .x=0x83, .y=0xaf, .sp=0x3a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7233, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7234, .a=0x68, .x=0x83, .y=0xaf, .sp=0x3a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7233, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7233, .value=0xa0, .type=IO_READ},
        {.addr=0x7234, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_018B) {
    const struct CPU_State initial_cpu = {.pc=0xa89c, .a=0x06, .x=0xcd, .y=0x30, .sp=0x56, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa89c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa89d, .a=0x06, .x=0xcd, .y=0x30, .sp=0x56, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xa89c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa89c, .value=0xa0, .type=IO_READ},
        {.addr=0xa89d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_018C) {
    const struct CPU_State initial_cpu = {.pc=0xc735, .a=0x3c, .x=0xc0, .y=0x68, .sp=0xfe, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc735, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc736, .a=0x3c, .x=0xc0, .y=0x68, .sp=0xfe, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xc735, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc735, .value=0xa0, .type=IO_READ},
        {.addr=0xc736, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_018D) {
    const struct CPU_State initial_cpu = {.pc=0x8aec, .a=0x3c, .x=0xb9, .y=0x31, .sp=0x13, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8aec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8aed, .a=0x3c, .x=0xb9, .y=0x31, .sp=0x13, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x8aec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8aec, .value=0xa0, .type=IO_READ},
        {.addr=0x8aed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_018E) {
    const struct CPU_State initial_cpu = {.pc=0xbe27, .a=0x74, .x=0x4f, .y=0xff, .sp=0x7b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xbe27, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbe28, .a=0x74, .x=0x4f, .y=0xff, .sp=0x7b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbe27, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbe27, .value=0xa0, .type=IO_READ},
        {.addr=0xbe28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_018F) {
    const struct CPU_State initial_cpu = {.pc=0x099e, .a=0x5b, .x=0xf9, .y=0xc2, .sp=0xd8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x099e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x099f, .a=0x5b, .x=0xf9, .y=0xc2, .sp=0xd8, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x099e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x099e, .value=0xa0, .type=IO_READ},
        {.addr=0x099f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0190) {
    const struct CPU_State initial_cpu = {.pc=0x4348, .a=0x7c, .x=0x58, .y=0xd2, .sp=0x01, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x4348, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4349, .a=0x7c, .x=0x58, .y=0xd2, .sp=0x01, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x4348, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4348, .value=0xa0, .type=IO_READ},
        {.addr=0x4349, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0191) {
    const struct CPU_State initial_cpu = {.pc=0xa199, .a=0xce, .x=0xf6, .y=0xbc, .sp=0x13, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa199, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa19a, .a=0xce, .x=0xf6, .y=0xbc, .sp=0x13, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xa199, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa199, .value=0xa0, .type=IO_READ},
        {.addr=0xa19a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0192) {
    const struct CPU_State initial_cpu = {.pc=0xb787, .a=0x37, .x=0xc1, .y=0xa2, .sp=0xa3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb787, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb788, .a=0x37, .x=0xc1, .y=0xa2, .sp=0xa3, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xb787, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb787, .value=0xa0, .type=IO_READ},
        {.addr=0xb788, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0193) {
    const struct CPU_State initial_cpu = {.pc=0x0a55, .a=0x0d, .x=0x7c, .y=0x44, .sp=0xef, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0a55, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0a56, .a=0x0d, .x=0x7c, .y=0x44, .sp=0xef, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0a55, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0a55, .value=0xa0, .type=IO_READ},
        {.addr=0x0a56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0194) {
    const struct CPU_State initial_cpu = {.pc=0x595a, .a=0x2f, .x=0xcc, .y=0xea, .sp=0x1f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x595a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x595b, .a=0x2f, .x=0xcc, .y=0xea, .sp=0x1f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x595a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x595a, .value=0xa0, .type=IO_READ},
        {.addr=0x595b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0195) {
    const struct CPU_State initial_cpu = {.pc=0xa7e4, .a=0x46, .x=0xd3, .y=0x41, .sp=0xb6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa7e5, .a=0x46, .x=0xd3, .y=0x41, .sp=0xb6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa7e4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa7e4, .value=0xa0, .type=IO_READ},
        {.addr=0xa7e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0196) {
    const struct CPU_State initial_cpu = {.pc=0xef5c, .a=0x19, .x=0x05, .y=0x6b, .sp=0x73, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xef5c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xef5d, .a=0x19, .x=0x05, .y=0x6b, .sp=0x73, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xef5c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xef5c, .value=0xa0, .type=IO_READ},
        {.addr=0xef5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0197) {
    const struct CPU_State initial_cpu = {.pc=0xc3e3, .a=0x1d, .x=0x69, .y=0xf1, .sp=0x01, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc3e4, .a=0x1d, .x=0x69, .y=0xf1, .sp=0x01, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xc3e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc3e3, .value=0xa0, .type=IO_READ},
        {.addr=0xc3e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0198) {
    const struct CPU_State initial_cpu = {.pc=0x68f1, .a=0x95, .x=0xbd, .y=0x24, .sp=0x15, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x68f1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x68f2, .a=0x95, .x=0xbd, .y=0x24, .sp=0x15, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x68f1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x68f1, .value=0xa0, .type=IO_READ},
        {.addr=0x68f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0199) {
    const struct CPU_State initial_cpu = {.pc=0x4069, .a=0x09, .x=0xcc, .y=0x61, .sp=0xc3, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4069, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x406a, .a=0x09, .x=0xcc, .y=0x61, .sp=0xc3, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4069, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4069, .value=0xa0, .type=IO_READ},
        {.addr=0x406a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_019A) {
    const struct CPU_State initial_cpu = {.pc=0xc087, .a=0x30, .x=0x3a, .y=0x55, .sp=0x0d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc087, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc088, .a=0x30, .x=0x3a, .y=0x55, .sp=0x0d, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xc087, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc087, .value=0xa0, .type=IO_READ},
        {.addr=0xc088, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_019B) {
    const struct CPU_State initial_cpu = {.pc=0x00e0, .a=0xbc, .x=0xc4, .y=0x3b, .sp=0x6c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x00e1, .a=0xbc, .x=0xc4, .y=0x3b, .sp=0x6c, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x00e0, .value=0xa0, .type=IO_READ},
        {.addr=0x00e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_019C) {
    const struct CPU_State initial_cpu = {.pc=0xe6f6, .a=0xf6, .x=0x3f, .y=0x93, .sp=0x91, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe6f7, .a=0xf6, .x=0x3f, .y=0x93, .sp=0x91, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe6f6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe6f6, .value=0xa0, .type=IO_READ},
        {.addr=0xe6f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_019D) {
    const struct CPU_State initial_cpu = {.pc=0xc066, .a=0x79, .x=0x7c, .y=0xf3, .sp=0x56, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc066, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc067, .a=0x79, .x=0x7c, .y=0xf3, .sp=0x56, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xc066, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc066, .value=0xa0, .type=IO_READ},
        {.addr=0xc067, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_019E) {
    const struct CPU_State initial_cpu = {.pc=0xee2a, .a=0x9e, .x=0xad, .y=0xf4, .sp=0xc1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xee2a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xee2b, .a=0x9e, .x=0xad, .y=0xf4, .sp=0xc1, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xee2a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xee2a, .value=0xa0, .type=IO_READ},
        {.addr=0xee2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_019F) {
    const struct CPU_State initial_cpu = {.pc=0x4e02, .a=0x2c, .x=0xeb, .y=0x0b, .sp=0xbf, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4e02, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4e03, .a=0x2c, .x=0xeb, .y=0x0b, .sp=0xbf, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x4e02, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4e02, .value=0xa0, .type=IO_READ},
        {.addr=0x4e03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x53e3, .a=0xad, .x=0x4f, .y=0xe8, .sp=0xe3, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x53e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x53e4, .a=0xad, .x=0x4f, .y=0xe8, .sp=0xe3, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x53e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x53e3, .value=0xa0, .type=IO_READ},
        {.addr=0x53e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3e6d, .a=0xc3, .x=0xd4, .y=0xf8, .sp=0x5e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3e6d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3e6e, .a=0xc3, .x=0xd4, .y=0xf8, .sp=0x5e, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x3e6d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3e6d, .value=0xa0, .type=IO_READ},
        {.addr=0x3e6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x0bcb, .a=0x21, .x=0x7b, .y=0x2a, .sp=0x88, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0bcb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0bcc, .a=0x21, .x=0x7b, .y=0x2a, .sp=0x88, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0bcb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0bcb, .value=0xa0, .type=IO_READ},
        {.addr=0x0bcc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xeec7, .a=0x09, .x=0x47, .y=0x1c, .sp=0x86, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xeec7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeec8, .a=0x09, .x=0x47, .y=0x1c, .sp=0x86, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xeec7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeec7, .value=0xa0, .type=IO_READ},
        {.addr=0xeec8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x742f, .a=0xd8, .x=0xf7, .y=0x96, .sp=0x7b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x742f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7430, .a=0xd8, .x=0xf7, .y=0x96, .sp=0x7b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x742f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x742f, .value=0xa0, .type=IO_READ},
        {.addr=0x7430, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x0128, .a=0x7f, .x=0xa1, .y=0x2b, .sp=0xf7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0129, .a=0x7f, .x=0xa1, .y=0x2b, .sp=0xf7, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0128, .value=0xa0, .type=IO_READ},
        {.addr=0x0129, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xfd3e, .a=0x70, .x=0xb9, .y=0xa1, .sp=0x4f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfd3f, .a=0x70, .x=0xb9, .y=0xa1, .sp=0x4f, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xfd3e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfd3e, .value=0xa0, .type=IO_READ},
        {.addr=0xfd3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x1814, .a=0xa4, .x=0x8c, .y=0x0d, .sp=0x4f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1814, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1815, .a=0xa4, .x=0x8c, .y=0x0d, .sp=0x4f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x1814, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1814, .value=0xa0, .type=IO_READ},
        {.addr=0x1815, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xb389, .a=0x8e, .x=0x6c, .y=0xde, .sp=0xd5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb389, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb38a, .a=0x8e, .x=0x6c, .y=0xde, .sp=0xd5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb389, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb389, .value=0xa0, .type=IO_READ},
        {.addr=0xb38a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x8644, .a=0x9c, .x=0xb8, .y=0x95, .sp=0x7b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8644, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8645, .a=0x9c, .x=0xb8, .y=0x95, .sp=0x7b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x8644, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8644, .value=0xa0, .type=IO_READ},
        {.addr=0x8645, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1b98, .a=0x9f, .x=0xfe, .y=0x71, .sp=0x13, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x1b98, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1b99, .a=0x9f, .x=0xfe, .y=0x71, .sp=0x13, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1b98, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1b98, .value=0xa0, .type=IO_READ},
        {.addr=0x1b99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x722e, .a=0xa5, .x=0x48, .y=0xca, .sp=0x42, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x722e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x722f, .a=0xa5, .x=0x48, .y=0xca, .sp=0x42, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x722e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x722e, .value=0xa0, .type=IO_READ},
        {.addr=0x722f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x2a14, .a=0xb7, .x=0x81, .y=0x1a, .sp=0xc0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2a14, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2a15, .a=0xb7, .x=0x81, .y=0x1a, .sp=0xc0, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2a14, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2a14, .value=0xa0, .type=IO_READ},
        {.addr=0x2a15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x60d4, .a=0x61, .x=0x50, .y=0xa3, .sp=0x15, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x60d4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x60d5, .a=0x61, .x=0x50, .y=0xa3, .sp=0x15, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x60d4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x60d4, .value=0xa0, .type=IO_READ},
        {.addr=0x60d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xcdfa, .a=0x34, .x=0xde, .y=0x12, .sp=0xc8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xcdfa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcdfb, .a=0x34, .x=0xde, .y=0x12, .sp=0xc8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcdfa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcdfa, .value=0xa0, .type=IO_READ},
        {.addr=0xcdfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xc18e, .a=0xe4, .x=0xef, .y=0x93, .sp=0xef, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc18e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc18f, .a=0xe4, .x=0xef, .y=0x93, .sp=0xef, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc18e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc18e, .value=0xa0, .type=IO_READ},
        {.addr=0xc18f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x1edd, .a=0x8e, .x=0x70, .y=0x9f, .sp=0xe4, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1edd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1ede, .a=0x8e, .x=0x70, .y=0x9f, .sp=0xe4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1edd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1edd, .value=0xa0, .type=IO_READ},
        {.addr=0x1ede, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0c13, .a=0xc3, .x=0xff, .y=0x4c, .sp=0xdd, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c13, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0c14, .a=0xc3, .x=0xff, .y=0x4c, .sp=0xdd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0c13, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0c13, .value=0xa0, .type=IO_READ},
        {.addr=0x0c14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4c44, .a=0xb2, .x=0xbe, .y=0x67, .sp=0x01, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4c44, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4c45, .a=0xb2, .x=0xbe, .y=0x67, .sp=0x01, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x4c44, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4c44, .value=0xa0, .type=IO_READ},
        {.addr=0x4c45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x271f, .a=0xa4, .x=0x24, .y=0x1b, .sp=0xf1, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x271f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2720, .a=0xa4, .x=0x24, .y=0x1b, .sp=0xf1, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x271f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x271f, .value=0xa0, .type=IO_READ},
        {.addr=0x2720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x1f55, .a=0x06, .x=0xeb, .y=0x26, .sp=0x68, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1f55, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1f56, .a=0x06, .x=0xeb, .y=0x26, .sp=0x68, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1f55, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1f55, .value=0xa0, .type=IO_READ},
        {.addr=0x1f56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xaea1, .a=0x03, .x=0xaa, .y=0x5e, .sp=0x35, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xaea1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaea2, .a=0x03, .x=0xaa, .y=0x5e, .sp=0x35, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xaea1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaea1, .value=0xa0, .type=IO_READ},
        {.addr=0xaea2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xcc28, .a=0x32, .x=0xe4, .y=0xdc, .sp=0xcc, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xcc28, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcc29, .a=0x32, .x=0xe4, .y=0xdc, .sp=0xcc, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xcc28, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcc28, .value=0xa0, .type=IO_READ},
        {.addr=0xcc29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x77c4, .a=0x5a, .x=0xb1, .y=0x57, .sp=0xdb, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x77c4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x77c5, .a=0x5a, .x=0xb1, .y=0x57, .sp=0xdb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x77c4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x77c4, .value=0xa0, .type=IO_READ},
        {.addr=0x77c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb091, .a=0x45, .x=0x4f, .y=0x24, .sp=0x85, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb091, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb092, .a=0x45, .x=0x4f, .y=0x24, .sp=0x85, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb091, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb091, .value=0xa0, .type=IO_READ},
        {.addr=0xb092, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x1b3a, .a=0x52, .x=0xe3, .y=0x8b, .sp=0x8d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1b3a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1b3b, .a=0x52, .x=0xe3, .y=0x8b, .sp=0x8d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1b3a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1b3a, .value=0xa0, .type=IO_READ},
        {.addr=0x1b3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xe177, .a=0x67, .x=0x35, .y=0xed, .sp=0xc0, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xe177, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe178, .a=0x67, .x=0x35, .y=0xed, .sp=0xc0, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xe177, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe177, .value=0xa0, .type=IO_READ},
        {.addr=0xe178, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x8c9f, .a=0xa1, .x=0x64, .y=0xd1, .sp=0x30, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8ca0, .a=0xa1, .x=0x64, .y=0xd1, .sp=0x30, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x8c9f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8c9f, .value=0xa0, .type=IO_READ},
        {.addr=0x8ca0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x961e, .a=0xf6, .x=0x44, .y=0xee, .sp=0x71, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x961e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x961f, .a=0xf6, .x=0x44, .y=0xee, .sp=0x71, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x961e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x961e, .value=0xa0, .type=IO_READ},
        {.addr=0x961f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x11a8, .a=0x5c, .x=0x75, .y=0xe4, .sp=0x86, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x11a8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x11a9, .a=0x5c, .x=0x75, .y=0xe4, .sp=0x86, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x11a8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x11a8, .value=0xa0, .type=IO_READ},
        {.addr=0x11a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x160a, .a=0xcd, .x=0x06, .y=0xc6, .sp=0x6f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x160a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x160b, .a=0xcd, .x=0x06, .y=0xc6, .sp=0x6f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x160a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x160a, .value=0xa0, .type=IO_READ},
        {.addr=0x160b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xc60c, .a=0x24, .x=0xe0, .y=0x62, .sp=0x1a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc60c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc60d, .a=0x24, .x=0xe0, .y=0x62, .sp=0x1a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc60c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc60c, .value=0xa0, .type=IO_READ},
        {.addr=0xc60d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xa96d, .a=0x68, .x=0x5e, .y=0x7c, .sp=0xcb, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xa96d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa96e, .a=0x68, .x=0x5e, .y=0x7c, .sp=0xcb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa96d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa96d, .value=0xa0, .type=IO_READ},
        {.addr=0xa96e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x0b02, .a=0x6b, .x=0xbd, .y=0xd3, .sp=0x93, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0b02, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0b03, .a=0x6b, .x=0xbd, .y=0xd3, .sp=0x93, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0b02, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0b02, .value=0xa0, .type=IO_READ},
        {.addr=0x0b03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x7466, .a=0x39, .x=0x30, .y=0x91, .sp=0x7c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x7466, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7467, .a=0x39, .x=0x30, .y=0x91, .sp=0x7c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x7466, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7466, .value=0xa0, .type=IO_READ},
        {.addr=0x7467, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x65a4, .a=0xea, .x=0x92, .y=0x33, .sp=0xdf, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x65a4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x65a5, .a=0xea, .x=0x92, .y=0x33, .sp=0xdf, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x65a4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x65a4, .value=0xa0, .type=IO_READ},
        {.addr=0x65a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x7aeb, .a=0x50, .x=0xcd, .y=0xa7, .sp=0x57, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7aeb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7aec, .a=0x50, .x=0xcd, .y=0xa7, .sp=0x57, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7aeb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7aeb, .value=0xa0, .type=IO_READ},
        {.addr=0x7aec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x59ef, .a=0x7b, .x=0xde, .y=0x28, .sp=0xe5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x59ef, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x59f0, .a=0x7b, .x=0xde, .y=0x28, .sp=0xe5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x59ef, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x59ef, .value=0xa0, .type=IO_READ},
        {.addr=0x59f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x9367, .a=0x57, .x=0x3d, .y=0x34, .sp=0x90, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9367, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9368, .a=0x57, .x=0x3d, .y=0x34, .sp=0x90, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x9367, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9367, .value=0xa0, .type=IO_READ},
        {.addr=0x9368, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xa0d3, .a=0xf5, .x=0x6f, .y=0x28, .sp=0xaf, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa0d4, .a=0xf5, .x=0x6f, .y=0x28, .sp=0xaf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa0d3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa0d3, .value=0xa0, .type=IO_READ},
        {.addr=0xa0d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xbd62, .a=0xf0, .x=0x4c, .y=0x9d, .sp=0x96, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xbd62, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbd63, .a=0xf0, .x=0x4c, .y=0x9d, .sp=0x96, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbd62, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbd62, .value=0xa0, .type=IO_READ},
        {.addr=0xbd63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x4065, .a=0x98, .x=0xc8, .y=0x9f, .sp=0xe4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x4065, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4066, .a=0x98, .x=0xc8, .y=0x9f, .sp=0xe4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4065, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4065, .value=0xa0, .type=IO_READ},
        {.addr=0x4066, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x5f1a, .a=0x7b, .x=0xd7, .y=0x43, .sp=0x41, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5f1a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5f1b, .a=0x7b, .x=0xd7, .y=0x43, .sp=0x41, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5f1a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5f1a, .value=0xa0, .type=IO_READ},
        {.addr=0x5f1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xbafe, .a=0xbc, .x=0xc4, .y=0xbd, .sp=0x1c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xbafe, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbaff, .a=0xbc, .x=0xc4, .y=0xbd, .sp=0x1c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbafe, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbafe, .value=0xa0, .type=IO_READ},
        {.addr=0xbaff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x0134, .a=0xd3, .x=0x37, .y=0x98, .sp=0x49, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0135, .a=0xd3, .x=0x37, .y=0x98, .sp=0x49, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0134, .value=0xa0, .type=IO_READ},
        {.addr=0x0135, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xefd6, .a=0x4d, .x=0xfc, .y=0x56, .sp=0xc5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xefd6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xefd7, .a=0x4d, .x=0xfc, .y=0x56, .sp=0xc5, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xefd6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xefd6, .value=0xa0, .type=IO_READ},
        {.addr=0xefd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xf154, .a=0x96, .x=0x92, .y=0x51, .sp=0x45, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf154, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf155, .a=0x96, .x=0x92, .y=0x51, .sp=0x45, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xf154, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf154, .value=0xa0, .type=IO_READ},
        {.addr=0xf155, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xa9be, .a=0x0d, .x=0x70, .y=0xcc, .sp=0x23, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa9be, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa9bf, .a=0x0d, .x=0x70, .y=0xcc, .sp=0x23, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa9be, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa9be, .value=0xa0, .type=IO_READ},
        {.addr=0xa9bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x8120, .a=0xbf, .x=0x86, .y=0x0d, .sp=0x2c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8120, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8121, .a=0xbf, .x=0x86, .y=0x0d, .sp=0x2c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8120, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8120, .value=0xa0, .type=IO_READ},
        {.addr=0x8121, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x93e6, .a=0xf1, .x=0xc1, .y=0xee, .sp=0x53, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x93e6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x93e7, .a=0xf1, .x=0xc1, .y=0xee, .sp=0x53, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x93e6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x93e6, .value=0xa0, .type=IO_READ},
        {.addr=0x93e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x8272, .a=0x8e, .x=0x4e, .y=0x9d, .sp=0x34, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8272, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8273, .a=0x8e, .x=0x4e, .y=0x9d, .sp=0x34, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x8272, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8272, .value=0xa0, .type=IO_READ},
        {.addr=0x8273, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x1d13, .a=0x7a, .x=0xcd, .y=0xd1, .sp=0x80, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1d13, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1d14, .a=0x7a, .x=0xcd, .y=0xd1, .sp=0x80, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1d13, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1d13, .value=0xa0, .type=IO_READ},
        {.addr=0x1d14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x8d7b, .a=0x1e, .x=0xfb, .y=0xd8, .sp=0x65, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8d7b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8d7c, .a=0x1e, .x=0xfb, .y=0xd8, .sp=0x65, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8d7b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8d7b, .value=0xa0, .type=IO_READ},
        {.addr=0x8d7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x5e43, .a=0x52, .x=0x07, .y=0x92, .sp=0x7b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5e43, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5e44, .a=0x52, .x=0x07, .y=0x92, .sp=0x7b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x5e43, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5e43, .value=0xa0, .type=IO_READ},
        {.addr=0x5e44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x02ba, .a=0x0a, .x=0x3b, .y=0xc9, .sp=0x10, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x02ba, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x02bb, .a=0x0a, .x=0x3b, .y=0xc9, .sp=0x10, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x02ba, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x02ba, .value=0xa0, .type=IO_READ},
        {.addr=0x02bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xa14f, .a=0xe8, .x=0xed, .y=0xa5, .sp=0x0f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa14f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa150, .a=0xe8, .x=0xed, .y=0xa5, .sp=0x0f, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xa14f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa14f, .value=0xa0, .type=IO_READ},
        {.addr=0xa150, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xe570, .a=0x20, .x=0x5c, .y=0x2c, .sp=0xe5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe570, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe571, .a=0x20, .x=0x5c, .y=0x2c, .sp=0xe5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe570, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe570, .value=0xa0, .type=IO_READ},
        {.addr=0xe571, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xbf25, .a=0x00, .x=0x0e, .y=0x9d, .sp=0x6a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xbf25, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbf26, .a=0x00, .x=0x0e, .y=0x9d, .sp=0x6a, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xbf25, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbf25, .value=0xa0, .type=IO_READ},
        {.addr=0xbf26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xef25, .a=0x10, .x=0xfc, .y=0x04, .sp=0xae, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xef25, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xef26, .a=0x10, .x=0xfc, .y=0x04, .sp=0xae, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xef25, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xef25, .value=0xa0, .type=IO_READ},
        {.addr=0xef26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x9d35, .a=0x72, .x=0x20, .y=0xb9, .sp=0x33, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9d35, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9d36, .a=0x72, .x=0x20, .y=0xb9, .sp=0x33, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9d35, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9d35, .value=0xa0, .type=IO_READ},
        {.addr=0x9d36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x59b4, .a=0x2a, .x=0x04, .y=0x40, .sp=0x26, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x59b4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x59b5, .a=0x2a, .x=0x04, .y=0x40, .sp=0x26, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x59b4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x59b4, .value=0xa0, .type=IO_READ},
        {.addr=0x59b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xb6b3, .a=0x97, .x=0x47, .y=0xa4, .sp=0x57, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb6b3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb6b4, .a=0x97, .x=0x47, .y=0xa4, .sp=0x57, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xb6b3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb6b3, .value=0xa0, .type=IO_READ},
        {.addr=0xb6b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x46ca, .a=0xc5, .x=0x22, .y=0x39, .sp=0x56, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x46ca, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x46cb, .a=0xc5, .x=0x22, .y=0x39, .sp=0x56, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x46ca, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x46ca, .value=0xa0, .type=IO_READ},
        {.addr=0x46cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xd66d, .a=0x5b, .x=0xd2, .y=0xa8, .sp=0x02, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd66d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd66e, .a=0x5b, .x=0xd2, .y=0xa8, .sp=0x02, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xd66d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd66d, .value=0xa0, .type=IO_READ},
        {.addr=0xd66e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x6d7c, .a=0x45, .x=0x6f, .y=0xf0, .sp=0xa5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6d7c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d7d, .a=0x45, .x=0x6f, .y=0xf0, .sp=0xa5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6d7c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d7c, .value=0xa0, .type=IO_READ},
        {.addr=0x6d7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x637e, .a=0x2b, .x=0x6b, .y=0x4d, .sp=0xc0, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x637e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x637f, .a=0x2b, .x=0x6b, .y=0x4d, .sp=0xc0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x637e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x637e, .value=0xa0, .type=IO_READ},
        {.addr=0x637f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x98c2, .a=0xfc, .x=0x92, .y=0xf2, .sp=0x8f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x98c2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x98c3, .a=0xfc, .x=0x92, .y=0xf2, .sp=0x8f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x98c2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x98c2, .value=0xa0, .type=IO_READ},
        {.addr=0x98c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x6979, .a=0x17, .x=0x3e, .y=0x51, .sp=0xf5, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6979, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x697a, .a=0x17, .x=0x3e, .y=0x51, .sp=0xf5, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x6979, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6979, .value=0xa0, .type=IO_READ},
        {.addr=0x697a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xdcd6, .a=0xe4, .x=0xe7, .y=0xa3, .sp=0x0a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xdcd6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdcd7, .a=0xe4, .x=0xe7, .y=0xa3, .sp=0x0a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xdcd6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdcd6, .value=0xa0, .type=IO_READ},
        {.addr=0xdcd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x5d00, .a=0x00, .x=0xe5, .y=0x95, .sp=0xda, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5d00, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5d01, .a=0x00, .x=0xe5, .y=0x95, .sp=0xda, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5d00, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5d00, .value=0xa0, .type=IO_READ},
        {.addr=0x5d01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xcd5f, .a=0x59, .x=0x54, .y=0xea, .sp=0x1e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcd60, .a=0x59, .x=0x54, .y=0xea, .sp=0x1e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xcd5f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcd5f, .value=0xa0, .type=IO_READ},
        {.addr=0xcd60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9f36, .a=0x47, .x=0x06, .y=0x3e, .sp=0xc4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9f36, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9f37, .a=0x47, .x=0x06, .y=0x3e, .sp=0xc4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9f36, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9f36, .value=0xa0, .type=IO_READ},
        {.addr=0x9f37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x5352, .a=0x05, .x=0x52, .y=0x4e, .sp=0xa1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5352, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5353, .a=0x05, .x=0x52, .y=0x4e, .sp=0xa1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5352, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5352, .value=0xa0, .type=IO_READ},
        {.addr=0x5353, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x8d5e, .a=0x8b, .x=0x8b, .y=0xe1, .sp=0x63, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8d5f, .a=0x8b, .x=0x8b, .y=0xe1, .sp=0x63, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x8d5e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8d5e, .value=0xa0, .type=IO_READ},
        {.addr=0x8d5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x3539, .a=0xf0, .x=0x47, .y=0x97, .sp=0x15, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3539, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x353a, .a=0xf0, .x=0x47, .y=0x97, .sp=0x15, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3539, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3539, .value=0xa0, .type=IO_READ},
        {.addr=0x353a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x1b6b, .a=0x39, .x=0x34, .y=0xf3, .sp=0x7d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x1b6b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1b6c, .a=0x39, .x=0x34, .y=0xf3, .sp=0x7d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1b6b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1b6b, .value=0xa0, .type=IO_READ},
        {.addr=0x1b6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x9412, .a=0x8b, .x=0x5b, .y=0x06, .sp=0x60, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9412, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9413, .a=0x8b, .x=0x5b, .y=0x06, .sp=0x60, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x9412, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9412, .value=0xa0, .type=IO_READ},
        {.addr=0x9413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x11b1, .a=0x52, .x=0x6f, .y=0xd1, .sp=0x7e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x11b1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x11b2, .a=0x52, .x=0x6f, .y=0xd1, .sp=0x7e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x11b1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x11b1, .value=0xa0, .type=IO_READ},
        {.addr=0x11b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x1bab, .a=0x10, .x=0xe1, .y=0x25, .sp=0x75, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1bab, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1bac, .a=0x10, .x=0xe1, .y=0x25, .sp=0x75, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1bab, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1bab, .value=0xa0, .type=IO_READ},
        {.addr=0x1bac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe32d, .a=0xe3, .x=0xa5, .y=0x29, .sp=0x9e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe32d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe32e, .a=0xe3, .x=0xa5, .y=0x29, .sp=0x9e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xe32d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe32d, .value=0xa0, .type=IO_READ},
        {.addr=0xe32e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x21e3, .a=0xfb, .x=0xb2, .y=0x04, .sp=0x93, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x21e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x21e4, .a=0xfb, .x=0xb2, .y=0x04, .sp=0x93, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x21e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x21e3, .value=0xa0, .type=IO_READ},
        {.addr=0x21e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x0907, .a=0x80, .x=0xde, .y=0x06, .sp=0xa0, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0907, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0908, .a=0x80, .x=0xde, .y=0x06, .sp=0xa0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0907, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0907, .value=0xa0, .type=IO_READ},
        {.addr=0x0908, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xa0c6, .a=0x93, .x=0x87, .y=0xa8, .sp=0x87, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa0c7, .a=0x93, .x=0x87, .y=0xa8, .sp=0x87, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa0c6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa0c6, .value=0xa0, .type=IO_READ},
        {.addr=0xa0c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x9ee0, .a=0x09, .x=0xd4, .y=0x24, .sp=0xb7, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9ee1, .a=0x09, .x=0xd4, .y=0x24, .sp=0xb7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9ee0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9ee0, .value=0xa0, .type=IO_READ},
        {.addr=0x9ee1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x09b9, .a=0x15, .x=0xd6, .y=0x58, .sp=0x34, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x09b9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x09ba, .a=0x15, .x=0xd6, .y=0x58, .sp=0x34, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x09b9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x09b9, .value=0xa0, .type=IO_READ},
        {.addr=0x09ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xe2ca, .a=0xb2, .x=0xa2, .y=0x7b, .sp=0x4d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ca, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe2cb, .a=0xb2, .x=0xa2, .y=0x7b, .sp=0x4d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe2ca, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe2ca, .value=0xa0, .type=IO_READ},
        {.addr=0xe2cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x0409, .a=0x8f, .x=0xcb, .y=0x61, .sp=0x8f, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0409, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x040a, .a=0x8f, .x=0xcb, .y=0x61, .sp=0x8f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0409, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0409, .value=0xa0, .type=IO_READ},
        {.addr=0x040a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xbb85, .a=0x01, .x=0xd5, .y=0x83, .sp=0xad, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb85, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbb86, .a=0x01, .x=0xd5, .y=0x83, .sp=0xad, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xbb85, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbb85, .value=0xa0, .type=IO_READ},
        {.addr=0xbb86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xe2ce, .a=0xf2, .x=0xa5, .y=0x83, .sp=0xc7, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ce, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe2cf, .a=0xf2, .x=0xa5, .y=0x83, .sp=0xc7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe2ce, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe2ce, .value=0xa0, .type=IO_READ},
        {.addr=0xe2cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x0b84, .a=0x71, .x=0x6e, .y=0x30, .sp=0xdb, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0b84, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0b85, .a=0x71, .x=0x6e, .y=0x30, .sp=0xdb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0b84, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0b84, .value=0xa0, .type=IO_READ},
        {.addr=0x0b85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x9de8, .a=0x07, .x=0xaa, .y=0x47, .sp=0x53, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9de8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9de9, .a=0x07, .x=0xaa, .y=0x47, .sp=0x53, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x9de8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9de8, .value=0xa0, .type=IO_READ},
        {.addr=0x9de9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x7a57, .a=0x3c, .x=0xd5, .y=0x3f, .sp=0x55, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x7a57, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7a58, .a=0x3c, .x=0xd5, .y=0x3f, .sp=0x55, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x7a57, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7a57, .value=0xa0, .type=IO_READ},
        {.addr=0x7a58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xe989, .a=0x87, .x=0x5d, .y=0xb1, .sp=0x22, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe989, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe98a, .a=0x87, .x=0x5d, .y=0xb1, .sp=0x22, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe989, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe989, .value=0xa0, .type=IO_READ},
        {.addr=0xe98a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x2147, .a=0x07, .x=0x02, .y=0x76, .sp=0x93, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x2147, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2148, .a=0x07, .x=0x02, .y=0x76, .sp=0x93, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x2147, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2147, .value=0xa0, .type=IO_READ},
        {.addr=0x2148, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x4afd, .a=0xbf, .x=0x58, .y=0x96, .sp=0x7a, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4afd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4afe, .a=0xbf, .x=0x58, .y=0x96, .sp=0x7a, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x4afd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4afd, .value=0xa0, .type=IO_READ},
        {.addr=0x4afe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x6fb4, .a=0xf4, .x=0x64, .y=0x1e, .sp=0x37, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6fb5, .a=0xf4, .x=0x64, .y=0x1e, .sp=0x37, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x6fb4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6fb4, .value=0xa0, .type=IO_READ},
        {.addr=0x6fb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0200) {
    const struct CPU_State initial_cpu = {.pc=0x3b89, .a=0x2b, .x=0x72, .y=0xbe, .sp=0xd1, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3b89, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3b8a, .a=0x2b, .x=0x72, .y=0xbe, .sp=0xd1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3b89, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3b89, .value=0xa0, .type=IO_READ},
        {.addr=0x3b8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0201) {
    const struct CPU_State initial_cpu = {.pc=0xabc1, .a=0x7d, .x=0x4c, .y=0x57, .sp=0xfa, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xabc1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xabc2, .a=0x7d, .x=0x4c, .y=0x57, .sp=0xfa, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xabc1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xabc1, .value=0xa0, .type=IO_READ},
        {.addr=0xabc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0202) {
    const struct CPU_State initial_cpu = {.pc=0xcf1f, .a=0xcc, .x=0xe1, .y=0xb6, .sp=0xea, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xcf1f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcf20, .a=0xcc, .x=0xe1, .y=0xb6, .sp=0xea, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xcf1f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcf1f, .value=0xa0, .type=IO_READ},
        {.addr=0xcf20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0203) {
    const struct CPU_State initial_cpu = {.pc=0x17d7, .a=0x92, .x=0xb3, .y=0xb6, .sp=0x9a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x17d7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x17d8, .a=0x92, .x=0xb3, .y=0xb6, .sp=0x9a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x17d7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x17d7, .value=0xa0, .type=IO_READ},
        {.addr=0x17d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0204) {
    const struct CPU_State initial_cpu = {.pc=0x4f3c, .a=0xc5, .x=0xd7, .y=0xc4, .sp=0x5c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4f3c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4f3d, .a=0xc5, .x=0xd7, .y=0xc4, .sp=0x5c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x4f3c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4f3c, .value=0xa0, .type=IO_READ},
        {.addr=0x4f3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0205) {
    const struct CPU_State initial_cpu = {.pc=0xc8b7, .a=0x44, .x=0x7e, .y=0x0b, .sp=0x2b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc8b8, .a=0x44, .x=0x7e, .y=0x0b, .sp=0x2b, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xc8b7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc8b7, .value=0xa0, .type=IO_READ},
        {.addr=0xc8b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0206) {
    const struct CPU_State initial_cpu = {.pc=0x6b16, .a=0x74, .x=0x58, .y=0x50, .sp=0x31, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6b16, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6b17, .a=0x74, .x=0x58, .y=0x50, .sp=0x31, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x6b16, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6b16, .value=0xa0, .type=IO_READ},
        {.addr=0x6b17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0207) {
    const struct CPU_State initial_cpu = {.pc=0x105e, .a=0xab, .x=0x9c, .y=0xa4, .sp=0xce, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x105e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x105f, .a=0xab, .x=0x9c, .y=0xa4, .sp=0xce, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x105e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x105e, .value=0xa0, .type=IO_READ},
        {.addr=0x105f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0208) {
    const struct CPU_State initial_cpu = {.pc=0xf219, .a=0x15, .x=0x06, .y=0x43, .sp=0xa2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf219, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf21a, .a=0x15, .x=0x06, .y=0x43, .sp=0xa2, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xf219, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf219, .value=0xa0, .type=IO_READ},
        {.addr=0xf21a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0209) {
    const struct CPU_State initial_cpu = {.pc=0xc64c, .a=0xc1, .x=0xfe, .y=0xd8, .sp=0xc6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc64c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc64d, .a=0xc1, .x=0xfe, .y=0xd8, .sp=0xc6, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc64c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc64c, .value=0xa0, .type=IO_READ},
        {.addr=0xc64d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_020A) {
    const struct CPU_State initial_cpu = {.pc=0x07ba, .a=0xc1, .x=0xfd, .y=0xc0, .sp=0xfe, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x07ba, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x07bb, .a=0xc1, .x=0xfd, .y=0xc0, .sp=0xfe, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x07ba, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x07ba, .value=0xa0, .type=IO_READ},
        {.addr=0x07bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_020B) {
    const struct CPU_State initial_cpu = {.pc=0x64ff, .a=0x02, .x=0x61, .y=0x4c, .sp=0xb1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x64ff, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6500, .a=0x02, .x=0x61, .y=0x4c, .sp=0xb1, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x64ff, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x64ff, .value=0xa0, .type=IO_READ},
        {.addr=0x6500, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_020C) {
    const struct CPU_State initial_cpu = {.pc=0xd9c5, .a=0xec, .x=0x49, .y=0xea, .sp=0x63, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd9c6, .a=0xec, .x=0x49, .y=0xea, .sp=0x63, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd9c5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd9c5, .value=0xa0, .type=IO_READ},
        {.addr=0xd9c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_020D) {
    const struct CPU_State initial_cpu = {.pc=0xff72, .a=0x90, .x=0x43, .y=0x23, .sp=0xfd, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xff72, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xff73, .a=0x90, .x=0x43, .y=0x23, .sp=0xfd, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xff72, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xff72, .value=0xa0, .type=IO_READ},
        {.addr=0xff73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_020E) {
    const struct CPU_State initial_cpu = {.pc=0x2acc, .a=0x67, .x=0xb6, .y=0xe0, .sp=0xf9, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2acc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2acd, .a=0x67, .x=0xb6, .y=0xe0, .sp=0xf9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2acc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2acc, .value=0xa0, .type=IO_READ},
        {.addr=0x2acd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_020F) {
    const struct CPU_State initial_cpu = {.pc=0xa0d8, .a=0x1c, .x=0xc8, .y=0x39, .sp=0xbc, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa0d9, .a=0x1c, .x=0xc8, .y=0x39, .sp=0xbc, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa0d8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa0d8, .value=0xa0, .type=IO_READ},
        {.addr=0xa0d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0210) {
    const struct CPU_State initial_cpu = {.pc=0xa089, .a=0x52, .x=0x86, .y=0xdb, .sp=0x2b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa089, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa08a, .a=0x52, .x=0x86, .y=0xdb, .sp=0x2b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa089, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa089, .value=0xa0, .type=IO_READ},
        {.addr=0xa08a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0211) {
    const struct CPU_State initial_cpu = {.pc=0x6121, .a=0x0a, .x=0x75, .y=0xd3, .sp=0xd5, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6121, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6122, .a=0x0a, .x=0x75, .y=0xd3, .sp=0xd5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6121, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6121, .value=0xa0, .type=IO_READ},
        {.addr=0x6122, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0212) {
    const struct CPU_State initial_cpu = {.pc=0x8858, .a=0xd8, .x=0x73, .y=0xb5, .sp=0x26, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x8858, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8859, .a=0xd8, .x=0x73, .y=0xb5, .sp=0x26, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8858, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8858, .value=0xa0, .type=IO_READ},
        {.addr=0x8859, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0213) {
    const struct CPU_State initial_cpu = {.pc=0x9264, .a=0xe3, .x=0x06, .y=0x0f, .sp=0x48, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9264, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9265, .a=0xe3, .x=0x06, .y=0x0f, .sp=0x48, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x9264, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9264, .value=0xa0, .type=IO_READ},
        {.addr=0x9265, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0214) {
    const struct CPU_State initial_cpu = {.pc=0xc70b, .a=0xfc, .x=0x64, .y=0x53, .sp=0x6e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc70b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc70c, .a=0xfc, .x=0x64, .y=0x53, .sp=0x6e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc70b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc70b, .value=0xa0, .type=IO_READ},
        {.addr=0xc70c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0215) {
    const struct CPU_State initial_cpu = {.pc=0xc59f, .a=0xcc, .x=0x10, .y=0x69, .sp=0x76, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc59f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc5a0, .a=0xcc, .x=0x10, .y=0x69, .sp=0x76, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc59f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc59f, .value=0xa0, .type=IO_READ},
        {.addr=0xc5a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0216) {
    const struct CPU_State initial_cpu = {.pc=0x6343, .a=0x71, .x=0x79, .y=0xfa, .sp=0xad, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x6343, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6344, .a=0x71, .x=0x79, .y=0xfa, .sp=0xad, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6343, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6343, .value=0xa0, .type=IO_READ},
        {.addr=0x6344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0217) {
    const struct CPU_State initial_cpu = {.pc=0x1db9, .a=0x83, .x=0xaa, .y=0x0f, .sp=0xd8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1db9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1dba, .a=0x83, .x=0xaa, .y=0x0f, .sp=0xd8, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x1db9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1db9, .value=0xa0, .type=IO_READ},
        {.addr=0x1dba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0218) {
    const struct CPU_State initial_cpu = {.pc=0xed19, .a=0x98, .x=0xee, .y=0x1a, .sp=0xf7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xed19, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xed1a, .a=0x98, .x=0xee, .y=0x1a, .sp=0xf7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xed19, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xed19, .value=0xa0, .type=IO_READ},
        {.addr=0xed1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0219) {
    const struct CPU_State initial_cpu = {.pc=0xa7c1, .a=0x01, .x=0x26, .y=0xdf, .sp=0x3a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xa7c1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa7c2, .a=0x01, .x=0x26, .y=0xdf, .sp=0x3a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xa7c1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa7c1, .value=0xa0, .type=IO_READ},
        {.addr=0xa7c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_021A) {
    const struct CPU_State initial_cpu = {.pc=0x9fdf, .a=0x61, .x=0x57, .y=0x45, .sp=0xbd, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x9fdf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9fe0, .a=0x61, .x=0x57, .y=0x45, .sp=0xbd, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x9fdf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9fdf, .value=0xa0, .type=IO_READ},
        {.addr=0x9fe0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_021B) {
    const struct CPU_State initial_cpu = {.pc=0xdae2, .a=0x06, .x=0x3f, .y=0x0f, .sp=0x09, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdae2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdae3, .a=0x06, .x=0x3f, .y=0x0f, .sp=0x09, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdae2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdae2, .value=0xa0, .type=IO_READ},
        {.addr=0xdae3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_021C) {
    const struct CPU_State initial_cpu = {.pc=0xe0e7, .a=0x00, .x=0xb0, .y=0x17, .sp=0x68, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe0e7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe0e8, .a=0x00, .x=0xb0, .y=0x17, .sp=0x68, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xe0e7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe0e7, .value=0xa0, .type=IO_READ},
        {.addr=0xe0e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_021D) {
    const struct CPU_State initial_cpu = {.pc=0xd553, .a=0x41, .x=0xbe, .y=0xaa, .sp=0x45, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd553, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd554, .a=0x41, .x=0xbe, .y=0xaa, .sp=0x45, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd553, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd553, .value=0xa0, .type=IO_READ},
        {.addr=0xd554, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_021E) {
    const struct CPU_State initial_cpu = {.pc=0x184e, .a=0xfd, .x=0xd1, .y=0xc3, .sp=0xbe, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x184e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x184f, .a=0xfd, .x=0xd1, .y=0xc3, .sp=0xbe, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x184e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x184e, .value=0xa0, .type=IO_READ},
        {.addr=0x184f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_021F) {
    const struct CPU_State initial_cpu = {.pc=0x1cdb, .a=0x6b, .x=0x36, .y=0x86, .sp=0xc6, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1cdb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1cdc, .a=0x6b, .x=0x36, .y=0x86, .sp=0xc6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1cdb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1cdb, .value=0xa0, .type=IO_READ},
        {.addr=0x1cdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0220) {
    const struct CPU_State initial_cpu = {.pc=0xcb1d, .a=0x00, .x=0xbe, .y=0x47, .sp=0xc7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcb1e, .a=0x00, .x=0xbe, .y=0x47, .sp=0xc7, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xcb1d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcb1d, .value=0xa0, .type=IO_READ},
        {.addr=0xcb1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0221) {
    const struct CPU_State initial_cpu = {.pc=0xf024, .a=0xce, .x=0xc0, .y=0xf6, .sp=0x12, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xf024, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf025, .a=0xce, .x=0xc0, .y=0xf6, .sp=0x12, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xf024, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf024, .value=0xa0, .type=IO_READ},
        {.addr=0xf025, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0222) {
    const struct CPU_State initial_cpu = {.pc=0x5fe7, .a=0x7d, .x=0xa2, .y=0xb4, .sp=0xe5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5fe8, .a=0x7d, .x=0xa2, .y=0xb4, .sp=0xe5, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5fe7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5fe7, .value=0xa0, .type=IO_READ},
        {.addr=0x5fe8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0223) {
    const struct CPU_State initial_cpu = {.pc=0x2902, .a=0x4a, .x=0xff, .y=0xaf, .sp=0x8f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2902, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2903, .a=0x4a, .x=0xff, .y=0xaf, .sp=0x8f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x2902, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2902, .value=0xa0, .type=IO_READ},
        {.addr=0x2903, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0224) {
    const struct CPU_State initial_cpu = {.pc=0xe094, .a=0xea, .x=0x9d, .y=0x71, .sp=0x56, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe094, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe095, .a=0xea, .x=0x9d, .y=0x71, .sp=0x56, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xe094, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe094, .value=0xa0, .type=IO_READ},
        {.addr=0xe095, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0225) {
    const struct CPU_State initial_cpu = {.pc=0x64ee, .a=0x4a, .x=0x44, .y=0xbd, .sp=0x54, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x64ee, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x64ef, .a=0x4a, .x=0x44, .y=0xbd, .sp=0x54, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x64ee, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x64ee, .value=0xa0, .type=IO_READ},
        {.addr=0x64ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0226) {
    const struct CPU_State initial_cpu = {.pc=0x056b, .a=0x8f, .x=0xf9, .y=0x14, .sp=0x3e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x056b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x056c, .a=0x8f, .x=0xf9, .y=0x14, .sp=0x3e, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x056b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x056b, .value=0xa0, .type=IO_READ},
        {.addr=0x056c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0227) {
    const struct CPU_State initial_cpu = {.pc=0x6155, .a=0x12, .x=0x97, .y=0x1d, .sp=0xa4, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6155, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6156, .a=0x12, .x=0x97, .y=0x1d, .sp=0xa4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6155, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6155, .value=0xa0, .type=IO_READ},
        {.addr=0x6156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0228) {
    const struct CPU_State initial_cpu = {.pc=0x2251, .a=0xc1, .x=0x63, .y=0x63, .sp=0x69, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2251, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2252, .a=0xc1, .x=0x63, .y=0x63, .sp=0x69, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2251, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2251, .value=0xa0, .type=IO_READ},
        {.addr=0x2252, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0229) {
    const struct CPU_State initial_cpu = {.pc=0x1f00, .a=0x67, .x=0xf7, .y=0x64, .sp=0xcf, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1f00, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1f01, .a=0x67, .x=0xf7, .y=0x64, .sp=0xcf, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x1f00, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1f00, .value=0xa0, .type=IO_READ},
        {.addr=0x1f01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_022A) {
    const struct CPU_State initial_cpu = {.pc=0x3f2d, .a=0x3a, .x=0x96, .y=0x8c, .sp=0x6a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3f2d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3f2e, .a=0x3a, .x=0x96, .y=0x8c, .sp=0x6a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3f2d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3f2d, .value=0xa0, .type=IO_READ},
        {.addr=0x3f2e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_022B) {
    const struct CPU_State initial_cpu = {.pc=0xf21f, .a=0x78, .x=0x73, .y=0x31, .sp=0xd7, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf21f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf220, .a=0x78, .x=0x73, .y=0x31, .sp=0xd7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf21f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf21f, .value=0xa0, .type=IO_READ},
        {.addr=0xf220, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf01f, .a=0x94, .x=0xbb, .y=0xf6, .sp=0x16, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf01f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf020, .a=0x94, .x=0xbb, .y=0xf6, .sp=0x16, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xf01f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf01f, .value=0xa0, .type=IO_READ},
        {.addr=0xf020, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_022D) {
    const struct CPU_State initial_cpu = {.pc=0x0da0, .a=0xa2, .x=0x42, .y=0x9b, .sp=0x7c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0da0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0da1, .a=0xa2, .x=0x42, .y=0x9b, .sp=0x7c, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0da0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0da0, .value=0xa0, .type=IO_READ},
        {.addr=0x0da1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_022E) {
    const struct CPU_State initial_cpu = {.pc=0xeb3e, .a=0xf4, .x=0x22, .y=0xaf, .sp=0x4d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeb3f, .a=0xf4, .x=0x22, .y=0xaf, .sp=0x4d, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xeb3e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeb3e, .value=0xa0, .type=IO_READ},
        {.addr=0xeb3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_022F) {
    const struct CPU_State initial_cpu = {.pc=0xba93, .a=0x2e, .x=0xe2, .y=0xf9, .sp=0x2d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xba93, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xba94, .a=0x2e, .x=0xe2, .y=0xf9, .sp=0x2d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xba93, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xba93, .value=0xa0, .type=IO_READ},
        {.addr=0xba94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1882, .a=0x2b, .x=0x29, .y=0x98, .sp=0xb0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1882, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1883, .a=0x2b, .x=0x29, .y=0x98, .sp=0xb0, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x1882, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1882, .value=0xa0, .type=IO_READ},
        {.addr=0x1883, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0231) {
    const struct CPU_State initial_cpu = {.pc=0xccc2, .a=0xf5, .x=0x81, .y=0x6a, .sp=0x8e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xccc2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xccc3, .a=0xf5, .x=0x81, .y=0x6a, .sp=0x8e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xccc2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xccc2, .value=0xa0, .type=IO_READ},
        {.addr=0xccc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0232) {
    const struct CPU_State initial_cpu = {.pc=0xa2d3, .a=0xc6, .x=0xf5, .y=0xed, .sp=0xf8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa2d4, .a=0xc6, .x=0xf5, .y=0xed, .sp=0xf8, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xa2d3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa2d3, .value=0xa0, .type=IO_READ},
        {.addr=0xa2d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0233) {
    const struct CPU_State initial_cpu = {.pc=0x5d86, .a=0xae, .x=0x3c, .y=0xc0, .sp=0x46, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x5d86, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5d87, .a=0xae, .x=0x3c, .y=0xc0, .sp=0x46, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x5d86, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5d86, .value=0xa0, .type=IO_READ},
        {.addr=0x5d87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd680, .a=0xee, .x=0x0e, .y=0xfe, .sp=0xc7, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd680, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd681, .a=0xee, .x=0x0e, .y=0xfe, .sp=0xc7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd680, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd680, .value=0xa0, .type=IO_READ},
        {.addr=0xd681, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0235) {
    const struct CPU_State initial_cpu = {.pc=0x8d48, .a=0x00, .x=0xe0, .y=0x41, .sp=0xaf, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d48, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8d49, .a=0x00, .x=0xe0, .y=0x41, .sp=0xaf, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x8d48, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8d48, .value=0xa0, .type=IO_READ},
        {.addr=0x8d49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0236) {
    const struct CPU_State initial_cpu = {.pc=0x650f, .a=0xad, .x=0x35, .y=0x5a, .sp=0x49, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x650f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6510, .a=0xad, .x=0x35, .y=0x5a, .sp=0x49, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x650f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x650f, .value=0xa0, .type=IO_READ},
        {.addr=0x6510, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0237) {
    const struct CPU_State initial_cpu = {.pc=0xd4ba, .a=0x97, .x=0x95, .y=0x1a, .sp=0xb9, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ba, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd4bb, .a=0x97, .x=0x95, .y=0x1a, .sp=0xb9, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xd4ba, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd4ba, .value=0xa0, .type=IO_READ},
        {.addr=0xd4bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0238) {
    const struct CPU_State initial_cpu = {.pc=0x3981, .a=0x0a, .x=0x91, .y=0x62, .sp=0xe2, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x3981, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3982, .a=0x0a, .x=0x91, .y=0x62, .sp=0xe2, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x3981, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3981, .value=0xa0, .type=IO_READ},
        {.addr=0x3982, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0239) {
    const struct CPU_State initial_cpu = {.pc=0xeae9, .a=0x0a, .x=0x34, .y=0xd2, .sp=0xf1, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xeae9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeaea, .a=0x0a, .x=0x34, .y=0xd2, .sp=0xf1, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xeae9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeae9, .value=0xa0, .type=IO_READ},
        {.addr=0xeaea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_023A) {
    const struct CPU_State initial_cpu = {.pc=0x7a44, .a=0x43, .x=0x92, .y=0x46, .sp=0x66, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7a44, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7a45, .a=0x43, .x=0x92, .y=0x46, .sp=0x66, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7a44, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7a44, .value=0xa0, .type=IO_READ},
        {.addr=0x7a45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_023B) {
    const struct CPU_State initial_cpu = {.pc=0x4284, .a=0xbf, .x=0x43, .y=0x8d, .sp=0x02, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4284, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4285, .a=0xbf, .x=0x43, .y=0x8d, .sp=0x02, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4284, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4284, .value=0xa0, .type=IO_READ},
        {.addr=0x4285, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_023C) {
    const struct CPU_State initial_cpu = {.pc=0x9b34, .a=0xd6, .x=0xe9, .y=0x17, .sp=0x6d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x9b34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9b35, .a=0xd6, .x=0xe9, .y=0x17, .sp=0x6d, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x9b34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9b34, .value=0xa0, .type=IO_READ},
        {.addr=0x9b35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_023D) {
    const struct CPU_State initial_cpu = {.pc=0x53b9, .a=0x23, .x=0x25, .y=0xd6, .sp=0xd6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x53b9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x53ba, .a=0x23, .x=0x25, .y=0xd6, .sp=0xd6, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x53b9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x53b9, .value=0xa0, .type=IO_READ},
        {.addr=0x53ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_023E) {
    const struct CPU_State initial_cpu = {.pc=0x9b28, .a=0x5a, .x=0x2f, .y=0x2a, .sp=0xef, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9b28, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9b29, .a=0x5a, .x=0x2f, .y=0x2a, .sp=0xef, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9b28, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9b28, .value=0xa0, .type=IO_READ},
        {.addr=0x9b29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_023F) {
    const struct CPU_State initial_cpu = {.pc=0xc7df, .a=0x63, .x=0x0e, .y=0x45, .sp=0xa7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xc7df, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc7e0, .a=0x63, .x=0x0e, .y=0x45, .sp=0xa7, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xc7df, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc7df, .value=0xa0, .type=IO_READ},
        {.addr=0xc7e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0240) {
    const struct CPU_State initial_cpu = {.pc=0xa516, .a=0xc3, .x=0xff, .y=0x2c, .sp=0x7f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa516, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa517, .a=0xc3, .x=0xff, .y=0x2c, .sp=0x7f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xa516, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa516, .value=0xa0, .type=IO_READ},
        {.addr=0xa517, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0241) {
    const struct CPU_State initial_cpu = {.pc=0x17d6, .a=0x79, .x=0xfb, .y=0x53, .sp=0x09, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x17d6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x17d7, .a=0x79, .x=0xfb, .y=0x53, .sp=0x09, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x17d6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x17d6, .value=0xa0, .type=IO_READ},
        {.addr=0x17d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0242) {
    const struct CPU_State initial_cpu = {.pc=0xf911, .a=0xe9, .x=0x5a, .y=0x13, .sp=0xc5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf911, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf912, .a=0xe9, .x=0x5a, .y=0x13, .sp=0xc5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf911, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf911, .value=0xa0, .type=IO_READ},
        {.addr=0xf912, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0243) {
    const struct CPU_State initial_cpu = {.pc=0xb6f8, .a=0x36, .x=0x70, .y=0x19, .sp=0xe2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb6f8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb6f9, .a=0x36, .x=0x70, .y=0x19, .sp=0xe2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb6f8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb6f8, .value=0xa0, .type=IO_READ},
        {.addr=0xb6f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0244) {
    const struct CPU_State initial_cpu = {.pc=0x59f0, .a=0x5f, .x=0xcc, .y=0x48, .sp=0x48, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x59f0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x59f1, .a=0x5f, .x=0xcc, .y=0x48, .sp=0x48, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x59f0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x59f0, .value=0xa0, .type=IO_READ},
        {.addr=0x59f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0245) {
    const struct CPU_State initial_cpu = {.pc=0x7824, .a=0xf6, .x=0x55, .y=0x42, .sp=0x76, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7824, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7825, .a=0xf6, .x=0x55, .y=0x42, .sp=0x76, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7824, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7824, .value=0xa0, .type=IO_READ},
        {.addr=0x7825, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0246) {
    const struct CPU_State initial_cpu = {.pc=0x0919, .a=0xc0, .x=0xdc, .y=0x8a, .sp=0xb4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0919, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x091a, .a=0xc0, .x=0xdc, .y=0x8a, .sp=0xb4, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0919, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0919, .value=0xa0, .type=IO_READ},
        {.addr=0x091a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0247) {
    const struct CPU_State initial_cpu = {.pc=0x2877, .a=0x87, .x=0xad, .y=0x1b, .sp=0xcb, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2877, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2878, .a=0x87, .x=0xad, .y=0x1b, .sp=0xcb, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2877, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2877, .value=0xa0, .type=IO_READ},
        {.addr=0x2878, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0248) {
    const struct CPU_State initial_cpu = {.pc=0xf8cc, .a=0x93, .x=0xf6, .y=0x38, .sp=0x31, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf8cd, .a=0x93, .x=0xf6, .y=0x38, .sp=0x31, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf8cc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf8cc, .value=0xa0, .type=IO_READ},
        {.addr=0xf8cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0249) {
    const struct CPU_State initial_cpu = {.pc=0xa75c, .a=0x58, .x=0xff, .y=0x15, .sp=0xfd, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa75c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa75d, .a=0x58, .x=0xff, .y=0x15, .sp=0xfd, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa75c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa75c, .value=0xa0, .type=IO_READ},
        {.addr=0xa75d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_024A) {
    const struct CPU_State initial_cpu = {.pc=0xda8b, .a=0x35, .x=0x46, .y=0x96, .sp=0x95, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xda8b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xda8c, .a=0x35, .x=0x46, .y=0x96, .sp=0x95, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xda8b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xda8b, .value=0xa0, .type=IO_READ},
        {.addr=0xda8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa2a3, .a=0x19, .x=0x22, .y=0x6b, .sp=0xe6, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa2a3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa2a4, .a=0x19, .x=0x22, .y=0x6b, .sp=0xe6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa2a3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa2a3, .value=0xa0, .type=IO_READ},
        {.addr=0xa2a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_024C) {
    const struct CPU_State initial_cpu = {.pc=0x815b, .a=0x2f, .x=0x73, .y=0xeb, .sp=0x25, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x815b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x815c, .a=0x2f, .x=0x73, .y=0xeb, .sp=0x25, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x815b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x815b, .value=0xa0, .type=IO_READ},
        {.addr=0x815c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_024D) {
    const struct CPU_State initial_cpu = {.pc=0xd7ac, .a=0xa9, .x=0xf6, .y=0x34, .sp=0x50, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ac, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd7ad, .a=0xa9, .x=0xf6, .y=0x34, .sp=0x50, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xd7ac, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd7ac, .value=0xa0, .type=IO_READ},
        {.addr=0xd7ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_024E) {
    const struct CPU_State initial_cpu = {.pc=0x91a8, .a=0xd9, .x=0x29, .y=0x4c, .sp=0x30, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x91a8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x91a9, .a=0xd9, .x=0x29, .y=0x4c, .sp=0x30, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x91a8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x91a8, .value=0xa0, .type=IO_READ},
        {.addr=0x91a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_024F) {
    const struct CPU_State initial_cpu = {.pc=0x587a, .a=0xd2, .x=0x84, .y=0x52, .sp=0x03, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x587a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x587b, .a=0xd2, .x=0x84, .y=0x52, .sp=0x03, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x587a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x587a, .value=0xa0, .type=IO_READ},
        {.addr=0x587b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0250) {
    const struct CPU_State initial_cpu = {.pc=0x3ea4, .a=0xbc, .x=0x28, .y=0xaa, .sp=0xa2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3ea5, .a=0xbc, .x=0x28, .y=0xaa, .sp=0xa2, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x3ea4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3ea4, .value=0xa0, .type=IO_READ},
        {.addr=0x3ea5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0251) {
    const struct CPU_State initial_cpu = {.pc=0x4164, .a=0x47, .x=0x59, .y=0x2b, .sp=0x55, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4164, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4165, .a=0x47, .x=0x59, .y=0x2b, .sp=0x55, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4164, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4164, .value=0xa0, .type=IO_READ},
        {.addr=0x4165, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0252) {
    const struct CPU_State initial_cpu = {.pc=0x042c, .a=0xb6, .x=0x40, .y=0x9f, .sp=0x44, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x042c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x042d, .a=0xb6, .x=0x40, .y=0x9f, .sp=0x44, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x042c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x042c, .value=0xa0, .type=IO_READ},
        {.addr=0x042d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0253) {
    const struct CPU_State initial_cpu = {.pc=0x7244, .a=0x70, .x=0xeb, .y=0x5b, .sp=0x32, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x7244, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7245, .a=0x70, .x=0xeb, .y=0x5b, .sp=0x32, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x7244, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7244, .value=0xa0, .type=IO_READ},
        {.addr=0x7245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0254) {
    const struct CPU_State initial_cpu = {.pc=0x32a8, .a=0xe2, .x=0x62, .y=0x3f, .sp=0xa4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x32a8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x32a9, .a=0xe2, .x=0x62, .y=0x3f, .sp=0xa4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x32a8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x32a8, .value=0xa0, .type=IO_READ},
        {.addr=0x32a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0255) {
    const struct CPU_State initial_cpu = {.pc=0x5c98, .a=0x60, .x=0x39, .y=0x65, .sp=0x18, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5c98, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5c99, .a=0x60, .x=0x39, .y=0x65, .sp=0x18, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x5c98, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5c98, .value=0xa0, .type=IO_READ},
        {.addr=0x5c99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0256) {
    const struct CPU_State initial_cpu = {.pc=0x17fe, .a=0x25, .x=0x7e, .y=0xcf, .sp=0xb9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x17fe, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x17ff, .a=0x25, .x=0x7e, .y=0xcf, .sp=0xb9, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x17fe, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x17fe, .value=0xa0, .type=IO_READ},
        {.addr=0x17ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0257) {
    const struct CPU_State initial_cpu = {.pc=0xcb2d, .a=0xdf, .x=0xaf, .y=0xcd, .sp=0x16, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xcb2d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcb2e, .a=0xdf, .x=0xaf, .y=0xcd, .sp=0x16, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcb2d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcb2d, .value=0xa0, .type=IO_READ},
        {.addr=0xcb2e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0258) {
    const struct CPU_State initial_cpu = {.pc=0x757a, .a=0x80, .x=0xb0, .y=0x4a, .sp=0x10, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x757a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x757b, .a=0x80, .x=0xb0, .y=0x4a, .sp=0x10, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x757a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x757a, .value=0xa0, .type=IO_READ},
        {.addr=0x757b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0259) {
    const struct CPU_State initial_cpu = {.pc=0xd395, .a=0xdd, .x=0x1c, .y=0x6d, .sp=0x98, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xd395, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd396, .a=0xdd, .x=0x1c, .y=0x6d, .sp=0x98, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd395, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd395, .value=0xa0, .type=IO_READ},
        {.addr=0xd396, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_025A) {
    const struct CPU_State initial_cpu = {.pc=0x9a20, .a=0xb7, .x=0x91, .y=0xb0, .sp=0x15, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9a20, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9a21, .a=0xb7, .x=0x91, .y=0xb0, .sp=0x15, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9a20, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9a20, .value=0xa0, .type=IO_READ},
        {.addr=0x9a21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_025B) {
    const struct CPU_State initial_cpu = {.pc=0x122a, .a=0x8d, .x=0xdd, .y=0x18, .sp=0x3f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x122a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x122b, .a=0x8d, .x=0xdd, .y=0x18, .sp=0x3f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x122a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x122a, .value=0xa0, .type=IO_READ},
        {.addr=0x122b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_025C) {
    const struct CPU_State initial_cpu = {.pc=0x6c1d, .a=0x62, .x=0xf2, .y=0x83, .sp=0x10, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6c1e, .a=0x62, .x=0xf2, .y=0x83, .sp=0x10, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6c1d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6c1d, .value=0xa0, .type=IO_READ},
        {.addr=0x6c1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_025D) {
    const struct CPU_State initial_cpu = {.pc=0xb50a, .a=0x66, .x=0xc2, .y=0xca, .sp=0x5e, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xb50a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb50b, .a=0x66, .x=0xc2, .y=0xca, .sp=0x5e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb50a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb50a, .value=0xa0, .type=IO_READ},
        {.addr=0xb50b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_025E) {
    const struct CPU_State initial_cpu = {.pc=0x9fe3, .a=0x2d, .x=0x94, .y=0x25, .sp=0x20, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9fe4, .a=0x2d, .x=0x94, .y=0x25, .sp=0x20, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9fe3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9fe3, .value=0xa0, .type=IO_READ},
        {.addr=0x9fe4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_025F) {
    const struct CPU_State initial_cpu = {.pc=0xc914, .a=0xff, .x=0xbc, .y=0x5c, .sp=0x03, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc914, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc915, .a=0xff, .x=0xbc, .y=0x5c, .sp=0x03, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xc914, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc914, .value=0xa0, .type=IO_READ},
        {.addr=0xc915, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0260) {
    const struct CPU_State initial_cpu = {.pc=0xc0b0, .a=0x81, .x=0xb6, .y=0xe6, .sp=0x4c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc0b0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc0b1, .a=0x81, .x=0xb6, .y=0xe6, .sp=0x4c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc0b0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc0b0, .value=0xa0, .type=IO_READ},
        {.addr=0xc0b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0261) {
    const struct CPU_State initial_cpu = {.pc=0x63a2, .a=0xb4, .x=0xcd, .y=0x9e, .sp=0xa6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x63a2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x63a3, .a=0xb4, .x=0xcd, .y=0x9e, .sp=0xa6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x63a2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x63a2, .value=0xa0, .type=IO_READ},
        {.addr=0x63a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0262) {
    const struct CPU_State initial_cpu = {.pc=0x8ab1, .a=0x1a, .x=0x9f, .y=0x09, .sp=0x66, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8ab2, .a=0x1a, .x=0x9f, .y=0x09, .sp=0x66, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x8ab1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8ab1, .value=0xa0, .type=IO_READ},
        {.addr=0x8ab2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0263) {
    const struct CPU_State initial_cpu = {.pc=0x154b, .a=0x18, .x=0x79, .y=0x39, .sp=0xc5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x154b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x154c, .a=0x18, .x=0x79, .y=0x39, .sp=0xc5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x154b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x154b, .value=0xa0, .type=IO_READ},
        {.addr=0x154c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0264) {
    const struct CPU_State initial_cpu = {.pc=0xf85c, .a=0x28, .x=0x77, .y=0x9c, .sp=0x13, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf85c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf85d, .a=0x28, .x=0x77, .y=0x9c, .sp=0x13, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf85c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf85c, .value=0xa0, .type=IO_READ},
        {.addr=0xf85d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6c71, .a=0x1f, .x=0xdb, .y=0xdd, .sp=0x0d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x6c71, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6c72, .a=0x1f, .x=0xdb, .y=0xdd, .sp=0x0d, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x6c71, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6c71, .value=0xa0, .type=IO_READ},
        {.addr=0x6c72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0266) {
    const struct CPU_State initial_cpu = {.pc=0x5f4a, .a=0xf7, .x=0x58, .y=0xe5, .sp=0xa0, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5f4a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5f4b, .a=0xf7, .x=0x58, .y=0xe5, .sp=0xa0, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x5f4a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5f4a, .value=0xa0, .type=IO_READ},
        {.addr=0x5f4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0267) {
    const struct CPU_State initial_cpu = {.pc=0xaa1c, .a=0x58, .x=0xb0, .y=0x11, .sp=0x90, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaa1d, .a=0x58, .x=0xb0, .y=0x11, .sp=0x90, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xaa1c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaa1c, .value=0xa0, .type=IO_READ},
        {.addr=0xaa1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0268) {
    const struct CPU_State initial_cpu = {.pc=0xaca5, .a=0x5e, .x=0xbe, .y=0xd4, .sp=0xfe, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xaca5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaca6, .a=0x5e, .x=0xbe, .y=0xd4, .sp=0xfe, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xaca5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaca5, .value=0xa0, .type=IO_READ},
        {.addr=0xaca6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0269) {
    const struct CPU_State initial_cpu = {.pc=0x8c62, .a=0x9f, .x=0x7e, .y=0x67, .sp=0x32, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x8c62, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8c63, .a=0x9f, .x=0x7e, .y=0x67, .sp=0x32, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8c62, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8c62, .value=0xa0, .type=IO_READ},
        {.addr=0x8c63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_026A) {
    const struct CPU_State initial_cpu = {.pc=0x60b2, .a=0x58, .x=0x77, .y=0x98, .sp=0xb2, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x60b2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x60b3, .a=0x58, .x=0x77, .y=0x98, .sp=0xb2, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x60b2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x60b2, .value=0xa0, .type=IO_READ},
        {.addr=0x60b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_026B) {
    const struct CPU_State initial_cpu = {.pc=0xaf05, .a=0x3b, .x=0x2d, .y=0x15, .sp=0x77, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xaf05, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaf06, .a=0x3b, .x=0x2d, .y=0x15, .sp=0x77, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xaf05, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaf05, .value=0xa0, .type=IO_READ},
        {.addr=0xaf06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_026C) {
    const struct CPU_State initial_cpu = {.pc=0x1693, .a=0x1b, .x=0xc6, .y=0x61, .sp=0xdf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x1693, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1694, .a=0x1b, .x=0xc6, .y=0x61, .sp=0xdf, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x1693, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1693, .value=0xa0, .type=IO_READ},
        {.addr=0x1694, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_026D) {
    const struct CPU_State initial_cpu = {.pc=0xb0ea, .a=0x94, .x=0xf6, .y=0xb2, .sp=0x7b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ea, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb0eb, .a=0x94, .x=0xf6, .y=0xb2, .sp=0x7b, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xb0ea, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb0ea, .value=0xa0, .type=IO_READ},
        {.addr=0xb0eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_026E) {
    const struct CPU_State initial_cpu = {.pc=0xc7b6, .a=0x7a, .x=0xf8, .y=0xab, .sp=0xf7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc7b7, .a=0x7a, .x=0xf8, .y=0xab, .sp=0xf7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc7b6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc7b6, .value=0xa0, .type=IO_READ},
        {.addr=0xc7b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_026F) {
    const struct CPU_State initial_cpu = {.pc=0x860b, .a=0xc8, .x=0xf9, .y=0x55, .sp=0x8c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x860b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x860c, .a=0xc8, .x=0xf9, .y=0x55, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x860b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x860b, .value=0xa0, .type=IO_READ},
        {.addr=0x860c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0270) {
    const struct CPU_State initial_cpu = {.pc=0xb2cf, .a=0xdf, .x=0x4a, .y=0x54, .sp=0xee, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb2cf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb2d0, .a=0xdf, .x=0x4a, .y=0x54, .sp=0xee, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xb2cf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb2cf, .value=0xa0, .type=IO_READ},
        {.addr=0xb2d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0271) {
    const struct CPU_State initial_cpu = {.pc=0x88a3, .a=0xe1, .x=0xd9, .y=0x98, .sp=0x64, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x88a3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x88a4, .a=0xe1, .x=0xd9, .y=0x98, .sp=0x64, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x88a3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x88a3, .value=0xa0, .type=IO_READ},
        {.addr=0x88a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0272) {
    const struct CPU_State initial_cpu = {.pc=0x4f3f, .a=0x01, .x=0x98, .y=0xf2, .sp=0xaa, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4f3f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4f40, .a=0x01, .x=0x98, .y=0xf2, .sp=0xaa, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4f3f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4f3f, .value=0xa0, .type=IO_READ},
        {.addr=0x4f40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0273) {
    const struct CPU_State initial_cpu = {.pc=0x0ec3, .a=0xb1, .x=0x43, .y=0x50, .sp=0x88, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0ec4, .a=0xb1, .x=0x43, .y=0x50, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0ec3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0ec3, .value=0xa0, .type=IO_READ},
        {.addr=0x0ec4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0274) {
    const struct CPU_State initial_cpu = {.pc=0xb4a4, .a=0x14, .x=0x08, .y=0xe3, .sp=0xaf, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xb4a4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb4a5, .a=0x14, .x=0x08, .y=0xe3, .sp=0xaf, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xb4a4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb4a4, .value=0xa0, .type=IO_READ},
        {.addr=0xb4a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0275) {
    const struct CPU_State initial_cpu = {.pc=0xeeca, .a=0x80, .x=0x3c, .y=0x07, .sp=0x71, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xeeca, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeecb, .a=0x80, .x=0x3c, .y=0x07, .sp=0x71, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xeeca, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeeca, .value=0xa0, .type=IO_READ},
        {.addr=0xeecb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0276) {
    const struct CPU_State initial_cpu = {.pc=0xd444, .a=0x5a, .x=0x6e, .y=0x8e, .sp=0xca, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd444, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd445, .a=0x5a, .x=0x6e, .y=0x8e, .sp=0xca, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd444, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd444, .value=0xa0, .type=IO_READ},
        {.addr=0xd445, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0277) {
    const struct CPU_State initial_cpu = {.pc=0x9e31, .a=0xbf, .x=0x3c, .y=0x26, .sp=0x2f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9e31, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9e32, .a=0xbf, .x=0x3c, .y=0x26, .sp=0x2f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9e31, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9e31, .value=0xa0, .type=IO_READ},
        {.addr=0x9e32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0278) {
    const struct CPU_State initial_cpu = {.pc=0x42c9, .a=0x65, .x=0xd9, .y=0x40, .sp=0x58, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x42c9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x42ca, .a=0x65, .x=0xd9, .y=0x40, .sp=0x58, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x42c9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x42c9, .value=0xa0, .type=IO_READ},
        {.addr=0x42ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0279) {
    const struct CPU_State initial_cpu = {.pc=0x7c23, .a=0xaa, .x=0x8a, .y=0x83, .sp=0x58, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7c23, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7c24, .a=0xaa, .x=0x8a, .y=0x83, .sp=0x58, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x7c23, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7c23, .value=0xa0, .type=IO_READ},
        {.addr=0x7c24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_027A) {
    const struct CPU_State initial_cpu = {.pc=0x89eb, .a=0x94, .x=0xbc, .y=0x84, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x89eb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x89ec, .a=0x94, .x=0xbc, .y=0x84, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x89eb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x89eb, .value=0xa0, .type=IO_READ},
        {.addr=0x89ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_027B) {
    const struct CPU_State initial_cpu = {.pc=0xcb3e, .a=0x58, .x=0xed, .y=0x00, .sp=0x44, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcb3f, .a=0x58, .x=0xed, .y=0x00, .sp=0x44, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xcb3e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcb3e, .value=0xa0, .type=IO_READ},
        {.addr=0xcb3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_027C) {
    const struct CPU_State initial_cpu = {.pc=0xfc4b, .a=0xe7, .x=0x82, .y=0x6c, .sp=0xf7, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xfc4b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfc4c, .a=0xe7, .x=0x82, .y=0x6c, .sp=0xf7, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xfc4b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfc4b, .value=0xa0, .type=IO_READ},
        {.addr=0xfc4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_027D) {
    const struct CPU_State initial_cpu = {.pc=0x40c2, .a=0xa2, .x=0x55, .y=0x38, .sp=0xfc, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x40c2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x40c3, .a=0xa2, .x=0x55, .y=0x38, .sp=0xfc, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x40c2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x40c2, .value=0xa0, .type=IO_READ},
        {.addr=0x40c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_027E) {
    const struct CPU_State initial_cpu = {.pc=0xd9bd, .a=0x72, .x=0x4f, .y=0x6c, .sp=0x3e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9bd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd9be, .a=0x72, .x=0x4f, .y=0x6c, .sp=0x3e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd9bd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd9bd, .value=0xa0, .type=IO_READ},
        {.addr=0xd9be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_027F) {
    const struct CPU_State initial_cpu = {.pc=0x1ab5, .a=0xc5, .x=0x05, .y=0xb8, .sp=0x53, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1ab6, .a=0xc5, .x=0x05, .y=0xb8, .sp=0x53, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1ab5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1ab5, .value=0xa0, .type=IO_READ},
        {.addr=0x1ab6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0280) {
    const struct CPU_State initial_cpu = {.pc=0xfb7d, .a=0xcb, .x=0x77, .y=0x14, .sp=0xa1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfb7e, .a=0xcb, .x=0x77, .y=0x14, .sp=0xa1, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xfb7d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfb7d, .value=0xa0, .type=IO_READ},
        {.addr=0xfb7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0281) {
    const struct CPU_State initial_cpu = {.pc=0xb4b4, .a=0x00, .x=0xdc, .y=0x96, .sp=0xf0, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb4b5, .a=0x00, .x=0xdc, .y=0x96, .sp=0xf0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb4b4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb4b4, .value=0xa0, .type=IO_READ},
        {.addr=0xb4b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0282) {
    const struct CPU_State initial_cpu = {.pc=0x1bc9, .a=0xa2, .x=0xa1, .y=0x89, .sp=0x7f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1bca, .a=0xa2, .x=0xa1, .y=0x89, .sp=0x7f, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x1bc9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1bc9, .value=0xa0, .type=IO_READ},
        {.addr=0x1bca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0283) {
    const struct CPU_State initial_cpu = {.pc=0x72a6, .a=0xc3, .x=0xa1, .y=0xfd, .sp=0x36, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x72a6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x72a7, .a=0xc3, .x=0xa1, .y=0xfd, .sp=0x36, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x72a6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x72a6, .value=0xa0, .type=IO_READ},
        {.addr=0x72a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0284) {
    const struct CPU_State initial_cpu = {.pc=0x861a, .a=0x89, .x=0x9c, .y=0x4f, .sp=0x9e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x861a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x861b, .a=0x89, .x=0x9c, .y=0x4f, .sp=0x9e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x861a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x861a, .value=0xa0, .type=IO_READ},
        {.addr=0x861b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0285) {
    const struct CPU_State initial_cpu = {.pc=0xa7d4, .a=0xad, .x=0x35, .y=0xa2, .sp=0x8c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa7d4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa7d5, .a=0xad, .x=0x35, .y=0xa2, .sp=0x8c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa7d4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa7d4, .value=0xa0, .type=IO_READ},
        {.addr=0xa7d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0286) {
    const struct CPU_State initial_cpu = {.pc=0xe4e9, .a=0x89, .x=0x8f, .y=0x1f, .sp=0x6e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe4ea, .a=0x89, .x=0x8f, .y=0x1f, .sp=0x6e, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xe4e9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe4e9, .value=0xa0, .type=IO_READ},
        {.addr=0xe4ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0287) {
    const struct CPU_State initial_cpu = {.pc=0x26d9, .a=0xa7, .x=0xde, .y=0xc8, .sp=0x54, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x26d9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x26da, .a=0xa7, .x=0xde, .y=0xc8, .sp=0x54, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x26d9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x26d9, .value=0xa0, .type=IO_READ},
        {.addr=0x26da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0288) {
    const struct CPU_State initial_cpu = {.pc=0x7d37, .a=0xcc, .x=0xf4, .y=0xb2, .sp=0x4e, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7d37, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7d38, .a=0xcc, .x=0xf4, .y=0xb2, .sp=0x4e, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x7d37, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7d37, .value=0xa0, .type=IO_READ},
        {.addr=0x7d38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0289) {
    const struct CPU_State initial_cpu = {.pc=0xa44f, .a=0x0f, .x=0xc1, .y=0x04, .sp=0x49, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xa44f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa450, .a=0x0f, .x=0xc1, .y=0x04, .sp=0x49, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xa44f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa44f, .value=0xa0, .type=IO_READ},
        {.addr=0xa450, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_028A) {
    const struct CPU_State initial_cpu = {.pc=0xef0e, .a=0x85, .x=0x09, .y=0x95, .sp=0xff, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xef0e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xef0f, .a=0x85, .x=0x09, .y=0x95, .sp=0xff, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xef0e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xef0e, .value=0xa0, .type=IO_READ},
        {.addr=0xef0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_028B) {
    const struct CPU_State initial_cpu = {.pc=0x10ed, .a=0x9a, .x=0x43, .y=0x70, .sp=0x47, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x10ed, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x10ee, .a=0x9a, .x=0x43, .y=0x70, .sp=0x47, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x10ed, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x10ed, .value=0xa0, .type=IO_READ},
        {.addr=0x10ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_028C) {
    const struct CPU_State initial_cpu = {.pc=0xc6a4, .a=0x69, .x=0x31, .y=0x05, .sp=0x4a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc6a4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc6a5, .a=0x69, .x=0x31, .y=0x05, .sp=0x4a, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xc6a4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc6a4, .value=0xa0, .type=IO_READ},
        {.addr=0xc6a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_028D) {
    const struct CPU_State initial_cpu = {.pc=0x14d4, .a=0xd1, .x=0x76, .y=0x39, .sp=0x8c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x14d4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x14d5, .a=0xd1, .x=0x76, .y=0x39, .sp=0x8c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x14d4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x14d4, .value=0xa0, .type=IO_READ},
        {.addr=0x14d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_028E) {
    const struct CPU_State initial_cpu = {.pc=0x2d16, .a=0xb9, .x=0x38, .y=0xe2, .sp=0x11, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2d16, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2d17, .a=0xb9, .x=0x38, .y=0xe2, .sp=0x11, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2d16, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2d16, .value=0xa0, .type=IO_READ},
        {.addr=0x2d17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_028F) {
    const struct CPU_State initial_cpu = {.pc=0x89d4, .a=0xc3, .x=0x68, .y=0xda, .sp=0xc1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x89d4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x89d5, .a=0xc3, .x=0x68, .y=0xda, .sp=0xc1, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x89d4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x89d4, .value=0xa0, .type=IO_READ},
        {.addr=0x89d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0290) {
    const struct CPU_State initial_cpu = {.pc=0x6a34, .a=0x94, .x=0x23, .y=0x2f, .sp=0x21, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6a34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6a35, .a=0x94, .x=0x23, .y=0x2f, .sp=0x21, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6a34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6a34, .value=0xa0, .type=IO_READ},
        {.addr=0x6a35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0291) {
    const struct CPU_State initial_cpu = {.pc=0xeabc, .a=0x48, .x=0x7d, .y=0xdb, .sp=0xb6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xeabc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeabd, .a=0x48, .x=0x7d, .y=0xdb, .sp=0xb6, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xeabc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeabc, .value=0xa0, .type=IO_READ},
        {.addr=0xeabd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0292) {
    const struct CPU_State initial_cpu = {.pc=0x9028, .a=0x15, .x=0xc8, .y=0x12, .sp=0xc3, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9028, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9029, .a=0x15, .x=0xc8, .y=0x12, .sp=0xc3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9028, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9028, .value=0xa0, .type=IO_READ},
        {.addr=0x9029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0293) {
    const struct CPU_State initial_cpu = {.pc=0x9015, .a=0x4c, .x=0x81, .y=0x7e, .sp=0xb3, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x9015, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9016, .a=0x4c, .x=0x81, .y=0x7e, .sp=0xb3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9015, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9015, .value=0xa0, .type=IO_READ},
        {.addr=0x9016, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0294) {
    const struct CPU_State initial_cpu = {.pc=0x2c7b, .a=0xb0, .x=0xc2, .y=0xb3, .sp=0xd4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x2c7b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2c7c, .a=0xb0, .x=0xc2, .y=0xb3, .sp=0xd4, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x2c7b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2c7b, .value=0xa0, .type=IO_READ},
        {.addr=0x2c7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0295) {
    const struct CPU_State initial_cpu = {.pc=0x46d9, .a=0x49, .x=0xb2, .y=0xa8, .sp=0xd7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x46d9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x46da, .a=0x49, .x=0xb2, .y=0xa8, .sp=0xd7, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x46d9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x46d9, .value=0xa0, .type=IO_READ},
        {.addr=0x46da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0296) {
    const struct CPU_State initial_cpu = {.pc=0xeb3f, .a=0xca, .x=0xf1, .y=0x87, .sp=0xd0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeb40, .a=0xca, .x=0xf1, .y=0x87, .sp=0xd0, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xeb3f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeb3f, .value=0xa0, .type=IO_READ},
        {.addr=0xeb40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0297) {
    const struct CPU_State initial_cpu = {.pc=0x851f, .a=0x84, .x=0x5f, .y=0xc4, .sp=0x78, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x851f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8520, .a=0x84, .x=0x5f, .y=0xc4, .sp=0x78, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x851f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x851f, .value=0xa0, .type=IO_READ},
        {.addr=0x8520, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0298) {
    const struct CPU_State initial_cpu = {.pc=0xd3e7, .a=0x34, .x=0xd1, .y=0x07, .sp=0xca, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xd3e7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd3e8, .a=0x34, .x=0xd1, .y=0x07, .sp=0xca, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd3e7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd3e7, .value=0xa0, .type=IO_READ},
        {.addr=0xd3e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0299) {
    const struct CPU_State initial_cpu = {.pc=0xa3fc, .a=0xb7, .x=0x63, .y=0x9a, .sp=0x7f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa3fd, .a=0xb7, .x=0x63, .y=0x9a, .sp=0x7f, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xa3fc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa3fc, .value=0xa0, .type=IO_READ},
        {.addr=0xa3fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_029A) {
    const struct CPU_State initial_cpu = {.pc=0xd50c, .a=0x43, .x=0x94, .y=0x9f, .sp=0x40, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd50c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd50d, .a=0x43, .x=0x94, .y=0x9f, .sp=0x40, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xd50c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd50c, .value=0xa0, .type=IO_READ},
        {.addr=0xd50d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_029B) {
    const struct CPU_State initial_cpu = {.pc=0x1b36, .a=0xb3, .x=0x8e, .y=0xcd, .sp=0x15, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x1b36, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1b37, .a=0xb3, .x=0x8e, .y=0xcd, .sp=0x15, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x1b36, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1b36, .value=0xa0, .type=IO_READ},
        {.addr=0x1b37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_029C) {
    const struct CPU_State initial_cpu = {.pc=0x16e7, .a=0x39, .x=0x12, .y=0x26, .sp=0x12, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x16e7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x16e8, .a=0x39, .x=0x12, .y=0x26, .sp=0x12, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x16e7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x16e7, .value=0xa0, .type=IO_READ},
        {.addr=0x16e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_029D) {
    const struct CPU_State initial_cpu = {.pc=0xe518, .a=0x58, .x=0x4b, .y=0xb9, .sp=0x8f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe518, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe519, .a=0x58, .x=0x4b, .y=0xb9, .sp=0x8f, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe518, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe518, .value=0xa0, .type=IO_READ},
        {.addr=0xe519, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_029E) {
    const struct CPU_State initial_cpu = {.pc=0x9707, .a=0x02, .x=0xd5, .y=0x5b, .sp=0xa2, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9707, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9708, .a=0x02, .x=0xd5, .y=0x5b, .sp=0xa2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x9707, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9707, .value=0xa0, .type=IO_READ},
        {.addr=0x9708, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_029F) {
    const struct CPU_State initial_cpu = {.pc=0x711f, .a=0xaa, .x=0xac, .y=0x4c, .sp=0xe5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x711f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7120, .a=0xaa, .x=0xac, .y=0x4c, .sp=0xe5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x711f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x711f, .value=0xa0, .type=IO_READ},
        {.addr=0x7120, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x689b, .a=0x04, .x=0x33, .y=0xbf, .sp=0x13, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x689b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x689c, .a=0x04, .x=0x33, .y=0xbf, .sp=0x13, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x689b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x689b, .value=0xa0, .type=IO_READ},
        {.addr=0x689c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xd93f, .a=0xf3, .x=0x65, .y=0xda, .sp=0xbc, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd93f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd940, .a=0xf3, .x=0x65, .y=0xda, .sp=0xbc, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd93f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd93f, .value=0xa0, .type=IO_READ},
        {.addr=0xd940, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xa50d, .a=0xef, .x=0x65, .y=0x0c, .sp=0x85, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa50d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa50e, .a=0xef, .x=0x65, .y=0x0c, .sp=0x85, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xa50d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa50d, .value=0xa0, .type=IO_READ},
        {.addr=0xa50e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xb595, .a=0xb4, .x=0xa3, .y=0xa7, .sp=0xaf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb595, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb596, .a=0xb4, .x=0xa3, .y=0xa7, .sp=0xaf, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb595, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb595, .value=0xa0, .type=IO_READ},
        {.addr=0xb596, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xca4f, .a=0xaa, .x=0x81, .y=0x50, .sp=0x49, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xca4f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xca50, .a=0xaa, .x=0x81, .y=0x50, .sp=0x49, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xca4f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xca4f, .value=0xa0, .type=IO_READ},
        {.addr=0xca50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xc46b, .a=0x03, .x=0x5d, .y=0x91, .sp=0x1f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc46b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc46c, .a=0x03, .x=0x5d, .y=0x91, .sp=0x1f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc46b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc46b, .value=0xa0, .type=IO_READ},
        {.addr=0xc46c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x7e8b, .a=0xbd, .x=0x43, .y=0xfd, .sp=0x68, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7e8b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7e8c, .a=0xbd, .x=0x43, .y=0xfd, .sp=0x68, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7e8b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7e8b, .value=0xa0, .type=IO_READ},
        {.addr=0x7e8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x0e40, .a=0x4d, .x=0xf9, .y=0x85, .sp=0x8d, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0e40, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0e41, .a=0x4d, .x=0xf9, .y=0x85, .sp=0x8d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0e40, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0e40, .value=0xa0, .type=IO_READ},
        {.addr=0x0e41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x74ae, .a=0xe3, .x=0x4b, .y=0x54, .sp=0x4c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x74ae, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x74af, .a=0xe3, .x=0x4b, .y=0x54, .sp=0x4c, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x74ae, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x74ae, .value=0xa0, .type=IO_READ},
        {.addr=0x74af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x5cbb, .a=0x0c, .x=0xf6, .y=0xef, .sp=0x73, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5cbc, .a=0x0c, .x=0xf6, .y=0xef, .sp=0x73, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5cbb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5cbb, .value=0xa0, .type=IO_READ},
        {.addr=0x5cbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x6546, .a=0x12, .x=0xfe, .y=0xed, .sp=0xbc, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6546, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6547, .a=0x12, .x=0xfe, .y=0xed, .sp=0xbc, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x6546, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6546, .value=0xa0, .type=IO_READ},
        {.addr=0x6547, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xe1fc, .a=0x7b, .x=0x70, .y=0xb1, .sp=0x42, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xe1fc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe1fd, .a=0x7b, .x=0x70, .y=0xb1, .sp=0x42, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe1fc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe1fc, .value=0xa0, .type=IO_READ},
        {.addr=0xe1fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x79e3, .a=0xa2, .x=0xd8, .y=0x62, .sp=0xf4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x79e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x79e4, .a=0xa2, .x=0xd8, .y=0x62, .sp=0xf4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x79e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x79e3, .value=0xa0, .type=IO_READ},
        {.addr=0x79e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x7367, .a=0x01, .x=0x54, .y=0x73, .sp=0xe6, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7367, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7368, .a=0x01, .x=0x54, .y=0x73, .sp=0xe6, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x7367, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7367, .value=0xa0, .type=IO_READ},
        {.addr=0x7368, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x955f, .a=0xdb, .x=0x3c, .y=0xdf, .sp=0x6e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x955f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9560, .a=0xdb, .x=0x3c, .y=0xdf, .sp=0x6e, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x955f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x955f, .value=0xa0, .type=IO_READ},
        {.addr=0x9560, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x0bc8, .a=0xbc, .x=0x67, .y=0x13, .sp=0xb0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0bc9, .a=0xbc, .x=0x67, .y=0x13, .sp=0xb0, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0bc8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0bc8, .value=0xa0, .type=IO_READ},
        {.addr=0x0bc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xa99d, .a=0xf6, .x=0xfb, .y=0xb8, .sp=0x1f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xa99d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa99e, .a=0xf6, .x=0xfb, .y=0xb8, .sp=0x1f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xa99d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa99d, .value=0xa0, .type=IO_READ},
        {.addr=0xa99e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x7073, .a=0x3a, .x=0x63, .y=0xe5, .sp=0xdc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7073, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7074, .a=0x3a, .x=0x63, .y=0xe5, .sp=0xdc, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x7073, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7073, .value=0xa0, .type=IO_READ},
        {.addr=0x7074, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x3c16, .a=0x18, .x=0x17, .y=0xf0, .sp=0xa4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3c16, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3c17, .a=0x18, .x=0x17, .y=0xf0, .sp=0xa4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3c16, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3c16, .value=0xa0, .type=IO_READ},
        {.addr=0x3c17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x83a6, .a=0xe8, .x=0xae, .y=0xb9, .sp=0xc7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x83a6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x83a7, .a=0xe8, .x=0xae, .y=0xb9, .sp=0xc7, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x83a6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x83a6, .value=0xa0, .type=IO_READ},
        {.addr=0x83a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xe7ca, .a=0xac, .x=0xb4, .y=0xc2, .sp=0xea, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ca, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe7cb, .a=0xac, .x=0xb4, .y=0xc2, .sp=0xea, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xe7ca, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe7ca, .value=0xa0, .type=IO_READ},
        {.addr=0xe7cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x503e, .a=0x50, .x=0xda, .y=0x72, .sp=0x0f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x503e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x503f, .a=0x50, .x=0xda, .y=0x72, .sp=0x0f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x503e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x503e, .value=0xa0, .type=IO_READ},
        {.addr=0x503f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x2ead, .a=0x4a, .x=0xcb, .y=0x5d, .sp=0x07, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x2ead, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2eae, .a=0x4a, .x=0xcb, .y=0x5d, .sp=0x07, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x2ead, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ead, .value=0xa0, .type=IO_READ},
        {.addr=0x2eae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xfca8, .a=0x5f, .x=0xc8, .y=0xd9, .sp=0x07, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xfca8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfca9, .a=0x5f, .x=0xc8, .y=0xd9, .sp=0x07, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xfca8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfca8, .value=0xa0, .type=IO_READ},
        {.addr=0xfca9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x800a, .a=0xfd, .x=0x8e, .y=0x6f, .sp=0xb9, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x800a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x800b, .a=0xfd, .x=0x8e, .y=0x6f, .sp=0xb9, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x800a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x800a, .value=0xa0, .type=IO_READ},
        {.addr=0x800b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xb02a, .a=0xfe, .x=0xc0, .y=0x26, .sp=0x69, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb02a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb02b, .a=0xfe, .x=0xc0, .y=0x26, .sp=0x69, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xb02a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb02a, .value=0xa0, .type=IO_READ},
        {.addr=0xb02b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x8b5d, .a=0x0c, .x=0x10, .y=0x68, .sp=0x08, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8b5e, .a=0x0c, .x=0x10, .y=0x68, .sp=0x08, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8b5d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8b5d, .value=0xa0, .type=IO_READ},
        {.addr=0x8b5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x9967, .a=0xa1, .x=0xba, .y=0x2f, .sp=0x56, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9967, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9968, .a=0xa1, .x=0xba, .y=0x2f, .sp=0x56, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x9967, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9967, .value=0xa0, .type=IO_READ},
        {.addr=0x9968, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xab51, .a=0x7e, .x=0xd1, .y=0xda, .sp=0x62, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xab51, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xab52, .a=0x7e, .x=0xd1, .y=0xda, .sp=0x62, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xab51, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xab51, .value=0xa0, .type=IO_READ},
        {.addr=0xab52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xc4b4, .a=0x24, .x=0x3d, .y=0x75, .sp=0x97, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4b4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc4b5, .a=0x24, .x=0x3d, .y=0x75, .sp=0x97, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc4b4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc4b4, .value=0xa0, .type=IO_READ},
        {.addr=0xc4b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x249c, .a=0x5d, .x=0x2c, .y=0x57, .sp=0x11, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x249c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x249d, .a=0x5d, .x=0x2c, .y=0x57, .sp=0x11, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x249c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x249c, .value=0xa0, .type=IO_READ},
        {.addr=0x249d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x726d, .a=0x49, .x=0x82, .y=0x7f, .sp=0xfe, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x726d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x726e, .a=0x49, .x=0x82, .y=0x7f, .sp=0xfe, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x726d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x726d, .value=0xa0, .type=IO_READ},
        {.addr=0x726e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xdafa, .a=0x47, .x=0x40, .y=0x9e, .sp=0xa0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xdafa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdafb, .a=0x47, .x=0x40, .y=0x9e, .sp=0xa0, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xdafa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdafa, .value=0xa0, .type=IO_READ},
        {.addr=0xdafb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xfe83, .a=0x9b, .x=0x11, .y=0x43, .sp=0x38, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe83, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfe84, .a=0x9b, .x=0x11, .y=0x43, .sp=0x38, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xfe83, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfe83, .value=0xa0, .type=IO_READ},
        {.addr=0xfe84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x3b95, .a=0x15, .x=0x83, .y=0xf2, .sp=0x32, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3b95, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3b96, .a=0x15, .x=0x83, .y=0xf2, .sp=0x32, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x3b95, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3b95, .value=0xa0, .type=IO_READ},
        {.addr=0x3b96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xbace, .a=0x08, .x=0x24, .y=0xe8, .sp=0xf6, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xbace, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbacf, .a=0x08, .x=0x24, .y=0xe8, .sp=0xf6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbace, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbace, .value=0xa0, .type=IO_READ},
        {.addr=0xbacf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xff34, .a=0xa5, .x=0xbc, .y=0x1c, .sp=0xa2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xff34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xff35, .a=0xa5, .x=0xbc, .y=0x1c, .sp=0xa2, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xff34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xff34, .value=0xa0, .type=IO_READ},
        {.addr=0xff35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x7ea4, .a=0x37, .x=0x12, .y=0xa9, .sp=0x54, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7ea5, .a=0x37, .x=0x12, .y=0xa9, .sp=0x54, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7ea4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7ea4, .value=0xa0, .type=IO_READ},
        {.addr=0x7ea5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6d72, .a=0xc2, .x=0xb9, .y=0x0e, .sp=0xdb, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x6d72, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d73, .a=0xc2, .x=0xb9, .y=0x0e, .sp=0xdb, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x6d72, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d72, .value=0xa0, .type=IO_READ},
        {.addr=0x6d73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x5e94, .a=0x7e, .x=0x2c, .y=0xed, .sp=0x3c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5e94, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5e95, .a=0x7e, .x=0x2c, .y=0xed, .sp=0x3c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5e94, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5e94, .value=0xa0, .type=IO_READ},
        {.addr=0x5e95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x77c4, .a=0x3c, .x=0xda, .y=0x96, .sp=0x52, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x77c4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x77c5, .a=0x3c, .x=0xda, .y=0x96, .sp=0x52, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x77c4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x77c4, .value=0xa0, .type=IO_READ},
        {.addr=0x77c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x877d, .a=0x69, .x=0xf4, .y=0x85, .sp=0x37, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x877d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x877e, .a=0x69, .x=0xf4, .y=0x85, .sp=0x37, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x877d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x877d, .value=0xa0, .type=IO_READ},
        {.addr=0x877e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xb23e, .a=0x6a, .x=0x5b, .y=0x59, .sp=0x84, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb23e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb23f, .a=0x6a, .x=0x5b, .y=0x59, .sp=0x84, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb23e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb23e, .value=0xa0, .type=IO_READ},
        {.addr=0xb23f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x010c, .a=0x01, .x=0x92, .y=0xcb, .sp=0xa3, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x010d, .a=0x01, .x=0x92, .y=0xcb, .sp=0xa3, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x010c, .value=0xa0, .type=IO_READ},
        {.addr=0x010d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xfba7, .a=0xc5, .x=0xcc, .y=0x99, .sp=0x08, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xfba7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfba8, .a=0xc5, .x=0xcc, .y=0x99, .sp=0x08, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xfba7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfba7, .value=0xa0, .type=IO_READ},
        {.addr=0xfba8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x02eb, .a=0xb1, .x=0x1e, .y=0x5b, .sp=0x6c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x02eb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x02ec, .a=0xb1, .x=0x1e, .y=0x5b, .sp=0x6c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x02eb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x02eb, .value=0xa0, .type=IO_READ},
        {.addr=0x02ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x1f04, .a=0xad, .x=0x82, .y=0x40, .sp=0x8d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1f04, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1f05, .a=0xad, .x=0x82, .y=0x40, .sp=0x8d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1f04, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1f04, .value=0xa0, .type=IO_READ},
        {.addr=0x1f05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xb680, .a=0xc2, .x=0x7a, .y=0x76, .sp=0x75, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb680, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb681, .a=0xc2, .x=0x7a, .y=0x76, .sp=0x75, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb680, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb680, .value=0xa0, .type=IO_READ},
        {.addr=0xb681, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x4fda, .a=0xd8, .x=0x83, .y=0xca, .sp=0x33, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4fda, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4fdb, .a=0xd8, .x=0x83, .y=0xca, .sp=0x33, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x4fda, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4fda, .value=0xa0, .type=IO_READ},
        {.addr=0x4fdb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x2ca8, .a=0x39, .x=0xa7, .y=0xae, .sp=0xba, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ca9, .a=0x39, .x=0xa7, .y=0xae, .sp=0xba, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x2ca8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ca8, .value=0xa0, .type=IO_READ},
        {.addr=0x2ca9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x7103, .a=0x85, .x=0x21, .y=0x63, .sp=0x24, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x7103, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7104, .a=0x85, .x=0x21, .y=0x63, .sp=0x24, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7103, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7103, .value=0xa0, .type=IO_READ},
        {.addr=0x7104, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4c02, .a=0xa2, .x=0x2d, .y=0x80, .sp=0x9a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4c02, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4c03, .a=0xa2, .x=0x2d, .y=0x80, .sp=0x9a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4c02, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4c02, .value=0xa0, .type=IO_READ},
        {.addr=0x4c03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x441c, .a=0x36, .x=0xc9, .y=0x94, .sp=0x4b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x441c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x441d, .a=0x36, .x=0xc9, .y=0x94, .sp=0x4b, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x441c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x441c, .value=0xa0, .type=IO_READ},
        {.addr=0x441d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xa07c, .a=0xba, .x=0x3a, .y=0xff, .sp=0x07, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xa07c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa07d, .a=0xba, .x=0x3a, .y=0xff, .sp=0x07, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa07c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa07c, .value=0xa0, .type=IO_READ},
        {.addr=0xa07d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xd2d4, .a=0x97, .x=0x29, .y=0xd9, .sp=0x78, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd2d5, .a=0x97, .x=0x29, .y=0xd9, .sp=0x78, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xd2d4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd2d4, .value=0xa0, .type=IO_READ},
        {.addr=0xd2d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x2e4b, .a=0x92, .x=0xc1, .y=0xc2, .sp=0x67, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2e4b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2e4c, .a=0x92, .x=0xc1, .y=0xc2, .sp=0x67, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x2e4b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2e4b, .value=0xa0, .type=IO_READ},
        {.addr=0x2e4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x706d, .a=0xc5, .x=0x00, .y=0x13, .sp=0xf8, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x706d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x706e, .a=0xc5, .x=0x00, .y=0x13, .sp=0xf8, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x706d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x706d, .value=0xa0, .type=IO_READ},
        {.addr=0x706e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xedbe, .a=0x08, .x=0x2c, .y=0x9c, .sp=0x0e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xedbe, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xedbf, .a=0x08, .x=0x2c, .y=0x9c, .sp=0x0e, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xedbe, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xedbe, .value=0xa0, .type=IO_READ},
        {.addr=0xedbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb321, .a=0x71, .x=0x57, .y=0x22, .sp=0xb4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb321, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb322, .a=0x71, .x=0x57, .y=0x22, .sp=0xb4, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xb321, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb321, .value=0xa0, .type=IO_READ},
        {.addr=0xb322, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6c2c, .a=0x21, .x=0x4e, .y=0x7c, .sp=0xe0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6c2c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6c2d, .a=0x21, .x=0x4e, .y=0x7c, .sp=0xe0, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x6c2c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6c2c, .value=0xa0, .type=IO_READ},
        {.addr=0x6c2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x4815, .a=0x9d, .x=0x2a, .y=0xb2, .sp=0xfd, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x4815, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4816, .a=0x9d, .x=0x2a, .y=0xb2, .sp=0xfd, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4815, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4815, .value=0xa0, .type=IO_READ},
        {.addr=0x4816, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xf5d1, .a=0x19, .x=0xc0, .y=0x06, .sp=0x3c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xf5d1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf5d2, .a=0x19, .x=0xc0, .y=0x06, .sp=0x3c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf5d1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf5d1, .value=0xa0, .type=IO_READ},
        {.addr=0xf5d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xc185, .a=0xb6, .x=0x49, .y=0xfd, .sp=0xa1, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc185, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc186, .a=0xb6, .x=0x49, .y=0xfd, .sp=0xa1, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xc185, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc185, .value=0xa0, .type=IO_READ},
        {.addr=0xc186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x54ef, .a=0x0e, .x=0xea, .y=0xec, .sp=0x5b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x54ef, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x54f0, .a=0x0e, .x=0xea, .y=0xec, .sp=0x5b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x54ef, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x54ef, .value=0xa0, .type=IO_READ},
        {.addr=0x54f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x5ccb, .a=0x70, .x=0x6c, .y=0x6a, .sp=0x69, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5ccb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5ccc, .a=0x70, .x=0x6c, .y=0x6a, .sp=0x69, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5ccb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5ccb, .value=0xa0, .type=IO_READ},
        {.addr=0x5ccc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xbc21, .a=0xa5, .x=0x55, .y=0x89, .sp=0xdc, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xbc21, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbc22, .a=0xa5, .x=0x55, .y=0x89, .sp=0xdc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbc21, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbc21, .value=0xa0, .type=IO_READ},
        {.addr=0xbc22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x77eb, .a=0x05, .x=0x47, .y=0x20, .sp=0xee, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x77eb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x77ec, .a=0x05, .x=0x47, .y=0x20, .sp=0xee, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x77eb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x77eb, .value=0xa0, .type=IO_READ},
        {.addr=0x77ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6e13, .a=0xf3, .x=0x3a, .y=0xd3, .sp=0xb7, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6e13, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6e14, .a=0xf3, .x=0x3a, .y=0xd3, .sp=0xb7, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6e13, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6e13, .value=0xa0, .type=IO_READ},
        {.addr=0x6e14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x1343, .a=0x0b, .x=0x45, .y=0xa9, .sp=0x72, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1343, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1344, .a=0x0b, .x=0x45, .y=0xa9, .sp=0x72, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1343, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1343, .value=0xa0, .type=IO_READ},
        {.addr=0x1344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x0521, .a=0x6c, .x=0x02, .y=0xbd, .sp=0xbb, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0521, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0522, .a=0x6c, .x=0x02, .y=0xbd, .sp=0xbb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0521, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0521, .value=0xa0, .type=IO_READ},
        {.addr=0x0522, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x93be, .a=0xad, .x=0xa3, .y=0x60, .sp=0x30, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x93be, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x93bf, .a=0xad, .x=0xa3, .y=0x60, .sp=0x30, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x93be, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x93be, .value=0xa0, .type=IO_READ},
        {.addr=0x93bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x80bb, .a=0x69, .x=0x0f, .y=0x81, .sp=0xa2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x80bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x80bc, .a=0x69, .x=0x0f, .y=0x81, .sp=0xa2, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x80bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x80bb, .value=0xa0, .type=IO_READ},
        {.addr=0x80bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xb101, .a=0xed, .x=0xe1, .y=0x9e, .sp=0xd4, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb101, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb102, .a=0xed, .x=0xe1, .y=0x9e, .sp=0xd4, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xb101, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb101, .value=0xa0, .type=IO_READ},
        {.addr=0xb102, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x9ae2, .a=0xe9, .x=0xe1, .y=0x20, .sp=0x7f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9ae2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9ae3, .a=0xe9, .x=0xe1, .y=0x20, .sp=0x7f, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x9ae2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9ae2, .value=0xa0, .type=IO_READ},
        {.addr=0x9ae3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x4165, .a=0x6e, .x=0x5a, .y=0x6b, .sp=0x2f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4165, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4166, .a=0x6e, .x=0x5a, .y=0x6b, .sp=0x2f, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x4165, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4165, .value=0xa0, .type=IO_READ},
        {.addr=0x4166, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x81bb, .a=0xbc, .x=0xb1, .y=0x8f, .sp=0xc3, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x81bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x81bc, .a=0xbc, .x=0xb1, .y=0x8f, .sp=0xc3, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x81bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x81bb, .value=0xa0, .type=IO_READ},
        {.addr=0x81bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xce60, .a=0x85, .x=0xf7, .y=0x5c, .sp=0xe2, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xce60, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xce61, .a=0x85, .x=0xf7, .y=0x5c, .sp=0xe2, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xce60, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xce60, .value=0xa0, .type=IO_READ},
        {.addr=0xce61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2ef7, .a=0xc2, .x=0xd3, .y=0xa8, .sp=0x33, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ef8, .a=0xc2, .x=0xd3, .y=0xa8, .sp=0x33, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2ef7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ef7, .value=0xa0, .type=IO_READ},
        {.addr=0x2ef8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x144f, .a=0xe3, .x=0xa6, .y=0x7b, .sp=0x0f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x144f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1450, .a=0xe3, .x=0xa6, .y=0x7b, .sp=0x0f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x144f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x144f, .value=0xa0, .type=IO_READ},
        {.addr=0x1450, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x5b41, .a=0xc9, .x=0x11, .y=0x2e, .sp=0x49, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5b41, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5b42, .a=0xc9, .x=0x11, .y=0x2e, .sp=0x49, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x5b41, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5b41, .value=0xa0, .type=IO_READ},
        {.addr=0x5b42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x76fa, .a=0x1b, .x=0xf8, .y=0xd7, .sp=0x9f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x76fa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x76fb, .a=0x1b, .x=0xf8, .y=0xd7, .sp=0x9f, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x76fa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x76fa, .value=0xa0, .type=IO_READ},
        {.addr=0x76fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xd2cf, .a=0x3c, .x=0x86, .y=0x6b, .sp=0x01, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd2cf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd2d0, .a=0x3c, .x=0x86, .y=0x6b, .sp=0x01, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd2cf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd2cf, .value=0xa0, .type=IO_READ},
        {.addr=0xd2d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xd0e5, .a=0x27, .x=0x08, .y=0xe0, .sp=0x7e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd0e6, .a=0x27, .x=0x08, .y=0xe0, .sp=0x7e, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xd0e5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd0e5, .value=0xa0, .type=IO_READ},
        {.addr=0xd0e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x312a, .a=0x24, .x=0xa5, .y=0xf1, .sp=0x6b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x312a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x312b, .a=0x24, .x=0xa5, .y=0xf1, .sp=0x6b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x312a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x312a, .value=0xa0, .type=IO_READ},
        {.addr=0x312b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xd7f2, .a=0xab, .x=0x57, .y=0xcc, .sp=0xaf, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd7f3, .a=0xab, .x=0x57, .y=0xcc, .sp=0xaf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd7f2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd7f2, .value=0xa0, .type=IO_READ},
        {.addr=0xd7f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x53cb, .a=0xfd, .x=0x80, .y=0xf1, .sp=0xaf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x53cb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x53cc, .a=0xfd, .x=0x80, .y=0xf1, .sp=0xaf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x53cb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x53cb, .value=0xa0, .type=IO_READ},
        {.addr=0x53cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xbdb4, .a=0x7f, .x=0xa6, .y=0x08, .sp=0x7e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbdb5, .a=0x7f, .x=0xa6, .y=0x08, .sp=0x7e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbdb4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbdb4, .value=0xa0, .type=IO_READ},
        {.addr=0xbdb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xad00, .a=0xad, .x=0x35, .y=0x53, .sp=0x64, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xad00, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xad01, .a=0xad, .x=0x35, .y=0x53, .sp=0x64, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xad00, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xad00, .value=0xa0, .type=IO_READ},
        {.addr=0xad01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x23e2, .a=0x53, .x=0x5f, .y=0xe0, .sp=0x9c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x23e2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x23e3, .a=0x53, .x=0x5f, .y=0xe0, .sp=0x9c, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x23e2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x23e2, .value=0xa0, .type=IO_READ},
        {.addr=0x23e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x99d7, .a=0xcb, .x=0xb4, .y=0x5d, .sp=0x0f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x99d7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x99d8, .a=0xcb, .x=0xb4, .y=0x5d, .sp=0x0f, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x99d7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x99d7, .value=0xa0, .type=IO_READ},
        {.addr=0x99d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xf078, .a=0x53, .x=0x15, .y=0x56, .sp=0x46, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf078, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf079, .a=0x53, .x=0x15, .y=0x56, .sp=0x46, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xf078, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf078, .value=0xa0, .type=IO_READ},
        {.addr=0xf079, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x43cb, .a=0x79, .x=0x15, .y=0x0f, .sp=0x67, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x43cb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x43cc, .a=0x79, .x=0x15, .y=0x0f, .sp=0x67, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x43cb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x43cb, .value=0xa0, .type=IO_READ},
        {.addr=0x43cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8cb4, .a=0xe1, .x=0x95, .y=0xb9, .sp=0x57, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8cb5, .a=0xe1, .x=0x95, .y=0xb9, .sp=0x57, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8cb4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8cb4, .value=0xa0, .type=IO_READ},
        {.addr=0x8cb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xad24, .a=0x38, .x=0x4a, .y=0x4b, .sp=0xb8, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xad24, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xad25, .a=0x38, .x=0x4a, .y=0x4b, .sp=0xb8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xad24, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xad24, .value=0xa0, .type=IO_READ},
        {.addr=0xad25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x9280, .a=0xf7, .x=0xb8, .y=0xb7, .sp=0x21, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x9280, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9281, .a=0xf7, .x=0xb8, .y=0xb7, .sp=0x21, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x9280, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9280, .value=0xa0, .type=IO_READ},
        {.addr=0x9281, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x18c2, .a=0xdb, .x=0x3a, .y=0x99, .sp=0xd3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x18c2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x18c3, .a=0xdb, .x=0x3a, .y=0x99, .sp=0xd3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x18c2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x18c2, .value=0xa0, .type=IO_READ},
        {.addr=0x18c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0300) {
    const struct CPU_State initial_cpu = {.pc=0xf2c7, .a=0x3e, .x=0x9a, .y=0xe8, .sp=0x32, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf2c8, .a=0x3e, .x=0x9a, .y=0xe8, .sp=0x32, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xf2c7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf2c7, .value=0xa0, .type=IO_READ},
        {.addr=0xf2c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0301) {
    const struct CPU_State initial_cpu = {.pc=0x229f, .a=0xa1, .x=0xd7, .y=0xbb, .sp=0x14, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x229f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x22a0, .a=0xa1, .x=0xd7, .y=0xbb, .sp=0x14, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x229f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x229f, .value=0xa0, .type=IO_READ},
        {.addr=0x22a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0302) {
    const struct CPU_State initial_cpu = {.pc=0xed26, .a=0x92, .x=0xc9, .y=0x58, .sp=0xe3, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xed26, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xed27, .a=0x92, .x=0xc9, .y=0x58, .sp=0xe3, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xed26, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xed26, .value=0xa0, .type=IO_READ},
        {.addr=0xed27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0303) {
    const struct CPU_State initial_cpu = {.pc=0xc29b, .a=0xaf, .x=0x57, .y=0x39, .sp=0x74, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc29b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc29c, .a=0xaf, .x=0x57, .y=0x39, .sp=0x74, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xc29b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc29b, .value=0xa0, .type=IO_READ},
        {.addr=0xc29c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0304) {
    const struct CPU_State initial_cpu = {.pc=0x9694, .a=0xfb, .x=0x0a, .y=0x18, .sp=0xaa, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x9694, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9695, .a=0xfb, .x=0x0a, .y=0x18, .sp=0xaa, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x9694, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9694, .value=0xa0, .type=IO_READ},
        {.addr=0x9695, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0305) {
    const struct CPU_State initial_cpu = {.pc=0xf671, .a=0x38, .x=0x44, .y=0xa1, .sp=0x1c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf671, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf672, .a=0x38, .x=0x44, .y=0xa1, .sp=0x1c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf671, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf671, .value=0xa0, .type=IO_READ},
        {.addr=0xf672, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0306) {
    const struct CPU_State initial_cpu = {.pc=0x9e8e, .a=0x7c, .x=0x88, .y=0xb7, .sp=0xf8, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9e8e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9e8f, .a=0x7c, .x=0x88, .y=0xb7, .sp=0xf8, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x9e8e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9e8e, .value=0xa0, .type=IO_READ},
        {.addr=0x9e8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0307) {
    const struct CPU_State initial_cpu = {.pc=0xbf26, .a=0x85, .x=0xc3, .y=0x9d, .sp=0xf9, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xbf26, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbf27, .a=0x85, .x=0xc3, .y=0x9d, .sp=0xf9, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xbf26, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbf26, .value=0xa0, .type=IO_READ},
        {.addr=0xbf27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0308) {
    const struct CPU_State initial_cpu = {.pc=0x4d59, .a=0xdc, .x=0x31, .y=0x41, .sp=0x43, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4d59, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4d5a, .a=0xdc, .x=0x31, .y=0x41, .sp=0x43, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x4d59, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4d59, .value=0xa0, .type=IO_READ},
        {.addr=0x4d5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0309) {
    const struct CPU_State initial_cpu = {.pc=0xe0ec, .a=0xa2, .x=0x51, .y=0x82, .sp=0x93, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe0ed, .a=0xa2, .x=0x51, .y=0x82, .sp=0x93, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xe0ec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe0ec, .value=0xa0, .type=IO_READ},
        {.addr=0xe0ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_030A) {
    const struct CPU_State initial_cpu = {.pc=0x4b4b, .a=0xbf, .x=0xe8, .y=0xa2, .sp=0xf6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4b4c, .a=0xbf, .x=0xe8, .y=0xa2, .sp=0xf6, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x4b4b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4b4b, .value=0xa0, .type=IO_READ},
        {.addr=0x4b4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_030B) {
    const struct CPU_State initial_cpu = {.pc=0x1194, .a=0x6f, .x=0x08, .y=0xa2, .sp=0xa0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1194, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1195, .a=0x6f, .x=0x08, .y=0xa2, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1194, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1194, .value=0xa0, .type=IO_READ},
        {.addr=0x1195, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_030C) {
    const struct CPU_State initial_cpu = {.pc=0xe409, .a=0x85, .x=0x4d, .y=0x9f, .sp=0x61, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe409, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe40a, .a=0x85, .x=0x4d, .y=0x9f, .sp=0x61, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe409, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe409, .value=0xa0, .type=IO_READ},
        {.addr=0xe40a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_030D) {
    const struct CPU_State initial_cpu = {.pc=0xa013, .a=0x9d, .x=0xd1, .y=0xb7, .sp=0xf7, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xa013, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa014, .a=0x9d, .x=0xd1, .y=0xb7, .sp=0xf7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa013, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa013, .value=0xa0, .type=IO_READ},
        {.addr=0xa014, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_030E) {
    const struct CPU_State initial_cpu = {.pc=0xd55f, .a=0x64, .x=0xe8, .y=0x2c, .sp=0x34, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xd55f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd560, .a=0x64, .x=0xe8, .y=0x2c, .sp=0x34, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd55f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd55f, .value=0xa0, .type=IO_READ},
        {.addr=0xd560, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_030F) {
    const struct CPU_State initial_cpu = {.pc=0xbce0, .a=0xad, .x=0x58, .y=0x8c, .sp=0x5f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xbce0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbce1, .a=0xad, .x=0x58, .y=0x8c, .sp=0x5f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xbce0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbce0, .value=0xa0, .type=IO_READ},
        {.addr=0xbce1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0310) {
    const struct CPU_State initial_cpu = {.pc=0x5265, .a=0x17, .x=0x98, .y=0xab, .sp=0x48, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5265, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5266, .a=0x17, .x=0x98, .y=0xab, .sp=0x48, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x5265, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5265, .value=0xa0, .type=IO_READ},
        {.addr=0x5266, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0311) {
    const struct CPU_State initial_cpu = {.pc=0x463c, .a=0x2f, .x=0xcb, .y=0x63, .sp=0xa9, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x463c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x463d, .a=0x2f, .x=0xcb, .y=0x63, .sp=0xa9, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x463c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x463c, .value=0xa0, .type=IO_READ},
        {.addr=0x463d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0312) {
    const struct CPU_State initial_cpu = {.pc=0x60e3, .a=0x1c, .x=0x87, .y=0xf4, .sp=0xb0, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x60e3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x60e4, .a=0x1c, .x=0x87, .y=0xf4, .sp=0xb0, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x60e3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x60e3, .value=0xa0, .type=IO_READ},
        {.addr=0x60e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0313) {
    const struct CPU_State initial_cpu = {.pc=0x10ff, .a=0xf1, .x=0xc0, .y=0xc4, .sp=0xd4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x10ff, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1100, .a=0xf1, .x=0xc0, .y=0xc4, .sp=0xd4, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x10ff, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x10ff, .value=0xa0, .type=IO_READ},
        {.addr=0x1100, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0314) {
    const struct CPU_State initial_cpu = {.pc=0x4a3c, .a=0x2b, .x=0x09, .y=0x56, .sp=0x66, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4a3d, .a=0x2b, .x=0x09, .y=0x56, .sp=0x66, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4a3c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4a3c, .value=0xa0, .type=IO_READ},
        {.addr=0x4a3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0315) {
    const struct CPU_State initial_cpu = {.pc=0xc974, .a=0xd3, .x=0xe4, .y=0xc6, .sp=0x50, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xc974, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc975, .a=0xd3, .x=0xe4, .y=0xc6, .sp=0x50, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xc974, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc974, .value=0xa0, .type=IO_READ},
        {.addr=0xc975, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0316) {
    const struct CPU_State initial_cpu = {.pc=0xfa32, .a=0xa8, .x=0x79, .y=0xa8, .sp=0x8c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xfa32, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfa33, .a=0xa8, .x=0x79, .y=0xa8, .sp=0x8c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfa32, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfa32, .value=0xa0, .type=IO_READ},
        {.addr=0xfa33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0317) {
    const struct CPU_State initial_cpu = {.pc=0x380c, .a=0x26, .x=0x2c, .y=0xaf, .sp=0x45, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x380c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x380d, .a=0x26, .x=0x2c, .y=0xaf, .sp=0x45, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x380c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x380c, .value=0xa0, .type=IO_READ},
        {.addr=0x380d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0318) {
    const struct CPU_State initial_cpu = {.pc=0x76b4, .a=0x43, .x=0x29, .y=0x46, .sp=0x2f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x76b4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x76b5, .a=0x43, .x=0x29, .y=0x46, .sp=0x2f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x76b4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x76b4, .value=0xa0, .type=IO_READ},
        {.addr=0x76b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2c85, .a=0x44, .x=0xa0, .y=0x11, .sp=0xa6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2c85, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2c86, .a=0x44, .x=0xa0, .y=0x11, .sp=0xa6, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x2c85, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2c85, .value=0xa0, .type=IO_READ},
        {.addr=0x2c86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_031A) {
    const struct CPU_State initial_cpu = {.pc=0xe006, .a=0x8b, .x=0x7a, .y=0x8f, .sp=0x1e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe006, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe007, .a=0x8b, .x=0x7a, .y=0x8f, .sp=0x1e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe006, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe006, .value=0xa0, .type=IO_READ},
        {.addr=0xe007, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_031B) {
    const struct CPU_State initial_cpu = {.pc=0x97ff, .a=0x95, .x=0xec, .y=0x7a, .sp=0xae, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x97ff, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9800, .a=0x95, .x=0xec, .y=0x7a, .sp=0xae, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x97ff, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x97ff, .value=0xa0, .type=IO_READ},
        {.addr=0x9800, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_031C) {
    const struct CPU_State initial_cpu = {.pc=0xec9d, .a=0xf7, .x=0xf3, .y=0x4b, .sp=0xe6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xec9d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xec9e, .a=0xf7, .x=0xf3, .y=0x4b, .sp=0xe6, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xec9d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xec9d, .value=0xa0, .type=IO_READ},
        {.addr=0xec9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_031D) {
    const struct CPU_State initial_cpu = {.pc=0xb3af, .a=0xf5, .x=0xaf, .y=0x25, .sp=0x04, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xb3af, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb3b0, .a=0xf5, .x=0xaf, .y=0x25, .sp=0x04, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xb3af, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb3af, .value=0xa0, .type=IO_READ},
        {.addr=0xb3b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_031E) {
    const struct CPU_State initial_cpu = {.pc=0x8a7e, .a=0xa1, .x=0x6e, .y=0xff, .sp=0x27, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8a7f, .a=0xa1, .x=0x6e, .y=0xff, .sp=0x27, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8a7e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8a7e, .value=0xa0, .type=IO_READ},
        {.addr=0x8a7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_031F) {
    const struct CPU_State initial_cpu = {.pc=0x324b, .a=0xf5, .x=0x27, .y=0xad, .sp=0x29, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x324b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x324c, .a=0xf5, .x=0x27, .y=0xad, .sp=0x29, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x324b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x324b, .value=0xa0, .type=IO_READ},
        {.addr=0x324c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0320) {
    const struct CPU_State initial_cpu = {.pc=0xbbdb, .a=0xfe, .x=0x56, .y=0xf1, .sp=0xa8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xbbdb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbbdc, .a=0xfe, .x=0x56, .y=0xf1, .sp=0xa8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbbdb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbbdb, .value=0xa0, .type=IO_READ},
        {.addr=0xbbdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0321) {
    const struct CPU_State initial_cpu = {.pc=0xe546, .a=0xe1, .x=0xba, .y=0x6f, .sp=0x88, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xe546, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe547, .a=0xe1, .x=0xba, .y=0x6f, .sp=0x88, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe546, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe546, .value=0xa0, .type=IO_READ},
        {.addr=0xe547, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0322) {
    const struct CPU_State initial_cpu = {.pc=0x4d98, .a=0xb7, .x=0x93, .y=0xa3, .sp=0x10, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x4d98, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4d99, .a=0xb7, .x=0x93, .y=0xa3, .sp=0x10, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x4d98, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4d98, .value=0xa0, .type=IO_READ},
        {.addr=0x4d99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0323) {
    const struct CPU_State initial_cpu = {.pc=0x8163, .a=0x55, .x=0x36, .y=0x03, .sp=0xf7, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8163, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8164, .a=0x55, .x=0x36, .y=0x03, .sp=0xf7, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x8163, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8163, .value=0xa0, .type=IO_READ},
        {.addr=0x8164, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0324) {
    const struct CPU_State initial_cpu = {.pc=0x883d, .a=0x30, .x=0xdc, .y=0x4e, .sp=0x1e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x883d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x883e, .a=0x30, .x=0xdc, .y=0x4e, .sp=0x1e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x883d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x883d, .value=0xa0, .type=IO_READ},
        {.addr=0x883e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0325) {
    const struct CPU_State initial_cpu = {.pc=0x70d5, .a=0x02, .x=0x6d, .y=0x43, .sp=0x5f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x70d5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x70d6, .a=0x02, .x=0x6d, .y=0x43, .sp=0x5f, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x70d5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x70d5, .value=0xa0, .type=IO_READ},
        {.addr=0x70d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0326) {
    const struct CPU_State initial_cpu = {.pc=0xd3f8, .a=0x5e, .x=0x88, .y=0x01, .sp=0x91, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd3f9, .a=0x5e, .x=0x88, .y=0x01, .sp=0x91, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xd3f8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd3f8, .value=0xa0, .type=IO_READ},
        {.addr=0xd3f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0327) {
    const struct CPU_State initial_cpu = {.pc=0x9fef, .a=0x53, .x=0x36, .y=0x4f, .sp=0xe3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9fef, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9ff0, .a=0x53, .x=0x36, .y=0x4f, .sp=0xe3, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x9fef, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9fef, .value=0xa0, .type=IO_READ},
        {.addr=0x9ff0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0328) {
    const struct CPU_State initial_cpu = {.pc=0xbffa, .a=0xde, .x=0xd1, .y=0x16, .sp=0xaa, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xbffa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbffb, .a=0xde, .x=0xd1, .y=0x16, .sp=0xaa, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xbffa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbffa, .value=0xa0, .type=IO_READ},
        {.addr=0xbffb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0329) {
    const struct CPU_State initial_cpu = {.pc=0x0719, .a=0x4f, .x=0x71, .y=0x7e, .sp=0x9b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0719, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x071a, .a=0x4f, .x=0x71, .y=0x7e, .sp=0x9b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0719, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0719, .value=0xa0, .type=IO_READ},
        {.addr=0x071a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_032A) {
    const struct CPU_State initial_cpu = {.pc=0x99bd, .a=0x2c, .x=0x26, .y=0x2e, .sp=0xea, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x99bd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x99be, .a=0x2c, .x=0x26, .y=0x2e, .sp=0xea, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x99bd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x99bd, .value=0xa0, .type=IO_READ},
        {.addr=0x99be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_032B) {
    const struct CPU_State initial_cpu = {.pc=0x7fa5, .a=0x26, .x=0x17, .y=0x53, .sp=0x9c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x7fa5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7fa6, .a=0x26, .x=0x17, .y=0x53, .sp=0x9c, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x7fa5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7fa5, .value=0xa0, .type=IO_READ},
        {.addr=0x7fa6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_032C) {
    const struct CPU_State initial_cpu = {.pc=0xbf64, .a=0x99, .x=0x71, .y=0x77, .sp=0x20, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xbf64, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbf65, .a=0x99, .x=0x71, .y=0x77, .sp=0x20, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xbf64, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbf64, .value=0xa0, .type=IO_READ},
        {.addr=0xbf65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_032D) {
    const struct CPU_State initial_cpu = {.pc=0xefab, .a=0x9a, .x=0x33, .y=0x3b, .sp=0x7d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xefab, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xefac, .a=0x9a, .x=0x33, .y=0x3b, .sp=0x7d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xefab, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xefab, .value=0xa0, .type=IO_READ},
        {.addr=0xefac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_032E) {
    const struct CPU_State initial_cpu = {.pc=0xae6a, .a=0x34, .x=0xf3, .y=0xb5, .sp=0x45, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xae6a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xae6b, .a=0x34, .x=0xf3, .y=0xb5, .sp=0x45, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xae6a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xae6a, .value=0xa0, .type=IO_READ},
        {.addr=0xae6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_032F) {
    const struct CPU_State initial_cpu = {.pc=0x0243, .a=0x5d, .x=0xf6, .y=0xa1, .sp=0x3e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0243, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0244, .a=0x5d, .x=0xf6, .y=0xa1, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0243, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0243, .value=0xa0, .type=IO_READ},
        {.addr=0x0244, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0330) {
    const struct CPU_State initial_cpu = {.pc=0xe3de, .a=0x73, .x=0xda, .y=0xb5, .sp=0x83, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe3de, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe3df, .a=0x73, .x=0xda, .y=0xb5, .sp=0x83, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe3de, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe3de, .value=0xa0, .type=IO_READ},
        {.addr=0xe3df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa3d7, .a=0xf3, .x=0x07, .y=0x4d, .sp=0x48, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa3d8, .a=0xf3, .x=0x07, .y=0x4d, .sp=0x48, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa3d7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa3d7, .value=0xa0, .type=IO_READ},
        {.addr=0xa3d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0332) {
    const struct CPU_State initial_cpu = {.pc=0x73f2, .a=0x9a, .x=0xed, .y=0xaa, .sp=0x9b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x73f2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x73f3, .a=0x9a, .x=0xed, .y=0xaa, .sp=0x9b, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x73f2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x73f2, .value=0xa0, .type=IO_READ},
        {.addr=0x73f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0333) {
    const struct CPU_State initial_cpu = {.pc=0x3602, .a=0xeb, .x=0xdb, .y=0x19, .sp=0x42, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3602, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3603, .a=0xeb, .x=0xdb, .y=0x19, .sp=0x42, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x3602, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3602, .value=0xa0, .type=IO_READ},
        {.addr=0x3603, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9c70, .a=0xc9, .x=0x10, .y=0xbc, .sp=0x37, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9c70, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9c71, .a=0xc9, .x=0x10, .y=0xbc, .sp=0x37, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9c70, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9c70, .value=0xa0, .type=IO_READ},
        {.addr=0x9c71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0335) {
    const struct CPU_State initial_cpu = {.pc=0x0027, .a=0x8b, .x=0x42, .y=0xf8, .sp=0x9b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0028, .a=0x8b, .x=0x42, .y=0xf8, .sp=0x9b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0027, .value=0xa0, .type=IO_READ},
        {.addr=0x0028, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0336) {
    const struct CPU_State initial_cpu = {.pc=0x2518, .a=0x96, .x=0x30, .y=0xe3, .sp=0xb2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2518, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2519, .a=0x96, .x=0x30, .y=0xe3, .sp=0xb2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2518, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2518, .value=0xa0, .type=IO_READ},
        {.addr=0x2519, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0337) {
    const struct CPU_State initial_cpu = {.pc=0x8e9c, .a=0x0c, .x=0xbb, .y=0x3d, .sp=0x20, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x8e9c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8e9d, .a=0x0c, .x=0xbb, .y=0x3d, .sp=0x20, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x8e9c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8e9c, .value=0xa0, .type=IO_READ},
        {.addr=0x8e9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0338) {
    const struct CPU_State initial_cpu = {.pc=0xc1ad, .a=0x16, .x=0xd3, .y=0x0f, .sp=0x6f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc1ad, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc1ae, .a=0x16, .x=0xd3, .y=0x0f, .sp=0x6f, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xc1ad, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc1ad, .value=0xa0, .type=IO_READ},
        {.addr=0xc1ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0339) {
    const struct CPU_State initial_cpu = {.pc=0x31b7, .a=0xf1, .x=0xcb, .y=0x74, .sp=0xb0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x31b7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x31b8, .a=0xf1, .x=0xcb, .y=0x74, .sp=0xb0, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x31b7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x31b7, .value=0xa0, .type=IO_READ},
        {.addr=0x31b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_033A) {
    const struct CPU_State initial_cpu = {.pc=0xd0af, .a=0xd4, .x=0x4f, .y=0xa2, .sp=0x2a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd0af, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd0b0, .a=0xd4, .x=0x4f, .y=0xa2, .sp=0x2a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd0af, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd0af, .value=0xa0, .type=IO_READ},
        {.addr=0xd0b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_033B) {
    const struct CPU_State initial_cpu = {.pc=0x15bb, .a=0x1b, .x=0xce, .y=0xaf, .sp=0xe2, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x15bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x15bc, .a=0x1b, .x=0xce, .y=0xaf, .sp=0xe2, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x15bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x15bb, .value=0xa0, .type=IO_READ},
        {.addr=0x15bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_033C) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0xd8, .x=0x21, .y=0x18, .sp=0x41, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9497, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9498, .a=0xd8, .x=0x21, .y=0x18, .sp=0x41, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9497, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0xa0, .type=IO_READ},
        {.addr=0x9498, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_033D) {
    const struct CPU_State initial_cpu = {.pc=0x2b10, .a=0xda, .x=0x8f, .y=0x7d, .sp=0x3c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2b10, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2b11, .a=0xda, .x=0x8f, .y=0x7d, .sp=0x3c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2b10, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2b10, .value=0xa0, .type=IO_READ},
        {.addr=0x2b11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_033E) {
    const struct CPU_State initial_cpu = {.pc=0xda3c, .a=0xb7, .x=0x84, .y=0xf2, .sp=0x29, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xda3c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xda3d, .a=0xb7, .x=0x84, .y=0xf2, .sp=0x29, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xda3c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xda3c, .value=0xa0, .type=IO_READ},
        {.addr=0xda3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_033F) {
    const struct CPU_State initial_cpu = {.pc=0xb705, .a=0x62, .x=0x42, .y=0xa3, .sp=0x25, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb705, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb706, .a=0x62, .x=0x42, .y=0xa3, .sp=0x25, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb705, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb705, .value=0xa0, .type=IO_READ},
        {.addr=0xb706, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0340) {
    const struct CPU_State initial_cpu = {.pc=0x4b79, .a=0x27, .x=0x70, .y=0x15, .sp=0x8b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b79, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4b7a, .a=0x27, .x=0x70, .y=0x15, .sp=0x8b, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x4b79, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4b79, .value=0xa0, .type=IO_READ},
        {.addr=0x4b7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0341) {
    const struct CPU_State initial_cpu = {.pc=0x536b, .a=0xc5, .x=0xe2, .y=0x5b, .sp=0xf5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x536b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x536c, .a=0xc5, .x=0xe2, .y=0x5b, .sp=0xf5, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x536b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x536b, .value=0xa0, .type=IO_READ},
        {.addr=0x536c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0342) {
    const struct CPU_State initial_cpu = {.pc=0x74ee, .a=0xde, .x=0x83, .y=0xc3, .sp=0xf9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x74ee, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x74ef, .a=0xde, .x=0x83, .y=0xc3, .sp=0xf9, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x74ee, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x74ee, .value=0xa0, .type=IO_READ},
        {.addr=0x74ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0343) {
    const struct CPU_State initial_cpu = {.pc=0xa236, .a=0x0e, .x=0xe8, .y=0xc4, .sp=0xda, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa236, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa237, .a=0x0e, .x=0xe8, .y=0xc4, .sp=0xda, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xa236, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa236, .value=0xa0, .type=IO_READ},
        {.addr=0xa237, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0344) {
    const struct CPU_State initial_cpu = {.pc=0xfb22, .a=0xc1, .x=0x5c, .y=0xb9, .sp=0x09, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xfb22, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfb23, .a=0xc1, .x=0x5c, .y=0xb9, .sp=0x09, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xfb22, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfb22, .value=0xa0, .type=IO_READ},
        {.addr=0xfb23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1d91, .a=0x05, .x=0x14, .y=0x45, .sp=0x1c, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1d91, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1d92, .a=0x05, .x=0x14, .y=0x45, .sp=0x1c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1d91, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1d91, .value=0xa0, .type=IO_READ},
        {.addr=0x1d92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0346) {
    const struct CPU_State initial_cpu = {.pc=0x2a54, .a=0xa6, .x=0xa8, .y=0x7b, .sp=0x45, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x2a54, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2a55, .a=0xa6, .x=0xa8, .y=0x7b, .sp=0x45, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2a54, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2a54, .value=0xa0, .type=IO_READ},
        {.addr=0x2a55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0347) {
    const struct CPU_State initial_cpu = {.pc=0xc688, .a=0x3a, .x=0x7c, .y=0x6f, .sp=0x2b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc688, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc689, .a=0x3a, .x=0x7c, .y=0x6f, .sp=0x2b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xc688, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc688, .value=0xa0, .type=IO_READ},
        {.addr=0xc689, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0348) {
    const struct CPU_State initial_cpu = {.pc=0x95c7, .a=0x1e, .x=0x4b, .y=0x7a, .sp=0xfa, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x95c7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x95c8, .a=0x1e, .x=0x4b, .y=0x7a, .sp=0xfa, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x95c7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x95c7, .value=0xa0, .type=IO_READ},
        {.addr=0x95c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0349) {
    const struct CPU_State initial_cpu = {.pc=0x2ed0, .a=0x2d, .x=0xb3, .y=0xe3, .sp=0x89, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ed1, .a=0x2d, .x=0xb3, .y=0xe3, .sp=0x89, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2ed0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ed0, .value=0xa0, .type=IO_READ},
        {.addr=0x2ed1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_034A) {
    const struct CPU_State initial_cpu = {.pc=0xb4d6, .a=0x35, .x=0x59, .y=0x25, .sp=0x74, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb4d7, .a=0x35, .x=0x59, .y=0x25, .sp=0x74, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xb4d6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb4d6, .value=0xa0, .type=IO_READ},
        {.addr=0xb4d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_034B) {
    const struct CPU_State initial_cpu = {.pc=0xad4d, .a=0xbb, .x=0x0c, .y=0x8b, .sp=0x38, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xad4d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xad4e, .a=0xbb, .x=0x0c, .y=0x8b, .sp=0x38, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xad4d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xad4d, .value=0xa0, .type=IO_READ},
        {.addr=0xad4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_034C) {
    const struct CPU_State initial_cpu = {.pc=0x7f42, .a=0x8d, .x=0xb6, .y=0x5d, .sp=0x0b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7f42, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7f43, .a=0x8d, .x=0xb6, .y=0x5d, .sp=0x0b, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x7f42, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7f42, .value=0xa0, .type=IO_READ},
        {.addr=0x7f43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_034D) {
    const struct CPU_State initial_cpu = {.pc=0x8885, .a=0x01, .x=0x95, .y=0x2c, .sp=0x91, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x8885, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8886, .a=0x01, .x=0x95, .y=0x2c, .sp=0x91, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x8885, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8885, .value=0xa0, .type=IO_READ},
        {.addr=0x8886, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_034E) {
    const struct CPU_State initial_cpu = {.pc=0xacee, .a=0x58, .x=0x5f, .y=0x1e, .sp=0xad, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xacee, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xacef, .a=0x58, .x=0x5f, .y=0x1e, .sp=0xad, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xacee, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xacee, .value=0xa0, .type=IO_READ},
        {.addr=0xacef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_034F) {
    const struct CPU_State initial_cpu = {.pc=0x3d24, .a=0x74, .x=0xcf, .y=0xca, .sp=0xd3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3d24, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3d25, .a=0x74, .x=0xcf, .y=0xca, .sp=0xd3, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x3d24, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3d24, .value=0xa0, .type=IO_READ},
        {.addr=0x3d25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0350) {
    const struct CPU_State initial_cpu = {.pc=0x85bc, .a=0x49, .x=0x65, .y=0x79, .sp=0xbe, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x85bc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x85bd, .a=0x49, .x=0x65, .y=0x79, .sp=0xbe, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x85bc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x85bc, .value=0xa0, .type=IO_READ},
        {.addr=0x85bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0351) {
    const struct CPU_State initial_cpu = {.pc=0xd47d, .a=0x30, .x=0x3b, .y=0x0d, .sp=0x4d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd47d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd47e, .a=0x30, .x=0x3b, .y=0x0d, .sp=0x4d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd47d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd47d, .value=0xa0, .type=IO_READ},
        {.addr=0xd47e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0352) {
    const struct CPU_State initial_cpu = {.pc=0x6383, .a=0x40, .x=0x4c, .y=0x16, .sp=0xd5, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6383, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6384, .a=0x40, .x=0x4c, .y=0x16, .sp=0xd5, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x6383, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6383, .value=0xa0, .type=IO_READ},
        {.addr=0x6384, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0353) {
    const struct CPU_State initial_cpu = {.pc=0xb2d6, .a=0x81, .x=0x88, .y=0x44, .sp=0x67, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb2d7, .a=0x81, .x=0x88, .y=0x44, .sp=0x67, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xb2d6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb2d6, .value=0xa0, .type=IO_READ},
        {.addr=0xb2d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0354) {
    const struct CPU_State initial_cpu = {.pc=0x9259, .a=0x3f, .x=0xa6, .y=0x57, .sp=0x48, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9259, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x925a, .a=0x3f, .x=0xa6, .y=0x57, .sp=0x48, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x9259, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9259, .value=0xa0, .type=IO_READ},
        {.addr=0x925a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0355) {
    const struct CPU_State initial_cpu = {.pc=0x76d0, .a=0x05, .x=0x50, .y=0x98, .sp=0xce, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x76d0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x76d1, .a=0x05, .x=0x50, .y=0x98, .sp=0xce, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x76d0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x76d0, .value=0xa0, .type=IO_READ},
        {.addr=0x76d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0356) {
    const struct CPU_State initial_cpu = {.pc=0x9a7d, .a=0x30, .x=0x4a, .y=0xb9, .sp=0x29, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9a7e, .a=0x30, .x=0x4a, .y=0xb9, .sp=0x29, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9a7d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9a7d, .value=0xa0, .type=IO_READ},
        {.addr=0x9a7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0357) {
    const struct CPU_State initial_cpu = {.pc=0x4ec5, .a=0x27, .x=0x6e, .y=0x40, .sp=0x42, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4ec6, .a=0x27, .x=0x6e, .y=0x40, .sp=0x42, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4ec5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4ec5, .value=0xa0, .type=IO_READ},
        {.addr=0x4ec6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0358) {
    const struct CPU_State initial_cpu = {.pc=0x2666, .a=0x7c, .x=0x93, .y=0x93, .sp=0xdc, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2666, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2667, .a=0x7c, .x=0x93, .y=0x93, .sp=0xdc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2666, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2666, .value=0xa0, .type=IO_READ},
        {.addr=0x2667, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0359) {
    const struct CPU_State initial_cpu = {.pc=0x383b, .a=0xa3, .x=0x8b, .y=0x69, .sp=0x6a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x383b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x383c, .a=0xa3, .x=0x8b, .y=0x69, .sp=0x6a, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x383b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x383b, .value=0xa0, .type=IO_READ},
        {.addr=0x383c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_035A) {
    const struct CPU_State initial_cpu = {.pc=0xaf74, .a=0x41, .x=0x32, .y=0xaa, .sp=0x08, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xaf74, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaf75, .a=0x41, .x=0x32, .y=0xaa, .sp=0x08, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xaf74, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaf74, .value=0xa0, .type=IO_READ},
        {.addr=0xaf75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_035B) {
    const struct CPU_State initial_cpu = {.pc=0x309c, .a=0xd4, .x=0x05, .y=0x0a, .sp=0x69, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x309c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x309d, .a=0xd4, .x=0x05, .y=0x0a, .sp=0x69, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x309c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x309c, .value=0xa0, .type=IO_READ},
        {.addr=0x309d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_035C) {
    const struct CPU_State initial_cpu = {.pc=0x3262, .a=0x1a, .x=0x46, .y=0xf1, .sp=0x7e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3262, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3263, .a=0x1a, .x=0x46, .y=0xf1, .sp=0x7e, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x3262, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3262, .value=0xa0, .type=IO_READ},
        {.addr=0x3263, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_035D) {
    const struct CPU_State initial_cpu = {.pc=0xd3cf, .a=0x61, .x=0x5a, .y=0xc5, .sp=0xfd, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd3cf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd3d0, .a=0x61, .x=0x5a, .y=0xc5, .sp=0xfd, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xd3cf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd3cf, .value=0xa0, .type=IO_READ},
        {.addr=0xd3d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_035E) {
    const struct CPU_State initial_cpu = {.pc=0x6de0, .a=0x75, .x=0xd6, .y=0x45, .sp=0x0d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x6de0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6de1, .a=0x75, .x=0xd6, .y=0x45, .sp=0x0d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6de0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6de0, .value=0xa0, .type=IO_READ},
        {.addr=0x6de1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_035F) {
    const struct CPU_State initial_cpu = {.pc=0x2306, .a=0x3f, .x=0x29, .y=0xdb, .sp=0x31, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2306, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2307, .a=0x3f, .x=0x29, .y=0xdb, .sp=0x31, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2306, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2306, .value=0xa0, .type=IO_READ},
        {.addr=0x2307, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0360) {
    const struct CPU_State initial_cpu = {.pc=0xc407, .a=0x9a, .x=0x4b, .y=0x30, .sp=0xd4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc407, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc408, .a=0x9a, .x=0x4b, .y=0x30, .sp=0xd4, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xc407, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc407, .value=0xa0, .type=IO_READ},
        {.addr=0xc408, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0361) {
    const struct CPU_State initial_cpu = {.pc=0x39ed, .a=0x33, .x=0xc5, .y=0xf9, .sp=0x5b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x39ed, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x39ee, .a=0x33, .x=0xc5, .y=0xf9, .sp=0x5b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x39ed, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x39ed, .value=0xa0, .type=IO_READ},
        {.addr=0x39ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0362) {
    const struct CPU_State initial_cpu = {.pc=0xb6b0, .a=0xc2, .x=0x42, .y=0x0e, .sp=0xfc, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xb6b0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb6b1, .a=0xc2, .x=0x42, .y=0x0e, .sp=0xfc, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb6b0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb6b0, .value=0xa0, .type=IO_READ},
        {.addr=0xb6b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0363) {
    const struct CPU_State initial_cpu = {.pc=0x9cbf, .a=0xb7, .x=0xe4, .y=0xb0, .sp=0xd9, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x9cbf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9cc0, .a=0xb7, .x=0xe4, .y=0xb0, .sp=0xd9, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9cbf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9cbf, .value=0xa0, .type=IO_READ},
        {.addr=0x9cc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0364) {
    const struct CPU_State initial_cpu = {.pc=0x6c4d, .a=0xe5, .x=0x58, .y=0x6b, .sp=0x83, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6c4e, .a=0xe5, .x=0x58, .y=0x6b, .sp=0x83, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x6c4d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6c4d, .value=0xa0, .type=IO_READ},
        {.addr=0x6c4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0365) {
    const struct CPU_State initial_cpu = {.pc=0x1069, .a=0x25, .x=0xff, .y=0x51, .sp=0x78, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x1069, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x106a, .a=0x25, .x=0xff, .y=0x51, .sp=0x78, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x1069, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1069, .value=0xa0, .type=IO_READ},
        {.addr=0x106a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0366) {
    const struct CPU_State initial_cpu = {.pc=0x7bdd, .a=0xfc, .x=0xef, .y=0x63, .sp=0xcb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x7bdd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7bde, .a=0xfc, .x=0xef, .y=0x63, .sp=0xcb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7bdd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7bdd, .value=0xa0, .type=IO_READ},
        {.addr=0x7bde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0367) {
    const struct CPU_State initial_cpu = {.pc=0x0720, .a=0xa4, .x=0xa6, .y=0xdf, .sp=0x1c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0720, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0721, .a=0xa4, .x=0xa6, .y=0xdf, .sp=0x1c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0720, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0720, .value=0xa0, .type=IO_READ},
        {.addr=0x0721, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6153, .a=0x86, .x=0x76, .y=0xe9, .sp=0x7e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6153, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6154, .a=0x86, .x=0x76, .y=0xe9, .sp=0x7e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6153, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6153, .value=0xa0, .type=IO_READ},
        {.addr=0x6154, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0369) {
    const struct CPU_State initial_cpu = {.pc=0x6a47, .a=0x05, .x=0xe2, .y=0xd4, .sp=0xcb, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x6a47, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6a48, .a=0x05, .x=0xe2, .y=0xd4, .sp=0xcb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6a47, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6a47, .value=0xa0, .type=IO_READ},
        {.addr=0x6a48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_036A) {
    const struct CPU_State initial_cpu = {.pc=0x5ff0, .a=0x5d, .x=0x0e, .y=0xa9, .sp=0x56, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5ff1, .a=0x5d, .x=0x0e, .y=0xa9, .sp=0x56, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5ff0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5ff0, .value=0xa0, .type=IO_READ},
        {.addr=0x5ff1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_036B) {
    const struct CPU_State initial_cpu = {.pc=0x4b7d, .a=0x2c, .x=0x87, .y=0x01, .sp=0x40, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4b7d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4b7e, .a=0x2c, .x=0x87, .y=0x01, .sp=0x40, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4b7d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4b7d, .value=0xa0, .type=IO_READ},
        {.addr=0x4b7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_036C) {
    const struct CPU_State initial_cpu = {.pc=0x82ed, .a=0x9d, .x=0x43, .y=0x66, .sp=0x7c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x82ed, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x82ee, .a=0x9d, .x=0x43, .y=0x66, .sp=0x7c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x82ed, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x82ed, .value=0xa0, .type=IO_READ},
        {.addr=0x82ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_036D) {
    const struct CPU_State initial_cpu = {.pc=0x795c, .a=0xc8, .x=0xad, .y=0x57, .sp=0x5f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x795c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x795d, .a=0xc8, .x=0xad, .y=0x57, .sp=0x5f, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x795c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x795c, .value=0xa0, .type=IO_READ},
        {.addr=0x795d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_036E) {
    const struct CPU_State initial_cpu = {.pc=0x26c3, .a=0x27, .x=0x70, .y=0x54, .sp=0x91, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x26c3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x26c4, .a=0x27, .x=0x70, .y=0x54, .sp=0x91, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x26c3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x26c3, .value=0xa0, .type=IO_READ},
        {.addr=0x26c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_036F) {
    const struct CPU_State initial_cpu = {.pc=0xd30b, .a=0xc7, .x=0xf3, .y=0x8b, .sp=0x80, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd30b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd30c, .a=0xc7, .x=0xf3, .y=0x8b, .sp=0x80, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xd30b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd30b, .value=0xa0, .type=IO_READ},
        {.addr=0xd30c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0370) {
    const struct CPU_State initial_cpu = {.pc=0x7efa, .a=0x5a, .x=0xb7, .y=0x1f, .sp=0xf8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7efa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7efb, .a=0x5a, .x=0xb7, .y=0x1f, .sp=0xf8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7efa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7efa, .value=0xa0, .type=IO_READ},
        {.addr=0x7efb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0371) {
    const struct CPU_State initial_cpu = {.pc=0x7a59, .a=0xd6, .x=0xe3, .y=0xcb, .sp=0xe4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7a59, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7a5a, .a=0xd6, .x=0xe3, .y=0xcb, .sp=0xe4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7a59, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7a59, .value=0xa0, .type=IO_READ},
        {.addr=0x7a5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0372) {
    const struct CPU_State initial_cpu = {.pc=0xf779, .a=0x65, .x=0x20, .y=0x76, .sp=0xda, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf779, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf77a, .a=0x65, .x=0x20, .y=0x76, .sp=0xda, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf779, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf779, .value=0xa0, .type=IO_READ},
        {.addr=0xf77a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0373) {
    const struct CPU_State initial_cpu = {.pc=0x4acc, .a=0x3f, .x=0x2f, .y=0xf5, .sp=0x80, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4acc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4acd, .a=0x3f, .x=0x2f, .y=0xf5, .sp=0x80, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x4acc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4acc, .value=0xa0, .type=IO_READ},
        {.addr=0x4acd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0374) {
    const struct CPU_State initial_cpu = {.pc=0x1737, .a=0xcd, .x=0xa6, .y=0x80, .sp=0xe3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1737, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1738, .a=0xcd, .x=0xa6, .y=0x80, .sp=0xe3, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x1737, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1737, .value=0xa0, .type=IO_READ},
        {.addr=0x1738, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0375) {
    const struct CPU_State initial_cpu = {.pc=0xa530, .a=0x38, .x=0x0a, .y=0xd5, .sp=0xdb, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xa530, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa531, .a=0x38, .x=0x0a, .y=0xd5, .sp=0xdb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa530, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa530, .value=0xa0, .type=IO_READ},
        {.addr=0xa531, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0376) {
    const struct CPU_State initial_cpu = {.pc=0x7796, .a=0xb7, .x=0xa3, .y=0x81, .sp=0x5a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7796, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7797, .a=0xb7, .x=0xa3, .y=0x81, .sp=0x5a, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x7796, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7796, .value=0xa0, .type=IO_READ},
        {.addr=0x7797, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0377) {
    const struct CPU_State initial_cpu = {.pc=0x4dcf, .a=0x45, .x=0x5f, .y=0xd3, .sp=0xed, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4dcf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4dd0, .a=0x45, .x=0x5f, .y=0xd3, .sp=0xed, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x4dcf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4dcf, .value=0xa0, .type=IO_READ},
        {.addr=0x4dd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0378) {
    const struct CPU_State initial_cpu = {.pc=0xbb91, .a=0x87, .x=0xb3, .y=0x67, .sp=0x58, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xbb91, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbb92, .a=0x87, .x=0xb3, .y=0x67, .sp=0x58, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xbb91, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbb91, .value=0xa0, .type=IO_READ},
        {.addr=0xbb92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0379) {
    const struct CPU_State initial_cpu = {.pc=0x6d1a, .a=0xb7, .x=0x6c, .y=0x91, .sp=0x99, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6d1a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d1b, .a=0xb7, .x=0x6c, .y=0x91, .sp=0x99, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6d1a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d1a, .value=0xa0, .type=IO_READ},
        {.addr=0x6d1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_037A) {
    const struct CPU_State initial_cpu = {.pc=0xaef4, .a=0x37, .x=0xe5, .y=0xac, .sp=0xa9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xaef4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaef5, .a=0x37, .x=0xe5, .y=0xac, .sp=0xa9, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xaef4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaef4, .value=0xa0, .type=IO_READ},
        {.addr=0xaef5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_037B) {
    const struct CPU_State initial_cpu = {.pc=0xc18e, .a=0x43, .x=0x86, .y=0xaf, .sp=0xc6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc18e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc18f, .a=0x43, .x=0x86, .y=0xaf, .sp=0xc6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc18e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc18e, .value=0xa0, .type=IO_READ},
        {.addr=0xc18f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_037C) {
    const struct CPU_State initial_cpu = {.pc=0xba86, .a=0x35, .x=0x4d, .y=0x1b, .sp=0x6d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xba86, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xba87, .a=0x35, .x=0x4d, .y=0x1b, .sp=0x6d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xba86, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xba86, .value=0xa0, .type=IO_READ},
        {.addr=0xba87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_037D) {
    const struct CPU_State initial_cpu = {.pc=0x6fa6, .a=0x01, .x=0x0b, .y=0x67, .sp=0xb7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6fa6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6fa7, .a=0x01, .x=0x0b, .y=0x67, .sp=0xb7, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x6fa6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6fa6, .value=0xa0, .type=IO_READ},
        {.addr=0x6fa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_037E) {
    const struct CPU_State initial_cpu = {.pc=0xe2ed, .a=0xbc, .x=0x7f, .y=0x48, .sp=0x72, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ed, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe2ee, .a=0xbc, .x=0x7f, .y=0x48, .sp=0x72, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xe2ed, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe2ed, .value=0xa0, .type=IO_READ},
        {.addr=0xe2ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_037F) {
    const struct CPU_State initial_cpu = {.pc=0xf27e, .a=0x66, .x=0x8f, .y=0x7c, .sp=0x9d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf27e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf27f, .a=0x66, .x=0x8f, .y=0x7c, .sp=0x9d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf27e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf27e, .value=0xa0, .type=IO_READ},
        {.addr=0xf27f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0380) {
    const struct CPU_State initial_cpu = {.pc=0x6e69, .a=0x33, .x=0x3d, .y=0x35, .sp=0x9b, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6e69, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6e6a, .a=0x33, .x=0x3d, .y=0x35, .sp=0x9b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x6e69, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6e69, .value=0xa0, .type=IO_READ},
        {.addr=0x6e6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0381) {
    const struct CPU_State initial_cpu = {.pc=0x9198, .a=0xfa, .x=0x5a, .y=0x97, .sp=0x43, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9198, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9199, .a=0xfa, .x=0x5a, .y=0x97, .sp=0x43, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x9198, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9198, .value=0xa0, .type=IO_READ},
        {.addr=0x9199, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0382) {
    const struct CPU_State initial_cpu = {.pc=0x8693, .a=0xaa, .x=0x06, .y=0xd8, .sp=0xbf, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8693, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8694, .a=0xaa, .x=0x06, .y=0xd8, .sp=0xbf, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8693, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8693, .value=0xa0, .type=IO_READ},
        {.addr=0x8694, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0383) {
    const struct CPU_State initial_cpu = {.pc=0x021f, .a=0x82, .x=0x1e, .y=0x09, .sp=0xc5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x021f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0220, .a=0x82, .x=0x1e, .y=0x09, .sp=0xc5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x021f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x021f, .value=0xa0, .type=IO_READ},
        {.addr=0x0220, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0384) {
    const struct CPU_State initial_cpu = {.pc=0xfe44, .a=0x7e, .x=0x64, .y=0x87, .sp=0x36, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xfe44, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfe45, .a=0x7e, .x=0x64, .y=0x87, .sp=0x36, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xfe44, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfe44, .value=0xa0, .type=IO_READ},
        {.addr=0xfe45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0385) {
    const struct CPU_State initial_cpu = {.pc=0x96c3, .a=0x25, .x=0x1d, .y=0x4a, .sp=0x61, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x96c3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x96c4, .a=0x25, .x=0x1d, .y=0x4a, .sp=0x61, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x96c3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x96c3, .value=0xa0, .type=IO_READ},
        {.addr=0x96c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0386) {
    const struct CPU_State initial_cpu = {.pc=0x9c52, .a=0x21, .x=0x39, .y=0x22, .sp=0x47, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9c52, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9c53, .a=0x21, .x=0x39, .y=0x22, .sp=0x47, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9c52, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9c52, .value=0xa0, .type=IO_READ},
        {.addr=0x9c53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0387) {
    const struct CPU_State initial_cpu = {.pc=0x5f4b, .a=0x09, .x=0x42, .y=0xd2, .sp=0xab, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5f4b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5f4c, .a=0x09, .x=0x42, .y=0xd2, .sp=0xab, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5f4b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5f4b, .value=0xa0, .type=IO_READ},
        {.addr=0x5f4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0388) {
    const struct CPU_State initial_cpu = {.pc=0xe5b3, .a=0x0f, .x=0x1c, .y=0xa8, .sp=0x19, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe5b4, .a=0x0f, .x=0x1c, .y=0xa8, .sp=0x19, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe5b3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe5b3, .value=0xa0, .type=IO_READ},
        {.addr=0xe5b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0389) {
    const struct CPU_State initial_cpu = {.pc=0x4291, .a=0x9b, .x=0x94, .y=0x2b, .sp=0xba, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4291, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4292, .a=0x9b, .x=0x94, .y=0x2b, .sp=0xba, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4291, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4291, .value=0xa0, .type=IO_READ},
        {.addr=0x4292, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_038A) {
    const struct CPU_State initial_cpu = {.pc=0xdeeb, .a=0x1d, .x=0x8a, .y=0xb2, .sp=0x19, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xdeeb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdeec, .a=0x1d, .x=0x8a, .y=0xb2, .sp=0x19, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xdeeb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdeeb, .value=0xa0, .type=IO_READ},
        {.addr=0xdeec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_038B) {
    const struct CPU_State initial_cpu = {.pc=0x0337, .a=0x64, .x=0xec, .y=0x32, .sp=0x7f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0337, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0338, .a=0x64, .x=0xec, .y=0x32, .sp=0x7f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0337, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0337, .value=0xa0, .type=IO_READ},
        {.addr=0x0338, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_038C) {
    const struct CPU_State initial_cpu = {.pc=0x1441, .a=0x13, .x=0xa0, .y=0xf2, .sp=0x86, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1441, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1442, .a=0x13, .x=0xa0, .y=0xf2, .sp=0x86, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x1441, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1441, .value=0xa0, .type=IO_READ},
        {.addr=0x1442, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_038D) {
    const struct CPU_State initial_cpu = {.pc=0x3c5a, .a=0xc0, .x=0xf9, .y=0x38, .sp=0xc5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3c5a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3c5b, .a=0xc0, .x=0xf9, .y=0x38, .sp=0xc5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3c5a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3c5a, .value=0xa0, .type=IO_READ},
        {.addr=0x3c5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_038E) {
    const struct CPU_State initial_cpu = {.pc=0x55df, .a=0x7c, .x=0x59, .y=0x20, .sp=0x0c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x55df, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x55e0, .a=0x7c, .x=0x59, .y=0x20, .sp=0x0c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x55df, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x55df, .value=0xa0, .type=IO_READ},
        {.addr=0x55e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_038F) {
    const struct CPU_State initial_cpu = {.pc=0x57ac, .a=0x01, .x=0xe1, .y=0x99, .sp=0xf5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x57ac, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x57ad, .a=0x01, .x=0xe1, .y=0x99, .sp=0xf5, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x57ac, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x57ac, .value=0xa0, .type=IO_READ},
        {.addr=0x57ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0390) {
    const struct CPU_State initial_cpu = {.pc=0x5674, .a=0xaf, .x=0x74, .y=0xdc, .sp=0x53, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5674, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5675, .a=0xaf, .x=0x74, .y=0xdc, .sp=0x53, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5674, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5674, .value=0xa0, .type=IO_READ},
        {.addr=0x5675, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0391) {
    const struct CPU_State initial_cpu = {.pc=0x0ca8, .a=0xe0, .x=0x08, .y=0x82, .sp=0x3f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0ca9, .a=0xe0, .x=0x08, .y=0x82, .sp=0x3f, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0ca8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0ca8, .value=0xa0, .type=IO_READ},
        {.addr=0x0ca9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0392) {
    const struct CPU_State initial_cpu = {.pc=0x6d3a, .a=0xd5, .x=0xcd, .y=0x92, .sp=0x4a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6d3a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6d3b, .a=0xd5, .x=0xcd, .y=0x92, .sp=0x4a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6d3a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6d3a, .value=0xa0, .type=IO_READ},
        {.addr=0x6d3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0393) {
    const struct CPU_State initial_cpu = {.pc=0x20f5, .a=0x6c, .x=0x23, .y=0x90, .sp=0xad, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x20f5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x20f6, .a=0x6c, .x=0x23, .y=0x90, .sp=0xad, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x20f5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x20f5, .value=0xa0, .type=IO_READ},
        {.addr=0x20f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0394) {
    const struct CPU_State initial_cpu = {.pc=0x67e4, .a=0x69, .x=0x1f, .y=0xd7, .sp=0xa1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x67e4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x67e5, .a=0x69, .x=0x1f, .y=0xd7, .sp=0xa1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x67e4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x67e4, .value=0xa0, .type=IO_READ},
        {.addr=0x67e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0395) {
    const struct CPU_State initial_cpu = {.pc=0x2747, .a=0x91, .x=0xa8, .y=0x31, .sp=0x6e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2747, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2748, .a=0x91, .x=0xa8, .y=0x31, .sp=0x6e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2747, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2747, .value=0xa0, .type=IO_READ},
        {.addr=0x2748, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0396) {
    const struct CPU_State initial_cpu = {.pc=0x275a, .a=0x9e, .x=0x22, .y=0xc8, .sp=0xe2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x275a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x275b, .a=0x9e, .x=0x22, .y=0xc8, .sp=0xe2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x275a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x275a, .value=0xa0, .type=IO_READ},
        {.addr=0x275b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0397) {
    const struct CPU_State initial_cpu = {.pc=0x117e, .a=0xa1, .x=0x17, .y=0xd4, .sp=0xfd, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x117e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x117f, .a=0xa1, .x=0x17, .y=0xd4, .sp=0xfd, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x117e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x117e, .value=0xa0, .type=IO_READ},
        {.addr=0x117f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0398) {
    const struct CPU_State initial_cpu = {.pc=0x5c39, .a=0x6d, .x=0xa4, .y=0x51, .sp=0xbc, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5c39, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5c3a, .a=0x6d, .x=0xa4, .y=0x51, .sp=0xbc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5c39, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5c39, .value=0xa0, .type=IO_READ},
        {.addr=0x5c3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_0399) {
    const struct CPU_State initial_cpu = {.pc=0x9737, .a=0x46, .x=0xe0, .y=0x57, .sp=0x12, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9737, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9738, .a=0x46, .x=0xe0, .y=0x57, .sp=0x12, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x9737, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9737, .value=0xa0, .type=IO_READ},
        {.addr=0x9738, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_039A) {
    const struct CPU_State initial_cpu = {.pc=0x4607, .a=0x5d, .x=0x79, .y=0xd9, .sp=0x52, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x4607, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4608, .a=0x5d, .x=0x79, .y=0xd9, .sp=0x52, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4607, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4607, .value=0xa0, .type=IO_READ},
        {.addr=0x4608, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_039B) {
    const struct CPU_State initial_cpu = {.pc=0x04f1, .a=0x79, .x=0x18, .y=0x37, .sp=0x46, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x04f1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x04f2, .a=0x79, .x=0x18, .y=0x37, .sp=0x46, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x04f1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x04f1, .value=0xa0, .type=IO_READ},
        {.addr=0x04f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_039C) {
    const struct CPU_State initial_cpu = {.pc=0x72cc, .a=0x06, .x=0x10, .y=0x6e, .sp=0xfd, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x72cc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x72cd, .a=0x06, .x=0x10, .y=0x6e, .sp=0xfd, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x72cc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x72cc, .value=0xa0, .type=IO_READ},
        {.addr=0x72cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_039D) {
    const struct CPU_State initial_cpu = {.pc=0x2e64, .a=0xde, .x=0xe9, .y=0x05, .sp=0x4c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2e64, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2e65, .a=0xde, .x=0xe9, .y=0x05, .sp=0x4c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2e64, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2e64, .value=0xa0, .type=IO_READ},
        {.addr=0x2e65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_039E) {
    const struct CPU_State initial_cpu = {.pc=0xdb98, .a=0x24, .x=0x42, .y=0x5b, .sp=0xee, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb98, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdb99, .a=0x24, .x=0x42, .y=0x5b, .sp=0xee, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xdb98, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdb98, .value=0xa0, .type=IO_READ},
        {.addr=0xdb99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_039F) {
    const struct CPU_State initial_cpu = {.pc=0x2ed4, .a=0xbc, .x=0xc9, .y=0xe0, .sp=0x48, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ed5, .a=0xbc, .x=0xc9, .y=0xe0, .sp=0x48, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2ed4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ed4, .value=0xa0, .type=IO_READ},
        {.addr=0x2ed5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x3a17, .a=0xa7, .x=0xee, .y=0x86, .sp=0xd5, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3a17, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3a18, .a=0xa7, .x=0xee, .y=0x86, .sp=0xd5, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x3a17, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3a17, .value=0xa0, .type=IO_READ},
        {.addr=0x3a18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x53bb, .a=0x3a, .x=0xb5, .y=0xe7, .sp=0x58, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x53bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x53bc, .a=0x3a, .x=0xb5, .y=0xe7, .sp=0x58, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x53bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x53bb, .value=0xa0, .type=IO_READ},
        {.addr=0x53bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x07de, .a=0x43, .x=0xf3, .y=0xd3, .sp=0x75, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x07de, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x07df, .a=0x43, .x=0xf3, .y=0xd3, .sp=0x75, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x07de, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x07de, .value=0xa0, .type=IO_READ},
        {.addr=0x07df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xf23c, .a=0xee, .x=0xae, .y=0xae, .sp=0xd8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf23c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf23d, .a=0xee, .x=0xae, .y=0xae, .sp=0xd8, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xf23c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf23c, .value=0xa0, .type=IO_READ},
        {.addr=0xf23d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x0875, .a=0x3f, .x=0x1b, .y=0x74, .sp=0x96, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0875, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0876, .a=0x3f, .x=0x1b, .y=0x74, .sp=0x96, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0875, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0875, .value=0xa0, .type=IO_READ},
        {.addr=0x0876, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x1519, .a=0x51, .x=0x5c, .y=0x4d, .sp=0x26, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1519, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x151a, .a=0x51, .x=0x5c, .y=0x4d, .sp=0x26, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1519, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1519, .value=0xa0, .type=IO_READ},
        {.addr=0x151a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x661e, .a=0x45, .x=0x6c, .y=0x2f, .sp=0xa0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x661e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x661f, .a=0x45, .x=0x6c, .y=0x2f, .sp=0xa0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x661e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x661e, .value=0xa0, .type=IO_READ},
        {.addr=0x661f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x9390, .a=0x0e, .x=0x9a, .y=0xd7, .sp=0x84, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9390, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9391, .a=0x0e, .x=0x9a, .y=0xd7, .sp=0x84, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x9390, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9390, .value=0xa0, .type=IO_READ},
        {.addr=0x9391, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x8e0c, .a=0x9e, .x=0x8b, .y=0x87, .sp=0x68, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8e0c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8e0d, .a=0x9e, .x=0x8b, .y=0x87, .sp=0x68, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x8e0c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8e0c, .value=0xa0, .type=IO_READ},
        {.addr=0x8e0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x9bca, .a=0x89, .x=0x8c, .y=0x30, .sp=0x14, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x9bca, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9bcb, .a=0x89, .x=0x8c, .y=0x30, .sp=0x14, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x9bca, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9bca, .value=0xa0, .type=IO_READ},
        {.addr=0x9bcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x268e, .a=0x6a, .x=0x95, .y=0xb3, .sp=0x19, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x268e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x268f, .a=0x6a, .x=0x95, .y=0xb3, .sp=0x19, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x268e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x268e, .value=0xa0, .type=IO_READ},
        {.addr=0x268f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xff34, .a=0x86, .x=0x2f, .y=0x42, .sp=0xcc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xff34, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xff35, .a=0x86, .x=0x2f, .y=0x42, .sp=0xcc, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xff34, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xff34, .value=0xa0, .type=IO_READ},
        {.addr=0xff35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xd63c, .a=0xee, .x=0xb1, .y=0x61, .sp=0x35, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd63c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd63d, .a=0xee, .x=0xb1, .y=0x61, .sp=0x35, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd63c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd63c, .value=0xa0, .type=IO_READ},
        {.addr=0xd63d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xf06a, .a=0xdf, .x=0x84, .y=0xec, .sp=0x46, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf06a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf06b, .a=0xdf, .x=0x84, .y=0xec, .sp=0x46, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf06a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf06a, .value=0xa0, .type=IO_READ},
        {.addr=0xf06b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x9bfa, .a=0xfb, .x=0x9f, .y=0xd4, .sp=0x03, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9bfa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9bfb, .a=0xfb, .x=0x9f, .y=0xd4, .sp=0x03, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9bfa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9bfa, .value=0xa0, .type=IO_READ},
        {.addr=0x9bfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xeeb2, .a=0x7e, .x=0xbe, .y=0x6b, .sp=0x04, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeeb3, .a=0x7e, .x=0xbe, .y=0x6b, .sp=0x04, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xeeb2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeeb2, .value=0xa0, .type=IO_READ},
        {.addr=0xeeb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x15b2, .a=0xed, .x=0x42, .y=0x85, .sp=0xa4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x15b2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x15b3, .a=0xed, .x=0x42, .y=0x85, .sp=0xa4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x15b2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x15b2, .value=0xa0, .type=IO_READ},
        {.addr=0x15b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xcb4b, .a=0x82, .x=0x82, .y=0xc5, .sp=0xd8, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcb4c, .a=0x82, .x=0x82, .y=0xc5, .sp=0xd8, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xcb4b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcb4b, .value=0xa0, .type=IO_READ},
        {.addr=0xcb4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x2ce2, .a=0xaf, .x=0x24, .y=0x54, .sp=0x3b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ce2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2ce3, .a=0xaf, .x=0x24, .y=0x54, .sp=0x3b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2ce2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2ce2, .value=0xa0, .type=IO_READ},
        {.addr=0x2ce3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x68db, .a=0x74, .x=0xfe, .y=0x58, .sp=0xf9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x68db, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x68dc, .a=0x74, .x=0xfe, .y=0x58, .sp=0xf9, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x68db, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x68db, .value=0xa0, .type=IO_READ},
        {.addr=0x68dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x643f, .a=0x5b, .x=0x0e, .y=0xf2, .sp=0xda, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x643f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6440, .a=0x5b, .x=0x0e, .y=0xf2, .sp=0xda, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x643f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x643f, .value=0xa0, .type=IO_READ},
        {.addr=0x6440, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x8235, .a=0xf3, .x=0xd2, .y=0xbc, .sp=0x37, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x8235, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8236, .a=0xf3, .x=0xd2, .y=0xbc, .sp=0x37, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x8235, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8235, .value=0xa0, .type=IO_READ},
        {.addr=0x8236, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xe2a0, .a=0x3f, .x=0x48, .y=0xb0, .sp=0x1e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe2a1, .a=0x3f, .x=0x48, .y=0xb0, .sp=0x1e, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xe2a0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe2a0, .value=0xa0, .type=IO_READ},
        {.addr=0xe2a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x9b96, .a=0xf9, .x=0xa4, .y=0x00, .sp=0x33, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9b96, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9b97, .a=0xf9, .x=0xa4, .y=0x00, .sp=0x33, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9b96, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9b96, .value=0xa0, .type=IO_READ},
        {.addr=0x9b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x25fc, .a=0xe6, .x=0x91, .y=0x6a, .sp=0xa9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x25fc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x25fd, .a=0xe6, .x=0x91, .y=0x6a, .sp=0xa9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x25fc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x25fc, .value=0xa0, .type=IO_READ},
        {.addr=0x25fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x1ea7, .a=0x20, .x=0x99, .y=0x69, .sp=0xbc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x1ea7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1ea8, .a=0x20, .x=0x99, .y=0x69, .sp=0xbc, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x1ea7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1ea7, .value=0xa0, .type=IO_READ},
        {.addr=0x1ea8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x619f, .a=0x55, .x=0x05, .y=0x5d, .sp=0xb8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x619f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x61a0, .a=0x55, .x=0x05, .y=0x5d, .sp=0xb8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x619f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x619f, .value=0xa0, .type=IO_READ},
        {.addr=0x61a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xbc97, .a=0x6c, .x=0x66, .y=0x26, .sp=0x49, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xbc97, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbc98, .a=0x6c, .x=0x66, .y=0x26, .sp=0x49, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xbc97, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbc97, .value=0xa0, .type=IO_READ},
        {.addr=0xbc98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xe3db, .a=0xd4, .x=0x43, .y=0x8b, .sp=0x95, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe3db, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe3dc, .a=0xd4, .x=0x43, .y=0x8b, .sp=0x95, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe3db, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe3db, .value=0xa0, .type=IO_READ},
        {.addr=0xe3dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xbf67, .a=0xd5, .x=0xa2, .y=0x90, .sp=0x31, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xbf67, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbf68, .a=0xd5, .x=0xa2, .y=0x90, .sp=0x31, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xbf67, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbf67, .value=0xa0, .type=IO_READ},
        {.addr=0xbf68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x19a9, .a=0xda, .x=0xdb, .y=0x7a, .sp=0xa1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x19a9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x19aa, .a=0xda, .x=0xdb, .y=0x7a, .sp=0xa1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x19a9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x19a9, .value=0xa0, .type=IO_READ},
        {.addr=0x19aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xe4ba, .a=0x28, .x=0xbc, .y=0x8e, .sp=0x45, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ba, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe4bb, .a=0x28, .x=0xbc, .y=0x8e, .sp=0x45, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe4ba, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe4ba, .value=0xa0, .type=IO_READ},
        {.addr=0xe4bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x59b2, .a=0x15, .x=0xd4, .y=0x9a, .sp=0xa8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x59b2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x59b3, .a=0x15, .x=0xd4, .y=0x9a, .sp=0xa8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x59b2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x59b2, .value=0xa0, .type=IO_READ},
        {.addr=0x59b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x7283, .a=0x06, .x=0xed, .y=0xf9, .sp=0xd6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7283, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7284, .a=0x06, .x=0xed, .y=0xf9, .sp=0xd6, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x7283, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7283, .value=0xa0, .type=IO_READ},
        {.addr=0x7284, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x993f, .a=0xa0, .x=0x8d, .y=0x1a, .sp=0x99, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x993f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9940, .a=0xa0, .x=0x8d, .y=0x1a, .sp=0x99, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x993f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x993f, .value=0xa0, .type=IO_READ},
        {.addr=0x9940, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x990c, .a=0x82, .x=0x48, .y=0x68, .sp=0xba, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x990c, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x990d, .a=0x82, .x=0x48, .y=0x68, .sp=0xba, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x990c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x990c, .value=0xa0, .type=IO_READ},
        {.addr=0x990d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x2254, .a=0x24, .x=0xa1, .y=0x26, .sp=0x81, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x2254, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2255, .a=0x24, .x=0xa1, .y=0x26, .sp=0x81, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x2254, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2254, .value=0xa0, .type=IO_READ},
        {.addr=0x2255, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x36a5, .a=0x12, .x=0x31, .y=0x66, .sp=0x7b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x36a5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x36a6, .a=0x12, .x=0x31, .y=0x66, .sp=0x7b, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x36a5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x36a5, .value=0xa0, .type=IO_READ},
        {.addr=0x36a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x0c7b, .a=0x5b, .x=0xee, .y=0xf7, .sp=0x75, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0c7b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0c7c, .a=0x5b, .x=0xee, .y=0xf7, .sp=0x75, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0c7b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0c7b, .value=0xa0, .type=IO_READ},
        {.addr=0x0c7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x98b1, .a=0xc1, .x=0xb5, .y=0xc4, .sp=0xc5, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x98b1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x98b2, .a=0xc1, .x=0xb5, .y=0xc4, .sp=0xc5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x98b1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x98b1, .value=0xa0, .type=IO_READ},
        {.addr=0x98b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x1d38, .a=0x7f, .x=0x80, .y=0xbf, .sp=0xee, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1d38, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1d39, .a=0x7f, .x=0x80, .y=0xbf, .sp=0xee, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x1d38, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1d38, .value=0xa0, .type=IO_READ},
        {.addr=0x1d39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x6bbe, .a=0x97, .x=0x43, .y=0xac, .sp=0x4b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6bbe, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6bbf, .a=0x97, .x=0x43, .y=0xac, .sp=0x4b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6bbe, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6bbe, .value=0xa0, .type=IO_READ},
        {.addr=0x6bbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x8b8f, .a=0xeb, .x=0x78, .y=0x12, .sp=0x52, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8b8f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8b90, .a=0xeb, .x=0x78, .y=0x12, .sp=0x52, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8b8f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8b8f, .value=0xa0, .type=IO_READ},
        {.addr=0x8b90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xb453, .a=0xd4, .x=0x64, .y=0x75, .sp=0xe5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb453, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb454, .a=0xd4, .x=0x64, .y=0x75, .sp=0xe5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb453, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb453, .value=0xa0, .type=IO_READ},
        {.addr=0xb454, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xdf56, .a=0x9c, .x=0x72, .y=0x57, .sp=0x87, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xdf56, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdf57, .a=0x9c, .x=0x72, .y=0x57, .sp=0x87, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xdf56, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdf56, .value=0xa0, .type=IO_READ},
        {.addr=0xdf57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa2c8, .a=0xec, .x=0x18, .y=0x6f, .sp=0xa6, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa2c9, .a=0xec, .x=0x18, .y=0x6f, .sp=0xa6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa2c8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa2c8, .value=0xa0, .type=IO_READ},
        {.addr=0xa2c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x747e, .a=0x5a, .x=0xde, .y=0x9d, .sp=0xd5, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x747e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x747f, .a=0x5a, .x=0xde, .y=0x9d, .sp=0xd5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x747e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x747e, .value=0xa0, .type=IO_READ},
        {.addr=0x747f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x695b, .a=0x91, .x=0xda, .y=0x99, .sp=0x4e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x695b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x695c, .a=0x91, .x=0xda, .y=0x99, .sp=0x4e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x695b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x695b, .value=0xa0, .type=IO_READ},
        {.addr=0x695c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xf238, .a=0x45, .x=0x13, .y=0x69, .sp=0xb2, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf238, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf239, .a=0x45, .x=0x13, .y=0x69, .sp=0xb2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf238, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf238, .value=0xa0, .type=IO_READ},
        {.addr=0xf239, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf928, .a=0x98, .x=0x9e, .y=0x67, .sp=0x59, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xf928, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xf929, .a=0x98, .x=0x9e, .y=0x67, .sp=0x59, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf928, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xf928, .value=0xa0, .type=IO_READ},
        {.addr=0xf929, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x5491, .a=0xf1, .x=0x7c, .y=0xbb, .sp=0x55, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5491, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5492, .a=0xf1, .x=0x7c, .y=0xbb, .sp=0x55, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5491, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5491, .value=0xa0, .type=IO_READ},
        {.addr=0x5492, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x15ec, .a=0x11, .x=0x8f, .y=0xee, .sp=0x18, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x15ec, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x15ed, .a=0x11, .x=0x8f, .y=0xee, .sp=0x18, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x15ec, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x15ec, .value=0xa0, .type=IO_READ},
        {.addr=0x15ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xc589, .a=0xda, .x=0xcd, .y=0x6d, .sp=0xcf, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xc589, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc58a, .a=0xda, .x=0xcd, .y=0x6d, .sp=0xcf, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc589, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc589, .value=0xa0, .type=IO_READ},
        {.addr=0xc58a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xe041, .a=0x6a, .x=0x81, .y=0xfb, .sp=0x34, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe041, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe042, .a=0x6a, .x=0x81, .y=0xfb, .sp=0x34, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe041, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe041, .value=0xa0, .type=IO_READ},
        {.addr=0xe042, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x9437, .a=0xa3, .x=0x7e, .y=0x16, .sp=0x44, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9437, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9438, .a=0xa3, .x=0x7e, .y=0x16, .sp=0x44, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9437, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9437, .value=0xa0, .type=IO_READ},
        {.addr=0x9438, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x0234, .a=0x8e, .x=0xb7, .y=0xe5, .sp=0x26, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0234, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0235, .a=0x8e, .x=0xb7, .y=0xe5, .sp=0x26, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0234, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0234, .value=0xa0, .type=IO_READ},
        {.addr=0x0235, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xaae2, .a=0xb0, .x=0xa6, .y=0x18, .sp=0xae, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xaae2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaae3, .a=0xb0, .x=0xa6, .y=0x18, .sp=0xae, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xaae2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaae2, .value=0xa0, .type=IO_READ},
        {.addr=0xaae3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xc606, .a=0x08, .x=0x15, .y=0xcd, .sp=0xe8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc606, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc607, .a=0x08, .x=0x15, .y=0xcd, .sp=0xe8, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xc606, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc606, .value=0xa0, .type=IO_READ},
        {.addr=0xc607, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x8b16, .a=0x43, .x=0x75, .y=0x73, .sp=0x8c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8b16, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8b17, .a=0x43, .x=0x75, .y=0x73, .sp=0x8c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8b16, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8b16, .value=0xa0, .type=IO_READ},
        {.addr=0x8b17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xe404, .a=0x6a, .x=0x7c, .y=0xb1, .sp=0xee, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xe404, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe405, .a=0x6a, .x=0x7c, .y=0xb1, .sp=0xee, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe404, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe404, .value=0xa0, .type=IO_READ},
        {.addr=0xe405, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x8bac, .a=0x4a, .x=0x3d, .y=0x09, .sp=0xcc, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x8bac, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8bad, .a=0x4a, .x=0x3d, .y=0x09, .sp=0xcc, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x8bac, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8bac, .value=0xa0, .type=IO_READ},
        {.addr=0x8bad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x4155, .a=0x86, .x=0x7b, .y=0x6e, .sp=0x3d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4155, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4156, .a=0x86, .x=0x7b, .y=0x6e, .sp=0x3d, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x4155, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4155, .value=0xa0, .type=IO_READ},
        {.addr=0x4156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xbd9e, .a=0xb8, .x=0x94, .y=0xa4, .sp=0x95, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbd9e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbd9f, .a=0xb8, .x=0x94, .y=0xa4, .sp=0x95, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbd9e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbd9e, .value=0xa0, .type=IO_READ},
        {.addr=0xbd9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xb0a3, .a=0xc9, .x=0x33, .y=0x4d, .sp=0x0f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb0a4, .a=0xc9, .x=0x33, .y=0x4d, .sp=0x0f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb0a3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb0a3, .value=0xa0, .type=IO_READ},
        {.addr=0xb0a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xb616, .a=0x91, .x=0xf6, .y=0x27, .sp=0x89, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb616, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb617, .a=0x91, .x=0xf6, .y=0x27, .sp=0x89, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xb616, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb616, .value=0xa0, .type=IO_READ},
        {.addr=0xb617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xe990, .a=0x07, .x=0x49, .y=0xc6, .sp=0x20, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe990, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe991, .a=0x07, .x=0x49, .y=0xc6, .sp=0x20, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xe990, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe990, .value=0xa0, .type=IO_READ},
        {.addr=0xe991, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x7f6d, .a=0x8d, .x=0xf6, .y=0xb2, .sp=0xf2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7f6e, .a=0x8d, .x=0xf6, .y=0xb2, .sp=0xf2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7f6d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7f6d, .value=0xa0, .type=IO_READ},
        {.addr=0x7f6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xa5f9, .a=0x1c, .x=0x57, .y=0x9d, .sp=0xe8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa5fa, .a=0x1c, .x=0x57, .y=0x9d, .sp=0xe8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa5f9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa5f9, .value=0xa0, .type=IO_READ},
        {.addr=0xa5fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xcf8d, .a=0xd5, .x=0x21, .y=0x36, .sp=0x7a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xcf8d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcf8e, .a=0xd5, .x=0x21, .y=0x36, .sp=0x7a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xcf8d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcf8d, .value=0xa0, .type=IO_READ},
        {.addr=0xcf8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xd95d, .a=0x84, .x=0x8b, .y=0xb4, .sp=0x3d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd95d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd95e, .a=0x84, .x=0x8b, .y=0xb4, .sp=0x3d, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xd95d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd95d, .value=0xa0, .type=IO_READ},
        {.addr=0xd95e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xb467, .a=0x9c, .x=0xe9, .y=0x7e, .sp=0xb3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb467, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb468, .a=0x9c, .x=0xe9, .y=0x7e, .sp=0xb3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb467, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb467, .value=0xa0, .type=IO_READ},
        {.addr=0xb468, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A0, _A0_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xd673, .a=0xdf, .x=0x16, .y=0x5b, .sp=0x03, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd673, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd674, .a=0xdf, .x=0x16, .y=0x5b, .sp=0x03, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd673, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd673, .value=0xa0, .type=IO_READ},
        {.addr=0xd674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A0 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
