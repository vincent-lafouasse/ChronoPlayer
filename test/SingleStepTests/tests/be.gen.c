#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_BE, _BE_0000) {
    const struct CPU_State initial_cpu = {.pc=0xe938, .a=0x9c, .x=0xc4, .y=0x02, .sp=0xb2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xe938, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe939, .a=0x36, .x=0xc4, .y=0x02, .sp=0xb2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe938, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe938, .value=0xbe, .type=IO_READ},
        {.addr=0xe939, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0001) {
    const struct CPU_State initial_cpu = {.pc=0x44e0, .a=0x88, .x=0x15, .y=0x91, .sp=0xca, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x44e0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x44e1, .a=0x28, .x=0x15, .y=0x91, .sp=0xca, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x44e0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x44e0, .value=0xbe, .type=IO_READ},
        {.addr=0x44e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0002) {
    const struct CPU_State initial_cpu = {.pc=0x737c, .a=0x84, .x=0x36, .y=0x88, .sp=0x2c, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x737c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x737d, .a=0x1e, .x=0x36, .y=0x88, .sp=0x2c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x737c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x737c, .value=0xbe, .type=IO_READ},
        {.addr=0x737d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0003) {
    const struct CPU_State initial_cpu = {.pc=0x2fa0, .a=0x2c, .x=0x43, .y=0x6e, .sp=0x68, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2fa1, .a=0xc6, .x=0x43, .y=0x6e, .sp=0x68, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2fa0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2fa0, .value=0xbe, .type=IO_READ},
        {.addr=0x2fa1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0004) {
    const struct CPU_State initial_cpu = {.pc=0xf058, .a=0x33, .x=0x8f, .y=0x04, .sp=0x69, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf058, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf059, .a=0x33, .x=0x8f, .y=0x04, .sp=0x69, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf058, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf058, .value=0xbe, .type=IO_READ},
        {.addr=0xf059, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0005) {
    const struct CPU_State initial_cpu = {.pc=0x6622, .a=0x1f, .x=0x8e, .y=0x2e, .sp=0x7d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6622, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6623, .a=0xb9, .x=0x8e, .y=0x2e, .sp=0x7d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6622, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6622, .value=0xbe, .type=IO_READ},
        {.addr=0x6623, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb5aa, .a=0x1c, .x=0x14, .y=0x8a, .sp=0xf2, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xb5aa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb5ab, .a=0x16, .x=0x14, .y=0x8a, .sp=0xf2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb5aa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb5aa, .value=0xbe, .type=IO_READ},
        {.addr=0xb5ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0007) {
    const struct CPU_State initial_cpu = {.pc=0xc511, .a=0xc0, .x=0x14, .y=0x55, .sp=0x4a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc511, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc512, .a=0x60, .x=0x14, .y=0x55, .sp=0x4a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc511, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc511, .value=0xbe, .type=IO_READ},
        {.addr=0xc512, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0008) {
    const struct CPU_State initial_cpu = {.pc=0xd665, .a=0xe9, .x=0x61, .y=0x0a, .sp=0x46, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd665, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd666, .a=0x83, .x=0x61, .y=0x0a, .sp=0x46, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd665, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd665, .value=0xbe, .type=IO_READ},
        {.addr=0xd666, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0009) {
    const struct CPU_State initial_cpu = {.pc=0xdebe, .a=0x6b, .x=0xff, .y=0x71, .sp=0x9d, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xdebe, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdebf, .a=0x05, .x=0xff, .y=0x71, .sp=0x9d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdebe, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdebe, .value=0xbe, .type=IO_READ},
        {.addr=0xdebf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_000A) {
    const struct CPU_State initial_cpu = {.pc=0xd887, .a=0x53, .x=0xd0, .y=0x12, .sp=0xb1, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xd887, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd888, .a=0xed, .x=0xd0, .y=0x12, .sp=0xb1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd887, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd887, .value=0xbe, .type=IO_READ},
        {.addr=0xd888, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_000B) {
    const struct CPU_State initial_cpu = {.pc=0x3cf2, .a=0xdf, .x=0x7a, .y=0xe3, .sp=0xcd, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3cf3, .a=0x79, .x=0x7a, .y=0xe3, .sp=0xcd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3cf2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3cf2, .value=0xbe, .type=IO_READ},
        {.addr=0x3cf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_000C) {
    const struct CPU_State initial_cpu = {.pc=0x5b5e, .a=0xa8, .x=0xbc, .y=0xdd, .sp=0x3e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5b5e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5b5f, .a=0x48, .x=0xbc, .y=0xdd, .sp=0x3e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5b5e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5b5e, .value=0xbe, .type=IO_READ},
        {.addr=0x5b5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_000D) {
    const struct CPU_State initial_cpu = {.pc=0x7a15, .a=0x48, .x=0xa4, .y=0x25, .sp=0x8f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7a15, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7a16, .a=0x42, .x=0xa4, .y=0x25, .sp=0x8f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7a15, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7a15, .value=0xbe, .type=IO_READ},
        {.addr=0x7a16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_000E) {
    const struct CPU_State initial_cpu = {.pc=0xb265, .a=0xa5, .x=0xe9, .y=0x16, .sp=0x5b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb265, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb266, .a=0x45, .x=0xe9, .y=0x16, .sp=0x5b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb265, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb265, .value=0xbe, .type=IO_READ},
        {.addr=0xb266, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_000F) {
    const struct CPU_State initial_cpu = {.pc=0x240b, .a=0x08, .x=0x16, .y=0xdb, .sp=0x31, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x240b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x240c, .a=0xa2, .x=0x16, .y=0xdb, .sp=0x31, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x240b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x240b, .value=0xbe, .type=IO_READ},
        {.addr=0x240c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0010) {
    const struct CPU_State initial_cpu = {.pc=0x8af6, .a=0x04, .x=0x84, .y=0xa2, .sp=0x9b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x8af6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8af7, .a=0xa4, .x=0x84, .y=0xa2, .sp=0x9b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8af6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8af6, .value=0xbe, .type=IO_READ},
        {.addr=0x8af7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0011) {
    const struct CPU_State initial_cpu = {.pc=0xcce2, .a=0xc8, .x=0x99, .y=0x87, .sp=0x94, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xcce2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcce3, .a=0x68, .x=0x99, .y=0x87, .sp=0x94, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xcce2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcce2, .value=0xbe, .type=IO_READ},
        {.addr=0xcce3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0012) {
    const struct CPU_State initial_cpu = {.pc=0xd745, .a=0x36, .x=0x84, .y=0xe3, .sp=0xa9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xd745, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd746, .a=0xd0, .x=0x84, .y=0xe3, .sp=0xa9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd745, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd745, .value=0xbe, .type=IO_READ},
        {.addr=0xd746, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0013) {
    const struct CPU_State initial_cpu = {.pc=0xf0be, .a=0xe2, .x=0xf9, .y=0x95, .sp=0xb3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf0be, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf0bf, .a=0x82, .x=0xf9, .y=0x95, .sp=0xb3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf0be, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf0be, .value=0xbe, .type=IO_READ},
        {.addr=0xf0bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0014) {
    const struct CPU_State initial_cpu = {.pc=0x9cd1, .a=0x8c, .x=0x90, .y=0x2e, .sp=0x22, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9cd1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9cd2, .a=0x86, .x=0x90, .y=0x2e, .sp=0x22, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9cd1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9cd1, .value=0xbe, .type=IO_READ},
        {.addr=0x9cd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0015) {
    const struct CPU_State initial_cpu = {.pc=0x85f7, .a=0x80, .x=0x1b, .y=0x90, .sp=0x92, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x85f7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x85f8, .a=0x80, .x=0x1b, .y=0x90, .sp=0x92, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x85f7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x85f7, .value=0xbe, .type=IO_READ},
        {.addr=0x85f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0016) {
    const struct CPU_State initial_cpu = {.pc=0x8c49, .a=0xe7, .x=0x9a, .y=0x3f, .sp=0x34, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8c49, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8c4a, .a=0x87, .x=0x9a, .y=0x3f, .sp=0x34, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8c49, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8c49, .value=0xbe, .type=IO_READ},
        {.addr=0x8c4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0017) {
    const struct CPU_State initial_cpu = {.pc=0x08f2, .a=0x76, .x=0x17, .y=0x0c, .sp=0xb2, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x08f2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x08f3, .a=0x70, .x=0x17, .y=0x0c, .sp=0xb2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x08f2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x08f2, .value=0xbe, .type=IO_READ},
        {.addr=0x08f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0018) {
    const struct CPU_State initial_cpu = {.pc=0x8778, .a=0x8d, .x=0xf1, .y=0x63, .sp=0xb2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8778, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8779, .a=0x87, .x=0xf1, .y=0x63, .sp=0xb2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8778, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8778, .value=0xbe, .type=IO_READ},
        {.addr=0x8779, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0019) {
    const struct CPU_State initial_cpu = {.pc=0xe47d, .a=0xbd, .x=0x3a, .y=0x14, .sp=0xd5, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xe47d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe47e, .a=0x57, .x=0x3a, .y=0x14, .sp=0xd5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe47d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe47d, .value=0xbe, .type=IO_READ},
        {.addr=0xe47e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_001A) {
    const struct CPU_State initial_cpu = {.pc=0xa969, .a=0xc0, .x=0x96, .y=0x79, .sp=0x1b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa969, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa96a, .a=0x5a, .x=0x96, .y=0x79, .sp=0x1b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa969, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa969, .value=0xbe, .type=IO_READ},
        {.addr=0xa96a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_001B) {
    const struct CPU_State initial_cpu = {.pc=0x09db, .a=0xc4, .x=0x96, .y=0x4b, .sp=0x36, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x09db, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x09dc, .a=0x5e, .x=0x96, .y=0x4b, .sp=0x36, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x09db, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x09db, .value=0xbe, .type=IO_READ},
        {.addr=0x09dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_001C) {
    const struct CPU_State initial_cpu = {.pc=0xa48f, .a=0x38, .x=0xf1, .y=0xc2, .sp=0x24, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa48f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa490, .a=0x32, .x=0xf1, .y=0xc2, .sp=0x24, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa48f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa48f, .value=0xbe, .type=IO_READ},
        {.addr=0xa490, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_001D) {
    const struct CPU_State initial_cpu = {.pc=0xfbef, .a=0xca, .x=0x6b, .y=0xe8, .sp=0x40, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xfbef, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfbf0, .a=0x64, .x=0x6b, .y=0xe8, .sp=0x40, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfbef, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfbef, .value=0xbe, .type=IO_READ},
        {.addr=0xfbf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_001E) {
    const struct CPU_State initial_cpu = {.pc=0xa36e, .a=0x96, .x=0x6c, .y=0x6d, .sp=0x9e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xa36e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa36f, .a=0x30, .x=0x6c, .y=0x6d, .sp=0x9e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa36e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa36e, .value=0xbe, .type=IO_READ},
        {.addr=0xa36f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_001F) {
    const struct CPU_State initial_cpu = {.pc=0x6db5, .a=0x46, .x=0x24, .y=0x47, .sp=0xc3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6db5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6db6, .a=0xe6, .x=0x24, .y=0x47, .sp=0xc3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6db5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6db5, .value=0xbe, .type=IO_READ},
        {.addr=0x6db6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0020) {
    const struct CPU_State initial_cpu = {.pc=0x5473, .a=0xf5, .x=0x99, .y=0x70, .sp=0xdb, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5473, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5474, .a=0x95, .x=0x99, .y=0x70, .sp=0xdb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5473, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5473, .value=0xbe, .type=IO_READ},
        {.addr=0x5474, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0021) {
    const struct CPU_State initial_cpu = {.pc=0x1c6a, .a=0x48, .x=0x51, .y=0xf4, .sp=0xca, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1c6a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1c6b, .a=0x48, .x=0x51, .y=0xf4, .sp=0xca, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1c6a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1c6a, .value=0xbe, .type=IO_READ},
        {.addr=0x1c6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0022) {
    const struct CPU_State initial_cpu = {.pc=0xd92d, .a=0x65, .x=0xa3, .y=0x26, .sp=0x6b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd92d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd92e, .a=0x05, .x=0xa3, .y=0x26, .sp=0x6b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd92d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd92d, .value=0xbe, .type=IO_READ},
        {.addr=0xd92e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0023) {
    const struct CPU_State initial_cpu = {.pc=0xb922, .a=0xf3, .x=0x10, .y=0x8e, .sp=0xd0, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb922, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb923, .a=0x93, .x=0x10, .y=0x8e, .sp=0xd0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb922, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb922, .value=0xbe, .type=IO_READ},
        {.addr=0xb923, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0024) {
    const struct CPU_State initial_cpu = {.pc=0x1da1, .a=0x26, .x=0x5f, .y=0x40, .sp=0x99, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1da1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1da2, .a=0xc0, .x=0x5f, .y=0x40, .sp=0x99, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1da1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1da1, .value=0xbe, .type=IO_READ},
        {.addr=0x1da2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0025) {
    const struct CPU_State initial_cpu = {.pc=0x824c, .a=0x58, .x=0xc7, .y=0xe3, .sp=0x41, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x824c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x824d, .a=0x58, .x=0xc7, .y=0xe3, .sp=0x41, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x824c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x824c, .value=0xbe, .type=IO_READ},
        {.addr=0x824d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0026) {
    const struct CPU_State initial_cpu = {.pc=0x99c2, .a=0xb6, .x=0xd2, .y=0xa0, .sp=0xec, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x99c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x99c3, .a=0x56, .x=0xd2, .y=0xa0, .sp=0xec, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x99c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x99c2, .value=0xbe, .type=IO_READ},
        {.addr=0x99c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0027) {
    const struct CPU_State initial_cpu = {.pc=0x2c10, .a=0x31, .x=0xcb, .y=0x3e, .sp=0x89, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x2c10, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2c11, .a=0xd1, .x=0xcb, .y=0x3e, .sp=0x89, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x2c10, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2c10, .value=0xbe, .type=IO_READ},
        {.addr=0x2c11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0028) {
    const struct CPU_State initial_cpu = {.pc=0xcf41, .a=0xe0, .x=0xf2, .y=0x53, .sp=0x8b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xcf41, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcf42, .a=0x7a, .x=0xf2, .y=0x53, .sp=0x8b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xcf41, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcf41, .value=0xbe, .type=IO_READ},
        {.addr=0xcf42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0029) {
    const struct CPU_State initial_cpu = {.pc=0x64fa, .a=0xfa, .x=0x06, .y=0xe1, .sp=0x4d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x64fa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x64fb, .a=0x94, .x=0x06, .y=0xe1, .sp=0x4d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x64fa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x64fa, .value=0xbe, .type=IO_READ},
        {.addr=0x64fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_002A) {
    const struct CPU_State initial_cpu = {.pc=0xa5cd, .a=0x63, .x=0x0a, .y=0xc6, .sp=0x58, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa5cd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa5ce, .a=0x63, .x=0x0a, .y=0xc6, .sp=0x58, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa5cd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa5cd, .value=0xbe, .type=IO_READ},
        {.addr=0xa5ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_002B) {
    const struct CPU_State initial_cpu = {.pc=0x7647, .a=0x86, .x=0xb9, .y=0x0c, .sp=0xbe, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7647, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7648, .a=0x86, .x=0xb9, .y=0x0c, .sp=0xbe, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7647, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7647, .value=0xbe, .type=IO_READ},
        {.addr=0x7648, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_002C) {
    const struct CPU_State initial_cpu = {.pc=0x0239, .a=0xb7, .x=0xbf, .y=0xc3, .sp=0xc7, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0239, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x023a, .a=0x51, .x=0xbf, .y=0xc3, .sp=0xc7, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0239, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0239, .value=0xbe, .type=IO_READ},
        {.addr=0x023a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_002D) {
    const struct CPU_State initial_cpu = {.pc=0xe955, .a=0x49, .x=0x2a, .y=0xa2, .sp=0xfb, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xe955, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe956, .a=0x49, .x=0x2a, .y=0xa2, .sp=0xfb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe955, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe955, .value=0xbe, .type=IO_READ},
        {.addr=0xe956, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_002E) {
    const struct CPU_State initial_cpu = {.pc=0x30a3, .a=0x5b, .x=0x78, .y=0x21, .sp=0x63, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x30a3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x30a4, .a=0x55, .x=0x78, .y=0x21, .sp=0x63, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x30a3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x30a3, .value=0xbe, .type=IO_READ},
        {.addr=0x30a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_002F) {
    const struct CPU_State initial_cpu = {.pc=0xa4f0, .a=0xfc, .x=0xcd, .y=0x72, .sp=0x00, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa4f1, .a=0x96, .x=0xcd, .y=0x72, .sp=0x00, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa4f0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa4f0, .value=0xbe, .type=IO_READ},
        {.addr=0xa4f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0030) {
    const struct CPU_State initial_cpu = {.pc=0x4a4e, .a=0x78, .x=0x86, .y=0x12, .sp=0xc1, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x4a4e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4a4f, .a=0x18, .x=0x86, .y=0x12, .sp=0xc1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4a4e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4a4e, .value=0xbe, .type=IO_READ},
        {.addr=0x4a4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0031) {
    const struct CPU_State initial_cpu = {.pc=0x98f9, .a=0xd8, .x=0xb4, .y=0xc0, .sp=0x0f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x98f9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x98fa, .a=0x78, .x=0xb4, .y=0xc0, .sp=0x0f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x98f9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x98f9, .value=0xbe, .type=IO_READ},
        {.addr=0x98fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0032) {
    const struct CPU_State initial_cpu = {.pc=0x6334, .a=0x96, .x=0x36, .y=0x48, .sp=0x89, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6334, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6335, .a=0x96, .x=0x36, .y=0x48, .sp=0x89, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6334, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6334, .value=0xbe, .type=IO_READ},
        {.addr=0x6335, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0033) {
    const struct CPU_State initial_cpu = {.pc=0xbc10, .a=0x57, .x=0xf9, .y=0xf3, .sp=0x9a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xbc10, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbc11, .a=0xf7, .x=0xf9, .y=0xf3, .sp=0x9a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbc10, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbc10, .value=0xbe, .type=IO_READ},
        {.addr=0xbc11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0034) {
    const struct CPU_State initial_cpu = {.pc=0x08f4, .a=0x38, .x=0x8d, .y=0x53, .sp=0x53, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x08f4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x08f5, .a=0xd2, .x=0x8d, .y=0x53, .sp=0x53, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x08f4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x08f4, .value=0xbe, .type=IO_READ},
        {.addr=0x08f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0035) {
    const struct CPU_State initial_cpu = {.pc=0x80dd, .a=0xfd, .x=0x73, .y=0x5d, .sp=0x44, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x80dd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x80de, .a=0x97, .x=0x73, .y=0x5d, .sp=0x44, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x80dd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x80dd, .value=0xbe, .type=IO_READ},
        {.addr=0x80de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0036) {
    const struct CPU_State initial_cpu = {.pc=0xcedb, .a=0xc2, .x=0x1d, .y=0x7e, .sp=0x79, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xcedb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcedc, .a=0x5c, .x=0x1d, .y=0x7e, .sp=0x79, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcedb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcedb, .value=0xbe, .type=IO_READ},
        {.addr=0xcedc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0037) {
    const struct CPU_State initial_cpu = {.pc=0xef7c, .a=0x1f, .x=0xa0, .y=0x40, .sp=0xb9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xef7c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xef7d, .a=0x19, .x=0xa0, .y=0x40, .sp=0xb9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xef7c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xef7c, .value=0xbe, .type=IO_READ},
        {.addr=0xef7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0038) {
    const struct CPU_State initial_cpu = {.pc=0xd953, .a=0x3a, .x=0x2c, .y=0x8d, .sp=0xda, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd953, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd954, .a=0x34, .x=0x2c, .y=0x8d, .sp=0xda, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd953, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd953, .value=0xbe, .type=IO_READ},
        {.addr=0xd954, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0039) {
    const struct CPU_State initial_cpu = {.pc=0x8bec, .a=0x04, .x=0x93, .y=0x5e, .sp=0xc2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8bec, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8bed, .a=0x04, .x=0x93, .y=0x5e, .sp=0xc2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8bec, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8bec, .value=0xbe, .type=IO_READ},
        {.addr=0x8bed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_003A) {
    const struct CPU_State initial_cpu = {.pc=0x66a2, .a=0x75, .x=0xa9, .y=0x40, .sp=0x9f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x66a2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x66a3, .a=0x15, .x=0xa9, .y=0x40, .sp=0x9f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x66a2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x66a2, .value=0xbe, .type=IO_READ},
        {.addr=0x66a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_003B) {
    const struct CPU_State initial_cpu = {.pc=0x96cf, .a=0xbb, .x=0xe8, .y=0x0a, .sp=0x0a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x96cf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x96d0, .a=0x55, .x=0xe8, .y=0x0a, .sp=0x0a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x96cf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x96cf, .value=0xbe, .type=IO_READ},
        {.addr=0x96d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_003C) {
    const struct CPU_State initial_cpu = {.pc=0x7f6c, .a=0xc2, .x=0x37, .y=0xf9, .sp=0x02, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7f6d, .a=0x5c, .x=0x37, .y=0xf9, .sp=0x02, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7f6c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7f6c, .value=0xbe, .type=IO_READ},
        {.addr=0x7f6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_003D) {
    const struct CPU_State initial_cpu = {.pc=0xdc6f, .a=0x69, .x=0x21, .y=0xd3, .sp=0x14, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xdc6f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdc70, .a=0x09, .x=0x21, .y=0xd3, .sp=0x14, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xdc6f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdc6f, .value=0xbe, .type=IO_READ},
        {.addr=0xdc70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_003E) {
    const struct CPU_State initial_cpu = {.pc=0xfc86, .a=0x91, .x=0x15, .y=0x64, .sp=0x7d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfc86, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfc87, .a=0x2b, .x=0x15, .y=0x64, .sp=0x7d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfc86, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfc86, .value=0xbe, .type=IO_READ},
        {.addr=0xfc87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_003F) {
    const struct CPU_State initial_cpu = {.pc=0x3972, .a=0x81, .x=0x44, .y=0x4d, .sp=0xc4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x3972, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3973, .a=0x81, .x=0x44, .y=0x4d, .sp=0xc4, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x3972, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3972, .value=0xbe, .type=IO_READ},
        {.addr=0x3973, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0040) {
    const struct CPU_State initial_cpu = {.pc=0x59e7, .a=0xa0, .x=0xcb, .y=0x5f, .sp=0x13, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x59e7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x59e8, .a=0x3a, .x=0xcb, .y=0x5f, .sp=0x13, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x59e7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x59e7, .value=0xbe, .type=IO_READ},
        {.addr=0x59e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0041) {
    const struct CPU_State initial_cpu = {.pc=0xcdd4, .a=0x58, .x=0xce, .y=0x22, .sp=0xfc, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcdd5, .a=0xf8, .x=0xce, .y=0x22, .sp=0xfc, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcdd4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcdd4, .value=0xbe, .type=IO_READ},
        {.addr=0xcdd5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0042) {
    const struct CPU_State initial_cpu = {.pc=0x7462, .a=0x36, .x=0x46, .y=0x11, .sp=0x7f, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7462, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7463, .a=0x30, .x=0x46, .y=0x11, .sp=0x7f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7462, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7462, .value=0xbe, .type=IO_READ},
        {.addr=0x7463, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0043) {
    const struct CPU_State initial_cpu = {.pc=0x0426, .a=0xf0, .x=0xf6, .y=0xc8, .sp=0xa3, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0426, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0427, .a=0x8a, .x=0xf6, .y=0xc8, .sp=0xa3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0426, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0426, .value=0xbe, .type=IO_READ},
        {.addr=0x0427, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0044) {
    const struct CPU_State initial_cpu = {.pc=0xf8a0, .a=0x09, .x=0xcd, .y=0x07, .sp=0xcd, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf8a1, .a=0x09, .x=0xcd, .y=0x07, .sp=0xcd, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf8a0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf8a0, .value=0xbe, .type=IO_READ},
        {.addr=0xf8a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0045) {
    const struct CPU_State initial_cpu = {.pc=0x1caa, .a=0x63, .x=0xcb, .y=0x21, .sp=0x36, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1caa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1cab, .a=0xfd, .x=0xcb, .y=0x21, .sp=0x36, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1caa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1caa, .value=0xbe, .type=IO_READ},
        {.addr=0x1cab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0046) {
    const struct CPU_State initial_cpu = {.pc=0xdea1, .a=0xe1, .x=0x62, .y=0xaf, .sp=0x69, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xdea1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdea2, .a=0x7b, .x=0x62, .y=0xaf, .sp=0x69, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdea1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdea1, .value=0xbe, .type=IO_READ},
        {.addr=0xdea2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2235, .a=0xd2, .x=0x8e, .y=0xa5, .sp=0x77, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2235, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2236, .a=0x6c, .x=0x8e, .y=0xa5, .sp=0x77, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2235, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2235, .value=0xbe, .type=IO_READ},
        {.addr=0x2236, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0048) {
    const struct CPU_State initial_cpu = {.pc=0xd160, .a=0x20, .x=0x54, .y=0x9e, .sp=0x02, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd160, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd161, .a=0xc0, .x=0x54, .y=0x9e, .sp=0x02, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd160, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd160, .value=0xbe, .type=IO_READ},
        {.addr=0xd161, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0049) {
    const struct CPU_State initial_cpu = {.pc=0x79e5, .a=0x54, .x=0xa0, .y=0x90, .sp=0x93, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x79e5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x79e6, .a=0x54, .x=0xa0, .y=0x90, .sp=0x93, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x79e5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x79e5, .value=0xbe, .type=IO_READ},
        {.addr=0x79e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_004A) {
    const struct CPU_State initial_cpu = {.pc=0x9777, .a=0xa8, .x=0x8b, .y=0x43, .sp=0xc0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9777, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9778, .a=0x48, .x=0x8b, .y=0x43, .sp=0xc0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9777, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9777, .value=0xbe, .type=IO_READ},
        {.addr=0x9778, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_004B) {
    const struct CPU_State initial_cpu = {.pc=0x259d, .a=0x52, .x=0x64, .y=0x75, .sp=0x27, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x259d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x259e, .a=0x52, .x=0x64, .y=0x75, .sp=0x27, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x259d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x259d, .value=0xbe, .type=IO_READ},
        {.addr=0x259e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_004C) {
    const struct CPU_State initial_cpu = {.pc=0x583d, .a=0xcb, .x=0xc2, .y=0x54, .sp=0x2b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x583d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x583e, .a=0x65, .x=0xc2, .y=0x54, .sp=0x2b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x583d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x583d, .value=0xbe, .type=IO_READ},
        {.addr=0x583e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_004D) {
    const struct CPU_State initial_cpu = {.pc=0xf6e6, .a=0x26, .x=0x7c, .y=0x63, .sp=0xce, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf6e7, .a=0xc6, .x=0x7c, .y=0x63, .sp=0xce, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf6e6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf6e6, .value=0xbe, .type=IO_READ},
        {.addr=0xf6e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_004E) {
    const struct CPU_State initial_cpu = {.pc=0x4148, .a=0xab, .x=0xb6, .y=0x41, .sp=0x76, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x4148, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4149, .a=0x45, .x=0xb6, .y=0x41, .sp=0x76, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4148, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4148, .value=0xbe, .type=IO_READ},
        {.addr=0x4149, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_004F) {
    const struct CPU_State initial_cpu = {.pc=0xcd67, .a=0xfe, .x=0x9a, .y=0x76, .sp=0xcb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xcd67, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcd68, .a=0x98, .x=0x9a, .y=0x76, .sp=0xcb, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xcd67, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcd67, .value=0xbe, .type=IO_READ},
        {.addr=0xcd68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0050) {
    const struct CPU_State initial_cpu = {.pc=0x20a5, .a=0x50, .x=0x06, .y=0xe3, .sp=0x17, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x20a5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x20a6, .a=0x4a, .x=0x06, .y=0xe3, .sp=0x17, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x20a5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x20a5, .value=0xbe, .type=IO_READ},
        {.addr=0x20a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0051) {
    const struct CPU_State initial_cpu = {.pc=0x6587, .a=0xe7, .x=0x55, .y=0xd6, .sp=0xca, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x6587, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6588, .a=0x81, .x=0x55, .y=0xd6, .sp=0xca, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6587, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6587, .value=0xbe, .type=IO_READ},
        {.addr=0x6588, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0052) {
    const struct CPU_State initial_cpu = {.pc=0x77c3, .a=0x18, .x=0x1f, .y=0x47, .sp=0xa5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x77c3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x77c4, .a=0xb2, .x=0x1f, .y=0x47, .sp=0xa5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x77c3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x77c3, .value=0xbe, .type=IO_READ},
        {.addr=0x77c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0053) {
    const struct CPU_State initial_cpu = {.pc=0xabe3, .a=0x8c, .x=0x9e, .y=0xdc, .sp=0x54, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xabe3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xabe4, .a=0x26, .x=0x9e, .y=0xdc, .sp=0x54, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xabe3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xabe3, .value=0xbe, .type=IO_READ},
        {.addr=0xabe4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0054) {
    const struct CPU_State initial_cpu = {.pc=0xf9f8, .a=0x34, .x=0x91, .y=0x2e, .sp=0x39, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf9f9, .a=0xce, .x=0x91, .y=0x2e, .sp=0x39, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf9f8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf9f8, .value=0xbe, .type=IO_READ},
        {.addr=0xf9f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0055) {
    const struct CPU_State initial_cpu = {.pc=0x57ac, .a=0x10, .x=0x5a, .y=0xd3, .sp=0xc6, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x57ac, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x57ad, .a=0x10, .x=0x5a, .y=0xd3, .sp=0xc6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x57ac, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x57ac, .value=0xbe, .type=IO_READ},
        {.addr=0x57ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0056) {
    const struct CPU_State initial_cpu = {.pc=0xf8a2, .a=0xe8, .x=0x56, .y=0xbd, .sp=0x81, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf8a3, .a=0x82, .x=0x56, .y=0xbd, .sp=0x81, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf8a2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf8a2, .value=0xbe, .type=IO_READ},
        {.addr=0xf8a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0057) {
    const struct CPU_State initial_cpu = {.pc=0xf05c, .a=0x1c, .x=0x58, .y=0x66, .sp=0xa0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf05c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf05d, .a=0xb6, .x=0x58, .y=0x66, .sp=0xa0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf05c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf05c, .value=0xbe, .type=IO_READ},
        {.addr=0xf05d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0058) {
    const struct CPU_State initial_cpu = {.pc=0x07c5, .a=0x0d, .x=0xdc, .y=0xdc, .sp=0xbf, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x07c5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x07c6, .a=0x07, .x=0xdc, .y=0xdc, .sp=0xbf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x07c5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x07c5, .value=0xbe, .type=IO_READ},
        {.addr=0x07c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0059) {
    const struct CPU_State initial_cpu = {.pc=0x592e, .a=0x7d, .x=0x7e, .y=0xd5, .sp=0xc4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x592e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x592f, .a=0x17, .x=0x7e, .y=0xd5, .sp=0xc4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x592e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x592e, .value=0xbe, .type=IO_READ},
        {.addr=0x592f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_005A) {
    const struct CPU_State initial_cpu = {.pc=0xe76a, .a=0x5f, .x=0xea, .y=0xfa, .sp=0x54, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe76a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe76b, .a=0xf9, .x=0xea, .y=0xfa, .sp=0x54, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe76a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe76a, .value=0xbe, .type=IO_READ},
        {.addr=0xe76b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_005B) {
    const struct CPU_State initial_cpu = {.pc=0x683b, .a=0x46, .x=0x8a, .y=0x94, .sp=0x8a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x683b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x683c, .a=0xe6, .x=0x8a, .y=0x94, .sp=0x8a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x683b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x683b, .value=0xbe, .type=IO_READ},
        {.addr=0x683c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_005C) {
    const struct CPU_State initial_cpu = {.pc=0x629b, .a=0x19, .x=0x39, .y=0xa2, .sp=0x47, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x629b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x629c, .a=0xb3, .x=0x39, .y=0xa2, .sp=0x47, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x629b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x629b, .value=0xbe, .type=IO_READ},
        {.addr=0x629c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_005D) {
    const struct CPU_State initial_cpu = {.pc=0x219f, .a=0xb3, .x=0xea, .y=0xf8, .sp=0xb5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x219f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x21a0, .a=0x53, .x=0xea, .y=0xf8, .sp=0xb5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x219f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x219f, .value=0xbe, .type=IO_READ},
        {.addr=0x21a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_005E) {
    const struct CPU_State initial_cpu = {.pc=0x5f0e, .a=0xad, .x=0x6d, .y=0x4c, .sp=0xb4, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5f0f, .a=0x47, .x=0x6d, .y=0x4c, .sp=0xb4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5f0e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5f0e, .value=0xbe, .type=IO_READ},
        {.addr=0x5f0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_005F) {
    const struct CPU_State initial_cpu = {.pc=0xec00, .a=0x8a, .x=0x07, .y=0x1d, .sp=0xee, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xec00, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xec01, .a=0x84, .x=0x07, .y=0x1d, .sp=0xee, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xec00, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xec00, .value=0xbe, .type=IO_READ},
        {.addr=0xec01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0060) {
    const struct CPU_State initial_cpu = {.pc=0x4fc7, .a=0xcb, .x=0x1a, .y=0xa9, .sp=0x15, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4fc8, .a=0x65, .x=0x1a, .y=0xa9, .sp=0x15, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4fc7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4fc7, .value=0xbe, .type=IO_READ},
        {.addr=0x4fc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0061) {
    const struct CPU_State initial_cpu = {.pc=0xfb6e, .a=0x02, .x=0x69, .y=0x27, .sp=0x34, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfb6f, .a=0xa2, .x=0x69, .y=0x27, .sp=0x34, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xfb6e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfb6e, .value=0xbe, .type=IO_READ},
        {.addr=0xfb6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0062) {
    const struct CPU_State initial_cpu = {.pc=0x4446, .a=0xb7, .x=0x86, .y=0xa0, .sp=0xe2, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x4446, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4447, .a=0x57, .x=0x86, .y=0xa0, .sp=0xe2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x4446, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4446, .value=0xbe, .type=IO_READ},
        {.addr=0x4447, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0063) {
    const struct CPU_State initial_cpu = {.pc=0xc948, .a=0x5a, .x=0x50, .y=0xa0, .sp=0x70, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc948, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc949, .a=0x54, .x=0x50, .y=0xa0, .sp=0x70, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc948, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc948, .value=0xbe, .type=IO_READ},
        {.addr=0xc949, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0064) {
    const struct CPU_State initial_cpu = {.pc=0x9f98, .a=0xf8, .x=0xa8, .y=0xc2, .sp=0x53, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9f98, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9f99, .a=0x92, .x=0xa8, .y=0xc2, .sp=0x53, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9f98, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9f98, .value=0xbe, .type=IO_READ},
        {.addr=0x9f99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0065) {
    const struct CPU_State initial_cpu = {.pc=0x930b, .a=0x3c, .x=0x90, .y=0xa8, .sp=0x81, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x930b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x930c, .a=0xd6, .x=0x90, .y=0xa8, .sp=0x81, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x930b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x930b, .value=0xbe, .type=IO_READ},
        {.addr=0x930c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0066) {
    const struct CPU_State initial_cpu = {.pc=0xc25d, .a=0xf4, .x=0xe7, .y=0xe0, .sp=0x1b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xc25d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc25e, .a=0x94, .x=0xe7, .y=0xe0, .sp=0x1b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc25d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc25d, .value=0xbe, .type=IO_READ},
        {.addr=0xc25e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0067) {
    const struct CPU_State initial_cpu = {.pc=0xb852, .a=0x1f, .x=0x86, .y=0x21, .sp=0xe6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xb852, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb853, .a=0xb9, .x=0x86, .y=0x21, .sp=0xe6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb852, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb852, .value=0xbe, .type=IO_READ},
        {.addr=0xb853, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0068) {
    const struct CPU_State initial_cpu = {.pc=0xbfdb, .a=0x74, .x=0xb6, .y=0x0f, .sp=0x41, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xbfdb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbfdc, .a=0x14, .x=0xb6, .y=0x0f, .sp=0x41, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbfdb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbfdb, .value=0xbe, .type=IO_READ},
        {.addr=0xbfdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0069) {
    const struct CPU_State initial_cpu = {.pc=0xa8a3, .a=0x52, .x=0x67, .y=0xfc, .sp=0x42, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa8a4, .a=0xf2, .x=0x67, .y=0xfc, .sp=0x42, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa8a3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa8a3, .value=0xbe, .type=IO_READ},
        {.addr=0xa8a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_006A) {
    const struct CPU_State initial_cpu = {.pc=0xb8b1, .a=0xd9, .x=0xb6, .y=0x16, .sp=0x7d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb8b2, .a=0x79, .x=0xb6, .y=0x16, .sp=0x7d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb8b1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb8b1, .value=0xbe, .type=IO_READ},
        {.addr=0xb8b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_006B) {
    const struct CPU_State initial_cpu = {.pc=0xf65c, .a=0xfb, .x=0xe0, .y=0x8c, .sp=0x01, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf65c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf65d, .a=0x95, .x=0xe0, .y=0x8c, .sp=0x01, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf65c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf65c, .value=0xbe, .type=IO_READ},
        {.addr=0xf65d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_006C) {
    const struct CPU_State initial_cpu = {.pc=0x1521, .a=0x0d, .x=0x0f, .y=0x92, .sp=0xac, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1521, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1522, .a=0xa7, .x=0x0f, .y=0x92, .sp=0xac, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1521, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1521, .value=0xbe, .type=IO_READ},
        {.addr=0x1522, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_006D) {
    const struct CPU_State initial_cpu = {.pc=0xe468, .a=0xaa, .x=0xc7, .y=0xed, .sp=0x6a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe468, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe469, .a=0x44, .x=0xc7, .y=0xed, .sp=0x6a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe468, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe468, .value=0xbe, .type=IO_READ},
        {.addr=0xe469, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_006E) {
    const struct CPU_State initial_cpu = {.pc=0xf87e, .a=0x18, .x=0x05, .y=0xee, .sp=0xed, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xf87e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf87f, .a=0xb2, .x=0x05, .y=0xee, .sp=0xed, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf87e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf87e, .value=0xbe, .type=IO_READ},
        {.addr=0xf87f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb762, .a=0x96, .x=0x52, .y=0xb7, .sp=0x31, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb762, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb763, .a=0x96, .x=0x52, .y=0xb7, .sp=0x31, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb762, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb762, .value=0xbe, .type=IO_READ},
        {.addr=0xb763, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0070) {
    const struct CPU_State initial_cpu = {.pc=0xac3f, .a=0x19, .x=0xbf, .y=0xf7, .sp=0x41, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xac3f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xac40, .a=0xb3, .x=0xbf, .y=0xf7, .sp=0x41, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xac3f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xac3f, .value=0xbe, .type=IO_READ},
        {.addr=0xac40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0071) {
    const struct CPU_State initial_cpu = {.pc=0xa347, .a=0x64, .x=0xc5, .y=0x7b, .sp=0x03, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa347, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa348, .a=0xfe, .x=0xc5, .y=0x7b, .sp=0x03, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa347, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa347, .value=0xbe, .type=IO_READ},
        {.addr=0xa348, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0072) {
    const struct CPU_State initial_cpu = {.pc=0xd38e, .a=0x0a, .x=0x25, .y=0x96, .sp=0xb6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd38e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd38f, .a=0x04, .x=0x25, .y=0x96, .sp=0xb6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd38e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd38e, .value=0xbe, .type=IO_READ},
        {.addr=0xd38f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0073) {
    const struct CPU_State initial_cpu = {.pc=0x2e0c, .a=0xe3, .x=0xcc, .y=0x87, .sp=0x31, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2e0c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2e0d, .a=0x83, .x=0xcc, .y=0x87, .sp=0x31, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2e0c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2e0c, .value=0xbe, .type=IO_READ},
        {.addr=0x2e0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0074) {
    const struct CPU_State initial_cpu = {.pc=0xc7e0, .a=0xb1, .x=0x53, .y=0x37, .sp=0xb4, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc7e1, .a=0x51, .x=0x53, .y=0x37, .sp=0xb4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc7e0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc7e0, .value=0xbe, .type=IO_READ},
        {.addr=0xc7e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0075) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0x64, .x=0x30, .y=0x14, .sp=0x58, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0747, .a=0x04, .x=0x30, .y=0x14, .sp=0x58, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0xbe, .type=IO_READ},
        {.addr=0x0747, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0076) {
    const struct CPU_State initial_cpu = {.pc=0xb7f2, .a=0xe3, .x=0xe2, .y=0x36, .sp=0x5c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb7f3, .a=0x83, .x=0xe2, .y=0x36, .sp=0x5c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb7f2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb7f2, .value=0xbe, .type=IO_READ},
        {.addr=0xb7f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0077) {
    const struct CPU_State initial_cpu = {.pc=0xfd29, .a=0xe7, .x=0x46, .y=0x7e, .sp=0x12, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xfd29, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfd2a, .a=0x81, .x=0x46, .y=0x7e, .sp=0x12, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xfd29, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfd29, .value=0xbe, .type=IO_READ},
        {.addr=0xfd2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0078) {
    const struct CPU_State initial_cpu = {.pc=0x66b8, .a=0x26, .x=0x65, .y=0xf1, .sp=0x95, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x66b8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x66b9, .a=0x20, .x=0x65, .y=0xf1, .sp=0x95, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x66b8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x66b8, .value=0xbe, .type=IO_READ},
        {.addr=0x66b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf565, .a=0xfa, .x=0x69, .y=0x67, .sp=0x1f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xf565, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf566, .a=0x94, .x=0x69, .y=0x67, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf565, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf565, .value=0xbe, .type=IO_READ},
        {.addr=0xf566, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_007A) {
    const struct CPU_State initial_cpu = {.pc=0x74f7, .a=0x1d, .x=0x39, .y=0xe3, .sp=0xfc, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x74f7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x74f8, .a=0xb7, .x=0x39, .y=0xe3, .sp=0xfc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x74f7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x74f7, .value=0xbe, .type=IO_READ},
        {.addr=0x74f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc6c3, .a=0xef, .x=0xec, .y=0x44, .sp=0xb5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc6c3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc6c4, .a=0x89, .x=0xec, .y=0x44, .sp=0xb5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc6c3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc6c3, .value=0xbe, .type=IO_READ},
        {.addr=0xc6c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_007C) {
    const struct CPU_State initial_cpu = {.pc=0x9c05, .a=0x40, .x=0xba, .y=0x03, .sp=0x6f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x9c05, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9c06, .a=0xda, .x=0xba, .y=0x03, .sp=0x6f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9c05, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9c05, .value=0xbe, .type=IO_READ},
        {.addr=0x9c06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_007D) {
    const struct CPU_State initial_cpu = {.pc=0xd5c2, .a=0x96, .x=0xa3, .y=0x99, .sp=0x36, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd5c3, .a=0x30, .x=0xa3, .y=0x99, .sp=0x36, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd5c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd5c2, .value=0xbe, .type=IO_READ},
        {.addr=0xd5c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_007E) {
    const struct CPU_State initial_cpu = {.pc=0x0ac1, .a=0xe5, .x=0xb9, .y=0x7b, .sp=0x3b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0ac2, .a=0x85, .x=0xb9, .y=0x7b, .sp=0x3b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0ac1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0ac1, .value=0xbe, .type=IO_READ},
        {.addr=0x0ac2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_007F) {
    const struct CPU_State initial_cpu = {.pc=0xc817, .a=0x4c, .x=0x41, .y=0x06, .sp=0x38, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc817, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc818, .a=0xe6, .x=0x41, .y=0x06, .sp=0x38, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc817, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc817, .value=0xbe, .type=IO_READ},
        {.addr=0xc818, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0080) {
    const struct CPU_State initial_cpu = {.pc=0x2a17, .a=0x9b, .x=0x98, .y=0xdc, .sp=0x51, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2a17, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2a18, .a=0x35, .x=0x98, .y=0xdc, .sp=0x51, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2a17, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2a17, .value=0xbe, .type=IO_READ},
        {.addr=0x2a18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0081) {
    const struct CPU_State initial_cpu = {.pc=0xb13d, .a=0x3d, .x=0x25, .y=0x17, .sp=0x57, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb13d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb13e, .a=0x37, .x=0x25, .y=0x17, .sp=0x57, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb13d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb13d, .value=0xbe, .type=IO_READ},
        {.addr=0xb13e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0082) {
    const struct CPU_State initial_cpu = {.pc=0xaa89, .a=0xea, .x=0x48, .y=0xc5, .sp=0xc4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa89, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaa8a, .a=0x84, .x=0x48, .y=0xc5, .sp=0xc4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xaa89, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaa89, .value=0xbe, .type=IO_READ},
        {.addr=0xaa8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0083) {
    const struct CPU_State initial_cpu = {.pc=0x9a32, .a=0x62, .x=0x45, .y=0xd1, .sp=0x80, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a32, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9a33, .a=0x02, .x=0x45, .y=0xd1, .sp=0x80, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9a32, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9a32, .value=0xbe, .type=IO_READ},
        {.addr=0x9a33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0084) {
    const struct CPU_State initial_cpu = {.pc=0x30cf, .a=0x9f, .x=0x7d, .y=0xf1, .sp=0x52, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x30cf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x30d0, .a=0x39, .x=0x7d, .y=0xf1, .sp=0x52, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x30cf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x30cf, .value=0xbe, .type=IO_READ},
        {.addr=0x30d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0085) {
    const struct CPU_State initial_cpu = {.pc=0xafdc, .a=0xc3, .x=0xae, .y=0xab, .sp=0xf9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xafdc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xafdd, .a=0x63, .x=0xae, .y=0xab, .sp=0xf9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xafdc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xafdc, .value=0xbe, .type=IO_READ},
        {.addr=0xafdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9ec5, .a=0x18, .x=0x2a, .y=0xcc, .sp=0xd6, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9ec6, .a=0xb2, .x=0x2a, .y=0xcc, .sp=0xd6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9ec5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9ec5, .value=0xbe, .type=IO_READ},
        {.addr=0x9ec6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0087) {
    const struct CPU_State initial_cpu = {.pc=0x85ba, .a=0x1b, .x=0x2a, .y=0xd0, .sp=0x35, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x85ba, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x85bb, .a=0xb5, .x=0x2a, .y=0xd0, .sp=0x35, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x85ba, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x85ba, .value=0xbe, .type=IO_READ},
        {.addr=0x85bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0088) {
    const struct CPU_State initial_cpu = {.pc=0xf8a3, .a=0x1b, .x=0xd3, .y=0xb0, .sp=0xc4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf8a4, .a=0xb5, .x=0xd3, .y=0xb0, .sp=0xc4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf8a3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf8a3, .value=0xbe, .type=IO_READ},
        {.addr=0xf8a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0089) {
    const struct CPU_State initial_cpu = {.pc=0xb759, .a=0x62, .x=0x6f, .y=0x19, .sp=0xaa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb759, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb75a, .a=0xfc, .x=0x6f, .y=0x19, .sp=0xaa, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb759, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb759, .value=0xbe, .type=IO_READ},
        {.addr=0xb75a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_008A) {
    const struct CPU_State initial_cpu = {.pc=0xc4d9, .a=0x0e, .x=0xf9, .y=0x03, .sp=0x9e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc4da, .a=0x08, .x=0xf9, .y=0x03, .sp=0x9e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc4d9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc4d9, .value=0xbe, .type=IO_READ},
        {.addr=0xc4da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_008B) {
    const struct CPU_State initial_cpu = {.pc=0x641f, .a=0x41, .x=0x10, .y=0x54, .sp=0xd7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x641f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6420, .a=0x41, .x=0x10, .y=0x54, .sp=0xd7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x641f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x641f, .value=0xbe, .type=IO_READ},
        {.addr=0x6420, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_008C) {
    const struct CPU_State initial_cpu = {.pc=0xfed5, .a=0xa2, .x=0x95, .y=0xea, .sp=0x4c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xfed5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfed6, .a=0x42, .x=0x95, .y=0xea, .sp=0x4c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xfed5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfed5, .value=0xbe, .type=IO_READ},
        {.addr=0xfed6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_008D) {
    const struct CPU_State initial_cpu = {.pc=0x1681, .a=0x93, .x=0x60, .y=0xcd, .sp=0x9f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1681, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1682, .a=0x2d, .x=0x60, .y=0xcd, .sp=0x9f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1681, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1681, .value=0xbe, .type=IO_READ},
        {.addr=0x1682, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_008E) {
    const struct CPU_State initial_cpu = {.pc=0x707f, .a=0x3a, .x=0x38, .y=0xb1, .sp=0x2f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x707f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7080, .a=0x34, .x=0x38, .y=0xb1, .sp=0x2f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x707f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x707f, .value=0xbe, .type=IO_READ},
        {.addr=0x7080, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_008F) {
    const struct CPU_State initial_cpu = {.pc=0xcfb9, .a=0xba, .x=0xa3, .y=0x09, .sp=0x3f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcfba, .a=0x54, .x=0xa3, .y=0x09, .sp=0x3f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xcfb9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcfb9, .value=0xbe, .type=IO_READ},
        {.addr=0xcfba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0090) {
    const struct CPU_State initial_cpu = {.pc=0xf40e, .a=0x15, .x=0xd6, .y=0x28, .sp=0x05, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf40e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf40f, .a=0xaf, .x=0xd6, .y=0x28, .sp=0x05, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf40e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf40e, .value=0xbe, .type=IO_READ},
        {.addr=0xf40f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0091) {
    const struct CPU_State initial_cpu = {.pc=0x9927, .a=0xf4, .x=0xd9, .y=0x33, .sp=0x1d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9927, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9928, .a=0x94, .x=0xd9, .y=0x33, .sp=0x1d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9927, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9927, .value=0xbe, .type=IO_READ},
        {.addr=0x9928, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0092) {
    const struct CPU_State initial_cpu = {.pc=0x2ff1, .a=0x9d, .x=0x71, .y=0x7b, .sp=0x55, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2ff2, .a=0x37, .x=0x71, .y=0x7b, .sp=0x55, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x2ff1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2ff1, .value=0xbe, .type=IO_READ},
        {.addr=0x2ff2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0093) {
    const struct CPU_State initial_cpu = {.pc=0xdcd7, .a=0x1b, .x=0x9b, .y=0xa8, .sp=0x85, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xdcd7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdcd8, .a=0xb5, .x=0x9b, .y=0xa8, .sp=0x85, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdcd7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdcd7, .value=0xbe, .type=IO_READ},
        {.addr=0xdcd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0094) {
    const struct CPU_State initial_cpu = {.pc=0xeab5, .a=0xe5, .x=0x2b, .y=0xdd, .sp=0xd6, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xeab5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeab6, .a=0x7f, .x=0x2b, .y=0xdd, .sp=0xd6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xeab5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeab5, .value=0xbe, .type=IO_READ},
        {.addr=0xeab6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0095) {
    const struct CPU_State initial_cpu = {.pc=0x6bc1, .a=0x15, .x=0x55, .y=0xe0, .sp=0x77, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6bc2, .a=0xaf, .x=0x55, .y=0xe0, .sp=0x77, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6bc1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6bc1, .value=0xbe, .type=IO_READ},
        {.addr=0x6bc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0096) {
    const struct CPU_State initial_cpu = {.pc=0xf099, .a=0x03, .x=0x08, .y=0x4e, .sp=0x4b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf099, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf09a, .a=0xfd, .x=0x08, .y=0x4e, .sp=0x4b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf099, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf099, .value=0xbe, .type=IO_READ},
        {.addr=0xf09a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0097) {
    const struct CPU_State initial_cpu = {.pc=0x137c, .a=0xef, .x=0xe7, .y=0xfa, .sp=0x30, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x137c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x137d, .a=0x89, .x=0xe7, .y=0xfa, .sp=0x30, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x137c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x137c, .value=0xbe, .type=IO_READ},
        {.addr=0x137d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0098) {
    const struct CPU_State initial_cpu = {.pc=0x3440, .a=0xb7, .x=0x51, .y=0x8a, .sp=0x0a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x3440, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3441, .a=0x51, .x=0x51, .y=0x8a, .sp=0x0a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3440, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3440, .value=0xbe, .type=IO_READ},
        {.addr=0x3441, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0099) {
    const struct CPU_State initial_cpu = {.pc=0x2df6, .a=0xbb, .x=0x95, .y=0xd8, .sp=0xc1, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2df6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2df7, .a=0x55, .x=0x95, .y=0xd8, .sp=0xc1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2df6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2df6, .value=0xbe, .type=IO_READ},
        {.addr=0x2df7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_009A) {
    const struct CPU_State initial_cpu = {.pc=0xd89a, .a=0x32, .x=0x40, .y=0x72, .sp=0x3e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xd89a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd89b, .a=0xd2, .x=0x40, .y=0x72, .sp=0x3e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd89a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd89a, .value=0xbe, .type=IO_READ},
        {.addr=0xd89b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_009B) {
    const struct CPU_State initial_cpu = {.pc=0x3c7f, .a=0xfa, .x=0x71, .y=0x37, .sp=0x16, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3c7f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3c80, .a=0x94, .x=0x71, .y=0x37, .sp=0x16, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3c7f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3c7f, .value=0xbe, .type=IO_READ},
        {.addr=0x3c80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_009C) {
    const struct CPU_State initial_cpu = {.pc=0x171c, .a=0xc0, .x=0x8b, .y=0xc9, .sp=0xf4, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x171c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x171d, .a=0x60, .x=0x8b, .y=0xc9, .sp=0xf4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x171c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x171c, .value=0xbe, .type=IO_READ},
        {.addr=0x171d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_009D) {
    const struct CPU_State initial_cpu = {.pc=0x2628, .a=0xf6, .x=0xe5, .y=0x0e, .sp=0x90, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2628, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2629, .a=0x96, .x=0xe5, .y=0x0e, .sp=0x90, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2628, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2628, .value=0xbe, .type=IO_READ},
        {.addr=0x2629, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_009E) {
    const struct CPU_State initial_cpu = {.pc=0x3174, .a=0x54, .x=0x81, .y=0xea, .sp=0xa2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3174, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3175, .a=0x54, .x=0x81, .y=0xea, .sp=0xa2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3174, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3174, .value=0xbe, .type=IO_READ},
        {.addr=0x3175, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_009F) {
    const struct CPU_State initial_cpu = {.pc=0x5fde, .a=0xe0, .x=0x62, .y=0xde, .sp=0x4b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x5fde, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5fdf, .a=0x7a, .x=0x62, .y=0xde, .sp=0x4b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5fde, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5fde, .value=0xbe, .type=IO_READ},
        {.addr=0x5fdf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xb345, .a=0x17, .x=0x34, .y=0x32, .sp=0xb5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb345, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb346, .a=0xb7, .x=0x34, .y=0x32, .sp=0xb5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb345, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb345, .value=0xbe, .type=IO_READ},
        {.addr=0xb346, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x79c2, .a=0xd5, .x=0x06, .y=0x7a, .sp=0xd2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x79c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x79c3, .a=0x6f, .x=0x06, .y=0x7a, .sp=0xd2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x79c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x79c2, .value=0xbe, .type=IO_READ},
        {.addr=0x79c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xdf08, .a=0xc3, .x=0xe5, .y=0x3f, .sp=0x34, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdf08, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdf09, .a=0x5d, .x=0xe5, .y=0x3f, .sp=0x34, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xdf08, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdf08, .value=0xbe, .type=IO_READ},
        {.addr=0xdf09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x50bc, .a=0xe4, .x=0xaf, .y=0xf0, .sp=0x14, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x50bc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x50bd, .a=0x84, .x=0xaf, .y=0xf0, .sp=0x14, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x50bc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x50bc, .value=0xbe, .type=IO_READ},
        {.addr=0x50bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xeffb, .a=0x7e, .x=0x2b, .y=0x05, .sp=0xca, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xeffb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeffc, .a=0x78, .x=0x2b, .y=0x05, .sp=0xca, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xeffb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeffb, .value=0xbe, .type=IO_READ},
        {.addr=0xeffc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x6030, .a=0x37, .x=0xe4, .y=0xf1, .sp=0x6c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6030, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6031, .a=0xd7, .x=0xe4, .y=0xf1, .sp=0x6c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6030, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6030, .value=0xbe, .type=IO_READ},
        {.addr=0x6031, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x000f, .a=0xa6, .x=0x3b, .y=0x26, .sp=0x00, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0010, .a=0x46, .x=0x3b, .y=0x26, .sp=0x00, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x000f, .value=0xbe, .type=IO_READ},
        {.addr=0x0010, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x8496, .a=0xa9, .x=0xd4, .y=0x81, .sp=0xbb, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8496, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8497, .a=0x43, .x=0xd4, .y=0x81, .sp=0xbb, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8496, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8496, .value=0xbe, .type=IO_READ},
        {.addr=0x8497, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xd8c8, .a=0x6e, .x=0x79, .y=0x35, .sp=0xb7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd8c9, .a=0x68, .x=0x79, .y=0x35, .sp=0xb7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd8c8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd8c8, .value=0xbe, .type=IO_READ},
        {.addr=0xd8c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xc6df, .a=0x46, .x=0xeb, .y=0x21, .sp=0x7f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc6df, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc6e0, .a=0x46, .x=0xeb, .y=0x21, .sp=0x7f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xc6df, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc6df, .value=0xbe, .type=IO_READ},
        {.addr=0xc6e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x0c8f, .a=0xba, .x=0x10, .y=0x04, .sp=0x4d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0c8f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0c90, .a=0x54, .x=0x10, .y=0x04, .sp=0x4d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0c8f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0c8f, .value=0xbe, .type=IO_READ},
        {.addr=0x0c90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x2bb1, .a=0x4e, .x=0xb7, .y=0x8b, .sp=0xc0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2bb1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2bb2, .a=0xe8, .x=0xb7, .y=0x8b, .sp=0xc0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2bb1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2bb1, .value=0xbe, .type=IO_READ},
        {.addr=0x2bb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x3215, .a=0x6a, .x=0xaf, .y=0x90, .sp=0x14, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3215, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3216, .a=0x04, .x=0xaf, .y=0x90, .sp=0x14, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3215, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3215, .value=0xbe, .type=IO_READ},
        {.addr=0x3216, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xd254, .a=0x45, .x=0x52, .y=0x57, .sp=0xd4, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd254, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd255, .a=0x45, .x=0x52, .y=0x57, .sp=0xd4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd254, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd254, .value=0xbe, .type=IO_READ},
        {.addr=0xd255, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x06fa, .a=0x40, .x=0x13, .y=0xf2, .sp=0x25, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x06fa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x06fb, .a=0xe0, .x=0x13, .y=0xf2, .sp=0x25, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x06fa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x06fa, .value=0xbe, .type=IO_READ},
        {.addr=0x06fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xe00b, .a=0x5b, .x=0xdf, .y=0x6c, .sp=0x7a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xe00b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe00c, .a=0xf5, .x=0xdf, .y=0x6c, .sp=0x7a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe00b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe00b, .value=0xbe, .type=IO_READ},
        {.addr=0xe00c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x3145, .a=0xe2, .x=0x6d, .y=0x14, .sp=0x9b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3145, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3146, .a=0x82, .x=0x6d, .y=0x14, .sp=0x9b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3145, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3145, .value=0xbe, .type=IO_READ},
        {.addr=0x3146, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xc19f, .a=0xc7, .x=0x57, .y=0x3a, .sp=0x8b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc19f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc1a0, .a=0x67, .x=0x57, .y=0x3a, .sp=0x8b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc19f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc19f, .value=0xbe, .type=IO_READ},
        {.addr=0xc1a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x958d, .a=0x0f, .x=0x84, .y=0xc2, .sp=0xc0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x958d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x958e, .a=0xa9, .x=0x84, .y=0xc2, .sp=0xc0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x958d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x958d, .value=0xbe, .type=IO_READ},
        {.addr=0x958e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0xae, .x=0xd4, .y=0xe9, .sp=0x5a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6e40, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6e41, .a=0x48, .x=0xd4, .y=0xe9, .sp=0x5a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6e40, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0xbe, .type=IO_READ},
        {.addr=0x6e41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x37da, .a=0xca, .x=0x86, .y=0xbf, .sp=0xb7, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x37da, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x37db, .a=0x64, .x=0x86, .y=0xbf, .sp=0xb7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x37da, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x37da, .value=0xbe, .type=IO_READ},
        {.addr=0x37db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x0776, .a=0x25, .x=0xae, .y=0x72, .sp=0x17, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0776, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0777, .a=0xbf, .x=0xae, .y=0x72, .sp=0x17, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0776, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0776, .value=0xbe, .type=IO_READ},
        {.addr=0x0777, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xb4b9, .a=0x86, .x=0x30, .y=0x82, .sp=0x53, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb4ba, .a=0x20, .x=0x30, .y=0x82, .sp=0x53, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb4b9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb4b9, .value=0xbe, .type=IO_READ},
        {.addr=0xb4ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xa9a4, .a=0x1d, .x=0x1a, .y=0x8c, .sp=0x49, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa9a5, .a=0xb7, .x=0x1a, .y=0x8c, .sp=0x49, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa9a4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa9a4, .value=0xbe, .type=IO_READ},
        {.addr=0xa9a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xa7a3, .a=0xcb, .x=0xaa, .y=0x62, .sp=0x80, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xa7a3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa7a4, .a=0x65, .x=0xaa, .y=0x62, .sp=0x80, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa7a3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa7a3, .value=0xbe, .type=IO_READ},
        {.addr=0xa7a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x91e9, .a=0xde, .x=0x78, .y=0x75, .sp=0x82, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x91e9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x91ea, .a=0x78, .x=0x78, .y=0x75, .sp=0x82, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x91e9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x91e9, .value=0xbe, .type=IO_READ},
        {.addr=0x91ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xc25c, .a=0xb0, .x=0x4e, .y=0x39, .sp=0x8b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc25c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc25d, .a=0x4a, .x=0x4e, .y=0x39, .sp=0x8b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc25c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc25c, .value=0xbe, .type=IO_READ},
        {.addr=0xc25d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xd6df, .a=0x84, .x=0x0a, .y=0xc7, .sp=0x61, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd6df, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd6e0, .a=0x84, .x=0x0a, .y=0xc7, .sp=0x61, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd6df, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd6df, .value=0xbe, .type=IO_READ},
        {.addr=0xd6e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x0769, .a=0xab, .x=0xb7, .y=0x44, .sp=0x84, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0769, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x076a, .a=0x45, .x=0xb7, .y=0x44, .sp=0x84, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0769, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0769, .value=0xbe, .type=IO_READ},
        {.addr=0x076a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x8f09, .a=0x86, .x=0x2f, .y=0x37, .sp=0x19, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x8f09, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8f0a, .a=0x86, .x=0x2f, .y=0x37, .sp=0x19, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8f09, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8f09, .value=0xbe, .type=IO_READ},
        {.addr=0x8f0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xb135, .a=0xa0, .x=0xae, .y=0x44, .sp=0xc5, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xb135, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb136, .a=0x3a, .x=0xae, .y=0x44, .sp=0xc5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb135, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb135, .value=0xbe, .type=IO_READ},
        {.addr=0xb136, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xddb3, .a=0x68, .x=0x87, .y=0x09, .sp=0xc0, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xddb3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xddb4, .a=0x62, .x=0x87, .y=0x09, .sp=0xc0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xddb3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xddb3, .value=0xbe, .type=IO_READ},
        {.addr=0xddb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x5d24, .a=0x31, .x=0xa8, .y=0x17, .sp=0x17, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5d24, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5d25, .a=0xcb, .x=0xa8, .y=0x17, .sp=0x17, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5d24, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5d24, .value=0xbe, .type=IO_READ},
        {.addr=0x5d25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xd14d, .a=0x9e, .x=0x29, .y=0xdd, .sp=0x6d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd14d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd14e, .a=0x38, .x=0x29, .y=0xdd, .sp=0x6d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd14d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd14d, .value=0xbe, .type=IO_READ},
        {.addr=0xd14e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xcdee, .a=0x07, .x=0xb6, .y=0xbe, .sp=0xee, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xcdee, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcdef, .a=0x07, .x=0xb6, .y=0xbe, .sp=0xee, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xcdee, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcdee, .value=0xbe, .type=IO_READ},
        {.addr=0xcdef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xb4f6, .a=0x89, .x=0xb6, .y=0x74, .sp=0x32, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb4f7, .a=0x83, .x=0xb6, .y=0x74, .sp=0x32, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb4f6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb4f6, .value=0xbe, .type=IO_READ},
        {.addr=0xb4f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x937b, .a=0x09, .x=0x74, .y=0x10, .sp=0xd0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x937b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x937c, .a=0x03, .x=0x74, .y=0x10, .sp=0xd0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x937b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x937b, .value=0xbe, .type=IO_READ},
        {.addr=0x937c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x898f, .a=0x1b, .x=0x70, .y=0x61, .sp=0xa6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x898f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8990, .a=0xb5, .x=0x70, .y=0x61, .sp=0xa6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x898f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x898f, .value=0xbe, .type=IO_READ},
        {.addr=0x8990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x467d, .a=0xee, .x=0x3e, .y=0xdc, .sp=0x50, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x467d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x467e, .a=0x88, .x=0x3e, .y=0xdc, .sp=0x50, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x467d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x467d, .value=0xbe, .type=IO_READ},
        {.addr=0x467e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xae22, .a=0x11, .x=0x1f, .y=0x65, .sp=0x47, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xae22, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xae23, .a=0x0b, .x=0x1f, .y=0x65, .sp=0x47, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xae22, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xae22, .value=0xbe, .type=IO_READ},
        {.addr=0xae23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x34a2, .a=0x9e, .x=0xe4, .y=0x0c, .sp=0x49, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x34a2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x34a3, .a=0x38, .x=0xe4, .y=0x0c, .sp=0x49, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x34a2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x34a2, .value=0xbe, .type=IO_READ},
        {.addr=0x34a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa0aa, .a=0x19, .x=0x1f, .y=0xd9, .sp=0x96, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa0aa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa0ab, .a=0x13, .x=0x1f, .y=0xd9, .sp=0x96, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa0aa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa0aa, .value=0xbe, .type=IO_READ},
        {.addr=0xa0ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xe0f6, .a=0x35, .x=0x4a, .y=0x14, .sp=0xee, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe0f7, .a=0xd5, .x=0x4a, .y=0x14, .sp=0xee, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe0f6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe0f6, .value=0xbe, .type=IO_READ},
        {.addr=0xe0f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xe2d4, .a=0x75, .x=0xc4, .y=0x90, .sp=0x60, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe2d5, .a=0x0f, .x=0xc4, .y=0x90, .sp=0x60, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe2d4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe2d4, .value=0xbe, .type=IO_READ},
        {.addr=0xe2d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2546, .a=0xb2, .x=0x6d, .y=0xb2, .sp=0xb7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2546, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2547, .a=0x52, .x=0x6d, .y=0xb2, .sp=0xb7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2546, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2546, .value=0xbe, .type=IO_READ},
        {.addr=0x2547, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9e06, .a=0xf3, .x=0x16, .y=0x3e, .sp=0xc8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9e06, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9e07, .a=0x8d, .x=0x16, .y=0x3e, .sp=0xc8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9e06, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9e06, .value=0xbe, .type=IO_READ},
        {.addr=0x9e07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xf91c, .a=0x54, .x=0xd5, .y=0x7f, .sp=0xa8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf91c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf91d, .a=0xee, .x=0xd5, .y=0x7f, .sp=0xa8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf91c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf91c, .value=0xbe, .type=IO_READ},
        {.addr=0xf91d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xcb6f, .a=0x35, .x=0xfd, .y=0x7e, .sp=0xcd, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xcb6f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcb70, .a=0xcf, .x=0xfd, .y=0x7e, .sp=0xcd, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcb6f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcb6f, .value=0xbe, .type=IO_READ},
        {.addr=0xcb70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xed7f, .a=0x94, .x=0x64, .y=0x6e, .sp=0xda, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xed7f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xed80, .a=0x94, .x=0x64, .y=0x6e, .sp=0xda, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xed7f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xed7f, .value=0xbe, .type=IO_READ},
        {.addr=0xed80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x0ad0, .a=0x2e, .x=0xed, .y=0x5d, .sp=0x60, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0ad1, .a=0xc8, .x=0xed, .y=0x5d, .sp=0x60, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0ad0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0ad0, .value=0xbe, .type=IO_READ},
        {.addr=0x0ad1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x7644, .a=0xa0, .x=0x83, .y=0x0a, .sp=0x70, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7644, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7645, .a=0x3a, .x=0x83, .y=0x0a, .sp=0x70, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7644, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7644, .value=0xbe, .type=IO_READ},
        {.addr=0x7645, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x5799, .a=0x4e, .x=0x1a, .y=0x06, .sp=0x93, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5799, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x579a, .a=0xe8, .x=0x1a, .y=0x06, .sp=0x93, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5799, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5799, .value=0xbe, .type=IO_READ},
        {.addr=0x579a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xa125, .a=0x6f, .x=0x61, .y=0x8e, .sp=0xf1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa125, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa126, .a=0x69, .x=0x61, .y=0x8e, .sp=0xf1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa125, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa125, .value=0xbe, .type=IO_READ},
        {.addr=0xa126, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x50b7, .a=0x6a, .x=0x2b, .y=0x77, .sp=0xfb, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x50b7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x50b8, .a=0x04, .x=0x2b, .y=0x77, .sp=0xfb, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x50b7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x50b7, .value=0xbe, .type=IO_READ},
        {.addr=0x50b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xf445, .a=0x16, .x=0xcc, .y=0xca, .sp=0xac, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xf445, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf446, .a=0x16, .x=0xcc, .y=0xca, .sp=0xac, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf445, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf445, .value=0xbe, .type=IO_READ},
        {.addr=0xf446, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x43da, .a=0xb0, .x=0xa3, .y=0xc8, .sp=0x4e, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x43da, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x43db, .a=0x50, .x=0xa3, .y=0xc8, .sp=0x4e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x43da, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x43da, .value=0xbe, .type=IO_READ},
        {.addr=0x43db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa01e, .a=0x80, .x=0x78, .y=0x2d, .sp=0x4a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa01e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa01f, .a=0x7a, .x=0x78, .y=0x2d, .sp=0x4a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa01e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa01e, .value=0xbe, .type=IO_READ},
        {.addr=0xa01f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xdc89, .a=0xdd, .x=0x1b, .y=0x61, .sp=0x36, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xdc89, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdc8a, .a=0x77, .x=0x1b, .y=0x61, .sp=0x36, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xdc89, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdc89, .value=0xbe, .type=IO_READ},
        {.addr=0xdc8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x2d7a, .a=0xb1, .x=0x30, .y=0x56, .sp=0x33, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x2d7a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2d7b, .a=0x4b, .x=0x30, .y=0x56, .sp=0x33, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2d7a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2d7a, .value=0xbe, .type=IO_READ},
        {.addr=0x2d7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb227, .a=0x4e, .x=0x51, .y=0x0d, .sp=0xe8, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xb227, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb228, .a=0xe8, .x=0x51, .y=0x0d, .sp=0xe8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb227, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb227, .value=0xbe, .type=IO_READ},
        {.addr=0xb228, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x5213, .a=0xaa, .x=0x7f, .y=0x67, .sp=0x60, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5213, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5214, .a=0x44, .x=0x7f, .y=0x67, .sp=0x60, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5213, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5213, .value=0xbe, .type=IO_READ},
        {.addr=0x5214, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x9548, .a=0x51, .x=0xa9, .y=0xfd, .sp=0x29, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9548, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9549, .a=0xf1, .x=0xa9, .y=0xfd, .sp=0x29, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9548, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9548, .value=0xbe, .type=IO_READ},
        {.addr=0x9549, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xb7fe, .a=0xb9, .x=0x62, .y=0x0a, .sp=0xe0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fe, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb7ff, .a=0x59, .x=0x62, .y=0x0a, .sp=0xe0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb7fe, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb7fe, .value=0xbe, .type=IO_READ},
        {.addr=0xb7ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x94a0, .a=0x26, .x=0xfd, .y=0x86, .sp=0x62, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x94a0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x94a1, .a=0xc6, .x=0xfd, .y=0x86, .sp=0x62, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x94a0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x94a0, .value=0xbe, .type=IO_READ},
        {.addr=0x94a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc99b, .a=0x4f, .x=0x50, .y=0x74, .sp=0x14, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc99b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc99c, .a=0xe9, .x=0x50, .y=0x74, .sp=0x14, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc99b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc99b, .value=0xbe, .type=IO_READ},
        {.addr=0xc99c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xbe54, .a=0x8e, .x=0x8f, .y=0x53, .sp=0x6e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xbe54, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbe55, .a=0x28, .x=0x8f, .y=0x53, .sp=0x6e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xbe54, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbe54, .value=0xbe, .type=IO_READ},
        {.addr=0xbe55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x3730, .a=0xfc, .x=0xf9, .y=0x6c, .sp=0xa0, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x3730, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3731, .a=0x96, .x=0xf9, .y=0x6c, .sp=0xa0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3730, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3730, .value=0xbe, .type=IO_READ},
        {.addr=0x3731, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x56d9, .a=0x0f, .x=0x9d, .y=0xbd, .sp=0x3f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x56d9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x56da, .a=0xa9, .x=0x9d, .y=0xbd, .sp=0x3f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x56d9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x56d9, .value=0xbe, .type=IO_READ},
        {.addr=0x56da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xa40c, .a=0xa6, .x=0x18, .y=0xcd, .sp=0xc6, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xa40c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa40d, .a=0x40, .x=0x18, .y=0xcd, .sp=0xc6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa40c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa40c, .value=0xbe, .type=IO_READ},
        {.addr=0xa40d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6f21, .a=0x76, .x=0xdd, .y=0xf4, .sp=0xef, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f21, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6f22, .a=0x16, .x=0xdd, .y=0xf4, .sp=0xef, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6f21, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6f21, .value=0xbe, .type=IO_READ},
        {.addr=0x6f22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x7c41, .a=0x7d, .x=0x16, .y=0x12, .sp=0xa5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7c41, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7c42, .a=0x77, .x=0x16, .y=0x12, .sp=0xa5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7c41, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7c41, .value=0xbe, .type=IO_READ},
        {.addr=0x7c42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x5f3f, .a=0x52, .x=0x71, .y=0x65, .sp=0x3b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5f40, .a=0x4c, .x=0x71, .y=0x65, .sp=0x3b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5f3f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5f3f, .value=0xbe, .type=IO_READ},
        {.addr=0x5f40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xb38c, .a=0xe0, .x=0xad, .y=0x9e, .sp=0xc6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb38c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb38d, .a=0x80, .x=0xad, .y=0x9e, .sp=0xc6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb38c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb38c, .value=0xbe, .type=IO_READ},
        {.addr=0xb38d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x3cf7, .a=0x71, .x=0x72, .y=0xa0, .sp=0x5d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3cf8, .a=0x11, .x=0x72, .y=0xa0, .sp=0x5d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3cf7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3cf7, .value=0xbe, .type=IO_READ},
        {.addr=0x3cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x8cfc, .a=0x93, .x=0x11, .y=0x22, .sp=0x27, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x8cfc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8cfd, .a=0x2d, .x=0x11, .y=0x22, .sp=0x27, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x8cfc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8cfc, .value=0xbe, .type=IO_READ},
        {.addr=0x8cfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x083a, .a=0x6d, .x=0x36, .y=0x35, .sp=0xbe, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x083a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x083b, .a=0x07, .x=0x36, .y=0x35, .sp=0xbe, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x083a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x083a, .value=0xbe, .type=IO_READ},
        {.addr=0x083b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x3c4f, .a=0x64, .x=0x53, .y=0xff, .sp=0x6f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x3c4f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3c50, .a=0x04, .x=0x53, .y=0xff, .sp=0x6f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3c4f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3c4f, .value=0xbe, .type=IO_READ},
        {.addr=0x3c50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x07cb, .a=0x52, .x=0x1b, .y=0xf6, .sp=0x6e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x07cb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x07cc, .a=0x4c, .x=0x1b, .y=0xf6, .sp=0x6e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x07cb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x07cb, .value=0xbe, .type=IO_READ},
        {.addr=0x07cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x69ab, .a=0x63, .x=0xf0, .y=0x53, .sp=0x7f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x69ab, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x69ac, .a=0x63, .x=0xf0, .y=0x53, .sp=0x7f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x69ab, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x69ab, .value=0xbe, .type=IO_READ},
        {.addr=0x69ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x0e2b, .a=0x72, .x=0x64, .y=0x23, .sp=0xe5, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0e2b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0e2c, .a=0x0c, .x=0x64, .y=0x23, .sp=0xe5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0e2b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0e2b, .value=0xbe, .type=IO_READ},
        {.addr=0x0e2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x5bcd, .a=0xc4, .x=0x52, .y=0x6f, .sp=0x88, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x5bcd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5bce, .a=0x5e, .x=0x52, .y=0x6f, .sp=0x88, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5bcd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5bcd, .value=0xbe, .type=IO_READ},
        {.addr=0x5bce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x3ca9, .a=0x35, .x=0xa8, .y=0x68, .sp=0x5d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3caa, .a=0x2f, .x=0xa8, .y=0x68, .sp=0x5d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3ca9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3ca9, .value=0xbe, .type=IO_READ},
        {.addr=0x3caa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x8c78, .a=0x64, .x=0x64, .y=0x87, .sp=0xa0, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8c78, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8c79, .a=0x5e, .x=0x64, .y=0x87, .sp=0xa0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8c78, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8c78, .value=0xbe, .type=IO_READ},
        {.addr=0x8c79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xa7d2, .a=0xf6, .x=0xda, .y=0x01, .sp=0x51, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa7d2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa7d3, .a=0x90, .x=0xda, .y=0x01, .sp=0x51, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa7d2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa7d2, .value=0xbe, .type=IO_READ},
        {.addr=0xa7d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x55e8, .a=0xec, .x=0xa0, .y=0xcb, .sp=0x22, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x55e8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x55e9, .a=0x86, .x=0xa0, .y=0xcb, .sp=0x22, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x55e8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x55e8, .value=0xbe, .type=IO_READ},
        {.addr=0x55e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5815, .a=0xbd, .x=0xb6, .y=0xcb, .sp=0xa8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5815, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5816, .a=0x57, .x=0xb6, .y=0xcb, .sp=0xa8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5815, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5815, .value=0xbe, .type=IO_READ},
        {.addr=0x5816, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xfc81, .a=0xf4, .x=0x6e, .y=0x35, .sp=0xce, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xfc81, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfc82, .a=0x8e, .x=0x6e, .y=0x35, .sp=0xce, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfc81, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfc81, .value=0xbe, .type=IO_READ},
        {.addr=0xfc82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xef02, .a=0xc9, .x=0x57, .y=0x68, .sp=0xd1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xef02, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xef03, .a=0x63, .x=0x57, .y=0x68, .sp=0xd1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xef02, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xef02, .value=0xbe, .type=IO_READ},
        {.addr=0xef03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x8fa9, .a=0x38, .x=0x7b, .y=0x9e, .sp=0xba, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8faa, .a=0x32, .x=0x7b, .y=0x9e, .sp=0xba, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8fa9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8fa9, .value=0xbe, .type=IO_READ},
        {.addr=0x8faa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x7b33, .a=0x49, .x=0xf2, .y=0xc1, .sp=0xc6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b33, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7b34, .a=0xe9, .x=0xf2, .y=0xc1, .sp=0xc6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7b33, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7b33, .value=0xbe, .type=IO_READ},
        {.addr=0x7b34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb45f, .a=0xc7, .x=0x2d, .y=0xfb, .sp=0x93, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb45f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb460, .a=0x67, .x=0x2d, .y=0xfb, .sp=0x93, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb45f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb45f, .value=0xbe, .type=IO_READ},
        {.addr=0xb460, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xb819, .a=0x2f, .x=0x0c, .y=0xbe, .sp=0x28, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb819, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb81a, .a=0x29, .x=0x0c, .y=0xbe, .sp=0x28, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb819, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb819, .value=0xbe, .type=IO_READ},
        {.addr=0xb81a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x64d2, .a=0xc3, .x=0xb0, .y=0x12, .sp=0xd5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x64d2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x64d3, .a=0x5d, .x=0xb0, .y=0x12, .sp=0xd5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x64d2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x64d2, .value=0xbe, .type=IO_READ},
        {.addr=0x64d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xbd8d, .a=0xf3, .x=0x14, .y=0x6a, .sp=0x9f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xbd8d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbd8e, .a=0x93, .x=0x14, .y=0x6a, .sp=0x9f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbd8d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbd8d, .value=0xbe, .type=IO_READ},
        {.addr=0xbd8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x4f50, .a=0xb7, .x=0x50, .y=0x88, .sp=0xd1, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4f50, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4f51, .a=0x51, .x=0x50, .y=0x88, .sp=0xd1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4f50, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4f50, .value=0xbe, .type=IO_READ},
        {.addr=0x4f51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x30b2, .a=0x21, .x=0x6e, .y=0xbb, .sp=0xb4, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x30b2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x30b3, .a=0x1b, .x=0x6e, .y=0xbb, .sp=0xb4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x30b2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x30b2, .value=0xbe, .type=IO_READ},
        {.addr=0x30b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0100) {
    const struct CPU_State initial_cpu = {.pc=0x5881, .a=0xab, .x=0xa6, .y=0x54, .sp=0x69, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5881, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5882, .a=0x45, .x=0xa6, .y=0x54, .sp=0x69, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5881, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5881, .value=0xbe, .type=IO_READ},
        {.addr=0x5882, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0101) {
    const struct CPU_State initial_cpu = {.pc=0xfc54, .a=0x9e, .x=0xc7, .y=0x5a, .sp=0x0d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xfc54, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfc55, .a=0x38, .x=0xc7, .y=0x5a, .sp=0x0d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xfc54, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfc54, .value=0xbe, .type=IO_READ},
        {.addr=0xfc55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0102) {
    const struct CPU_State initial_cpu = {.pc=0x3950, .a=0x41, .x=0xdd, .y=0x5f, .sp=0xa1, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3950, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3951, .a=0xdb, .x=0xdd, .y=0x5f, .sp=0xa1, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3950, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3950, .value=0xbe, .type=IO_READ},
        {.addr=0x3951, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0103) {
    const struct CPU_State initial_cpu = {.pc=0x502b, .a=0x71, .x=0x8f, .y=0xf0, .sp=0x55, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x502b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x502c, .a=0x0b, .x=0x8f, .y=0xf0, .sp=0x55, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x502b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x502b, .value=0xbe, .type=IO_READ},
        {.addr=0x502c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0104) {
    const struct CPU_State initial_cpu = {.pc=0x68f4, .a=0x51, .x=0x77, .y=0xa1, .sp=0x04, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x68f4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x68f5, .a=0x4b, .x=0x77, .y=0xa1, .sp=0x04, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x68f4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x68f4, .value=0xbe, .type=IO_READ},
        {.addr=0x68f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0105) {
    const struct CPU_State initial_cpu = {.pc=0x7992, .a=0x3c, .x=0x7f, .y=0x2b, .sp=0x58, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7992, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7993, .a=0xd6, .x=0x7f, .y=0x2b, .sp=0x58, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7992, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7992, .value=0xbe, .type=IO_READ},
        {.addr=0x7993, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0106) {
    const struct CPU_State initial_cpu = {.pc=0xd592, .a=0x0c, .x=0xba, .y=0x7d, .sp=0x46, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd592, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd593, .a=0xa6, .x=0xba, .y=0x7d, .sp=0x46, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd592, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd592, .value=0xbe, .type=IO_READ},
        {.addr=0xd593, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0107) {
    const struct CPU_State initial_cpu = {.pc=0x94c2, .a=0xe3, .x=0xf9, .y=0x07, .sp=0xc5, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x94c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x94c3, .a=0x7d, .x=0xf9, .y=0x07, .sp=0xc5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x94c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x94c2, .value=0xbe, .type=IO_READ},
        {.addr=0x94c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf321, .a=0x95, .x=0x75, .y=0xb9, .sp=0x4d, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf321, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf322, .a=0x35, .x=0x75, .y=0xb9, .sp=0x4d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf321, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf321, .value=0xbe, .type=IO_READ},
        {.addr=0xf322, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0109) {
    const struct CPU_State initial_cpu = {.pc=0xf62f, .a=0x48, .x=0xf0, .y=0x5e, .sp=0x87, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf62f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf630, .a=0x42, .x=0xf0, .y=0x5e, .sp=0x87, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf62f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf62f, .value=0xbe, .type=IO_READ},
        {.addr=0xf630, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_010A) {
    const struct CPU_State initial_cpu = {.pc=0xf4a5, .a=0x77, .x=0xf0, .y=0xf3, .sp=0x6b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf4a6, .a=0x17, .x=0xf0, .y=0xf3, .sp=0x6b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf4a5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf4a5, .value=0xbe, .type=IO_READ},
        {.addr=0xf4a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_010B) {
    const struct CPU_State initial_cpu = {.pc=0xb489, .a=0xc8, .x=0xda, .y=0xcf, .sp=0x58, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb489, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb48a, .a=0x62, .x=0xda, .y=0xcf, .sp=0x58, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb489, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb489, .value=0xbe, .type=IO_READ},
        {.addr=0xb48a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_010C) {
    const struct CPU_State initial_cpu = {.pc=0x1e33, .a=0xc5, .x=0x47, .y=0xa5, .sp=0x7a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x1e33, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1e34, .a=0x5f, .x=0x47, .y=0xa5, .sp=0x7a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1e33, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1e33, .value=0xbe, .type=IO_READ},
        {.addr=0x1e34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_010D) {
    const struct CPU_State initial_cpu = {.pc=0xb6a4, .a=0xdc, .x=0x71, .y=0xa5, .sp=0x19, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb6a5, .a=0x76, .x=0x71, .y=0xa5, .sp=0x19, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb6a4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb6a4, .value=0xbe, .type=IO_READ},
        {.addr=0xb6a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_010E) {
    const struct CPU_State initial_cpu = {.pc=0xc8e8, .a=0xca, .x=0x6f, .y=0x17, .sp=0xd2, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc8e9, .a=0x64, .x=0x6f, .y=0x17, .sp=0xd2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc8e8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc8e8, .value=0xbe, .type=IO_READ},
        {.addr=0xc8e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_010F) {
    const struct CPU_State initial_cpu = {.pc=0x08b9, .a=0x57, .x=0x14, .y=0x74, .sp=0x4a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x08b9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x08ba, .a=0x51, .x=0x14, .y=0x74, .sp=0x4a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x08b9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x08b9, .value=0xbe, .type=IO_READ},
        {.addr=0x08ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0110) {
    const struct CPU_State initial_cpu = {.pc=0x9251, .a=0x67, .x=0x12, .y=0x4f, .sp=0xae, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9251, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9252, .a=0x01, .x=0x12, .y=0x4f, .sp=0xae, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9251, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9251, .value=0xbe, .type=IO_READ},
        {.addr=0x9252, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0111) {
    const struct CPU_State initial_cpu = {.pc=0xdf07, .a=0x06, .x=0x95, .y=0x27, .sp=0x9a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xdf07, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdf08, .a=0xa0, .x=0x95, .y=0x27, .sp=0x9a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdf07, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdf07, .value=0xbe, .type=IO_READ},
        {.addr=0xdf08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0112) {
    const struct CPU_State initial_cpu = {.pc=0xa168, .a=0x40, .x=0x47, .y=0xcc, .sp=0xf3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa168, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa169, .a=0x3a, .x=0x47, .y=0xcc, .sp=0xf3, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa168, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa168, .value=0xbe, .type=IO_READ},
        {.addr=0xa169, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0113) {
    const struct CPU_State initial_cpu = {.pc=0x2008, .a=0x6b, .x=0x7e, .y=0xc5, .sp=0x59, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2008, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2009, .a=0x65, .x=0x7e, .y=0xc5, .sp=0x59, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2008, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2008, .value=0xbe, .type=IO_READ},
        {.addr=0x2009, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0114) {
    const struct CPU_State initial_cpu = {.pc=0x3b65, .a=0x49, .x=0x1a, .y=0xe0, .sp=0x38, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3b65, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3b66, .a=0xe9, .x=0x1a, .y=0xe0, .sp=0x38, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3b65, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3b65, .value=0xbe, .type=IO_READ},
        {.addr=0x3b66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0115) {
    const struct CPU_State initial_cpu = {.pc=0xa580, .a=0x9d, .x=0x78, .y=0xd0, .sp=0x7b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa580, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa581, .a=0x37, .x=0x78, .y=0xd0, .sp=0x7b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa580, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa580, .value=0xbe, .type=IO_READ},
        {.addr=0xa581, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0116) {
    const struct CPU_State initial_cpu = {.pc=0x1fe7, .a=0x57, .x=0x55, .y=0xaa, .sp=0x6a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1fe8, .a=0x51, .x=0x55, .y=0xaa, .sp=0x6a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1fe7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1fe7, .value=0xbe, .type=IO_READ},
        {.addr=0x1fe8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0117) {
    const struct CPU_State initial_cpu = {.pc=0x5317, .a=0xd2, .x=0x59, .y=0x82, .sp=0x44, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5317, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5318, .a=0x72, .x=0x59, .y=0x82, .sp=0x44, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5317, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5317, .value=0xbe, .type=IO_READ},
        {.addr=0x5318, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0118) {
    const struct CPU_State initial_cpu = {.pc=0x7ac5, .a=0x13, .x=0x7d, .y=0x66, .sp=0x89, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7ac5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7ac6, .a=0xad, .x=0x7d, .y=0x66, .sp=0x89, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7ac5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7ac5, .value=0xbe, .type=IO_READ},
        {.addr=0x7ac6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0119) {
    const struct CPU_State initial_cpu = {.pc=0x583d, .a=0x91, .x=0x7d, .y=0xc8, .sp=0x75, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x583d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x583e, .a=0x91, .x=0x7d, .y=0xc8, .sp=0x75, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x583d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x583d, .value=0xbe, .type=IO_READ},
        {.addr=0x583e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_011A) {
    const struct CPU_State initial_cpu = {.pc=0x31ce, .a=0x58, .x=0x6c, .y=0x22, .sp=0xbf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x31ce, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x31cf, .a=0xf8, .x=0x6c, .y=0x22, .sp=0xbf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x31ce, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x31ce, .value=0xbe, .type=IO_READ},
        {.addr=0x31cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_011B) {
    const struct CPU_State initial_cpu = {.pc=0x6d32, .a=0x2d, .x=0x9a, .y=0xa2, .sp=0x87, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6d32, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6d33, .a=0xc7, .x=0x9a, .y=0xa2, .sp=0x87, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6d32, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6d32, .value=0xbe, .type=IO_READ},
        {.addr=0x6d33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_011C) {
    const struct CPU_State initial_cpu = {.pc=0x600c, .a=0x25, .x=0x19, .y=0x95, .sp=0x0a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x600c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x600d, .a=0xc5, .x=0x19, .y=0x95, .sp=0x0a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x600c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x600c, .value=0xbe, .type=IO_READ},
        {.addr=0x600d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_011D) {
    const struct CPU_State initial_cpu = {.pc=0x79b2, .a=0x7f, .x=0x4c, .y=0xd9, .sp=0x77, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x79b2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x79b3, .a=0x19, .x=0x4c, .y=0xd9, .sp=0x77, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x79b2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x79b2, .value=0xbe, .type=IO_READ},
        {.addr=0x79b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4e21, .a=0x6e, .x=0x80, .y=0xfc, .sp=0x27, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4e21, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4e22, .a=0x68, .x=0x80, .y=0xfc, .sp=0x27, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4e21, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4e21, .value=0xbe, .type=IO_READ},
        {.addr=0x4e22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_011F) {
    const struct CPU_State initial_cpu = {.pc=0x504c, .a=0x2b, .x=0x87, .y=0x9f, .sp=0x5a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x504c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x504d, .a=0xc5, .x=0x87, .y=0x9f, .sp=0x5a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x504c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x504c, .value=0xbe, .type=IO_READ},
        {.addr=0x504d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0120) {
    const struct CPU_State initial_cpu = {.pc=0x412a, .a=0xce, .x=0x79, .y=0x2c, .sp=0xab, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x412a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x412b, .a=0x68, .x=0x79, .y=0x2c, .sp=0xab, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x412a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x412a, .value=0xbe, .type=IO_READ},
        {.addr=0x412b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0121) {
    const struct CPU_State initial_cpu = {.pc=0x5616, .a=0xef, .x=0xa4, .y=0xe2, .sp=0xcd, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x5616, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5617, .a=0x89, .x=0xa4, .y=0xe2, .sp=0xcd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5616, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5616, .value=0xbe, .type=IO_READ},
        {.addr=0x5617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0122) {
    const struct CPU_State initial_cpu = {.pc=0x6633, .a=0xba, .x=0x4f, .y=0xd3, .sp=0x97, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6633, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6634, .a=0x54, .x=0x4f, .y=0xd3, .sp=0x97, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6633, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6633, .value=0xbe, .type=IO_READ},
        {.addr=0x6634, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0123) {
    const struct CPU_State initial_cpu = {.pc=0xf795, .a=0x77, .x=0x69, .y=0x29, .sp=0x63, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xf795, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf796, .a=0x17, .x=0x69, .y=0x29, .sp=0x63, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf795, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf795, .value=0xbe, .type=IO_READ},
        {.addr=0xf796, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0124) {
    const struct CPU_State initial_cpu = {.pc=0x048f, .a=0xca, .x=0xd9, .y=0x53, .sp=0xa4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x048f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0490, .a=0x64, .x=0xd9, .y=0x53, .sp=0xa4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x048f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x048f, .value=0xbe, .type=IO_READ},
        {.addr=0x0490, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0125) {
    const struct CPU_State initial_cpu = {.pc=0xc51f, .a=0xcc, .x=0xd2, .y=0xa7, .sp=0x7f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc51f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc520, .a=0x66, .x=0xd2, .y=0xa7, .sp=0x7f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc51f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc51f, .value=0xbe, .type=IO_READ},
        {.addr=0xc520, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0126) {
    const struct CPU_State initial_cpu = {.pc=0xa954, .a=0x3a, .x=0x70, .y=0xc0, .sp=0xd7, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa954, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa955, .a=0x34, .x=0x70, .y=0xc0, .sp=0xd7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa954, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa954, .value=0xbe, .type=IO_READ},
        {.addr=0xa955, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0127) {
    const struct CPU_State initial_cpu = {.pc=0x4739, .a=0x8d, .x=0xa6, .y=0x34, .sp=0x03, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4739, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x473a, .a=0x27, .x=0xa6, .y=0x34, .sp=0x03, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4739, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4739, .value=0xbe, .type=IO_READ},
        {.addr=0x473a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0128) {
    const struct CPU_State initial_cpu = {.pc=0x9f40, .a=0xa6, .x=0x77, .y=0xd4, .sp=0x32, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9f40, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9f41, .a=0x46, .x=0x77, .y=0xd4, .sp=0x32, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9f40, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9f40, .value=0xbe, .type=IO_READ},
        {.addr=0x9f41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0129) {
    const struct CPU_State initial_cpu = {.pc=0x7a97, .a=0x0c, .x=0x21, .y=0xb8, .sp=0x90, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7a97, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7a98, .a=0x06, .x=0x21, .y=0xb8, .sp=0x90, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7a97, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7a97, .value=0xbe, .type=IO_READ},
        {.addr=0x7a98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_012A) {
    const struct CPU_State initial_cpu = {.pc=0xe8ca, .a=0x98, .x=0xee, .y=0x7e, .sp=0x2b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ca, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe8cb, .a=0x92, .x=0xee, .y=0x7e, .sp=0x2b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe8ca, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe8ca, .value=0xbe, .type=IO_READ},
        {.addr=0xe8cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_012B) {
    const struct CPU_State initial_cpu = {.pc=0x2a2c, .a=0x26, .x=0x8e, .y=0x22, .sp=0x0e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2a2c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2a2d, .a=0x26, .x=0x8e, .y=0x22, .sp=0x0e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2a2c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2a2c, .value=0xbe, .type=IO_READ},
        {.addr=0x2a2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_012C) {
    const struct CPU_State initial_cpu = {.pc=0x7fb6, .a=0xff, .x=0x43, .y=0x1d, .sp=0x7d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7fb6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7fb7, .a=0x99, .x=0x43, .y=0x1d, .sp=0x7d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7fb6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7fb6, .value=0xbe, .type=IO_READ},
        {.addr=0x7fb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_012D) {
    const struct CPU_State initial_cpu = {.pc=0x0478, .a=0xcc, .x=0xc2, .y=0x5e, .sp=0xe5, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0478, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0479, .a=0x66, .x=0xc2, .y=0x5e, .sp=0xe5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0478, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0478, .value=0xbe, .type=IO_READ},
        {.addr=0x0479, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_012E) {
    const struct CPU_State initial_cpu = {.pc=0x4d9d, .a=0xc5, .x=0xdb, .y=0x43, .sp=0x65, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x4d9d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4d9e, .a=0x5f, .x=0xdb, .y=0x43, .sp=0x65, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4d9d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4d9d, .value=0xbe, .type=IO_READ},
        {.addr=0x4d9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2515, .a=0x74, .x=0xef, .y=0x9b, .sp=0x2d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2515, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2516, .a=0x0e, .x=0xef, .y=0x9b, .sp=0x2d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x2515, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2515, .value=0xbe, .type=IO_READ},
        {.addr=0x2516, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0130) {
    const struct CPU_State initial_cpu = {.pc=0x4837, .a=0x28, .x=0xc8, .y=0x95, .sp=0x3d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x4837, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4838, .a=0x28, .x=0xc8, .y=0x95, .sp=0x3d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4837, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4837, .value=0xbe, .type=IO_READ},
        {.addr=0x4838, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0131) {
    const struct CPU_State initial_cpu = {.pc=0xfbfc, .a=0x0a, .x=0x94, .y=0x49, .sp=0x70, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xfbfc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfbfd, .a=0xa4, .x=0x94, .y=0x49, .sp=0x70, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xfbfc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfbfc, .value=0xbe, .type=IO_READ},
        {.addr=0xfbfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0132) {
    const struct CPU_State initial_cpu = {.pc=0xecae, .a=0xe6, .x=0xe1, .y=0x63, .sp=0x3d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xecae, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xecaf, .a=0x86, .x=0xe1, .y=0x63, .sp=0x3d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xecae, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xecae, .value=0xbe, .type=IO_READ},
        {.addr=0xecaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0133) {
    const struct CPU_State initial_cpu = {.pc=0xdb15, .a=0x1a, .x=0xf9, .y=0x60, .sp=0xc1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xdb15, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdb16, .a=0x14, .x=0xf9, .y=0x60, .sp=0xc1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xdb15, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdb15, .value=0xbe, .type=IO_READ},
        {.addr=0xdb16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0134) {
    const struct CPU_State initial_cpu = {.pc=0x869a, .a=0xce, .x=0xa7, .y=0x1f, .sp=0xc8, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x869a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x869b, .a=0x68, .x=0xa7, .y=0x1f, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x869a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x869a, .value=0xbe, .type=IO_READ},
        {.addr=0x869b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0135) {
    const struct CPU_State initial_cpu = {.pc=0x6861, .a=0x6d, .x=0x0b, .y=0x0a, .sp=0x18, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6861, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6862, .a=0x07, .x=0x0b, .y=0x0a, .sp=0x18, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6861, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6861, .value=0xbe, .type=IO_READ},
        {.addr=0x6862, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0136) {
    const struct CPU_State initial_cpu = {.pc=0x36b7, .a=0xa5, .x=0xb7, .y=0x52, .sp=0x45, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x36b7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x36b8, .a=0x45, .x=0xb7, .y=0x52, .sp=0x45, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x36b7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x36b7, .value=0xbe, .type=IO_READ},
        {.addr=0x36b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0137) {
    const struct CPU_State initial_cpu = {.pc=0x5053, .a=0x6f, .x=0x9d, .y=0x1e, .sp=0xce, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x5053, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5054, .a=0x69, .x=0x9d, .y=0x1e, .sp=0xce, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5053, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5053, .value=0xbe, .type=IO_READ},
        {.addr=0x5054, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0138) {
    const struct CPU_State initial_cpu = {.pc=0xe3e1, .a=0xa9, .x=0x3a, .y=0xaf, .sp=0xfc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe3e2, .a=0x43, .x=0x3a, .y=0xaf, .sp=0xfc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe3e1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe3e1, .value=0xbe, .type=IO_READ},
        {.addr=0xe3e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0139) {
    const struct CPU_State initial_cpu = {.pc=0x7a3f, .a=0x0e, .x=0xf2, .y=0x81, .sp=0x9c, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7a3f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7a40, .a=0x08, .x=0xf2, .y=0x81, .sp=0x9c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7a3f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7a3f, .value=0xbe, .type=IO_READ},
        {.addr=0x7a40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_013A) {
    const struct CPU_State initial_cpu = {.pc=0x398f, .a=0xd9, .x=0xb1, .y=0x55, .sp=0xcf, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x398f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3990, .a=0x79, .x=0xb1, .y=0x55, .sp=0xcf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x398f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x398f, .value=0xbe, .type=IO_READ},
        {.addr=0x3990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_013B) {
    const struct CPU_State initial_cpu = {.pc=0x2029, .a=0x28, .x=0xb9, .y=0x08, .sp=0xb9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2029, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x202a, .a=0xc8, .x=0xb9, .y=0x08, .sp=0xb9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2029, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2029, .value=0xbe, .type=IO_READ},
        {.addr=0x202a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_013C) {
    const struct CPU_State initial_cpu = {.pc=0xc0fb, .a=0x30, .x=0x98, .y=0xa9, .sp=0xe0, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc0fc, .a=0x30, .x=0x98, .y=0xa9, .sp=0xe0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc0fb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc0fb, .value=0xbe, .type=IO_READ},
        {.addr=0xc0fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_013D) {
    const struct CPU_State initial_cpu = {.pc=0x46b9, .a=0x36, .x=0x20, .y=0x34, .sp=0x07, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x46b9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x46ba, .a=0xd6, .x=0x20, .y=0x34, .sp=0x07, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x46b9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x46b9, .value=0xbe, .type=IO_READ},
        {.addr=0x46ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_013E) {
    const struct CPU_State initial_cpu = {.pc=0xff2b, .a=0x8c, .x=0xd0, .y=0x5e, .sp=0xf7, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xff2b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xff2c, .a=0x86, .x=0xd0, .y=0x5e, .sp=0xf7, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xff2b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xff2b, .value=0xbe, .type=IO_READ},
        {.addr=0xff2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_013F) {
    const struct CPU_State initial_cpu = {.pc=0x77fb, .a=0x72, .x=0xda, .y=0x6a, .sp=0xd7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x77fb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x77fc, .a=0x72, .x=0xda, .y=0x6a, .sp=0xd7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x77fb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x77fb, .value=0xbe, .type=IO_READ},
        {.addr=0x77fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0140) {
    const struct CPU_State initial_cpu = {.pc=0x35c1, .a=0x56, .x=0x52, .y=0x34, .sp=0xa5, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x35c1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x35c2, .a=0x50, .x=0x52, .y=0x34, .sp=0xa5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x35c1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x35c1, .value=0xbe, .type=IO_READ},
        {.addr=0x35c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0141) {
    const struct CPU_State initial_cpu = {.pc=0x3d5c, .a=0xba, .x=0x67, .y=0x39, .sp=0x91, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x3d5c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3d5d, .a=0x54, .x=0x67, .y=0x39, .sp=0x91, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3d5c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3d5c, .value=0xbe, .type=IO_READ},
        {.addr=0x3d5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0142) {
    const struct CPU_State initial_cpu = {.pc=0x4539, .a=0xaf, .x=0x5e, .y=0xe8, .sp=0x1d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x4539, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x453a, .a=0x49, .x=0x5e, .y=0xe8, .sp=0x1d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4539, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4539, .value=0xbe, .type=IO_READ},
        {.addr=0x453a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0143) {
    const struct CPU_State initial_cpu = {.pc=0xb08c, .a=0xf4, .x=0x45, .y=0x45, .sp=0x20, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb08c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb08d, .a=0x94, .x=0x45, .y=0x45, .sp=0x20, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb08c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb08c, .value=0xbe, .type=IO_READ},
        {.addr=0xb08d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7623, .a=0x0f, .x=0x1c, .y=0xf5, .sp=0xb7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7623, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7624, .a=0x09, .x=0x1c, .y=0xf5, .sp=0xb7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7623, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7623, .value=0xbe, .type=IO_READ},
        {.addr=0x7624, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0145) {
    const struct CPU_State initial_cpu = {.pc=0x2f02, .a=0x03, .x=0xb7, .y=0x48, .sp=0x75, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2f02, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2f03, .a=0x9d, .x=0xb7, .y=0x48, .sp=0x75, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2f02, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2f02, .value=0xbe, .type=IO_READ},
        {.addr=0x2f03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0146) {
    const struct CPU_State initial_cpu = {.pc=0xfa8b, .a=0xdb, .x=0x3c, .y=0xa3, .sp=0x56, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfa8b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfa8c, .a=0x75, .x=0x3c, .y=0xa3, .sp=0x56, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xfa8b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfa8b, .value=0xbe, .type=IO_READ},
        {.addr=0xfa8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0147) {
    const struct CPU_State initial_cpu = {.pc=0x57db, .a=0xab, .x=0xff, .y=0x51, .sp=0xd3, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x57db, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x57dc, .a=0x45, .x=0xff, .y=0x51, .sp=0xd3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x57db, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x57db, .value=0xbe, .type=IO_READ},
        {.addr=0x57dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0148) {
    const struct CPU_State initial_cpu = {.pc=0xe09a, .a=0xbf, .x=0xa6, .y=0x54, .sp=0x00, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe09a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe09b, .a=0x59, .x=0xa6, .y=0x54, .sp=0x00, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe09a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe09a, .value=0xbe, .type=IO_READ},
        {.addr=0xe09b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0149) {
    const struct CPU_State initial_cpu = {.pc=0x2973, .a=0x54, .x=0x12, .y=0xe0, .sp=0xee, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2973, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2974, .a=0xf4, .x=0x12, .y=0xe0, .sp=0xee, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2973, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2973, .value=0xbe, .type=IO_READ},
        {.addr=0x2974, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_014A) {
    const struct CPU_State initial_cpu = {.pc=0x35b1, .a=0x34, .x=0x0d, .y=0xf6, .sp=0x9b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x35b1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x35b2, .a=0xce, .x=0x0d, .y=0xf6, .sp=0x9b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x35b1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x35b1, .value=0xbe, .type=IO_READ},
        {.addr=0x35b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_014B) {
    const struct CPU_State initial_cpu = {.pc=0x9105, .a=0x43, .x=0x72, .y=0x9a, .sp=0xa0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9105, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9106, .a=0xdd, .x=0x72, .y=0x9a, .sp=0xa0, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9105, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9105, .value=0xbe, .type=IO_READ},
        {.addr=0x9106, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_014C) {
    const struct CPU_State initial_cpu = {.pc=0x454e, .a=0xf7, .x=0x20, .y=0x0e, .sp=0x8a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x454e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x454f, .a=0x97, .x=0x20, .y=0x0e, .sp=0x8a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x454e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x454e, .value=0xbe, .type=IO_READ},
        {.addr=0x454f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_014D) {
    const struct CPU_State initial_cpu = {.pc=0xf1ed, .a=0xd7, .x=0x7c, .y=0x72, .sp=0xaa, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ed, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf1ee, .a=0x77, .x=0x7c, .y=0x72, .sp=0xaa, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf1ed, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf1ed, .value=0xbe, .type=IO_READ},
        {.addr=0xf1ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_014E) {
    const struct CPU_State initial_cpu = {.pc=0x53c6, .a=0xdb, .x=0x0f, .y=0x15, .sp=0x3c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x53c6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x53c7, .a=0x75, .x=0x0f, .y=0x15, .sp=0x3c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x53c6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x53c6, .value=0xbe, .type=IO_READ},
        {.addr=0x53c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_014F) {
    const struct CPU_State initial_cpu = {.pc=0x66ad, .a=0x30, .x=0x33, .y=0x7f, .sp=0xa4, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x66ad, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x66ae, .a=0x30, .x=0x33, .y=0x7f, .sp=0xa4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x66ad, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x66ad, .value=0xbe, .type=IO_READ},
        {.addr=0x66ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0150) {
    const struct CPU_State initial_cpu = {.pc=0x909c, .a=0xe3, .x=0x80, .y=0xc4, .sp=0x8a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x909c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x909d, .a=0x7d, .x=0x80, .y=0xc4, .sp=0x8a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x909c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x909c, .value=0xbe, .type=IO_READ},
        {.addr=0x909d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0151) {
    const struct CPU_State initial_cpu = {.pc=0x757a, .a=0xcd, .x=0xb3, .y=0x3b, .sp=0x5f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x757a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x757b, .a=0x67, .x=0xb3, .y=0x3b, .sp=0x5f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x757a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x757a, .value=0xbe, .type=IO_READ},
        {.addr=0x757b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0152) {
    const struct CPU_State initial_cpu = {.pc=0xce63, .a=0x9c, .x=0x3f, .y=0x74, .sp=0xb5, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xce63, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xce64, .a=0x36, .x=0x3f, .y=0x74, .sp=0xb5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xce63, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xce63, .value=0xbe, .type=IO_READ},
        {.addr=0xce64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0153) {
    const struct CPU_State initial_cpu = {.pc=0x8bd8, .a=0x3f, .x=0x0f, .y=0x7e, .sp=0x7d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8bd9, .a=0xd9, .x=0x0f, .y=0x7e, .sp=0x7d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8bd8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8bd8, .value=0xbe, .type=IO_READ},
        {.addr=0x8bd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0154) {
    const struct CPU_State initial_cpu = {.pc=0xc7c3, .a=0x17, .x=0xac, .y=0x2b, .sp=0x67, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc7c4, .a=0xb7, .x=0xac, .y=0x2b, .sp=0x67, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc7c3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc7c3, .value=0xbe, .type=IO_READ},
        {.addr=0xc7c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0155) {
    const struct CPU_State initial_cpu = {.pc=0xc66c, .a=0x00, .x=0x5d, .y=0x81, .sp=0x4e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc66c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc66d, .a=0x00, .x=0x5d, .y=0x81, .sp=0x4e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xc66c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc66c, .value=0xbe, .type=IO_READ},
        {.addr=0xc66d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0156) {
    const struct CPU_State initial_cpu = {.pc=0xa8d6, .a=0xde, .x=0xa6, .y=0x7b, .sp=0xa0, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa8d7, .a=0x78, .x=0xa6, .y=0x7b, .sp=0xa0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa8d6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa8d6, .value=0xbe, .type=IO_READ},
        {.addr=0xa8d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0157) {
    const struct CPU_State initial_cpu = {.pc=0xb9ce, .a=0xdd, .x=0x5c, .y=0x15, .sp=0xf2, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xb9ce, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb9cf, .a=0x77, .x=0x5c, .y=0x15, .sp=0xf2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb9ce, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb9ce, .value=0xbe, .type=IO_READ},
        {.addr=0xb9cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0158) {
    const struct CPU_State initial_cpu = {.pc=0xa72e, .a=0x1e, .x=0x62, .y=0x29, .sp=0xa5, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa72e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa72f, .a=0xb8, .x=0x62, .y=0x29, .sp=0xa5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa72e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa72e, .value=0xbe, .type=IO_READ},
        {.addr=0xa72f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0159) {
    const struct CPU_State initial_cpu = {.pc=0xda4f, .a=0xd6, .x=0xf6, .y=0x7b, .sp=0x6d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xda4f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xda50, .a=0x70, .x=0xf6, .y=0x7b, .sp=0x6d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xda4f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xda4f, .value=0xbe, .type=IO_READ},
        {.addr=0xda50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_015A) {
    const struct CPU_State initial_cpu = {.pc=0x6fcf, .a=0xfd, .x=0x97, .y=0x98, .sp=0x37, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6fcf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6fd0, .a=0x97, .x=0x97, .y=0x98, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6fcf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6fcf, .value=0xbe, .type=IO_READ},
        {.addr=0x6fd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_015B) {
    const struct CPU_State initial_cpu = {.pc=0xe3ab, .a=0xd0, .x=0x70, .y=0x06, .sp=0x62, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe3ab, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe3ac, .a=0x70, .x=0x70, .y=0x06, .sp=0x62, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe3ab, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe3ab, .value=0xbe, .type=IO_READ},
        {.addr=0xe3ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4f0f, .a=0xf8, .x=0x2f, .y=0x89, .sp=0xeb, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4f0f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4f10, .a=0x92, .x=0x2f, .y=0x89, .sp=0xeb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x4f0f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4f0f, .value=0xbe, .type=IO_READ},
        {.addr=0x4f10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_015D) {
    const struct CPU_State initial_cpu = {.pc=0x0351, .a=0xb4, .x=0x47, .y=0xac, .sp=0x6a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0351, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0352, .a=0x54, .x=0x47, .y=0xac, .sp=0x6a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0351, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0351, .value=0xbe, .type=IO_READ},
        {.addr=0x0352, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_015E) {
    const struct CPU_State initial_cpu = {.pc=0x0a06, .a=0x7b, .x=0xb3, .y=0xc3, .sp=0x1f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0a06, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0a07, .a=0x15, .x=0xb3, .y=0xc3, .sp=0x1f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0a06, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0a06, .value=0xbe, .type=IO_READ},
        {.addr=0x0a07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_015F) {
    const struct CPU_State initial_cpu = {.pc=0x6d42, .a=0xdd, .x=0x69, .y=0xf8, .sp=0xb9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6d42, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6d43, .a=0x77, .x=0x69, .y=0xf8, .sp=0xb9, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6d42, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6d42, .value=0xbe, .type=IO_READ},
        {.addr=0x6d43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0160) {
    const struct CPU_State initial_cpu = {.pc=0x5155, .a=0xb1, .x=0x8b, .y=0x25, .sp=0x9e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5155, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5156, .a=0x51, .x=0x8b, .y=0x25, .sp=0x9e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5155, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5155, .value=0xbe, .type=IO_READ},
        {.addr=0x5156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0161) {
    const struct CPU_State initial_cpu = {.pc=0xd33d, .a=0x3a, .x=0xd8, .y=0xf9, .sp=0xbc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd33d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd33e, .a=0x34, .x=0xd8, .y=0xf9, .sp=0xbc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd33d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd33d, .value=0xbe, .type=IO_READ},
        {.addr=0xd33e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0162) {
    const struct CPU_State initial_cpu = {.pc=0x72bb, .a=0x85, .x=0x19, .y=0x64, .sp=0xed, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x72bb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x72bc, .a=0x25, .x=0x19, .y=0x64, .sp=0xed, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x72bb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x72bb, .value=0xbe, .type=IO_READ},
        {.addr=0x72bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0163) {
    const struct CPU_State initial_cpu = {.pc=0xbe0c, .a=0x78, .x=0x51, .y=0xa9, .sp=0x2a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xbe0c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbe0d, .a=0x12, .x=0x51, .y=0xa9, .sp=0x2a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xbe0c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbe0c, .value=0xbe, .type=IO_READ},
        {.addr=0xbe0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0164) {
    const struct CPU_State initial_cpu = {.pc=0xb1ef, .a=0xe4, .x=0x3e, .y=0x1f, .sp=0x2b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ef, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb1f0, .a=0x7e, .x=0x3e, .y=0x1f, .sp=0x2b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb1ef, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb1ef, .value=0xbe, .type=IO_READ},
        {.addr=0xb1f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0165) {
    const struct CPU_State initial_cpu = {.pc=0xf071, .a=0x42, .x=0x0e, .y=0x36, .sp=0x69, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf071, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf072, .a=0xdc, .x=0x0e, .y=0x36, .sp=0x69, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf071, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf071, .value=0xbe, .type=IO_READ},
        {.addr=0xf072, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0166) {
    const struct CPU_State initial_cpu = {.pc=0xe670, .a=0x14, .x=0x0c, .y=0x69, .sp=0xdc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe670, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe671, .a=0x14, .x=0x0c, .y=0x69, .sp=0xdc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe670, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe670, .value=0xbe, .type=IO_READ},
        {.addr=0xe671, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0167) {
    const struct CPU_State initial_cpu = {.pc=0x335a, .a=0x2c, .x=0x2f, .y=0xf7, .sp=0x95, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x335a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x335b, .a=0x26, .x=0x2f, .y=0xf7, .sp=0x95, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x335a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x335a, .value=0xbe, .type=IO_READ},
        {.addr=0x335b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0168) {
    const struct CPU_State initial_cpu = {.pc=0xc44c, .a=0x95, .x=0x5b, .y=0xb2, .sp=0x54, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc44c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc44d, .a=0x2f, .x=0x5b, .y=0xb2, .sp=0x54, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc44c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc44c, .value=0xbe, .type=IO_READ},
        {.addr=0xc44d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0169) {
    const struct CPU_State initial_cpu = {.pc=0x7090, .a=0xde, .x=0x33, .y=0xbf, .sp=0x1f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7090, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7091, .a=0x78, .x=0x33, .y=0xbf, .sp=0x1f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7090, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7090, .value=0xbe, .type=IO_READ},
        {.addr=0x7091, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_016A) {
    const struct CPU_State initial_cpu = {.pc=0xad4b, .a=0x5a, .x=0x43, .y=0x61, .sp=0x4b, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xad4b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xad4c, .a=0xf4, .x=0x43, .y=0x61, .sp=0x4b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xad4b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xad4b, .value=0xbe, .type=IO_READ},
        {.addr=0xad4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_016B) {
    const struct CPU_State initial_cpu = {.pc=0xdae6, .a=0x2f, .x=0x04, .y=0xa0, .sp=0x3e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xdae6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdae7, .a=0x29, .x=0x04, .y=0xa0, .sp=0x3e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdae6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdae6, .value=0xbe, .type=IO_READ},
        {.addr=0xdae7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_016C) {
    const struct CPU_State initial_cpu = {.pc=0xb269, .a=0x17, .x=0x44, .y=0xcd, .sp=0x0a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb269, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb26a, .a=0x17, .x=0x44, .y=0xcd, .sp=0x0a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb269, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb269, .value=0xbe, .type=IO_READ},
        {.addr=0xb26a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_016D) {
    const struct CPU_State initial_cpu = {.pc=0xf194, .a=0xd7, .x=0xe2, .y=0x78, .sp=0x21, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf194, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf195, .a=0x71, .x=0xe2, .y=0x78, .sp=0x21, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf194, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf194, .value=0xbe, .type=IO_READ},
        {.addr=0xf195, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_016E) {
    const struct CPU_State initial_cpu = {.pc=0x86da, .a=0x6a, .x=0x3f, .y=0x22, .sp=0x2b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x86da, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x86db, .a=0x64, .x=0x3f, .y=0x22, .sp=0x2b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x86da, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x86da, .value=0xbe, .type=IO_READ},
        {.addr=0x86db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_016F) {
    const struct CPU_State initial_cpu = {.pc=0x6173, .a=0x53, .x=0x1b, .y=0x79, .sp=0x31, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x6173, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6174, .a=0x53, .x=0x1b, .y=0x79, .sp=0x31, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6173, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6173, .value=0xbe, .type=IO_READ},
        {.addr=0x6174, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0170) {
    const struct CPU_State initial_cpu = {.pc=0x1f5a, .a=0x18, .x=0x3d, .y=0xa8, .sp=0x6e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1f5a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1f5b, .a=0x12, .x=0x3d, .y=0xa8, .sp=0x6e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1f5a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1f5a, .value=0xbe, .type=IO_READ},
        {.addr=0x1f5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0171) {
    const struct CPU_State initial_cpu = {.pc=0x1af7, .a=0x0d, .x=0x32, .y=0x7a, .sp=0xa4, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x1af7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1af8, .a=0xa7, .x=0x32, .y=0x7a, .sp=0xa4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1af7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1af7, .value=0xbe, .type=IO_READ},
        {.addr=0x1af8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0172) {
    const struct CPU_State initial_cpu = {.pc=0x65b0, .a=0x0d, .x=0xd6, .y=0x48, .sp=0xc8, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x65b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x65b1, .a=0xa7, .x=0xd6, .y=0x48, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x65b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x65b0, .value=0xbe, .type=IO_READ},
        {.addr=0x65b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0173) {
    const struct CPU_State initial_cpu = {.pc=0x9550, .a=0xd1, .x=0x76, .y=0x56, .sp=0x47, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9550, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9551, .a=0x6b, .x=0x76, .y=0x56, .sp=0x47, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9550, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9550, .value=0xbe, .type=IO_READ},
        {.addr=0x9551, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0174) {
    const struct CPU_State initial_cpu = {.pc=0x61e6, .a=0xee, .x=0x30, .y=0x31, .sp=0x2f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x61e6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x61e7, .a=0x88, .x=0x30, .y=0x31, .sp=0x2f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x61e6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x61e6, .value=0xbe, .type=IO_READ},
        {.addr=0x61e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0175) {
    const struct CPU_State initial_cpu = {.pc=0x557b, .a=0x32, .x=0x05, .y=0x73, .sp=0x74, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x557b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x557c, .a=0x2c, .x=0x05, .y=0x73, .sp=0x74, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x557b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x557b, .value=0xbe, .type=IO_READ},
        {.addr=0x557c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0176) {
    const struct CPU_State initial_cpu = {.pc=0xf53c, .a=0x22, .x=0x2f, .y=0xdd, .sp=0xb9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xf53c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf53d, .a=0xbc, .x=0x2f, .y=0xdd, .sp=0xb9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf53c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf53c, .value=0xbe, .type=IO_READ},
        {.addr=0xf53d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0177) {
    const struct CPU_State initial_cpu = {.pc=0x3f71, .a=0x16, .x=0x73, .y=0xe8, .sp=0x5b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3f71, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3f72, .a=0x16, .x=0x73, .y=0xe8, .sp=0x5b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3f71, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3f71, .value=0xbe, .type=IO_READ},
        {.addr=0x3f72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0178) {
    const struct CPU_State initial_cpu = {.pc=0xdc57, .a=0x47, .x=0x2a, .y=0x12, .sp=0x98, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xdc57, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdc58, .a=0x41, .x=0x2a, .y=0x12, .sp=0x98, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdc57, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdc57, .value=0xbe, .type=IO_READ},
        {.addr=0xdc58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0179) {
    const struct CPU_State initial_cpu = {.pc=0xbf3a, .a=0x36, .x=0xa1, .y=0x38, .sp=0x23, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xbf3a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbf3b, .a=0xd6, .x=0xa1, .y=0x38, .sp=0x23, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbf3a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbf3a, .value=0xbe, .type=IO_READ},
        {.addr=0xbf3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_017A) {
    const struct CPU_State initial_cpu = {.pc=0x832d, .a=0x73, .x=0xab, .y=0x31, .sp=0xfd, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x832d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x832e, .a=0x6d, .x=0xab, .y=0x31, .sp=0xfd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x832d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x832d, .value=0xbe, .type=IO_READ},
        {.addr=0x832e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_017B) {
    const struct CPU_State initial_cpu = {.pc=0xe188, .a=0xa0, .x=0x18, .y=0xfa, .sp=0x25, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe188, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe189, .a=0x3a, .x=0x18, .y=0xfa, .sp=0x25, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe188, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe188, .value=0xbe, .type=IO_READ},
        {.addr=0xe189, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_017C) {
    const struct CPU_State initial_cpu = {.pc=0xc70b, .a=0x72, .x=0x9d, .y=0x3e, .sp=0x78, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc70b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc70c, .a=0x12, .x=0x9d, .y=0x3e, .sp=0x78, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc70b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc70b, .value=0xbe, .type=IO_READ},
        {.addr=0xc70c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_017D) {
    const struct CPU_State initial_cpu = {.pc=0x75c5, .a=0xf7, .x=0x94, .y=0x0e, .sp=0x77, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x75c5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x75c6, .a=0x91, .x=0x94, .y=0x0e, .sp=0x77, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x75c5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x75c5, .value=0xbe, .type=IO_READ},
        {.addr=0x75c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_017E) {
    const struct CPU_State initial_cpu = {.pc=0xe4e3, .a=0xb5, .x=0x5a, .y=0xc5, .sp=0x05, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe4e4, .a=0x55, .x=0x5a, .y=0xc5, .sp=0x05, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe4e3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe4e3, .value=0xbe, .type=IO_READ},
        {.addr=0xe4e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_017F) {
    const struct CPU_State initial_cpu = {.pc=0xbf0c, .a=0xd1, .x=0x1a, .y=0x66, .sp=0x12, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xbf0c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbf0d, .a=0x71, .x=0x1a, .y=0x66, .sp=0x12, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xbf0c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbf0c, .value=0xbe, .type=IO_READ},
        {.addr=0xbf0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0180) {
    const struct CPU_State initial_cpu = {.pc=0xa20a, .a=0x7a, .x=0x5b, .y=0x63, .sp=0x59, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa20a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa20b, .a=0x14, .x=0x5b, .y=0x63, .sp=0x59, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa20a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa20a, .value=0xbe, .type=IO_READ},
        {.addr=0xa20b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0181) {
    const struct CPU_State initial_cpu = {.pc=0x0041, .a=0x0f, .x=0xd4, .y=0x87, .sp=0xf2, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0042, .a=0x09, .x=0xd4, .y=0x87, .sp=0xf2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0041, .value=0xbe, .type=IO_READ},
        {.addr=0x0042, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0182) {
    const struct CPU_State initial_cpu = {.pc=0x7675, .a=0x6c, .x=0x69, .y=0x13, .sp=0x67, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7675, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7676, .a=0x66, .x=0x69, .y=0x13, .sp=0x67, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7675, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7675, .value=0xbe, .type=IO_READ},
        {.addr=0x7676, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0183) {
    const struct CPU_State initial_cpu = {.pc=0xb9e7, .a=0x2b, .x=0x40, .y=0xb1, .sp=0x25, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb9e8, .a=0xc5, .x=0x40, .y=0xb1, .sp=0x25, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb9e7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb9e7, .value=0xbe, .type=IO_READ},
        {.addr=0xb9e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0184) {
    const struct CPU_State initial_cpu = {.pc=0x937c, .a=0x1e, .x=0x58, .y=0xba, .sp=0x63, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x937c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x937d, .a=0x18, .x=0x58, .y=0xba, .sp=0x63, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x937c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x937c, .value=0xbe, .type=IO_READ},
        {.addr=0x937d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0185) {
    const struct CPU_State initial_cpu = {.pc=0xfcd2, .a=0xe1, .x=0x9a, .y=0x91, .sp=0xe2, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xfcd2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfcd3, .a=0x81, .x=0x9a, .y=0x91, .sp=0xe2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xfcd2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfcd2, .value=0xbe, .type=IO_READ},
        {.addr=0xfcd3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0186) {
    const struct CPU_State initial_cpu = {.pc=0x2712, .a=0x33, .x=0xae, .y=0xe3, .sp=0x1c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2712, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2713, .a=0xd3, .x=0xae, .y=0xe3, .sp=0x1c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2712, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2712, .value=0xbe, .type=IO_READ},
        {.addr=0x2713, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0187) {
    const struct CPU_State initial_cpu = {.pc=0x021d, .a=0x18, .x=0x07, .y=0x37, .sp=0xf6, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x021d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x021e, .a=0xb2, .x=0x07, .y=0x37, .sp=0xf6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x021d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x021d, .value=0xbe, .type=IO_READ},
        {.addr=0x021e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0188) {
    const struct CPU_State initial_cpu = {.pc=0x2005, .a=0xc9, .x=0x82, .y=0x5a, .sp=0x01, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2005, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2006, .a=0x69, .x=0x82, .y=0x5a, .sp=0x01, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2005, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2005, .value=0xbe, .type=IO_READ},
        {.addr=0x2006, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0189) {
    const struct CPU_State initial_cpu = {.pc=0x7309, .a=0xe5, .x=0x95, .y=0x7e, .sp=0x82, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7309, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x730a, .a=0x85, .x=0x95, .y=0x7e, .sp=0x82, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7309, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7309, .value=0xbe, .type=IO_READ},
        {.addr=0x730a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_018A) {
    const struct CPU_State initial_cpu = {.pc=0x99a4, .a=0x1b, .x=0x8c, .y=0x11, .sp=0x47, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x99a4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x99a5, .a=0xb5, .x=0x8c, .y=0x11, .sp=0x47, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x99a4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x99a4, .value=0xbe, .type=IO_READ},
        {.addr=0x99a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_018B) {
    const struct CPU_State initial_cpu = {.pc=0xc9ba, .a=0xa2, .x=0x97, .y=0x2a, .sp=0xa5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc9ba, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc9bb, .a=0x42, .x=0x97, .y=0x2a, .sp=0xa5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc9ba, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc9ba, .value=0xbe, .type=IO_READ},
        {.addr=0xc9bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_018C) {
    const struct CPU_State initial_cpu = {.pc=0xfbbd, .a=0x09, .x=0x19, .y=0x40, .sp=0x72, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xfbbd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfbbe, .a=0xa9, .x=0x19, .y=0x40, .sp=0x72, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfbbd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfbbd, .value=0xbe, .type=IO_READ},
        {.addr=0xfbbe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_018D) {
    const struct CPU_State initial_cpu = {.pc=0xc69d, .a=0x30, .x=0xd8, .y=0x7f, .sp=0x8d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc69d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc69e, .a=0xca, .x=0xd8, .y=0x7f, .sp=0x8d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc69d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc69d, .value=0xbe, .type=IO_READ},
        {.addr=0xc69e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf9d9, .a=0xf3, .x=0x7d, .y=0xfc, .sp=0x94, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf9da, .a=0x93, .x=0x7d, .y=0xfc, .sp=0x94, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf9d9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf9d9, .value=0xbe, .type=IO_READ},
        {.addr=0xf9da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5c37, .a=0xbb, .x=0x24, .y=0x2b, .sp=0xd6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x5c37, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5c38, .a=0x55, .x=0x24, .y=0x2b, .sp=0xd6, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5c37, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5c37, .value=0xbe, .type=IO_READ},
        {.addr=0x5c38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0190) {
    const struct CPU_State initial_cpu = {.pc=0x9825, .a=0x36, .x=0x27, .y=0x90, .sp=0x03, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x9825, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9826, .a=0xd0, .x=0x27, .y=0x90, .sp=0x03, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9825, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9825, .value=0xbe, .type=IO_READ},
        {.addr=0x9826, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0191) {
    const struct CPU_State initial_cpu = {.pc=0x17c2, .a=0x59, .x=0x21, .y=0x1b, .sp=0xde, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x17c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x17c3, .a=0x59, .x=0x21, .y=0x1b, .sp=0xde, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x17c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x17c2, .value=0xbe, .type=IO_READ},
        {.addr=0x17c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0192) {
    const struct CPU_State initial_cpu = {.pc=0x1e42, .a=0xbc, .x=0x77, .y=0x4a, .sp=0x14, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1e42, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1e43, .a=0x56, .x=0x77, .y=0x4a, .sp=0x14, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1e42, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1e42, .value=0xbe, .type=IO_READ},
        {.addr=0x1e43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0193) {
    const struct CPU_State initial_cpu = {.pc=0xfb84, .a=0xf7, .x=0x34, .y=0x25, .sp=0x94, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xfb84, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfb85, .a=0x97, .x=0x34, .y=0x25, .sp=0x94, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xfb84, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfb84, .value=0xbe, .type=IO_READ},
        {.addr=0xfb85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0194) {
    const struct CPU_State initial_cpu = {.pc=0xb56d, .a=0x14, .x=0x65, .y=0xb9, .sp=0x6a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb56d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb56e, .a=0xb4, .x=0x65, .y=0xb9, .sp=0x6a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb56d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb56d, .value=0xbe, .type=IO_READ},
        {.addr=0xb56e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0195) {
    const struct CPU_State initial_cpu = {.pc=0x8873, .a=0x19, .x=0xa7, .y=0x4d, .sp=0x5f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8873, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8874, .a=0x13, .x=0xa7, .y=0x4d, .sp=0x5f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8873, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8873, .value=0xbe, .type=IO_READ},
        {.addr=0x8874, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4f24, .a=0xae, .x=0xc6, .y=0x89, .sp=0xd7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4f24, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4f25, .a=0x48, .x=0xc6, .y=0x89, .sp=0xd7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4f24, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4f24, .value=0xbe, .type=IO_READ},
        {.addr=0x4f25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0197) {
    const struct CPU_State initial_cpu = {.pc=0x9b35, .a=0x3d, .x=0x00, .y=0x34, .sp=0xce, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9b35, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9b36, .a=0xd7, .x=0x00, .y=0x34, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9b35, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9b35, .value=0xbe, .type=IO_READ},
        {.addr=0x9b36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0198) {
    const struct CPU_State initial_cpu = {.pc=0x86bf, .a=0x57, .x=0xfe, .y=0x2c, .sp=0x85, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x86bf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x86c0, .a=0xf7, .x=0xfe, .y=0x2c, .sp=0x85, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x86bf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x86bf, .value=0xbe, .type=IO_READ},
        {.addr=0x86c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0199) {
    const struct CPU_State initial_cpu = {.pc=0x9aed, .a=0xb4, .x=0x0d, .y=0xfe, .sp=0x9e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9aed, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9aee, .a=0x54, .x=0x0d, .y=0xfe, .sp=0x9e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9aed, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9aed, .value=0xbe, .type=IO_READ},
        {.addr=0x9aee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_019A) {
    const struct CPU_State initial_cpu = {.pc=0xb849, .a=0x86, .x=0x60, .y=0x69, .sp=0xe5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb849, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb84a, .a=0x26, .x=0x60, .y=0x69, .sp=0xe5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb849, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb849, .value=0xbe, .type=IO_READ},
        {.addr=0xb84a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_019B) {
    const struct CPU_State initial_cpu = {.pc=0xe875, .a=0xbe, .x=0x32, .y=0x31, .sp=0xfe, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe875, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe876, .a=0x58, .x=0x32, .y=0x31, .sp=0xfe, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe875, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe875, .value=0xbe, .type=IO_READ},
        {.addr=0xe876, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_019C) {
    const struct CPU_State initial_cpu = {.pc=0x4290, .a=0xdb, .x=0x3e, .y=0xc1, .sp=0xf2, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x4290, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4291, .a=0x75, .x=0x3e, .y=0xc1, .sp=0xf2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4290, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4290, .value=0xbe, .type=IO_READ},
        {.addr=0x4291, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_019D) {
    const struct CPU_State initial_cpu = {.pc=0x1e96, .a=0x81, .x=0xec, .y=0x7e, .sp=0x56, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1e96, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1e97, .a=0x81, .x=0xec, .y=0x7e, .sp=0x56, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x1e96, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1e96, .value=0xbe, .type=IO_READ},
        {.addr=0x1e97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_019E) {
    const struct CPU_State initial_cpu = {.pc=0xaebe, .a=0x9a, .x=0xa7, .y=0x23, .sp=0xc8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xaebe, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaebf, .a=0x34, .x=0xa7, .y=0x23, .sp=0xc8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xaebe, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaebe, .value=0xbe, .type=IO_READ},
        {.addr=0xaebf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_019F) {
    const struct CPU_State initial_cpu = {.pc=0xbda7, .a=0x2f, .x=0x60, .y=0x36, .sp=0x89, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xbda7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbda8, .a=0xc9, .x=0x60, .y=0x36, .sp=0x89, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbda7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbda7, .value=0xbe, .type=IO_READ},
        {.addr=0xbda8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xfb4b, .a=0x6d, .x=0xf3, .y=0xe0, .sp=0x7b, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfb4b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfb4c, .a=0x07, .x=0xf3, .y=0xe0, .sp=0x7b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfb4b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfb4b, .value=0xbe, .type=IO_READ},
        {.addr=0xfb4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x0327, .a=0x2b, .x=0xac, .y=0x5c, .sp=0xda, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0327, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0328, .a=0xc5, .x=0xac, .y=0x5c, .sp=0xda, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0327, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0327, .value=0xbe, .type=IO_READ},
        {.addr=0x0328, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xeeaa, .a=0xa3, .x=0xd7, .y=0xf7, .sp=0xf5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xeeaa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeeab, .a=0x43, .x=0xd7, .y=0xf7, .sp=0xf5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xeeaa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeeaa, .value=0xbe, .type=IO_READ},
        {.addr=0xeeab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xaf1d, .a=0x73, .x=0x45, .y=0xbe, .sp=0x93, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xaf1d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaf1e, .a=0x13, .x=0x45, .y=0xbe, .sp=0x93, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xaf1d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaf1d, .value=0xbe, .type=IO_READ},
        {.addr=0xaf1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x121b, .a=0x89, .x=0xbc, .y=0x5e, .sp=0x23, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x121b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x121c, .a=0x83, .x=0xbc, .y=0x5e, .sp=0x23, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x121b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x121b, .value=0xbe, .type=IO_READ},
        {.addr=0x121c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x3cc5, .a=0xef, .x=0x38, .y=0xf1, .sp=0x2d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3cc6, .a=0x89, .x=0x38, .y=0xf1, .sp=0x2d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3cc5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3cc5, .value=0xbe, .type=IO_READ},
        {.addr=0x3cc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x9cae, .a=0x22, .x=0x86, .y=0xf5, .sp=0x14, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x9cae, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9caf, .a=0x22, .x=0x86, .y=0xf5, .sp=0x14, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9cae, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9cae, .value=0xbe, .type=IO_READ},
        {.addr=0x9caf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x15a4, .a=0xcb, .x=0xcf, .y=0x8c, .sp=0xcd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x15a4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x15a5, .a=0x65, .x=0xcf, .y=0x8c, .sp=0xcd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x15a4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x15a4, .value=0xbe, .type=IO_READ},
        {.addr=0x15a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x8597, .a=0x99, .x=0x84, .y=0x33, .sp=0x97, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8597, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8598, .a=0x99, .x=0x84, .y=0x33, .sp=0x97, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8597, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8597, .value=0xbe, .type=IO_READ},
        {.addr=0x8598, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xada0, .a=0x92, .x=0x44, .y=0x12, .sp=0x7b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xada0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xada1, .a=0x8c, .x=0x44, .y=0x12, .sp=0x7b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xada0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xada0, .value=0xbe, .type=IO_READ},
        {.addr=0xada1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x612e, .a=0x48, .x=0xee, .y=0x14, .sp=0x28, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x612e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x612f, .a=0xe8, .x=0xee, .y=0x14, .sp=0x28, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x612e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x612e, .value=0xbe, .type=IO_READ},
        {.addr=0x612f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x6f5e, .a=0x53, .x=0x73, .y=0xd7, .sp=0x61, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x6f5e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6f5f, .a=0xed, .x=0x73, .y=0xd7, .sp=0x61, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6f5e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6f5e, .value=0xbe, .type=IO_READ},
        {.addr=0x6f5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x1b92, .a=0x2e, .x=0x8a, .y=0x9e, .sp=0xed, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1b92, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1b93, .a=0xc8, .x=0x8a, .y=0x9e, .sp=0xed, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1b92, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1b92, .value=0xbe, .type=IO_READ},
        {.addr=0x1b93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xf3cf, .a=0x28, .x=0xef, .y=0x07, .sp=0xcf, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf3cf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf3d0, .a=0x22, .x=0xef, .y=0x07, .sp=0xcf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf3cf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf3cf, .value=0xbe, .type=IO_READ},
        {.addr=0xf3d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x8a83, .a=0xec, .x=0x3b, .y=0x75, .sp=0x66, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x8a83, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8a84, .a=0x86, .x=0x3b, .y=0x75, .sp=0x66, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8a83, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8a83, .value=0xbe, .type=IO_READ},
        {.addr=0x8a84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xc143, .a=0x4c, .x=0x24, .y=0x99, .sp=0x42, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc143, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc144, .a=0x46, .x=0x24, .y=0x99, .sp=0x42, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc143, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc143, .value=0xbe, .type=IO_READ},
        {.addr=0xc144, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x2792, .a=0x47, .x=0xe2, .y=0x7f, .sp=0xdb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x2792, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2793, .a=0xe7, .x=0xe2, .y=0x7f, .sp=0xdb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2792, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2792, .value=0xbe, .type=IO_READ},
        {.addr=0x2793, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xe2ca, .a=0x7a, .x=0xc2, .y=0x06, .sp=0x74, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ca, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe2cb, .a=0x14, .x=0xc2, .y=0x06, .sp=0x74, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe2ca, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe2ca, .value=0xbe, .type=IO_READ},
        {.addr=0xe2cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x38a9, .a=0x95, .x=0x13, .y=0xe6, .sp=0xb5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x38a9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x38aa, .a=0x35, .x=0x13, .y=0xe6, .sp=0xb5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x38a9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x38a9, .value=0xbe, .type=IO_READ},
        {.addr=0x38aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x9281, .a=0x0d, .x=0x88, .y=0xb8, .sp=0x21, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9281, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9282, .a=0xa7, .x=0x88, .y=0xb8, .sp=0x21, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9281, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9281, .value=0xbe, .type=IO_READ},
        {.addr=0x9282, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xf0e2, .a=0x1d, .x=0x1e, .y=0x71, .sp=0xb5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf0e3, .a=0x17, .x=0x1e, .y=0x71, .sp=0xb5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf0e2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf0e2, .value=0xbe, .type=IO_READ},
        {.addr=0xf0e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xad9f, .a=0x90, .x=0xe4, .y=0x33, .sp=0x8d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xad9f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xada0, .a=0x90, .x=0xe4, .y=0x33, .sp=0x8d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xad9f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xad9f, .value=0xbe, .type=IO_READ},
        {.addr=0xada0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x582a, .a=0x91, .x=0x95, .y=0x1a, .sp=0x17, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x582a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x582b, .a=0x8b, .x=0x95, .y=0x1a, .sp=0x17, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x582a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x582a, .value=0xbe, .type=IO_READ},
        {.addr=0x582b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x021e, .a=0xb1, .x=0xf9, .y=0xf4, .sp=0xab, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x021e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x021f, .a=0x51, .x=0xf9, .y=0xf4, .sp=0xab, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x021e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x021e, .value=0xbe, .type=IO_READ},
        {.addr=0x021f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x79b8, .a=0xd2, .x=0xbd, .y=0x3b, .sp=0xf1, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x79b8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x79b9, .a=0x6c, .x=0xbd, .y=0x3b, .sp=0xf1, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x79b8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x79b8, .value=0xbe, .type=IO_READ},
        {.addr=0x79b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xf9b1, .a=0x3e, .x=0xb9, .y=0x94, .sp=0xcd, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf9b1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf9b2, .a=0xd8, .x=0xb9, .y=0x94, .sp=0xcd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf9b1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf9b1, .value=0xbe, .type=IO_READ},
        {.addr=0xf9b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x500d, .a=0x4c, .x=0x4f, .y=0x05, .sp=0xb9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x500d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x500e, .a=0xe6, .x=0x4f, .y=0x05, .sp=0xb9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x500d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x500d, .value=0xbe, .type=IO_READ},
        {.addr=0x500e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x61b0, .a=0x49, .x=0xcc, .y=0xb9, .sp=0x2b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x61b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x61b1, .a=0xe9, .x=0xcc, .y=0xb9, .sp=0x2b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x61b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x61b0, .value=0xbe, .type=IO_READ},
        {.addr=0x61b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x5be0, .a=0x78, .x=0xf8, .y=0x24, .sp=0x19, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x5be0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5be1, .a=0x12, .x=0xf8, .y=0x24, .sp=0x19, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5be0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5be0, .value=0xbe, .type=IO_READ},
        {.addr=0x5be1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xef86, .a=0xa4, .x=0x4b, .y=0x90, .sp=0x7e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xef86, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xef87, .a=0x44, .x=0x4b, .y=0x90, .sp=0x7e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xef86, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xef86, .value=0xbe, .type=IO_READ},
        {.addr=0xef87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xb064, .a=0x4f, .x=0x0d, .y=0x79, .sp=0x95, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xb064, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb065, .a=0x49, .x=0x0d, .y=0x79, .sp=0x95, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xb064, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb064, .value=0xbe, .type=IO_READ},
        {.addr=0xb065, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xbba6, .a=0x10, .x=0x4e, .y=0xef, .sp=0x69, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xbba6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbba7, .a=0x0a, .x=0x4e, .y=0xef, .sp=0x69, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xbba6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbba6, .value=0xbe, .type=IO_READ},
        {.addr=0xbba7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xff08, .a=0x73, .x=0x89, .y=0xd0, .sp=0x3b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xff08, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xff09, .a=0x13, .x=0x89, .y=0xd0, .sp=0x3b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xff08, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xff08, .value=0xbe, .type=IO_READ},
        {.addr=0xff09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x0b96, .a=0x5e, .x=0xc0, .y=0x22, .sp=0x9b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0b96, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0b97, .a=0x58, .x=0xc0, .y=0x22, .sp=0x9b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0b96, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0b96, .value=0xbe, .type=IO_READ},
        {.addr=0x0b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x6b8d, .a=0x8a, .x=0xfe, .y=0x43, .sp=0x20, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x6b8d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6b8e, .a=0x24, .x=0xfe, .y=0x43, .sp=0x20, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6b8d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6b8d, .value=0xbe, .type=IO_READ},
        {.addr=0x6b8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x9dda, .a=0x14, .x=0xf4, .y=0x69, .sp=0xe9, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9dda, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9ddb, .a=0x0e, .x=0xf4, .y=0x69, .sp=0xe9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9dda, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9dda, .value=0xbe, .type=IO_READ},
        {.addr=0x9ddb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x52f5, .a=0x0d, .x=0xdb, .y=0xb8, .sp=0xc8, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x52f5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x52f6, .a=0x07, .x=0xdb, .y=0xb8, .sp=0xc8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x52f5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x52f5, .value=0xbe, .type=IO_READ},
        {.addr=0x52f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x50b4, .a=0xcf, .x=0x4b, .y=0x3e, .sp=0x82, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x50b4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x50b5, .a=0x69, .x=0x4b, .y=0x3e, .sp=0x82, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x50b4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x50b4, .value=0xbe, .type=IO_READ},
        {.addr=0x50b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x5338, .a=0xa6, .x=0x26, .y=0xf8, .sp=0xd2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5338, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5339, .a=0x46, .x=0x26, .y=0xf8, .sp=0xd2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5338, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5338, .value=0xbe, .type=IO_READ},
        {.addr=0x5339, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xfebf, .a=0xc7, .x=0x55, .y=0xd2, .sp=0xc0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xfebf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfec0, .a=0x67, .x=0x55, .y=0xd2, .sp=0xc0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfebf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfebf, .value=0xbe, .type=IO_READ},
        {.addr=0xfec0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x813f, .a=0xcc, .x=0x65, .y=0x4c, .sp=0x6f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x813f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8140, .a=0x66, .x=0x65, .y=0x4c, .sp=0x6f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x813f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x813f, .value=0xbe, .type=IO_READ},
        {.addr=0x8140, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xabce, .a=0x43, .x=0x10, .y=0x5a, .sp=0xf8, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xabce, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xabcf, .a=0xdd, .x=0x10, .y=0x5a, .sp=0xf8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xabce, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xabce, .value=0xbe, .type=IO_READ},
        {.addr=0xabcf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x9644, .a=0x89, .x=0x98, .y=0x1c, .sp=0xce, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9644, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9645, .a=0x83, .x=0x98, .y=0x1c, .sp=0xce, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9644, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9644, .value=0xbe, .type=IO_READ},
        {.addr=0x9645, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x882b, .a=0xe0, .x=0x7d, .y=0x90, .sp=0x57, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x882b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x882c, .a=0x7a, .x=0x7d, .y=0x90, .sp=0x57, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x882b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x882b, .value=0xbe, .type=IO_READ},
        {.addr=0x882c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xacca, .a=0xc6, .x=0xa9, .y=0xab, .sp=0x2c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xacca, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaccb, .a=0x66, .x=0xa9, .y=0xab, .sp=0x2c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xacca, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xacca, .value=0xbe, .type=IO_READ},
        {.addr=0xaccb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xd438, .a=0xc6, .x=0x85, .y=0x57, .sp=0xcd, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xd438, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd439, .a=0x66, .x=0x85, .y=0x57, .sp=0xcd, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd438, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd438, .value=0xbe, .type=IO_READ},
        {.addr=0xd439, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xbd31, .a=0x59, .x=0xba, .y=0x2e, .sp=0x9d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xbd31, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbd32, .a=0xf3, .x=0xba, .y=0x2e, .sp=0x9d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbd31, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbd31, .value=0xbe, .type=IO_READ},
        {.addr=0xbd32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xcb7f, .a=0xca, .x=0xa4, .y=0x0d, .sp=0x01, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcb80, .a=0x64, .x=0xa4, .y=0x0d, .sp=0x01, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcb7f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcb7f, .value=0xbe, .type=IO_READ},
        {.addr=0xcb80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xf31d, .a=0x3d, .x=0x1a, .y=0x9f, .sp=0x22, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xf31d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf31e, .a=0x37, .x=0x1a, .y=0x9f, .sp=0x22, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf31d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf31d, .value=0xbe, .type=IO_READ},
        {.addr=0xf31e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x80ea, .a=0x0c, .x=0xe8, .y=0xee, .sp=0x20, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x80ea, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x80eb, .a=0x06, .x=0xe8, .y=0xee, .sp=0x20, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x80ea, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x80ea, .value=0xbe, .type=IO_READ},
        {.addr=0x80eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x4bd5, .a=0x90, .x=0xab, .y=0x6e, .sp=0xc8, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4bd6, .a=0x90, .x=0xab, .y=0x6e, .sp=0xc8, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4bd5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4bd5, .value=0xbe, .type=IO_READ},
        {.addr=0x4bd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x9b1a, .a=0xd1, .x=0xb9, .y=0x98, .sp=0x34, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9b1b, .a=0x6b, .x=0xb9, .y=0x98, .sp=0x34, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x9b1a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9b1a, .value=0xbe, .type=IO_READ},
        {.addr=0x9b1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x177c, .a=0x0a, .x=0xf2, .y=0x21, .sp=0xfd, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x177c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x177d, .a=0xa4, .x=0xf2, .y=0x21, .sp=0xfd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x177c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x177c, .value=0xbe, .type=IO_READ},
        {.addr=0x177d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x2b82, .a=0xde, .x=0x73, .y=0xc4, .sp=0x50, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2b82, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2b83, .a=0x78, .x=0x73, .y=0xc4, .sp=0x50, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2b82, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2b82, .value=0xbe, .type=IO_READ},
        {.addr=0x2b83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x136a, .a=0x66, .x=0x3d, .y=0x05, .sp=0xc9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x136a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x136b, .a=0x66, .x=0x3d, .y=0x05, .sp=0xc9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x136a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x136a, .value=0xbe, .type=IO_READ},
        {.addr=0x136b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x05af, .a=0xe1, .x=0xa6, .y=0x44, .sp=0x84, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x05af, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x05b0, .a=0x7b, .x=0xa6, .y=0x44, .sp=0x84, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x05af, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x05af, .value=0xbe, .type=IO_READ},
        {.addr=0x05b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd066, .a=0xfc, .x=0xb9, .y=0xe9, .sp=0xd2, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd066, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd067, .a=0x96, .x=0xb9, .y=0xe9, .sp=0xd2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd066, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd066, .value=0xbe, .type=IO_READ},
        {.addr=0xd067, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x77ec, .a=0x0a, .x=0xfc, .y=0xdb, .sp=0xdb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x77ec, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x77ed, .a=0x04, .x=0xfc, .y=0xdb, .sp=0xdb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x77ec, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x77ec, .value=0xbe, .type=IO_READ},
        {.addr=0x77ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xaaae, .a=0xf1, .x=0x21, .y=0x5d, .sp=0xdb, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xaaae, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaaaf, .a=0x91, .x=0x21, .y=0x5d, .sp=0xdb, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xaaae, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaaae, .value=0xbe, .type=IO_READ},
        {.addr=0xaaaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x81f1, .a=0xc4, .x=0x3c, .y=0x1d, .sp=0x44, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x81f1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x81f2, .a=0x64, .x=0x3c, .y=0x1d, .sp=0x44, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x81f1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x81f1, .value=0xbe, .type=IO_READ},
        {.addr=0x81f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x09d4, .a=0x31, .x=0x95, .y=0x5e, .sp=0x16, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x09d4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x09d5, .a=0x2b, .x=0x95, .y=0x5e, .sp=0x16, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x09d4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x09d4, .value=0xbe, .type=IO_READ},
        {.addr=0x09d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x53a3, .a=0x99, .x=0xb6, .y=0x07, .sp=0xaa, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x53a3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x53a4, .a=0x93, .x=0xb6, .y=0x07, .sp=0xaa, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x53a3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x53a3, .value=0xbe, .type=IO_READ},
        {.addr=0x53a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xb27a, .a=0x86, .x=0x95, .y=0x7c, .sp=0xf3, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb27a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb27b, .a=0x80, .x=0x95, .y=0x7c, .sp=0xf3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb27a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb27a, .value=0xbe, .type=IO_READ},
        {.addr=0xb27b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x68fe, .a=0xae, .x=0x68, .y=0xc8, .sp=0x1d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x68fe, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x68ff, .a=0x48, .x=0x68, .y=0xc8, .sp=0x1d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x68fe, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x68fe, .value=0xbe, .type=IO_READ},
        {.addr=0x68ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x2663, .a=0xaf, .x=0x1e, .y=0x49, .sp=0x17, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x2663, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2664, .a=0x49, .x=0x1e, .y=0x49, .sp=0x17, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2663, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2663, .value=0xbe, .type=IO_READ},
        {.addr=0x2664, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x2244, .a=0x74, .x=0xf9, .y=0x17, .sp=0x1f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2244, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2245, .a=0x14, .x=0xf9, .y=0x17, .sp=0x1f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2244, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2244, .value=0xbe, .type=IO_READ},
        {.addr=0x2245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xfe59, .a=0x7e, .x=0x0b, .y=0x6e, .sp=0x4b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfe59, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfe5a, .a=0x18, .x=0x0b, .y=0x6e, .sp=0x4b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xfe59, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfe59, .value=0xbe, .type=IO_READ},
        {.addr=0xfe5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xdea6, .a=0x44, .x=0xa0, .y=0xe9, .sp=0xf1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdea6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdea7, .a=0xde, .x=0xa0, .y=0xe9, .sp=0xf1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdea6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdea6, .value=0xbe, .type=IO_READ},
        {.addr=0xdea7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x01cc, .a=0x96, .x=0xc0, .y=0x6e, .sp=0x4f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x01cd, .a=0x36, .x=0xc0, .y=0x6e, .sp=0x4f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x01cc, .value=0xbe, .type=IO_READ},
        {.addr=0x01cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3bc1, .a=0x2e, .x=0xc3, .y=0x56, .sp=0x50, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3bc2, .a=0x28, .x=0xc3, .y=0x56, .sp=0x50, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3bc1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3bc1, .value=0xbe, .type=IO_READ},
        {.addr=0x3bc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x5170, .a=0x02, .x=0xdf, .y=0x18, .sp=0x78, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x5170, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5171, .a=0xfc, .x=0xdf, .y=0x18, .sp=0x78, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5170, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5170, .value=0xbe, .type=IO_READ},
        {.addr=0x5171, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xc6a5, .a=0x52, .x=0x97, .y=0x0a, .sp=0x43, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc6a5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc6a6, .a=0x52, .x=0x97, .y=0x0a, .sp=0x43, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc6a5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc6a5, .value=0xbe, .type=IO_READ},
        {.addr=0xc6a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x28d6, .a=0x89, .x=0x08, .y=0x71, .sp=0x67, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x28d6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x28d7, .a=0x29, .x=0x08, .y=0x71, .sp=0x67, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x28d6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x28d6, .value=0xbe, .type=IO_READ},
        {.addr=0x28d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xf3ac, .a=0xde, .x=0xbb, .y=0x38, .sp=0xc6, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ac, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf3ad, .a=0x78, .x=0xbb, .y=0x38, .sp=0xc6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf3ac, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf3ac, .value=0xbe, .type=IO_READ},
        {.addr=0xf3ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x91a9, .a=0xd5, .x=0xff, .y=0xde, .sp=0xaf, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x91a9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x91aa, .a=0x6f, .x=0xff, .y=0xde, .sp=0xaf, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x91a9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x91a9, .value=0xbe, .type=IO_READ},
        {.addr=0x91aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x14dc, .a=0xb8, .x=0x61, .y=0xdf, .sp=0x96, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x14dc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x14dd, .a=0x58, .x=0x61, .y=0xdf, .sp=0x96, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x14dc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x14dc, .value=0xbe, .type=IO_READ},
        {.addr=0x14dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x7bc8, .a=0x1d, .x=0x6e, .y=0xaa, .sp=0x66, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7bc8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7bc9, .a=0x17, .x=0x6e, .y=0xaa, .sp=0x66, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7bc8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7bc8, .value=0xbe, .type=IO_READ},
        {.addr=0x7bc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xf0de, .a=0x3d, .x=0x8d, .y=0x94, .sp=0xcb, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xf0de, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf0df, .a=0xd7, .x=0x8d, .y=0x94, .sp=0xcb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf0de, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf0de, .value=0xbe, .type=IO_READ},
        {.addr=0xf0df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x8bed, .a=0x00, .x=0xc8, .y=0x93, .sp=0x57, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8bed, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8bee, .a=0x9a, .x=0xc8, .y=0x93, .sp=0x57, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8bed, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8bed, .value=0xbe, .type=IO_READ},
        {.addr=0x8bee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xad35, .a=0x20, .x=0xb0, .y=0x65, .sp=0xd2, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xad35, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xad36, .a=0xba, .x=0xb0, .y=0x65, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xad35, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xad35, .value=0xbe, .type=IO_READ},
        {.addr=0xad36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x2e35, .a=0xbd, .x=0x36, .y=0x81, .sp=0x7b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2e35, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2e36, .a=0x57, .x=0x36, .y=0x81, .sp=0x7b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2e35, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2e35, .value=0xbe, .type=IO_READ},
        {.addr=0x2e36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xd4e3, .a=0x65, .x=0x6d, .y=0x1e, .sp=0xe2, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd4e4, .a=0xff, .x=0x6d, .y=0x1e, .sp=0xe2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd4e3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd4e3, .value=0xbe, .type=IO_READ},
        {.addr=0xd4e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xa524, .a=0xef, .x=0x92, .y=0x7b, .sp=0x96, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xa524, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa525, .a=0x89, .x=0x92, .y=0x7b, .sp=0x96, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa524, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa524, .value=0xbe, .type=IO_READ},
        {.addr=0xa525, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x84f7, .a=0x3d, .x=0xcd, .y=0xaa, .sp=0x43, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x84f7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x84f8, .a=0x37, .x=0xcd, .y=0xaa, .sp=0x43, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x84f7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x84f7, .value=0xbe, .type=IO_READ},
        {.addr=0x84f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x42a1, .a=0x48, .x=0x0c, .y=0x85, .sp=0x4f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x42a1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x42a2, .a=0x48, .x=0x0c, .y=0x85, .sp=0x4f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x42a1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x42a1, .value=0xbe, .type=IO_READ},
        {.addr=0x42a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xfaaa, .a=0x6c, .x=0x35, .y=0xa9, .sp=0xd6, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xfaaa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfaab, .a=0x06, .x=0x35, .y=0xa9, .sp=0xd6, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfaaa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfaaa, .value=0xbe, .type=IO_READ},
        {.addr=0xfaab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x4923, .a=0x1e, .x=0x30, .y=0x19, .sp=0x3c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4923, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4924, .a=0xb8, .x=0x30, .y=0x19, .sp=0x3c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4923, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4923, .value=0xbe, .type=IO_READ},
        {.addr=0x4924, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x60a0, .a=0x5a, .x=0x22, .y=0x36, .sp=0x93, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x60a0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x60a1, .a=0xf4, .x=0x22, .y=0x36, .sp=0x93, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x60a0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x60a0, .value=0xbe, .type=IO_READ},
        {.addr=0x60a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x14f1, .a=0xee, .x=0x94, .y=0xcd, .sp=0x98, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x14f1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x14f2, .a=0x88, .x=0x94, .y=0xcd, .sp=0x98, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x14f1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x14f1, .value=0xbe, .type=IO_READ},
        {.addr=0x14f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x8924, .a=0x8d, .x=0x0a, .y=0x10, .sp=0xd0, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x8924, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8925, .a=0x87, .x=0x0a, .y=0x10, .sp=0xd0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x8924, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8924, .value=0xbe, .type=IO_READ},
        {.addr=0x8925, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x3a75, .a=0x41, .x=0xc8, .y=0x8f, .sp=0x6b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x3a75, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3a76, .a=0xdb, .x=0xc8, .y=0x8f, .sp=0x6b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3a75, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3a75, .value=0xbe, .type=IO_READ},
        {.addr=0x3a76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x800b, .a=0x3f, .x=0xde, .y=0x2a, .sp=0xa9, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x800b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x800c, .a=0x39, .x=0xde, .y=0x2a, .sp=0xa9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x800b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x800b, .value=0xbe, .type=IO_READ},
        {.addr=0x800c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xa846, .a=0x4f, .x=0x18, .y=0xa1, .sp=0x0c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa846, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa847, .a=0xe9, .x=0x18, .y=0xa1, .sp=0x0c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa846, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa846, .value=0xbe, .type=IO_READ},
        {.addr=0xa847, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x1556, .a=0x69, .x=0x87, .y=0x35, .sp=0xa6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1556, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1557, .a=0x03, .x=0x87, .y=0x35, .sp=0xa6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1556, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1556, .value=0xbe, .type=IO_READ},
        {.addr=0x1557, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xa236, .a=0xe3, .x=0x1a, .y=0x2a, .sp=0x4e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa236, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa237, .a=0x7d, .x=0x1a, .y=0x2a, .sp=0x4e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa236, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa236, .value=0xbe, .type=IO_READ},
        {.addr=0xa237, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xd344, .a=0xfa, .x=0x1c, .y=0x31, .sp=0xc0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd344, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd345, .a=0x94, .x=0x1c, .y=0x31, .sp=0xc0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd344, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd344, .value=0xbe, .type=IO_READ},
        {.addr=0xd345, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0200) {
    const struct CPU_State initial_cpu = {.pc=0x2e5f, .a=0xa4, .x=0xeb, .y=0x21, .sp=0xc8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2e5f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2e60, .a=0x3e, .x=0xeb, .y=0x21, .sp=0xc8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2e5f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2e5f, .value=0xbe, .type=IO_READ},
        {.addr=0x2e60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0201) {
    const struct CPU_State initial_cpu = {.pc=0xa470, .a=0x0c, .x=0x63, .y=0x15, .sp=0xaa, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xa470, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa471, .a=0xa6, .x=0x63, .y=0x15, .sp=0xaa, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa470, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa470, .value=0xbe, .type=IO_READ},
        {.addr=0xa471, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0202) {
    const struct CPU_State initial_cpu = {.pc=0x1a16, .a=0x54, .x=0x7a, .y=0x4f, .sp=0x22, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x1a16, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1a17, .a=0x4e, .x=0x7a, .y=0x4f, .sp=0x22, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1a16, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1a16, .value=0xbe, .type=IO_READ},
        {.addr=0x1a17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0203) {
    const struct CPU_State initial_cpu = {.pc=0x1d4e, .a=0x58, .x=0x0b, .y=0xa8, .sp=0xc1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1d4e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1d4f, .a=0xf8, .x=0x0b, .y=0xa8, .sp=0xc1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1d4e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1d4e, .value=0xbe, .type=IO_READ},
        {.addr=0x1d4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2bd5, .a=0x20, .x=0xf0, .y=0xbc, .sp=0xc5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2bd6, .a=0xba, .x=0xf0, .y=0xbc, .sp=0xc5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2bd5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2bd5, .value=0xbe, .type=IO_READ},
        {.addr=0x2bd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0205) {
    const struct CPU_State initial_cpu = {.pc=0x34d1, .a=0x5d, .x=0xff, .y=0x2b, .sp=0xd1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x34d1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x34d2, .a=0x57, .x=0xff, .y=0x2b, .sp=0xd1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x34d1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x34d1, .value=0xbe, .type=IO_READ},
        {.addr=0x34d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0206) {
    const struct CPU_State initial_cpu = {.pc=0x4021, .a=0x90, .x=0x89, .y=0x93, .sp=0x30, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4021, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4022, .a=0x30, .x=0x89, .y=0x93, .sp=0x30, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4021, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4021, .value=0xbe, .type=IO_READ},
        {.addr=0x4022, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd9ee, .a=0x9e, .x=0x80, .y=0xe5, .sp=0x24, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ee, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd9ef, .a=0x38, .x=0x80, .y=0xe5, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd9ee, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd9ee, .value=0xbe, .type=IO_READ},
        {.addr=0xd9ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0208) {
    const struct CPU_State initial_cpu = {.pc=0x9f45, .a=0x01, .x=0xe3, .y=0x3c, .sp=0xb4, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x9f45, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9f46, .a=0xa1, .x=0xe3, .y=0x3c, .sp=0xb4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9f45, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9f45, .value=0xbe, .type=IO_READ},
        {.addr=0x9f46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0209) {
    const struct CPU_State initial_cpu = {.pc=0xc107, .a=0x38, .x=0xca, .y=0xb7, .sp=0xd5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc107, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc108, .a=0x38, .x=0xca, .y=0xb7, .sp=0xd5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc107, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc107, .value=0xbe, .type=IO_READ},
        {.addr=0xc108, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_020A) {
    const struct CPU_State initial_cpu = {.pc=0x1a79, .a=0xa4, .x=0x09, .y=0x79, .sp=0x12, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x1a79, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1a7a, .a=0x3e, .x=0x09, .y=0x79, .sp=0x12, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1a79, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1a79, .value=0xbe, .type=IO_READ},
        {.addr=0x1a7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_020B) {
    const struct CPU_State initial_cpu = {.pc=0xcc04, .a=0xaf, .x=0xc6, .y=0x3c, .sp=0xf7, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xcc04, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcc05, .a=0x49, .x=0xc6, .y=0x3c, .sp=0xf7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xcc04, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcc04, .value=0xbe, .type=IO_READ},
        {.addr=0xcc05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_020C) {
    const struct CPU_State initial_cpu = {.pc=0xb0a7, .a=0x3e, .x=0x5c, .y=0x3b, .sp=0xc9, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb0a8, .a=0xd8, .x=0x5c, .y=0x3b, .sp=0xc9, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb0a7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb0a7, .value=0xbe, .type=IO_READ},
        {.addr=0xb0a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_020D) {
    const struct CPU_State initial_cpu = {.pc=0x0b84, .a=0x45, .x=0xef, .y=0xfc, .sp=0xde, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0b84, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0b85, .a=0x3f, .x=0xef, .y=0xfc, .sp=0xde, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0b84, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0b84, .value=0xbe, .type=IO_READ},
        {.addr=0x0b85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_020E) {
    const struct CPU_State initial_cpu = {.pc=0x678f, .a=0xd1, .x=0x32, .y=0x6c, .sp=0x8c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x678f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6790, .a=0x6b, .x=0x32, .y=0x6c, .sp=0x8c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x678f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x678f, .value=0xbe, .type=IO_READ},
        {.addr=0x6790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_020F) {
    const struct CPU_State initial_cpu = {.pc=0x7c17, .a=0x3f, .x=0xf2, .y=0xa2, .sp=0x69, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x7c17, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7c18, .a=0x39, .x=0xf2, .y=0xa2, .sp=0x69, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7c17, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7c17, .value=0xbe, .type=IO_READ},
        {.addr=0x7c18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0210) {
    const struct CPU_State initial_cpu = {.pc=0xd742, .a=0x69, .x=0xd6, .y=0xa8, .sp=0xb5, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd742, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd743, .a=0x03, .x=0xd6, .y=0xa8, .sp=0xb5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd742, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd742, .value=0xbe, .type=IO_READ},
        {.addr=0xd743, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0211) {
    const struct CPU_State initial_cpu = {.pc=0xd5b9, .a=0x42, .x=0xc7, .y=0x02, .sp=0x22, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd5ba, .a=0x42, .x=0xc7, .y=0x02, .sp=0x22, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd5b9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd5b9, .value=0xbe, .type=IO_READ},
        {.addr=0xd5ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0212) {
    const struct CPU_State initial_cpu = {.pc=0x3d99, .a=0xae, .x=0x68, .y=0xa5, .sp=0x51, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x3d99, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3d9a, .a=0x48, .x=0x68, .y=0xa5, .sp=0x51, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3d99, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3d99, .value=0xbe, .type=IO_READ},
        {.addr=0x3d9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0213) {
    const struct CPU_State initial_cpu = {.pc=0xb81b, .a=0xd4, .x=0x10, .y=0x4e, .sp=0xb0, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xb81b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb81c, .a=0x6e, .x=0x10, .y=0x4e, .sp=0xb0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb81b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb81b, .value=0xbe, .type=IO_READ},
        {.addr=0xb81c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0214) {
    const struct CPU_State initial_cpu = {.pc=0x7471, .a=0x7d, .x=0x8e, .y=0x57, .sp=0xda, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7471, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7472, .a=0x17, .x=0x8e, .y=0x57, .sp=0xda, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7471, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7471, .value=0xbe, .type=IO_READ},
        {.addr=0x7472, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0215) {
    const struct CPU_State initial_cpu = {.pc=0x6743, .a=0x8f, .x=0xac, .y=0x51, .sp=0x15, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6743, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6744, .a=0x89, .x=0xac, .y=0x51, .sp=0x15, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6743, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6743, .value=0xbe, .type=IO_READ},
        {.addr=0x6744, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0216) {
    const struct CPU_State initial_cpu = {.pc=0xac8c, .a=0x1e, .x=0xb2, .y=0x2e, .sp=0x0f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xac8c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xac8d, .a=0xb8, .x=0xb2, .y=0x2e, .sp=0x0f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xac8c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xac8c, .value=0xbe, .type=IO_READ},
        {.addr=0xac8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0217) {
    const struct CPU_State initial_cpu = {.pc=0x7e03, .a=0x67, .x=0x63, .y=0xa8, .sp=0x74, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7e03, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7e04, .a=0x01, .x=0x63, .y=0xa8, .sp=0x74, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7e03, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7e03, .value=0xbe, .type=IO_READ},
        {.addr=0x7e04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0218) {
    const struct CPU_State initial_cpu = {.pc=0x5f62, .a=0x81, .x=0xff, .y=0xcf, .sp=0x41, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5f62, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5f63, .a=0x21, .x=0xff, .y=0xcf, .sp=0x41, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5f62, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5f62, .value=0xbe, .type=IO_READ},
        {.addr=0x5f63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0219) {
    const struct CPU_State initial_cpu = {.pc=0xd20a, .a=0x91, .x=0xfa, .y=0x0b, .sp=0x76, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd20a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd20b, .a=0x31, .x=0xfa, .y=0x0b, .sp=0x76, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd20a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd20a, .value=0xbe, .type=IO_READ},
        {.addr=0xd20b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_021A) {
    const struct CPU_State initial_cpu = {.pc=0xbb9f, .a=0xa4, .x=0x3f, .y=0x40, .sp=0xc6, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbba0, .a=0x3e, .x=0x3f, .y=0x40, .sp=0xc6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xbb9f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbb9f, .value=0xbe, .type=IO_READ},
        {.addr=0xbba0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_021B) {
    const struct CPU_State initial_cpu = {.pc=0xa117, .a=0xf1, .x=0x09, .y=0x9d, .sp=0x52, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xa117, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa118, .a=0x91, .x=0x09, .y=0x9d, .sp=0x52, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa117, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa117, .value=0xbe, .type=IO_READ},
        {.addr=0xa118, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_021C) {
    const struct CPU_State initial_cpu = {.pc=0xfd78, .a=0xb3, .x=0x88, .y=0x9c, .sp=0x45, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xfd78, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfd79, .a=0x53, .x=0x88, .y=0x9c, .sp=0x45, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xfd78, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfd78, .value=0xbe, .type=IO_READ},
        {.addr=0xfd79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_021D) {
    const struct CPU_State initial_cpu = {.pc=0x1585, .a=0x15, .x=0x7e, .y=0xd8, .sp=0x1a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x1585, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1586, .a=0x15, .x=0x7e, .y=0xd8, .sp=0x1a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1585, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1585, .value=0xbe, .type=IO_READ},
        {.addr=0x1586, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_021E) {
    const struct CPU_State initial_cpu = {.pc=0xd348, .a=0x3c, .x=0xb8, .y=0xfa, .sp=0xc3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd348, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd349, .a=0xd6, .x=0xb8, .y=0xfa, .sp=0xc3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd348, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd348, .value=0xbe, .type=IO_READ},
        {.addr=0xd349, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_021F) {
    const struct CPU_State initial_cpu = {.pc=0x16ae, .a=0x1e, .x=0x97, .y=0x00, .sp=0x1a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x16ae, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x16af, .a=0xb8, .x=0x97, .y=0x00, .sp=0x1a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x16ae, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x16ae, .value=0xbe, .type=IO_READ},
        {.addr=0x16af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0220) {
    const struct CPU_State initial_cpu = {.pc=0x2810, .a=0x14, .x=0xf9, .y=0x2c, .sp=0xfc, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2810, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2811, .a=0x0e, .x=0xf9, .y=0x2c, .sp=0xfc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2810, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2810, .value=0xbe, .type=IO_READ},
        {.addr=0x2811, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0221) {
    const struct CPU_State initial_cpu = {.pc=0x78e8, .a=0x19, .x=0xd4, .y=0xa5, .sp=0xf9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x78e8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x78e9, .a=0xb3, .x=0xd4, .y=0xa5, .sp=0xf9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x78e8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x78e8, .value=0xbe, .type=IO_READ},
        {.addr=0x78e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0222) {
    const struct CPU_State initial_cpu = {.pc=0xfb0d, .a=0xda, .x=0xf8, .y=0x9b, .sp=0x68, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xfb0d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfb0e, .a=0x74, .x=0xf8, .y=0x9b, .sp=0x68, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfb0d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfb0d, .value=0xbe, .type=IO_READ},
        {.addr=0xfb0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0223) {
    const struct CPU_State initial_cpu = {.pc=0xa6d6, .a=0x7e, .x=0x7d, .y=0xa3, .sp=0x38, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa6d6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa6d7, .a=0x78, .x=0x7d, .y=0xa3, .sp=0x38, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa6d6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa6d6, .value=0xbe, .type=IO_READ},
        {.addr=0xa6d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0224) {
    const struct CPU_State initial_cpu = {.pc=0xde38, .a=0xab, .x=0x50, .y=0x39, .sp=0xa4, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xde38, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xde39, .a=0x45, .x=0x50, .y=0x39, .sp=0xa4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xde38, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xde38, .value=0xbe, .type=IO_READ},
        {.addr=0xde39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0225) {
    const struct CPU_State initial_cpu = {.pc=0xf815, .a=0x26, .x=0xe8, .y=0xb4, .sp=0x9b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf815, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf816, .a=0x26, .x=0xe8, .y=0xb4, .sp=0x9b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf815, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf815, .value=0xbe, .type=IO_READ},
        {.addr=0xf816, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0226) {
    const struct CPU_State initial_cpu = {.pc=0xfe93, .a=0x2c, .x=0x63, .y=0x18, .sp=0x40, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xfe93, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfe94, .a=0x26, .x=0x63, .y=0x18, .sp=0x40, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfe93, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfe93, .value=0xbe, .type=IO_READ},
        {.addr=0xfe94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0227) {
    const struct CPU_State initial_cpu = {.pc=0x4a02, .a=0xbc, .x=0xae, .y=0x6d, .sp=0x71, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4a02, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4a03, .a=0x56, .x=0xae, .y=0x6d, .sp=0x71, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4a02, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4a02, .value=0xbe, .type=IO_READ},
        {.addr=0x4a03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0228) {
    const struct CPU_State initial_cpu = {.pc=0x7c6b, .a=0xd2, .x=0x1b, .y=0x25, .sp=0x60, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7c6c, .a=0x6c, .x=0x1b, .y=0x25, .sp=0x60, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7c6b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7c6b, .value=0xbe, .type=IO_READ},
        {.addr=0x7c6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0229) {
    const struct CPU_State initial_cpu = {.pc=0x5716, .a=0x9c, .x=0xa1, .y=0x25, .sp=0x88, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5716, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5717, .a=0x36, .x=0xa1, .y=0x25, .sp=0x88, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5716, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5716, .value=0xbe, .type=IO_READ},
        {.addr=0x5717, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_022A) {
    const struct CPU_State initial_cpu = {.pc=0xe460, .a=0x79, .x=0xb5, .y=0x04, .sp=0x49, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe460, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe461, .a=0x19, .x=0xb5, .y=0x04, .sp=0x49, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe460, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe460, .value=0xbe, .type=IO_READ},
        {.addr=0xe461, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_022B) {
    const struct CPU_State initial_cpu = {.pc=0x699f, .a=0x58, .x=0x55, .y=0x1f, .sp=0x08, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x699f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x69a0, .a=0xf8, .x=0x55, .y=0x1f, .sp=0x08, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x699f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x699f, .value=0xbe, .type=IO_READ},
        {.addr=0x69a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_022C) {
    const struct CPU_State initial_cpu = {.pc=0x1fa8, .a=0x3b, .x=0x60, .y=0x54, .sp=0x42, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1fa9, .a=0xd5, .x=0x60, .y=0x54, .sp=0x42, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1fa8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1fa8, .value=0xbe, .type=IO_READ},
        {.addr=0x1fa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_022D) {
    const struct CPU_State initial_cpu = {.pc=0xccf4, .a=0x69, .x=0x0a, .y=0x0e, .sp=0xbc, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xccf4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xccf5, .a=0x69, .x=0x0a, .y=0x0e, .sp=0xbc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xccf4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xccf4, .value=0xbe, .type=IO_READ},
        {.addr=0xccf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_022E) {
    const struct CPU_State initial_cpu = {.pc=0x37ab, .a=0x35, .x=0x01, .y=0x05, .sp=0xc9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x37ab, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x37ac, .a=0xcf, .x=0x01, .y=0x05, .sp=0xc9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x37ab, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x37ab, .value=0xbe, .type=IO_READ},
        {.addr=0x37ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_022F) {
    const struct CPU_State initial_cpu = {.pc=0xd937, .a=0xca, .x=0x94, .y=0xbb, .sp=0xe9, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd937, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd938, .a=0x64, .x=0x94, .y=0xbb, .sp=0xe9, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd937, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd937, .value=0xbe, .type=IO_READ},
        {.addr=0xd938, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0230) {
    const struct CPU_State initial_cpu = {.pc=0xd36a, .a=0x2d, .x=0x4e, .y=0x5d, .sp=0x2d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd36a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd36b, .a=0xc7, .x=0x4e, .y=0x5d, .sp=0x2d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd36a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd36a, .value=0xbe, .type=IO_READ},
        {.addr=0xd36b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0231) {
    const struct CPU_State initial_cpu = {.pc=0x7cd8, .a=0x33, .x=0x31, .y=0xda, .sp=0x6d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7cd9, .a=0xcd, .x=0x31, .y=0xda, .sp=0x6d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7cd8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7cd8, .value=0xbe, .type=IO_READ},
        {.addr=0x7cd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0232) {
    const struct CPU_State initial_cpu = {.pc=0x3d52, .a=0xbf, .x=0xf9, .y=0x56, .sp=0x99, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3d52, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3d53, .a=0x59, .x=0xf9, .y=0x56, .sp=0x99, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3d52, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3d52, .value=0xbe, .type=IO_READ},
        {.addr=0x3d53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0233) {
    const struct CPU_State initial_cpu = {.pc=0xbba6, .a=0x33, .x=0x4c, .y=0xbf, .sp=0xee, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xbba6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbba7, .a=0xd3, .x=0x4c, .y=0xbf, .sp=0xee, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbba6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbba6, .value=0xbe, .type=IO_READ},
        {.addr=0xbba7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0234) {
    const struct CPU_State initial_cpu = {.pc=0x0a75, .a=0x5c, .x=0x30, .y=0xd2, .sp=0x26, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0a75, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0a76, .a=0x56, .x=0x30, .y=0xd2, .sp=0x26, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0a75, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0a75, .value=0xbe, .type=IO_READ},
        {.addr=0x0a76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd3b0, .a=0x9e, .x=0x5c, .y=0xcc, .sp=0x07, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd3b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd3b1, .a=0x38, .x=0x5c, .y=0xcc, .sp=0x07, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd3b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd3b0, .value=0xbe, .type=IO_READ},
        {.addr=0xd3b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0236) {
    const struct CPU_State initial_cpu = {.pc=0x0bc9, .a=0xf1, .x=0xba, .y=0xd3, .sp=0x0a, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0bca, .a=0x91, .x=0xba, .y=0xd3, .sp=0x0a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0bc9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0bc9, .value=0xbe, .type=IO_READ},
        {.addr=0x0bca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0237) {
    const struct CPU_State initial_cpu = {.pc=0xe8f4, .a=0xcb, .x=0x3c, .y=0x67, .sp=0x2e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe8f5, .a=0x65, .x=0x3c, .y=0x67, .sp=0x2e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe8f4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe8f4, .value=0xbe, .type=IO_READ},
        {.addr=0xe8f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0238) {
    const struct CPU_State initial_cpu = {.pc=0xcccc, .a=0x75, .x=0xef, .y=0x2d, .sp=0xd8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xcccc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcccd, .a=0x75, .x=0xef, .y=0x2d, .sp=0xd8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcccc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcccc, .value=0xbe, .type=IO_READ},
        {.addr=0xcccd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0239) {
    const struct CPU_State initial_cpu = {.pc=0x3893, .a=0xef, .x=0x2d, .y=0x6e, .sp=0x2e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x3893, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3894, .a=0x89, .x=0x2d, .y=0x6e, .sp=0x2e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3893, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3893, .value=0xbe, .type=IO_READ},
        {.addr=0x3894, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_023A) {
    const struct CPU_State initial_cpu = {.pc=0x890c, .a=0xb5, .x=0x16, .y=0xf4, .sp=0x97, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x890c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x890d, .a=0x55, .x=0x16, .y=0xf4, .sp=0x97, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x890c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x890c, .value=0xbe, .type=IO_READ},
        {.addr=0x890d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_023B) {
    const struct CPU_State initial_cpu = {.pc=0xde48, .a=0xd9, .x=0xa7, .y=0x2d, .sp=0x33, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xde48, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xde49, .a=0x73, .x=0xa7, .y=0x2d, .sp=0x33, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xde48, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xde48, .value=0xbe, .type=IO_READ},
        {.addr=0xde49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_023C) {
    const struct CPU_State initial_cpu = {.pc=0xb0ea, .a=0x8d, .x=0x85, .y=0xc7, .sp=0x11, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ea, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb0eb, .a=0x87, .x=0x85, .y=0xc7, .sp=0x11, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb0ea, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb0ea, .value=0xbe, .type=IO_READ},
        {.addr=0xb0eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_023D) {
    const struct CPU_State initial_cpu = {.pc=0xff01, .a=0x38, .x=0x74, .y=0xc5, .sp=0xa3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xff01, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xff02, .a=0xd8, .x=0x74, .y=0xc5, .sp=0xa3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xff01, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xff01, .value=0xbe, .type=IO_READ},
        {.addr=0xff02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_023E) {
    const struct CPU_State initial_cpu = {.pc=0xe3a5, .a=0xb8, .x=0x8c, .y=0x42, .sp=0x0e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe3a6, .a=0x52, .x=0x8c, .y=0x42, .sp=0x0e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe3a5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe3a5, .value=0xbe, .type=IO_READ},
        {.addr=0xe3a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_023F) {
    const struct CPU_State initial_cpu = {.pc=0xba95, .a=0xe3, .x=0x37, .y=0x3d, .sp=0xd5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xba95, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xba96, .a=0x7d, .x=0x37, .y=0x3d, .sp=0xd5, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xba95, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xba95, .value=0xbe, .type=IO_READ},
        {.addr=0xba96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0240) {
    const struct CPU_State initial_cpu = {.pc=0x3242, .a=0xb3, .x=0xf4, .y=0x11, .sp=0x10, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3242, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3243, .a=0x53, .x=0xf4, .y=0x11, .sp=0x10, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3242, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3242, .value=0xbe, .type=IO_READ},
        {.addr=0x3243, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0241) {
    const struct CPU_State initial_cpu = {.pc=0x29ce, .a=0xc8, .x=0x75, .y=0xfe, .sp=0x13, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x29ce, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x29cf, .a=0x62, .x=0x75, .y=0xfe, .sp=0x13, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x29ce, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x29ce, .value=0xbe, .type=IO_READ},
        {.addr=0x29cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0242) {
    const struct CPU_State initial_cpu = {.pc=0x956a, .a=0x97, .x=0x83, .y=0x67, .sp=0x87, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x956a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x956b, .a=0x97, .x=0x83, .y=0x67, .sp=0x87, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x956a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x956a, .value=0xbe, .type=IO_READ},
        {.addr=0x956b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0243) {
    const struct CPU_State initial_cpu = {.pc=0xc8b0, .a=0xfb, .x=0xec, .y=0xf7, .sp=0xb3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc8b1, .a=0x95, .x=0xec, .y=0xf7, .sp=0xb3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc8b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc8b0, .value=0xbe, .type=IO_READ},
        {.addr=0xc8b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0244) {
    const struct CPU_State initial_cpu = {.pc=0x6e5a, .a=0x1c, .x=0x8b, .y=0xe1, .sp=0x02, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6e5a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6e5b, .a=0x16, .x=0x8b, .y=0xe1, .sp=0x02, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6e5a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6e5a, .value=0xbe, .type=IO_READ},
        {.addr=0x6e5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0245) {
    const struct CPU_State initial_cpu = {.pc=0xed55, .a=0xcb, .x=0xf6, .y=0x86, .sp=0x49, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xed55, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xed56, .a=0x65, .x=0xf6, .y=0x86, .sp=0x49, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xed55, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xed55, .value=0xbe, .type=IO_READ},
        {.addr=0xed56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0246) {
    const struct CPU_State initial_cpu = {.pc=0x22be, .a=0x56, .x=0xf1, .y=0x93, .sp=0xae, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x22be, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x22bf, .a=0x50, .x=0xf1, .y=0x93, .sp=0xae, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x22be, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x22be, .value=0xbe, .type=IO_READ},
        {.addr=0x22bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0247) {
    const struct CPU_State initial_cpu = {.pc=0x57a2, .a=0x43, .x=0x54, .y=0xb3, .sp=0xe1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x57a2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x57a3, .a=0xdd, .x=0x54, .y=0xb3, .sp=0xe1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x57a2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x57a2, .value=0xbe, .type=IO_READ},
        {.addr=0x57a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0248) {
    const struct CPU_State initial_cpu = {.pc=0x0be6, .a=0xd8, .x=0xdc, .y=0xd2, .sp=0x64, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0be6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0be7, .a=0x72, .x=0xdc, .y=0xd2, .sp=0x64, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0be6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0be6, .value=0xbe, .type=IO_READ},
        {.addr=0x0be7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0249) {
    const struct CPU_State initial_cpu = {.pc=0x7599, .a=0xd0, .x=0xf1, .y=0x10, .sp=0xf9, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x7599, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x759a, .a=0x6a, .x=0xf1, .y=0x10, .sp=0xf9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7599, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7599, .value=0xbe, .type=IO_READ},
        {.addr=0x759a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_024A) {
    const struct CPU_State initial_cpu = {.pc=0x6074, .a=0x43, .x=0x5d, .y=0x0a, .sp=0xec, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6074, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6075, .a=0x3d, .x=0x5d, .y=0x0a, .sp=0xec, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6074, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6074, .value=0xbe, .type=IO_READ},
        {.addr=0x6075, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_024B) {
    const struct CPU_State initial_cpu = {.pc=0xd65e, .a=0x0c, .x=0xa5, .y=0xa3, .sp=0x99, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd65e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd65f, .a=0xa6, .x=0xa5, .y=0xa3, .sp=0x99, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd65e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd65e, .value=0xbe, .type=IO_READ},
        {.addr=0xd65f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_024C) {
    const struct CPU_State initial_cpu = {.pc=0xd609, .a=0x1f, .x=0x64, .y=0x1a, .sp=0xb8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd609, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd60a, .a=0x19, .x=0x64, .y=0x1a, .sp=0xb8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd609, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd609, .value=0xbe, .type=IO_READ},
        {.addr=0xd60a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_024D) {
    const struct CPU_State initial_cpu = {.pc=0x75f8, .a=0xe9, .x=0x79, .y=0x84, .sp=0x5e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x75f8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x75f9, .a=0x83, .x=0x79, .y=0x84, .sp=0x5e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x75f8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x75f8, .value=0xbe, .type=IO_READ},
        {.addr=0x75f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_024E) {
    const struct CPU_State initial_cpu = {.pc=0x38c3, .a=0x71, .x=0x2f, .y=0x6f, .sp=0x91, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x38c3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x38c4, .a=0x0b, .x=0x2f, .y=0x6f, .sp=0x91, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x38c3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x38c3, .value=0xbe, .type=IO_READ},
        {.addr=0x38c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf0ab, .a=0x80, .x=0x87, .y=0x1e, .sp=0xb5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ab, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf0ac, .a=0x80, .x=0x87, .y=0x1e, .sp=0xb5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf0ab, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf0ab, .value=0xbe, .type=IO_READ},
        {.addr=0xf0ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0250) {
    const struct CPU_State initial_cpu = {.pc=0xb50b, .a=0x6b, .x=0xd0, .y=0x31, .sp=0xa6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb50b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb50c, .a=0x05, .x=0xd0, .y=0x31, .sp=0xa6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb50b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb50b, .value=0xbe, .type=IO_READ},
        {.addr=0xb50c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0251) {
    const struct CPU_State initial_cpu = {.pc=0xa705, .a=0xbf, .x=0x84, .y=0x6b, .sp=0x42, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xa705, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa706, .a=0x59, .x=0x84, .y=0x6b, .sp=0x42, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa705, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa705, .value=0xbe, .type=IO_READ},
        {.addr=0xa706, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0252) {
    const struct CPU_State initial_cpu = {.pc=0xaf10, .a=0x66, .x=0x8e, .y=0x96, .sp=0xa9, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xaf10, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaf11, .a=0x06, .x=0x8e, .y=0x96, .sp=0xa9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xaf10, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaf10, .value=0xbe, .type=IO_READ},
        {.addr=0xaf11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0253) {
    const struct CPU_State initial_cpu = {.pc=0xf84b, .a=0xa1, .x=0xfa, .y=0x71, .sp=0xc6, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf84b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf84c, .a=0x3b, .x=0xfa, .y=0x71, .sp=0xc6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf84b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf84b, .value=0xbe, .type=IO_READ},
        {.addr=0xf84c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0254) {
    const struct CPU_State initial_cpu = {.pc=0xcfc3, .a=0x32, .x=0xc0, .y=0x31, .sp=0x06, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xcfc3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcfc4, .a=0xcc, .x=0xc0, .y=0x31, .sp=0x06, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcfc3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcfc3, .value=0xbe, .type=IO_READ},
        {.addr=0xcfc4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0255) {
    const struct CPU_State initial_cpu = {.pc=0xa6bd, .a=0x1d, .x=0xca, .y=0x8c, .sp=0xdc, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa6bd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa6be, .a=0x17, .x=0xca, .y=0x8c, .sp=0xdc, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa6bd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa6bd, .value=0xbe, .type=IO_READ},
        {.addr=0xa6be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0256) {
    const struct CPU_State initial_cpu = {.pc=0x9092, .a=0x86, .x=0x29, .y=0xef, .sp=0x88, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9092, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9093, .a=0x80, .x=0x29, .y=0xef, .sp=0x88, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9092, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9092, .value=0xbe, .type=IO_READ},
        {.addr=0x9093, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0257) {
    const struct CPU_State initial_cpu = {.pc=0x50f9, .a=0xbe, .x=0x95, .y=0xa4, .sp=0xcf, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x50f9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x50fa, .a=0x58, .x=0x95, .y=0xa4, .sp=0xcf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x50f9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x50f9, .value=0xbe, .type=IO_READ},
        {.addr=0x50fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0258) {
    const struct CPU_State initial_cpu = {.pc=0x1f67, .a=0x09, .x=0xec, .y=0xd9, .sp=0x00, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1f67, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1f68, .a=0xa9, .x=0xec, .y=0xd9, .sp=0x00, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1f67, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1f67, .value=0xbe, .type=IO_READ},
        {.addr=0x1f68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0259) {
    const struct CPU_State initial_cpu = {.pc=0x3c11, .a=0xa7, .x=0xb3, .y=0xce, .sp=0xee, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3c11, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3c12, .a=0x47, .x=0xb3, .y=0xce, .sp=0xee, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3c11, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3c11, .value=0xbe, .type=IO_READ},
        {.addr=0x3c12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_025A) {
    const struct CPU_State initial_cpu = {.pc=0xd5d1, .a=0xcc, .x=0xe5, .y=0xb4, .sp=0xbc, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd5d2, .a=0x66, .x=0xe5, .y=0xb4, .sp=0xbc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd5d1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd5d1, .value=0xbe, .type=IO_READ},
        {.addr=0xd5d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_025B) {
    const struct CPU_State initial_cpu = {.pc=0x1d11, .a=0x6a, .x=0x57, .y=0xde, .sp=0x34, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d11, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1d12, .a=0x64, .x=0x57, .y=0xde, .sp=0x34, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1d11, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1d11, .value=0xbe, .type=IO_READ},
        {.addr=0x1d12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_025C) {
    const struct CPU_State initial_cpu = {.pc=0xca1e, .a=0x79, .x=0xb0, .y=0xef, .sp=0xd1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xca1e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xca1f, .a=0x79, .x=0xb0, .y=0xef, .sp=0xd1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xca1e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xca1e, .value=0xbe, .type=IO_READ},
        {.addr=0xca1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_025D) {
    const struct CPU_State initial_cpu = {.pc=0x9fc2, .a=0xcc, .x=0x72, .y=0x09, .sp=0x70, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9fc2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9fc3, .a=0x66, .x=0x72, .y=0x09, .sp=0x70, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9fc2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9fc2, .value=0xbe, .type=IO_READ},
        {.addr=0x9fc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_025E) {
    const struct CPU_State initial_cpu = {.pc=0x2b89, .a=0xfe, .x=0xe9, .y=0xe0, .sp=0xef, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2b89, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2b8a, .a=0x98, .x=0xe9, .y=0xe0, .sp=0xef, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2b89, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2b89, .value=0xbe, .type=IO_READ},
        {.addr=0x2b8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_025F) {
    const struct CPU_State initial_cpu = {.pc=0x278d, .a=0xd2, .x=0xc8, .y=0x1e, .sp=0x0b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x278d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x278e, .a=0x6c, .x=0xc8, .y=0x1e, .sp=0x0b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x278d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x278d, .value=0xbe, .type=IO_READ},
        {.addr=0x278e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0260) {
    const struct CPU_State initial_cpu = {.pc=0x8f4c, .a=0x3e, .x=0x80, .y=0x85, .sp=0x94, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8f4c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8f4d, .a=0xd8, .x=0x80, .y=0x85, .sp=0x94, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8f4c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8f4c, .value=0xbe, .type=IO_READ},
        {.addr=0x8f4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0261) {
    const struct CPU_State initial_cpu = {.pc=0x6ed1, .a=0xb0, .x=0x8a, .y=0x7f, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6ed2, .a=0x50, .x=0x8a, .y=0x7f, .sp=0xce, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6ed1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6ed1, .value=0xbe, .type=IO_READ},
        {.addr=0x6ed2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0262) {
    const struct CPU_State initial_cpu = {.pc=0x237b, .a=0xdc, .x=0xea, .y=0xb3, .sp=0x4f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x237b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x237c, .a=0x76, .x=0xea, .y=0xb3, .sp=0x4f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x237b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x237b, .value=0xbe, .type=IO_READ},
        {.addr=0x237c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0263) {
    const struct CPU_State initial_cpu = {.pc=0xf080, .a=0x7f, .x=0x4e, .y=0xc4, .sp=0xf4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf080, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf081, .a=0x19, .x=0x4e, .y=0xc4, .sp=0xf4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf080, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf080, .value=0xbe, .type=IO_READ},
        {.addr=0xf081, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0264) {
    const struct CPU_State initial_cpu = {.pc=0xd338, .a=0x69, .x=0x30, .y=0x46, .sp=0xf0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd338, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd339, .a=0x03, .x=0x30, .y=0x46, .sp=0xf0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd338, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd338, .value=0xbe, .type=IO_READ},
        {.addr=0xd339, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0265) {
    const struct CPU_State initial_cpu = {.pc=0x3b1b, .a=0x8f, .x=0x30, .y=0xc7, .sp=0x65, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x3b1b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3b1c, .a=0x89, .x=0x30, .y=0xc7, .sp=0x65, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3b1b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3b1b, .value=0xbe, .type=IO_READ},
        {.addr=0x3b1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0266) {
    const struct CPU_State initial_cpu = {.pc=0xde6d, .a=0xde, .x=0x13, .y=0xbe, .sp=0x33, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xde6d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xde6e, .a=0x78, .x=0x13, .y=0xbe, .sp=0x33, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xde6d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xde6d, .value=0xbe, .type=IO_READ},
        {.addr=0xde6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0267) {
    const struct CPU_State initial_cpu = {.pc=0x7e74, .a=0xa0, .x=0x58, .y=0x01, .sp=0x62, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7e74, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7e75, .a=0x40, .x=0x58, .y=0x01, .sp=0x62, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7e74, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7e74, .value=0xbe, .type=IO_READ},
        {.addr=0x7e75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0268) {
    const struct CPU_State initial_cpu = {.pc=0x5751, .a=0xc2, .x=0x4b, .y=0x57, .sp=0x65, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5751, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5752, .a=0x62, .x=0x4b, .y=0x57, .sp=0x65, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5751, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5751, .value=0xbe, .type=IO_READ},
        {.addr=0x5752, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0269) {
    const struct CPU_State initial_cpu = {.pc=0x26bf, .a=0xea, .x=0xfe, .y=0x22, .sp=0x02, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x26bf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x26c0, .a=0x84, .x=0xfe, .y=0x22, .sp=0x02, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x26bf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x26bf, .value=0xbe, .type=IO_READ},
        {.addr=0x26c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_026A) {
    const struct CPU_State initial_cpu = {.pc=0xdd7d, .a=0xb0, .x=0xba, .y=0x41, .sp=0x63, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xdd7d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdd7e, .a=0x50, .x=0xba, .y=0x41, .sp=0x63, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xdd7d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdd7d, .value=0xbe, .type=IO_READ},
        {.addr=0xdd7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_026B) {
    const struct CPU_State initial_cpu = {.pc=0x0e98, .a=0x2b, .x=0x9d, .y=0xeb, .sp=0x04, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0e98, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0e99, .a=0x25, .x=0x9d, .y=0xeb, .sp=0x04, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0e98, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0e98, .value=0xbe, .type=IO_READ},
        {.addr=0x0e99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_026C) {
    const struct CPU_State initial_cpu = {.pc=0xf1aa, .a=0x71, .x=0x93, .y=0x8c, .sp=0x18, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf1aa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf1ab, .a=0x11, .x=0x93, .y=0x8c, .sp=0x18, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf1aa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf1aa, .value=0xbe, .type=IO_READ},
        {.addr=0xf1ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_026D) {
    const struct CPU_State initial_cpu = {.pc=0x157a, .a=0x60, .x=0x81, .y=0xc4, .sp=0xe2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x157a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x157b, .a=0xfa, .x=0x81, .y=0xc4, .sp=0xe2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x157a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x157a, .value=0xbe, .type=IO_READ},
        {.addr=0x157b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_026E) {
    const struct CPU_State initial_cpu = {.pc=0x2684, .a=0x8d, .x=0xc6, .y=0x34, .sp=0x6d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2684, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2685, .a=0x87, .x=0xc6, .y=0x34, .sp=0x6d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x2684, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2684, .value=0xbe, .type=IO_READ},
        {.addr=0x2685, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_026F) {
    const struct CPU_State initial_cpu = {.pc=0x99db, .a=0x82, .x=0x8e, .y=0xe7, .sp=0x82, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x99db, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x99dc, .a=0x7c, .x=0x8e, .y=0xe7, .sp=0x82, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x99db, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x99db, .value=0xbe, .type=IO_READ},
        {.addr=0x99dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0270) {
    const struct CPU_State initial_cpu = {.pc=0xe1af, .a=0x46, .x=0x67, .y=0xff, .sp=0x9b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xe1af, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe1b0, .a=0x40, .x=0x67, .y=0xff, .sp=0x9b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe1af, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe1af, .value=0xbe, .type=IO_READ},
        {.addr=0xe1b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0271) {
    const struct CPU_State initial_cpu = {.pc=0xb1a5, .a=0xc9, .x=0xd6, .y=0x0e, .sp=0xf7, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb1a5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb1a6, .a=0x63, .x=0xd6, .y=0x0e, .sp=0xf7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb1a5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb1a5, .value=0xbe, .type=IO_READ},
        {.addr=0xb1a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0272) {
    const struct CPU_State initial_cpu = {.pc=0x846a, .a=0xae, .x=0xff, .y=0x50, .sp=0x1d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x846a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x846b, .a=0x48, .x=0xff, .y=0x50, .sp=0x1d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x846a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x846a, .value=0xbe, .type=IO_READ},
        {.addr=0x846b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1978, .a=0x63, .x=0x87, .y=0xfb, .sp=0x1d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1978, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1979, .a=0x5d, .x=0x87, .y=0xfb, .sp=0x1d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1978, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1978, .value=0xbe, .type=IO_READ},
        {.addr=0x1979, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0274) {
    const struct CPU_State initial_cpu = {.pc=0xe3d7, .a=0xb2, .x=0xba, .y=0x84, .sp=0x15, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe3d7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe3d8, .a=0x52, .x=0xba, .y=0x84, .sp=0x15, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe3d7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe3d7, .value=0xbe, .type=IO_READ},
        {.addr=0xe3d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0275) {
    const struct CPU_State initial_cpu = {.pc=0x37da, .a=0x49, .x=0x3c, .y=0x65, .sp=0x1d, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x37da, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x37db, .a=0xe9, .x=0x3c, .y=0x65, .sp=0x1d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x37da, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x37da, .value=0xbe, .type=IO_READ},
        {.addr=0x37db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0276) {
    const struct CPU_State initial_cpu = {.pc=0xe325, .a=0x2e, .x=0x84, .y=0xd0, .sp=0x14, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe325, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe326, .a=0xc8, .x=0x84, .y=0xd0, .sp=0x14, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe325, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe325, .value=0xbe, .type=IO_READ},
        {.addr=0xe326, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0277) {
    const struct CPU_State initial_cpu = {.pc=0x7146, .a=0x73, .x=0xef, .y=0x5a, .sp=0x22, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7146, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7147, .a=0x6d, .x=0xef, .y=0x5a, .sp=0x22, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7146, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7146, .value=0xbe, .type=IO_READ},
        {.addr=0x7147, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0278) {
    const struct CPU_State initial_cpu = {.pc=0x3333, .a=0xcf, .x=0x30, .y=0x2f, .sp=0xeb, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x3333, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3334, .a=0x69, .x=0x30, .y=0x2f, .sp=0xeb, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3333, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3333, .value=0xbe, .type=IO_READ},
        {.addr=0x3334, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0279) {
    const struct CPU_State initial_cpu = {.pc=0x7a4d, .a=0xe6, .x=0xe0, .y=0xe1, .sp=0x60, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x7a4d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7a4e, .a=0x86, .x=0xe0, .y=0xe1, .sp=0x60, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7a4d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7a4d, .value=0xbe, .type=IO_READ},
        {.addr=0x7a4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_027A) {
    const struct CPU_State initial_cpu = {.pc=0xbe93, .a=0x3a, .x=0xb6, .y=0x5c, .sp=0x54, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe93, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbe94, .a=0xd4, .x=0xb6, .y=0x5c, .sp=0x54, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbe93, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbe93, .value=0xbe, .type=IO_READ},
        {.addr=0xbe94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0f76, .a=0x4d, .x=0x1e, .y=0x1c, .sp=0x3e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0f76, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0f77, .a=0x47, .x=0x1e, .y=0x1c, .sp=0x3e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0f76, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0f76, .value=0xbe, .type=IO_READ},
        {.addr=0x0f77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_027C) {
    const struct CPU_State initial_cpu = {.pc=0xbea5, .a=0x0a, .x=0x85, .y=0x26, .sp=0xaa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xbea5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbea6, .a=0x04, .x=0x85, .y=0x26, .sp=0xaa, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbea5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbea5, .value=0xbe, .type=IO_READ},
        {.addr=0xbea6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_027D) {
    const struct CPU_State initial_cpu = {.pc=0x52b4, .a=0xb6, .x=0x13, .y=0xbd, .sp=0xbe, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x52b4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x52b5, .a=0x56, .x=0x13, .y=0xbd, .sp=0xbe, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x52b4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x52b4, .value=0xbe, .type=IO_READ},
        {.addr=0x52b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_027E) {
    const struct CPU_State initial_cpu = {.pc=0xb7a9, .a=0xbc, .x=0xf2, .y=0x7e, .sp=0xa7, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb7aa, .a=0x56, .x=0xf2, .y=0x7e, .sp=0xa7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb7a9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb7a9, .value=0xbe, .type=IO_READ},
        {.addr=0xb7aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_027F) {
    const struct CPU_State initial_cpu = {.pc=0x3a4a, .a=0xf2, .x=0x80, .y=0x1d, .sp=0xf3, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3a4a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3a4b, .a=0x8c, .x=0x80, .y=0x1d, .sp=0xf3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3a4a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3a4a, .value=0xbe, .type=IO_READ},
        {.addr=0x3a4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0280) {
    const struct CPU_State initial_cpu = {.pc=0xbeae, .a=0x91, .x=0x3f, .y=0x2d, .sp=0xc3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xbeae, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbeaf, .a=0x91, .x=0x3f, .y=0x2d, .sp=0xc3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xbeae, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbeae, .value=0xbe, .type=IO_READ},
        {.addr=0xbeaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0281) {
    const struct CPU_State initial_cpu = {.pc=0xb8a1, .a=0x64, .x=0x59, .y=0x7b, .sp=0xb8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb8a1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb8a2, .a=0xfe, .x=0x59, .y=0x7b, .sp=0xb8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb8a1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb8a1, .value=0xbe, .type=IO_READ},
        {.addr=0xb8a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0282) {
    const struct CPU_State initial_cpu = {.pc=0xdcc0, .a=0x1e, .x=0x0a, .y=0xf7, .sp=0x40, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdcc1, .a=0x18, .x=0x0a, .y=0xf7, .sp=0x40, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xdcc0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdcc0, .value=0xbe, .type=IO_READ},
        {.addr=0xdcc1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1b1e, .a=0x5d, .x=0x18, .y=0xbc, .sp=0xde, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x1b1e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1b1f, .a=0x57, .x=0x18, .y=0xbc, .sp=0xde, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1b1e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1b1e, .value=0xbe, .type=IO_READ},
        {.addr=0x1b1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0284) {
    const struct CPU_State initial_cpu = {.pc=0x9fe3, .a=0x07, .x=0x4e, .y=0x1b, .sp=0x1c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9fe4, .a=0x07, .x=0x4e, .y=0x1b, .sp=0x1c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9fe3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9fe3, .value=0xbe, .type=IO_READ},
        {.addr=0x9fe4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0285) {
    const struct CPU_State initial_cpu = {.pc=0xfede, .a=0xbc, .x=0x6a, .y=0xb3, .sp=0xd7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xfede, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfedf, .a=0x56, .x=0x6a, .y=0xb3, .sp=0xd7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xfede, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfede, .value=0xbe, .type=IO_READ},
        {.addr=0xfedf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0286) {
    const struct CPU_State initial_cpu = {.pc=0xdc85, .a=0x15, .x=0xf8, .y=0x2b, .sp=0x0a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xdc85, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdc86, .a=0xb5, .x=0xf8, .y=0x2b, .sp=0x0a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xdc85, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdc85, .value=0xbe, .type=IO_READ},
        {.addr=0xdc86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0287) {
    const struct CPU_State initial_cpu = {.pc=0xd72f, .a=0x35, .x=0x66, .y=0xea, .sp=0xcc, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xd72f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd730, .a=0xd5, .x=0x66, .y=0xea, .sp=0xcc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd72f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd72f, .value=0xbe, .type=IO_READ},
        {.addr=0xd730, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0288) {
    const struct CPU_State initial_cpu = {.pc=0x6cb2, .a=0x32, .x=0xd1, .y=0x85, .sp=0x5f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x6cb2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6cb3, .a=0xd2, .x=0xd1, .y=0x85, .sp=0x5f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6cb2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6cb2, .value=0xbe, .type=IO_READ},
        {.addr=0x6cb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0289) {
    const struct CPU_State initial_cpu = {.pc=0x8e32, .a=0x35, .x=0x50, .y=0x02, .sp=0xbd, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x8e32, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8e33, .a=0xcf, .x=0x50, .y=0x02, .sp=0xbd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8e32, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8e32, .value=0xbe, .type=IO_READ},
        {.addr=0x8e33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_028A) {
    const struct CPU_State initial_cpu = {.pc=0xdea6, .a=0xa0, .x=0x50, .y=0x81, .sp=0x35, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xdea6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdea7, .a=0x40, .x=0x50, .y=0x81, .sp=0x35, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdea6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdea6, .value=0xbe, .type=IO_READ},
        {.addr=0xdea7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_028B) {
    const struct CPU_State initial_cpu = {.pc=0x16d4, .a=0x86, .x=0x4a, .y=0x26, .sp=0xb2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x16d4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x16d5, .a=0x80, .x=0x4a, .y=0x26, .sp=0xb2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x16d4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x16d4, .value=0xbe, .type=IO_READ},
        {.addr=0x16d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_028C) {
    const struct CPU_State initial_cpu = {.pc=0xa5b7, .a=0xcb, .x=0x04, .y=0xfb, .sp=0xc7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa5b8, .a=0x65, .x=0x04, .y=0xfb, .sp=0xc7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa5b7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa5b7, .value=0xbe, .type=IO_READ},
        {.addr=0xa5b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_028D) {
    const struct CPU_State initial_cpu = {.pc=0xf525, .a=0x54, .x=0x93, .y=0x02, .sp=0x18, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf525, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf526, .a=0xf4, .x=0x93, .y=0x02, .sp=0x18, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf525, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf525, .value=0xbe, .type=IO_READ},
        {.addr=0xf526, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_028E) {
    const struct CPU_State initial_cpu = {.pc=0x7d0c, .a=0xf5, .x=0xd1, .y=0x44, .sp=0x4c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7d0d, .a=0x95, .x=0xd1, .y=0x44, .sp=0x4c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7d0c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7d0c, .value=0xbe, .type=IO_READ},
        {.addr=0x7d0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_028F) {
    const struct CPU_State initial_cpu = {.pc=0x0bc6, .a=0x0c, .x=0xd4, .y=0x7a, .sp=0x87, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0bc7, .a=0x06, .x=0xd4, .y=0x7a, .sp=0x87, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0bc6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0bc6, .value=0xbe, .type=IO_READ},
        {.addr=0x0bc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0290) {
    const struct CPU_State initial_cpu = {.pc=0xca9f, .a=0xea, .x=0xeb, .y=0x54, .sp=0xe5, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xca9f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcaa0, .a=0x84, .x=0xeb, .y=0x54, .sp=0xe5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xca9f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xca9f, .value=0xbe, .type=IO_READ},
        {.addr=0xcaa0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0291) {
    const struct CPU_State initial_cpu = {.pc=0x9ec1, .a=0xfe, .x=0x54, .y=0x5d, .sp=0x5e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9ec2, .a=0x98, .x=0x54, .y=0x5d, .sp=0x5e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9ec1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9ec1, .value=0xbe, .type=IO_READ},
        {.addr=0x9ec2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0292) {
    const struct CPU_State initial_cpu = {.pc=0xd85a, .a=0x19, .x=0x75, .y=0x71, .sp=0x72, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xd85a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd85b, .a=0xb3, .x=0x75, .y=0x71, .sp=0x72, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd85a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd85a, .value=0xbe, .type=IO_READ},
        {.addr=0xd85b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0293) {
    const struct CPU_State initial_cpu = {.pc=0xe5bf, .a=0x0a, .x=0xdf, .y=0x69, .sp=0xda, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe5bf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe5c0, .a=0xa4, .x=0xdf, .y=0x69, .sp=0xda, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe5bf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe5bf, .value=0xbe, .type=IO_READ},
        {.addr=0xe5c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0294) {
    const struct CPU_State initial_cpu = {.pc=0x6d5e, .a=0xfd, .x=0xd7, .y=0x01, .sp=0x12, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6d5f, .a=0x97, .x=0xd7, .y=0x01, .sp=0x12, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6d5e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6d5e, .value=0xbe, .type=IO_READ},
        {.addr=0x6d5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0295) {
    const struct CPU_State initial_cpu = {.pc=0xa520, .a=0x46, .x=0x68, .y=0xc9, .sp=0xc6, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xa520, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa521, .a=0x40, .x=0x68, .y=0xc9, .sp=0xc6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa520, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa520, .value=0xbe, .type=IO_READ},
        {.addr=0xa521, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0296) {
    const struct CPU_State initial_cpu = {.pc=0x4e24, .a=0x51, .x=0xca, .y=0xb9, .sp=0x28, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4e24, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4e25, .a=0xf1, .x=0xca, .y=0xb9, .sp=0x28, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4e24, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4e24, .value=0xbe, .type=IO_READ},
        {.addr=0x4e25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0297) {
    const struct CPU_State initial_cpu = {.pc=0x73da, .a=0xfb, .x=0x27, .y=0xec, .sp=0x87, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x73da, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x73db, .a=0x95, .x=0x27, .y=0xec, .sp=0x87, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x73da, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x73da, .value=0xbe, .type=IO_READ},
        {.addr=0x73db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0298) {
    const struct CPU_State initial_cpu = {.pc=0x84eb, .a=0x6c, .x=0xc7, .y=0xf6, .sp=0xc2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x84eb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x84ec, .a=0x06, .x=0xc7, .y=0xf6, .sp=0xc2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x84eb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x84eb, .value=0xbe, .type=IO_READ},
        {.addr=0x84ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0299) {
    const struct CPU_State initial_cpu = {.pc=0x0592, .a=0xd6, .x=0x2f, .y=0x09, .sp=0xac, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0592, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0593, .a=0x76, .x=0x2f, .y=0x09, .sp=0xac, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0592, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0592, .value=0xbe, .type=IO_READ},
        {.addr=0x0593, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_029A) {
    const struct CPU_State initial_cpu = {.pc=0xd90b, .a=0xc9, .x=0x4a, .y=0x39, .sp=0x77, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd90b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd90c, .a=0x69, .x=0x4a, .y=0x39, .sp=0x77, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd90b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd90b, .value=0xbe, .type=IO_READ},
        {.addr=0xd90c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_029B) {
    const struct CPU_State initial_cpu = {.pc=0xf646, .a=0xf9, .x=0x76, .y=0x94, .sp=0xb4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf646, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf647, .a=0x99, .x=0x76, .y=0x94, .sp=0xb4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf646, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf646, .value=0xbe, .type=IO_READ},
        {.addr=0xf647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9b72, .a=0x66, .x=0x09, .y=0x97, .sp=0x79, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x9b72, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9b73, .a=0x66, .x=0x09, .y=0x97, .sp=0x79, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9b72, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9b72, .value=0xbe, .type=IO_READ},
        {.addr=0x9b73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_029D) {
    const struct CPU_State initial_cpu = {.pc=0x8241, .a=0x6e, .x=0x78, .y=0xab, .sp=0x9e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8241, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8242, .a=0x08, .x=0x78, .y=0xab, .sp=0x9e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8241, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8241, .value=0xbe, .type=IO_READ},
        {.addr=0x8242, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_029E) {
    const struct CPU_State initial_cpu = {.pc=0xbc8f, .a=0x67, .x=0x03, .y=0xe7, .sp=0xed, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbc8f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbc90, .a=0x61, .x=0x03, .y=0xe7, .sp=0xed, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbc8f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbc8f, .value=0xbe, .type=IO_READ},
        {.addr=0xbc90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_029F) {
    const struct CPU_State initial_cpu = {.pc=0x7e92, .a=0x13, .x=0x82, .y=0xac, .sp=0x2b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7e92, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7e93, .a=0xad, .x=0x82, .y=0xac, .sp=0x2b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7e92, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7e92, .value=0xbe, .type=IO_READ},
        {.addr=0x7e93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9614, .a=0xfd, .x=0x72, .y=0x69, .sp=0x9d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x9614, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9615, .a=0x97, .x=0x72, .y=0x69, .sp=0x9d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9614, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9614, .value=0xbe, .type=IO_READ},
        {.addr=0x9615, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xc9b1, .a=0x13, .x=0x3d, .y=0xed, .sp=0xbe, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc9b2, .a=0x0d, .x=0x3d, .y=0xed, .sp=0xbe, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc9b1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc9b1, .value=0xbe, .type=IO_READ},
        {.addr=0xc9b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xb624, .a=0x0f, .x=0xc2, .y=0x34, .sp=0x2a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb624, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb625, .a=0x09, .x=0xc2, .y=0x34, .sp=0x2a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb624, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb624, .value=0xbe, .type=IO_READ},
        {.addr=0xb625, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xc1a3, .a=0x1e, .x=0xcb, .y=0x6d, .sp=0x72, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc1a4, .a=0xb8, .x=0xcb, .y=0x6d, .sp=0x72, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc1a3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc1a3, .value=0xbe, .type=IO_READ},
        {.addr=0xc1a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x1458, .a=0x16, .x=0x11, .y=0x89, .sp=0xcc, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1458, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1459, .a=0x10, .x=0x11, .y=0x89, .sp=0xcc, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1458, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1458, .value=0xbe, .type=IO_READ},
        {.addr=0x1459, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x6cdf, .a=0x09, .x=0xf2, .y=0x09, .sp=0x54, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6cdf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6ce0, .a=0xa3, .x=0xf2, .y=0x09, .sp=0x54, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6cdf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6cdf, .value=0xbe, .type=IO_READ},
        {.addr=0x6ce0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x3f6f, .a=0xc8, .x=0x03, .y=0x18, .sp=0xc2, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x3f6f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3f70, .a=0x62, .x=0x03, .y=0x18, .sp=0xc2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3f6f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3f6f, .value=0xbe, .type=IO_READ},
        {.addr=0x3f70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x3297, .a=0x1a, .x=0xe1, .y=0x91, .sp=0x09, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3297, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3298, .a=0x14, .x=0xe1, .y=0x91, .sp=0x09, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3297, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3297, .value=0xbe, .type=IO_READ},
        {.addr=0x3298, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x03ec, .a=0xa3, .x=0x9e, .y=0xdf, .sp=0xef, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x03ec, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x03ed, .a=0x43, .x=0x9e, .y=0xdf, .sp=0xef, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x03ec, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x03ec, .value=0xbe, .type=IO_READ},
        {.addr=0x03ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x4020, .a=0x23, .x=0x56, .y=0x15, .sp=0x7e, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4020, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4021, .a=0xbd, .x=0x56, .y=0x15, .sp=0x7e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4020, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4020, .value=0xbe, .type=IO_READ},
        {.addr=0x4021, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x6eec, .a=0x64, .x=0xbd, .y=0xc6, .sp=0xfa, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6eec, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6eed, .a=0x64, .x=0xbd, .y=0xc6, .sp=0xfa, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6eec, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6eec, .value=0xbe, .type=IO_READ},
        {.addr=0x6eed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xb097, .a=0x3f, .x=0x90, .y=0xfb, .sp=0x0f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xb097, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb098, .a=0x39, .x=0x90, .y=0xfb, .sp=0x0f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb097, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb097, .value=0xbe, .type=IO_READ},
        {.addr=0xb098, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x4be4, .a=0xdb, .x=0x5d, .y=0x39, .sp=0x4b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4be4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4be5, .a=0x75, .x=0x5d, .y=0x39, .sp=0x4b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4be4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4be4, .value=0xbe, .type=IO_READ},
        {.addr=0x4be5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x0e07, .a=0x9b, .x=0xeb, .y=0x6a, .sp=0x99, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0e07, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0e08, .a=0x35, .x=0xeb, .y=0x6a, .sp=0x99, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0e07, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0e07, .value=0xbe, .type=IO_READ},
        {.addr=0x0e08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xc2b4, .a=0x33, .x=0x34, .y=0x49, .sp=0xd4, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xc2b4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc2b5, .a=0xcd, .x=0x34, .y=0x49, .sp=0xd4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc2b4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc2b4, .value=0xbe, .type=IO_READ},
        {.addr=0xc2b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xb38d, .a=0xba, .x=0x04, .y=0x7d, .sp=0x9c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb38d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb38e, .a=0x54, .x=0x04, .y=0x7d, .sp=0x9c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb38d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb38d, .value=0xbe, .type=IO_READ},
        {.addr=0xb38e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xaf1b, .a=0xb8, .x=0x83, .y=0xbe, .sp=0xae, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xaf1b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaf1c, .a=0x58, .x=0x83, .y=0xbe, .sp=0xae, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xaf1b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaf1b, .value=0xbe, .type=IO_READ},
        {.addr=0xaf1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xc1df, .a=0x2c, .x=0x1a, .y=0x21, .sp=0x34, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc1df, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc1e0, .a=0xc6, .x=0x1a, .y=0x21, .sp=0x34, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc1df, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc1df, .value=0xbe, .type=IO_READ},
        {.addr=0xc1e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x341c, .a=0x38, .x=0x42, .y=0x1f, .sp=0x68, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x341c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x341d, .a=0x32, .x=0x42, .y=0x1f, .sp=0x68, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x341c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x341c, .value=0xbe, .type=IO_READ},
        {.addr=0x341d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xf9d8, .a=0xed, .x=0xdb, .y=0xb5, .sp=0x7b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf9d9, .a=0x87, .x=0xdb, .y=0xb5, .sp=0x7b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf9d8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf9d8, .value=0xbe, .type=IO_READ},
        {.addr=0xf9d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xb84e, .a=0x83, .x=0x73, .y=0xec, .sp=0xf7, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb84e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb84f, .a=0x83, .x=0x73, .y=0xec, .sp=0xf7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb84e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb84e, .value=0xbe, .type=IO_READ},
        {.addr=0xb84f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x4c03, .a=0xe8, .x=0xc9, .y=0xf8, .sp=0x38, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c03, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4c04, .a=0x88, .x=0xc9, .y=0xf8, .sp=0x38, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4c03, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4c03, .value=0xbe, .type=IO_READ},
        {.addr=0x4c04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x83ad, .a=0xea, .x=0xa9, .y=0x9c, .sp=0x88, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x83ad, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x83ae, .a=0x84, .x=0xa9, .y=0x9c, .sp=0x88, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x83ad, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x83ad, .value=0xbe, .type=IO_READ},
        {.addr=0x83ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xcfa6, .a=0x0b, .x=0x54, .y=0x0e, .sp=0x03, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcfa7, .a=0x05, .x=0x54, .y=0x0e, .sp=0x03, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcfa6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcfa6, .value=0xbe, .type=IO_READ},
        {.addr=0xcfa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xf041, .a=0xab, .x=0x77, .y=0xe7, .sp=0x30, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf041, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf042, .a=0x45, .x=0x77, .y=0xe7, .sp=0x30, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf041, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf041, .value=0xbe, .type=IO_READ},
        {.addr=0xf042, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xaac0, .a=0xb6, .x=0xb7, .y=0xb7, .sp=0x5a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xaac0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaac1, .a=0x50, .x=0xb7, .y=0xb7, .sp=0x5a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xaac0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaac0, .value=0xbe, .type=IO_READ},
        {.addr=0xaac1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x877c, .a=0xd6, .x=0x02, .y=0x92, .sp=0xae, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x877c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x877d, .a=0x70, .x=0x02, .y=0x92, .sp=0xae, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x877c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x877c, .value=0xbe, .type=IO_READ},
        {.addr=0x877d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x846d, .a=0x2e, .x=0x0d, .y=0xfc, .sp=0x69, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x846d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x846e, .a=0x28, .x=0x0d, .y=0xfc, .sp=0x69, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x846d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x846d, .value=0xbe, .type=IO_READ},
        {.addr=0x846e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x5649, .a=0x98, .x=0x09, .y=0xf1, .sp=0x9c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5649, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x564a, .a=0x32, .x=0x09, .y=0xf1, .sp=0x9c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5649, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5649, .value=0xbe, .type=IO_READ},
        {.addr=0x564a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xc8e1, .a=0xd1, .x=0xa7, .y=0x37, .sp=0x95, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc8e2, .a=0x6b, .x=0xa7, .y=0x37, .sp=0x95, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc8e1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc8e1, .value=0xbe, .type=IO_READ},
        {.addr=0xc8e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xd8e5, .a=0xec, .x=0x42, .y=0x7c, .sp=0x46, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd8e6, .a=0x86, .x=0x42, .y=0x7c, .sp=0x46, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd8e5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd8e5, .value=0xbe, .type=IO_READ},
        {.addr=0xd8e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xe7ea, .a=0xed, .x=0x8d, .y=0x6a, .sp=0xfc, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ea, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe7eb, .a=0x87, .x=0x8d, .y=0x6a, .sp=0xfc, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe7ea, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe7ea, .value=0xbe, .type=IO_READ},
        {.addr=0xe7eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x65c9, .a=0xbf, .x=0xc9, .y=0x78, .sp=0xfe, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x65c9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x65ca, .a=0x59, .x=0xc9, .y=0x78, .sp=0xfe, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x65c9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x65c9, .value=0xbe, .type=IO_READ},
        {.addr=0x65ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xdcee, .a=0xe1, .x=0x34, .y=0x80, .sp=0xb8, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xdcee, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdcef, .a=0x81, .x=0x34, .y=0x80, .sp=0xb8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xdcee, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdcee, .value=0xbe, .type=IO_READ},
        {.addr=0xdcef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xa158, .a=0x1f, .x=0x72, .y=0x1f, .sp=0x9b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xa158, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa159, .a=0xb9, .x=0x72, .y=0x1f, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa158, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa158, .value=0xbe, .type=IO_READ},
        {.addr=0xa159, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xabdc, .a=0xf5, .x=0xd3, .y=0xa3, .sp=0xaf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xabdc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xabdd, .a=0x8f, .x=0xd3, .y=0xa3, .sp=0xaf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xabdc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xabdc, .value=0xbe, .type=IO_READ},
        {.addr=0xabdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8bd3, .a=0x9d, .x=0x66, .y=0x4d, .sp=0x77, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8bd4, .a=0x37, .x=0x66, .y=0x4d, .sp=0x77, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8bd3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8bd3, .value=0xbe, .type=IO_READ},
        {.addr=0x8bd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x8e01, .a=0x0b, .x=0x2d, .y=0x50, .sp=0x09, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8e01, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8e02, .a=0xa5, .x=0x2d, .y=0x50, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8e01, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8e01, .value=0xbe, .type=IO_READ},
        {.addr=0x8e02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x1ac9, .a=0xab, .x=0xfb, .y=0xcd, .sp=0x79, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1ac9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1aca, .a=0x45, .x=0xfb, .y=0xcd, .sp=0x79, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1ac9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1ac9, .value=0xbe, .type=IO_READ},
        {.addr=0x1aca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x0b6a, .a=0x6e, .x=0x6d, .y=0x08, .sp=0x29, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0b6a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0b6b, .a=0x68, .x=0x6d, .y=0x08, .sp=0x29, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0b6a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0b6a, .value=0xbe, .type=IO_READ},
        {.addr=0x0b6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xf424, .a=0x95, .x=0xd2, .y=0xff, .sp=0x51, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf424, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf425, .a=0x35, .x=0xd2, .y=0xff, .sp=0x51, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf424, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf424, .value=0xbe, .type=IO_READ},
        {.addr=0xf425, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x37a6, .a=0xaa, .x=0xda, .y=0xfe, .sp=0x6c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x37a6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x37a7, .a=0x44, .x=0xda, .y=0xfe, .sp=0x6c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x37a6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x37a6, .value=0xbe, .type=IO_READ},
        {.addr=0x37a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x4be0, .a=0x4f, .x=0x28, .y=0x42, .sp=0x9a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x4be0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4be1, .a=0x49, .x=0x28, .y=0x42, .sp=0x9a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4be0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4be0, .value=0xbe, .type=IO_READ},
        {.addr=0x4be1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xcfe5, .a=0xec, .x=0xc8, .y=0xed, .sp=0xbe, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcfe6, .a=0x86, .x=0xc8, .y=0xed, .sp=0xbe, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xcfe5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcfe5, .value=0xbe, .type=IO_READ},
        {.addr=0xcfe6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x94b7, .a=0xf5, .x=0x25, .y=0xa6, .sp=0x69, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x94b7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x94b8, .a=0x95, .x=0x25, .y=0xa6, .sp=0x69, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x94b7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x94b7, .value=0xbe, .type=IO_READ},
        {.addr=0x94b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2421, .a=0x2e, .x=0xf5, .y=0x9d, .sp=0xbc, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2421, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2422, .a=0x28, .x=0xf5, .y=0x9d, .sp=0xbc, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2421, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2421, .value=0xbe, .type=IO_READ},
        {.addr=0x2422, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0x53, .x=0x72, .y=0xf5, .sp=0xe8, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5ada, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5adb, .a=0xed, .x=0x72, .y=0xf5, .sp=0xe8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5ada, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0xbe, .type=IO_READ},
        {.addr=0x5adb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x66cd, .a=0xd7, .x=0x5e, .y=0x07, .sp=0xe2, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x66cd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x66ce, .a=0x71, .x=0x5e, .y=0x07, .sp=0xe2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x66cd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x66cd, .value=0xbe, .type=IO_READ},
        {.addr=0x66ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x68eb, .a=0xa6, .x=0x43, .y=0x3b, .sp=0xab, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x68eb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x68ec, .a=0x40, .x=0x43, .y=0x3b, .sp=0xab, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x68eb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x68eb, .value=0xbe, .type=IO_READ},
        {.addr=0x68ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xd091, .a=0xa5, .x=0x3c, .y=0x30, .sp=0xf3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd091, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd092, .a=0x3f, .x=0x3c, .y=0x30, .sp=0xf3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd091, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd091, .value=0xbe, .type=IO_READ},
        {.addr=0xd092, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x6500, .a=0x89, .x=0xfc, .y=0x69, .sp=0xde, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6500, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6501, .a=0x29, .x=0xfc, .y=0x69, .sp=0xde, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x6500, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6500, .value=0xbe, .type=IO_READ},
        {.addr=0x6501, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x7aa9, .a=0xeb, .x=0xc9, .y=0x62, .sp=0x31, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7aaa, .a=0x85, .x=0xc9, .y=0x62, .sp=0x31, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7aa9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7aa9, .value=0xbe, .type=IO_READ},
        {.addr=0x7aaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xa9eb, .a=0xbd, .x=0xbd, .y=0x19, .sp=0x85, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa9eb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa9ec, .a=0x57, .x=0xbd, .y=0x19, .sp=0x85, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa9eb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa9eb, .value=0xbe, .type=IO_READ},
        {.addr=0xa9ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x542d, .a=0x4b, .x=0x1e, .y=0xb7, .sp=0x23, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x542d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x542e, .a=0x45, .x=0x1e, .y=0xb7, .sp=0x23, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x542d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x542d, .value=0xbe, .type=IO_READ},
        {.addr=0x542e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x2457, .a=0x68, .x=0x0c, .y=0xcf, .sp=0x29, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2457, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2458, .a=0x68, .x=0x0c, .y=0xcf, .sp=0x29, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2457, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2457, .value=0xbe, .type=IO_READ},
        {.addr=0x2458, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x37a2, .a=0x13, .x=0x4b, .y=0x5f, .sp=0xdf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x37a2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x37a3, .a=0xb3, .x=0x4b, .y=0x5f, .sp=0xdf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x37a2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x37a2, .value=0xbe, .type=IO_READ},
        {.addr=0x37a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x6b15, .a=0x35, .x=0x4f, .y=0x2d, .sp=0xa8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6b15, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6b16, .a=0x35, .x=0x4f, .y=0x2d, .sp=0xa8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6b15, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6b15, .value=0xbe, .type=IO_READ},
        {.addr=0x6b16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x96cc, .a=0x63, .x=0x59, .y=0x89, .sp=0x88, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x96cc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x96cd, .a=0x63, .x=0x59, .y=0x89, .sp=0x88, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x96cc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x96cc, .value=0xbe, .type=IO_READ},
        {.addr=0x96cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xe957, .a=0x39, .x=0x8d, .y=0x1b, .sp=0x59, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe957, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe958, .a=0x39, .x=0x8d, .y=0x1b, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe957, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe957, .value=0xbe, .type=IO_READ},
        {.addr=0xe958, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x8a6e, .a=0xa0, .x=0xe6, .y=0xd6, .sp=0x61, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x8a6e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8a6f, .a=0x40, .x=0xe6, .y=0xd6, .sp=0x61, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8a6e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8a6e, .value=0xbe, .type=IO_READ},
        {.addr=0x8a6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x9bdb, .a=0x25, .x=0x05, .y=0xa1, .sp=0x70, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9bdb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9bdc, .a=0xbf, .x=0x05, .y=0xa1, .sp=0x70, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9bdb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9bdb, .value=0xbe, .type=IO_READ},
        {.addr=0x9bdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x9c48, .a=0x99, .x=0x6d, .y=0xc1, .sp=0xc6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c48, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9c49, .a=0x99, .x=0x6d, .y=0xc1, .sp=0xc6, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9c48, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9c48, .value=0xbe, .type=IO_READ},
        {.addr=0x9c49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x28e1, .a=0x64, .x=0x93, .y=0xc7, .sp=0x4b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x28e1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x28e2, .a=0x04, .x=0x93, .y=0xc7, .sp=0x4b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x28e1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x28e1, .value=0xbe, .type=IO_READ},
        {.addr=0x28e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xfb33, .a=0x62, .x=0xb9, .y=0xb0, .sp=0xd5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfb33, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfb34, .a=0xfc, .x=0xb9, .y=0xb0, .sp=0xd5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfb33, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfb33, .value=0xbe, .type=IO_READ},
        {.addr=0xfb34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xfa8c, .a=0xee, .x=0x44, .y=0x22, .sp=0xd5, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xfa8c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfa8d, .a=0x88, .x=0x44, .y=0x22, .sp=0xd5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xfa8c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfa8c, .value=0xbe, .type=IO_READ},
        {.addr=0xfa8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x3931, .a=0xfd, .x=0x6d, .y=0xe5, .sp=0xa7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3931, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3932, .a=0x97, .x=0x6d, .y=0xe5, .sp=0xa7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3931, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3931, .value=0xbe, .type=IO_READ},
        {.addr=0x3932, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x41e1, .a=0x31, .x=0xcd, .y=0x2b, .sp=0x37, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x41e1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x41e2, .a=0xd1, .x=0xcd, .y=0x2b, .sp=0x37, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x41e1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x41e1, .value=0xbe, .type=IO_READ},
        {.addr=0x41e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xc6a7, .a=0x22, .x=0x20, .y=0xea, .sp=0xff, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc6a7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc6a8, .a=0x22, .x=0x20, .y=0xea, .sp=0xff, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc6a7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc6a7, .value=0xbe, .type=IO_READ},
        {.addr=0xc6a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xb264, .a=0xbf, .x=0xae, .y=0x67, .sp=0x2b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb264, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb265, .a=0x59, .x=0xae, .y=0x67, .sp=0x2b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb264, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb264, .value=0xbe, .type=IO_READ},
        {.addr=0xb265, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xeaea, .a=0x09, .x=0xd5, .y=0x33, .sp=0x99, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xeaea, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeaeb, .a=0xa9, .x=0xd5, .y=0x33, .sp=0x99, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xeaea, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeaea, .value=0xbe, .type=IO_READ},
        {.addr=0xeaeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x6d99, .a=0x0f, .x=0xde, .y=0xf3, .sp=0x04, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6d99, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6d9a, .a=0xa9, .x=0xde, .y=0xf3, .sp=0x04, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6d99, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6d99, .value=0xbe, .type=IO_READ},
        {.addr=0x6d9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xd78b, .a=0x0d, .x=0x51, .y=0x2f, .sp=0x54, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd78b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd78c, .a=0xa7, .x=0x51, .y=0x2f, .sp=0x54, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd78b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd78b, .value=0xbe, .type=IO_READ},
        {.addr=0xd78c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xb15f, .a=0x94, .x=0xed, .y=0xca, .sp=0xfd, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb15f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb160, .a=0x34, .x=0xed, .y=0xca, .sp=0xfd, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb15f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb15f, .value=0xbe, .type=IO_READ},
        {.addr=0xb160, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x6361, .a=0xa1, .x=0x95, .y=0x8d, .sp=0xec, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6361, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6362, .a=0x3b, .x=0x95, .y=0x8d, .sp=0xec, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6361, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6361, .value=0xbe, .type=IO_READ},
        {.addr=0x6362, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x9190, .a=0x50, .x=0xe6, .y=0xe2, .sp=0x6d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9190, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9191, .a=0x4a, .x=0xe6, .y=0xe2, .sp=0x6d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9190, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9190, .value=0xbe, .type=IO_READ},
        {.addr=0x9191, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7ee5, .a=0x19, .x=0x29, .y=0xb5, .sp=0x47, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7ee6, .a=0x13, .x=0x29, .y=0xb5, .sp=0x47, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7ee5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7ee5, .value=0xbe, .type=IO_READ},
        {.addr=0x7ee6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xbe70, .a=0x1a, .x=0xae, .y=0x35, .sp=0x4f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbe70, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbe71, .a=0x14, .x=0xae, .y=0x35, .sp=0x4f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbe70, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbe70, .value=0xbe, .type=IO_READ},
        {.addr=0xbe71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xba16, .a=0xfc, .x=0x9a, .y=0xfc, .sp=0x1b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xba16, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xba17, .a=0x96, .x=0x9a, .y=0xfc, .sp=0x1b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xba16, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xba16, .value=0xbe, .type=IO_READ},
        {.addr=0xba17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x147b, .a=0x55, .x=0x5c, .y=0x0d, .sp=0x79, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x147b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x147c, .a=0x55, .x=0x5c, .y=0x0d, .sp=0x79, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x147b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x147b, .value=0xbe, .type=IO_READ},
        {.addr=0x147c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xd3d4, .a=0xde, .x=0x30, .y=0x25, .sp=0xd1, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd3d5, .a=0x78, .x=0x30, .y=0x25, .sp=0xd1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd3d4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd3d4, .value=0xbe, .type=IO_READ},
        {.addr=0xd3d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xcb82, .a=0x0c, .x=0x48, .y=0xf5, .sp=0x12, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xcb82, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcb83, .a=0xa6, .x=0x48, .y=0xf5, .sp=0x12, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcb82, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcb82, .value=0xbe, .type=IO_READ},
        {.addr=0xcb83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x7485, .a=0x59, .x=0x30, .y=0x81, .sp=0x7f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7485, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7486, .a=0xf3, .x=0x30, .y=0x81, .sp=0x7f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7485, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7485, .value=0xbe, .type=IO_READ},
        {.addr=0x7486, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x99f6, .a=0x0d, .x=0x47, .y=0x63, .sp=0xc0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x99f6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x99f7, .a=0xa7, .x=0x47, .y=0x63, .sp=0xc0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x99f6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x99f6, .value=0xbe, .type=IO_READ},
        {.addr=0x99f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xb78f, .a=0x6e, .x=0x49, .y=0x1b, .sp=0x16, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb78f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb790, .a=0x08, .x=0x49, .y=0x1b, .sp=0x16, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb78f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb78f, .value=0xbe, .type=IO_READ},
        {.addr=0xb790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xfd49, .a=0x03, .x=0xa3, .y=0x90, .sp=0x9d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfd49, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfd4a, .a=0x9d, .x=0xa3, .y=0x90, .sp=0x9d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfd49, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfd49, .value=0xbe, .type=IO_READ},
        {.addr=0xfd4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x07f3, .a=0x3e, .x=0x5a, .y=0xa7, .sp=0x93, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x07f3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x07f4, .a=0xd8, .x=0x5a, .y=0xa7, .sp=0x93, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x07f3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x07f3, .value=0xbe, .type=IO_READ},
        {.addr=0x07f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xccee, .a=0x76, .x=0x09, .y=0x0a, .sp=0x46, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xccee, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xccef, .a=0x76, .x=0x09, .y=0x0a, .sp=0x46, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xccee, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xccee, .value=0xbe, .type=IO_READ},
        {.addr=0xccef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x8201, .a=0x60, .x=0x53, .y=0xe5, .sp=0x89, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x8201, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8202, .a=0xfa, .x=0x53, .y=0xe5, .sp=0x89, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8201, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8201, .value=0xbe, .type=IO_READ},
        {.addr=0x8202, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xa511, .a=0xd0, .x=0xa3, .y=0x03, .sp=0x1d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa511, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa512, .a=0x6a, .x=0xa3, .y=0x03, .sp=0x1d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa511, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa511, .value=0xbe, .type=IO_READ},
        {.addr=0xa512, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xbaaf, .a=0x83, .x=0x14, .y=0x6e, .sp=0x9c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbaaf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbab0, .a=0x83, .x=0x14, .y=0x6e, .sp=0x9c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xbaaf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbaaf, .value=0xbe, .type=IO_READ},
        {.addr=0xbab0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x84ad, .a=0xf8, .x=0xcb, .y=0x1d, .sp=0xc2, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x84ad, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x84ae, .a=0x98, .x=0xcb, .y=0x1d, .sp=0xc2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x84ad, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x84ad, .value=0xbe, .type=IO_READ},
        {.addr=0x84ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x5e53, .a=0xfb, .x=0xdf, .y=0xa3, .sp=0x2b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x5e53, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5e54, .a=0x95, .x=0xdf, .y=0xa3, .sp=0x2b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5e53, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5e53, .value=0xbe, .type=IO_READ},
        {.addr=0x5e54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xe029, .a=0x84, .x=0x98, .y=0x20, .sp=0x59, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe029, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe02a, .a=0x7e, .x=0x98, .y=0x20, .sp=0x59, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe029, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe029, .value=0xbe, .type=IO_READ},
        {.addr=0xe02a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x2935, .a=0x09, .x=0x94, .y=0xff, .sp=0x5a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2935, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2936, .a=0x03, .x=0x94, .y=0xff, .sp=0x5a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2935, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2935, .value=0xbe, .type=IO_READ},
        {.addr=0x2936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x7f81, .a=0x91, .x=0x86, .y=0x73, .sp=0x5a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7f81, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7f82, .a=0x2b, .x=0x86, .y=0x73, .sp=0x5a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7f81, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7f81, .value=0xbe, .type=IO_READ},
        {.addr=0x7f82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x48cf, .a=0x74, .x=0xc7, .y=0xc1, .sp=0xa8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x48cf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x48d0, .a=0x74, .x=0xc7, .y=0xc1, .sp=0xa8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x48cf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x48cf, .value=0xbe, .type=IO_READ},
        {.addr=0x48d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0300) {
    const struct CPU_State initial_cpu = {.pc=0x80b0, .a=0xd0, .x=0x58, .y=0xd4, .sp=0xa8, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x80b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x80b1, .a=0x70, .x=0x58, .y=0xd4, .sp=0xa8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x80b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x80b0, .value=0xbe, .type=IO_READ},
        {.addr=0x80b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0301) {
    const struct CPU_State initial_cpu = {.pc=0x7aa5, .a=0xd6, .x=0x39, .y=0xb6, .sp=0x08, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7aa6, .a=0x76, .x=0x39, .y=0xb6, .sp=0x08, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7aa5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7aa5, .value=0xbe, .type=IO_READ},
        {.addr=0x7aa6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4369, .a=0x1c, .x=0x12, .y=0xaa, .sp=0xd9, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4369, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x436a, .a=0x16, .x=0x12, .y=0xaa, .sp=0xd9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4369, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4369, .value=0xbe, .type=IO_READ},
        {.addr=0x436a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0303) {
    const struct CPU_State initial_cpu = {.pc=0x2d0a, .a=0x29, .x=0x41, .y=0xc2, .sp=0x27, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x2d0a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2d0b, .a=0x23, .x=0x41, .y=0xc2, .sp=0x27, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2d0a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2d0a, .value=0xbe, .type=IO_READ},
        {.addr=0x2d0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0304) {
    const struct CPU_State initial_cpu = {.pc=0x2413, .a=0x89, .x=0x0b, .y=0xd3, .sp=0x21, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2413, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2414, .a=0x29, .x=0x0b, .y=0xd3, .sp=0x21, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2413, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2413, .value=0xbe, .type=IO_READ},
        {.addr=0x2414, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0305) {
    const struct CPU_State initial_cpu = {.pc=0xcbb9, .a=0xa0, .x=0xeb, .y=0x74, .sp=0xaf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xcbb9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcbba, .a=0x3a, .x=0xeb, .y=0x74, .sp=0xaf, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcbb9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcbb9, .value=0xbe, .type=IO_READ},
        {.addr=0xcbba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0306) {
    const struct CPU_State initial_cpu = {.pc=0x5ba5, .a=0x6d, .x=0xd1, .y=0xe5, .sp=0x9a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5ba6, .a=0x07, .x=0xd1, .y=0xe5, .sp=0x9a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5ba5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5ba5, .value=0xbe, .type=IO_READ},
        {.addr=0x5ba6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0307) {
    const struct CPU_State initial_cpu = {.pc=0x4579, .a=0x1f, .x=0x97, .y=0x36, .sp=0x64, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4579, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x457a, .a=0x19, .x=0x97, .y=0x36, .sp=0x64, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4579, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4579, .value=0xbe, .type=IO_READ},
        {.addr=0x457a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0308) {
    const struct CPU_State initial_cpu = {.pc=0x9b9d, .a=0xfa, .x=0xeb, .y=0xd7, .sp=0x55, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9b9d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9b9e, .a=0x94, .x=0xeb, .y=0xd7, .sp=0x55, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9b9d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9b9d, .value=0xbe, .type=IO_READ},
        {.addr=0x9b9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0309) {
    const struct CPU_State initial_cpu = {.pc=0xb10b, .a=0x39, .x=0x91, .y=0xa8, .sp=0x2b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xb10b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb10c, .a=0x39, .x=0x91, .y=0xa8, .sp=0x2b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb10b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb10b, .value=0xbe, .type=IO_READ},
        {.addr=0xb10c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_030A) {
    const struct CPU_State initial_cpu = {.pc=0x3f7b, .a=0xea, .x=0x5c, .y=0x97, .sp=0xd5, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3f7b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3f7c, .a=0x84, .x=0x5c, .y=0x97, .sp=0xd5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3f7b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3f7b, .value=0xbe, .type=IO_READ},
        {.addr=0x3f7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_030B) {
    const struct CPU_State initial_cpu = {.pc=0xe4c2, .a=0xd0, .x=0xa7, .y=0x6c, .sp=0x95, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe4c3, .a=0x70, .x=0xa7, .y=0x6c, .sp=0x95, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe4c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe4c2, .value=0xbe, .type=IO_READ},
        {.addr=0xe4c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_030C) {
    const struct CPU_State initial_cpu = {.pc=0x7e9f, .a=0x32, .x=0xd8, .y=0x9e, .sp=0xa3, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7ea0, .a=0xcc, .x=0xd8, .y=0x9e, .sp=0xa3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7e9f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7e9f, .value=0xbe, .type=IO_READ},
        {.addr=0x7ea0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_030D) {
    const struct CPU_State initial_cpu = {.pc=0x2b9f, .a=0xf6, .x=0x33, .y=0xa7, .sp=0x92, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2ba0, .a=0x96, .x=0x33, .y=0xa7, .sp=0x92, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2b9f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2b9f, .value=0xbe, .type=IO_READ},
        {.addr=0x2ba0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_030E) {
    const struct CPU_State initial_cpu = {.pc=0x1948, .a=0x17, .x=0xca, .y=0x3d, .sp=0x26, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1948, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1949, .a=0x17, .x=0xca, .y=0x3d, .sp=0x26, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1948, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1948, .value=0xbe, .type=IO_READ},
        {.addr=0x1949, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_030F) {
    const struct CPU_State initial_cpu = {.pc=0x8cb1, .a=0x44, .x=0xb9, .y=0x4a, .sp=0x5a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8cb2, .a=0x3e, .x=0xb9, .y=0x4a, .sp=0x5a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8cb1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8cb1, .value=0xbe, .type=IO_READ},
        {.addr=0x8cb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0310) {
    const struct CPU_State initial_cpu = {.pc=0x7a3c, .a=0x4b, .x=0x22, .y=0xca, .sp=0x79, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7a3c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7a3d, .a=0x45, .x=0x22, .y=0xca, .sp=0x79, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7a3c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7a3c, .value=0xbe, .type=IO_READ},
        {.addr=0x7a3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0311) {
    const struct CPU_State initial_cpu = {.pc=0xc237, .a=0xdf, .x=0xa2, .y=0x3c, .sp=0x11, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xc237, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc238, .a=0x79, .x=0xa2, .y=0x3c, .sp=0x11, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc237, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc237, .value=0xbe, .type=IO_READ},
        {.addr=0xc238, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0312) {
    const struct CPU_State initial_cpu = {.pc=0x916d, .a=0xa2, .x=0x4c, .y=0x95, .sp=0x6d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x916d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x916e, .a=0x3c, .x=0x4c, .y=0x95, .sp=0x6d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x916d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x916d, .value=0xbe, .type=IO_READ},
        {.addr=0x916e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0313) {
    const struct CPU_State initial_cpu = {.pc=0x0426, .a=0xe1, .x=0x08, .y=0x20, .sp=0xe2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0426, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0427, .a=0x7b, .x=0x08, .y=0x20, .sp=0xe2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0426, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0426, .value=0xbe, .type=IO_READ},
        {.addr=0x0427, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0314) {
    const struct CPU_State initial_cpu = {.pc=0x214c, .a=0x78, .x=0x03, .y=0x1d, .sp=0xa8, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x214c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x214d, .a=0x72, .x=0x03, .y=0x1d, .sp=0xa8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x214c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x214c, .value=0xbe, .type=IO_READ},
        {.addr=0x214d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0315) {
    const struct CPU_State initial_cpu = {.pc=0x8be3, .a=0x1b, .x=0x3a, .y=0x77, .sp=0xeb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8be3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8be4, .a=0x15, .x=0x3a, .y=0x77, .sp=0xeb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8be3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8be3, .value=0xbe, .type=IO_READ},
        {.addr=0x8be4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0316) {
    const struct CPU_State initial_cpu = {.pc=0x8ce9, .a=0xbc, .x=0x25, .y=0x0b, .sp=0x45, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8cea, .a=0x56, .x=0x25, .y=0x0b, .sp=0x45, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8ce9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8ce9, .value=0xbe, .type=IO_READ},
        {.addr=0x8cea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0317) {
    const struct CPU_State initial_cpu = {.pc=0x1cc8, .a=0x92, .x=0xec, .y=0x04, .sp=0x33, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1cc9, .a=0x92, .x=0xec, .y=0x04, .sp=0x33, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1cc8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1cc8, .value=0xbe, .type=IO_READ},
        {.addr=0x1cc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0318) {
    const struct CPU_State initial_cpu = {.pc=0x75ab, .a=0x74, .x=0x72, .y=0x18, .sp=0xca, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x75ab, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x75ac, .a=0x0e, .x=0x72, .y=0x18, .sp=0xca, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x75ab, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x75ab, .value=0xbe, .type=IO_READ},
        {.addr=0x75ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0319) {
    const struct CPU_State initial_cpu = {.pc=0x4a6f, .a=0xaa, .x=0xd5, .y=0x5b, .sp=0xb4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4a6f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4a70, .a=0x44, .x=0xd5, .y=0x5b, .sp=0xb4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4a6f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4a6f, .value=0xbe, .type=IO_READ},
        {.addr=0x4a70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_031A) {
    const struct CPU_State initial_cpu = {.pc=0xa0d9, .a=0x2f, .x=0xf1, .y=0x8c, .sp=0xb8, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa0da, .a=0xc9, .x=0xf1, .y=0x8c, .sp=0xb8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa0d9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa0d9, .value=0xbe, .type=IO_READ},
        {.addr=0xa0da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_031B) {
    const struct CPU_State initial_cpu = {.pc=0x8509, .a=0xe4, .x=0xfc, .y=0x25, .sp=0xd8, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x8509, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x850a, .a=0x7e, .x=0xfc, .y=0x25, .sp=0xd8, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8509, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8509, .value=0xbe, .type=IO_READ},
        {.addr=0x850a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_031C) {
    const struct CPU_State initial_cpu = {.pc=0x43b4, .a=0x68, .x=0x50, .y=0xb4, .sp=0x55, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x43b4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x43b5, .a=0x68, .x=0x50, .y=0xb4, .sp=0x55, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x43b4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x43b4, .value=0xbe, .type=IO_READ},
        {.addr=0x43b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_031D) {
    const struct CPU_State initial_cpu = {.pc=0x7d77, .a=0xdf, .x=0x6d, .y=0x3f, .sp=0xe9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7d77, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7d78, .a=0x79, .x=0x6d, .y=0x3f, .sp=0xe9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7d77, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7d77, .value=0xbe, .type=IO_READ},
        {.addr=0x7d78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_031E) {
    const struct CPU_State initial_cpu = {.pc=0x14aa, .a=0x9e, .x=0xaf, .y=0x3d, .sp=0x3c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x14aa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x14ab, .a=0x38, .x=0xaf, .y=0x3d, .sp=0x3c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x14aa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x14aa, .value=0xbe, .type=IO_READ},
        {.addr=0x14ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_031F) {
    const struct CPU_State initial_cpu = {.pc=0xc0e3, .a=0xbb, .x=0x92, .y=0x3b, .sp=0x94, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc0e3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc0e4, .a=0x55, .x=0x92, .y=0x3b, .sp=0x94, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc0e3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc0e3, .value=0xbe, .type=IO_READ},
        {.addr=0xc0e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0320) {
    const struct CPU_State initial_cpu = {.pc=0x9bf3, .a=0x95, .x=0x4d, .y=0x92, .sp=0xb6, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9bf4, .a=0x35, .x=0x4d, .y=0x92, .sp=0xb6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9bf3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9bf3, .value=0xbe, .type=IO_READ},
        {.addr=0x9bf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0321) {
    const struct CPU_State initial_cpu = {.pc=0x2143, .a=0xf2, .x=0x87, .y=0x13, .sp=0x05, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x2143, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2144, .a=0x92, .x=0x87, .y=0x13, .sp=0x05, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2143, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2143, .value=0xbe, .type=IO_READ},
        {.addr=0x2144, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0322) {
    const struct CPU_State initial_cpu = {.pc=0xf163, .a=0x1f, .x=0xb2, .y=0x49, .sp=0x65, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xf163, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf164, .a=0x19, .x=0xb2, .y=0x49, .sp=0x65, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf163, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf163, .value=0xbe, .type=IO_READ},
        {.addr=0xf164, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0323) {
    const struct CPU_State initial_cpu = {.pc=0xc090, .a=0x36, .x=0x07, .y=0xd2, .sp=0x7e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xc090, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc091, .a=0xd0, .x=0x07, .y=0xd2, .sp=0x7e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc090, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc090, .value=0xbe, .type=IO_READ},
        {.addr=0xc091, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0324) {
    const struct CPU_State initial_cpu = {.pc=0x16cd, .a=0x3a, .x=0xda, .y=0x32, .sp=0x01, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x16cd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x16ce, .a=0x34, .x=0xda, .y=0x32, .sp=0x01, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x16cd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x16cd, .value=0xbe, .type=IO_READ},
        {.addr=0x16ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0325) {
    const struct CPU_State initial_cpu = {.pc=0x9fdc, .a=0xe6, .x=0x6a, .y=0x75, .sp=0xa5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9fdc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9fdd, .a=0x80, .x=0x6a, .y=0x75, .sp=0xa5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9fdc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9fdc, .value=0xbe, .type=IO_READ},
        {.addr=0x9fdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3462, .a=0x11, .x=0xae, .y=0xac, .sp=0xf9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3462, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3463, .a=0x11, .x=0xae, .y=0xac, .sp=0xf9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3462, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3462, .value=0xbe, .type=IO_READ},
        {.addr=0x3463, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0327) {
    const struct CPU_State initial_cpu = {.pc=0xf426, .a=0xc8, .x=0x62, .y=0x97, .sp=0x9e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xf426, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf427, .a=0x62, .x=0x62, .y=0x97, .sp=0x9e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf426, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf426, .value=0xbe, .type=IO_READ},
        {.addr=0xf427, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0328) {
    const struct CPU_State initial_cpu = {.pc=0x371a, .a=0xa7, .x=0xcd, .y=0x83, .sp=0x90, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x371a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x371b, .a=0x41, .x=0xcd, .y=0x83, .sp=0x90, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x371a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x371a, .value=0xbe, .type=IO_READ},
        {.addr=0x371b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0329) {
    const struct CPU_State initial_cpu = {.pc=0xb1a0, .a=0x7c, .x=0x3d, .y=0xda, .sp=0xa2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xb1a0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb1a1, .a=0x16, .x=0x3d, .y=0xda, .sp=0xa2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb1a0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb1a0, .value=0xbe, .type=IO_READ},
        {.addr=0xb1a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_032A) {
    const struct CPU_State initial_cpu = {.pc=0x7530, .a=0x1f, .x=0x46, .y=0xbc, .sp=0x69, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7530, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7531, .a=0x19, .x=0x46, .y=0xbc, .sp=0x69, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7530, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7530, .value=0xbe, .type=IO_READ},
        {.addr=0x7531, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_032B) {
    const struct CPU_State initial_cpu = {.pc=0x2265, .a=0x3a, .x=0xfe, .y=0xc9, .sp=0x58, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2265, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2266, .a=0xd4, .x=0xfe, .y=0xc9, .sp=0x58, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2265, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2265, .value=0xbe, .type=IO_READ},
        {.addr=0x2266, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_032C) {
    const struct CPU_State initial_cpu = {.pc=0xff1b, .a=0xd8, .x=0xd1, .y=0xa6, .sp=0xb2, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xff1b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xff1c, .a=0x72, .x=0xd1, .y=0xa6, .sp=0xb2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xff1b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xff1b, .value=0xbe, .type=IO_READ},
        {.addr=0xff1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_032D) {
    const struct CPU_State initial_cpu = {.pc=0x077b, .a=0xa0, .x=0x43, .y=0xb2, .sp=0x6f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x077b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x077c, .a=0x3a, .x=0x43, .y=0xb2, .sp=0x6f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x077b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x077b, .value=0xbe, .type=IO_READ},
        {.addr=0x077c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_032E) {
    const struct CPU_State initial_cpu = {.pc=0x4f16, .a=0x3f, .x=0xc1, .y=0x84, .sp=0x63, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4f16, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4f17, .a=0x39, .x=0xc1, .y=0x84, .sp=0x63, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4f16, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4f16, .value=0xbe, .type=IO_READ},
        {.addr=0x4f17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_032F) {
    const struct CPU_State initial_cpu = {.pc=0x319d, .a=0x06, .x=0xa2, .y=0x66, .sp=0xe9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x319d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x319e, .a=0x00, .x=0xa2, .y=0x66, .sp=0xe9, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x319d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x319d, .value=0xbe, .type=IO_READ},
        {.addr=0x319e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0330) {
    const struct CPU_State initial_cpu = {.pc=0xa680, .a=0x29, .x=0x65, .y=0xbe, .sp=0xef, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa680, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa681, .a=0xc3, .x=0x65, .y=0xbe, .sp=0xef, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa680, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa680, .value=0xbe, .type=IO_READ},
        {.addr=0xa681, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa5fe, .a=0x2c, .x=0xe8, .y=0x1b, .sp=0x8c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xa5fe, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa5ff, .a=0xc6, .x=0xe8, .y=0x1b, .sp=0x8c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa5fe, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa5fe, .value=0xbe, .type=IO_READ},
        {.addr=0xa5ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0332) {
    const struct CPU_State initial_cpu = {.pc=0x26fa, .a=0x41, .x=0x2e, .y=0xb1, .sp=0x3e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x26fa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x26fb, .a=0xe1, .x=0x2e, .y=0xb1, .sp=0x3e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x26fa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x26fa, .value=0xbe, .type=IO_READ},
        {.addr=0x26fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0333) {
    const struct CPU_State initial_cpu = {.pc=0xc2ad, .a=0x1d, .x=0xa4, .y=0xcb, .sp=0x6a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ad, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc2ae, .a=0x17, .x=0xa4, .y=0xcb, .sp=0x6a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc2ad, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc2ad, .value=0xbe, .type=IO_READ},
        {.addr=0xc2ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0334) {
    const struct CPU_State initial_cpu = {.pc=0x243b, .a=0x8a, .x=0x8c, .y=0xaa, .sp=0xa5, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x243b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x243c, .a=0x84, .x=0x8c, .y=0xaa, .sp=0xa5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x243b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x243b, .value=0xbe, .type=IO_READ},
        {.addr=0x243c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0335) {
    const struct CPU_State initial_cpu = {.pc=0xde51, .a=0x79, .x=0x3f, .y=0x02, .sp=0x7c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xde51, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xde52, .a=0x19, .x=0x3f, .y=0x02, .sp=0x7c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xde51, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xde51, .value=0xbe, .type=IO_READ},
        {.addr=0xde52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0336) {
    const struct CPU_State initial_cpu = {.pc=0xa552, .a=0xa8, .x=0xbc, .y=0x41, .sp=0xad, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa552, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa553, .a=0x42, .x=0xbc, .y=0x41, .sp=0xad, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa552, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa552, .value=0xbe, .type=IO_READ},
        {.addr=0xa553, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0337) {
    const struct CPU_State initial_cpu = {.pc=0x09b5, .a=0xf5, .x=0xb6, .y=0x7d, .sp=0x05, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x09b5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x09b6, .a=0x8f, .x=0xb6, .y=0x7d, .sp=0x05, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x09b5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x09b5, .value=0xbe, .type=IO_READ},
        {.addr=0x09b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0338) {
    const struct CPU_State initial_cpu = {.pc=0xabf5, .a=0xee, .x=0x50, .y=0x4c, .sp=0x84, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xabf5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xabf6, .a=0x88, .x=0x50, .y=0x4c, .sp=0x84, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xabf5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xabf5, .value=0xbe, .type=IO_READ},
        {.addr=0xabf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0339) {
    const struct CPU_State initial_cpu = {.pc=0x30dd, .a=0xa8, .x=0xad, .y=0x0b, .sp=0x6d, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x30dd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x30de, .a=0x48, .x=0xad, .y=0x0b, .sp=0x6d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x30dd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x30dd, .value=0xbe, .type=IO_READ},
        {.addr=0x30de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_033A) {
    const struct CPU_State initial_cpu = {.pc=0xbe5e, .a=0x22, .x=0x2d, .y=0x2d, .sp=0xf9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xbe5e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbe5f, .a=0x22, .x=0x2d, .y=0x2d, .sp=0xf9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xbe5e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbe5e, .value=0xbe, .type=IO_READ},
        {.addr=0xbe5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_033B) {
    const struct CPU_State initial_cpu = {.pc=0x08e6, .a=0xa3, .x=0x45, .y=0x8b, .sp=0xcd, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x08e6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x08e7, .a=0x43, .x=0x45, .y=0x8b, .sp=0xcd, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x08e6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x08e6, .value=0xbe, .type=IO_READ},
        {.addr=0x08e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_033C) {
    const struct CPU_State initial_cpu = {.pc=0xa7e7, .a=0xe2, .x=0x78, .y=0xd2, .sp=0xaa, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa7e8, .a=0x7c, .x=0x78, .y=0xd2, .sp=0xaa, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa7e7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa7e7, .value=0xbe, .type=IO_READ},
        {.addr=0xa7e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_033D) {
    const struct CPU_State initial_cpu = {.pc=0x0dba, .a=0xe5, .x=0x5f, .y=0x84, .sp=0xbe, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0dba, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0dbb, .a=0x85, .x=0x5f, .y=0x84, .sp=0xbe, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0dba, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0dba, .value=0xbe, .type=IO_READ},
        {.addr=0x0dbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc393, .a=0xd1, .x=0x08, .y=0x3b, .sp=0x32, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc393, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc394, .a=0x71, .x=0x08, .y=0x3b, .sp=0x32, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc393, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc393, .value=0xbe, .type=IO_READ},
        {.addr=0xc394, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_033F) {
    const struct CPU_State initial_cpu = {.pc=0x652b, .a=0x52, .x=0xaf, .y=0xf5, .sp=0x3a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x652b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x652c, .a=0x4c, .x=0xaf, .y=0xf5, .sp=0x3a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x652b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x652b, .value=0xbe, .type=IO_READ},
        {.addr=0x652c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0340) {
    const struct CPU_State initial_cpu = {.pc=0x9e71, .a=0xf4, .x=0x50, .y=0xdd, .sp=0x10, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9e71, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9e72, .a=0x94, .x=0x50, .y=0xdd, .sp=0x10, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x9e71, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9e71, .value=0xbe, .type=IO_READ},
        {.addr=0x9e72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0341) {
    const struct CPU_State initial_cpu = {.pc=0x2bc8, .a=0xb9, .x=0x4a, .y=0xa9, .sp=0x62, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2bc8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2bc9, .a=0x53, .x=0x4a, .y=0xa9, .sp=0x62, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x2bc8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2bc8, .value=0xbe, .type=IO_READ},
        {.addr=0x2bc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0342) {
    const struct CPU_State initial_cpu = {.pc=0x3b93, .a=0x22, .x=0x40, .y=0xdd, .sp=0x3a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3b93, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3b94, .a=0x1c, .x=0x40, .y=0xdd, .sp=0x3a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3b93, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3b93, .value=0xbe, .type=IO_READ},
        {.addr=0x3b94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0343) {
    const struct CPU_State initial_cpu = {.pc=0x645a, .a=0x62, .x=0xbe, .y=0x35, .sp=0x5d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x645a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x645b, .a=0xfc, .x=0xbe, .y=0x35, .sp=0x5d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x645a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x645a, .value=0xbe, .type=IO_READ},
        {.addr=0x645b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0344) {
    const struct CPU_State initial_cpu = {.pc=0xdb64, .a=0x27, .x=0xe7, .y=0x82, .sp=0xc3, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xdb64, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdb65, .a=0xc1, .x=0xe7, .y=0x82, .sp=0xc3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xdb64, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdb64, .value=0xbe, .type=IO_READ},
        {.addr=0xdb65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0345) {
    const struct CPU_State initial_cpu = {.pc=0x9361, .a=0xeb, .x=0x83, .y=0x57, .sp=0x0d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9361, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9362, .a=0x85, .x=0x83, .y=0x57, .sp=0x0d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9361, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9361, .value=0xbe, .type=IO_READ},
        {.addr=0x9362, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0346) {
    const struct CPU_State initial_cpu = {.pc=0x5bc1, .a=0x3f, .x=0xe0, .y=0x0f, .sp=0x31, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5bc2, .a=0xd9, .x=0xe0, .y=0x0f, .sp=0x31, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5bc1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5bc1, .value=0xbe, .type=IO_READ},
        {.addr=0x5bc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0347) {
    const struct CPU_State initial_cpu = {.pc=0xe69f, .a=0x21, .x=0xa2, .y=0x93, .sp=0x48, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe69f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe6a0, .a=0x21, .x=0xa2, .y=0x93, .sp=0x48, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe69f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe69f, .value=0xbe, .type=IO_READ},
        {.addr=0xe6a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0348) {
    const struct CPU_State initial_cpu = {.pc=0x0478, .a=0x26, .x=0x80, .y=0x53, .sp=0x70, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0478, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0479, .a=0xc0, .x=0x80, .y=0x53, .sp=0x70, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0478, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0478, .value=0xbe, .type=IO_READ},
        {.addr=0x0479, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0349) {
    const struct CPU_State initial_cpu = {.pc=0x94ab, .a=0x47, .x=0xa4, .y=0x24, .sp=0x0a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x94ab, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x94ac, .a=0xe1, .x=0xa4, .y=0x24, .sp=0x0a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x94ab, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x94ab, .value=0xbe, .type=IO_READ},
        {.addr=0x94ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_034A) {
    const struct CPU_State initial_cpu = {.pc=0xdf6a, .a=0x7f, .x=0xb9, .y=0x74, .sp=0xa6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdf6b, .a=0x79, .x=0xb9, .y=0x74, .sp=0xa6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdf6a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdf6a, .value=0xbe, .type=IO_READ},
        {.addr=0xdf6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_034B) {
    const struct CPU_State initial_cpu = {.pc=0xb6e5, .a=0x54, .x=0xaf, .y=0xff, .sp=0xf4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb6e6, .a=0xee, .x=0xaf, .y=0xff, .sp=0xf4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb6e5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb6e5, .value=0xbe, .type=IO_READ},
        {.addr=0xb6e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_034C) {
    const struct CPU_State initial_cpu = {.pc=0x4b67, .a=0x8d, .x=0xc7, .y=0xad, .sp=0x35, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4b67, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4b68, .a=0x27, .x=0xc7, .y=0xad, .sp=0x35, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4b67, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4b67, .value=0xbe, .type=IO_READ},
        {.addr=0x4b68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_034D) {
    const struct CPU_State initial_cpu = {.pc=0x7c25, .a=0x2a, .x=0x41, .y=0x89, .sp=0x5d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c25, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7c26, .a=0x24, .x=0x41, .y=0x89, .sp=0x5d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7c25, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7c25, .value=0xbe, .type=IO_READ},
        {.addr=0x7c26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_034E) {
    const struct CPU_State initial_cpu = {.pc=0x3e90, .a=0xe1, .x=0xad, .y=0x42, .sp=0xf3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3e90, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3e91, .a=0x7b, .x=0xad, .y=0x42, .sp=0xf3, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3e90, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3e90, .value=0xbe, .type=IO_READ},
        {.addr=0x3e91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_034F) {
    const struct CPU_State initial_cpu = {.pc=0x7169, .a=0x4e, .x=0x88, .y=0xba, .sp=0xb7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7169, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x716a, .a=0x48, .x=0x88, .y=0xba, .sp=0xb7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7169, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7169, .value=0xbe, .type=IO_READ},
        {.addr=0x716a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0350) {
    const struct CPU_State initial_cpu = {.pc=0x83ae, .a=0xc8, .x=0xe1, .y=0x13, .sp=0xf9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x83ae, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x83af, .a=0x62, .x=0xe1, .y=0x13, .sp=0xf9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x83ae, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x83ae, .value=0xbe, .type=IO_READ},
        {.addr=0x83af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5e2f, .a=0xfb, .x=0x8c, .y=0x04, .sp=0x2a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5e2f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5e30, .a=0x95, .x=0x8c, .y=0x04, .sp=0x2a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5e2f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5e2f, .value=0xbe, .type=IO_READ},
        {.addr=0x5e30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0352) {
    const struct CPU_State initial_cpu = {.pc=0xf3ba, .a=0x7b, .x=0x6e, .y=0x84, .sp=0x91, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ba, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf3bb, .a=0x15, .x=0x6e, .y=0x84, .sp=0x91, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf3ba, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf3ba, .value=0xbe, .type=IO_READ},
        {.addr=0xf3bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0353) {
    const struct CPU_State initial_cpu = {.pc=0xf684, .a=0x23, .x=0xa8, .y=0xe5, .sp=0x52, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf684, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf685, .a=0x23, .x=0xa8, .y=0xe5, .sp=0x52, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf684, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf684, .value=0xbe, .type=IO_READ},
        {.addr=0xf685, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0354) {
    const struct CPU_State initial_cpu = {.pc=0x815a, .a=0xb0, .x=0x5f, .y=0x4c, .sp=0x44, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x815a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x815b, .a=0x50, .x=0x5f, .y=0x4c, .sp=0x44, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x815a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x815a, .value=0xbe, .type=IO_READ},
        {.addr=0x815b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0355) {
    const struct CPU_State initial_cpu = {.pc=0x56bc, .a=0xd9, .x=0x13, .y=0x20, .sp=0xc7, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x56bc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x56bd, .a=0x79, .x=0x13, .y=0x20, .sp=0xc7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x56bc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x56bc, .value=0xbe, .type=IO_READ},
        {.addr=0x56bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0356) {
    const struct CPU_State initial_cpu = {.pc=0x9ede, .a=0x3e, .x=0xa6, .y=0x95, .sp=0x39, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9ede, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9edf, .a=0x38, .x=0xa6, .y=0x95, .sp=0x39, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9ede, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9ede, .value=0xbe, .type=IO_READ},
        {.addr=0x9edf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0357) {
    const struct CPU_State initial_cpu = {.pc=0x1dd3, .a=0x45, .x=0x4e, .y=0x13, .sp=0xa5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1dd4, .a=0xdf, .x=0x4e, .y=0x13, .sp=0xa5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1dd3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1dd3, .value=0xbe, .type=IO_READ},
        {.addr=0x1dd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0358) {
    const struct CPU_State initial_cpu = {.pc=0xacb3, .a=0x52, .x=0xa8, .y=0x1e, .sp=0xc2, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xacb3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xacb4, .a=0xf2, .x=0xa8, .y=0x1e, .sp=0xc2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xacb3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xacb3, .value=0xbe, .type=IO_READ},
        {.addr=0xacb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0359) {
    const struct CPU_State initial_cpu = {.pc=0x5b95, .a=0x48, .x=0xe2, .y=0xfa, .sp=0x37, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5b95, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5b96, .a=0x42, .x=0xe2, .y=0xfa, .sp=0x37, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5b95, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5b95, .value=0xbe, .type=IO_READ},
        {.addr=0x5b96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_035A) {
    const struct CPU_State initial_cpu = {.pc=0x3182, .a=0x99, .x=0x4d, .y=0x75, .sp=0xb7, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x3182, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3183, .a=0x93, .x=0x4d, .y=0x75, .sp=0xb7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x3182, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3182, .value=0xbe, .type=IO_READ},
        {.addr=0x3183, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0e60, .a=0xc9, .x=0xef, .y=0x49, .sp=0x73, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0e60, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0e61, .a=0x69, .x=0xef, .y=0x49, .sp=0x73, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0e60, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0e60, .value=0xbe, .type=IO_READ},
        {.addr=0x0e61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_035C) {
    const struct CPU_State initial_cpu = {.pc=0x9bd0, .a=0x4b, .x=0x45, .y=0xd2, .sp=0xb4, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9bd1, .a=0x45, .x=0x45, .y=0xd2, .sp=0xb4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9bd0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9bd0, .value=0xbe, .type=IO_READ},
        {.addr=0x9bd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_035D) {
    const struct CPU_State initial_cpu = {.pc=0x87cc, .a=0x5c, .x=0xdd, .y=0x1f, .sp=0x89, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x87cc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x87cd, .a=0x56, .x=0xdd, .y=0x1f, .sp=0x89, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x87cc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x87cc, .value=0xbe, .type=IO_READ},
        {.addr=0x87cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_035E) {
    const struct CPU_State initial_cpu = {.pc=0xaf8d, .a=0x88, .x=0xa3, .y=0xef, .sp=0xa5, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xaf8e, .a=0x88, .x=0xa3, .y=0xef, .sp=0xa5, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xaf8d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xaf8d, .value=0xbe, .type=IO_READ},
        {.addr=0xaf8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_035F) {
    const struct CPU_State initial_cpu = {.pc=0xd315, .a=0xae, .x=0xcc, .y=0x8f, .sp=0xd6, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xd315, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd316, .a=0x48, .x=0xcc, .y=0x8f, .sp=0xd6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd315, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd315, .value=0xbe, .type=IO_READ},
        {.addr=0xd316, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0360) {
    const struct CPU_State initial_cpu = {.pc=0xe176, .a=0xdb, .x=0x77, .y=0x62, .sp=0x3b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe176, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe177, .a=0x75, .x=0x77, .y=0x62, .sp=0x3b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe176, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe176, .value=0xbe, .type=IO_READ},
        {.addr=0xe177, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4ec4, .a=0x8c, .x=0xa7, .y=0xce, .sp=0x47, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4ec5, .a=0x86, .x=0xa7, .y=0xce, .sp=0x47, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4ec4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4ec4, .value=0xbe, .type=IO_READ},
        {.addr=0x4ec5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0362) {
    const struct CPU_State initial_cpu = {.pc=0x57e0, .a=0x18, .x=0x03, .y=0xd1, .sp=0xd6, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x57e0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x57e1, .a=0x12, .x=0x03, .y=0xd1, .sp=0xd6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x57e0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x57e0, .value=0xbe, .type=IO_READ},
        {.addr=0x57e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0363) {
    const struct CPU_State initial_cpu = {.pc=0x33ee, .a=0xff, .x=0x7f, .y=0x7c, .sp=0x61, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x33ee, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x33ef, .a=0x99, .x=0x7f, .y=0x7c, .sp=0x61, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x33ee, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x33ee, .value=0xbe, .type=IO_READ},
        {.addr=0x33ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0364) {
    const struct CPU_State initial_cpu = {.pc=0x80e9, .a=0x75, .x=0x6c, .y=0x95, .sp=0x2f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x80e9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x80ea, .a=0x75, .x=0x6c, .y=0x95, .sp=0x2f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x80e9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x80e9, .value=0xbe, .type=IO_READ},
        {.addr=0x80ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0365) {
    const struct CPU_State initial_cpu = {.pc=0x510e, .a=0xaf, .x=0xcb, .y=0x0c, .sp=0xd5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x510e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x510f, .a=0x49, .x=0xcb, .y=0x0c, .sp=0xd5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x510e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x510e, .value=0xbe, .type=IO_READ},
        {.addr=0x510f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0366) {
    const struct CPU_State initial_cpu = {.pc=0xddaf, .a=0xe3, .x=0xd5, .y=0x06, .sp=0xf9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xddaf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xddb0, .a=0x7d, .x=0xd5, .y=0x06, .sp=0xf9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xddaf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xddaf, .value=0xbe, .type=IO_READ},
        {.addr=0xddb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0367) {
    const struct CPU_State initial_cpu = {.pc=0x0151, .a=0x58, .x=0x04, .y=0x50, .sp=0xdb, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0152, .a=0x58, .x=0x04, .y=0x50, .sp=0xdb, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0151, .value=0xbe, .type=IO_READ},
        {.addr=0x0152, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6e94, .a=0x2e, .x=0xf7, .y=0x9b, .sp=0x40, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e94, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6e95, .a=0x28, .x=0xf7, .y=0x9b, .sp=0x40, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6e94, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6e94, .value=0xbe, .type=IO_READ},
        {.addr=0x6e95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0369) {
    const struct CPU_State initial_cpu = {.pc=0x7919, .a=0xdb, .x=0xd5, .y=0x0d, .sp=0xdb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7919, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x791a, .a=0x75, .x=0xd5, .y=0x0d, .sp=0xdb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7919, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7919, .value=0xbe, .type=IO_READ},
        {.addr=0x791a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_036A) {
    const struct CPU_State initial_cpu = {.pc=0xd49d, .a=0xf9, .x=0x64, .y=0x20, .sp=0x95, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd49d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd49e, .a=0x99, .x=0x64, .y=0x20, .sp=0x95, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd49d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd49d, .value=0xbe, .type=IO_READ},
        {.addr=0xd49e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_036B) {
    const struct CPU_State initial_cpu = {.pc=0x24d0, .a=0x97, .x=0x76, .y=0x14, .sp=0xa9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x24d0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x24d1, .a=0x97, .x=0x76, .y=0x14, .sp=0xa9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x24d0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x24d0, .value=0xbe, .type=IO_READ},
        {.addr=0x24d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_036C) {
    const struct CPU_State initial_cpu = {.pc=0x76c3, .a=0xd7, .x=0xaf, .y=0x99, .sp=0xdf, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x76c3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x76c4, .a=0x71, .x=0xaf, .y=0x99, .sp=0xdf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x76c3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x76c3, .value=0xbe, .type=IO_READ},
        {.addr=0x76c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_036D) {
    const struct CPU_State initial_cpu = {.pc=0x2526, .a=0x6c, .x=0x1f, .y=0x34, .sp=0x6f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x2526, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2527, .a=0x66, .x=0x1f, .y=0x34, .sp=0x6f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2526, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2526, .value=0xbe, .type=IO_READ},
        {.addr=0x2527, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_036E) {
    const struct CPU_State initial_cpu = {.pc=0xd2a9, .a=0x52, .x=0x49, .y=0xe1, .sp=0x12, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd2aa, .a=0xf2, .x=0x49, .y=0xe1, .sp=0x12, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd2a9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd2a9, .value=0xbe, .type=IO_READ},
        {.addr=0xd2aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_036F) {
    const struct CPU_State initial_cpu = {.pc=0x337f, .a=0xe4, .x=0xad, .y=0x75, .sp=0x76, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x337f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3380, .a=0x7e, .x=0xad, .y=0x75, .sp=0x76, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x337f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x337f, .value=0xbe, .type=IO_READ},
        {.addr=0x3380, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0370) {
    const struct CPU_State initial_cpu = {.pc=0x5d1b, .a=0xec, .x=0xbb, .y=0x48, .sp=0xff, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5d1b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5d1c, .a=0x86, .x=0xbb, .y=0x48, .sp=0xff, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5d1b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5d1b, .value=0xbe, .type=IO_READ},
        {.addr=0x5d1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0371) {
    const struct CPU_State initial_cpu = {.pc=0xfb42, .a=0x4f, .x=0x8c, .y=0x10, .sp=0x62, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xfb42, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfb43, .a=0x49, .x=0x8c, .y=0x10, .sp=0x62, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfb42, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfb42, .value=0xbe, .type=IO_READ},
        {.addr=0xfb43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0372) {
    const struct CPU_State initial_cpu = {.pc=0x0f93, .a=0xb7, .x=0x9c, .y=0x26, .sp=0xf1, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0f93, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0f94, .a=0x57, .x=0x9c, .y=0x26, .sp=0xf1, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0f93, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0f93, .value=0xbe, .type=IO_READ},
        {.addr=0x0f94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0373) {
    const struct CPU_State initial_cpu = {.pc=0xc3da, .a=0x77, .x=0xce, .y=0x3e, .sp=0x2b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xc3da, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc3db, .a=0x77, .x=0xce, .y=0x3e, .sp=0x2b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc3da, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc3da, .value=0xbe, .type=IO_READ},
        {.addr=0xc3db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0374) {
    const struct CPU_State initial_cpu = {.pc=0x46f0, .a=0xce, .x=0x5e, .y=0xee, .sp=0xf8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x46f0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x46f1, .a=0x68, .x=0x5e, .y=0xee, .sp=0xf8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x46f0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x46f0, .value=0xbe, .type=IO_READ},
        {.addr=0x46f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0375) {
    const struct CPU_State initial_cpu = {.pc=0x9142, .a=0xf7, .x=0xca, .y=0x76, .sp=0x70, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9142, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9143, .a=0x91, .x=0xca, .y=0x76, .sp=0x70, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9142, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9142, .value=0xbe, .type=IO_READ},
        {.addr=0x9143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0376) {
    const struct CPU_State initial_cpu = {.pc=0x62f4, .a=0xc5, .x=0xc1, .y=0xe2, .sp=0x36, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x62f4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x62f5, .a=0x65, .x=0xc1, .y=0xe2, .sp=0x36, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x62f4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x62f4, .value=0xbe, .type=IO_READ},
        {.addr=0x62f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0377) {
    const struct CPU_State initial_cpu = {.pc=0xc896, .a=0xac, .x=0xb9, .y=0x1f, .sp=0xcd, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc896, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc897, .a=0x46, .x=0xb9, .y=0x1f, .sp=0xcd, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc896, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc896, .value=0xbe, .type=IO_READ},
        {.addr=0xc897, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0378) {
    const struct CPU_State initial_cpu = {.pc=0xb57e, .a=0xba, .x=0xcd, .y=0x95, .sp=0xc1, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb57e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb57f, .a=0x54, .x=0xcd, .y=0x95, .sp=0xc1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb57e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb57e, .value=0xbe, .type=IO_READ},
        {.addr=0xb57f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0379) {
    const struct CPU_State initial_cpu = {.pc=0xa5b0, .a=0x1d, .x=0xe4, .y=0x44, .sp=0x66, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa5b1, .a=0x17, .x=0xe4, .y=0x44, .sp=0x66, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa5b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa5b0, .value=0xbe, .type=IO_READ},
        {.addr=0xa5b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_037A) {
    const struct CPU_State initial_cpu = {.pc=0x2942, .a=0xbc, .x=0x6d, .y=0x91, .sp=0x7f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2942, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2943, .a=0x56, .x=0x6d, .y=0x91, .sp=0x7f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2942, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2942, .value=0xbe, .type=IO_READ},
        {.addr=0x2943, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_037B) {
    const struct CPU_State initial_cpu = {.pc=0x7b4f, .a=0xa0, .x=0x64, .y=0x9f, .sp=0x13, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7b4f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7b50, .a=0x3a, .x=0x64, .y=0x9f, .sp=0x13, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x7b4f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7b4f, .value=0xbe, .type=IO_READ},
        {.addr=0x7b50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_037C) {
    const struct CPU_State initial_cpu = {.pc=0x23bb, .a=0xc2, .x=0x11, .y=0x58, .sp=0xc3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x23bb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x23bc, .a=0x62, .x=0x11, .y=0x58, .sp=0xc3, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x23bb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x23bb, .value=0xbe, .type=IO_READ},
        {.addr=0x23bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_037D) {
    const struct CPU_State initial_cpu = {.pc=0xc1c2, .a=0x84, .x=0x10, .y=0x37, .sp=0x7a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc1c3, .a=0x1e, .x=0x10, .y=0x37, .sp=0x7a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xc1c2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc1c2, .value=0xbe, .type=IO_READ},
        {.addr=0xc1c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_037E) {
    const struct CPU_State initial_cpu = {.pc=0x23bf, .a=0x82, .x=0x5d, .y=0xcf, .sp=0xdc, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x23bf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x23c0, .a=0x22, .x=0x5d, .y=0xcf, .sp=0xdc, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x23bf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x23bf, .value=0xbe, .type=IO_READ},
        {.addr=0x23c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_037F) {
    const struct CPU_State initial_cpu = {.pc=0x3d47, .a=0x8f, .x=0xd0, .y=0x3a, .sp=0x7a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x3d47, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3d48, .a=0x29, .x=0xd0, .y=0x3a, .sp=0x7a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3d47, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3d47, .value=0xbe, .type=IO_READ},
        {.addr=0x3d48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0380) {
    const struct CPU_State initial_cpu = {.pc=0x9133, .a=0x7e, .x=0x54, .y=0xe5, .sp=0x03, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9133, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9134, .a=0x18, .x=0x54, .y=0xe5, .sp=0x03, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9133, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9133, .value=0xbe, .type=IO_READ},
        {.addr=0x9134, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb9b2, .a=0xc1, .x=0xdd, .y=0xdc, .sp=0x4f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb9b2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb9b3, .a=0x61, .x=0xdd, .y=0xdc, .sp=0x4f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb9b2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb9b2, .value=0xbe, .type=IO_READ},
        {.addr=0xb9b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0382) {
    const struct CPU_State initial_cpu = {.pc=0xd21e, .a=0x22, .x=0x60, .y=0xb5, .sp=0xd5, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd21e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd21f, .a=0x22, .x=0x60, .y=0xb5, .sp=0xd5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd21e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd21e, .value=0xbe, .type=IO_READ},
        {.addr=0xd21f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0383) {
    const struct CPU_State initial_cpu = {.pc=0x19c7, .a=0xc2, .x=0x37, .y=0x51, .sp=0x6d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x19c7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x19c8, .a=0x62, .x=0x37, .y=0x51, .sp=0x6d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x19c7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x19c7, .value=0xbe, .type=IO_READ},
        {.addr=0x19c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0384) {
    const struct CPU_State initial_cpu = {.pc=0xebd6, .a=0x11, .x=0xc5, .y=0xfb, .sp=0x46, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xebd6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xebd7, .a=0x0b, .x=0xc5, .y=0xfb, .sp=0x46, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xebd6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xebd6, .value=0xbe, .type=IO_READ},
        {.addr=0xebd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0385) {
    const struct CPU_State initial_cpu = {.pc=0x66b5, .a=0xd1, .x=0xf4, .y=0xac, .sp=0xdd, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x66b5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x66b6, .a=0x6b, .x=0xf4, .y=0xac, .sp=0xdd, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x66b5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x66b5, .value=0xbe, .type=IO_READ},
        {.addr=0x66b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0386) {
    const struct CPU_State initial_cpu = {.pc=0x95c3, .a=0xde, .x=0x21, .y=0x06, .sp=0x4f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x95c3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x95c4, .a=0x78, .x=0x21, .y=0x06, .sp=0x4f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x95c3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x95c3, .value=0xbe, .type=IO_READ},
        {.addr=0x95c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0387) {
    const struct CPU_State initial_cpu = {.pc=0xf225, .a=0x21, .x=0xec, .y=0xfa, .sp=0x26, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xf225, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf226, .a=0x21, .x=0xec, .y=0xfa, .sp=0x26, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf225, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf225, .value=0xbe, .type=IO_READ},
        {.addr=0xf226, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0388) {
    const struct CPU_State initial_cpu = {.pc=0x712b, .a=0xfe, .x=0x09, .y=0x24, .sp=0xa7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x712b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x712c, .a=0x98, .x=0x09, .y=0x24, .sp=0xa7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x712b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x712b, .value=0xbe, .type=IO_READ},
        {.addr=0x712c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9d01, .a=0x00, .x=0x00, .y=0x54, .sp=0x5c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9d01, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9d02, .a=0x00, .x=0x00, .y=0x54, .sp=0x5c, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x9d01, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9d01, .value=0xbe, .type=IO_READ},
        {.addr=0x9d02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_038A) {
    const struct CPU_State initial_cpu = {.pc=0x2bb3, .a=0x5b, .x=0x89, .y=0x88, .sp=0x54, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x2bb3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2bb4, .a=0xf5, .x=0x89, .y=0x88, .sp=0x54, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2bb3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2bb3, .value=0xbe, .type=IO_READ},
        {.addr=0x2bb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_038B) {
    const struct CPU_State initial_cpu = {.pc=0xedc1, .a=0x00, .x=0xeb, .y=0x61, .sp=0x2e, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xedc1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xedc2, .a=0xfa, .x=0xeb, .y=0x61, .sp=0x2e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xedc1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xedc1, .value=0xbe, .type=IO_READ},
        {.addr=0xedc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_038C) {
    const struct CPU_State initial_cpu = {.pc=0xf548, .a=0xf1, .x=0x4e, .y=0xc3, .sp=0xec, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf548, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf549, .a=0x8b, .x=0x4e, .y=0xc3, .sp=0xec, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf548, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf548, .value=0xbe, .type=IO_READ},
        {.addr=0xf549, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2dce, .a=0x13, .x=0x8c, .y=0x69, .sp=0xa9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2dce, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2dcf, .a=0xb3, .x=0x8c, .y=0x69, .sp=0xa9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2dce, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2dce, .value=0xbe, .type=IO_READ},
        {.addr=0x2dcf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_038E) {
    const struct CPU_State initial_cpu = {.pc=0x70e4, .a=0xef, .x=0x4a, .y=0x97, .sp=0x79, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x70e4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x70e5, .a=0x89, .x=0x4a, .y=0x97, .sp=0x79, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x70e4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x70e4, .value=0xbe, .type=IO_READ},
        {.addr=0x70e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_038F) {
    const struct CPU_State initial_cpu = {.pc=0xe8b5, .a=0xeb, .x=0x90, .y=0x1e, .sp=0xc6, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe8b6, .a=0x85, .x=0x90, .y=0x1e, .sp=0xc6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe8b5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe8b5, .value=0xbe, .type=IO_READ},
        {.addr=0xe8b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0390) {
    const struct CPU_State initial_cpu = {.pc=0x284d, .a=0xe0, .x=0x5b, .y=0x44, .sp=0x27, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x284d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x284e, .a=0x80, .x=0x5b, .y=0x44, .sp=0x27, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x284d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x284d, .value=0xbe, .type=IO_READ},
        {.addr=0x284e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0391) {
    const struct CPU_State initial_cpu = {.pc=0xad4c, .a=0x8a, .x=0x61, .y=0x7a, .sp=0xfc, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xad4c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xad4d, .a=0x24, .x=0x61, .y=0x7a, .sp=0xfc, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xad4c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xad4c, .value=0xbe, .type=IO_READ},
        {.addr=0xad4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0392) {
    const struct CPU_State initial_cpu = {.pc=0x644c, .a=0x6c, .x=0x2c, .y=0xe7, .sp=0xcd, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x644c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x644d, .a=0x66, .x=0x2c, .y=0xe7, .sp=0xcd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x644c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x644c, .value=0xbe, .type=IO_READ},
        {.addr=0x644d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0393) {
    const struct CPU_State initial_cpu = {.pc=0x19f4, .a=0x33, .x=0xa7, .y=0x2e, .sp=0x59, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x19f4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x19f5, .a=0xcd, .x=0xa7, .y=0x2e, .sp=0x59, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x19f4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x19f4, .value=0xbe, .type=IO_READ},
        {.addr=0x19f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0394) {
    const struct CPU_State initial_cpu = {.pc=0xa3ec, .a=0x78, .x=0x59, .y=0x4f, .sp=0x62, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ec, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa3ed, .a=0x78, .x=0x59, .y=0x4f, .sp=0x62, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa3ec, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa3ec, .value=0xbe, .type=IO_READ},
        {.addr=0xa3ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0395) {
    const struct CPU_State initial_cpu = {.pc=0xfbb9, .a=0x5c, .x=0x96, .y=0x5a, .sp=0x4e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfbba, .a=0xf6, .x=0x96, .y=0x5a, .sp=0x4e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xfbb9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfbb9, .value=0xbe, .type=IO_READ},
        {.addr=0xfbba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0396) {
    const struct CPU_State initial_cpu = {.pc=0xcbe1, .a=0x71, .x=0x34, .y=0xcd, .sp=0x8d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcbe2, .a=0x6b, .x=0x34, .y=0xcd, .sp=0x8d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xcbe1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcbe1, .value=0xbe, .type=IO_READ},
        {.addr=0xcbe2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0397) {
    const struct CPU_State initial_cpu = {.pc=0xc318, .a=0xa7, .x=0xb2, .y=0x6d, .sp=0x04, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc318, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc319, .a=0x47, .x=0xb2, .y=0x6d, .sp=0x04, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc318, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc318, .value=0xbe, .type=IO_READ},
        {.addr=0xc319, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0398) {
    const struct CPU_State initial_cpu = {.pc=0xa28a, .a=0xdc, .x=0x2f, .y=0xc3, .sp=0x8e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa28a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa28b, .a=0x76, .x=0x2f, .y=0xc3, .sp=0x8e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa28a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa28a, .value=0xbe, .type=IO_READ},
        {.addr=0xa28b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_0399) {
    const struct CPU_State initial_cpu = {.pc=0xf63c, .a=0x12, .x=0xab, .y=0x59, .sp=0x42, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf63c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf63d, .a=0xac, .x=0xab, .y=0x59, .sp=0x42, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf63c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf63c, .value=0xbe, .type=IO_READ},
        {.addr=0xf63d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_039A) {
    const struct CPU_State initial_cpu = {.pc=0x90a4, .a=0x88, .x=0xd4, .y=0x52, .sp=0x5a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x90a4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x90a5, .a=0x82, .x=0xd4, .y=0x52, .sp=0x5a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x90a4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x90a4, .value=0xbe, .type=IO_READ},
        {.addr=0x90a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_039B) {
    const struct CPU_State initial_cpu = {.pc=0x5fdf, .a=0xad, .x=0x75, .y=0xf9, .sp=0xb3, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5fdf, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5fe0, .a=0x47, .x=0x75, .y=0xf9, .sp=0xb3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5fdf, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5fdf, .value=0xbe, .type=IO_READ},
        {.addr=0x5fe0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_039C) {
    const struct CPU_State initial_cpu = {.pc=0xdf09, .a=0x8e, .x=0xbf, .y=0xf4, .sp=0xdc, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xdf09, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdf0a, .a=0x88, .x=0xbf, .y=0xf4, .sp=0xdc, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xdf09, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdf09, .value=0xbe, .type=IO_READ},
        {.addr=0xdf0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_039D) {
    const struct CPU_State initial_cpu = {.pc=0xde3b, .a=0x57, .x=0xb3, .y=0x2f, .sp=0xcf, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xde3b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xde3c, .a=0xf7, .x=0xb3, .y=0x2f, .sp=0xcf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xde3b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xde3b, .value=0xbe, .type=IO_READ},
        {.addr=0xde3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_039E) {
    const struct CPU_State initial_cpu = {.pc=0xb8df, .a=0x5e, .x=0x83, .y=0xce, .sp=0xd5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xb8df, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb8e0, .a=0x58, .x=0x83, .y=0xce, .sp=0xd5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb8df, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb8df, .value=0xbe, .type=IO_READ},
        {.addr=0xb8e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_039F) {
    const struct CPU_State initial_cpu = {.pc=0x479a, .a=0x28, .x=0x25, .y=0xcc, .sp=0x16, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x479a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x479b, .a=0x28, .x=0x25, .y=0xcc, .sp=0x16, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x479a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x479a, .value=0xbe, .type=IO_READ},
        {.addr=0x479b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xfa78, .a=0xb8, .x=0xc1, .y=0x38, .sp=0xd9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xfa78, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xfa79, .a=0x58, .x=0xc1, .y=0x38, .sp=0xd9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xfa78, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xfa78, .value=0xbe, .type=IO_READ},
        {.addr=0xfa79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe343, .a=0xe0, .x=0x64, .y=0xbe, .sp=0xce, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe343, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe344, .a=0x80, .x=0x64, .y=0xbe, .sp=0xce, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe343, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe343, .value=0xbe, .type=IO_READ},
        {.addr=0xe344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x824f, .a=0xe9, .x=0x9f, .y=0xe8, .sp=0x7b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x824f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8250, .a=0x89, .x=0x9f, .y=0xe8, .sp=0x7b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x824f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x824f, .value=0xbe, .type=IO_READ},
        {.addr=0x8250, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x3247, .a=0x02, .x=0xd7, .y=0x1d, .sp=0xd5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3247, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3248, .a=0x9c, .x=0xd7, .y=0x1d, .sp=0xd5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3247, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3247, .value=0xbe, .type=IO_READ},
        {.addr=0x3248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x9d9c, .a=0x50, .x=0x2a, .y=0xd6, .sp=0xae, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x9d9c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9d9d, .a=0x50, .x=0x2a, .y=0xd6, .sp=0xae, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9d9c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9d9c, .value=0xbe, .type=IO_READ},
        {.addr=0x9d9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x6edc, .a=0x4f, .x=0xe5, .y=0x66, .sp=0xe1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6edc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6edd, .a=0x49, .x=0xe5, .y=0x66, .sp=0xe1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6edc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6edc, .value=0xbe, .type=IO_READ},
        {.addr=0x6edd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xc071, .a=0x2e, .x=0xbb, .y=0x2b, .sp=0xbe, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xc071, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc072, .a=0xc8, .x=0xbb, .y=0x2b, .sp=0xbe, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc071, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc071, .value=0xbe, .type=IO_READ},
        {.addr=0xc072, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x94f5, .a=0xe6, .x=0x24, .y=0xc1, .sp=0x48, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x94f5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x94f6, .a=0x86, .x=0x24, .y=0xc1, .sp=0x48, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x94f5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x94f5, .value=0xbe, .type=IO_READ},
        {.addr=0x94f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x3744, .a=0x70, .x=0x12, .y=0xfb, .sp=0xd9, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3744, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3745, .a=0x6a, .x=0x12, .y=0xfb, .sp=0xd9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3744, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3744, .value=0xbe, .type=IO_READ},
        {.addr=0x3745, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x07ad, .a=0xf5, .x=0xd1, .y=0x68, .sp=0x95, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x07ad, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x07ae, .a=0x95, .x=0xd1, .y=0x68, .sp=0x95, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x07ad, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x07ad, .value=0xbe, .type=IO_READ},
        {.addr=0x07ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x239c, .a=0xeb, .x=0xe0, .y=0x85, .sp=0x01, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x239c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x239d, .a=0x85, .x=0xe0, .y=0x85, .sp=0x01, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x239c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x239c, .value=0xbe, .type=IO_READ},
        {.addr=0x239d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x18d1, .a=0x51, .x=0x79, .y=0xb4, .sp=0x03, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x18d1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x18d2, .a=0xf1, .x=0x79, .y=0xb4, .sp=0x03, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x18d1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x18d1, .value=0xbe, .type=IO_READ},
        {.addr=0x18d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcbe6, .a=0xd7, .x=0x3e, .y=0x6e, .sp=0xd9, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcbe7, .a=0x77, .x=0x3e, .y=0x6e, .sp=0xd9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xcbe6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcbe6, .value=0xbe, .type=IO_READ},
        {.addr=0xcbe7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x7e0e, .a=0xad, .x=0x00, .y=0x70, .sp=0x5e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7e0e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7e0f, .a=0x47, .x=0x00, .y=0x70, .sp=0x5e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7e0e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7e0e, .value=0xbe, .type=IO_READ},
        {.addr=0x7e0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x0c21, .a=0xfe, .x=0xd6, .y=0x0b, .sp=0x8e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c21, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0c22, .a=0x98, .x=0xd6, .y=0x0b, .sp=0x8e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0c21, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0c21, .value=0xbe, .type=IO_READ},
        {.addr=0x0c22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xc434, .a=0x0d, .x=0xc8, .y=0x90, .sp=0x4f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc434, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc435, .a=0xa7, .x=0xc8, .y=0x90, .sp=0x4f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc434, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc434, .value=0xbe, .type=IO_READ},
        {.addr=0xc435, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x2f7c, .a=0xf7, .x=0x3e, .y=0x46, .sp=0x66, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2f7c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2f7d, .a=0x97, .x=0x3e, .y=0x46, .sp=0x66, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2f7c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2f7c, .value=0xbe, .type=IO_READ},
        {.addr=0x2f7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x5b27, .a=0xf4, .x=0xbe, .y=0x5f, .sp=0xd6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5b27, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5b28, .a=0x94, .x=0xbe, .y=0x5f, .sp=0xd6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5b27, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5b27, .value=0xbe, .type=IO_READ},
        {.addr=0x5b28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xc782, .a=0x55, .x=0x62, .y=0x5c, .sp=0xdf, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc782, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc783, .a=0xef, .x=0x62, .y=0x5c, .sp=0xdf, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc782, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc782, .value=0xbe, .type=IO_READ},
        {.addr=0xc783, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xa0b1, .a=0x08, .x=0x0f, .y=0xf3, .sp=0xe7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa0b2, .a=0xa2, .x=0x0f, .y=0xf3, .sp=0xe7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa0b1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa0b1, .value=0xbe, .type=IO_READ},
        {.addr=0xa0b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xf801, .a=0x74, .x=0x26, .y=0x9e, .sp=0xfc, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf801, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf802, .a=0x0e, .x=0x26, .y=0x9e, .sp=0xfc, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf801, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf801, .value=0xbe, .type=IO_READ},
        {.addr=0xf802, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x4739, .a=0xb1, .x=0xaf, .y=0xee, .sp=0x04, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x4739, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x473a, .a=0x4b, .x=0xaf, .y=0xee, .sp=0x04, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4739, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4739, .value=0xbe, .type=IO_READ},
        {.addr=0x473a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x56f9, .a=0xc8, .x=0x6f, .y=0xfc, .sp=0xac, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x56f9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x56fa, .a=0x62, .x=0x6f, .y=0xfc, .sp=0xac, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x56f9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x56f9, .value=0xbe, .type=IO_READ},
        {.addr=0x56fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x3d77, .a=0x4e, .x=0xf9, .y=0x21, .sp=0xe2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x3d77, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3d78, .a=0xe8, .x=0xf9, .y=0x21, .sp=0xe2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3d77, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3d77, .value=0xbe, .type=IO_READ},
        {.addr=0x3d78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x2cdd, .a=0x94, .x=0xc2, .y=0x32, .sp=0xa7, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2cdd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2cde, .a=0x8e, .x=0xc2, .y=0x32, .sp=0xa7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2cdd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2cdd, .value=0xbe, .type=IO_READ},
        {.addr=0x2cde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x9be9, .a=0x58, .x=0xa0, .y=0x1a, .sp=0xf3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9be9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9bea, .a=0xf2, .x=0xa0, .y=0x1a, .sp=0xf3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9be9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9be9, .value=0xbe, .type=IO_READ},
        {.addr=0x9bea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xef5a, .a=0xdb, .x=0xc4, .y=0x04, .sp=0x83, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xef5a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xef5b, .a=0x75, .x=0xc4, .y=0x04, .sp=0x83, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xef5a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xef5a, .value=0xbe, .type=IO_READ},
        {.addr=0xef5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xf6e7, .a=0x04, .x=0x0b, .y=0xc6, .sp=0xc1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf6e8, .a=0x9e, .x=0x0b, .y=0xc6, .sp=0xc1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf6e7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf6e7, .value=0xbe, .type=IO_READ},
        {.addr=0xf6e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xca4d, .a=0x05, .x=0x4f, .y=0xc2, .sp=0x93, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xca4d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xca4e, .a=0xff, .x=0x4f, .y=0xc2, .sp=0x93, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xca4d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xca4d, .value=0xbe, .type=IO_READ},
        {.addr=0xca4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x27b2, .a=0x10, .x=0xcd, .y=0x4b, .sp=0x18, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x27b2, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x27b3, .a=0x0a, .x=0xcd, .y=0x4b, .sp=0x18, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x27b2, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x27b2, .value=0xbe, .type=IO_READ},
        {.addr=0x27b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x6330, .a=0x92, .x=0xaf, .y=0x0a, .sp=0xc3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6330, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6331, .a=0x8c, .x=0xaf, .y=0x0a, .sp=0xc3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6330, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6330, .value=0xbe, .type=IO_READ},
        {.addr=0x6331, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb915, .a=0xc6, .x=0xe2, .y=0x2a, .sp=0x0a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb915, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb916, .a=0x60, .x=0xe2, .y=0x2a, .sp=0x0a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb915, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb915, .value=0xbe, .type=IO_READ},
        {.addr=0xb916, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x2552, .a=0xb4, .x=0x9d, .y=0x8e, .sp=0xaa, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2552, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2553, .a=0x54, .x=0x9d, .y=0x8e, .sp=0xaa, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2552, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2552, .value=0xbe, .type=IO_READ},
        {.addr=0x2553, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xd72b, .a=0x72, .x=0xf0, .y=0x35, .sp=0x06, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd72b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd72c, .a=0x6c, .x=0xf0, .y=0x35, .sp=0x06, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd72b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd72b, .value=0xbe, .type=IO_READ},
        {.addr=0xd72c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xffd5, .a=0x30, .x=0x38, .y=0xde, .sp=0x39, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xffd5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xffd6, .a=0xca, .x=0x38, .y=0xde, .sp=0x39, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xffd5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xffd5, .value=0xbe, .type=IO_READ},
        {.addr=0xffd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xe169, .a=0x0f, .x=0x33, .y=0x2c, .sp=0x4f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe169, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe16a, .a=0xa9, .x=0x33, .y=0x2c, .sp=0x4f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe169, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe169, .value=0xbe, .type=IO_READ},
        {.addr=0xe16a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x53e1, .a=0x7c, .x=0x7e, .y=0xf5, .sp=0x7b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x53e1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x53e2, .a=0x76, .x=0x7e, .y=0xf5, .sp=0x7b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x53e1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x53e1, .value=0xbe, .type=IO_READ},
        {.addr=0x53e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x1eb1, .a=0xcc, .x=0x23, .y=0xef, .sp=0x02, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1eb2, .a=0x66, .x=0x23, .y=0xef, .sp=0x02, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1eb1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1eb1, .value=0xbe, .type=IO_READ},
        {.addr=0x1eb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x837b, .a=0x26, .x=0x08, .y=0xce, .sp=0x12, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x837b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x837c, .a=0xc6, .x=0x08, .y=0xce, .sp=0x12, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x837b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x837b, .value=0xbe, .type=IO_READ},
        {.addr=0x837c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x7d70, .a=0x32, .x=0x14, .y=0x31, .sp=0x4b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x7d70, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7d71, .a=0xd2, .x=0x14, .y=0x31, .sp=0x4b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7d70, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7d70, .value=0xbe, .type=IO_READ},
        {.addr=0x7d71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x085a, .a=0xdb, .x=0xa3, .y=0x96, .sp=0x36, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x085a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x085b, .a=0x75, .x=0xa3, .y=0x96, .sp=0x36, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x085a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x085a, .value=0xbe, .type=IO_READ},
        {.addr=0x085b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x1700, .a=0xa8, .x=0x0c, .y=0xbb, .sp=0x5d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1700, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1701, .a=0x42, .x=0x0c, .y=0xbb, .sp=0x5d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1700, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1700, .value=0xbe, .type=IO_READ},
        {.addr=0x1701, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x695b, .a=0x57, .x=0x76, .y=0xdd, .sp=0x87, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x695b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x695c, .a=0xf1, .x=0x76, .y=0xdd, .sp=0x87, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x695b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x695b, .value=0xbe, .type=IO_READ},
        {.addr=0x695c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xcea5, .a=0xca, .x=0x0b, .y=0x75, .sp=0xbf, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xcea5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcea6, .a=0x64, .x=0x0b, .y=0x75, .sp=0xbf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcea5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcea5, .value=0xbe, .type=IO_READ},
        {.addr=0xcea6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xbe22, .a=0xea, .x=0x13, .y=0x2d, .sp=0x74, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbe22, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbe23, .a=0x84, .x=0x13, .y=0x2d, .sp=0x74, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbe22, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbe22, .value=0xbe, .type=IO_READ},
        {.addr=0xbe23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xb340, .a=0xa4, .x=0xed, .y=0xc5, .sp=0x40, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb340, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb341, .a=0x44, .x=0xed, .y=0xc5, .sp=0x40, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb340, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb340, .value=0xbe, .type=IO_READ},
        {.addr=0xb341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x1362, .a=0x2d, .x=0x5d, .y=0x2c, .sp=0x18, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x1362, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1363, .a=0x27, .x=0x5d, .y=0x2c, .sp=0x18, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1362, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1362, .value=0xbe, .type=IO_READ},
        {.addr=0x1363, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xc63e, .a=0x1b, .x=0x25, .y=0x49, .sp=0xa6, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xc63e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc63f, .a=0xb5, .x=0x25, .y=0x49, .sp=0xa6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc63e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc63e, .value=0xbe, .type=IO_READ},
        {.addr=0xc63f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xf7e8, .a=0xe8, .x=0x65, .y=0x3b, .sp=0x54, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf7e9, .a=0x82, .x=0x65, .y=0x3b, .sp=0x54, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf7e8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf7e8, .value=0xbe, .type=IO_READ},
        {.addr=0xf7e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x5678, .a=0xc8, .x=0xdc, .y=0x7d, .sp=0x37, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5678, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5679, .a=0x68, .x=0xdc, .y=0x7d, .sp=0x37, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5678, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5678, .value=0xbe, .type=IO_READ},
        {.addr=0x5679, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x4a23, .a=0xd4, .x=0xe7, .y=0x9a, .sp=0xdb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x4a23, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4a24, .a=0x6e, .x=0xe7, .y=0x9a, .sp=0xdb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4a23, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4a23, .value=0xbe, .type=IO_READ},
        {.addr=0x4a24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xb15e, .a=0xc1, .x=0x9b, .y=0x53, .sp=0x8d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb15e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb15f, .a=0x61, .x=0x9b, .y=0x53, .sp=0x8d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb15e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb15e, .value=0xbe, .type=IO_READ},
        {.addr=0xb15f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x477f, .a=0x43, .x=0x9b, .y=0xe8, .sp=0xbb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x477f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4780, .a=0x43, .x=0x9b, .y=0xe8, .sp=0xbb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x477f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x477f, .value=0xbe, .type=IO_READ},
        {.addr=0x4780, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6026, .a=0x56, .x=0x55, .y=0xdd, .sp=0x5b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6026, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6027, .a=0xf0, .x=0x55, .y=0xdd, .sp=0x5b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6026, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6026, .value=0xbe, .type=IO_READ},
        {.addr=0x6027, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x5f2e, .a=0xb9, .x=0x9b, .y=0x8e, .sp=0xcc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5f2e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5f2f, .a=0x53, .x=0x9b, .y=0x8e, .sp=0xcc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5f2e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5f2e, .value=0xbe, .type=IO_READ},
        {.addr=0x5f2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xbfa1, .a=0x5e, .x=0xc5, .y=0x50, .sp=0x7a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbfa2, .a=0x58, .x=0xc5, .y=0x50, .sp=0x7a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbfa1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbfa1, .value=0xbe, .type=IO_READ},
        {.addr=0xbfa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xf259, .a=0x48, .x=0xa1, .y=0x7f, .sp=0x61, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xf259, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf25a, .a=0xe2, .x=0xa1, .y=0x7f, .sp=0x61, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf259, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf259, .value=0xbe, .type=IO_READ},
        {.addr=0xf25a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xc7b0, .a=0x65, .x=0xb9, .y=0x8e, .sp=0x6a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc7b1, .a=0x5f, .x=0xb9, .y=0x8e, .sp=0x6a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc7b0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc7b0, .value=0xbe, .type=IO_READ},
        {.addr=0xc7b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xeb8d, .a=0x15, .x=0x40, .y=0x13, .sp=0x91, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xeb8d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeb8e, .a=0x0f, .x=0x40, .y=0x13, .sp=0x91, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xeb8d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeb8d, .value=0xbe, .type=IO_READ},
        {.addr=0xeb8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3246, .a=0x37, .x=0xc4, .y=0x05, .sp=0x46, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x3246, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3247, .a=0x31, .x=0xc4, .y=0x05, .sp=0x46, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3246, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3246, .value=0xbe, .type=IO_READ},
        {.addr=0x3247, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x947c, .a=0x6b, .x=0x79, .y=0xe0, .sp=0x2f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x947c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x947d, .a=0x65, .x=0x79, .y=0xe0, .sp=0x2f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x947c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x947c, .value=0xbe, .type=IO_READ},
        {.addr=0x947d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xb948, .a=0xc9, .x=0x23, .y=0xf2, .sp=0x4c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb948, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb949, .a=0x63, .x=0x23, .y=0xf2, .sp=0x4c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb948, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb948, .value=0xbe, .type=IO_READ},
        {.addr=0xb949, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xe073, .a=0x6b, .x=0xe3, .y=0x91, .sp=0xb2, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe073, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xe074, .a=0x65, .x=0xe3, .y=0x91, .sp=0xb2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe073, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xe073, .value=0xbe, .type=IO_READ},
        {.addr=0xe074, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xd064, .a=0x84, .x=0x3e, .y=0xac, .sp=0x52, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd064, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd065, .a=0x84, .x=0x3e, .y=0xac, .sp=0x52, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd064, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd064, .value=0xbe, .type=IO_READ},
        {.addr=0xd065, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x981e, .a=0x55, .x=0x7c, .y=0xa2, .sp=0x2b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x981e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x981f, .a=0xef, .x=0x7c, .y=0xa2, .sp=0x2b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x981e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x981e, .value=0xbe, .type=IO_READ},
        {.addr=0x981f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xb9df, .a=0xdf, .x=0x22, .y=0x65, .sp=0x1c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xb9df, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb9e0, .a=0x79, .x=0x22, .y=0x65, .sp=0x1c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb9df, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb9df, .value=0xbe, .type=IO_READ},
        {.addr=0xb9e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xa18e, .a=0x79, .x=0x1b, .y=0x2a, .sp=0xe6, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa18e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa18f, .a=0x73, .x=0x1b, .y=0x2a, .sp=0xe6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa18e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa18e, .value=0xbe, .type=IO_READ},
        {.addr=0xa18f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xdd48, .a=0xa5, .x=0x61, .y=0xcc, .sp=0xd1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xdd48, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdd49, .a=0x45, .x=0x61, .y=0xcc, .sp=0xd1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xdd48, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdd48, .value=0xbe, .type=IO_READ},
        {.addr=0xdd49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x45e4, .a=0x1a, .x=0xf8, .y=0xaf, .sp=0xc2, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x45e4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x45e5, .a=0xb4, .x=0xf8, .y=0xaf, .sp=0xc2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x45e4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x45e4, .value=0xbe, .type=IO_READ},
        {.addr=0x45e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xb908, .a=0xc5, .x=0xc6, .y=0x45, .sp=0xea, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb908, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb909, .a=0x5f, .x=0xc6, .y=0x45, .sp=0xea, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb908, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb908, .value=0xbe, .type=IO_READ},
        {.addr=0xb909, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x6ad1, .a=0xf1, .x=0x00, .y=0xfa, .sp=0x5c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6ad2, .a=0x8b, .x=0x00, .y=0xfa, .sp=0x5c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6ad1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6ad1, .value=0xbe, .type=IO_READ},
        {.addr=0x6ad2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BE, _BE_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xf165, .a=0x5a, .x=0xfa, .y=0x3e, .sp=0xcc, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xf165, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf166, .a=0x54, .x=0xfa, .y=0x3e, .sp=0xcc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf165, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf165, .value=0xbe, .type=IO_READ},
        {.addr=0xf166, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BE 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
