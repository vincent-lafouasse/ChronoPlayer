#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_DD, _DD_0000) {
    const struct CPU_State initial_cpu = {.pc=0x9662, .a=0xac, .x=0x8e, .y=0x33, .sp=0x1a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9662, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9663, .a=0x33, .x=0x8e, .y=0x33, .sp=0x1a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9662, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9662, .value=0xdd, .type=IO_READ},
        {.addr=0x9663, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0001) {
    const struct CPU_State initial_cpu = {.pc=0x0932, .a=0x9b, .x=0x63, .y=0xed, .sp=0x45, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0932, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0933, .a=0xed, .x=0x63, .y=0xed, .sp=0x45, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0932, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0932, .value=0xdd, .type=IO_READ},
        {.addr=0x0933, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0002) {
    const struct CPU_State initial_cpu = {.pc=0xbd4f, .a=0xab, .x=0xc3, .y=0x39, .sp=0x03, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xbd4f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbd50, .a=0x39, .x=0xc3, .y=0x39, .sp=0x03, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xbd4f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbd4f, .value=0xdd, .type=IO_READ},
        {.addr=0xbd50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0003) {
    const struct CPU_State initial_cpu = {.pc=0x0f49, .a=0xaf, .x=0x90, .y=0x16, .sp=0xc5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0f49, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0f4a, .a=0x16, .x=0x90, .y=0x16, .sp=0xc5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0f49, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0f49, .value=0xdd, .type=IO_READ},
        {.addr=0x0f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0004) {
    const struct CPU_State initial_cpu = {.pc=0x7782, .a=0xdd, .x=0x64, .y=0xb4, .sp=0x87, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7782, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7783, .a=0xb4, .x=0x64, .y=0xb4, .sp=0x87, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7782, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7782, .value=0xdd, .type=IO_READ},
        {.addr=0x7783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0005) {
    const struct CPU_State initial_cpu = {.pc=0xfdcc, .a=0x3e, .x=0x95, .y=0x89, .sp=0x68, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xfdcc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfdcd, .a=0x89, .x=0x95, .y=0x89, .sp=0x68, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfdcc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfdcc, .value=0xdd, .type=IO_READ},
        {.addr=0xfdcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0006) {
    const struct CPU_State initial_cpu = {.pc=0x4e5e, .a=0x22, .x=0x16, .y=0xd2, .sp=0x41, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x4e5e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4e5f, .a=0xd2, .x=0x16, .y=0xd2, .sp=0x41, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4e5e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4e5e, .value=0xdd, .type=IO_READ},
        {.addr=0x4e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0007) {
    const struct CPU_State initial_cpu = {.pc=0x3a72, .a=0xb7, .x=0x51, .y=0x9e, .sp=0xe5, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3a72, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3a73, .a=0x9e, .x=0x51, .y=0x9e, .sp=0xe5, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3a72, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3a72, .value=0xdd, .type=IO_READ},
        {.addr=0x3a73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0008) {
    const struct CPU_State initial_cpu = {.pc=0x39c3, .a=0x1c, .x=0xf5, .y=0xa8, .sp=0x38, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x39c3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x39c4, .a=0xa8, .x=0xf5, .y=0xa8, .sp=0x38, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x39c3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x39c3, .value=0xdd, .type=IO_READ},
        {.addr=0x39c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0009) {
    const struct CPU_State initial_cpu = {.pc=0x4033, .a=0xf0, .x=0x84, .y=0xb4, .sp=0x93, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x4033, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4034, .a=0xb4, .x=0x84, .y=0xb4, .sp=0x93, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4033, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4033, .value=0xdd, .type=IO_READ},
        {.addr=0x4034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_000A) {
    const struct CPU_State initial_cpu = {.pc=0x8773, .a=0x84, .x=0x5a, .y=0xf8, .sp=0xc7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8773, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8774, .a=0xf8, .x=0x5a, .y=0xf8, .sp=0xc7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8773, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8773, .value=0xdd, .type=IO_READ},
        {.addr=0x8774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd953, .a=0xdf, .x=0x34, .y=0x6c, .sp=0xaf, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd953, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd954, .a=0x6c, .x=0x34, .y=0x6c, .sp=0xaf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd953, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd953, .value=0xdd, .type=IO_READ},
        {.addr=0xd954, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_000C) {
    const struct CPU_State initial_cpu = {.pc=0xdc54, .a=0x3d, .x=0x9f, .y=0x87, .sp=0xbf, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xdc54, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdc55, .a=0x87, .x=0x9f, .y=0x87, .sp=0xbf, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xdc54, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdc54, .value=0xdd, .type=IO_READ},
        {.addr=0xdc55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_000D) {
    const struct CPU_State initial_cpu = {.pc=0x9809, .a=0x04, .x=0xec, .y=0x28, .sp=0x75, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x9809, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x980a, .a=0x28, .x=0xec, .y=0x28, .sp=0x75, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9809, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9809, .value=0xdd, .type=IO_READ},
        {.addr=0x980a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_000E) {
    const struct CPU_State initial_cpu = {.pc=0x4637, .a=0x26, .x=0x7e, .y=0xde, .sp=0x56, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4637, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4638, .a=0xde, .x=0x7e, .y=0xde, .sp=0x56, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4637, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4637, .value=0xdd, .type=IO_READ},
        {.addr=0x4638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_000F) {
    const struct CPU_State initial_cpu = {.pc=0x2c1b, .a=0x39, .x=0x7c, .y=0x06, .sp=0xa1, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2c1b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2c1c, .a=0x06, .x=0x7c, .y=0x06, .sp=0xa1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2c1b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2c1b, .value=0xdd, .type=IO_READ},
        {.addr=0x2c1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0010) {
    const struct CPU_State initial_cpu = {.pc=0x5251, .a=0x5a, .x=0x92, .y=0x08, .sp=0xb0, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5251, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5252, .a=0x08, .x=0x92, .y=0x08, .sp=0xb0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5251, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5251, .value=0xdd, .type=IO_READ},
        {.addr=0x5252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0011) {
    const struct CPU_State initial_cpu = {.pc=0x292d, .a=0x52, .x=0xb9, .y=0xc3, .sp=0xd9, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x292d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x292e, .a=0xc3, .x=0xb9, .y=0xc3, .sp=0xd9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x292d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x292d, .value=0xdd, .type=IO_READ},
        {.addr=0x292e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0012) {
    const struct CPU_State initial_cpu = {.pc=0xcf2f, .a=0x62, .x=0xb4, .y=0x69, .sp=0x18, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xcf2f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcf30, .a=0x69, .x=0xb4, .y=0x69, .sp=0x18, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xcf2f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcf2f, .value=0xdd, .type=IO_READ},
        {.addr=0xcf30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0013) {
    const struct CPU_State initial_cpu = {.pc=0x748a, .a=0x89, .x=0xbe, .y=0xd3, .sp=0xf3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x748a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x748b, .a=0xd3, .x=0xbe, .y=0xd3, .sp=0xf3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x748a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x748a, .value=0xdd, .type=IO_READ},
        {.addr=0x748b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0014) {
    const struct CPU_State initial_cpu = {.pc=0xd8cd, .a=0x56, .x=0x20, .y=0xe4, .sp=0x3c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd8cd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd8ce, .a=0xe4, .x=0x20, .y=0xe4, .sp=0x3c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd8cd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd8cd, .value=0xdd, .type=IO_READ},
        {.addr=0xd8ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0015) {
    const struct CPU_State initial_cpu = {.pc=0x3156, .a=0x44, .x=0xc4, .y=0xe0, .sp=0x5a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3156, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3157, .a=0xe0, .x=0xc4, .y=0xe0, .sp=0x5a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3156, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3156, .value=0xdd, .type=IO_READ},
        {.addr=0x3157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0016) {
    const struct CPU_State initial_cpu = {.pc=0x7fdd, .a=0xba, .x=0x6d, .y=0x1f, .sp=0xd4, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x7fdd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7fde, .a=0x1f, .x=0x6d, .y=0x1f, .sp=0xd4, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7fdd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7fdd, .value=0xdd, .type=IO_READ},
        {.addr=0x7fde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0017) {
    const struct CPU_State initial_cpu = {.pc=0xbea8, .a=0x63, .x=0x47, .y=0x58, .sp=0x73, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xbea8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbea9, .a=0x58, .x=0x47, .y=0x58, .sp=0x73, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xbea8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbea8, .value=0xdd, .type=IO_READ},
        {.addr=0xbea9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0018) {
    const struct CPU_State initial_cpu = {.pc=0xf2e7, .a=0xc7, .x=0x74, .y=0x91, .sp=0x10, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf2e7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf2e8, .a=0x91, .x=0x74, .y=0x91, .sp=0x10, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xf2e7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf2e7, .value=0xdd, .type=IO_READ},
        {.addr=0xf2e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0019) {
    const struct CPU_State initial_cpu = {.pc=0x4c95, .a=0xa8, .x=0xdf, .y=0x00, .sp=0xd5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4c95, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c96, .a=0x00, .x=0xdf, .y=0x00, .sp=0xd5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x4c95, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c95, .value=0xdd, .type=IO_READ},
        {.addr=0x4c96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_001A) {
    const struct CPU_State initial_cpu = {.pc=0xeb43, .a=0x7b, .x=0x81, .y=0x42, .sp=0x9c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xeb43, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeb44, .a=0x42, .x=0x81, .y=0x42, .sp=0x9c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xeb43, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeb43, .value=0xdd, .type=IO_READ},
        {.addr=0xeb44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_001B) {
    const struct CPU_State initial_cpu = {.pc=0xed99, .a=0x92, .x=0x2e, .y=0xa6, .sp=0xdb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xed99, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xed9a, .a=0xa6, .x=0x2e, .y=0xa6, .sp=0xdb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xed99, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xed99, .value=0xdd, .type=IO_READ},
        {.addr=0xed9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_001C) {
    const struct CPU_State initial_cpu = {.pc=0xc75f, .a=0xa0, .x=0x74, .y=0x5d, .sp=0x6b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc75f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc760, .a=0x5d, .x=0x74, .y=0x5d, .sp=0x6b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc75f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc75f, .value=0xdd, .type=IO_READ},
        {.addr=0xc760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_001D) {
    const struct CPU_State initial_cpu = {.pc=0x8725, .a=0x40, .x=0xd2, .y=0x5d, .sp=0xc7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x8725, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8726, .a=0x5d, .x=0xd2, .y=0x5d, .sp=0xc7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8725, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8725, .value=0xdd, .type=IO_READ},
        {.addr=0x8726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_001E) {
    const struct CPU_State initial_cpu = {.pc=0x0644, .a=0xf8, .x=0x30, .y=0x8b, .sp=0x9b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0644, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0645, .a=0x8b, .x=0x30, .y=0x8b, .sp=0x9b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0644, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0644, .value=0xdd, .type=IO_READ},
        {.addr=0x0645, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_001F) {
    const struct CPU_State initial_cpu = {.pc=0x0f86, .a=0x0d, .x=0xa1, .y=0x84, .sp=0xfc, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f86, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0f87, .a=0x84, .x=0xa1, .y=0x84, .sp=0xfc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0f86, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0f86, .value=0xdd, .type=IO_READ},
        {.addr=0x0f87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0020) {
    const struct CPU_State initial_cpu = {.pc=0x2aed, .a=0xd7, .x=0x5f, .y=0x05, .sp=0xc7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2aed, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2aee, .a=0x05, .x=0x5f, .y=0x05, .sp=0xc7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2aed, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2aed, .value=0xdd, .type=IO_READ},
        {.addr=0x2aee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0021) {
    const struct CPU_State initial_cpu = {.pc=0xf5e3, .a=0x18, .x=0x56, .y=0xcd, .sp=0x24, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xf5e3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf5e4, .a=0xcd, .x=0x56, .y=0xcd, .sp=0x24, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf5e3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf5e3, .value=0xdd, .type=IO_READ},
        {.addr=0xf5e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0022) {
    const struct CPU_State initial_cpu = {.pc=0x8d98, .a=0x3e, .x=0xe6, .y=0x68, .sp=0xcd, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8d98, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8d99, .a=0x68, .x=0xe6, .y=0x68, .sp=0xcd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8d98, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8d98, .value=0xdd, .type=IO_READ},
        {.addr=0x8d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0023) {
    const struct CPU_State initial_cpu = {.pc=0x44a0, .a=0x8a, .x=0xbc, .y=0xff, .sp=0x7c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x44a0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x44a1, .a=0xff, .x=0xbc, .y=0xff, .sp=0x7c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x44a0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x44a0, .value=0xdd, .type=IO_READ},
        {.addr=0x44a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0024) {
    const struct CPU_State initial_cpu = {.pc=0x6603, .a=0xa9, .x=0xdb, .y=0x0e, .sp=0x62, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x6603, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6604, .a=0x0e, .x=0xdb, .y=0x0e, .sp=0x62, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6603, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6603, .value=0xdd, .type=IO_READ},
        {.addr=0x6604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0025) {
    const struct CPU_State initial_cpu = {.pc=0xce15, .a=0x64, .x=0xf2, .y=0xe8, .sp=0x1f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xce15, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xce16, .a=0xe8, .x=0xf2, .y=0xe8, .sp=0x1f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xce15, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xce15, .value=0xdd, .type=IO_READ},
        {.addr=0xce16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0026) {
    const struct CPU_State initial_cpu = {.pc=0x740f, .a=0x59, .x=0xed, .y=0x4a, .sp=0x3d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x740f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7410, .a=0x4a, .x=0xed, .y=0x4a, .sp=0x3d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x740f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x740f, .value=0xdd, .type=IO_READ},
        {.addr=0x7410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5445, .a=0x74, .x=0x73, .y=0xa9, .sp=0x16, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5445, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5446, .a=0xa9, .x=0x73, .y=0xa9, .sp=0x16, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5445, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5445, .value=0xdd, .type=IO_READ},
        {.addr=0x5446, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0028) {
    const struct CPU_State initial_cpu = {.pc=0xcd5b, .a=0xa9, .x=0xab, .y=0xd5, .sp=0x51, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcd5c, .a=0xd5, .x=0xab, .y=0xd5, .sp=0x51, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xcd5b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcd5b, .value=0xdd, .type=IO_READ},
        {.addr=0xcd5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0029) {
    const struct CPU_State initial_cpu = {.pc=0xd56e, .a=0x96, .x=0xc4, .y=0x33, .sp=0x91, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd56e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd56f, .a=0x33, .x=0xc4, .y=0x33, .sp=0x91, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd56e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd56e, .value=0xdd, .type=IO_READ},
        {.addr=0xd56f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_002A) {
    const struct CPU_State initial_cpu = {.pc=0x2d74, .a=0x95, .x=0x86, .y=0x91, .sp=0x88, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2d74, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2d75, .a=0x91, .x=0x86, .y=0x91, .sp=0x88, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2d74, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2d74, .value=0xdd, .type=IO_READ},
        {.addr=0x2d75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_002B) {
    const struct CPU_State initial_cpu = {.pc=0xe64c, .a=0xfa, .x=0xde, .y=0xb6, .sp=0xea, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe64c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe64d, .a=0xb6, .x=0xde, .y=0xb6, .sp=0xea, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe64c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe64c, .value=0xdd, .type=IO_READ},
        {.addr=0xe64d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_002C) {
    const struct CPU_State initial_cpu = {.pc=0x7709, .a=0x12, .x=0x4c, .y=0x94, .sp=0xbf, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7709, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x770a, .a=0x94, .x=0x4c, .y=0x94, .sp=0xbf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7709, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7709, .value=0xdd, .type=IO_READ},
        {.addr=0x770a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_002D) {
    const struct CPU_State initial_cpu = {.pc=0xbf97, .a=0x05, .x=0x59, .y=0x10, .sp=0xcb, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xbf97, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0x10, .x=0x59, .y=0x10, .sp=0xcb, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbf97, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbf97, .value=0xdd, .type=IO_READ},
        {.addr=0xbf98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_002E) {
    const struct CPU_State initial_cpu = {.pc=0x2bda, .a=0x87, .x=0xe2, .y=0xb7, .sp=0x8c, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2bda, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2bdb, .a=0xb7, .x=0xe2, .y=0xb7, .sp=0x8c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2bda, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2bda, .value=0xdd, .type=IO_READ},
        {.addr=0x2bdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_002F) {
    const struct CPU_State initial_cpu = {.pc=0x818d, .a=0x5c, .x=0x19, .y=0xc3, .sp=0x72, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x818d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x818e, .a=0xc3, .x=0x19, .y=0xc3, .sp=0x72, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x818d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x818d, .value=0xdd, .type=IO_READ},
        {.addr=0x818e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0030) {
    const struct CPU_State initial_cpu = {.pc=0xaf67, .a=0xf9, .x=0xe8, .y=0x8b, .sp=0xb0, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xaf67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaf68, .a=0x8b, .x=0xe8, .y=0x8b, .sp=0xb0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xaf67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaf67, .value=0xdd, .type=IO_READ},
        {.addr=0xaf68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0031) {
    const struct CPU_State initial_cpu = {.pc=0x6151, .a=0xdd, .x=0x25, .y=0xe6, .sp=0x68, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6151, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6152, .a=0xe6, .x=0x25, .y=0xe6, .sp=0x68, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6151, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6151, .value=0xdd, .type=IO_READ},
        {.addr=0x6152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0032) {
    const struct CPU_State initial_cpu = {.pc=0xbfc1, .a=0x96, .x=0x45, .y=0x80, .sp=0xf6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbfc2, .a=0x80, .x=0x45, .y=0x80, .sp=0xf6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbfc1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbfc1, .value=0xdd, .type=IO_READ},
        {.addr=0xbfc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0033) {
    const struct CPU_State initial_cpu = {.pc=0x82c9, .a=0x56, .x=0xa9, .y=0xf3, .sp=0xf5, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x82c9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x82ca, .a=0xf3, .x=0xa9, .y=0xf3, .sp=0xf5, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x82c9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x82c9, .value=0xdd, .type=IO_READ},
        {.addr=0x82ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0034) {
    const struct CPU_State initial_cpu = {.pc=0x765e, .a=0x4f, .x=0x62, .y=0x0c, .sp=0xc3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x765e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x765f, .a=0x0c, .x=0x62, .y=0x0c, .sp=0xc3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x765e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x765e, .value=0xdd, .type=IO_READ},
        {.addr=0x765f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0035) {
    const struct CPU_State initial_cpu = {.pc=0x6509, .a=0xbc, .x=0x7d, .y=0x58, .sp=0x1a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x6509, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x650a, .a=0x58, .x=0x7d, .y=0x58, .sp=0x1a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6509, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6509, .value=0xdd, .type=IO_READ},
        {.addr=0x650a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0036) {
    const struct CPU_State initial_cpu = {.pc=0xfc18, .a=0xf3, .x=0x32, .y=0xd2, .sp=0x29, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xfc18, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfc19, .a=0xd2, .x=0x32, .y=0xd2, .sp=0x29, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xfc18, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfc18, .value=0xdd, .type=IO_READ},
        {.addr=0xfc19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0037) {
    const struct CPU_State initial_cpu = {.pc=0xf2cc, .a=0x66, .x=0xa5, .y=0x14, .sp=0x95, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf2cc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf2cd, .a=0x14, .x=0xa5, .y=0x14, .sp=0x95, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf2cc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf2cc, .value=0xdd, .type=IO_READ},
        {.addr=0xf2cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0038) {
    const struct CPU_State initial_cpu = {.pc=0x1ade, .a=0xa7, .x=0xff, .y=0x2f, .sp=0x23, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ade, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1adf, .a=0x2f, .x=0xff, .y=0x2f, .sp=0x23, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1ade, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1ade, .value=0xdd, .type=IO_READ},
        {.addr=0x1adf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0039) {
    const struct CPU_State initial_cpu = {.pc=0x37b7, .a=0x7b, .x=0xf2, .y=0x80, .sp=0xd9, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x37b7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x37b8, .a=0x80, .x=0xf2, .y=0x80, .sp=0xd9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x37b7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x37b7, .value=0xdd, .type=IO_READ},
        {.addr=0x37b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_003A) {
    const struct CPU_State initial_cpu = {.pc=0xcdfe, .a=0xd3, .x=0x88, .y=0x89, .sp=0x61, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xcdfe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcdff, .a=0x89, .x=0x88, .y=0x89, .sp=0x61, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcdfe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcdfe, .value=0xdd, .type=IO_READ},
        {.addr=0xcdff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_003B) {
    const struct CPU_State initial_cpu = {.pc=0xfe66, .a=0xab, .x=0x50, .y=0xa6, .sp=0xc9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe66, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfe67, .a=0xa6, .x=0x50, .y=0xa6, .sp=0xc9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfe66, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfe66, .value=0xdd, .type=IO_READ},
        {.addr=0xfe67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_003C) {
    const struct CPU_State initial_cpu = {.pc=0x36df, .a=0x68, .x=0x13, .y=0x1c, .sp=0xf7, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x36df, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x36e0, .a=0x1c, .x=0x13, .y=0x1c, .sp=0xf7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x36df, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x36df, .value=0xdd, .type=IO_READ},
        {.addr=0x36e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_003D) {
    const struct CPU_State initial_cpu = {.pc=0x42da, .a=0x39, .x=0x38, .y=0x6a, .sp=0x21, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x42da, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x42db, .a=0x6a, .x=0x38, .y=0x6a, .sp=0x21, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x42da, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x42da, .value=0xdd, .type=IO_READ},
        {.addr=0x42db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_003E) {
    const struct CPU_State initial_cpu = {.pc=0x27e3, .a=0xb9, .x=0xc1, .y=0x5b, .sp=0xf6, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x27e3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x27e4, .a=0x5b, .x=0xc1, .y=0x5b, .sp=0xf6, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x27e3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x27e3, .value=0xdd, .type=IO_READ},
        {.addr=0x27e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_003F) {
    const struct CPU_State initial_cpu = {.pc=0xf6af, .a=0x6f, .x=0x82, .y=0x28, .sp=0x17, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf6af, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf6b0, .a=0x28, .x=0x82, .y=0x28, .sp=0x17, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf6af, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf6af, .value=0xdd, .type=IO_READ},
        {.addr=0xf6b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0040) {
    const struct CPU_State initial_cpu = {.pc=0x47cd, .a=0x62, .x=0x3b, .y=0x4b, .sp=0xbd, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x47cd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x47ce, .a=0x4b, .x=0x3b, .y=0x4b, .sp=0xbd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x47cd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x47cd, .value=0xdd, .type=IO_READ},
        {.addr=0x47ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0041) {
    const struct CPU_State initial_cpu = {.pc=0x26b1, .a=0x0e, .x=0xe2, .y=0xc1, .sp=0x8e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x26b1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x26b2, .a=0xc1, .x=0xe2, .y=0xc1, .sp=0x8e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x26b1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x26b1, .value=0xdd, .type=IO_READ},
        {.addr=0x26b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0042) {
    const struct CPU_State initial_cpu = {.pc=0xe110, .a=0x6c, .x=0x66, .y=0xe9, .sp=0xd2, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe110, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe111, .a=0xe9, .x=0x66, .y=0xe9, .sp=0xd2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe110, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe110, .value=0xdd, .type=IO_READ},
        {.addr=0xe111, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0043) {
    const struct CPU_State initial_cpu = {.pc=0x4cf8, .a=0x6e, .x=0x68, .y=0xe0, .sp=0x7f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4cf9, .a=0xe0, .x=0x68, .y=0xe0, .sp=0x7f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4cf8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4cf8, .value=0xdd, .type=IO_READ},
        {.addr=0x4cf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0044) {
    const struct CPU_State initial_cpu = {.pc=0xcc82, .a=0xc0, .x=0x0a, .y=0xe1, .sp=0x6c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xcc82, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcc83, .a=0xe1, .x=0x0a, .y=0xe1, .sp=0x6c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcc82, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcc82, .value=0xdd, .type=IO_READ},
        {.addr=0xcc83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0045) {
    const struct CPU_State initial_cpu = {.pc=0x69e5, .a=0x10, .x=0xa5, .y=0xf8, .sp=0x53, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x69e5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x69e6, .a=0xf8, .x=0xa5, .y=0xf8, .sp=0x53, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x69e5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x69e5, .value=0xdd, .type=IO_READ},
        {.addr=0x69e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0046) {
    const struct CPU_State initial_cpu = {.pc=0x0eb7, .a=0x09, .x=0x1c, .y=0x76, .sp=0x1d, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0eb8, .a=0x76, .x=0x1c, .y=0x76, .sp=0x1d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0eb7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0eb7, .value=0xdd, .type=IO_READ},
        {.addr=0x0eb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0047) {
    const struct CPU_State initial_cpu = {.pc=0xe429, .a=0x2f, .x=0x4d, .y=0x09, .sp=0x02, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe429, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe42a, .a=0x09, .x=0x4d, .y=0x09, .sp=0x02, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe429, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe429, .value=0xdd, .type=IO_READ},
        {.addr=0xe42a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0048) {
    const struct CPU_State initial_cpu = {.pc=0xf14c, .a=0x04, .x=0xb3, .y=0x50, .sp=0x61, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf14c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf14d, .a=0x50, .x=0xb3, .y=0x50, .sp=0x61, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf14c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf14c, .value=0xdd, .type=IO_READ},
        {.addr=0xf14d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0049) {
    const struct CPU_State initial_cpu = {.pc=0xc7ca, .a=0xd4, .x=0x79, .y=0x5f, .sp=0x6c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ca, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc7cb, .a=0x5f, .x=0x79, .y=0x5f, .sp=0x6c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc7ca, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc7ca, .value=0xdd, .type=IO_READ},
        {.addr=0xc7cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_004A) {
    const struct CPU_State initial_cpu = {.pc=0xe53e, .a=0xa9, .x=0x55, .y=0xc4, .sp=0x4b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xe53e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe53f, .a=0xc4, .x=0x55, .y=0xc4, .sp=0x4b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe53e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe53e, .value=0xdd, .type=IO_READ},
        {.addr=0xe53f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_004B) {
    const struct CPU_State initial_cpu = {.pc=0x7c6a, .a=0xbd, .x=0x0c, .y=0x6c, .sp=0x5f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7c6b, .a=0x6c, .x=0x0c, .y=0x6c, .sp=0x5f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7c6a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7c6a, .value=0xdd, .type=IO_READ},
        {.addr=0x7c6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_004C) {
    const struct CPU_State initial_cpu = {.pc=0x9388, .a=0xd8, .x=0x47, .y=0x1f, .sp=0xc5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9388, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9389, .a=0x1f, .x=0x47, .y=0x1f, .sp=0xc5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9388, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9388, .value=0xdd, .type=IO_READ},
        {.addr=0x9389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_004D) {
    const struct CPU_State initial_cpu = {.pc=0x0be4, .a=0x9c, .x=0x5a, .y=0x8a, .sp=0x3c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0be4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0be5, .a=0x8a, .x=0x5a, .y=0x8a, .sp=0x3c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0be4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0be4, .value=0xdd, .type=IO_READ},
        {.addr=0x0be5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3996, .a=0x0e, .x=0x72, .y=0xc8, .sp=0xdf, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x3996, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3997, .a=0xc8, .x=0x72, .y=0xc8, .sp=0xdf, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3996, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3996, .value=0xdd, .type=IO_READ},
        {.addr=0x3997, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_004F) {
    const struct CPU_State initial_cpu = {.pc=0x0f94, .a=0x75, .x=0x1c, .y=0x4b, .sp=0xe3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0f94, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0f95, .a=0x4b, .x=0x1c, .y=0x4b, .sp=0xe3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0f94, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0f94, .value=0xdd, .type=IO_READ},
        {.addr=0x0f95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0050) {
    const struct CPU_State initial_cpu = {.pc=0x7a80, .a=0xd6, .x=0x4f, .y=0xfb, .sp=0x2e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7a80, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7a81, .a=0xfb, .x=0x4f, .y=0xfb, .sp=0x2e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7a80, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7a80, .value=0xdd, .type=IO_READ},
        {.addr=0x7a81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0051) {
    const struct CPU_State initial_cpu = {.pc=0x1dc4, .a=0x6c, .x=0xdb, .y=0xdd, .sp=0xbb, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1dc4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1dc5, .a=0xdd, .x=0xdb, .y=0xdd, .sp=0xbb, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1dc4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1dc4, .value=0xdd, .type=IO_READ},
        {.addr=0x1dc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0052) {
    const struct CPU_State initial_cpu = {.pc=0xd705, .a=0x27, .x=0xc6, .y=0xfb, .sp=0x90, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xd705, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd706, .a=0xfb, .x=0xc6, .y=0xfb, .sp=0x90, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd705, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd705, .value=0xdd, .type=IO_READ},
        {.addr=0xd706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0053) {
    const struct CPU_State initial_cpu = {.pc=0xf8e9, .a=0xa0, .x=0xd5, .y=0x88, .sp=0xd1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf8ea, .a=0x88, .x=0xd5, .y=0x88, .sp=0xd1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf8e9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf8e9, .value=0xdd, .type=IO_READ},
        {.addr=0xf8ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0054) {
    const struct CPU_State initial_cpu = {.pc=0x6c41, .a=0x90, .x=0xa1, .y=0x1c, .sp=0xc5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6c41, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6c42, .a=0x1c, .x=0xa1, .y=0x1c, .sp=0xc5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6c41, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6c41, .value=0xdd, .type=IO_READ},
        {.addr=0x6c42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0055) {
    const struct CPU_State initial_cpu = {.pc=0x5c63, .a=0x18, .x=0xc5, .y=0x85, .sp=0xa6, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5c63, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0x85, .x=0xc5, .y=0x85, .sp=0xa6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5c63, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5c63, .value=0xdd, .type=IO_READ},
        {.addr=0x5c64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0056) {
    const struct CPU_State initial_cpu = {.pc=0x5cfc, .a=0x17, .x=0xec, .y=0x39, .sp=0x1f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5cfc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5cfd, .a=0x39, .x=0xec, .y=0x39, .sp=0x1f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5cfc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5cfc, .value=0xdd, .type=IO_READ},
        {.addr=0x5cfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0057) {
    const struct CPU_State initial_cpu = {.pc=0x12fb, .a=0xe6, .x=0x76, .y=0xc8, .sp=0x7f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x12fb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x12fc, .a=0xc8, .x=0x76, .y=0xc8, .sp=0x7f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x12fb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x12fb, .value=0xdd, .type=IO_READ},
        {.addr=0x12fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0058) {
    const struct CPU_State initial_cpu = {.pc=0xa197, .a=0xc4, .x=0x7f, .y=0xc6, .sp=0xae, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa197, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa198, .a=0xc6, .x=0x7f, .y=0xc6, .sp=0xae, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa197, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa197, .value=0xdd, .type=IO_READ},
        {.addr=0xa198, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0059) {
    const struct CPU_State initial_cpu = {.pc=0xcaab, .a=0x92, .x=0xc0, .y=0x30, .sp=0xb3, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xcaab, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcaac, .a=0x30, .x=0xc0, .y=0x30, .sp=0xb3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcaab, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcaab, .value=0xdd, .type=IO_READ},
        {.addr=0xcaac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_005A) {
    const struct CPU_State initial_cpu = {.pc=0x4329, .a=0xbf, .x=0xac, .y=0xb7, .sp=0xd6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4329, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x432a, .a=0xb7, .x=0xac, .y=0xb7, .sp=0xd6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4329, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4329, .value=0xdd, .type=IO_READ},
        {.addr=0x432a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_005B) {
    const struct CPU_State initial_cpu = {.pc=0xc9b9, .a=0xf5, .x=0x56, .y=0xfb, .sp=0x86, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc9ba, .a=0xfb, .x=0x56, .y=0xfb, .sp=0x86, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc9b9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc9b9, .value=0xdd, .type=IO_READ},
        {.addr=0xc9ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_005C) {
    const struct CPU_State initial_cpu = {.pc=0xa86f, .a=0xff, .x=0x3a, .y=0x4c, .sp=0x6a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa86f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa870, .a=0x4c, .x=0x3a, .y=0x4c, .sp=0x6a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa86f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa86f, .value=0xdd, .type=IO_READ},
        {.addr=0xa870, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_005D) {
    const struct CPU_State initial_cpu = {.pc=0x46e5, .a=0x64, .x=0x8e, .y=0x3a, .sp=0x05, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x46e5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x46e6, .a=0x3a, .x=0x8e, .y=0x3a, .sp=0x05, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x46e5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x46e5, .value=0xdd, .type=IO_READ},
        {.addr=0x46e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_005E) {
    const struct CPU_State initial_cpu = {.pc=0xa2c9, .a=0x4c, .x=0x9b, .y=0x2c, .sp=0xe1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa2ca, .a=0x2c, .x=0x9b, .y=0x2c, .sp=0xe1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa2c9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa2c9, .value=0xdd, .type=IO_READ},
        {.addr=0xa2ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_005F) {
    const struct CPU_State initial_cpu = {.pc=0x9d3f, .a=0xe8, .x=0xe0, .y=0xc0, .sp=0x86, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9d3f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9d40, .a=0xc0, .x=0xe0, .y=0xc0, .sp=0x86, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9d3f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9d3f, .value=0xdd, .type=IO_READ},
        {.addr=0x9d40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0060) {
    const struct CPU_State initial_cpu = {.pc=0xa090, .a=0x90, .x=0x54, .y=0xd7, .sp=0x88, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa090, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa091, .a=0xd7, .x=0x54, .y=0xd7, .sp=0x88, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa090, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa090, .value=0xdd, .type=IO_READ},
        {.addr=0xa091, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0061) {
    const struct CPU_State initial_cpu = {.pc=0xeb5d, .a=0xfc, .x=0x22, .y=0x71, .sp=0xa4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xeb5d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeb5e, .a=0x71, .x=0x22, .y=0x71, .sp=0xa4, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xeb5d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeb5d, .value=0xdd, .type=IO_READ},
        {.addr=0xeb5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0062) {
    const struct CPU_State initial_cpu = {.pc=0xa35b, .a=0x44, .x=0x17, .y=0xb4, .sp=0x46, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa35b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa35c, .a=0xb4, .x=0x17, .y=0xb4, .sp=0x46, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa35b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa35b, .value=0xdd, .type=IO_READ},
        {.addr=0xa35c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0063) {
    const struct CPU_State initial_cpu = {.pc=0x479c, .a=0x61, .x=0xb5, .y=0xf1, .sp=0x71, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x479c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x479d, .a=0xf1, .x=0xb5, .y=0xf1, .sp=0x71, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x479c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x479c, .value=0xdd, .type=IO_READ},
        {.addr=0x479d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0064) {
    const struct CPU_State initial_cpu = {.pc=0xb6ac, .a=0x71, .x=0x2a, .y=0x92, .sp=0xb5, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ac, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb6ad, .a=0x92, .x=0x2a, .y=0x92, .sp=0xb5, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb6ac, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb6ac, .value=0xdd, .type=IO_READ},
        {.addr=0xb6ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0065) {
    const struct CPU_State initial_cpu = {.pc=0x5c93, .a=0xf7, .x=0xe1, .y=0x21, .sp=0x5d, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5c93, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5c94, .a=0x21, .x=0xe1, .y=0x21, .sp=0x5d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5c93, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5c93, .value=0xdd, .type=IO_READ},
        {.addr=0x5c94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0066) {
    const struct CPU_State initial_cpu = {.pc=0x595f, .a=0xdb, .x=0x39, .y=0x3c, .sp=0x13, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x595f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5960, .a=0x3c, .x=0x39, .y=0x3c, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x595f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x595f, .value=0xdd, .type=IO_READ},
        {.addr=0x5960, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0067) {
    const struct CPU_State initial_cpu = {.pc=0x9537, .a=0x32, .x=0xfb, .y=0x40, .sp=0x24, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9537, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9538, .a=0x40, .x=0xfb, .y=0x40, .sp=0x24, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9537, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9537, .value=0xdd, .type=IO_READ},
        {.addr=0x9538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0068) {
    const struct CPU_State initial_cpu = {.pc=0x95c6, .a=0x6b, .x=0xae, .y=0x0d, .sp=0x44, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x95c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x95c7, .a=0x0d, .x=0xae, .y=0x0d, .sp=0x44, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x95c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x95c6, .value=0xdd, .type=IO_READ},
        {.addr=0x95c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0069) {
    const struct CPU_State initial_cpu = {.pc=0x5d09, .a=0x41, .x=0x84, .y=0xbf, .sp=0x02, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x5d09, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5d0a, .a=0xbf, .x=0x84, .y=0xbf, .sp=0x02, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5d09, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5d09, .value=0xdd, .type=IO_READ},
        {.addr=0x5d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_006A) {
    const struct CPU_State initial_cpu = {.pc=0x5afa, .a=0x10, .x=0x9d, .y=0xfd, .sp=0xa8, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5afa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5afb, .a=0xfd, .x=0x9d, .y=0xfd, .sp=0xa8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x5afa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5afa, .value=0xdd, .type=IO_READ},
        {.addr=0x5afb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_006B) {
    const struct CPU_State initial_cpu = {.pc=0x11e7, .a=0xc1, .x=0xea, .y=0x0c, .sp=0x70, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x11e7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x11e8, .a=0x0c, .x=0xea, .y=0x0c, .sp=0x70, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x11e7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x11e7, .value=0xdd, .type=IO_READ},
        {.addr=0x11e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_006C) {
    const struct CPU_State initial_cpu = {.pc=0xadde, .a=0x22, .x=0x42, .y=0xef, .sp=0x32, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xadde, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaddf, .a=0xef, .x=0x42, .y=0xef, .sp=0x32, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xadde, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xadde, .value=0xdd, .type=IO_READ},
        {.addr=0xaddf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0101, .a=0xf2, .x=0x00, .y=0xa6, .sp=0x9d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0102, .a=0xa6, .x=0x00, .y=0xa6, .sp=0x9d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0101, .value=0xdd, .type=IO_READ},
        {.addr=0x0102, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_006E) {
    const struct CPU_State initial_cpu = {.pc=0x4615, .a=0x36, .x=0xff, .y=0xe4, .sp=0x4b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4615, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4616, .a=0xe4, .x=0xff, .y=0xe4, .sp=0x4b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4615, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4615, .value=0xdd, .type=IO_READ},
        {.addr=0x4616, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_006F) {
    const struct CPU_State initial_cpu = {.pc=0xeac0, .a=0x0f, .x=0xa8, .y=0x4b, .sp=0xaf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xeac0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeac1, .a=0x4b, .x=0xa8, .y=0x4b, .sp=0xaf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xeac0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeac0, .value=0xdd, .type=IO_READ},
        {.addr=0xeac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0070) {
    const struct CPU_State initial_cpu = {.pc=0x2468, .a=0x62, .x=0x77, .y=0x23, .sp=0x0e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2468, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2469, .a=0x23, .x=0x77, .y=0x23, .sp=0x0e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2468, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2468, .value=0xdd, .type=IO_READ},
        {.addr=0x2469, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0071) {
    const struct CPU_State initial_cpu = {.pc=0x0eb4, .a=0x2f, .x=0x73, .y=0x40, .sp=0x1f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0eb5, .a=0x40, .x=0x73, .y=0x40, .sp=0x1f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0eb4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0eb4, .value=0xdd, .type=IO_READ},
        {.addr=0x0eb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0072) {
    const struct CPU_State initial_cpu = {.pc=0x1451, .a=0xaf, .x=0xb9, .y=0xa2, .sp=0x94, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1451, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1452, .a=0xa2, .x=0xb9, .y=0xa2, .sp=0x94, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1451, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1451, .value=0xdd, .type=IO_READ},
        {.addr=0x1452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0073) {
    const struct CPU_State initial_cpu = {.pc=0xeaa7, .a=0xee, .x=0xbf, .y=0x79, .sp=0xc1, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeaa8, .a=0x79, .x=0xbf, .y=0x79, .sp=0xc1, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xeaa7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeaa7, .value=0xdd, .type=IO_READ},
        {.addr=0xeaa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0074) {
    const struct CPU_State initial_cpu = {.pc=0x19f9, .a=0x41, .x=0xa3, .y=0xa8, .sp=0x0e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x19f9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x19fa, .a=0xa8, .x=0xa3, .y=0xa8, .sp=0x0e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x19f9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x19f9, .value=0xdd, .type=IO_READ},
        {.addr=0x19fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0075) {
    const struct CPU_State initial_cpu = {.pc=0xd8fc, .a=0x27, .x=0x51, .y=0x95, .sp=0x08, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd8fc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd8fd, .a=0x95, .x=0x51, .y=0x95, .sp=0x08, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd8fc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd8fc, .value=0xdd, .type=IO_READ},
        {.addr=0xd8fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0076) {
    const struct CPU_State initial_cpu = {.pc=0x27a4, .a=0x03, .x=0x4a, .y=0xf5, .sp=0xe3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x27a4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x27a5, .a=0xf5, .x=0x4a, .y=0xf5, .sp=0xe3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x27a4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x27a4, .value=0xdd, .type=IO_READ},
        {.addr=0x27a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0077) {
    const struct CPU_State initial_cpu = {.pc=0xcd68, .a=0x37, .x=0x9f, .y=0x2b, .sp=0x07, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xcd68, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcd69, .a=0x2b, .x=0x9f, .y=0x2b, .sp=0x07, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcd68, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcd68, .value=0xdd, .type=IO_READ},
        {.addr=0xcd69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0078) {
    const struct CPU_State initial_cpu = {.pc=0x5deb, .a=0x15, .x=0xe4, .y=0x38, .sp=0x07, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5deb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5dec, .a=0x38, .x=0xe4, .y=0x38, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5deb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5deb, .value=0xdd, .type=IO_READ},
        {.addr=0x5dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf6aa, .a=0xa5, .x=0x22, .y=0x41, .sp=0xf4, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf6aa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf6ab, .a=0x41, .x=0x22, .y=0x41, .sp=0xf4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf6aa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf6aa, .value=0xdd, .type=IO_READ},
        {.addr=0xf6ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_007A) {
    const struct CPU_State initial_cpu = {.pc=0x6544, .a=0x73, .x=0xd3, .y=0x1b, .sp=0xf0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6544, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6545, .a=0x1b, .x=0xd3, .y=0x1b, .sp=0xf0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6544, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6544, .value=0xdd, .type=IO_READ},
        {.addr=0x6545, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_007B) {
    const struct CPU_State initial_cpu = {.pc=0x5344, .a=0x60, .x=0x83, .y=0xbd, .sp=0x4e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x5344, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5345, .a=0xbd, .x=0x83, .y=0xbd, .sp=0x4e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5344, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5344, .value=0xdd, .type=IO_READ},
        {.addr=0x5345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_007C) {
    const struct CPU_State initial_cpu = {.pc=0x9237, .a=0x03, .x=0xb4, .y=0xde, .sp=0x2c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9237, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9238, .a=0xde, .x=0xb4, .y=0xde, .sp=0x2c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9237, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9237, .value=0xdd, .type=IO_READ},
        {.addr=0x9238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_007D) {
    const struct CPU_State initial_cpu = {.pc=0x9f4c, .a=0x7d, .x=0xb9, .y=0xc8, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9f4c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9f4d, .a=0xc8, .x=0xb9, .y=0xc8, .sp=0xf8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9f4c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9f4c, .value=0xdd, .type=IO_READ},
        {.addr=0x9f4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_007E) {
    const struct CPU_State initial_cpu = {.pc=0xdc0d, .a=0x3b, .x=0xfb, .y=0xd9, .sp=0x55, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdc0e, .a=0xd9, .x=0xfb, .y=0xd9, .sp=0x55, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xdc0d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdc0d, .value=0xdd, .type=IO_READ},
        {.addr=0xdc0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4ac5, .a=0xc3, .x=0xa0, .y=0x46, .sp=0x60, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4ac5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4ac6, .a=0x46, .x=0xa0, .y=0x46, .sp=0x60, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4ac5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4ac5, .value=0xdd, .type=IO_READ},
        {.addr=0x4ac6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0080) {
    const struct CPU_State initial_cpu = {.pc=0x7eab, .a=0x30, .x=0x2a, .y=0xeb, .sp=0x7a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x7eab, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7eac, .a=0xeb, .x=0x2a, .y=0xeb, .sp=0x7a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7eab, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7eab, .value=0xdd, .type=IO_READ},
        {.addr=0x7eac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0081) {
    const struct CPU_State initial_cpu = {.pc=0x2af6, .a=0xbe, .x=0xe8, .y=0x6c, .sp=0x40, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2af6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2af7, .a=0x6c, .x=0xe8, .y=0x6c, .sp=0x40, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2af6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2af6, .value=0xdd, .type=IO_READ},
        {.addr=0x2af7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0082) {
    const struct CPU_State initial_cpu = {.pc=0xa8d1, .a=0xd0, .x=0xd4, .y=0x0d, .sp=0xe3, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa8d2, .a=0x0d, .x=0xd4, .y=0x0d, .sp=0xe3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa8d1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa8d1, .value=0xdd, .type=IO_READ},
        {.addr=0xa8d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0083) {
    const struct CPU_State initial_cpu = {.pc=0x1a3e, .a=0x20, .x=0x80, .y=0xb2, .sp=0x1e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1a3e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1a3f, .a=0xb2, .x=0x80, .y=0xb2, .sp=0x1e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x1a3e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1a3e, .value=0xdd, .type=IO_READ},
        {.addr=0x1a3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0084) {
    const struct CPU_State initial_cpu = {.pc=0xbe56, .a=0xc3, .x=0x68, .y=0x76, .sp=0xc9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xbe56, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbe57, .a=0x76, .x=0x68, .y=0x76, .sp=0xc9, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbe56, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbe56, .value=0xdd, .type=IO_READ},
        {.addr=0xbe57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0085) {
    const struct CPU_State initial_cpu = {.pc=0xb53b, .a=0x22, .x=0x28, .y=0x87, .sp=0x58, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb53b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb53c, .a=0x87, .x=0x28, .y=0x87, .sp=0x58, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb53b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb53b, .value=0xdd, .type=IO_READ},
        {.addr=0xb53c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0086) {
    const struct CPU_State initial_cpu = {.pc=0x13f9, .a=0x30, .x=0x5e, .y=0x33, .sp=0x6a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x13f9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x13fa, .a=0x33, .x=0x5e, .y=0x33, .sp=0x6a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x13f9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x13f9, .value=0xdd, .type=IO_READ},
        {.addr=0x13fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0087) {
    const struct CPU_State initial_cpu = {.pc=0x00a0, .a=0x39, .x=0x1a, .y=0x50, .sp=0xe3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x00a1, .a=0x50, .x=0x1a, .y=0x50, .sp=0xe3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x00a0, .value=0xdd, .type=IO_READ},
        {.addr=0x00a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0088) {
    const struct CPU_State initial_cpu = {.pc=0xccab, .a=0xc5, .x=0xaf, .y=0x5c, .sp=0xc2, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xccab, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xccac, .a=0x5c, .x=0xaf, .y=0x5c, .sp=0xc2, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xccab, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xccab, .value=0xdd, .type=IO_READ},
        {.addr=0xccac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0089) {
    const struct CPU_State initial_cpu = {.pc=0xb803, .a=0x8f, .x=0xab, .y=0x55, .sp=0xe5, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xb803, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb804, .a=0x55, .x=0xab, .y=0x55, .sp=0xe5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb803, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb803, .value=0xdd, .type=IO_READ},
        {.addr=0xb804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_008A) {
    const struct CPU_State initial_cpu = {.pc=0x810d, .a=0x00, .x=0x97, .y=0x97, .sp=0x7a, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x810d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x810e, .a=0x97, .x=0x97, .y=0x97, .sp=0x7a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x810d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x810d, .value=0xdd, .type=IO_READ},
        {.addr=0x810e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_008B) {
    const struct CPU_State initial_cpu = {.pc=0x0d41, .a=0x81, .x=0xb2, .y=0xfd, .sp=0xa2, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0d41, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d42, .a=0xfd, .x=0xb2, .y=0xfd, .sp=0xa2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0d41, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d41, .value=0xdd, .type=IO_READ},
        {.addr=0x0d42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_008C) {
    const struct CPU_State initial_cpu = {.pc=0xa3a8, .a=0x2f, .x=0x69, .y=0xea, .sp=0x1a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xa3a8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa3a9, .a=0xea, .x=0x69, .y=0xea, .sp=0x1a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa3a8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa3a8, .value=0xdd, .type=IO_READ},
        {.addr=0xa3a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_008D) {
    const struct CPU_State initial_cpu = {.pc=0xca77, .a=0x6f, .x=0xde, .y=0x44, .sp=0x9f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xca77, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xca78, .a=0x44, .x=0xde, .y=0x44, .sp=0x9f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xca77, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xca77, .value=0xdd, .type=IO_READ},
        {.addr=0xca78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_008E) {
    const struct CPU_State initial_cpu = {.pc=0x43ed, .a=0x15, .x=0xf8, .y=0xe7, .sp=0x2c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x43ed, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x43ee, .a=0xe7, .x=0xf8, .y=0xe7, .sp=0x2c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x43ed, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x43ed, .value=0xdd, .type=IO_READ},
        {.addr=0x43ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_008F) {
    const struct CPU_State initial_cpu = {.pc=0x10de, .a=0xef, .x=0x38, .y=0x6e, .sp=0xc5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x10de, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x10df, .a=0x6e, .x=0x38, .y=0x6e, .sp=0xc5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x10de, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x10de, .value=0xdd, .type=IO_READ},
        {.addr=0x10df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0090) {
    const struct CPU_State initial_cpu = {.pc=0x6593, .a=0x2c, .x=0xbd, .y=0x75, .sp=0xac, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6593, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6594, .a=0x75, .x=0xbd, .y=0x75, .sp=0xac, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6593, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6593, .value=0xdd, .type=IO_READ},
        {.addr=0x6594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0091) {
    const struct CPU_State initial_cpu = {.pc=0x22c9, .a=0xc5, .x=0x8e, .y=0x28, .sp=0x70, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x22c9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x22ca, .a=0x28, .x=0x8e, .y=0x28, .sp=0x70, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x22c9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x22c9, .value=0xdd, .type=IO_READ},
        {.addr=0x22ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0092) {
    const struct CPU_State initial_cpu = {.pc=0x1bc1, .a=0xcd, .x=0x97, .y=0x33, .sp=0x6e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1bc2, .a=0x33, .x=0x97, .y=0x33, .sp=0x6e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1bc1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1bc1, .value=0xdd, .type=IO_READ},
        {.addr=0x1bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0093) {
    const struct CPU_State initial_cpu = {.pc=0x3c27, .a=0x3d, .x=0xaf, .y=0x0a, .sp=0xa4, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x3c27, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3c28, .a=0x0a, .x=0xaf, .y=0x0a, .sp=0xa4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3c27, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3c27, .value=0xdd, .type=IO_READ},
        {.addr=0x3c28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0094) {
    const struct CPU_State initial_cpu = {.pc=0x0d77, .a=0x79, .x=0x0f, .y=0x05, .sp=0xd9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0d77, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d78, .a=0x05, .x=0x0f, .y=0x05, .sp=0xd9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0d77, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d77, .value=0xdd, .type=IO_READ},
        {.addr=0x0d78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0095) {
    const struct CPU_State initial_cpu = {.pc=0x2bd1, .a=0x84, .x=0xdb, .y=0x0a, .sp=0x98, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2bd2, .a=0x0a, .x=0xdb, .y=0x0a, .sp=0x98, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2bd1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2bd1, .value=0xdd, .type=IO_READ},
        {.addr=0x2bd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0096) {
    const struct CPU_State initial_cpu = {.pc=0x656e, .a=0x00, .x=0x66, .y=0x0b, .sp=0x8d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x656e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x656f, .a=0x0b, .x=0x66, .y=0x0b, .sp=0x8d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x656e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x656e, .value=0xdd, .type=IO_READ},
        {.addr=0x656f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0097) {
    const struct CPU_State initial_cpu = {.pc=0x8756, .a=0xc3, .x=0x03, .y=0x30, .sp=0xe4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8756, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8757, .a=0x30, .x=0x03, .y=0x30, .sp=0xe4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8756, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8756, .value=0xdd, .type=IO_READ},
        {.addr=0x8757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0098) {
    const struct CPU_State initial_cpu = {.pc=0xd388, .a=0x71, .x=0x2f, .y=0x8d, .sp=0xfa, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd388, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd389, .a=0x8d, .x=0x2f, .y=0x8d, .sp=0xfa, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd388, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd388, .value=0xdd, .type=IO_READ},
        {.addr=0xd389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0099) {
    const struct CPU_State initial_cpu = {.pc=0xe908, .a=0xca, .x=0x1d, .y=0x1c, .sp=0x84, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe908, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe909, .a=0x1c, .x=0x1d, .y=0x1c, .sp=0x84, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe908, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe908, .value=0xdd, .type=IO_READ},
        {.addr=0xe909, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_009A) {
    const struct CPU_State initial_cpu = {.pc=0x8d9d, .a=0x6a, .x=0x84, .y=0x37, .sp=0xcd, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8d9d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8d9e, .a=0x37, .x=0x84, .y=0x37, .sp=0xcd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8d9d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8d9d, .value=0xdd, .type=IO_READ},
        {.addr=0x8d9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_009B) {
    const struct CPU_State initial_cpu = {.pc=0xf2a8, .a=0x7f, .x=0x10, .y=0x3b, .sp=0xbf, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xf2a8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf2a9, .a=0x3b, .x=0x10, .y=0x3b, .sp=0xbf, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf2a8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf2a8, .value=0xdd, .type=IO_READ},
        {.addr=0xf2a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_009C) {
    const struct CPU_State initial_cpu = {.pc=0x40ce, .a=0xf5, .x=0x45, .y=0xd9, .sp=0x5d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x40ce, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x40cf, .a=0xd9, .x=0x45, .y=0xd9, .sp=0x5d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x40ce, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x40ce, .value=0xdd, .type=IO_READ},
        {.addr=0x40cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_009D) {
    const struct CPU_State initial_cpu = {.pc=0x96ef, .a=0xa2, .x=0x9e, .y=0x5b, .sp=0xd0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x96ef, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x96f0, .a=0x5b, .x=0x9e, .y=0x5b, .sp=0xd0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x96ef, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x96ef, .value=0xdd, .type=IO_READ},
        {.addr=0x96f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_009E) {
    const struct CPU_State initial_cpu = {.pc=0xc74c, .a=0xf5, .x=0x79, .y=0x7e, .sp=0x95, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc74c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc74d, .a=0x7e, .x=0x79, .y=0x7e, .sp=0x95, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc74c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc74c, .value=0xdd, .type=IO_READ},
        {.addr=0xc74d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_009F) {
    const struct CPU_State initial_cpu = {.pc=0x99be, .a=0x3a, .x=0x48, .y=0xf9, .sp=0xa3, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x99be, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x99bf, .a=0xf9, .x=0x48, .y=0xf9, .sp=0xa3, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x99be, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x99be, .value=0xdd, .type=IO_READ},
        {.addr=0x99bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x5c21, .a=0x4d, .x=0x08, .y=0x80, .sp=0x99, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x5c21, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5c22, .a=0x80, .x=0x08, .y=0x80, .sp=0x99, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5c21, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5c21, .value=0xdd, .type=IO_READ},
        {.addr=0x5c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x3847, .a=0xed, .x=0x70, .y=0xf1, .sp=0x12, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x3847, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3848, .a=0xf1, .x=0x70, .y=0xf1, .sp=0x12, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3847, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3847, .value=0xdd, .type=IO_READ},
        {.addr=0x3848, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xca5b, .a=0xff, .x=0x7e, .y=0x88, .sp=0x14, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xca5b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xca5c, .a=0x88, .x=0x7e, .y=0x88, .sp=0x14, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xca5b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xca5b, .value=0xdd, .type=IO_READ},
        {.addr=0xca5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xa10b, .a=0x53, .x=0x4f, .y=0x20, .sp=0x13, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xa10b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa10c, .a=0x20, .x=0x4f, .y=0x20, .sp=0x13, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa10b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa10b, .value=0xdd, .type=IO_READ},
        {.addr=0xa10c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xa1f5, .a=0xc3, .x=0x1b, .y=0x11, .sp=0x62, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa1f6, .a=0x11, .x=0x1b, .y=0x11, .sp=0x62, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa1f5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa1f5, .value=0xdd, .type=IO_READ},
        {.addr=0xa1f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x0c41, .a=0x09, .x=0x0d, .y=0xaa, .sp=0xcf, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0c41, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0c42, .a=0xaa, .x=0x0d, .y=0xaa, .sp=0xcf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0c41, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0c41, .value=0xdd, .type=IO_READ},
        {.addr=0x0c42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x471d, .a=0x2e, .x=0x94, .y=0xd3, .sp=0xb4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x471d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x471e, .a=0xd3, .x=0x94, .y=0xd3, .sp=0xb4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x471d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x471d, .value=0xdd, .type=IO_READ},
        {.addr=0x471e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x78b1, .a=0x92, .x=0x64, .y=0xdf, .sp=0x35, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x78b1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x78b2, .a=0xdf, .x=0x64, .y=0xdf, .sp=0x35, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x78b1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x78b1, .value=0xdd, .type=IO_READ},
        {.addr=0x78b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x27e2, .a=0x60, .x=0xc7, .y=0x40, .sp=0x6b, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x27e2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x27e3, .a=0x40, .x=0xc7, .y=0x40, .sp=0x6b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x27e2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x27e2, .value=0xdd, .type=IO_READ},
        {.addr=0x27e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x5196, .a=0x90, .x=0x14, .y=0x18, .sp=0x2d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5196, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5197, .a=0x18, .x=0x14, .y=0x18, .sp=0x2d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5196, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5196, .value=0xdd, .type=IO_READ},
        {.addr=0x5197, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x8cd0, .a=0x8e, .x=0x70, .y=0xe4, .sp=0x2c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8cd1, .a=0xe4, .x=0x70, .y=0xe4, .sp=0x2c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8cd0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8cd0, .value=0xdd, .type=IO_READ},
        {.addr=0x8cd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x11fe, .a=0x62, .x=0x4b, .y=0x3f, .sp=0x65, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x11fe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x11ff, .a=0x3f, .x=0x4b, .y=0x3f, .sp=0x65, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x11fe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x11fe, .value=0xdd, .type=IO_READ},
        {.addr=0x11ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xf44e, .a=0x7f, .x=0xc6, .y=0x86, .sp=0x86, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xf44e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf44f, .a=0x86, .x=0xc6, .y=0x86, .sp=0x86, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf44e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf44e, .value=0xdd, .type=IO_READ},
        {.addr=0xf44f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x051e, .a=0xce, .x=0xdd, .y=0x3e, .sp=0xe9, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x051e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x051f, .a=0x3e, .x=0xdd, .y=0x3e, .sp=0xe9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x051e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x051e, .value=0xdd, .type=IO_READ},
        {.addr=0x051f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x9a0e, .a=0x1c, .x=0x2b, .y=0x3c, .sp=0xfb, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9a0e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9a0f, .a=0x3c, .x=0x2b, .y=0x3c, .sp=0xfb, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9a0e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9a0e, .value=0xdd, .type=IO_READ},
        {.addr=0x9a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xd859, .a=0x00, .x=0xc7, .y=0x8f, .sp=0x04, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xd859, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd85a, .a=0x8f, .x=0xc7, .y=0x8f, .sp=0x04, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd859, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd859, .value=0xdd, .type=IO_READ},
        {.addr=0xd85a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xe4db, .a=0xa5, .x=0x57, .y=0xf7, .sp=0xd4, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe4db, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe4dc, .a=0xf7, .x=0x57, .y=0xf7, .sp=0xd4, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe4db, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe4db, .value=0xdd, .type=IO_READ},
        {.addr=0xe4dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xca41, .a=0xb1, .x=0x37, .y=0x8d, .sp=0x74, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xca41, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xca42, .a=0x8d, .x=0x37, .y=0x8d, .sp=0x74, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xca41, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xca41, .value=0xdd, .type=IO_READ},
        {.addr=0xca42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x8416, .a=0x17, .x=0x27, .y=0x43, .sp=0x77, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x8416, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8417, .a=0x43, .x=0x27, .y=0x43, .sp=0x77, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8416, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8416, .value=0xdd, .type=IO_READ},
        {.addr=0x8417, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x5a06, .a=0x96, .x=0xb1, .y=0x9b, .sp=0x22, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5a06, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5a07, .a=0x9b, .x=0xb1, .y=0x9b, .sp=0x22, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5a06, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5a06, .value=0xdd, .type=IO_READ},
        {.addr=0x5a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xff78, .a=0x28, .x=0x84, .y=0x26, .sp=0x0f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xff78, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xff79, .a=0x26, .x=0x84, .y=0x26, .sp=0x0f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xff78, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xff78, .value=0xdd, .type=IO_READ},
        {.addr=0xff79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x5d98, .a=0x9a, .x=0x7f, .y=0x0f, .sp=0xe0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x5d98, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5d99, .a=0x0f, .x=0x7f, .y=0x0f, .sp=0xe0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5d98, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5d98, .value=0xdd, .type=IO_READ},
        {.addr=0x5d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xf96d, .a=0x6d, .x=0x72, .y=0xd9, .sp=0x6b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf96d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf96e, .a=0xd9, .x=0x72, .y=0xd9, .sp=0x6b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf96d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf96d, .value=0xdd, .type=IO_READ},
        {.addr=0xf96e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9ac6, .a=0x7c, .x=0xbe, .y=0xd2, .sp=0x12, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9ac7, .a=0xd2, .x=0xbe, .y=0xd2, .sp=0x12, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9ac6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9ac6, .value=0xdd, .type=IO_READ},
        {.addr=0x9ac7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xde5d, .a=0x7a, .x=0xb1, .y=0x69, .sp=0x4b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xde5d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xde5e, .a=0x69, .x=0xb1, .y=0x69, .sp=0x4b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xde5d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xde5d, .value=0xdd, .type=IO_READ},
        {.addr=0xde5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xa742, .a=0xac, .x=0x65, .y=0x87, .sp=0xaa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xa742, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa743, .a=0x87, .x=0x65, .y=0x87, .sp=0xaa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa742, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa742, .value=0xdd, .type=IO_READ},
        {.addr=0xa743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x4ccd, .a=0x77, .x=0x74, .y=0xc8, .sp=0x4f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x4ccd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4cce, .a=0xc8, .x=0x74, .y=0xc8, .sp=0x4f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4ccd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4ccd, .value=0xdd, .type=IO_READ},
        {.addr=0x4cce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x05e1, .a=0xc0, .x=0x10, .y=0xc3, .sp=0x43, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x05e1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x05e2, .a=0xc3, .x=0x10, .y=0xc3, .sp=0x43, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x05e1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x05e1, .value=0xdd, .type=IO_READ},
        {.addr=0x05e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x469b, .a=0x42, .x=0x56, .y=0xd8, .sp=0x2c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x469b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x469c, .a=0xd8, .x=0x56, .y=0xd8, .sp=0x2c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x469b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x469b, .value=0xdd, .type=IO_READ},
        {.addr=0x469c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x0663, .a=0xc6, .x=0xab, .y=0x77, .sp=0x24, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0663, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0664, .a=0x77, .x=0xab, .y=0x77, .sp=0x24, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0663, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0663, .value=0xdd, .type=IO_READ},
        {.addr=0x0664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xb33c, .a=0x47, .x=0xfc, .y=0x76, .sp=0x70, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xb33c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb33d, .a=0x76, .x=0xfc, .y=0x76, .sp=0x70, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb33c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb33c, .value=0xdd, .type=IO_READ},
        {.addr=0xb33d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xb00d, .a=0xbf, .x=0x90, .y=0xc7, .sp=0xfd, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb00d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb00e, .a=0xc7, .x=0x90, .y=0xc7, .sp=0xfd, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb00d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb00d, .value=0xdd, .type=IO_READ},
        {.addr=0xb00e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x791b, .a=0xfb, .x=0x3a, .y=0x78, .sp=0xde, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x791b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x791c, .a=0x78, .x=0x3a, .y=0x78, .sp=0xde, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x791b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x791b, .value=0xdd, .type=IO_READ},
        {.addr=0x791c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xaaaf, .a=0x75, .x=0xf1, .y=0xf6, .sp=0x38, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xaaaf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaab0, .a=0xf6, .x=0xf1, .y=0xf6, .sp=0x38, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xaaaf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaaaf, .value=0xdd, .type=IO_READ},
        {.addr=0xaab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x625a, .a=0x79, .x=0xa0, .y=0xf6, .sp=0xe6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x625a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x625b, .a=0xf6, .x=0xa0, .y=0xf6, .sp=0xe6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x625a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x625a, .value=0xdd, .type=IO_READ},
        {.addr=0x625b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x3bcd, .a=0xde, .x=0x8b, .y=0xe8, .sp=0xd8, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x3bcd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3bce, .a=0xe8, .x=0x8b, .y=0xe8, .sp=0xd8, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3bcd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3bcd, .value=0xdd, .type=IO_READ},
        {.addr=0x3bce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xaeb0, .a=0x26, .x=0xbe, .y=0x54, .sp=0xfe, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaeb1, .a=0x54, .x=0xbe, .y=0x54, .sp=0xfe, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xaeb0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaeb0, .value=0xdd, .type=IO_READ},
        {.addr=0xaeb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x86cf, .a=0x36, .x=0x46, .y=0x39, .sp=0xd4, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x86cf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x86d0, .a=0x39, .x=0x46, .y=0x39, .sp=0xd4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x86cf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x86cf, .value=0xdd, .type=IO_READ},
        {.addr=0x86d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x565d, .a=0xd5, .x=0x2d, .y=0xaa, .sp=0x53, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x565d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x565e, .a=0xaa, .x=0x2d, .y=0xaa, .sp=0x53, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x565d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x565d, .value=0xdd, .type=IO_READ},
        {.addr=0x565e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x35a1, .a=0xb1, .x=0xdc, .y=0x9b, .sp=0xfb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x35a1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35a2, .a=0x9b, .x=0xdc, .y=0x9b, .sp=0xfb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x35a1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35a1, .value=0xdd, .type=IO_READ},
        {.addr=0x35a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x62eb, .a=0x9e, .x=0x07, .y=0xab, .sp=0x21, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x62eb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x62ec, .a=0xab, .x=0x07, .y=0xab, .sp=0x21, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x62eb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x62eb, .value=0xdd, .type=IO_READ},
        {.addr=0x62ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x7f97, .a=0xf1, .x=0x1c, .y=0x70, .sp=0x57, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7f97, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7f98, .a=0x70, .x=0x1c, .y=0x70, .sp=0x57, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7f97, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7f97, .value=0xdd, .type=IO_READ},
        {.addr=0x7f98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x7536, .a=0xff, .x=0x9f, .y=0x03, .sp=0xbf, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7536, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7537, .a=0x03, .x=0x9f, .y=0x03, .sp=0xbf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7536, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7536, .value=0xdd, .type=IO_READ},
        {.addr=0x7537, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x3d9e, .a=0xdc, .x=0xf5, .y=0x37, .sp=0x70, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3d9e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3d9f, .a=0x37, .x=0xf5, .y=0x37, .sp=0x70, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3d9e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3d9e, .value=0xdd, .type=IO_READ},
        {.addr=0x3d9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xd5df, .a=0xe1, .x=0x12, .y=0x8f, .sp=0xa8, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd5df, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd5e0, .a=0x8f, .x=0x12, .y=0x8f, .sp=0xa8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd5df, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd5df, .value=0xdd, .type=IO_READ},
        {.addr=0xd5e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x1408, .a=0x33, .x=0x6f, .y=0x9f, .sp=0x87, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1408, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1409, .a=0x9f, .x=0x6f, .y=0x9f, .sp=0x87, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1408, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1408, .value=0xdd, .type=IO_READ},
        {.addr=0x1409, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xf7ad, .a=0x60, .x=0x6a, .y=0xe2, .sp=0xcd, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf7ad, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf7ae, .a=0xe2, .x=0x6a, .y=0xe2, .sp=0xcd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf7ad, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf7ad, .value=0xdd, .type=IO_READ},
        {.addr=0xf7ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x1bc8, .a=0x81, .x=0x54, .y=0x04, .sp=0x2e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1bc9, .a=0x04, .x=0x54, .y=0x04, .sp=0x2e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1bc8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1bc8, .value=0xdd, .type=IO_READ},
        {.addr=0x1bc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xebf9, .a=0x76, .x=0x12, .y=0x1a, .sp=0x5e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xebf9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xebfa, .a=0x1a, .x=0x12, .y=0x1a, .sp=0x5e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xebf9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xebf9, .value=0xdd, .type=IO_READ},
        {.addr=0xebfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x8789, .a=0x5a, .x=0xb5, .y=0x85, .sp=0xa4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8789, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x878a, .a=0x85, .x=0xb5, .y=0x85, .sp=0xa4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8789, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8789, .value=0xdd, .type=IO_READ},
        {.addr=0x878a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x3f86, .a=0x41, .x=0x89, .y=0x95, .sp=0x91, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x3f86, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3f87, .a=0x95, .x=0x89, .y=0x95, .sp=0x91, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3f86, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3f86, .value=0xdd, .type=IO_READ},
        {.addr=0x3f87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xe638, .a=0x6e, .x=0xc6, .y=0xab, .sp=0x3a, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xe638, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe639, .a=0xab, .x=0xc6, .y=0xab, .sp=0x3a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe638, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe638, .value=0xdd, .type=IO_READ},
        {.addr=0xe639, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x14ba, .a=0x6e, .x=0x45, .y=0xb4, .sp=0xd2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x14ba, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x14bb, .a=0xb4, .x=0x45, .y=0xb4, .sp=0xd2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x14ba, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x14ba, .value=0xdd, .type=IO_READ},
        {.addr=0x14bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x6f64, .a=0x01, .x=0x0d, .y=0xc3, .sp=0x1c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6f64, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6f65, .a=0xc3, .x=0x0d, .y=0xc3, .sp=0x1c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6f64, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6f64, .value=0xdd, .type=IO_READ},
        {.addr=0x6f65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xc4db, .a=0xa1, .x=0x54, .y=0x9b, .sp=0xe4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xc4db, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc4dc, .a=0x9b, .x=0x54, .y=0x9b, .sp=0xe4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc4db, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc4db, .value=0xdd, .type=IO_READ},
        {.addr=0xc4dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x8621, .a=0xa0, .x=0xea, .y=0x9c, .sp=0x65, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8621, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8622, .a=0x9c, .x=0xea, .y=0x9c, .sp=0x65, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8621, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8621, .value=0xdd, .type=IO_READ},
        {.addr=0x8622, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x06eb, .a=0x3f, .x=0x89, .y=0x80, .sp=0x93, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x06eb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x06ec, .a=0x80, .x=0x89, .y=0x80, .sp=0x93, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x06eb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x06eb, .value=0xdd, .type=IO_READ},
        {.addr=0x06ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x5ed8, .a=0x80, .x=0x6b, .y=0x42, .sp=0x36, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5ed9, .a=0x42, .x=0x6b, .y=0x42, .sp=0x36, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5ed8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5ed8, .value=0xdd, .type=IO_READ},
        {.addr=0x5ed9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x07dc, .a=0xc4, .x=0x16, .y=0x07, .sp=0x02, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x07dc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x07dd, .a=0x07, .x=0x16, .y=0x07, .sp=0x02, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x07dc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x07dc, .value=0xdd, .type=IO_READ},
        {.addr=0x07dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xf131, .a=0x39, .x=0x94, .y=0x46, .sp=0x7b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf131, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf132, .a=0x46, .x=0x94, .y=0x46, .sp=0x7b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf131, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf131, .value=0xdd, .type=IO_READ},
        {.addr=0xf132, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x7161, .a=0x99, .x=0x1b, .y=0xbb, .sp=0xaa, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7161, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7162, .a=0xbb, .x=0x1b, .y=0xbb, .sp=0xaa, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7161, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7161, .value=0xdd, .type=IO_READ},
        {.addr=0x7162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xd7c9, .a=0x29, .x=0xa2, .y=0xe1, .sp=0x97, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd7ca, .a=0xe1, .x=0xa2, .y=0xe1, .sp=0x97, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd7c9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd7c9, .value=0xdd, .type=IO_READ},
        {.addr=0xd7ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xdf3d, .a=0x50, .x=0x0e, .y=0x76, .sp=0xe3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xdf3d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdf3e, .a=0x76, .x=0x0e, .y=0x76, .sp=0xe3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdf3d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdf3d, .value=0xdd, .type=IO_READ},
        {.addr=0xdf3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb78b, .a=0x45, .x=0xe5, .y=0xae, .sp=0xe8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xb78b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb78c, .a=0xae, .x=0xe5, .y=0xae, .sp=0xe8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb78b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb78b, .value=0xdd, .type=IO_READ},
        {.addr=0xb78c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xda5b, .a=0xcf, .x=0xaf, .y=0x9a, .sp=0x3b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xda5b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xda5c, .a=0x9a, .x=0xaf, .y=0x9a, .sp=0x3b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xda5b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xda5b, .value=0xdd, .type=IO_READ},
        {.addr=0xda5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xfafb, .a=0xda, .x=0xc7, .y=0x0a, .sp=0x87, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xfafb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfafc, .a=0x0a, .x=0xc7, .y=0x0a, .sp=0x87, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfafb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfafb, .value=0xdd, .type=IO_READ},
        {.addr=0xfafc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x7c8f, .a=0xb7, .x=0xd2, .y=0xf0, .sp=0x4e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x7c8f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7c90, .a=0xf0, .x=0xd2, .y=0xf0, .sp=0x4e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7c8f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7c8f, .value=0xdd, .type=IO_READ},
        {.addr=0x7c90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xade5, .a=0x92, .x=0x85, .y=0xf9, .sp=0xfe, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xade5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xade6, .a=0xf9, .x=0x85, .y=0xf9, .sp=0xfe, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xade5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xade5, .value=0xdd, .type=IO_READ},
        {.addr=0xade6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x71e2, .a=0x5e, .x=0x0e, .y=0x82, .sp=0x62, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x71e2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x71e3, .a=0x82, .x=0x0e, .y=0x82, .sp=0x62, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x71e2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x71e2, .value=0xdd, .type=IO_READ},
        {.addr=0x71e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x17e5, .a=0x3a, .x=0x5c, .y=0xa6, .sp=0xa4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x17e5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x17e6, .a=0xa6, .x=0x5c, .y=0xa6, .sp=0xa4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x17e5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x17e5, .value=0xdd, .type=IO_READ},
        {.addr=0x17e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2ece, .a=0x07, .x=0x4c, .y=0x7f, .sp=0x80, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2ece, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2ecf, .a=0x7f, .x=0x4c, .y=0x7f, .sp=0x80, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2ece, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2ece, .value=0xdd, .type=IO_READ},
        {.addr=0x2ecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xb1e5, .a=0x42, .x=0x27, .y=0x79, .sp=0x49, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb1e5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb1e6, .a=0x79, .x=0x27, .y=0x79, .sp=0x49, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb1e5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb1e5, .value=0xdd, .type=IO_READ},
        {.addr=0xb1e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xbaec, .a=0x2d, .x=0x17, .y=0x53, .sp=0xfe, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xbaec, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbaed, .a=0x53, .x=0x17, .y=0x53, .sp=0xfe, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbaec, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbaec, .value=0xdd, .type=IO_READ},
        {.addr=0xbaed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xfc5b, .a=0x84, .x=0xbb, .y=0x4c, .sp=0x2f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xfc5b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfc5c, .a=0x4c, .x=0xbb, .y=0x4c, .sp=0x2f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xfc5b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfc5b, .value=0xdd, .type=IO_READ},
        {.addr=0xfc5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x2512, .a=0x91, .x=0x5e, .y=0xe2, .sp=0x07, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2512, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2513, .a=0xe2, .x=0x5e, .y=0xe2, .sp=0x07, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2512, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2512, .value=0xdd, .type=IO_READ},
        {.addr=0x2513, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x3928, .a=0x77, .x=0xb0, .y=0x5a, .sp=0x48, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x3928, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3929, .a=0x5a, .x=0xb0, .y=0x5a, .sp=0x48, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x3928, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3928, .value=0xdd, .type=IO_READ},
        {.addr=0x3929, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2577, .a=0x5e, .x=0x34, .y=0x24, .sp=0x39, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2577, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2578, .a=0x24, .x=0x34, .y=0x24, .sp=0x39, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2577, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2577, .value=0xdd, .type=IO_READ},
        {.addr=0x2578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x3165, .a=0x76, .x=0xdc, .y=0xa8, .sp=0xe8, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3165, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3166, .a=0xa8, .x=0xdc, .y=0xa8, .sp=0xe8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3165, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3165, .value=0xdd, .type=IO_READ},
        {.addr=0x3166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x0105, .a=0x48, .x=0x0b, .y=0xbe, .sp=0x97, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0106, .a=0xbe, .x=0x0b, .y=0xbe, .sp=0x97, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0105, .value=0xdd, .type=IO_READ},
        {.addr=0x0106, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x5b3a, .a=0x64, .x=0xa0, .y=0xc9, .sp=0x0a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5b3b, .a=0xc9, .x=0xa0, .y=0xc9, .sp=0x0a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5b3a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5b3a, .value=0xdd, .type=IO_READ},
        {.addr=0x5b3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x2f80, .a=0x31, .x=0x2d, .y=0x0e, .sp=0x41, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2f80, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2f81, .a=0x0e, .x=0x2d, .y=0x0e, .sp=0x41, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2f80, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2f80, .value=0xdd, .type=IO_READ},
        {.addr=0x2f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xa4c4, .a=0xb6, .x=0x4f, .y=0xd4, .sp=0xef, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa4c5, .a=0xd4, .x=0x4f, .y=0xd4, .sp=0xef, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa4c4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa4c4, .value=0xdd, .type=IO_READ},
        {.addr=0xa4c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xa9ee, .a=0x1b, .x=0x1a, .y=0xfe, .sp=0x45, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ee, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa9ef, .a=0xfe, .x=0x1a, .y=0xfe, .sp=0x45, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa9ee, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa9ee, .value=0xdd, .type=IO_READ},
        {.addr=0xa9ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x44fe, .a=0x3b, .x=0x21, .y=0xe1, .sp=0x5e, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x44fe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x44ff, .a=0xe1, .x=0x21, .y=0xe1, .sp=0x5e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x44fe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x44fe, .value=0xdd, .type=IO_READ},
        {.addr=0x44ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xb118, .a=0x75, .x=0xc9, .y=0xcd, .sp=0x4f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xb118, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb119, .a=0xcd, .x=0xc9, .y=0xcd, .sp=0x4f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb118, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb118, .value=0xdd, .type=IO_READ},
        {.addr=0xb119, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xf900, .a=0xb5, .x=0xb7, .y=0xf9, .sp=0x0e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf900, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf901, .a=0xf9, .x=0xb7, .y=0xf9, .sp=0x0e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf900, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf900, .value=0xdd, .type=IO_READ},
        {.addr=0xf901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x6e2a, .a=0x36, .x=0x81, .y=0xb2, .sp=0x73, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6e2b, .a=0xb2, .x=0x81, .y=0xb2, .sp=0x73, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6e2a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6e2a, .value=0xdd, .type=IO_READ},
        {.addr=0x6e2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xdc1e, .a=0x18, .x=0xdd, .y=0xf9, .sp=0x98, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xdc1e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdc1f, .a=0xf9, .x=0xdd, .y=0xf9, .sp=0x98, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdc1e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdc1e, .value=0xdd, .type=IO_READ},
        {.addr=0xdc1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x6486, .a=0xaf, .x=0x73, .y=0x3a, .sp=0xab, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6486, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6487, .a=0x3a, .x=0x73, .y=0x3a, .sp=0xab, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6486, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6486, .value=0xdd, .type=IO_READ},
        {.addr=0x6487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x8b56, .a=0x6e, .x=0xbd, .y=0xc7, .sp=0x11, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8b56, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8b57, .a=0xc7, .x=0xbd, .y=0xc7, .sp=0x11, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8b56, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8b56, .value=0xdd, .type=IO_READ},
        {.addr=0x8b57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xa32e, .a=0x06, .x=0x69, .y=0x7b, .sp=0x7d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa32e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa32f, .a=0x7b, .x=0x69, .y=0x7b, .sp=0x7d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa32e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa32e, .value=0xdd, .type=IO_READ},
        {.addr=0xa32f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x9289, .a=0xfa, .x=0x75, .y=0x96, .sp=0x18, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9289, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x928a, .a=0x96, .x=0x75, .y=0x96, .sp=0x18, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9289, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9289, .value=0xdd, .type=IO_READ},
        {.addr=0x928a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x36cf, .a=0x9d, .x=0x34, .y=0xdb, .sp=0x1a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x36cf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x36d0, .a=0xdb, .x=0x34, .y=0xdb, .sp=0x1a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x36cf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x36cf, .value=0xdd, .type=IO_READ},
        {.addr=0x36d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x9ee0, .a=0x3f, .x=0xf2, .y=0x3d, .sp=0x39, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9ee1, .a=0x3d, .x=0xf2, .y=0x3d, .sp=0x39, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9ee0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9ee0, .value=0xdd, .type=IO_READ},
        {.addr=0x9ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x1dc5, .a=0x70, .x=0x0f, .y=0x06, .sp=0xa9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x1dc5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1dc6, .a=0x06, .x=0x0f, .y=0x06, .sp=0xa9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1dc5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1dc5, .value=0xdd, .type=IO_READ},
        {.addr=0x1dc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x2d21, .a=0xe4, .x=0x72, .y=0x87, .sp=0x82, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d21, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2d22, .a=0x87, .x=0x72, .y=0x87, .sp=0x82, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2d21, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2d21, .value=0xdd, .type=IO_READ},
        {.addr=0x2d22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0100) {
    const struct CPU_State initial_cpu = {.pc=0x938d, .a=0xc2, .x=0x96, .y=0x5c, .sp=0x11, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x938d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x938e, .a=0x5c, .x=0x96, .y=0x5c, .sp=0x11, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x938d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x938d, .value=0xdd, .type=IO_READ},
        {.addr=0x938e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0101) {
    const struct CPU_State initial_cpu = {.pc=0x9b64, .a=0x43, .x=0x77, .y=0x37, .sp=0x46, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x9b64, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9b65, .a=0x37, .x=0x77, .y=0x37, .sp=0x46, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9b64, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9b64, .value=0xdd, .type=IO_READ},
        {.addr=0x9b65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0102) {
    const struct CPU_State initial_cpu = {.pc=0xa568, .a=0xca, .x=0xd6, .y=0x87, .sp=0xd5, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa568, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa569, .a=0x87, .x=0xd6, .y=0x87, .sp=0xd5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa568, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa568, .value=0xdd, .type=IO_READ},
        {.addr=0xa569, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0103) {
    const struct CPU_State initial_cpu = {.pc=0x1e12, .a=0x0e, .x=0x0c, .y=0x90, .sp=0x8e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x1e12, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1e13, .a=0x90, .x=0x0c, .y=0x90, .sp=0x8e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1e12, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1e12, .value=0xdd, .type=IO_READ},
        {.addr=0x1e13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0104) {
    const struct CPU_State initial_cpu = {.pc=0x36bf, .a=0x9c, .x=0x3a, .y=0x5a, .sp=0x45, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x36bf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x36c0, .a=0x5a, .x=0x3a, .y=0x5a, .sp=0x45, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x36bf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x36bf, .value=0xdd, .type=IO_READ},
        {.addr=0x36c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0c1c, .a=0x01, .x=0x48, .y=0xbe, .sp=0x94, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0c1c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0c1d, .a=0xbe, .x=0x48, .y=0xbe, .sp=0x94, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0c1c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0c1c, .value=0xdd, .type=IO_READ},
        {.addr=0x0c1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0106) {
    const struct CPU_State initial_cpu = {.pc=0x7d73, .a=0xbf, .x=0x10, .y=0xa4, .sp=0xf1, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7d73, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7d74, .a=0xa4, .x=0x10, .y=0xa4, .sp=0xf1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7d73, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7d73, .value=0xdd, .type=IO_READ},
        {.addr=0x7d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0107) {
    const struct CPU_State initial_cpu = {.pc=0xe57b, .a=0xc7, .x=0x3d, .y=0x8b, .sp=0xdc, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe57b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe57c, .a=0x8b, .x=0x3d, .y=0x8b, .sp=0xdc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe57b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe57b, .value=0xdd, .type=IO_READ},
        {.addr=0xe57c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0108) {
    const struct CPU_State initial_cpu = {.pc=0x2ac4, .a=0x75, .x=0xcd, .y=0x10, .sp=0x22, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2ac5, .a=0x10, .x=0xcd, .y=0x10, .sp=0x22, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2ac4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2ac4, .value=0xdd, .type=IO_READ},
        {.addr=0x2ac5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0109) {
    const struct CPU_State initial_cpu = {.pc=0x9553, .a=0xd3, .x=0x31, .y=0x91, .sp=0x7e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9553, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9554, .a=0x91, .x=0x31, .y=0x91, .sp=0x7e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9553, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9553, .value=0xdd, .type=IO_READ},
        {.addr=0x9554, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_010A) {
    const struct CPU_State initial_cpu = {.pc=0x998a, .a=0xab, .x=0xa8, .y=0x4f, .sp=0x59, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x998a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x998b, .a=0x4f, .x=0xa8, .y=0x4f, .sp=0x59, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x998a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x998a, .value=0xdd, .type=IO_READ},
        {.addr=0x998b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_010B) {
    const struct CPU_State initial_cpu = {.pc=0xf41b, .a=0x94, .x=0xba, .y=0xf5, .sp=0x02, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xf41b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf41c, .a=0xf5, .x=0xba, .y=0xf5, .sp=0x02, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf41b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf41b, .value=0xdd, .type=IO_READ},
        {.addr=0xf41c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_010C) {
    const struct CPU_State initial_cpu = {.pc=0x24e6, .a=0x74, .x=0x1f, .y=0x12, .sp=0x72, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x24e6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x24e7, .a=0x12, .x=0x1f, .y=0x12, .sp=0x72, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x24e6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x24e6, .value=0xdd, .type=IO_READ},
        {.addr=0x24e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_010D) {
    const struct CPU_State initial_cpu = {.pc=0x085a, .a=0x13, .x=0x3d, .y=0x70, .sp=0xf6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x085a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x085b, .a=0x70, .x=0x3d, .y=0x70, .sp=0xf6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x085a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x085a, .value=0xdd, .type=IO_READ},
        {.addr=0x085b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_010E) {
    const struct CPU_State initial_cpu = {.pc=0x8f92, .a=0xca, .x=0x1f, .y=0xc9, .sp=0xea, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8f92, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8f93, .a=0xc9, .x=0x1f, .y=0xc9, .sp=0xea, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x8f92, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8f92, .value=0xdd, .type=IO_READ},
        {.addr=0x8f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_010F) {
    const struct CPU_State initial_cpu = {.pc=0x4b36, .a=0x4e, .x=0xd4, .y=0x63, .sp=0x0d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4b36, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4b37, .a=0x63, .x=0xd4, .y=0x63, .sp=0x0d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4b36, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4b36, .value=0xdd, .type=IO_READ},
        {.addr=0x4b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0110) {
    const struct CPU_State initial_cpu = {.pc=0xb591, .a=0xcf, .x=0xf2, .y=0xc2, .sp=0x38, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb591, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb592, .a=0xc2, .x=0xf2, .y=0xc2, .sp=0x38, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb591, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb591, .value=0xdd, .type=IO_READ},
        {.addr=0xb592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0111) {
    const struct CPU_State initial_cpu = {.pc=0x65d9, .a=0x6c, .x=0xd2, .y=0xed, .sp=0x80, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x65d9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x65da, .a=0xed, .x=0xd2, .y=0xed, .sp=0x80, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x65d9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x65d9, .value=0xdd, .type=IO_READ},
        {.addr=0x65da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0112) {
    const struct CPU_State initial_cpu = {.pc=0x884f, .a=0x19, .x=0x9c, .y=0x66, .sp=0x75, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x884f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8850, .a=0x66, .x=0x9c, .y=0x66, .sp=0x75, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x884f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x884f, .value=0xdd, .type=IO_READ},
        {.addr=0x8850, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0113) {
    const struct CPU_State initial_cpu = {.pc=0x6344, .a=0x8e, .x=0xc8, .y=0x12, .sp=0x43, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6344, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6345, .a=0x12, .x=0xc8, .y=0x12, .sp=0x43, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6344, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6344, .value=0xdd, .type=IO_READ},
        {.addr=0x6345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0114) {
    const struct CPU_State initial_cpu = {.pc=0x2d41, .a=0x8a, .x=0x77, .y=0x71, .sp=0x41, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2d41, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2d42, .a=0x71, .x=0x77, .y=0x71, .sp=0x41, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2d41, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2d41, .value=0xdd, .type=IO_READ},
        {.addr=0x2d42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0115) {
    const struct CPU_State initial_cpu = {.pc=0x1ac0, .a=0xf6, .x=0x7d, .y=0xec, .sp=0x21, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1ac0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1ac1, .a=0xec, .x=0x7d, .y=0xec, .sp=0x21, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1ac0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1ac0, .value=0xdd, .type=IO_READ},
        {.addr=0x1ac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0116) {
    const struct CPU_State initial_cpu = {.pc=0xde4d, .a=0x6b, .x=0xe7, .y=0xb3, .sp=0x99, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xde4d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xde4e, .a=0xb3, .x=0xe7, .y=0xb3, .sp=0x99, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xde4d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xde4d, .value=0xdd, .type=IO_READ},
        {.addr=0xde4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0117) {
    const struct CPU_State initial_cpu = {.pc=0x03b8, .a=0x4f, .x=0x7b, .y=0x4e, .sp=0x46, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x03b8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x03b9, .a=0x4e, .x=0x7b, .y=0x4e, .sp=0x46, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x03b8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x03b8, .value=0xdd, .type=IO_READ},
        {.addr=0x03b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0118) {
    const struct CPU_State initial_cpu = {.pc=0xfb76, .a=0xe4, .x=0xee, .y=0x38, .sp=0x25, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xfb76, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfb77, .a=0x38, .x=0xee, .y=0x38, .sp=0x25, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfb76, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfb76, .value=0xdd, .type=IO_READ},
        {.addr=0xfb77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0119) {
    const struct CPU_State initial_cpu = {.pc=0x6367, .a=0xa9, .x=0x3a, .y=0x04, .sp=0x6a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6367, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6368, .a=0x04, .x=0x3a, .y=0x04, .sp=0x6a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6367, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6367, .value=0xdd, .type=IO_READ},
        {.addr=0x6368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_011A) {
    const struct CPU_State initial_cpu = {.pc=0x3c59, .a=0x8c, .x=0x18, .y=0x25, .sp=0x37, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3c59, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3c5a, .a=0x25, .x=0x18, .y=0x25, .sp=0x37, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3c59, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3c59, .value=0xdd, .type=IO_READ},
        {.addr=0x3c5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_011B) {
    const struct CPU_State initial_cpu = {.pc=0x0d72, .a=0x39, .x=0x3e, .y=0xbb, .sp=0xe7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0d72, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d73, .a=0xbb, .x=0x3e, .y=0xbb, .sp=0xe7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0d72, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d72, .value=0xdd, .type=IO_READ},
        {.addr=0x0d73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_011C) {
    const struct CPU_State initial_cpu = {.pc=0x571e, .a=0x22, .x=0xd6, .y=0xe1, .sp=0x2d, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x571e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x571f, .a=0xe1, .x=0xd6, .y=0xe1, .sp=0x2d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x571e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x571e, .value=0xdd, .type=IO_READ},
        {.addr=0x571f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_011D) {
    const struct CPU_State initial_cpu = {.pc=0x0d3d, .a=0x44, .x=0x19, .y=0x1c, .sp=0x52, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d3d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d3e, .a=0x1c, .x=0x19, .y=0x1c, .sp=0x52, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0d3d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d3d, .value=0xdd, .type=IO_READ},
        {.addr=0x0d3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_011E) {
    const struct CPU_State initial_cpu = {.pc=0x9861, .a=0x73, .x=0xaf, .y=0x0d, .sp=0x23, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9861, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9862, .a=0x0d, .x=0xaf, .y=0x0d, .sp=0x23, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9861, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9861, .value=0xdd, .type=IO_READ},
        {.addr=0x9862, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_011F) {
    const struct CPU_State initial_cpu = {.pc=0x71c6, .a=0xb1, .x=0x3c, .y=0x85, .sp=0x69, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x71c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x71c7, .a=0x85, .x=0x3c, .y=0x85, .sp=0x69, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x71c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x71c6, .value=0xdd, .type=IO_READ},
        {.addr=0x71c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0120) {
    const struct CPU_State initial_cpu = {.pc=0xde2c, .a=0xd4, .x=0xea, .y=0x3a, .sp=0x3c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xde2c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xde2d, .a=0x3a, .x=0xea, .y=0x3a, .sp=0x3c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xde2c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xde2c, .value=0xdd, .type=IO_READ},
        {.addr=0xde2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6f3b, .a=0x10, .x=0x73, .y=0xac, .sp=0x40, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6f3b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6f3c, .a=0xac, .x=0x73, .y=0xac, .sp=0x40, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6f3b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6f3b, .value=0xdd, .type=IO_READ},
        {.addr=0x6f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0122) {
    const struct CPU_State initial_cpu = {.pc=0xe773, .a=0x2f, .x=0x1d, .y=0x46, .sp=0xcc, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe773, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe774, .a=0x46, .x=0x1d, .y=0x46, .sp=0xcc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe773, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe773, .value=0xdd, .type=IO_READ},
        {.addr=0xe774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0123) {
    const struct CPU_State initial_cpu = {.pc=0xf71b, .a=0x95, .x=0xba, .y=0xdf, .sp=0x81, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf71b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf71c, .a=0xdf, .x=0xba, .y=0xdf, .sp=0x81, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf71b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf71b, .value=0xdd, .type=IO_READ},
        {.addr=0xf71c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0124) {
    const struct CPU_State initial_cpu = {.pc=0x8e7f, .a=0x10, .x=0x67, .y=0xf2, .sp=0x48, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8e7f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8e80, .a=0xf2, .x=0x67, .y=0xf2, .sp=0x48, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8e7f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8e7f, .value=0xdd, .type=IO_READ},
        {.addr=0x8e80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0125) {
    const struct CPU_State initial_cpu = {.pc=0xab4d, .a=0x1b, .x=0x52, .y=0x6c, .sp=0x54, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xab4d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xab4e, .a=0x6c, .x=0x52, .y=0x6c, .sp=0x54, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xab4d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xab4d, .value=0xdd, .type=IO_READ},
        {.addr=0xab4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0126) {
    const struct CPU_State initial_cpu = {.pc=0x94ec, .a=0x0b, .x=0x0a, .y=0xf1, .sp=0xce, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x94ec, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x94ed, .a=0xf1, .x=0x0a, .y=0xf1, .sp=0xce, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x94ec, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x94ec, .value=0xdd, .type=IO_READ},
        {.addr=0x94ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0127) {
    const struct CPU_State initial_cpu = {.pc=0x380b, .a=0x3a, .x=0xc5, .y=0x1b, .sp=0xcf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x380b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x380c, .a=0x1b, .x=0xc5, .y=0x1b, .sp=0xcf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x380b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x380b, .value=0xdd, .type=IO_READ},
        {.addr=0x380c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0128) {
    const struct CPU_State initial_cpu = {.pc=0x53a7, .a=0x29, .x=0xc6, .y=0x3c, .sp=0xee, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x53a7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x53a8, .a=0x3c, .x=0xc6, .y=0x3c, .sp=0xee, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x53a7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x53a7, .value=0xdd, .type=IO_READ},
        {.addr=0x53a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0129) {
    const struct CPU_State initial_cpu = {.pc=0xf777, .a=0xd0, .x=0x77, .y=0xf7, .sp=0x2a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf777, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf778, .a=0xf7, .x=0x77, .y=0xf7, .sp=0x2a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf777, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf777, .value=0xdd, .type=IO_READ},
        {.addr=0xf778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_012A) {
    const struct CPU_State initial_cpu = {.pc=0x4472, .a=0x6b, .x=0x19, .y=0xfe, .sp=0xed, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4472, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4473, .a=0xfe, .x=0x19, .y=0xfe, .sp=0xed, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4472, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4472, .value=0xdd, .type=IO_READ},
        {.addr=0x4473, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_012B) {
    const struct CPU_State initial_cpu = {.pc=0x9fdd, .a=0x48, .x=0x23, .y=0x8c, .sp=0xb9, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9fdd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9fde, .a=0x8c, .x=0x23, .y=0x8c, .sp=0xb9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9fdd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9fdd, .value=0xdd, .type=IO_READ},
        {.addr=0x9fde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_012C) {
    const struct CPU_State initial_cpu = {.pc=0x1d64, .a=0x3a, .x=0x02, .y=0xe4, .sp=0x31, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x1d64, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1d65, .a=0xe4, .x=0x02, .y=0xe4, .sp=0x31, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1d64, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1d64, .value=0xdd, .type=IO_READ},
        {.addr=0x1d65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_012D) {
    const struct CPU_State initial_cpu = {.pc=0xf68c, .a=0xbf, .x=0xf7, .y=0x80, .sp=0xc7, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf68c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf68d, .a=0x80, .x=0xf7, .y=0x80, .sp=0xc7, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf68c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf68c, .value=0xdd, .type=IO_READ},
        {.addr=0xf68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_012E) {
    const struct CPU_State initial_cpu = {.pc=0xf262, .a=0x87, .x=0x6b, .y=0x97, .sp=0xe4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xf262, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf263, .a=0x97, .x=0x6b, .y=0x97, .sp=0xe4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf262, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf262, .value=0xdd, .type=IO_READ},
        {.addr=0xf263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2123, .a=0x13, .x=0x66, .y=0x2a, .sp=0x20, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2123, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2124, .a=0x2a, .x=0x66, .y=0x2a, .sp=0x20, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2123, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2123, .value=0xdd, .type=IO_READ},
        {.addr=0x2124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0130) {
    const struct CPU_State initial_cpu = {.pc=0xf347, .a=0x0d, .x=0x3e, .y=0x19, .sp=0xf7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf347, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf348, .a=0x19, .x=0x3e, .y=0x19, .sp=0xf7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf347, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf347, .value=0xdd, .type=IO_READ},
        {.addr=0xf348, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0131) {
    const struct CPU_State initial_cpu = {.pc=0xee73, .a=0x25, .x=0x5a, .y=0xbe, .sp=0x35, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xee73, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xee74, .a=0xbe, .x=0x5a, .y=0xbe, .sp=0x35, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xee73, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xee73, .value=0xdd, .type=IO_READ},
        {.addr=0xee74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0132) {
    const struct CPU_State initial_cpu = {.pc=0xcf0a, .a=0x16, .x=0xb5, .y=0x83, .sp=0x21, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xcf0a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcf0b, .a=0x83, .x=0xb5, .y=0x83, .sp=0x21, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xcf0a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcf0a, .value=0xdd, .type=IO_READ},
        {.addr=0xcf0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0133) {
    const struct CPU_State initial_cpu = {.pc=0x1248, .a=0x4b, .x=0x19, .y=0x95, .sp=0x7c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1248, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1249, .a=0x95, .x=0x19, .y=0x95, .sp=0x7c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1248, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1248, .value=0xdd, .type=IO_READ},
        {.addr=0x1249, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0134) {
    const struct CPU_State initial_cpu = {.pc=0xda37, .a=0xaa, .x=0x9f, .y=0x8f, .sp=0xf4, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xda37, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xda38, .a=0x8f, .x=0x9f, .y=0x8f, .sp=0xf4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xda37, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xda37, .value=0xdd, .type=IO_READ},
        {.addr=0xda38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0135) {
    const struct CPU_State initial_cpu = {.pc=0x5b49, .a=0x59, .x=0xa2, .y=0xcc, .sp=0x9c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x5b49, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5b4a, .a=0xcc, .x=0xa2, .y=0xcc, .sp=0x9c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5b49, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5b49, .value=0xdd, .type=IO_READ},
        {.addr=0x5b4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0136) {
    const struct CPU_State initial_cpu = {.pc=0x40bf, .a=0x79, .x=0xf0, .y=0xf4, .sp=0x9a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x40bf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x40c0, .a=0xf4, .x=0xf0, .y=0xf4, .sp=0x9a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x40bf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x40bf, .value=0xdd, .type=IO_READ},
        {.addr=0x40c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0137) {
    const struct CPU_State initial_cpu = {.pc=0xb150, .a=0xc8, .x=0x99, .y=0x3c, .sp=0x13, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xb150, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb151, .a=0x3c, .x=0x99, .y=0x3c, .sp=0x13, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb150, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb150, .value=0xdd, .type=IO_READ},
        {.addr=0xb151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0138) {
    const struct CPU_State initial_cpu = {.pc=0x3c5a, .a=0x68, .x=0x33, .y=0xf1, .sp=0x87, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3c5a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3c5b, .a=0xf1, .x=0x33, .y=0xf1, .sp=0x87, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3c5a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3c5a, .value=0xdd, .type=IO_READ},
        {.addr=0x3c5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0139) {
    const struct CPU_State initial_cpu = {.pc=0x549a, .a=0xfd, .x=0x5c, .y=0x85, .sp=0x13, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x549a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x549b, .a=0x85, .x=0x5c, .y=0x85, .sp=0x13, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x549a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x549a, .value=0xdd, .type=IO_READ},
        {.addr=0x549b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_013A) {
    const struct CPU_State initial_cpu = {.pc=0xf36c, .a=0xb6, .x=0xf2, .y=0xf9, .sp=0x1c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf36c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf36d, .a=0xf9, .x=0xf2, .y=0xf9, .sp=0x1c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf36c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf36c, .value=0xdd, .type=IO_READ},
        {.addr=0xf36d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_013B) {
    const struct CPU_State initial_cpu = {.pc=0x7bef, .a=0x22, .x=0x2b, .y=0xd5, .sp=0x56, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7bef, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7bf0, .a=0xd5, .x=0x2b, .y=0xd5, .sp=0x56, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7bef, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7bef, .value=0xdd, .type=IO_READ},
        {.addr=0x7bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_013C) {
    const struct CPU_State initial_cpu = {.pc=0xc019, .a=0x2a, .x=0xb0, .y=0x36, .sp=0x8e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc019, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc01a, .a=0x36, .x=0xb0, .y=0x36, .sp=0x8e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc019, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc019, .value=0xdd, .type=IO_READ},
        {.addr=0xc01a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_013D) {
    const struct CPU_State initial_cpu = {.pc=0x5912, .a=0xe4, .x=0xed, .y=0xab, .sp=0xc8, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5912, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5913, .a=0xab, .x=0xed, .y=0xab, .sp=0xc8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5912, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5912, .value=0xdd, .type=IO_READ},
        {.addr=0x5913, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_013E) {
    const struct CPU_State initial_cpu = {.pc=0x35d4, .a=0x37, .x=0xb1, .y=0xa3, .sp=0x3c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x35d4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35d5, .a=0xa3, .x=0xb1, .y=0xa3, .sp=0x3c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x35d4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35d4, .value=0xdd, .type=IO_READ},
        {.addr=0x35d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_013F) {
    const struct CPU_State initial_cpu = {.pc=0x6c07, .a=0xed, .x=0x79, .y=0x77, .sp=0x6e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x6c07, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6c08, .a=0x77, .x=0x79, .y=0x77, .sp=0x6e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6c07, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6c07, .value=0xdd, .type=IO_READ},
        {.addr=0x6c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0140) {
    const struct CPU_State initial_cpu = {.pc=0x9021, .a=0xf7, .x=0x8d, .y=0xd1, .sp=0x83, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9021, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9022, .a=0xd1, .x=0x8d, .y=0xd1, .sp=0x83, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9021, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9021, .value=0xdd, .type=IO_READ},
        {.addr=0x9022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0141) {
    const struct CPU_State initial_cpu = {.pc=0x5848, .a=0x1d, .x=0x1d, .y=0x98, .sp=0xfe, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5848, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5849, .a=0x98, .x=0x1d, .y=0x98, .sp=0xfe, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5848, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5848, .value=0xdd, .type=IO_READ},
        {.addr=0x5849, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0142) {
    const struct CPU_State initial_cpu = {.pc=0x48b1, .a=0x34, .x=0x1a, .y=0x84, .sp=0x4c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x48b1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x48b2, .a=0x84, .x=0x1a, .y=0x84, .sp=0x4c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x48b1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x48b1, .value=0xdd, .type=IO_READ},
        {.addr=0x48b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0143) {
    const struct CPU_State initial_cpu = {.pc=0x7436, .a=0x62, .x=0xdc, .y=0x80, .sp=0x65, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7436, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7437, .a=0x80, .x=0xdc, .y=0x80, .sp=0x65, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7436, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7436, .value=0xdd, .type=IO_READ},
        {.addr=0x7437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0144) {
    const struct CPU_State initial_cpu = {.pc=0x481e, .a=0x9e, .x=0x0e, .y=0x63, .sp=0xf1, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x481e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x481f, .a=0x63, .x=0x0e, .y=0x63, .sp=0xf1, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x481e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x481e, .value=0xdd, .type=IO_READ},
        {.addr=0x481f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0145) {
    const struct CPU_State initial_cpu = {.pc=0x8352, .a=0x5a, .x=0x9d, .y=0xd6, .sp=0x58, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8352, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8353, .a=0xd6, .x=0x9d, .y=0xd6, .sp=0x58, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8352, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8352, .value=0xdd, .type=IO_READ},
        {.addr=0x8353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0146) {
    const struct CPU_State initial_cpu = {.pc=0x2551, .a=0xd7, .x=0x66, .y=0x33, .sp=0x2e, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2551, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2552, .a=0x33, .x=0x66, .y=0x33, .sp=0x2e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2551, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2551, .value=0xdd, .type=IO_READ},
        {.addr=0x2552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0147) {
    const struct CPU_State initial_cpu = {.pc=0x8c25, .a=0xdc, .x=0x0a, .y=0xf4, .sp=0xd2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x8c25, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8c26, .a=0xf4, .x=0x0a, .y=0xf4, .sp=0xd2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8c25, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8c25, .value=0xdd, .type=IO_READ},
        {.addr=0x8c26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0148) {
    const struct CPU_State initial_cpu = {.pc=0x698c, .a=0x34, .x=0x25, .y=0xf6, .sp=0xd7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x698c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x698d, .a=0xf6, .x=0x25, .y=0xf6, .sp=0xd7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x698c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x698c, .value=0xdd, .type=IO_READ},
        {.addr=0x698d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0149) {
    const struct CPU_State initial_cpu = {.pc=0xd7c5, .a=0x31, .x=0x33, .y=0x46, .sp=0x41, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd7c6, .a=0x46, .x=0x33, .y=0x46, .sp=0x41, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd7c5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd7c5, .value=0xdd, .type=IO_READ},
        {.addr=0xd7c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_014A) {
    const struct CPU_State initial_cpu = {.pc=0xb761, .a=0x06, .x=0x27, .y=0x4b, .sp=0x30, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb761, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb762, .a=0x4b, .x=0x27, .y=0x4b, .sp=0x30, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb761, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb761, .value=0xdd, .type=IO_READ},
        {.addr=0xb762, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_014B) {
    const struct CPU_State initial_cpu = {.pc=0xe332, .a=0xcd, .x=0x0b, .y=0xed, .sp=0x79, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe332, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe333, .a=0xed, .x=0x0b, .y=0xed, .sp=0x79, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe332, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe332, .value=0xdd, .type=IO_READ},
        {.addr=0xe333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_014C) {
    const struct CPU_State initial_cpu = {.pc=0xe0c5, .a=0x16, .x=0x18, .y=0x00, .sp=0xe5, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe0c6, .a=0x00, .x=0x18, .y=0x00, .sp=0xe5, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xe0c5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe0c5, .value=0xdd, .type=IO_READ},
        {.addr=0xe0c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_014D) {
    const struct CPU_State initial_cpu = {.pc=0xb494, .a=0x7c, .x=0x1d, .y=0xf1, .sp=0xd1, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb494, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb495, .a=0xf1, .x=0x1d, .y=0xf1, .sp=0xd1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb494, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb494, .value=0xdd, .type=IO_READ},
        {.addr=0xb495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_014E) {
    const struct CPU_State initial_cpu = {.pc=0xb6fa, .a=0x66, .x=0x77, .y=0xa2, .sp=0xbc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xb6fa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb6fb, .a=0xa2, .x=0x77, .y=0xa2, .sp=0xbc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb6fa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb6fa, .value=0xdd, .type=IO_READ},
        {.addr=0xb6fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_014F) {
    const struct CPU_State initial_cpu = {.pc=0x232b, .a=0x01, .x=0xcf, .y=0x70, .sp=0x36, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x232b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x232c, .a=0x70, .x=0xcf, .y=0x70, .sp=0x36, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x232b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x232b, .value=0xdd, .type=IO_READ},
        {.addr=0x232c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0150) {
    const struct CPU_State initial_cpu = {.pc=0x37c6, .a=0x89, .x=0x2d, .y=0x8e, .sp=0x2e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x37c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x37c7, .a=0x8e, .x=0x2d, .y=0x8e, .sp=0x2e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x37c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x37c6, .value=0xdd, .type=IO_READ},
        {.addr=0x37c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0151) {
    const struct CPU_State initial_cpu = {.pc=0xab4d, .a=0xf6, .x=0xba, .y=0x66, .sp=0x5f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xab4d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xab4e, .a=0x66, .x=0xba, .y=0x66, .sp=0x5f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xab4d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xab4d, .value=0xdd, .type=IO_READ},
        {.addr=0xab4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0152) {
    const struct CPU_State initial_cpu = {.pc=0xe767, .a=0x5b, .x=0xbb, .y=0x11, .sp=0xbf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe767, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe768, .a=0x11, .x=0xbb, .y=0x11, .sp=0xbf, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe767, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe767, .value=0xdd, .type=IO_READ},
        {.addr=0xe768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0153) {
    const struct CPU_State initial_cpu = {.pc=0xff9b, .a=0x65, .x=0x93, .y=0xdf, .sp=0xa8, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xff9b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xff9c, .a=0xdf, .x=0x93, .y=0xdf, .sp=0xa8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xff9b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xff9b, .value=0xdd, .type=IO_READ},
        {.addr=0xff9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0154) {
    const struct CPU_State initial_cpu = {.pc=0x6a75, .a=0x8e, .x=0xed, .y=0xee, .sp=0xf0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6a75, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6a76, .a=0xee, .x=0xed, .y=0xee, .sp=0xf0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6a75, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6a75, .value=0xdd, .type=IO_READ},
        {.addr=0x6a76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0155) {
    const struct CPU_State initial_cpu = {.pc=0x609e, .a=0xdb, .x=0xf3, .y=0x7f, .sp=0xad, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x609e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x609f, .a=0x7f, .x=0xf3, .y=0x7f, .sp=0xad, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x609e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x609e, .value=0xdd, .type=IO_READ},
        {.addr=0x609f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0156) {
    const struct CPU_State initial_cpu = {.pc=0xe4a9, .a=0x62, .x=0xea, .y=0x0f, .sp=0x7f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe4a9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe4aa, .a=0x0f, .x=0xea, .y=0x0f, .sp=0x7f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe4a9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe4a9, .value=0xdd, .type=IO_READ},
        {.addr=0xe4aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0157) {
    const struct CPU_State initial_cpu = {.pc=0x6e68, .a=0x30, .x=0xbe, .y=0xf3, .sp=0xb0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6e68, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6e69, .a=0xf3, .x=0xbe, .y=0xf3, .sp=0xb0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6e68, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6e68, .value=0xdd, .type=IO_READ},
        {.addr=0x6e69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0158) {
    const struct CPU_State initial_cpu = {.pc=0xe6d5, .a=0x35, .x=0x30, .y=0x57, .sp=0x98, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe6d6, .a=0x57, .x=0x30, .y=0x57, .sp=0x98, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe6d5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe6d5, .value=0xdd, .type=IO_READ},
        {.addr=0xe6d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0159) {
    const struct CPU_State initial_cpu = {.pc=0x4931, .a=0x79, .x=0x17, .y=0x00, .sp=0x81, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x4931, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4932, .a=0x00, .x=0x17, .y=0x00, .sp=0x81, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x4931, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4931, .value=0xdd, .type=IO_READ},
        {.addr=0x4932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_015A) {
    const struct CPU_State initial_cpu = {.pc=0x2561, .a=0x46, .x=0x8b, .y=0x6b, .sp=0xd6, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x2561, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2562, .a=0x6b, .x=0x8b, .y=0x6b, .sp=0xd6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2561, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2561, .value=0xdd, .type=IO_READ},
        {.addr=0x2562, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_015B) {
    const struct CPU_State initial_cpu = {.pc=0xeebb, .a=0x45, .x=0x3e, .y=0x4d, .sp=0xfe, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xeebb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeebc, .a=0x4d, .x=0x3e, .y=0x4d, .sp=0xfe, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xeebb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeebb, .value=0xdd, .type=IO_READ},
        {.addr=0xeebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_015C) {
    const struct CPU_State initial_cpu = {.pc=0x1e9e, .a=0x5f, .x=0x84, .y=0xd3, .sp=0xe2, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1e9f, .a=0xd3, .x=0x84, .y=0xd3, .sp=0xe2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1e9e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1e9e, .value=0xdd, .type=IO_READ},
        {.addr=0x1e9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_015D) {
    const struct CPU_State initial_cpu = {.pc=0x9ab9, .a=0xbe, .x=0xae, .y=0xb2, .sp=0xc2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x9ab9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9aba, .a=0xb2, .x=0xae, .y=0xb2, .sp=0xc2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9ab9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9ab9, .value=0xdd, .type=IO_READ},
        {.addr=0x9aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_015E) {
    const struct CPU_State initial_cpu = {.pc=0x3ca2, .a=0x04, .x=0xb5, .y=0xee, .sp=0x7a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3ca3, .a=0xee, .x=0xb5, .y=0xee, .sp=0x7a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3ca2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3ca2, .value=0xdd, .type=IO_READ},
        {.addr=0x3ca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_015F) {
    const struct CPU_State initial_cpu = {.pc=0x3a0e, .a=0x98, .x=0x68, .y=0x42, .sp=0x12, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3a0f, .a=0x42, .x=0x68, .y=0x42, .sp=0x12, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3a0e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3a0e, .value=0xdd, .type=IO_READ},
        {.addr=0x3a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0160) {
    const struct CPU_State initial_cpu = {.pc=0x9c4f, .a=0x85, .x=0x6d, .y=0x27, .sp=0x8e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x9c4f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9c50, .a=0x27, .x=0x6d, .y=0x27, .sp=0x8e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9c4f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9c4f, .value=0xdd, .type=IO_READ},
        {.addr=0x9c50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0161) {
    const struct CPU_State initial_cpu = {.pc=0xc63c, .a=0x68, .x=0xf5, .y=0x42, .sp=0x69, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc63c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc63d, .a=0x42, .x=0xf5, .y=0x42, .sp=0x69, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc63c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc63c, .value=0xdd, .type=IO_READ},
        {.addr=0xc63d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0162) {
    const struct CPU_State initial_cpu = {.pc=0x9f20, .a=0x7a, .x=0xfe, .y=0xa6, .sp=0x76, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9f20, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9f21, .a=0xa6, .x=0xfe, .y=0xa6, .sp=0x76, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9f20, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9f20, .value=0xdd, .type=IO_READ},
        {.addr=0x9f21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2994, .a=0x09, .x=0xac, .y=0xba, .sp=0x96, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2994, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2995, .a=0xba, .x=0xac, .y=0xba, .sp=0x96, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2994, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2994, .value=0xdd, .type=IO_READ},
        {.addr=0x2995, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0164) {
    const struct CPU_State initial_cpu = {.pc=0xaed8, .a=0x0e, .x=0xd4, .y=0xc2, .sp=0x06, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xaed8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaed9, .a=0xc2, .x=0xd4, .y=0xc2, .sp=0x06, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xaed8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaed8, .value=0xdd, .type=IO_READ},
        {.addr=0xaed9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0165) {
    const struct CPU_State initial_cpu = {.pc=0xf047, .a=0xb3, .x=0xfb, .y=0xcc, .sp=0xc0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xf047, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf048, .a=0xcc, .x=0xfb, .y=0xcc, .sp=0xc0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf047, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf047, .value=0xdd, .type=IO_READ},
        {.addr=0xf048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0166) {
    const struct CPU_State initial_cpu = {.pc=0x11ec, .a=0xa4, .x=0xe6, .y=0x44, .sp=0xf9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x11ec, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x11ed, .a=0x44, .x=0xe6, .y=0x44, .sp=0xf9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x11ec, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x11ec, .value=0xdd, .type=IO_READ},
        {.addr=0x11ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0167) {
    const struct CPU_State initial_cpu = {.pc=0xd9a5, .a=0x12, .x=0xcd, .y=0x59, .sp=0xa2, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd9a6, .a=0x59, .x=0xcd, .y=0x59, .sp=0xa2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd9a5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd9a5, .value=0xdd, .type=IO_READ},
        {.addr=0xd9a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0168) {
    const struct CPU_State initial_cpu = {.pc=0x54eb, .a=0xd1, .x=0xa8, .y=0x0c, .sp=0xbc, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x54eb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x54ec, .a=0x0c, .x=0xa8, .y=0x0c, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x54eb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x54eb, .value=0xdd, .type=IO_READ},
        {.addr=0x54ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0169) {
    const struct CPU_State initial_cpu = {.pc=0x9607, .a=0x1a, .x=0x04, .y=0x89, .sp=0x14, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9607, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9608, .a=0x89, .x=0x04, .y=0x89, .sp=0x14, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9607, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9607, .value=0xdd, .type=IO_READ},
        {.addr=0x9608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_016A) {
    const struct CPU_State initial_cpu = {.pc=0xa98e, .a=0x41, .x=0xa1, .y=0x67, .sp=0x82, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa98e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa98f, .a=0x67, .x=0xa1, .y=0x67, .sp=0x82, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa98e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa98e, .value=0xdd, .type=IO_READ},
        {.addr=0xa98f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_016B) {
    const struct CPU_State initial_cpu = {.pc=0x485b, .a=0x5a, .x=0xfe, .y=0xf5, .sp=0x4f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x485b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x485c, .a=0xf5, .x=0xfe, .y=0xf5, .sp=0x4f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x485b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x485b, .value=0xdd, .type=IO_READ},
        {.addr=0x485c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_016C) {
    const struct CPU_State initial_cpu = {.pc=0x26c7, .a=0x0c, .x=0x8a, .y=0xb2, .sp=0x90, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x26c7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x26c8, .a=0xb2, .x=0x8a, .y=0xb2, .sp=0x90, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x26c7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x26c7, .value=0xdd, .type=IO_READ},
        {.addr=0x26c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_016D) {
    const struct CPU_State initial_cpu = {.pc=0x6743, .a=0x29, .x=0x5d, .y=0xb3, .sp=0x17, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6743, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6744, .a=0xb3, .x=0x5d, .y=0xb3, .sp=0x17, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6743, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6743, .value=0xdd, .type=IO_READ},
        {.addr=0x6744, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_016E) {
    const struct CPU_State initial_cpu = {.pc=0x4767, .a=0xb9, .x=0x46, .y=0x49, .sp=0x20, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x4767, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4768, .a=0x49, .x=0x46, .y=0x49, .sp=0x20, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4767, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4767, .value=0xdd, .type=IO_READ},
        {.addr=0x4768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_016F) {
    const struct CPU_State initial_cpu = {.pc=0x0d1f, .a=0x44, .x=0x5d, .y=0xed, .sp=0x29, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0d1f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d20, .a=0xed, .x=0x5d, .y=0xed, .sp=0x29, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0d1f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d1f, .value=0xdd, .type=IO_READ},
        {.addr=0x0d20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0170) {
    const struct CPU_State initial_cpu = {.pc=0x826d, .a=0x02, .x=0x22, .y=0xe0, .sp=0xc7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x826d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x826e, .a=0xe0, .x=0x22, .y=0xe0, .sp=0xc7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x826d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x826d, .value=0xdd, .type=IO_READ},
        {.addr=0x826e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0171) {
    const struct CPU_State initial_cpu = {.pc=0xf0c6, .a=0x4f, .x=0xe7, .y=0x1f, .sp=0x73, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf0c7, .a=0x1f, .x=0xe7, .y=0x1f, .sp=0x73, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf0c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf0c6, .value=0xdd, .type=IO_READ},
        {.addr=0xf0c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0172) {
    const struct CPU_State initial_cpu = {.pc=0x19bc, .a=0x8c, .x=0x6b, .y=0x1b, .sp=0x21, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x19bc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x19bd, .a=0x1b, .x=0x6b, .y=0x1b, .sp=0x21, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x19bc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x19bc, .value=0xdd, .type=IO_READ},
        {.addr=0x19bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0173) {
    const struct CPU_State initial_cpu = {.pc=0xc390, .a=0xc4, .x=0x3c, .y=0x73, .sp=0x4b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc390, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc391, .a=0x73, .x=0x3c, .y=0x73, .sp=0x4b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc390, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc390, .value=0xdd, .type=IO_READ},
        {.addr=0xc391, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0174) {
    const struct CPU_State initial_cpu = {.pc=0x4024, .a=0xbf, .x=0x8d, .y=0x8e, .sp=0xcb, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x4024, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4025, .a=0x8e, .x=0x8d, .y=0x8e, .sp=0xcb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4024, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4024, .value=0xdd, .type=IO_READ},
        {.addr=0x4025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0175) {
    const struct CPU_State initial_cpu = {.pc=0xca38, .a=0x7e, .x=0xf9, .y=0x4b, .sp=0xaf, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xca38, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xca39, .a=0x4b, .x=0xf9, .y=0x4b, .sp=0xaf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xca38, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xca38, .value=0xdd, .type=IO_READ},
        {.addr=0xca39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0176) {
    const struct CPU_State initial_cpu = {.pc=0x8a93, .a=0x48, .x=0x69, .y=0x46, .sp=0xad, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8a93, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8a94, .a=0x46, .x=0x69, .y=0x46, .sp=0xad, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8a93, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8a93, .value=0xdd, .type=IO_READ},
        {.addr=0x8a94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0177) {
    const struct CPU_State initial_cpu = {.pc=0xd6fb, .a=0x87, .x=0x94, .y=0xb9, .sp=0x9a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd6fb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd6fc, .a=0xb9, .x=0x94, .y=0xb9, .sp=0x9a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd6fb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd6fb, .value=0xdd, .type=IO_READ},
        {.addr=0xd6fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0178) {
    const struct CPU_State initial_cpu = {.pc=0x53fb, .a=0x3d, .x=0xcc, .y=0x6e, .sp=0x8c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x53fb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x53fc, .a=0x6e, .x=0xcc, .y=0x6e, .sp=0x8c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x53fb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x53fb, .value=0xdd, .type=IO_READ},
        {.addr=0x53fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0179) {
    const struct CPU_State initial_cpu = {.pc=0x846b, .a=0x14, .x=0xfc, .y=0x10, .sp=0xc4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x846b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x846c, .a=0x10, .x=0xfc, .y=0x10, .sp=0xc4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x846b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x846b, .value=0xdd, .type=IO_READ},
        {.addr=0x846c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_017A) {
    const struct CPU_State initial_cpu = {.pc=0x3185, .a=0x2e, .x=0x4d, .y=0x23, .sp=0x04, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x3185, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3186, .a=0x23, .x=0x4d, .y=0x23, .sp=0x04, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3185, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3185, .value=0xdd, .type=IO_READ},
        {.addr=0x3186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_017B) {
    const struct CPU_State initial_cpu = {.pc=0x1c33, .a=0xe9, .x=0x50, .y=0x25, .sp=0xad, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1c33, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1c34, .a=0x25, .x=0x50, .y=0x25, .sp=0xad, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1c33, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1c33, .value=0xdd, .type=IO_READ},
        {.addr=0x1c34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_017C) {
    const struct CPU_State initial_cpu = {.pc=0x6915, .a=0xa6, .x=0x9e, .y=0xe2, .sp=0xd5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6915, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6916, .a=0xe2, .x=0x9e, .y=0xe2, .sp=0xd5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6915, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6915, .value=0xdd, .type=IO_READ},
        {.addr=0x6916, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_017D) {
    const struct CPU_State initial_cpu = {.pc=0xa268, .a=0xd1, .x=0x6f, .y=0x44, .sp=0xae, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa268, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa269, .a=0x44, .x=0x6f, .y=0x44, .sp=0xae, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa268, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa268, .value=0xdd, .type=IO_READ},
        {.addr=0xa269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_017E) {
    const struct CPU_State initial_cpu = {.pc=0xa944, .a=0xb6, .x=0xab, .y=0x6a, .sp=0xf9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa944, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa945, .a=0x6a, .x=0xab, .y=0x6a, .sp=0xf9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa944, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa944, .value=0xdd, .type=IO_READ},
        {.addr=0xa945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_017F) {
    const struct CPU_State initial_cpu = {.pc=0xdb10, .a=0x67, .x=0xf8, .y=0x4f, .sp=0x8d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xdb10, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdb11, .a=0x4f, .x=0xf8, .y=0x4f, .sp=0x8d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xdb10, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdb10, .value=0xdd, .type=IO_READ},
        {.addr=0xdb11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0180) {
    const struct CPU_State initial_cpu = {.pc=0x0a00, .a=0x99, .x=0x9b, .y=0xac, .sp=0xc8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0a00, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0a01, .a=0xac, .x=0x9b, .y=0xac, .sp=0xc8, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0a00, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0a00, .value=0xdd, .type=IO_READ},
        {.addr=0x0a01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0181) {
    const struct CPU_State initial_cpu = {.pc=0x3eb0, .a=0xda, .x=0x99, .y=0x5c, .sp=0x4e, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3eb1, .a=0x5c, .x=0x99, .y=0x5c, .sp=0x4e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3eb0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3eb0, .value=0xdd, .type=IO_READ},
        {.addr=0x3eb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0182) {
    const struct CPU_State initial_cpu = {.pc=0x6054, .a=0x36, .x=0x63, .y=0xc1, .sp=0x74, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x6054, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6055, .a=0xc1, .x=0x63, .y=0xc1, .sp=0x74, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6054, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6054, .value=0xdd, .type=IO_READ},
        {.addr=0x6055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0183) {
    const struct CPU_State initial_cpu = {.pc=0x256f, .a=0xf4, .x=0x51, .y=0xf2, .sp=0xf9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x256f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2570, .a=0xf2, .x=0x51, .y=0xf2, .sp=0xf9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x256f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x256f, .value=0xdd, .type=IO_READ},
        {.addr=0x2570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0184) {
    const struct CPU_State initial_cpu = {.pc=0xfc1e, .a=0xdf, .x=0xcc, .y=0x16, .sp=0x02, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xfc1e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfc1f, .a=0x16, .x=0xcc, .y=0x16, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfc1e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfc1e, .value=0xdd, .type=IO_READ},
        {.addr=0xfc1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0185) {
    const struct CPU_State initial_cpu = {.pc=0xc930, .a=0x61, .x=0x29, .y=0xee, .sp=0xe1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc930, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc931, .a=0xee, .x=0x29, .y=0xee, .sp=0xe1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc930, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc930, .value=0xdd, .type=IO_READ},
        {.addr=0xc931, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0186) {
    const struct CPU_State initial_cpu = {.pc=0x13e3, .a=0x67, .x=0xca, .y=0x95, .sp=0x3e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x13e3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x13e4, .a=0x95, .x=0xca, .y=0x95, .sp=0x3e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x13e3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x13e3, .value=0xdd, .type=IO_READ},
        {.addr=0x13e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0187) {
    const struct CPU_State initial_cpu = {.pc=0xdb66, .a=0x6d, .x=0x9b, .y=0x4c, .sp=0xea, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xdb66, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdb67, .a=0x4c, .x=0x9b, .y=0x4c, .sp=0xea, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xdb66, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdb66, .value=0xdd, .type=IO_READ},
        {.addr=0xdb67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0188) {
    const struct CPU_State initial_cpu = {.pc=0xe9d5, .a=0x49, .x=0xf8, .y=0x3a, .sp=0x11, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe9d5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe9d6, .a=0x3a, .x=0xf8, .y=0x3a, .sp=0x11, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe9d5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe9d5, .value=0xdd, .type=IO_READ},
        {.addr=0xe9d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0189) {
    const struct CPU_State initial_cpu = {.pc=0xeca3, .a=0x8f, .x=0x90, .y=0xf9, .sp=0x23, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xeca3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeca4, .a=0xf9, .x=0x90, .y=0xf9, .sp=0x23, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xeca3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeca3, .value=0xdd, .type=IO_READ},
        {.addr=0xeca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_018A) {
    const struct CPU_State initial_cpu = {.pc=0x6c74, .a=0x6f, .x=0xf6, .y=0xe6, .sp=0x7b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6c74, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6c75, .a=0xe6, .x=0xf6, .y=0xe6, .sp=0x7b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6c74, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6c74, .value=0xdd, .type=IO_READ},
        {.addr=0x6c75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_018B) {
    const struct CPU_State initial_cpu = {.pc=0xe0dc, .a=0x24, .x=0xba, .y=0x11, .sp=0x1f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe0dc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe0dd, .a=0x11, .x=0xba, .y=0x11, .sp=0x1f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe0dc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe0dc, .value=0xdd, .type=IO_READ},
        {.addr=0xe0dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_018C) {
    const struct CPU_State initial_cpu = {.pc=0x512d, .a=0xf8, .x=0x48, .y=0x3b, .sp=0xcf, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x512d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x512e, .a=0x3b, .x=0x48, .y=0x3b, .sp=0xcf, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x512d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x512d, .value=0xdd, .type=IO_READ},
        {.addr=0x512e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_018D) {
    const struct CPU_State initial_cpu = {.pc=0x9606, .a=0x19, .x=0x74, .y=0x4b, .sp=0x36, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9606, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9607, .a=0x4b, .x=0x74, .y=0x4b, .sp=0x36, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9606, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9606, .value=0xdd, .type=IO_READ},
        {.addr=0x9607, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_018E) {
    const struct CPU_State initial_cpu = {.pc=0x7b42, .a=0xfd, .x=0x08, .y=0xad, .sp=0xce, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b42, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7b43, .a=0xad, .x=0x08, .y=0xad, .sp=0xce, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7b42, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7b42, .value=0xdd, .type=IO_READ},
        {.addr=0x7b43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_018F) {
    const struct CPU_State initial_cpu = {.pc=0x0c08, .a=0x54, .x=0x71, .y=0xdf, .sp=0xd9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c08, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0c09, .a=0xdf, .x=0x71, .y=0xdf, .sp=0xd9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0c08, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0c08, .value=0xdd, .type=IO_READ},
        {.addr=0x0c09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0190) {
    const struct CPU_State initial_cpu = {.pc=0x377f, .a=0xd2, .x=0xb8, .y=0x1c, .sp=0x38, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x377f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3780, .a=0x1c, .x=0xb8, .y=0x1c, .sp=0x38, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x377f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x377f, .value=0xdd, .type=IO_READ},
        {.addr=0x3780, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0191) {
    const struct CPU_State initial_cpu = {.pc=0xc113, .a=0x66, .x=0x59, .y=0xcb, .sp=0xf9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc113, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc114, .a=0xcb, .x=0x59, .y=0xcb, .sp=0xf9, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc113, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc113, .value=0xdd, .type=IO_READ},
        {.addr=0xc114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0192) {
    const struct CPU_State initial_cpu = {.pc=0x4584, .a=0xe1, .x=0xee, .y=0x79, .sp=0xfc, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4584, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4585, .a=0x79, .x=0xee, .y=0x79, .sp=0xfc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4584, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4584, .value=0xdd, .type=IO_READ},
        {.addr=0x4585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0193) {
    const struct CPU_State initial_cpu = {.pc=0x6720, .a=0xc2, .x=0x1c, .y=0x09, .sp=0x11, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6720, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6721, .a=0x09, .x=0x1c, .y=0x09, .sp=0x11, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6720, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6720, .value=0xdd, .type=IO_READ},
        {.addr=0x6721, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0194) {
    const struct CPU_State initial_cpu = {.pc=0x7802, .a=0xb1, .x=0x9f, .y=0xc7, .sp=0x99, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x7802, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7803, .a=0xc7, .x=0x9f, .y=0xc7, .sp=0x99, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x7802, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7802, .value=0xdd, .type=IO_READ},
        {.addr=0x7803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0195) {
    const struct CPU_State initial_cpu = {.pc=0x22e5, .a=0xda, .x=0x28, .y=0x84, .sp=0xdf, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x22e5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x22e6, .a=0x84, .x=0x28, .y=0x84, .sp=0xdf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x22e5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x22e5, .value=0xdd, .type=IO_READ},
        {.addr=0x22e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0196) {
    const struct CPU_State initial_cpu = {.pc=0x938e, .a=0x95, .x=0xdc, .y=0xf5, .sp=0xfd, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x938e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x938f, .a=0xf5, .x=0xdc, .y=0xf5, .sp=0xfd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x938e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x938e, .value=0xdd, .type=IO_READ},
        {.addr=0x938f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0197) {
    const struct CPU_State initial_cpu = {.pc=0xb0ee, .a=0x13, .x=0x81, .y=0x94, .sp=0xa6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ee, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb0ef, .a=0x94, .x=0x81, .y=0x94, .sp=0xa6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb0ee, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb0ee, .value=0xdd, .type=IO_READ},
        {.addr=0xb0ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0198) {
    const struct CPU_State initial_cpu = {.pc=0x0d2e, .a=0xc6, .x=0xb3, .y=0xbe, .sp=0xbf, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0d2e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d2f, .a=0xbe, .x=0xb3, .y=0xbe, .sp=0xbf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0d2e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d2e, .value=0xdd, .type=IO_READ},
        {.addr=0x0d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0199) {
    const struct CPU_State initial_cpu = {.pc=0xd002, .a=0xc6, .x=0xcd, .y=0x62, .sp=0xc3, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd002, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd003, .a=0x62, .x=0xcd, .y=0x62, .sp=0xc3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd002, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd002, .value=0xdd, .type=IO_READ},
        {.addr=0xd003, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_019A) {
    const struct CPU_State initial_cpu = {.pc=0x8c52, .a=0xe5, .x=0xc8, .y=0xae, .sp=0xa4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8c52, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8c53, .a=0xae, .x=0xc8, .y=0xae, .sp=0xa4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8c52, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8c52, .value=0xdd, .type=IO_READ},
        {.addr=0x8c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_019B) {
    const struct CPU_State initial_cpu = {.pc=0xd893, .a=0x4a, .x=0x32, .y=0xeb, .sp=0x21, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd893, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd894, .a=0xeb, .x=0x32, .y=0xeb, .sp=0x21, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd893, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd893, .value=0xdd, .type=IO_READ},
        {.addr=0xd894, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_019C) {
    const struct CPU_State initial_cpu = {.pc=0xb892, .a=0xaf, .x=0x8a, .y=0x3c, .sp=0x65, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb892, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb893, .a=0x3c, .x=0x8a, .y=0x3c, .sp=0x65, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb892, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb892, .value=0xdd, .type=IO_READ},
        {.addr=0xb893, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_019D) {
    const struct CPU_State initial_cpu = {.pc=0x4b3e, .a=0x61, .x=0x3d, .y=0x16, .sp=0xdc, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4b3e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4b3f, .a=0x16, .x=0x3d, .y=0x16, .sp=0xdc, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4b3e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4b3e, .value=0xdd, .type=IO_READ},
        {.addr=0x4b3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_019E) {
    const struct CPU_State initial_cpu = {.pc=0x2b07, .a=0x3b, .x=0xe0, .y=0x6a, .sp=0x4c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2b07, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2b08, .a=0x6a, .x=0xe0, .y=0x6a, .sp=0x4c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2b07, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2b07, .value=0xdd, .type=IO_READ},
        {.addr=0x2b08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_019F) {
    const struct CPU_State initial_cpu = {.pc=0xf0d6, .a=0xdd, .x=0x26, .y=0x15, .sp=0x22, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xf0d6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf0d7, .a=0x15, .x=0x26, .y=0x15, .sp=0x22, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf0d6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf0d6, .value=0xdd, .type=IO_READ},
        {.addr=0xf0d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x713d, .a=0x15, .x=0x81, .y=0xb2, .sp=0x11, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x713d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x713e, .a=0xb2, .x=0x81, .y=0xb2, .sp=0x11, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x713d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x713d, .value=0xdd, .type=IO_READ},
        {.addr=0x713e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3398, .a=0x4c, .x=0x04, .y=0x9a, .sp=0x8a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x3398, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3399, .a=0x9a, .x=0x04, .y=0x9a, .sp=0x8a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3398, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3398, .value=0xdd, .type=IO_READ},
        {.addr=0x3399, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x8a0d, .a=0xa4, .x=0x73, .y=0x8f, .sp=0x7c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8a0d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8a0e, .a=0x8f, .x=0x73, .y=0x8f, .sp=0x7c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8a0d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8a0d, .value=0xdd, .type=IO_READ},
        {.addr=0x8a0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xd8e2, .a=0x13, .x=0x40, .y=0x38, .sp=0x75, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd8e3, .a=0x38, .x=0x40, .y=0x38, .sp=0x75, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd8e2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd8e2, .value=0xdd, .type=IO_READ},
        {.addr=0xd8e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xbcc2, .a=0xee, .x=0xc5, .y=0x68, .sp=0xe7, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbcc2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbcc3, .a=0x68, .x=0xc5, .y=0x68, .sp=0xe7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbcc2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbcc2, .value=0xdd, .type=IO_READ},
        {.addr=0xbcc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x525e, .a=0xc7, .x=0x1f, .y=0x53, .sp=0x97, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x525e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x525f, .a=0x53, .x=0x1f, .y=0x53, .sp=0x97, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x525e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x525e, .value=0xdd, .type=IO_READ},
        {.addr=0x525f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xc557, .a=0x84, .x=0x82, .y=0xa1, .sp=0x64, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc557, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc558, .a=0xa1, .x=0x82, .y=0xa1, .sp=0x64, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc557, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc557, .value=0xdd, .type=IO_READ},
        {.addr=0xc558, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x41a6, .a=0x9e, .x=0x6e, .y=0x89, .sp=0x04, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x41a6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x41a7, .a=0x89, .x=0x6e, .y=0x89, .sp=0x04, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x41a6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x41a6, .value=0xdd, .type=IO_READ},
        {.addr=0x41a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x2f33, .a=0x8f, .x=0xc0, .y=0x9f, .sp=0xb0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x2f33, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2f34, .a=0x9f, .x=0xc0, .y=0x9f, .sp=0xb0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2f33, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2f33, .value=0xdd, .type=IO_READ},
        {.addr=0x2f34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5326, .a=0xfe, .x=0x9a, .y=0x68, .sp=0x84, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5326, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5327, .a=0x68, .x=0x9a, .y=0x68, .sp=0x84, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5326, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5326, .value=0xdd, .type=IO_READ},
        {.addr=0x5327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x04d5, .a=0x8c, .x=0xa9, .y=0x4c, .sp=0x96, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x04d5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x04d6, .a=0x4c, .x=0xa9, .y=0x4c, .sp=0x96, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x04d5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x04d5, .value=0xdd, .type=IO_READ},
        {.addr=0x04d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xc191, .a=0xdf, .x=0x24, .y=0x4f, .sp=0xfd, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc191, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc192, .a=0x4f, .x=0x24, .y=0x4f, .sp=0xfd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc191, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc191, .value=0xdd, .type=IO_READ},
        {.addr=0xc192, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x5965, .a=0x8c, .x=0xd3, .y=0x4a, .sp=0x6b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5965, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5966, .a=0x4a, .x=0xd3, .y=0x4a, .sp=0x6b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5965, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5965, .value=0xdd, .type=IO_READ},
        {.addr=0x5966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x6bf6, .a=0xf9, .x=0xb4, .y=0x6f, .sp=0xfa, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6bf7, .a=0x6f, .x=0xb4, .y=0x6f, .sp=0xfa, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6bf6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6bf6, .value=0xdd, .type=IO_READ},
        {.addr=0x6bf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xcca1, .a=0x4f, .x=0x2e, .y=0xa3, .sp=0x16, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcca1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcca2, .a=0xa3, .x=0x2e, .y=0xa3, .sp=0x16, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcca1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcca1, .value=0xdd, .type=IO_READ},
        {.addr=0xcca2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x9a26, .a=0xb7, .x=0x29, .y=0x37, .sp=0xb6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a26, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9a27, .a=0x37, .x=0x29, .y=0x37, .sp=0xb6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9a26, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9a26, .value=0xdd, .type=IO_READ},
        {.addr=0x9a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x09d2, .a=0x67, .x=0x1e, .y=0xa4, .sp=0x1f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x09d2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x09d3, .a=0xa4, .x=0x1e, .y=0xa4, .sp=0x1f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x09d2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x09d2, .value=0xdd, .type=IO_READ},
        {.addr=0x09d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x7992, .a=0x28, .x=0x1d, .y=0x72, .sp=0x59, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7992, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7993, .a=0x72, .x=0x1d, .y=0x72, .sp=0x59, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7992, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7992, .value=0xdd, .type=IO_READ},
        {.addr=0x7993, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5906, .a=0xd1, .x=0xfd, .y=0x7d, .sp=0x67, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5906, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5907, .a=0x7d, .x=0xfd, .y=0x7d, .sp=0x67, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5906, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5906, .value=0xdd, .type=IO_READ},
        {.addr=0x5907, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x253b, .a=0x0f, .x=0xa0, .y=0x3a, .sp=0x6d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x253b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x253c, .a=0x3a, .x=0xa0, .y=0x3a, .sp=0x6d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x253b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x253b, .value=0xdd, .type=IO_READ},
        {.addr=0x253c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x3be5, .a=0x7c, .x=0x81, .y=0xd4, .sp=0x7a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3be5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3be6, .a=0xd4, .x=0x81, .y=0xd4, .sp=0x7a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3be5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3be5, .value=0xdd, .type=IO_READ},
        {.addr=0x3be6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xaf4d, .a=0x3f, .x=0x38, .y=0xbd, .sp=0x50, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xaf4d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaf4e, .a=0xbd, .x=0x38, .y=0xbd, .sp=0x50, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xaf4d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaf4d, .value=0xdd, .type=IO_READ},
        {.addr=0xaf4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x83c4, .a=0x05, .x=0xb0, .y=0x03, .sp=0x98, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x83c4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x83c5, .a=0x03, .x=0xb0, .y=0x03, .sp=0x98, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x83c4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x83c4, .value=0xdd, .type=IO_READ},
        {.addr=0x83c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xf988, .a=0x3b, .x=0x4e, .y=0x1e, .sp=0x25, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xf988, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf989, .a=0x1e, .x=0x4e, .y=0x1e, .sp=0x25, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf988, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf988, .value=0xdd, .type=IO_READ},
        {.addr=0xf989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xfcd7, .a=0xcf, .x=0x65, .y=0x02, .sp=0x94, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xfcd7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfcd8, .a=0x02, .x=0x65, .y=0x02, .sp=0x94, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xfcd7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfcd7, .value=0xdd, .type=IO_READ},
        {.addr=0xfcd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x6bf6, .a=0x74, .x=0xc0, .y=0x78, .sp=0xfe, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6bf7, .a=0x78, .x=0xc0, .y=0x78, .sp=0xfe, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6bf6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6bf6, .value=0xdd, .type=IO_READ},
        {.addr=0x6bf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x02a4, .a=0xd5, .x=0xdd, .y=0xa4, .sp=0xfe, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x02a4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x02a5, .a=0xa4, .x=0xdd, .y=0xa4, .sp=0xfe, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x02a4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x02a4, .value=0xdd, .type=IO_READ},
        {.addr=0x02a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x5630, .a=0x8c, .x=0xcf, .y=0x59, .sp=0x7c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5630, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5631, .a=0x59, .x=0xcf, .y=0x59, .sp=0x7c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5630, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5630, .value=0xdd, .type=IO_READ},
        {.addr=0x5631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x7a9d, .a=0x60, .x=0x8b, .y=0xeb, .sp=0xaf, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7a9d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7a9e, .a=0xeb, .x=0x8b, .y=0xeb, .sp=0xaf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7a9d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7a9d, .value=0xdd, .type=IO_READ},
        {.addr=0x7a9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x9081, .a=0x09, .x=0x99, .y=0xc0, .sp=0xbe, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9081, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9082, .a=0xc0, .x=0x99, .y=0xc0, .sp=0xbe, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9081, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9081, .value=0xdd, .type=IO_READ},
        {.addr=0x9082, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x1b66, .a=0xcf, .x=0xd7, .y=0x7b, .sp=0x32, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1b66, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1b67, .a=0x7b, .x=0xd7, .y=0x7b, .sp=0x32, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1b66, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1b66, .value=0xdd, .type=IO_READ},
        {.addr=0x1b67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xb8f7, .a=0x03, .x=0x92, .y=0x45, .sp=0x38, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb8f8, .a=0x45, .x=0x92, .y=0x45, .sp=0x38, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb8f7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb8f7, .value=0xdd, .type=IO_READ},
        {.addr=0xb8f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xf054, .a=0x0d, .x=0xfb, .y=0x45, .sp=0x01, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf054, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf055, .a=0x45, .x=0xfb, .y=0x45, .sp=0x01, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf054, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf054, .value=0xdd, .type=IO_READ},
        {.addr=0xf055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x8715, .a=0x08, .x=0x1e, .y=0xc2, .sp=0x56, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8715, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8716, .a=0xc2, .x=0x1e, .y=0xc2, .sp=0x56, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8715, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8715, .value=0xdd, .type=IO_READ},
        {.addr=0x8716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4a9c, .a=0x98, .x=0x95, .y=0xe7, .sp=0xb4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4a9c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4a9d, .a=0xe7, .x=0x95, .y=0xe7, .sp=0xb4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4a9c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4a9c, .value=0xdd, .type=IO_READ},
        {.addr=0x4a9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xb571, .a=0xd1, .x=0xe6, .y=0x87, .sp=0x45, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb571, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb572, .a=0x87, .x=0xe6, .y=0x87, .sp=0x45, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb571, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb571, .value=0xdd, .type=IO_READ},
        {.addr=0xb572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x90d8, .a=0xaa, .x=0x7e, .y=0xb1, .sp=0xfb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x90d8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x90d9, .a=0xb1, .x=0x7e, .y=0xb1, .sp=0xfb, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x90d8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x90d8, .value=0xdd, .type=IO_READ},
        {.addr=0x90d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x209f, .a=0xdb, .x=0xec, .y=0x7b, .sp=0x1c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x209f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x20a0, .a=0x7b, .x=0xec, .y=0x7b, .sp=0x1c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x209f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x209f, .value=0xdd, .type=IO_READ},
        {.addr=0x20a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x986d, .a=0x8a, .x=0xbe, .y=0xcc, .sp=0x9c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x986d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x986e, .a=0xcc, .x=0xbe, .y=0xcc, .sp=0x9c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x986d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x986d, .value=0xdd, .type=IO_READ},
        {.addr=0x986e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x34c7, .a=0xca, .x=0xf3, .y=0xbb, .sp=0xc9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x34c7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x34c8, .a=0xbb, .x=0xf3, .y=0xbb, .sp=0xc9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x34c7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x34c7, .value=0xdd, .type=IO_READ},
        {.addr=0x34c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x5135, .a=0x71, .x=0xfa, .y=0x5e, .sp=0x20, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x5135, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5136, .a=0x5e, .x=0xfa, .y=0x5e, .sp=0x20, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5135, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5135, .value=0xdd, .type=IO_READ},
        {.addr=0x5136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xcdca, .a=0xed, .x=0x53, .y=0x2b, .sp=0x81, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xcdca, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcdcb, .a=0x2b, .x=0x53, .y=0x2b, .sp=0x81, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xcdca, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcdca, .value=0xdd, .type=IO_READ},
        {.addr=0xcdcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x5e67, .a=0x5f, .x=0xde, .y=0x6b, .sp=0xa9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x5e67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5e68, .a=0x6b, .x=0xde, .y=0x6b, .sp=0xa9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5e67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5e67, .value=0xdd, .type=IO_READ},
        {.addr=0x5e68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xcd3c, .a=0x51, .x=0xca, .y=0x58, .sp=0x0c, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xcd3c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcd3d, .a=0x58, .x=0xca, .y=0x58, .sp=0x0c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcd3c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcd3c, .value=0xdd, .type=IO_READ},
        {.addr=0xcd3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x4c2d, .a=0xa3, .x=0xbc, .y=0x69, .sp=0x0b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c2e, .a=0x69, .x=0xbc, .y=0x69, .sp=0x0b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4c2d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c2d, .value=0xdd, .type=IO_READ},
        {.addr=0x4c2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x1f1b, .a=0xd9, .x=0xa3, .y=0x55, .sp=0xf2, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1f1b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1f1c, .a=0x55, .x=0xa3, .y=0x55, .sp=0xf2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1f1b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1f1b, .value=0xdd, .type=IO_READ},
        {.addr=0x1f1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x4b8f, .a=0x7a, .x=0x0d, .y=0x51, .sp=0x44, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4b8f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4b90, .a=0x51, .x=0x0d, .y=0x51, .sp=0x44, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4b8f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4b8f, .value=0xdd, .type=IO_READ},
        {.addr=0x4b90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x0383, .a=0xcf, .x=0x9f, .y=0xe6, .sp=0xb5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0383, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0384, .a=0xe6, .x=0x9f, .y=0xe6, .sp=0xb5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0383, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0383, .value=0xdd, .type=IO_READ},
        {.addr=0x0384, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc466, .a=0xf1, .x=0x82, .y=0x20, .sp=0x47, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc466, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc467, .a=0x20, .x=0x82, .y=0x20, .sp=0x47, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc466, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc466, .value=0xdd, .type=IO_READ},
        {.addr=0xc467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x7382, .a=0x8e, .x=0x3e, .y=0x8f, .sp=0x6b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7382, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7383, .a=0x8f, .x=0x3e, .y=0x8f, .sp=0x6b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7382, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7382, .value=0xdd, .type=IO_READ},
        {.addr=0x7383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x73be, .a=0x10, .x=0x24, .y=0xa9, .sp=0xb3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x73be, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x73bf, .a=0xa9, .x=0x24, .y=0xa9, .sp=0xb3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x73be, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x73be, .value=0xdd, .type=IO_READ},
        {.addr=0x73bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x6f3b, .a=0xa8, .x=0x8c, .y=0x4f, .sp=0x09, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6f3b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6f3c, .a=0x4f, .x=0x8c, .y=0x4f, .sp=0x09, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6f3b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6f3b, .value=0xdd, .type=IO_READ},
        {.addr=0x6f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x1b30, .a=0xda, .x=0xcf, .y=0x6b, .sp=0x92, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1b30, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1b31, .a=0x6b, .x=0xcf, .y=0x6b, .sp=0x92, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1b30, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1b30, .value=0xdd, .type=IO_READ},
        {.addr=0x1b31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x997d, .a=0x58, .x=0xc0, .y=0x11, .sp=0x7c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x997d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x997e, .a=0x11, .x=0xc0, .y=0x11, .sp=0x7c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x997d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x997d, .value=0xdd, .type=IO_READ},
        {.addr=0x997e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xd607, .a=0xba, .x=0xfb, .y=0xf3, .sp=0x9a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd607, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd608, .a=0xf3, .x=0xfb, .y=0xf3, .sp=0x9a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd607, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd607, .value=0xdd, .type=IO_READ},
        {.addr=0xd608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xce84, .a=0xc0, .x=0xd6, .y=0xf2, .sp=0x3d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xce84, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xce85, .a=0xf2, .x=0xd6, .y=0xf2, .sp=0x3d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xce84, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xce84, .value=0xdd, .type=IO_READ},
        {.addr=0xce85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x2209, .a=0x87, .x=0x6b, .y=0x3e, .sp=0xd6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2209, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x220a, .a=0x3e, .x=0x6b, .y=0x3e, .sp=0xd6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2209, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2209, .value=0xdd, .type=IO_READ},
        {.addr=0x220a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x429c, .a=0x59, .x=0xcd, .y=0xd9, .sp=0x61, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x429c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x429d, .a=0xd9, .x=0xcd, .y=0xd9, .sp=0x61, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x429c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x429c, .value=0xdd, .type=IO_READ},
        {.addr=0x429d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x6aae, .a=0x32, .x=0xa7, .y=0xb8, .sp=0x17, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6aae, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6aaf, .a=0xb8, .x=0xa7, .y=0xb8, .sp=0x17, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6aae, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6aae, .value=0xdd, .type=IO_READ},
        {.addr=0x6aaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x9e95, .a=0xb5, .x=0xad, .y=0x72, .sp=0x34, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9e95, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9e96, .a=0x72, .x=0xad, .y=0x72, .sp=0x34, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9e95, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9e95, .value=0xdd, .type=IO_READ},
        {.addr=0x9e96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x7787, .a=0x5a, .x=0xd6, .y=0xce, .sp=0x49, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7787, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7788, .a=0xce, .x=0xd6, .y=0xce, .sp=0x49, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7787, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7787, .value=0xdd, .type=IO_READ},
        {.addr=0x7788, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xe960, .a=0x22, .x=0x2c, .y=0xfb, .sp=0x58, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe960, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe961, .a=0xfb, .x=0x2c, .y=0xfb, .sp=0x58, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe960, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe960, .value=0xdd, .type=IO_READ},
        {.addr=0xe961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x4814, .a=0x0d, .x=0xc4, .y=0x9f, .sp=0xf5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4814, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4815, .a=0x9f, .x=0xc4, .y=0x9f, .sp=0xf5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4814, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4814, .value=0xdd, .type=IO_READ},
        {.addr=0x4815, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xa6e6, .a=0xe2, .x=0xf8, .y=0x5e, .sp=0x44, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xa6e6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa6e7, .a=0x5e, .x=0xf8, .y=0x5e, .sp=0x44, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa6e6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa6e6, .value=0xdd, .type=IO_READ},
        {.addr=0xa6e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x853d, .a=0xfb, .x=0x4a, .y=0xaa, .sp=0x9d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x853d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x853e, .a=0xaa, .x=0x4a, .y=0xaa, .sp=0x9d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x853d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x853d, .value=0xdd, .type=IO_READ},
        {.addr=0x853e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x7738, .a=0xbf, .x=0x46, .y=0xf0, .sp=0x01, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7738, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7739, .a=0xf0, .x=0x46, .y=0xf0, .sp=0x01, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7738, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7738, .value=0xdd, .type=IO_READ},
        {.addr=0x7739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x96f1, .a=0xf0, .x=0x37, .y=0x8e, .sp=0xbe, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x96f1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x96f2, .a=0x8e, .x=0x37, .y=0x8e, .sp=0xbe, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x96f1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x96f1, .value=0xdd, .type=IO_READ},
        {.addr=0x96f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xe68e, .a=0x78, .x=0x33, .y=0x45, .sp=0xc4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xe68e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe68f, .a=0x45, .x=0x33, .y=0x45, .sp=0xc4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe68e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe68e, .value=0xdd, .type=IO_READ},
        {.addr=0xe68f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x49bb, .a=0x00, .x=0xf2, .y=0x2b, .sp=0x5a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x49bb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x49bc, .a=0x2b, .x=0xf2, .y=0x2b, .sp=0x5a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x49bb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x49bb, .value=0xdd, .type=IO_READ},
        {.addr=0x49bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x6ae8, .a=0x58, .x=0x64, .y=0x7d, .sp=0xd9, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6ae9, .a=0x7d, .x=0x64, .y=0x7d, .sp=0xd9, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6ae8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6ae8, .value=0xdd, .type=IO_READ},
        {.addr=0x6ae9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xe669, .a=0x15, .x=0x23, .y=0x9d, .sp=0xb2, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe669, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe66a, .a=0x9d, .x=0x23, .y=0x9d, .sp=0xb2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe669, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe669, .value=0xdd, .type=IO_READ},
        {.addr=0xe66a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x139f, .a=0xce, .x=0xd4, .y=0xd4, .sp=0x40, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x139f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x13a0, .a=0xd4, .x=0xd4, .y=0xd4, .sp=0x40, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x139f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x139f, .value=0xdd, .type=IO_READ},
        {.addr=0x13a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x0ee0, .a=0x88, .x=0x97, .y=0xf8, .sp=0xc9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0ee0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0ee1, .a=0xf8, .x=0x97, .y=0xf8, .sp=0xc9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0ee0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0ee0, .value=0xdd, .type=IO_READ},
        {.addr=0x0ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc17a, .a=0x70, .x=0xc3, .y=0x39, .sp=0xef, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xc17a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc17b, .a=0x39, .x=0xc3, .y=0x39, .sp=0xef, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc17a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc17a, .value=0xdd, .type=IO_READ},
        {.addr=0xc17b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x4b36, .a=0xeb, .x=0x91, .y=0x10, .sp=0x05, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4b36, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4b37, .a=0x10, .x=0x91, .y=0x10, .sp=0x05, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4b36, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4b36, .value=0xdd, .type=IO_READ},
        {.addr=0x4b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x9de5, .a=0xb2, .x=0x1e, .y=0x72, .sp=0x18, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9de5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9de6, .a=0x72, .x=0x1e, .y=0x72, .sp=0x18, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9de5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9de5, .value=0xdd, .type=IO_READ},
        {.addr=0x9de6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x23dd, .a=0x8c, .x=0x89, .y=0xb3, .sp=0x7a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x23dd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x23de, .a=0xb3, .x=0x89, .y=0xb3, .sp=0x7a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x23dd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x23dd, .value=0xdd, .type=IO_READ},
        {.addr=0x23de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x9b25, .a=0xb7, .x=0x02, .y=0x66, .sp=0xf8, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9b25, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9b26, .a=0x66, .x=0x02, .y=0x66, .sp=0xf8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9b25, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9b25, .value=0xdd, .type=IO_READ},
        {.addr=0x9b26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x411a, .a=0xfe, .x=0x97, .y=0xb2, .sp=0x00, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x411a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x411b, .a=0xb2, .x=0x97, .y=0xb2, .sp=0x00, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x411a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x411a, .value=0xdd, .type=IO_READ},
        {.addr=0x411b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x1347, .a=0x05, .x=0xf9, .y=0xac, .sp=0xe0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1347, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1348, .a=0xac, .x=0xf9, .y=0xac, .sp=0xe0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1347, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1347, .value=0xdd, .type=IO_READ},
        {.addr=0x1348, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x5b2a, .a=0x49, .x=0x44, .y=0x19, .sp=0x93, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5b2b, .a=0x19, .x=0x44, .y=0x19, .sp=0x93, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5b2a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5b2a, .value=0xdd, .type=IO_READ},
        {.addr=0x5b2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x8f78, .a=0xaa, .x=0xef, .y=0xb4, .sp=0xe9, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8f78, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8f79, .a=0xb4, .x=0xef, .y=0xb4, .sp=0xe9, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8f78, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8f78, .value=0xdd, .type=IO_READ},
        {.addr=0x8f79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x39af, .a=0x46, .x=0xbb, .y=0xdb, .sp=0xe2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x39af, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x39b0, .a=0xdb, .x=0xbb, .y=0xdb, .sp=0xe2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x39af, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x39af, .value=0xdd, .type=IO_READ},
        {.addr=0x39b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x0256, .a=0xaf, .x=0x6f, .y=0x13, .sp=0xdc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0256, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0257, .a=0x13, .x=0x6f, .y=0x13, .sp=0xdc, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0256, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0256, .value=0xdd, .type=IO_READ},
        {.addr=0x0257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x1986, .a=0x5c, .x=0xd1, .y=0x7c, .sp=0x41, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x1986, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1987, .a=0x7c, .x=0xd1, .y=0x7c, .sp=0x41, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1986, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1986, .value=0xdd, .type=IO_READ},
        {.addr=0x1987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x3315, .a=0x97, .x=0xf0, .y=0x5a, .sp=0x2a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3315, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3316, .a=0x5a, .x=0xf0, .y=0x5a, .sp=0x2a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3315, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3315, .value=0xdd, .type=IO_READ},
        {.addr=0x3316, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x0fe2, .a=0x5d, .x=0x7e, .y=0xff, .sp=0x38, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0fe3, .a=0xff, .x=0x7e, .y=0xff, .sp=0x38, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0fe2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0fe2, .value=0xdd, .type=IO_READ},
        {.addr=0x0fe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x0b42, .a=0x71, .x=0x4b, .y=0x94, .sp=0x20, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0b42, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0b43, .a=0x94, .x=0x4b, .y=0x94, .sp=0x20, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0b42, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0b42, .value=0xdd, .type=IO_READ},
        {.addr=0x0b43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xdd48, .a=0x9f, .x=0xbf, .y=0xe2, .sp=0xe2, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xdd48, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdd49, .a=0xe2, .x=0xbf, .y=0xe2, .sp=0xe2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xdd48, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdd48, .value=0xdd, .type=IO_READ},
        {.addr=0xdd49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x298d, .a=0xbf, .x=0x5f, .y=0x28, .sp=0x34, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x298d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x298e, .a=0x28, .x=0x5f, .y=0x28, .sp=0x34, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x298d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x298d, .value=0xdd, .type=IO_READ},
        {.addr=0x298e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xe101, .a=0xea, .x=0x1c, .y=0xe7, .sp=0xdc, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe101, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe102, .a=0xe7, .x=0x1c, .y=0xe7, .sp=0xdc, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe101, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe101, .value=0xdd, .type=IO_READ},
        {.addr=0xe102, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x1a0a, .a=0x03, .x=0x5c, .y=0x75, .sp=0x9f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1a0b, .a=0x75, .x=0x5c, .y=0x75, .sp=0x9f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1a0a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1a0a, .value=0xdd, .type=IO_READ},
        {.addr=0x1a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x6013, .a=0xd9, .x=0x09, .y=0x85, .sp=0x26, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x6013, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6014, .a=0x85, .x=0x09, .y=0x85, .sp=0x26, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6013, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6013, .value=0xdd, .type=IO_READ},
        {.addr=0x6014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xea09, .a=0xaa, .x=0x54, .y=0x39, .sp=0x47, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xea09, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea0a, .a=0x39, .x=0x54, .y=0x39, .sp=0x47, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xea09, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea09, .value=0xdd, .type=IO_READ},
        {.addr=0xea0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xc6ed, .a=0x91, .x=0xcb, .y=0x1a, .sp=0xc5, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ed, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc6ee, .a=0x1a, .x=0xcb, .y=0x1a, .sp=0xc5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc6ed, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc6ed, .value=0xdd, .type=IO_READ},
        {.addr=0xc6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xf8c2, .a=0x19, .x=0x77, .y=0xda, .sp=0x3d, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf8c3, .a=0xda, .x=0x77, .y=0xda, .sp=0x3d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf8c2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf8c2, .value=0xdd, .type=IO_READ},
        {.addr=0xf8c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0200) {
    const struct CPU_State initial_cpu = {.pc=0x1f7c, .a=0x05, .x=0xd9, .y=0xa8, .sp=0x41, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1f7c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1f7d, .a=0xa8, .x=0xd9, .y=0xa8, .sp=0x41, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1f7c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1f7c, .value=0xdd, .type=IO_READ},
        {.addr=0x1f7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0201) {
    const struct CPU_State initial_cpu = {.pc=0x55db, .a=0xf3, .x=0x62, .y=0xaf, .sp=0xab, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x55db, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x55dc, .a=0xaf, .x=0x62, .y=0xaf, .sp=0xab, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x55db, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x55db, .value=0xdd, .type=IO_READ},
        {.addr=0x55dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0202) {
    const struct CPU_State initial_cpu = {.pc=0x4b47, .a=0xe0, .x=0x99, .y=0x47, .sp=0x2e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4b47, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4b48, .a=0x47, .x=0x99, .y=0x47, .sp=0x2e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4b47, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4b47, .value=0xdd, .type=IO_READ},
        {.addr=0x4b48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0203) {
    const struct CPU_State initial_cpu = {.pc=0x6be0, .a=0x3d, .x=0xb7, .y=0xa7, .sp=0x5e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6be0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6be1, .a=0xa7, .x=0xb7, .y=0xa7, .sp=0x5e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6be0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6be0, .value=0xdd, .type=IO_READ},
        {.addr=0x6be1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0204) {
    const struct CPU_State initial_cpu = {.pc=0x7f89, .a=0x4d, .x=0xdd, .y=0xc7, .sp=0x69, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7f89, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7f8a, .a=0xc7, .x=0xdd, .y=0xc7, .sp=0x69, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7f89, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7f89, .value=0xdd, .type=IO_READ},
        {.addr=0x7f8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0205) {
    const struct CPU_State initial_cpu = {.pc=0x8365, .a=0xfd, .x=0xcb, .y=0xea, .sp=0x45, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8365, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8366, .a=0xea, .x=0xcb, .y=0xea, .sp=0x45, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8365, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8365, .value=0xdd, .type=IO_READ},
        {.addr=0x8366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0206) {
    const struct CPU_State initial_cpu = {.pc=0x255f, .a=0xe8, .x=0x92, .y=0x17, .sp=0x23, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x255f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2560, .a=0x17, .x=0x92, .y=0x17, .sp=0x23, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x255f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x255f, .value=0xdd, .type=IO_READ},
        {.addr=0x2560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4cf3, .a=0xac, .x=0x6f, .y=0xa6, .sp=0x30, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4cf4, .a=0xa6, .x=0x6f, .y=0xa6, .sp=0x30, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4cf3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4cf3, .value=0xdd, .type=IO_READ},
        {.addr=0x4cf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0208) {
    const struct CPU_State initial_cpu = {.pc=0x25fd, .a=0xb5, .x=0x12, .y=0xa6, .sp=0xce, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x25fd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x25fe, .a=0xa6, .x=0x12, .y=0xa6, .sp=0xce, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x25fd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x25fd, .value=0xdd, .type=IO_READ},
        {.addr=0x25fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0209) {
    const struct CPU_State initial_cpu = {.pc=0x5097, .a=0xcd, .x=0xab, .y=0xa0, .sp=0x5d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5097, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5098, .a=0xa0, .x=0xab, .y=0xa0, .sp=0x5d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5097, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5097, .value=0xdd, .type=IO_READ},
        {.addr=0x5098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_020A) {
    const struct CPU_State initial_cpu = {.pc=0x17c6, .a=0x7e, .x=0x35, .y=0x3a, .sp=0x04, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x17c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x17c7, .a=0x3a, .x=0x35, .y=0x3a, .sp=0x04, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x17c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x17c6, .value=0xdd, .type=IO_READ},
        {.addr=0x17c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_020B) {
    const struct CPU_State initial_cpu = {.pc=0xabfe, .a=0xa8, .x=0x5a, .y=0xba, .sp=0x83, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xabfe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xabff, .a=0xba, .x=0x5a, .y=0xba, .sp=0x83, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xabfe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xabfe, .value=0xdd, .type=IO_READ},
        {.addr=0xabff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_020C) {
    const struct CPU_State initial_cpu = {.pc=0x5ace, .a=0xb4, .x=0x16, .y=0x81, .sp=0xb0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x5ace, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5acf, .a=0x81, .x=0x16, .y=0x81, .sp=0xb0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5ace, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5ace, .value=0xdd, .type=IO_READ},
        {.addr=0x5acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_020D) {
    const struct CPU_State initial_cpu = {.pc=0xc37a, .a=0x89, .x=0x2e, .y=0x75, .sp=0xd6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xc37a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc37b, .a=0x75, .x=0x2e, .y=0x75, .sp=0xd6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc37a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc37a, .value=0xdd, .type=IO_READ},
        {.addr=0xc37b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_020E) {
    const struct CPU_State initial_cpu = {.pc=0x9a9d, .a=0x85, .x=0x47, .y=0x05, .sp=0x66, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a9d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9a9e, .a=0x05, .x=0x47, .y=0x05, .sp=0x66, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9a9d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9a9d, .value=0xdd, .type=IO_READ},
        {.addr=0x9a9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_020F) {
    const struct CPU_State initial_cpu = {.pc=0xff08, .a=0x65, .x=0x70, .y=0x96, .sp=0x50, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xff08, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xff09, .a=0x96, .x=0x70, .y=0x96, .sp=0x50, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xff08, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xff08, .value=0xdd, .type=IO_READ},
        {.addr=0xff09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0210) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0xe4, .x=0x9c, .y=0x78, .sp=0x5c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x9497, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9498, .a=0x78, .x=0x9c, .y=0x78, .sp=0x5c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9497, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0xdd, .type=IO_READ},
        {.addr=0x9498, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0211) {
    const struct CPU_State initial_cpu = {.pc=0x6f43, .a=0x29, .x=0x87, .y=0x46, .sp=0x8c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f43, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6f44, .a=0x46, .x=0x87, .y=0x46, .sp=0x8c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6f43, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6f43, .value=0xdd, .type=IO_READ},
        {.addr=0x6f44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0212) {
    const struct CPU_State initial_cpu = {.pc=0x7300, .a=0xe2, .x=0xed, .y=0x8e, .sp=0xbe, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x7300, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7301, .a=0x8e, .x=0xed, .y=0x8e, .sp=0xbe, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7300, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7300, .value=0xdd, .type=IO_READ},
        {.addr=0x7301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0213) {
    const struct CPU_State initial_cpu = {.pc=0x1889, .a=0x6b, .x=0xc6, .y=0x43, .sp=0xf9, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x1889, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x188a, .a=0x43, .x=0xc6, .y=0x43, .sp=0xf9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1889, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1889, .value=0xdd, .type=IO_READ},
        {.addr=0x188a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8f2a, .a=0x63, .x=0xe5, .y=0xc3, .sp=0x50, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8f2a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8f2b, .a=0xc3, .x=0xe5, .y=0xc3, .sp=0x50, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8f2a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8f2a, .value=0xdd, .type=IO_READ},
        {.addr=0x8f2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4f4b, .a=0xd8, .x=0x98, .y=0xfe, .sp=0x31, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4f4b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4f4c, .a=0xfe, .x=0x98, .y=0xfe, .sp=0x31, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4f4b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4f4b, .value=0xdd, .type=IO_READ},
        {.addr=0x4f4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0216) {
    const struct CPU_State initial_cpu = {.pc=0x8bd8, .a=0xda, .x=0x4a, .y=0xfc, .sp=0x04, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8bd9, .a=0xfc, .x=0x4a, .y=0xfc, .sp=0x04, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8bd8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8bd8, .value=0xdd, .type=IO_READ},
        {.addr=0x8bd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0217) {
    const struct CPU_State initial_cpu = {.pc=0x8bef, .a=0x97, .x=0x1a, .y=0x60, .sp=0x1a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8bef, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8bf0, .a=0x60, .x=0x1a, .y=0x60, .sp=0x1a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8bef, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8bef, .value=0xdd, .type=IO_READ},
        {.addr=0x8bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0218) {
    const struct CPU_State initial_cpu = {.pc=0x6883, .a=0x7f, .x=0xb3, .y=0x47, .sp=0x8b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6883, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6884, .a=0x47, .x=0xb3, .y=0x47, .sp=0x8b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6883, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6883, .value=0xdd, .type=IO_READ},
        {.addr=0x6884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0219) {
    const struct CPU_State initial_cpu = {.pc=0x92b6, .a=0xbd, .x=0xd7, .y=0xa3, .sp=0xa9, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x92b6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x92b7, .a=0xa3, .x=0xd7, .y=0xa3, .sp=0xa9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x92b6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x92b6, .value=0xdd, .type=IO_READ},
        {.addr=0x92b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_021A) {
    const struct CPU_State initial_cpu = {.pc=0x2083, .a=0xe3, .x=0x43, .y=0xaa, .sp=0x79, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2083, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2084, .a=0xaa, .x=0x43, .y=0xaa, .sp=0x79, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2083, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2083, .value=0xdd, .type=IO_READ},
        {.addr=0x2084, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_021B) {
    const struct CPU_State initial_cpu = {.pc=0x0358, .a=0xfe, .x=0x71, .y=0xac, .sp=0x00, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0358, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0359, .a=0xac, .x=0x71, .y=0xac, .sp=0x00, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0358, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0358, .value=0xdd, .type=IO_READ},
        {.addr=0x0359, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_021C) {
    const struct CPU_State initial_cpu = {.pc=0xe03b, .a=0xc0, .x=0x47, .y=0xaf, .sp=0x3c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe03b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe03c, .a=0xaf, .x=0x47, .y=0xaf, .sp=0x3c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe03b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe03b, .value=0xdd, .type=IO_READ},
        {.addr=0xe03c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_021D) {
    const struct CPU_State initial_cpu = {.pc=0x38aa, .a=0x25, .x=0xca, .y=0xef, .sp=0xc7, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x38aa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x38ab, .a=0xef, .x=0xca, .y=0xef, .sp=0xc7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x38aa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x38aa, .value=0xdd, .type=IO_READ},
        {.addr=0x38ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_021E) {
    const struct CPU_State initial_cpu = {.pc=0xa74d, .a=0x04, .x=0xc0, .y=0xb6, .sp=0x8e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa74d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa74e, .a=0xb6, .x=0xc0, .y=0xb6, .sp=0x8e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa74d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa74d, .value=0xdd, .type=IO_READ},
        {.addr=0xa74e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd3d0, .a=0x3a, .x=0xed, .y=0x62, .sp=0xa5, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd3d1, .a=0x62, .x=0xed, .y=0x62, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd3d0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd3d0, .value=0xdd, .type=IO_READ},
        {.addr=0xd3d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0220) {
    const struct CPU_State initial_cpu = {.pc=0x11a1, .a=0x6a, .x=0x6e, .y=0x29, .sp=0x9e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x11a1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x11a2, .a=0x29, .x=0x6e, .y=0x29, .sp=0x9e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x11a1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x11a1, .value=0xdd, .type=IO_READ},
        {.addr=0x11a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0221) {
    const struct CPU_State initial_cpu = {.pc=0x8859, .a=0x0e, .x=0xce, .y=0x5d, .sp=0x7c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x8859, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x885a, .a=0x5d, .x=0xce, .y=0x5d, .sp=0x7c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8859, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8859, .value=0xdd, .type=IO_READ},
        {.addr=0x885a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0222) {
    const struct CPU_State initial_cpu = {.pc=0x27a4, .a=0xbd, .x=0xce, .y=0x04, .sp=0x8f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x27a4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x27a5, .a=0x04, .x=0xce, .y=0x04, .sp=0x8f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x27a4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x27a4, .value=0xdd, .type=IO_READ},
        {.addr=0x27a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0223) {
    const struct CPU_State initial_cpu = {.pc=0x4710, .a=0x72, .x=0xda, .y=0x39, .sp=0x00, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4710, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4711, .a=0x39, .x=0xda, .y=0x39, .sp=0x00, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4710, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4710, .value=0xdd, .type=IO_READ},
        {.addr=0x4711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0224) {
    const struct CPU_State initial_cpu = {.pc=0xb883, .a=0xf6, .x=0xa9, .y=0x1c, .sp=0x4d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb883, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb884, .a=0x1c, .x=0xa9, .y=0x1c, .sp=0x4d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb883, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb883, .value=0xdd, .type=IO_READ},
        {.addr=0xb884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0225) {
    const struct CPU_State initial_cpu = {.pc=0x9a36, .a=0xa8, .x=0x25, .y=0x97, .sp=0x15, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9a36, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9a37, .a=0x97, .x=0x25, .y=0x97, .sp=0x15, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9a36, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9a36, .value=0xdd, .type=IO_READ},
        {.addr=0x9a37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0226) {
    const struct CPU_State initial_cpu = {.pc=0x56ef, .a=0x36, .x=0x0e, .y=0x5e, .sp=0x29, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x56ef, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x56f0, .a=0x5e, .x=0x0e, .y=0x5e, .sp=0x29, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x56ef, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x56ef, .value=0xdd, .type=IO_READ},
        {.addr=0x56f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0227) {
    const struct CPU_State initial_cpu = {.pc=0xee4e, .a=0xda, .x=0x34, .y=0x78, .sp=0x19, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xee4e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xee4f, .a=0x78, .x=0x34, .y=0x78, .sp=0x19, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xee4e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xee4e, .value=0xdd, .type=IO_READ},
        {.addr=0xee4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0228) {
    const struct CPU_State initial_cpu = {.pc=0x7fbe, .a=0x4b, .x=0x3a, .y=0xd7, .sp=0xec, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7fbe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7fbf, .a=0xd7, .x=0x3a, .y=0xd7, .sp=0xec, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7fbe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7fbe, .value=0xdd, .type=IO_READ},
        {.addr=0x7fbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0229) {
    const struct CPU_State initial_cpu = {.pc=0x0c2e, .a=0xbc, .x=0x45, .y=0x10, .sp=0x59, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0c2e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0c2f, .a=0x10, .x=0x45, .y=0x10, .sp=0x59, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0c2e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0c2e, .value=0xdd, .type=IO_READ},
        {.addr=0x0c2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_022A) {
    const struct CPU_State initial_cpu = {.pc=0x4b6e, .a=0xa0, .x=0x58, .y=0x3a, .sp=0x0d, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4b6e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4b6f, .a=0x3a, .x=0x58, .y=0x3a, .sp=0x0d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4b6e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4b6e, .value=0xdd, .type=IO_READ},
        {.addr=0x4b6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_022B) {
    const struct CPU_State initial_cpu = {.pc=0xb9dc, .a=0x92, .x=0xc0, .y=0x61, .sp=0x57, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xb9dc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb9dd, .a=0x61, .x=0xc0, .y=0x61, .sp=0x57, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb9dc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb9dc, .value=0xdd, .type=IO_READ},
        {.addr=0xb9dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_022C) {
    const struct CPU_State initial_cpu = {.pc=0x8a52, .a=0xa9, .x=0x7b, .y=0x71, .sp=0x57, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8a52, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8a53, .a=0x71, .x=0x7b, .y=0x71, .sp=0x57, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8a52, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8a52, .value=0xdd, .type=IO_READ},
        {.addr=0x8a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8987, .a=0x06, .x=0x9b, .y=0x6c, .sp=0xdf, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x8987, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8988, .a=0x6c, .x=0x9b, .y=0x6c, .sp=0xdf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8987, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8987, .value=0xdd, .type=IO_READ},
        {.addr=0x8988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_022E) {
    const struct CPU_State initial_cpu = {.pc=0x508d, .a=0x6b, .x=0x7a, .y=0x38, .sp=0x19, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x508d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x508e, .a=0x38, .x=0x7a, .y=0x38, .sp=0x19, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x508d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x508d, .value=0xdd, .type=IO_READ},
        {.addr=0x508e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_022F) {
    const struct CPU_State initial_cpu = {.pc=0x8c4a, .a=0xf0, .x=0x99, .y=0x07, .sp=0x63, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8c4a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8c4b, .a=0x07, .x=0x99, .y=0x07, .sp=0x63, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8c4a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8c4a, .value=0xdd, .type=IO_READ},
        {.addr=0x8c4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0230) {
    const struct CPU_State initial_cpu = {.pc=0xe098, .a=0xdd, .x=0xfc, .y=0xdf, .sp=0x6e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xe098, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe099, .a=0xdf, .x=0xfc, .y=0xdf, .sp=0x6e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe098, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe098, .value=0xdd, .type=IO_READ},
        {.addr=0xe099, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0231) {
    const struct CPU_State initial_cpu = {.pc=0x40e1, .a=0xd5, .x=0x78, .y=0x3d, .sp=0x0d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x40e1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x40e2, .a=0x3d, .x=0x78, .y=0x3d, .sp=0x0d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x40e1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x40e1, .value=0xdd, .type=IO_READ},
        {.addr=0x40e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0232) {
    const struct CPU_State initial_cpu = {.pc=0x94e0, .a=0x98, .x=0x6a, .y=0x24, .sp=0xb3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x94e0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x94e1, .a=0x24, .x=0x6a, .y=0x24, .sp=0xb3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x94e0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x94e0, .value=0xdd, .type=IO_READ},
        {.addr=0x94e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0233) {
    const struct CPU_State initial_cpu = {.pc=0x421a, .a=0x05, .x=0xa5, .y=0xad, .sp=0x23, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x421a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x421b, .a=0xad, .x=0xa5, .y=0xad, .sp=0x23, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x421a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x421a, .value=0xdd, .type=IO_READ},
        {.addr=0x421b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0234) {
    const struct CPU_State initial_cpu = {.pc=0xa4b0, .a=0xee, .x=0x35, .y=0x49, .sp=0xeb, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa4b1, .a=0x49, .x=0x35, .y=0x49, .sp=0xeb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa4b0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa4b0, .value=0xdd, .type=IO_READ},
        {.addr=0xa4b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0235) {
    const struct CPU_State initial_cpu = {.pc=0x3628, .a=0x26, .x=0xbb, .y=0x62, .sp=0x54, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3628, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3629, .a=0x62, .x=0xbb, .y=0x62, .sp=0x54, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3628, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3628, .value=0xdd, .type=IO_READ},
        {.addr=0x3629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0236) {
    const struct CPU_State initial_cpu = {.pc=0xec8a, .a=0x17, .x=0xff, .y=0x2e, .sp=0xfc, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xec8a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xec8b, .a=0x2e, .x=0xff, .y=0x2e, .sp=0xfc, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xec8a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xec8a, .value=0xdd, .type=IO_READ},
        {.addr=0xec8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0237) {
    const struct CPU_State initial_cpu = {.pc=0x0353, .a=0x4c, .x=0xc3, .y=0x64, .sp=0x19, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0353, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0354, .a=0x64, .x=0xc3, .y=0x64, .sp=0x19, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0353, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0353, .value=0xdd, .type=IO_READ},
        {.addr=0x0354, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0238) {
    const struct CPU_State initial_cpu = {.pc=0x471c, .a=0x78, .x=0x90, .y=0x8c, .sp=0xd8, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x471c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x471d, .a=0x8c, .x=0x90, .y=0x8c, .sp=0xd8, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x471c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x471c, .value=0xdd, .type=IO_READ},
        {.addr=0x471d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd698, .a=0x74, .x=0x52, .y=0xfe, .sp=0xa4, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd698, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd699, .a=0xfe, .x=0x52, .y=0xfe, .sp=0xa4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd698, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd698, .value=0xdd, .type=IO_READ},
        {.addr=0xd699, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_023A) {
    const struct CPU_State initial_cpu = {.pc=0xc6ce, .a=0x9c, .x=0x7c, .y=0xaa, .sp=0x0a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ce, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc6cf, .a=0xaa, .x=0x7c, .y=0xaa, .sp=0x0a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc6ce, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc6ce, .value=0xdd, .type=IO_READ},
        {.addr=0xc6cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_023B) {
    const struct CPU_State initial_cpu = {.pc=0x3e82, .a=0xbc, .x=0x82, .y=0xec, .sp=0x22, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x3e82, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3e83, .a=0xec, .x=0x82, .y=0xec, .sp=0x22, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3e82, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3e82, .value=0xdd, .type=IO_READ},
        {.addr=0x3e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_023C) {
    const struct CPU_State initial_cpu = {.pc=0x93a0, .a=0xa6, .x=0xf3, .y=0x69, .sp=0x57, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x93a0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x93a1, .a=0x69, .x=0xf3, .y=0x69, .sp=0x57, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x93a0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x93a0, .value=0xdd, .type=IO_READ},
        {.addr=0x93a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_023D) {
    const struct CPU_State initial_cpu = {.pc=0x9894, .a=0xce, .x=0xb9, .y=0x10, .sp=0x99, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9894, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9895, .a=0x10, .x=0xb9, .y=0x10, .sp=0x99, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9894, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9894, .value=0xdd, .type=IO_READ},
        {.addr=0x9895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8d17, .a=0x75, .x=0x5a, .y=0xc3, .sp=0x67, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8d17, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8d18, .a=0xc3, .x=0x5a, .y=0xc3, .sp=0x67, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8d17, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8d17, .value=0xdd, .type=IO_READ},
        {.addr=0x8d18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_023F) {
    const struct CPU_State initial_cpu = {.pc=0x67e6, .a=0x26, .x=0xa9, .y=0x6e, .sp=0x1a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x67e6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x67e7, .a=0x6e, .x=0xa9, .y=0x6e, .sp=0x1a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x67e6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x67e6, .value=0xdd, .type=IO_READ},
        {.addr=0x67e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0240) {
    const struct CPU_State initial_cpu = {.pc=0x53d3, .a=0x64, .x=0x10, .y=0x70, .sp=0xc4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x53d3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x53d4, .a=0x70, .x=0x10, .y=0x70, .sp=0xc4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x53d3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x53d3, .value=0xdd, .type=IO_READ},
        {.addr=0x53d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0241) {
    const struct CPU_State initial_cpu = {.pc=0x37a1, .a=0x4c, .x=0xf1, .y=0x7d, .sp=0xf6, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x37a1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x37a2, .a=0x7d, .x=0xf1, .y=0x7d, .sp=0xf6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x37a1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x37a1, .value=0xdd, .type=IO_READ},
        {.addr=0x37a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0242) {
    const struct CPU_State initial_cpu = {.pc=0xa4f1, .a=0xe1, .x=0x00, .y=0x66, .sp=0x81, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa4f2, .a=0x66, .x=0x00, .y=0x66, .sp=0x81, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa4f1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa4f1, .value=0xdd, .type=IO_READ},
        {.addr=0xa4f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0243) {
    const struct CPU_State initial_cpu = {.pc=0xff6d, .a=0x94, .x=0xbc, .y=0x9c, .sp=0x41, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xff6d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xff6e, .a=0x9c, .x=0xbc, .y=0x9c, .sp=0x41, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xff6d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xff6d, .value=0xdd, .type=IO_READ},
        {.addr=0xff6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0244) {
    const struct CPU_State initial_cpu = {.pc=0xde93, .a=0x92, .x=0x18, .y=0xd2, .sp=0x72, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xde93, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xde94, .a=0xd2, .x=0x18, .y=0xd2, .sp=0x72, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xde93, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xde93, .value=0xdd, .type=IO_READ},
        {.addr=0xde94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0245) {
    const struct CPU_State initial_cpu = {.pc=0x031e, .a=0x76, .x=0x43, .y=0x70, .sp=0x67, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x031e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x031f, .a=0x70, .x=0x43, .y=0x70, .sp=0x67, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x031e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x031e, .value=0xdd, .type=IO_READ},
        {.addr=0x031f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0246) {
    const struct CPU_State initial_cpu = {.pc=0x5841, .a=0xbe, .x=0x48, .y=0x22, .sp=0x64, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x5841, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5842, .a=0x22, .x=0x48, .y=0x22, .sp=0x64, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5841, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5841, .value=0xdd, .type=IO_READ},
        {.addr=0x5842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0247) {
    const struct CPU_State initial_cpu = {.pc=0x1b36, .a=0x87, .x=0x40, .y=0xc3, .sp=0xf5, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1b36, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1b37, .a=0xc3, .x=0x40, .y=0xc3, .sp=0xf5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1b36, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1b36, .value=0xdd, .type=IO_READ},
        {.addr=0x1b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0248) {
    const struct CPU_State initial_cpu = {.pc=0x52a6, .a=0xc2, .x=0x70, .y=0x76, .sp=0xa5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x52a6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x52a7, .a=0x76, .x=0x70, .y=0x76, .sp=0xa5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x52a6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x52a6, .value=0xdd, .type=IO_READ},
        {.addr=0x52a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0249) {
    const struct CPU_State initial_cpu = {.pc=0x84ed, .a=0x98, .x=0x51, .y=0x19, .sp=0xfa, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x84ed, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x84ee, .a=0x19, .x=0x51, .y=0x19, .sp=0xfa, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x84ed, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x84ed, .value=0xdd, .type=IO_READ},
        {.addr=0x84ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_024A) {
    const struct CPU_State initial_cpu = {.pc=0x384f, .a=0x40, .x=0xf3, .y=0x74, .sp=0xbc, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x384f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3850, .a=0x74, .x=0xf3, .y=0x74, .sp=0xbc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x384f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x384f, .value=0xdd, .type=IO_READ},
        {.addr=0x3850, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_024B) {
    const struct CPU_State initial_cpu = {.pc=0x7986, .a=0x9a, .x=0x7a, .y=0x28, .sp=0xf6, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7986, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7987, .a=0x28, .x=0x7a, .y=0x28, .sp=0xf6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7986, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7986, .value=0xdd, .type=IO_READ},
        {.addr=0x7987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_024C) {
    const struct CPU_State initial_cpu = {.pc=0xdaf9, .a=0x03, .x=0x98, .y=0x38, .sp=0x9e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdafa, .a=0x38, .x=0x98, .y=0x38, .sp=0x9e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdaf9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdaf9, .value=0xdd, .type=IO_READ},
        {.addr=0xdafa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_024D) {
    const struct CPU_State initial_cpu = {.pc=0x0371, .a=0x4b, .x=0x9a, .y=0xdc, .sp=0x30, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0371, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0372, .a=0xdc, .x=0x9a, .y=0xdc, .sp=0x30, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0371, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0371, .value=0xdd, .type=IO_READ},
        {.addr=0x0372, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_024E) {
    const struct CPU_State initial_cpu = {.pc=0x75d2, .a=0x5e, .x=0x01, .y=0xcb, .sp=0x0e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x75d2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x75d3, .a=0xcb, .x=0x01, .y=0xcb, .sp=0x0e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x75d2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x75d2, .value=0xdd, .type=IO_READ},
        {.addr=0x75d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_024F) {
    const struct CPU_State initial_cpu = {.pc=0x3ecd, .a=0xd4, .x=0x80, .y=0x3e, .sp=0xaa, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3ecd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3ece, .a=0x3e, .x=0x80, .y=0x3e, .sp=0xaa, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3ecd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3ecd, .value=0xdd, .type=IO_READ},
        {.addr=0x3ece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0250) {
    const struct CPU_State initial_cpu = {.pc=0x5137, .a=0x76, .x=0x56, .y=0x52, .sp=0x75, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x5137, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5138, .a=0x52, .x=0x56, .y=0x52, .sp=0x75, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5137, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5137, .value=0xdd, .type=IO_READ},
        {.addr=0x5138, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0251) {
    const struct CPU_State initial_cpu = {.pc=0xbadf, .a=0x30, .x=0x83, .y=0xc0, .sp=0x4b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xbadf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbae0, .a=0xc0, .x=0x83, .y=0xc0, .sp=0x4b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xbadf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbadf, .value=0xdd, .type=IO_READ},
        {.addr=0xbae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0252) {
    const struct CPU_State initial_cpu = {.pc=0xae75, .a=0x26, .x=0x92, .y=0xb3, .sp=0xc6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xae75, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xae76, .a=0xb3, .x=0x92, .y=0xb3, .sp=0xc6, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xae75, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xae75, .value=0xdd, .type=IO_READ},
        {.addr=0xae76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0253) {
    const struct CPU_State initial_cpu = {.pc=0xcce6, .a=0x8b, .x=0xb7, .y=0x06, .sp=0xfb, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xcce6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcce7, .a=0x06, .x=0xb7, .y=0x06, .sp=0xfb, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcce6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcce6, .value=0xdd, .type=IO_READ},
        {.addr=0xcce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0254) {
    const struct CPU_State initial_cpu = {.pc=0xea7e, .a=0x43, .x=0x23, .y=0xb1, .sp=0x79, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xea7e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea7f, .a=0xb1, .x=0x23, .y=0xb1, .sp=0x79, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xea7e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea7e, .value=0xdd, .type=IO_READ},
        {.addr=0xea7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0255) {
    const struct CPU_State initial_cpu = {.pc=0x3894, .a=0x4c, .x=0x96, .y=0x88, .sp=0xce, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3894, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3895, .a=0x88, .x=0x96, .y=0x88, .sp=0xce, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3894, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3894, .value=0xdd, .type=IO_READ},
        {.addr=0x3895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0256) {
    const struct CPU_State initial_cpu = {.pc=0xb5b2, .a=0x21, .x=0xa1, .y=0xed, .sp=0x12, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb5b3, .a=0xed, .x=0xa1, .y=0xed, .sp=0x12, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb5b2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb5b2, .value=0xdd, .type=IO_READ},
        {.addr=0xb5b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0257) {
    const struct CPU_State initial_cpu = {.pc=0x0719, .a=0x47, .x=0xfc, .y=0x73, .sp=0x3e, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0719, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x071a, .a=0x73, .x=0xfc, .y=0x73, .sp=0x3e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0719, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0719, .value=0xdd, .type=IO_READ},
        {.addr=0x071a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0258) {
    const struct CPU_State initial_cpu = {.pc=0x3c77, .a=0xcc, .x=0x1c, .y=0xdf, .sp=0xfb, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3c77, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3c78, .a=0xdf, .x=0x1c, .y=0xdf, .sp=0xfb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3c77, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3c77, .value=0xdd, .type=IO_READ},
        {.addr=0x3c78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0259) {
    const struct CPU_State initial_cpu = {.pc=0xa266, .a=0x7a, .x=0x4c, .y=0x00, .sp=0x0b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xa266, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa267, .a=0x00, .x=0x4c, .y=0x00, .sp=0x0b, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xa266, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa266, .value=0xdd, .type=IO_READ},
        {.addr=0xa267, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_025A) {
    const struct CPU_State initial_cpu = {.pc=0x06e4, .a=0xb6, .x=0x4f, .y=0x8f, .sp=0xea, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x06e4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x06e5, .a=0x8f, .x=0x4f, .y=0x8f, .sp=0xea, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x06e4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x06e4, .value=0xdd, .type=IO_READ},
        {.addr=0x06e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_025B) {
    const struct CPU_State initial_cpu = {.pc=0xb61e, .a=0xc4, .x=0x21, .y=0xfa, .sp=0xb1, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb61e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb61f, .a=0xfa, .x=0x21, .y=0xfa, .sp=0xb1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb61e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb61e, .value=0xdd, .type=IO_READ},
        {.addr=0xb61f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_025C) {
    const struct CPU_State initial_cpu = {.pc=0xbbd7, .a=0x84, .x=0xf7, .y=0x01, .sp=0x6d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbbd7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbbd8, .a=0x01, .x=0xf7, .y=0x01, .sp=0x6d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbbd7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbbd7, .value=0xdd, .type=IO_READ},
        {.addr=0xbbd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_025D) {
    const struct CPU_State initial_cpu = {.pc=0x776b, .a=0x3a, .x=0x17, .y=0x23, .sp=0x59, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x776b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x776c, .a=0x23, .x=0x17, .y=0x23, .sp=0x59, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x776b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x776b, .value=0xdd, .type=IO_READ},
        {.addr=0x776c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_025E) {
    const struct CPU_State initial_cpu = {.pc=0xde2b, .a=0x6d, .x=0x45, .y=0xf4, .sp=0x16, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xde2b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xde2c, .a=0xf4, .x=0x45, .y=0xf4, .sp=0x16, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xde2b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xde2b, .value=0xdd, .type=IO_READ},
        {.addr=0xde2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_025F) {
    const struct CPU_State initial_cpu = {.pc=0x96a6, .a=0x9a, .x=0xa9, .y=0xbc, .sp=0x9e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x96a6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x96a7, .a=0xbc, .x=0xa9, .y=0xbc, .sp=0x9e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x96a6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x96a6, .value=0xdd, .type=IO_READ},
        {.addr=0x96a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0260) {
    const struct CPU_State initial_cpu = {.pc=0xbc4c, .a=0xe5, .x=0xbb, .y=0xc9, .sp=0x08, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xbc4c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbc4d, .a=0xc9, .x=0xbb, .y=0xc9, .sp=0x08, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbc4c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbc4c, .value=0xdd, .type=IO_READ},
        {.addr=0xbc4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0261) {
    const struct CPU_State initial_cpu = {.pc=0x02a8, .a=0xe1, .x=0x27, .y=0xbe, .sp=0x78, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x02a8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x02a9, .a=0xbe, .x=0x27, .y=0xbe, .sp=0x78, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x02a8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x02a8, .value=0xdd, .type=IO_READ},
        {.addr=0x02a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0262) {
    const struct CPU_State initial_cpu = {.pc=0x1f9d, .a=0x25, .x=0x19, .y=0xaf, .sp=0x89, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1f9e, .a=0xaf, .x=0x19, .y=0xaf, .sp=0x89, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1f9d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1f9d, .value=0xdd, .type=IO_READ},
        {.addr=0x1f9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0263) {
    const struct CPU_State initial_cpu = {.pc=0x9c0b, .a=0x45, .x=0x68, .y=0x2c, .sp=0xac, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9c0c, .a=0x2c, .x=0x68, .y=0x2c, .sp=0xac, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9c0b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9c0b, .value=0xdd, .type=IO_READ},
        {.addr=0x9c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0264) {
    const struct CPU_State initial_cpu = {.pc=0x02a7, .a=0x11, .x=0x89, .y=0x20, .sp=0x35, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x02a7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x02a8, .a=0x20, .x=0x89, .y=0x20, .sp=0x35, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x02a7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x02a7, .value=0xdd, .type=IO_READ},
        {.addr=0x02a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0265) {
    const struct CPU_State initial_cpu = {.pc=0x721c, .a=0x57, .x=0xe7, .y=0x9f, .sp=0x98, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x721c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x721d, .a=0x9f, .x=0xe7, .y=0x9f, .sp=0x98, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x721c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x721c, .value=0xdd, .type=IO_READ},
        {.addr=0x721d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0266) {
    const struct CPU_State initial_cpu = {.pc=0xc342, .a=0xca, .x=0xdd, .y=0xbf, .sp=0xb2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xc342, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc343, .a=0xbf, .x=0xdd, .y=0xbf, .sp=0xb2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc342, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc342, .value=0xdd, .type=IO_READ},
        {.addr=0xc343, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0267) {
    const struct CPU_State initial_cpu = {.pc=0x9239, .a=0xa6, .x=0x89, .y=0x2d, .sp=0xee, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9239, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x923a, .a=0x2d, .x=0x89, .y=0x2d, .sp=0xee, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9239, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9239, .value=0xdd, .type=IO_READ},
        {.addr=0x923a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0268) {
    const struct CPU_State initial_cpu = {.pc=0x3880, .a=0x45, .x=0x1a, .y=0xf4, .sp=0xc3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3880, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3881, .a=0xf4, .x=0x1a, .y=0xf4, .sp=0xc3, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3880, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3880, .value=0xdd, .type=IO_READ},
        {.addr=0x3881, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0269) {
    const struct CPU_State initial_cpu = {.pc=0x61f0, .a=0x6e, .x=0x3b, .y=0xff, .sp=0x53, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x61f0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x61f1, .a=0xff, .x=0x3b, .y=0xff, .sp=0x53, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x61f0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x61f0, .value=0xdd, .type=IO_READ},
        {.addr=0x61f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_026A) {
    const struct CPU_State initial_cpu = {.pc=0x14c1, .a=0x02, .x=0x25, .y=0x82, .sp=0x2a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x14c1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x14c2, .a=0x82, .x=0x25, .y=0x82, .sp=0x2a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x14c1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x14c1, .value=0xdd, .type=IO_READ},
        {.addr=0x14c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_026B) {
    const struct CPU_State initial_cpu = {.pc=0x47c2, .a=0xc8, .x=0xcd, .y=0x3a, .sp=0xdc, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x47c2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x47c3, .a=0x3a, .x=0xcd, .y=0x3a, .sp=0xdc, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x47c2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x47c2, .value=0xdd, .type=IO_READ},
        {.addr=0x47c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_026C) {
    const struct CPU_State initial_cpu = {.pc=0x8585, .a=0xe9, .x=0x17, .y=0x73, .sp=0x4a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8585, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8586, .a=0x73, .x=0x17, .y=0x73, .sp=0x4a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8585, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8585, .value=0xdd, .type=IO_READ},
        {.addr=0x8586, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_026D) {
    const struct CPU_State initial_cpu = {.pc=0x793b, .a=0xc8, .x=0x78, .y=0xb6, .sp=0x7c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x793b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x793c, .a=0xb6, .x=0x78, .y=0xb6, .sp=0x7c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x793b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x793b, .value=0xdd, .type=IO_READ},
        {.addr=0x793c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_026E) {
    const struct CPU_State initial_cpu = {.pc=0xe407, .a=0x42, .x=0xc3, .y=0xea, .sp=0x98, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xe407, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe408, .a=0xea, .x=0xc3, .y=0xea, .sp=0x98, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xe407, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe407, .value=0xdd, .type=IO_READ},
        {.addr=0xe408, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_026F) {
    const struct CPU_State initial_cpu = {.pc=0x94eb, .a=0xfd, .x=0x07, .y=0x47, .sp=0xe0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x94eb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x94ec, .a=0x47, .x=0x07, .y=0x47, .sp=0xe0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x94eb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x94eb, .value=0xdd, .type=IO_READ},
        {.addr=0x94ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0270) {
    const struct CPU_State initial_cpu = {.pc=0x7990, .a=0x55, .x=0x67, .y=0x46, .sp=0x1e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x7990, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7991, .a=0x46, .x=0x67, .y=0x46, .sp=0x1e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7990, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7990, .value=0xdd, .type=IO_READ},
        {.addr=0x7991, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0271) {
    const struct CPU_State initial_cpu = {.pc=0x100e, .a=0x17, .x=0xdf, .y=0xb5, .sp=0xd9, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x100e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x100f, .a=0xb5, .x=0xdf, .y=0xb5, .sp=0xd9, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x100e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x100e, .value=0xdd, .type=IO_READ},
        {.addr=0x100f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0272) {
    const struct CPU_State initial_cpu = {.pc=0x4e85, .a=0xc3, .x=0x72, .y=0x99, .sp=0x6d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4e85, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4e86, .a=0x99, .x=0x72, .y=0x99, .sp=0x6d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4e85, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4e85, .value=0xdd, .type=IO_READ},
        {.addr=0x4e86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3394, .a=0x57, .x=0x90, .y=0x46, .sp=0x80, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3394, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3395, .a=0x46, .x=0x90, .y=0x46, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3394, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3394, .value=0xdd, .type=IO_READ},
        {.addr=0x3395, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0274) {
    const struct CPU_State initial_cpu = {.pc=0xc428, .a=0x81, .x=0x1d, .y=0xb3, .sp=0x7f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc428, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc429, .a=0xb3, .x=0x1d, .y=0xb3, .sp=0x7f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc428, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc428, .value=0xdd, .type=IO_READ},
        {.addr=0xc429, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0275) {
    const struct CPU_State initial_cpu = {.pc=0x4207, .a=0xfa, .x=0xcd, .y=0x39, .sp=0x53, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x4207, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4208, .a=0x39, .x=0xcd, .y=0x39, .sp=0x53, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4207, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4207, .value=0xdd, .type=IO_READ},
        {.addr=0x4208, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0276) {
    const struct CPU_State initial_cpu = {.pc=0x60fb, .a=0x34, .x=0x24, .y=0x86, .sp=0x28, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x60fb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x60fc, .a=0x86, .x=0x24, .y=0x86, .sp=0x28, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x60fb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x60fb, .value=0xdd, .type=IO_READ},
        {.addr=0x60fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0277) {
    const struct CPU_State initial_cpu = {.pc=0x1801, .a=0x77, .x=0x13, .y=0xb1, .sp=0x1e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1801, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1802, .a=0xb1, .x=0x13, .y=0xb1, .sp=0x1e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1801, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1801, .value=0xdd, .type=IO_READ},
        {.addr=0x1802, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0278) {
    const struct CPU_State initial_cpu = {.pc=0x1f16, .a=0xb6, .x=0xa4, .y=0x61, .sp=0xdb, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1f16, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1f17, .a=0x61, .x=0xa4, .y=0x61, .sp=0xdb, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1f16, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1f16, .value=0xdd, .type=IO_READ},
        {.addr=0x1f17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0279) {
    const struct CPU_State initial_cpu = {.pc=0x7883, .a=0x1c, .x=0xdc, .y=0xd9, .sp=0xe8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x7883, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7884, .a=0xd9, .x=0xdc, .y=0xd9, .sp=0xe8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7883, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7883, .value=0xdd, .type=IO_READ},
        {.addr=0x7884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_027A) {
    const struct CPU_State initial_cpu = {.pc=0xea67, .a=0xb7, .x=0x35, .y=0xc5, .sp=0xd8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xea67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea68, .a=0xc5, .x=0x35, .y=0xc5, .sp=0xd8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xea67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea67, .value=0xdd, .type=IO_READ},
        {.addr=0xea68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0f45, .a=0x0c, .x=0x75, .y=0x2e, .sp=0xc3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0f45, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0f46, .a=0x2e, .x=0x75, .y=0x2e, .sp=0xc3, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0f45, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0f45, .value=0xdd, .type=IO_READ},
        {.addr=0x0f46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_027C) {
    const struct CPU_State initial_cpu = {.pc=0x5ef8, .a=0x47, .x=0x57, .y=0x74, .sp=0xd6, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5ef8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5ef9, .a=0x74, .x=0x57, .y=0x74, .sp=0xd6, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5ef8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5ef8, .value=0xdd, .type=IO_READ},
        {.addr=0x5ef9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_027D) {
    const struct CPU_State initial_cpu = {.pc=0x7970, .a=0xa6, .x=0xe8, .y=0x38, .sp=0x72, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7970, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7971, .a=0x38, .x=0xe8, .y=0x38, .sp=0x72, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7970, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7970, .value=0xdd, .type=IO_READ},
        {.addr=0x7971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_027E) {
    const struct CPU_State initial_cpu = {.pc=0xf9b0, .a=0x36, .x=0xc1, .y=0xdb, .sp=0x3a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf9b0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf9b1, .a=0xdb, .x=0xc1, .y=0xdb, .sp=0x3a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf9b0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf9b0, .value=0xdd, .type=IO_READ},
        {.addr=0xf9b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_027F) {
    const struct CPU_State initial_cpu = {.pc=0x0b37, .a=0x6f, .x=0x47, .y=0x31, .sp=0xfc, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0b37, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0b38, .a=0x31, .x=0x47, .y=0x31, .sp=0xfc, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0b37, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0b37, .value=0xdd, .type=IO_READ},
        {.addr=0x0b38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0280) {
    const struct CPU_State initial_cpu = {.pc=0xae6f, .a=0xf0, .x=0xe4, .y=0xd4, .sp=0x0f, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xae6f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xae70, .a=0xd4, .x=0xe4, .y=0xd4, .sp=0x0f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xae6f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xae6f, .value=0xdd, .type=IO_READ},
        {.addr=0xae70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0281) {
    const struct CPU_State initial_cpu = {.pc=0x296d, .a=0x30, .x=0x00, .y=0xd1, .sp=0x0e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x296d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x296e, .a=0xd1, .x=0x00, .y=0xd1, .sp=0x0e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x296d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x296d, .value=0xdd, .type=IO_READ},
        {.addr=0x296e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0282) {
    const struct CPU_State initial_cpu = {.pc=0x7a70, .a=0xbb, .x=0x72, .y=0x13, .sp=0xbd, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7a70, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7a71, .a=0x13, .x=0x72, .y=0x13, .sp=0xbd, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7a70, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7a70, .value=0xdd, .type=IO_READ},
        {.addr=0x7a71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0283) {
    const struct CPU_State initial_cpu = {.pc=0xc7f7, .a=0x7a, .x=0x07, .y=0x6d, .sp=0x3c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc7f8, .a=0x6d, .x=0x07, .y=0x6d, .sp=0x3c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc7f7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc7f7, .value=0xdd, .type=IO_READ},
        {.addr=0xc7f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0284) {
    const struct CPU_State initial_cpu = {.pc=0x4583, .a=0x01, .x=0x50, .y=0xce, .sp=0xea, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x4583, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4584, .a=0xce, .x=0x50, .y=0xce, .sp=0xea, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4583, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4583, .value=0xdd, .type=IO_READ},
        {.addr=0x4584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb812, .a=0xf2, .x=0xae, .y=0xea, .sp=0x6e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb812, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb813, .a=0xea, .x=0xae, .y=0xea, .sp=0x6e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb812, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb812, .value=0xdd, .type=IO_READ},
        {.addr=0xb813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0286) {
    const struct CPU_State initial_cpu = {.pc=0x233b, .a=0x50, .x=0x88, .y=0xef, .sp=0x47, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x233b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x233c, .a=0xef, .x=0x88, .y=0xef, .sp=0x47, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x233b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x233b, .value=0xdd, .type=IO_READ},
        {.addr=0x233c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0287) {
    const struct CPU_State initial_cpu = {.pc=0x22de, .a=0x34, .x=0x52, .y=0x5b, .sp=0xfc, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x22de, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x22df, .a=0x5b, .x=0x52, .y=0x5b, .sp=0xfc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x22de, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x22de, .value=0xdd, .type=IO_READ},
        {.addr=0x22df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0288) {
    const struct CPU_State initial_cpu = {.pc=0x890c, .a=0xbf, .x=0xbe, .y=0x58, .sp=0xe0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x890c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x890d, .a=0x58, .x=0xbe, .y=0x58, .sp=0xe0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x890c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x890c, .value=0xdd, .type=IO_READ},
        {.addr=0x890d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0289) {
    const struct CPU_State initial_cpu = {.pc=0x7c4f, .a=0x1c, .x=0x97, .y=0x04, .sp=0x4a, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7c4f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7c50, .a=0x04, .x=0x97, .y=0x04, .sp=0x4a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7c4f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7c4f, .value=0xdd, .type=IO_READ},
        {.addr=0x7c50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_028A) {
    const struct CPU_State initial_cpu = {.pc=0xd4f6, .a=0x73, .x=0xf7, .y=0x12, .sp=0x5a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd4f6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd4f7, .a=0x12, .x=0xf7, .y=0x12, .sp=0x5a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd4f6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd4f6, .value=0xdd, .type=IO_READ},
        {.addr=0xd4f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_028B) {
    const struct CPU_State initial_cpu = {.pc=0x8b0a, .a=0x62, .x=0x82, .y=0x21, .sp=0x65, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x8b0a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8b0b, .a=0x21, .x=0x82, .y=0x21, .sp=0x65, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8b0a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8b0a, .value=0xdd, .type=IO_READ},
        {.addr=0x8b0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_028C) {
    const struct CPU_State initial_cpu = {.pc=0x07e8, .a=0x3c, .x=0xe1, .y=0x79, .sp=0xe7, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x07e8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x07e9, .a=0x79, .x=0xe1, .y=0x79, .sp=0xe7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x07e8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x07e8, .value=0xdd, .type=IO_READ},
        {.addr=0x07e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_028D) {
    const struct CPU_State initial_cpu = {.pc=0xa64f, .a=0x71, .x=0xf9, .y=0xdd, .sp=0xdb, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa64f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa650, .a=0xdd, .x=0xf9, .y=0xdd, .sp=0xdb, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa64f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa64f, .value=0xdd, .type=IO_READ},
        {.addr=0xa650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_028E) {
    const struct CPU_State initial_cpu = {.pc=0x5292, .a=0x86, .x=0xc2, .y=0x4b, .sp=0xfb, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5292, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5293, .a=0x4b, .x=0xc2, .y=0x4b, .sp=0xfb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5292, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5292, .value=0xdd, .type=IO_READ},
        {.addr=0x5293, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_028F) {
    const struct CPU_State initial_cpu = {.pc=0xd0c1, .a=0x03, .x=0x77, .y=0x42, .sp=0x55, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd0c1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd0c2, .a=0x42, .x=0x77, .y=0x42, .sp=0x55, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd0c1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd0c1, .value=0xdd, .type=IO_READ},
        {.addr=0xd0c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0290) {
    const struct CPU_State initial_cpu = {.pc=0xfb55, .a=0x0e, .x=0xc8, .y=0x44, .sp=0x9c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xfb55, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfb56, .a=0x44, .x=0xc8, .y=0x44, .sp=0x9c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfb55, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfb55, .value=0xdd, .type=IO_READ},
        {.addr=0xfb56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0291) {
    const struct CPU_State initial_cpu = {.pc=0x63dc, .a=0xad, .x=0x9b, .y=0xee, .sp=0x9f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x63dc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x63dd, .a=0xee, .x=0x9b, .y=0xee, .sp=0x9f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x63dc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x63dc, .value=0xdd, .type=IO_READ},
        {.addr=0x63dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0292) {
    const struct CPU_State initial_cpu = {.pc=0x863c, .a=0x58, .x=0xdb, .y=0x7e, .sp=0xc7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x863c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x863d, .a=0x7e, .x=0xdb, .y=0x7e, .sp=0xc7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x863c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x863c, .value=0xdd, .type=IO_READ},
        {.addr=0x863d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0293) {
    const struct CPU_State initial_cpu = {.pc=0x1672, .a=0x67, .x=0x4e, .y=0x26, .sp=0x11, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1672, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1673, .a=0x26, .x=0x4e, .y=0x26, .sp=0x11, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1672, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1672, .value=0xdd, .type=IO_READ},
        {.addr=0x1673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0294) {
    const struct CPU_State initial_cpu = {.pc=0xe3e4, .a=0x69, .x=0x73, .y=0x25, .sp=0x92, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe3e5, .a=0x25, .x=0x73, .y=0x25, .sp=0x92, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe3e4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe3e4, .value=0xdd, .type=IO_READ},
        {.addr=0xe3e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0295) {
    const struct CPU_State initial_cpu = {.pc=0x65a4, .a=0x23, .x=0x36, .y=0xf8, .sp=0x95, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x65a4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x65a5, .a=0xf8, .x=0x36, .y=0xf8, .sp=0x95, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x65a4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x65a4, .value=0xdd, .type=IO_READ},
        {.addr=0x65a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0296) {
    const struct CPU_State initial_cpu = {.pc=0xc7df, .a=0x46, .x=0xa7, .y=0x52, .sp=0x63, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc7df, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc7e0, .a=0x52, .x=0xa7, .y=0x52, .sp=0x63, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc7df, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc7df, .value=0xdd, .type=IO_READ},
        {.addr=0xc7e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0297) {
    const struct CPU_State initial_cpu = {.pc=0x1ee5, .a=0xfd, .x=0xce, .y=0xc1, .sp=0xf2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1ee6, .a=0xc1, .x=0xce, .y=0xc1, .sp=0xf2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1ee5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1ee5, .value=0xdd, .type=IO_READ},
        {.addr=0x1ee6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0298) {
    const struct CPU_State initial_cpu = {.pc=0x0317, .a=0x4e, .x=0x1f, .y=0x60, .sp=0x6b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0317, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0318, .a=0x60, .x=0x1f, .y=0x60, .sp=0x6b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0317, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0317, .value=0xdd, .type=IO_READ},
        {.addr=0x0318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0299) {
    const struct CPU_State initial_cpu = {.pc=0x79be, .a=0x94, .x=0x1e, .y=0x1a, .sp=0xeb, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x79be, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x79bf, .a=0x1a, .x=0x1e, .y=0x1a, .sp=0xeb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x79be, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x79be, .value=0xdd, .type=IO_READ},
        {.addr=0x79bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_029A) {
    const struct CPU_State initial_cpu = {.pc=0x35f1, .a=0xa3, .x=0x4c, .y=0x97, .sp=0xf0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x35f1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35f2, .a=0x97, .x=0x4c, .y=0x97, .sp=0xf0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x35f1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35f1, .value=0xdd, .type=IO_READ},
        {.addr=0x35f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_029B) {
    const struct CPU_State initial_cpu = {.pc=0x2295, .a=0xaf, .x=0x41, .y=0x00, .sp=0x09, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2295, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2296, .a=0x00, .x=0x41, .y=0x00, .sp=0x09, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x2295, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2295, .value=0xdd, .type=IO_READ},
        {.addr=0x2296, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_029C) {
    const struct CPU_State initial_cpu = {.pc=0x4634, .a=0xd1, .x=0x30, .y=0x74, .sp=0x23, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x4634, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4635, .a=0x74, .x=0x30, .y=0x74, .sp=0x23, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4634, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4634, .value=0xdd, .type=IO_READ},
        {.addr=0x4635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_029D) {
    const struct CPU_State initial_cpu = {.pc=0xb73c, .a=0xc8, .x=0x63, .y=0xe6, .sp=0x26, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb73c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb73d, .a=0xe6, .x=0x63, .y=0xe6, .sp=0x26, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb73c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb73c, .value=0xdd, .type=IO_READ},
        {.addr=0xb73d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_029E) {
    const struct CPU_State initial_cpu = {.pc=0xd4c3, .a=0xbd, .x=0xe7, .y=0x75, .sp=0x60, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd4c4, .a=0x75, .x=0xe7, .y=0x75, .sp=0x60, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd4c3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd4c3, .value=0xdd, .type=IO_READ},
        {.addr=0xd4c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_029F) {
    const struct CPU_State initial_cpu = {.pc=0x2f49, .a=0x84, .x=0xc0, .y=0x32, .sp=0x17, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2f49, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2f4a, .a=0x32, .x=0xc0, .y=0x32, .sp=0x17, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2f49, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2f49, .value=0xdd, .type=IO_READ},
        {.addr=0x2f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x70c0, .a=0x14, .x=0x15, .y=0x94, .sp=0xca, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x70c0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x70c1, .a=0x94, .x=0x15, .y=0x94, .sp=0xca, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x70c0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x70c0, .value=0xdd, .type=IO_READ},
        {.addr=0x70c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x8a52, .a=0xf3, .x=0x0a, .y=0x9e, .sp=0xf1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x8a52, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8a53, .a=0x9e, .x=0x0a, .y=0x9e, .sp=0xf1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8a52, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8a52, .value=0xdd, .type=IO_READ},
        {.addr=0x8a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x8504, .a=0xce, .x=0x37, .y=0xda, .sp=0x22, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8504, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8505, .a=0xda, .x=0x37, .y=0xda, .sp=0x22, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8504, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8504, .value=0xdd, .type=IO_READ},
        {.addr=0x8505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x6f7c, .a=0x50, .x=0xda, .y=0x35, .sp=0xdc, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6f7c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6f7d, .a=0x35, .x=0xda, .y=0x35, .sp=0xdc, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6f7c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6f7c, .value=0xdd, .type=IO_READ},
        {.addr=0x6f7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc202, .a=0xe5, .x=0xab, .y=0xa9, .sp=0x76, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc202, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc203, .a=0xa9, .x=0xab, .y=0xa9, .sp=0x76, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc202, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc202, .value=0xdd, .type=IO_READ},
        {.addr=0xc203, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x9c69, .a=0xb1, .x=0x52, .y=0xa8, .sp=0xbc, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x9c69, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9c6a, .a=0xa8, .x=0x52, .y=0xa8, .sp=0xbc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9c69, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9c69, .value=0xdd, .type=IO_READ},
        {.addr=0x9c6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x9547, .a=0x6f, .x=0xae, .y=0x71, .sp=0xb6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9547, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9548, .a=0x71, .x=0xae, .y=0x71, .sp=0xb6, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9547, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9547, .value=0xdd, .type=IO_READ},
        {.addr=0x9548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xdb98, .a=0xa2, .x=0x69, .y=0xda, .sp=0xd4, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xdb98, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdb99, .a=0xda, .x=0x69, .y=0xda, .sp=0xd4, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xdb98, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdb98, .value=0xdd, .type=IO_READ},
        {.addr=0xdb99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x7f78, .a=0x48, .x=0xf6, .y=0x4b, .sp=0x9c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7f78, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7f79, .a=0x4b, .x=0xf6, .y=0x4b, .sp=0x9c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7f78, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7f78, .value=0xdd, .type=IO_READ},
        {.addr=0x7f79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x297e, .a=0xca, .x=0xbb, .y=0x82, .sp=0x81, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x297e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x297f, .a=0x82, .x=0xbb, .y=0x82, .sp=0x81, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x297e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x297e, .value=0xdd, .type=IO_READ},
        {.addr=0x297f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb066, .a=0x83, .x=0xae, .y=0xbe, .sp=0xff, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xb066, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb067, .a=0xbe, .x=0xae, .y=0xbe, .sp=0xff, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb066, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb066, .value=0xdd, .type=IO_READ},
        {.addr=0xb067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xe83f, .a=0x77, .x=0x84, .y=0xda, .sp=0x21, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe83f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe840, .a=0xda, .x=0x84, .y=0xda, .sp=0x21, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe83f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe83f, .value=0xdd, .type=IO_READ},
        {.addr=0xe840, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1a31, .a=0x55, .x=0x8f, .y=0x3b, .sp=0x90, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x1a31, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1a32, .a=0x3b, .x=0x8f, .y=0x3b, .sp=0x90, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1a31, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1a31, .value=0xdd, .type=IO_READ},
        {.addr=0x1a32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x9c60, .a=0x88, .x=0x0e, .y=0x32, .sp=0x7e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x9c60, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9c61, .a=0x32, .x=0x0e, .y=0x32, .sp=0x7e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9c60, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9c60, .value=0xdd, .type=IO_READ},
        {.addr=0x9c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x2ebb, .a=0xd7, .x=0xf6, .y=0xd2, .sp=0x3e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2ebb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2ebc, .a=0xd2, .x=0xf6, .y=0xd2, .sp=0x3e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2ebb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2ebb, .value=0xdd, .type=IO_READ},
        {.addr=0x2ebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xe4fc, .a=0x5d, .x=0x76, .y=0xcf, .sp=0xf3, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe4fd, .a=0xcf, .x=0x76, .y=0xcf, .sp=0xf3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe4fc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe4fc, .value=0xdd, .type=IO_READ},
        {.addr=0xe4fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x098c, .a=0x8e, .x=0xb2, .y=0xb0, .sp=0x5e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x098c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x098d, .a=0xb0, .x=0xb2, .y=0xb0, .sp=0x5e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x098c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x098c, .value=0xdd, .type=IO_READ},
        {.addr=0x098d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x59fa, .a=0x53, .x=0x68, .y=0x84, .sp=0x30, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x59fa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x59fb, .a=0x84, .x=0x68, .y=0x84, .sp=0x30, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x59fa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x59fa, .value=0xdd, .type=IO_READ},
        {.addr=0x59fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xe1ca, .a=0x32, .x=0xe8, .y=0x8b, .sp=0xf8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ca, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe1cb, .a=0x8b, .x=0xe8, .y=0x8b, .sp=0xf8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xe1ca, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe1ca, .value=0xdd, .type=IO_READ},
        {.addr=0xe1cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x5d43, .a=0xd7, .x=0x7c, .y=0xd3, .sp=0x0a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5d43, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5d44, .a=0xd3, .x=0x7c, .y=0xd3, .sp=0x0a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5d43, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5d43, .value=0xdd, .type=IO_READ},
        {.addr=0x5d44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x1965, .a=0x20, .x=0x4b, .y=0x1e, .sp=0x4c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x1965, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1966, .a=0x1e, .x=0x4b, .y=0x1e, .sp=0x4c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1965, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1965, .value=0xdd, .type=IO_READ},
        {.addr=0x1966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xdc6a, .a=0x30, .x=0x95, .y=0xab, .sp=0x65, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xdc6a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdc6b, .a=0xab, .x=0x95, .y=0xab, .sp=0x65, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xdc6a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdc6a, .value=0xdd, .type=IO_READ},
        {.addr=0xdc6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xab54, .a=0x06, .x=0x0b, .y=0x43, .sp=0x46, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xab54, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xab55, .a=0x43, .x=0x0b, .y=0x43, .sp=0x46, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xab54, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xab54, .value=0xdd, .type=IO_READ},
        {.addr=0xab55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3af8, .a=0xf1, .x=0x94, .y=0x91, .sp=0x02, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x3af8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3af9, .a=0x91, .x=0x94, .y=0x91, .sp=0x02, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3af8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3af8, .value=0xdd, .type=IO_READ},
        {.addr=0x3af9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x0ff3, .a=0x61, .x=0xa3, .y=0x84, .sp=0x54, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0ff4, .a=0x84, .x=0xa3, .y=0x84, .sp=0x54, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0ff3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0ff3, .value=0xdd, .type=IO_READ},
        {.addr=0x0ff4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xa35c, .a=0x1b, .x=0x95, .y=0xe9, .sp=0xbe, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa35c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa35d, .a=0xe9, .x=0x95, .y=0xe9, .sp=0xbe, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa35c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa35c, .value=0xdd, .type=IO_READ},
        {.addr=0xa35d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x3c04, .a=0x5f, .x=0xa7, .y=0xad, .sp=0xfc, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3c04, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3c05, .a=0xad, .x=0xa7, .y=0xad, .sp=0xfc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3c04, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3c04, .value=0xdd, .type=IO_READ},
        {.addr=0x3c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x091f, .a=0xcc, .x=0x96, .y=0x42, .sp=0xf0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x091f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0920, .a=0x42, .x=0x96, .y=0x42, .sp=0xf0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x091f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x091f, .value=0xdd, .type=IO_READ},
        {.addr=0x0920, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xdc56, .a=0x84, .x=0x1f, .y=0xa6, .sp=0x6b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xdc56, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdc57, .a=0xa6, .x=0x1f, .y=0xa6, .sp=0x6b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdc56, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdc56, .value=0xdd, .type=IO_READ},
        {.addr=0xdc57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xcdaa, .a=0x01, .x=0xa8, .y=0x06, .sp=0x87, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xcdaa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcdab, .a=0x06, .x=0xa8, .y=0x06, .sp=0x87, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcdaa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcdaa, .value=0xdd, .type=IO_READ},
        {.addr=0xcdab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xa02c, .a=0x13, .x=0xce, .y=0xa0, .sp=0x1b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xa02c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa02d, .a=0xa0, .x=0xce, .y=0xa0, .sp=0x1b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa02c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa02c, .value=0xdd, .type=IO_READ},
        {.addr=0xa02d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xb087, .a=0x3d, .x=0x45, .y=0x5d, .sp=0x4e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb087, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb088, .a=0x5d, .x=0x45, .y=0x5d, .sp=0x4e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb087, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb087, .value=0xdd, .type=IO_READ},
        {.addr=0xb088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xe8d7, .a=0x7a, .x=0x70, .y=0xa6, .sp=0x3f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe8d7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe8d8, .a=0xa6, .x=0x70, .y=0xa6, .sp=0x3f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe8d7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe8d7, .value=0xdd, .type=IO_READ},
        {.addr=0xe8d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x5c93, .a=0x00, .x=0x0b, .y=0x16, .sp=0x0f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5c93, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5c94, .a=0x16, .x=0x0b, .y=0x16, .sp=0x0f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5c93, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5c93, .value=0xdd, .type=IO_READ},
        {.addr=0x5c94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x9566, .a=0x24, .x=0x90, .y=0x79, .sp=0xaf, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9566, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9567, .a=0x79, .x=0x90, .y=0x79, .sp=0xaf, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9566, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9566, .value=0xdd, .type=IO_READ},
        {.addr=0x9567, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x07df, .a=0x45, .x=0x27, .y=0x42, .sp=0xec, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x07df, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x07e0, .a=0x42, .x=0x27, .y=0x42, .sp=0xec, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x07df, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x07df, .value=0xdd, .type=IO_READ},
        {.addr=0x07e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xee48, .a=0xc4, .x=0xb3, .y=0x5f, .sp=0xe9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xee48, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xee49, .a=0x5f, .x=0xb3, .y=0x5f, .sp=0xe9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xee48, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xee48, .value=0xdd, .type=IO_READ},
        {.addr=0xee49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x44bf, .a=0xea, .x=0xdb, .y=0x64, .sp=0x87, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x44bf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x44c0, .a=0x64, .x=0xdb, .y=0x64, .sp=0x87, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x44bf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x44bf, .value=0xdd, .type=IO_READ},
        {.addr=0x44c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x803a, .a=0xcd, .x=0x7b, .y=0x29, .sp=0xaf, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x803a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x803b, .a=0x29, .x=0x7b, .y=0x29, .sp=0xaf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x803a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x803a, .value=0xdd, .type=IO_READ},
        {.addr=0x803b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xea17, .a=0xd0, .x=0x40, .y=0x52, .sp=0x16, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xea17, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea18, .a=0x52, .x=0x40, .y=0x52, .sp=0x16, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xea17, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea17, .value=0xdd, .type=IO_READ},
        {.addr=0xea18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xeb89, .a=0x30, .x=0x6c, .y=0x01, .sp=0x4d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb89, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeb8a, .a=0x01, .x=0x6c, .y=0x01, .sp=0x4d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xeb89, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeb89, .value=0xdd, .type=IO_READ},
        {.addr=0xeb8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xcee7, .a=0x13, .x=0x06, .y=0xd2, .sp=0x03, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xcee7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcee8, .a=0xd2, .x=0x06, .y=0xd2, .sp=0x03, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xcee7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcee7, .value=0xdd, .type=IO_READ},
        {.addr=0xcee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe1cc, .a=0x4d, .x=0x78, .y=0x0e, .sp=0x03, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe1cc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe1cd, .a=0x0e, .x=0x78, .y=0x0e, .sp=0x03, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe1cc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe1cc, .value=0xdd, .type=IO_READ},
        {.addr=0xe1cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xc4fb, .a=0x8e, .x=0xce, .y=0x78, .sp=0x8d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc4fb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc4fc, .a=0x78, .x=0xce, .y=0x78, .sp=0x8d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc4fb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc4fb, .value=0xdd, .type=IO_READ},
        {.addr=0xc4fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xbf90, .a=0x78, .x=0x41, .y=0x53, .sp=0x46, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xbf90, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbf91, .a=0x53, .x=0x41, .y=0x53, .sp=0x46, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbf90, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbf90, .value=0xdd, .type=IO_READ},
        {.addr=0xbf91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xbde4, .a=0x8d, .x=0xcc, .y=0x84, .sp=0x8c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xbde4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbde5, .a=0x84, .x=0xcc, .y=0x84, .sp=0x8c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbde4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbde4, .value=0xdd, .type=IO_READ},
        {.addr=0xbde5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xd943, .a=0x6e, .x=0x24, .y=0x94, .sp=0x13, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd943, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd944, .a=0x94, .x=0x24, .y=0x94, .sp=0x13, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd943, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd943, .value=0xdd, .type=IO_READ},
        {.addr=0xd944, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xab24, .a=0x4f, .x=0xcb, .y=0x84, .sp=0x50, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xab24, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xab25, .a=0x84, .x=0xcb, .y=0x84, .sp=0x50, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xab24, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xab24, .value=0xdd, .type=IO_READ},
        {.addr=0xab25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x45a5, .a=0xcb, .x=0xaf, .y=0xf0, .sp=0xe6, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x45a5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x45a6, .a=0xf0, .x=0xaf, .y=0xf0, .sp=0xe6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x45a5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x45a5, .value=0xdd, .type=IO_READ},
        {.addr=0x45a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x3f2a, .a=0xf1, .x=0x00, .y=0xc1, .sp=0xa3, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3f2a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3f2b, .a=0xc1, .x=0x00, .y=0xc1, .sp=0xa3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3f2a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3f2a, .value=0xdd, .type=IO_READ},
        {.addr=0x3f2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x9e5b, .a=0xec, .x=0xa0, .y=0x6b, .sp=0x10, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9e5c, .a=0x6b, .x=0xa0, .y=0x6b, .sp=0x10, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9e5b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9e5b, .value=0xdd, .type=IO_READ},
        {.addr=0x9e5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xd363, .a=0xe7, .x=0xb6, .y=0x13, .sp=0x6f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xd363, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd364, .a=0x13, .x=0xb6, .y=0x13, .sp=0x6f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd363, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd363, .value=0xdd, .type=IO_READ},
        {.addr=0xd364, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xf8cc, .a=0x7e, .x=0xe4, .y=0x76, .sp=0xe7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf8cd, .a=0x76, .x=0xe4, .y=0x76, .sp=0xe7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf8cc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf8cc, .value=0xdd, .type=IO_READ},
        {.addr=0xf8cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb5a3, .a=0xca, .x=0x43, .y=0x49, .sp=0x6b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb5a4, .a=0x49, .x=0x43, .y=0x49, .sp=0x6b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb5a3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb5a3, .value=0xdd, .type=IO_READ},
        {.addr=0xb5a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xaba9, .a=0x2d, .x=0x32, .y=0x90, .sp=0xf7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xaba9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xabaa, .a=0x90, .x=0x32, .y=0x90, .sp=0xf7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xaba9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaba9, .value=0xdd, .type=IO_READ},
        {.addr=0xabaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x8183, .a=0x75, .x=0x09, .y=0x05, .sp=0xa8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8183, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8184, .a=0x05, .x=0x09, .y=0x05, .sp=0xa8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8183, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8183, .value=0xdd, .type=IO_READ},
        {.addr=0x8184, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x66ae, .a=0xfa, .x=0x93, .y=0xd7, .sp=0x17, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x66ae, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x66af, .a=0xd7, .x=0x93, .y=0xd7, .sp=0x17, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x66ae, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x66ae, .value=0xdd, .type=IO_READ},
        {.addr=0x66af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x68fd, .a=0x23, .x=0xe3, .y=0x61, .sp=0x57, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x68fd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x68fe, .a=0x61, .x=0xe3, .y=0x61, .sp=0x57, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x68fd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x68fd, .value=0xdd, .type=IO_READ},
        {.addr=0x68fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xaeb8, .a=0xdc, .x=0x8e, .y=0x42, .sp=0xc9, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xaeb9, .a=0x42, .x=0x8e, .y=0x42, .sp=0xc9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xaeb8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xaeb8, .value=0xdd, .type=IO_READ},
        {.addr=0xaeb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xb229, .a=0xa0, .x=0x73, .y=0x89, .sp=0xdf, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb229, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb22a, .a=0x89, .x=0x73, .y=0x89, .sp=0xdf, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb229, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb229, .value=0xdd, .type=IO_READ},
        {.addr=0xb22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x0084, .a=0xc3, .x=0x13, .y=0x8e, .sp=0x4b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0085, .a=0x8e, .x=0x13, .y=0x8e, .sp=0x4b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0084, .value=0xdd, .type=IO_READ},
        {.addr=0x0085, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x573e, .a=0x38, .x=0x2c, .y=0x01, .sp=0x33, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x573e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x573f, .a=0x01, .x=0x2c, .y=0x01, .sp=0x33, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x573e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x573e, .value=0xdd, .type=IO_READ},
        {.addr=0x573f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x5201, .a=0xa3, .x=0x62, .y=0x49, .sp=0x2b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5201, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5202, .a=0x49, .x=0x62, .y=0x49, .sp=0x2b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5201, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5201, .value=0xdd, .type=IO_READ},
        {.addr=0x5202, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x0f43, .a=0x63, .x=0x70, .y=0xc6, .sp=0x6f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f43, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0f44, .a=0xc6, .x=0x70, .y=0xc6, .sp=0x6f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0f43, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0f43, .value=0xdd, .type=IO_READ},
        {.addr=0x0f44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xdf69, .a=0xc8, .x=0x9b, .y=0xb0, .sp=0xf6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xdf69, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdf6a, .a=0xb0, .x=0x9b, .y=0xb0, .sp=0xf6, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xdf69, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdf69, .value=0xdd, .type=IO_READ},
        {.addr=0xdf6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1a67, .a=0x76, .x=0x90, .y=0x3b, .sp=0x2b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1a67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1a68, .a=0x3b, .x=0x90, .y=0x3b, .sp=0x2b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1a67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1a67, .value=0xdd, .type=IO_READ},
        {.addr=0x1a68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x7121, .a=0x10, .x=0xec, .y=0x3f, .sp=0xe2, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7121, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7122, .a=0x3f, .x=0xec, .y=0x3f, .sp=0xe2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7121, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7121, .value=0xdd, .type=IO_READ},
        {.addr=0x7122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x858d, .a=0x06, .x=0x08, .y=0x8b, .sp=0x7f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x858d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x858e, .a=0x8b, .x=0x08, .y=0x8b, .sp=0x7f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x858d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x858d, .value=0xdd, .type=IO_READ},
        {.addr=0x858e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x8567, .a=0x8e, .x=0xf3, .y=0x04, .sp=0x6f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8567, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8568, .a=0x04, .x=0xf3, .y=0x04, .sp=0x6f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x8567, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8567, .value=0xdd, .type=IO_READ},
        {.addr=0x8568, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x4c82, .a=0x8a, .x=0xa7, .y=0x65, .sp=0xb0, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c82, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c83, .a=0x65, .x=0xa7, .y=0x65, .sp=0xb0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4c82, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c82, .value=0xdd, .type=IO_READ},
        {.addr=0x4c83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x91f9, .a=0xe1, .x=0xdd, .y=0x71, .sp=0x0e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x91f9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x91fa, .a=0x71, .x=0xdd, .y=0x71, .sp=0x0e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x91f9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x91f9, .value=0xdd, .type=IO_READ},
        {.addr=0x91fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x134b, .a=0x51, .x=0xae, .y=0x2a, .sp=0x38, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x134b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x134c, .a=0x2a, .x=0xae, .y=0x2a, .sp=0x38, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x134b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x134b, .value=0xdd, .type=IO_READ},
        {.addr=0x134c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x98a0, .a=0x26, .x=0xcd, .y=0x74, .sp=0x3f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x98a0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x98a1, .a=0x74, .x=0xcd, .y=0x74, .sp=0x3f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x98a0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x98a0, .value=0xdd, .type=IO_READ},
        {.addr=0x98a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x646d, .a=0x5b, .x=0x0b, .y=0xda, .sp=0xea, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x646d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x646e, .a=0xda, .x=0x0b, .y=0xda, .sp=0xea, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x646d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x646d, .value=0xdd, .type=IO_READ},
        {.addr=0x646e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x7294, .a=0x79, .x=0xc1, .y=0x43, .sp=0x13, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7294, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7295, .a=0x43, .x=0xc1, .y=0x43, .sp=0x13, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7294, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7294, .value=0xdd, .type=IO_READ},
        {.addr=0x7295, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x370b, .a=0xbf, .x=0x57, .y=0x1d, .sp=0x81, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x370b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x370c, .a=0x1d, .x=0x57, .y=0x1d, .sp=0x81, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x370b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x370b, .value=0xdd, .type=IO_READ},
        {.addr=0x370c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xcb85, .a=0x0a, .x=0xcd, .y=0xe5, .sp=0x1b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xcb85, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcb86, .a=0xe5, .x=0xcd, .y=0xe5, .sp=0x1b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcb85, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcb85, .value=0xdd, .type=IO_READ},
        {.addr=0xcb86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x9ab9, .a=0x29, .x=0x29, .y=0x94, .sp=0xe7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9ab9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9aba, .a=0x94, .x=0x29, .y=0x94, .sp=0xe7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9ab9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9ab9, .value=0xdd, .type=IO_READ},
        {.addr=0x9aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x30ab, .a=0x62, .x=0x7f, .y=0x49, .sp=0xb4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x30ab, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x30ac, .a=0x49, .x=0x7f, .y=0x49, .sp=0xb4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x30ab, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x30ab, .value=0xdd, .type=IO_READ},
        {.addr=0x30ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xd3b9, .a=0x9b, .x=0x87, .y=0xcd, .sp=0xac, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd3b9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd3ba, .a=0xcd, .x=0x87, .y=0xcd, .sp=0xac, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd3b9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd3b9, .value=0xdd, .type=IO_READ},
        {.addr=0xd3ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x75f5, .a=0x1f, .x=0x01, .y=0xca, .sp=0xa3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x75f5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x75f6, .a=0xca, .x=0x01, .y=0xca, .sp=0xa3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x75f5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x75f5, .value=0xdd, .type=IO_READ},
        {.addr=0x75f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x9f59, .a=0x88, .x=0x18, .y=0x54, .sp=0xca, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f59, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9f5a, .a=0x54, .x=0x18, .y=0x54, .sp=0xca, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9f59, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9f59, .value=0xdd, .type=IO_READ},
        {.addr=0x9f5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xdda5, .a=0xff, .x=0x7b, .y=0xfa, .sp=0x74, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xdda5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdda6, .a=0xfa, .x=0x7b, .y=0xfa, .sp=0x74, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdda5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdda5, .value=0xdd, .type=IO_READ},
        {.addr=0xdda6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xf9f3, .a=0xf4, .x=0xac, .y=0x83, .sp=0x58, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf9f4, .a=0x83, .x=0xac, .y=0x83, .sp=0x58, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf9f3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf9f3, .value=0xdd, .type=IO_READ},
        {.addr=0xf9f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x682d, .a=0x4c, .x=0x41, .y=0xd0, .sp=0xc5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x682d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x682e, .a=0xd0, .x=0x41, .y=0xd0, .sp=0xc5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x682d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x682d, .value=0xdd, .type=IO_READ},
        {.addr=0x682e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x9307, .a=0x03, .x=0x41, .y=0x8f, .sp=0xcf, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x9307, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9308, .a=0x8f, .x=0x41, .y=0x8f, .sp=0xcf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9307, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9307, .value=0xdd, .type=IO_READ},
        {.addr=0x9308, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x5267, .a=0x4c, .x=0xf5, .y=0x7c, .sp=0x3b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5267, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5268, .a=0x7c, .x=0xf5, .y=0x7c, .sp=0x3b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5267, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5267, .value=0xdd, .type=IO_READ},
        {.addr=0x5268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x9c82, .a=0xb6, .x=0x4a, .y=0xe2, .sp=0xef, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9c82, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9c83, .a=0xe2, .x=0x4a, .y=0xe2, .sp=0xef, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9c82, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9c82, .value=0xdd, .type=IO_READ},
        {.addr=0x9c83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x9f9e, .a=0x0e, .x=0x90, .y=0x2b, .sp=0x38, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9f9e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9f9f, .a=0x2b, .x=0x90, .y=0x2b, .sp=0x38, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9f9e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9f9e, .value=0xdd, .type=IO_READ},
        {.addr=0x9f9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x7d83, .a=0x28, .x=0xf1, .y=0x32, .sp=0x7c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7d83, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7d84, .a=0x32, .x=0xf1, .y=0x32, .sp=0x7c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7d83, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7d83, .value=0xdd, .type=IO_READ},
        {.addr=0x7d84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8d65, .a=0xfe, .x=0xda, .y=0xee, .sp=0x35, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8d65, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8d66, .a=0xee, .x=0xda, .y=0xee, .sp=0x35, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8d65, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8d65, .value=0xdd, .type=IO_READ},
        {.addr=0x8d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x84f5, .a=0x04, .x=0x0b, .y=0xd1, .sp=0x76, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x84f5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x84f6, .a=0xd1, .x=0x0b, .y=0xd1, .sp=0x76, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x84f5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x84f5, .value=0xdd, .type=IO_READ},
        {.addr=0x84f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x0bb7, .a=0xcf, .x=0x6f, .y=0xf3, .sp=0xb0, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0bb8, .a=0xf3, .x=0x6f, .y=0xf3, .sp=0xb0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0bb7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0bb7, .value=0xdd, .type=IO_READ},
        {.addr=0x0bb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xee81, .a=0x36, .x=0x21, .y=0xc6, .sp=0x44, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xee81, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xee82, .a=0xc6, .x=0x21, .y=0xc6, .sp=0x44, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xee81, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xee81, .value=0xdd, .type=IO_READ},
        {.addr=0xee82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x1d77, .a=0x80, .x=0xad, .y=0x52, .sp=0x15, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x1d77, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1d78, .a=0x52, .x=0xad, .y=0x52, .sp=0x15, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1d77, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1d77, .value=0xdd, .type=IO_READ},
        {.addr=0x1d78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x7917, .a=0xb0, .x=0x82, .y=0x48, .sp=0x15, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x7917, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7918, .a=0x48, .x=0x82, .y=0x48, .sp=0x15, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7917, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7917, .value=0xdd, .type=IO_READ},
        {.addr=0x7918, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0300) {
    const struct CPU_State initial_cpu = {.pc=0xa71a, .a=0x4e, .x=0x8b, .y=0x2d, .sp=0xda, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa71a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa71b, .a=0x2d, .x=0x8b, .y=0x2d, .sp=0xda, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa71a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa71a, .value=0xdd, .type=IO_READ},
        {.addr=0xa71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0301) {
    const struct CPU_State initial_cpu = {.pc=0x15b3, .a=0x8e, .x=0x72, .y=0xae, .sp=0x40, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x15b3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x15b4, .a=0xae, .x=0x72, .y=0xae, .sp=0x40, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x15b3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x15b3, .value=0xdd, .type=IO_READ},
        {.addr=0x15b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0302) {
    const struct CPU_State initial_cpu = {.pc=0x1c31, .a=0xe5, .x=0x41, .y=0xb1, .sp=0x7a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1c31, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1c32, .a=0xb1, .x=0x41, .y=0xb1, .sp=0x7a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1c31, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1c31, .value=0xdd, .type=IO_READ},
        {.addr=0x1c32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0303) {
    const struct CPU_State initial_cpu = {.pc=0x2666, .a=0x6e, .x=0xa9, .y=0x9e, .sp=0x83, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2666, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2667, .a=0x9e, .x=0xa9, .y=0x9e, .sp=0x83, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2666, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2666, .value=0xdd, .type=IO_READ},
        {.addr=0x2667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0304) {
    const struct CPU_State initial_cpu = {.pc=0x4f80, .a=0x4e, .x=0xa4, .y=0xf8, .sp=0x12, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4f80, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4f81, .a=0xf8, .x=0xa4, .y=0xf8, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4f80, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4f80, .value=0xdd, .type=IO_READ},
        {.addr=0x4f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0305) {
    const struct CPU_State initial_cpu = {.pc=0xef6f, .a=0x20, .x=0x80, .y=0x9b, .sp=0x98, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xef6f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xef70, .a=0x9b, .x=0x80, .y=0x9b, .sp=0x98, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xef6f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xef6f, .value=0xdd, .type=IO_READ},
        {.addr=0xef70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0306) {
    const struct CPU_State initial_cpu = {.pc=0xbf91, .a=0x61, .x=0x68, .y=0xef, .sp=0x3b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xbf91, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbf92, .a=0xef, .x=0x68, .y=0xef, .sp=0x3b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbf91, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbf91, .value=0xdd, .type=IO_READ},
        {.addr=0xbf92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2d95, .a=0xae, .x=0xd1, .y=0x84, .sp=0x7d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d95, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2d96, .a=0x84, .x=0xd1, .y=0x84, .sp=0x7d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2d95, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2d95, .value=0xdd, .type=IO_READ},
        {.addr=0x2d96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0308) {
    const struct CPU_State initial_cpu = {.pc=0xa7fe, .a=0xaf, .x=0x1a, .y=0x25, .sp=0x43, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa7ff, .a=0x25, .x=0x1a, .y=0x25, .sp=0x43, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa7fe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa7fe, .value=0xdd, .type=IO_READ},
        {.addr=0xa7ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0309) {
    const struct CPU_State initial_cpu = {.pc=0x9041, .a=0x02, .x=0x04, .y=0x75, .sp=0x09, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9041, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9042, .a=0x75, .x=0x04, .y=0x75, .sp=0x09, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9041, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9041, .value=0xdd, .type=IO_READ},
        {.addr=0x9042, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_030A) {
    const struct CPU_State initial_cpu = {.pc=0x022d, .a=0xa9, .x=0x1f, .y=0xf9, .sp=0x30, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x022d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x022e, .a=0xf9, .x=0x1f, .y=0xf9, .sp=0x30, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x022d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x022d, .value=0xdd, .type=IO_READ},
        {.addr=0x022e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_030B) {
    const struct CPU_State initial_cpu = {.pc=0xfa6f, .a=0x89, .x=0xf0, .y=0x2c, .sp=0x32, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xfa6f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfa70, .a=0x2c, .x=0xf0, .y=0x2c, .sp=0x32, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfa6f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfa6f, .value=0xdd, .type=IO_READ},
        {.addr=0xfa70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd35d, .a=0x26, .x=0x81, .y=0x1b, .sp=0xa6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd35d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd35e, .a=0x1b, .x=0x81, .y=0x1b, .sp=0xa6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd35d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd35d, .value=0xdd, .type=IO_READ},
        {.addr=0xd35e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_030D) {
    const struct CPU_State initial_cpu = {.pc=0x5ffa, .a=0x61, .x=0x4e, .y=0xe8, .sp=0xec, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5ffa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5ffb, .a=0xe8, .x=0x4e, .y=0xe8, .sp=0xec, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5ffa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5ffa, .value=0xdd, .type=IO_READ},
        {.addr=0x5ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_030E) {
    const struct CPU_State initial_cpu = {.pc=0x30b2, .a=0xee, .x=0x76, .y=0x4e, .sp=0x34, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x30b2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x30b3, .a=0x4e, .x=0x76, .y=0x4e, .sp=0x34, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x30b2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x30b2, .value=0xdd, .type=IO_READ},
        {.addr=0x30b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_030F) {
    const struct CPU_State initial_cpu = {.pc=0x8ae7, .a=0x31, .x=0xe1, .y=0x8f, .sp=0x8e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8ae8, .a=0x8f, .x=0xe1, .y=0x8f, .sp=0x8e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8ae7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8ae7, .value=0xdd, .type=IO_READ},
        {.addr=0x8ae8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0310) {
    const struct CPU_State initial_cpu = {.pc=0xb099, .a=0xa1, .x=0xf1, .y=0x18, .sp=0x7d, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb099, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb09a, .a=0x18, .x=0xf1, .y=0x18, .sp=0x7d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb099, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb099, .value=0xdd, .type=IO_READ},
        {.addr=0xb09a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0311) {
    const struct CPU_State initial_cpu = {.pc=0x6c15, .a=0x36, .x=0x75, .y=0xec, .sp=0xe3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x6c15, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6c16, .a=0xec, .x=0x75, .y=0xec, .sp=0xe3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6c15, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6c15, .value=0xdd, .type=IO_READ},
        {.addr=0x6c16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0312) {
    const struct CPU_State initial_cpu = {.pc=0xc4d0, .a=0x5c, .x=0xc3, .y=0x66, .sp=0x30, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc4d1, .a=0x66, .x=0xc3, .y=0x66, .sp=0x30, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xc4d0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc4d0, .value=0xdd, .type=IO_READ},
        {.addr=0xc4d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0313) {
    const struct CPU_State initial_cpu = {.pc=0x9afc, .a=0x0f, .x=0xf6, .y=0x1a, .sp=0xbc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9afc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9afd, .a=0x1a, .x=0xf6, .y=0x1a, .sp=0xbc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9afc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9afc, .value=0xdd, .type=IO_READ},
        {.addr=0x9afd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0314) {
    const struct CPU_State initial_cpu = {.pc=0x0803, .a=0x42, .x=0x03, .y=0x61, .sp=0xf6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0803, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0804, .a=0x61, .x=0x03, .y=0x61, .sp=0xf6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0803, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0803, .value=0xdd, .type=IO_READ},
        {.addr=0x0804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0315) {
    const struct CPU_State initial_cpu = {.pc=0x320c, .a=0x5f, .x=0x1d, .y=0x93, .sp=0xd3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x320c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x320d, .a=0x93, .x=0x1d, .y=0x93, .sp=0xd3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x320c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x320c, .value=0xdd, .type=IO_READ},
        {.addr=0x320d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0316) {
    const struct CPU_State initial_cpu = {.pc=0x49ee, .a=0xd8, .x=0x0d, .y=0x73, .sp=0xf4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x49ee, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x49ef, .a=0x73, .x=0x0d, .y=0x73, .sp=0xf4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x49ee, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x49ee, .value=0xdd, .type=IO_READ},
        {.addr=0x49ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0317) {
    const struct CPU_State initial_cpu = {.pc=0x4bde, .a=0xf1, .x=0x3b, .y=0x79, .sp=0x2a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4bde, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4bdf, .a=0x79, .x=0x3b, .y=0x79, .sp=0x2a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4bde, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4bde, .value=0xdd, .type=IO_READ},
        {.addr=0x4bdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0318) {
    const struct CPU_State initial_cpu = {.pc=0xf7a8, .a=0xff, .x=0x3b, .y=0xab, .sp=0xc6, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf7a9, .a=0xab, .x=0x3b, .y=0xab, .sp=0xc6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf7a8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf7a8, .value=0xdd, .type=IO_READ},
        {.addr=0xf7a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0319) {
    const struct CPU_State initial_cpu = {.pc=0x5f68, .a=0x76, .x=0xaf, .y=0x0d, .sp=0xbe, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5f68, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5f69, .a=0x0d, .x=0xaf, .y=0x0d, .sp=0xbe, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5f68, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5f68, .value=0xdd, .type=IO_READ},
        {.addr=0x5f69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_031A) {
    const struct CPU_State initial_cpu = {.pc=0x3a0e, .a=0x61, .x=0x7c, .y=0x04, .sp=0x07, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3a0f, .a=0x04, .x=0x7c, .y=0x04, .sp=0x07, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3a0e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3a0e, .value=0xdd, .type=IO_READ},
        {.addr=0x3a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_031B) {
    const struct CPU_State initial_cpu = {.pc=0x35d4, .a=0xde, .x=0x69, .y=0x5d, .sp=0xf8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x35d4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35d5, .a=0x5d, .x=0x69, .y=0x5d, .sp=0xf8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x35d4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35d4, .value=0xdd, .type=IO_READ},
        {.addr=0x35d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_031C) {
    const struct CPU_State initial_cpu = {.pc=0x4cc7, .a=0xb8, .x=0x8a, .y=0xce, .sp=0xf0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4cc8, .a=0xce, .x=0x8a, .y=0xce, .sp=0xf0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4cc7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4cc7, .value=0xdd, .type=IO_READ},
        {.addr=0x4cc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa775, .a=0x19, .x=0xe8, .y=0x9c, .sp=0x9c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa775, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa776, .a=0x9c, .x=0xe8, .y=0x9c, .sp=0x9c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa775, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa775, .value=0xdd, .type=IO_READ},
        {.addr=0xa776, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_031E) {
    const struct CPU_State initial_cpu = {.pc=0xe5c5, .a=0x2a, .x=0xd2, .y=0x96, .sp=0x23, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe5c6, .a=0x96, .x=0xd2, .y=0x96, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe5c5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe5c5, .value=0xdd, .type=IO_READ},
        {.addr=0xe5c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_031F) {
    const struct CPU_State initial_cpu = {.pc=0x626a, .a=0xde, .x=0xc4, .y=0x38, .sp=0xd6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x626a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x626b, .a=0x38, .x=0xc4, .y=0x38, .sp=0xd6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x626a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x626a, .value=0xdd, .type=IO_READ},
        {.addr=0x626b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0320) {
    const struct CPU_State initial_cpu = {.pc=0x14b0, .a=0x3b, .x=0x8c, .y=0x5c, .sp=0xaf, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x14b0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x14b1, .a=0x5c, .x=0x8c, .y=0x5c, .sp=0xaf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x14b0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x14b0, .value=0xdd, .type=IO_READ},
        {.addr=0x14b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0321) {
    const struct CPU_State initial_cpu = {.pc=0x8757, .a=0x0a, .x=0x65, .y=0x20, .sp=0xf7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8757, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8758, .a=0x20, .x=0x65, .y=0x20, .sp=0xf7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8757, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8757, .value=0xdd, .type=IO_READ},
        {.addr=0x8758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0322) {
    const struct CPU_State initial_cpu = {.pc=0xdba0, .a=0x15, .x=0x20, .y=0xc8, .sp=0xfc, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xdba0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdba1, .a=0xc8, .x=0x20, .y=0xc8, .sp=0xfc, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdba0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdba0, .value=0xdd, .type=IO_READ},
        {.addr=0xdba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0323) {
    const struct CPU_State initial_cpu = {.pc=0x937d, .a=0x8b, .x=0xf6, .y=0x48, .sp=0xb9, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x937d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x937e, .a=0x48, .x=0xf6, .y=0x48, .sp=0xb9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x937d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x937d, .value=0xdd, .type=IO_READ},
        {.addr=0x937e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0324) {
    const struct CPU_State initial_cpu = {.pc=0x5fe0, .a=0x56, .x=0x03, .y=0x0d, .sp=0xcc, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5fe1, .a=0x0d, .x=0x03, .y=0x0d, .sp=0xcc, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5fe0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5fe0, .value=0xdd, .type=IO_READ},
        {.addr=0x5fe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0325) {
    const struct CPU_State initial_cpu = {.pc=0xb5bc, .a=0x11, .x=0x56, .y=0xac, .sp=0xbe, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xb5bc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb5bd, .a=0xac, .x=0x56, .y=0xac, .sp=0xbe, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb5bc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb5bc, .value=0xdd, .type=IO_READ},
        {.addr=0xb5bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0326) {
    const struct CPU_State initial_cpu = {.pc=0x8e43, .a=0xa6, .x=0x54, .y=0xc5, .sp=0x48, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8e43, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8e44, .a=0xc5, .x=0x54, .y=0xc5, .sp=0x48, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8e43, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8e43, .value=0xdd, .type=IO_READ},
        {.addr=0x8e44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0327) {
    const struct CPU_State initial_cpu = {.pc=0x5928, .a=0x7c, .x=0xf2, .y=0x20, .sp=0x82, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5928, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5929, .a=0x20, .x=0xf2, .y=0x20, .sp=0x82, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5928, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5928, .value=0xdd, .type=IO_READ},
        {.addr=0x5929, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0328) {
    const struct CPU_State initial_cpu = {.pc=0x5e79, .a=0x44, .x=0x7d, .y=0xe4, .sp=0x73, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5e79, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5e7a, .a=0xe4, .x=0x7d, .y=0xe4, .sp=0x73, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5e79, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5e79, .value=0xdd, .type=IO_READ},
        {.addr=0x5e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0329) {
    const struct CPU_State initial_cpu = {.pc=0x79ad, .a=0x67, .x=0xa7, .y=0xbe, .sp=0xae, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x79ad, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x79ae, .a=0xbe, .x=0xa7, .y=0xbe, .sp=0xae, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x79ad, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x79ad, .value=0xdd, .type=IO_READ},
        {.addr=0x79ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_032A) {
    const struct CPU_State initial_cpu = {.pc=0x648f, .a=0x17, .x=0x22, .y=0xc6, .sp=0x97, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x648f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6490, .a=0xc6, .x=0x22, .y=0xc6, .sp=0x97, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x648f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x648f, .value=0xdd, .type=IO_READ},
        {.addr=0x6490, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_032B) {
    const struct CPU_State initial_cpu = {.pc=0xe7ce, .a=0x8a, .x=0xee, .y=0x60, .sp=0xfe, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ce, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe7cf, .a=0x60, .x=0xee, .y=0x60, .sp=0xfe, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe7ce, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe7ce, .value=0xdd, .type=IO_READ},
        {.addr=0xe7cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_032C) {
    const struct CPU_State initial_cpu = {.pc=0x5a5b, .a=0xaa, .x=0xdf, .y=0xd2, .sp=0x68, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5a5b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5a5c, .a=0xd2, .x=0xdf, .y=0xd2, .sp=0x68, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5a5b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5a5b, .value=0xdd, .type=IO_READ},
        {.addr=0x5a5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_032D) {
    const struct CPU_State initial_cpu = {.pc=0x295d, .a=0xae, .x=0xdf, .y=0x14, .sp=0x96, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x295d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x295e, .a=0x14, .x=0xdf, .y=0x14, .sp=0x96, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x295d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x295d, .value=0xdd, .type=IO_READ},
        {.addr=0x295e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_032E) {
    const struct CPU_State initial_cpu = {.pc=0xae7a, .a=0xb2, .x=0x16, .y=0xe0, .sp=0x7a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xae7a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xae7b, .a=0xe0, .x=0x16, .y=0xe0, .sp=0x7a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xae7a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xae7a, .value=0xdd, .type=IO_READ},
        {.addr=0xae7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_032F) {
    const struct CPU_State initial_cpu = {.pc=0x8807, .a=0xc3, .x=0x30, .y=0x2b, .sp=0x7e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8807, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8808, .a=0x2b, .x=0x30, .y=0x2b, .sp=0x7e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8807, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8807, .value=0xdd, .type=IO_READ},
        {.addr=0x8808, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0330) {
    const struct CPU_State initial_cpu = {.pc=0x44ce, .a=0xcf, .x=0x46, .y=0x7e, .sp=0x66, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x44ce, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x44cf, .a=0x7e, .x=0x46, .y=0x7e, .sp=0x66, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x44ce, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x44ce, .value=0xdd, .type=IO_READ},
        {.addr=0x44cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0331) {
    const struct CPU_State initial_cpu = {.pc=0xb5f2, .a=0xe8, .x=0xe5, .y=0xfd, .sp=0xe5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xb5f2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb5f3, .a=0xfd, .x=0xe5, .y=0xfd, .sp=0xe5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb5f2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb5f2, .value=0xdd, .type=IO_READ},
        {.addr=0xb5f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0332) {
    const struct CPU_State initial_cpu = {.pc=0xbc60, .a=0x32, .x=0xee, .y=0x6c, .sp=0xbe, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc60, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbc61, .a=0x6c, .x=0xee, .y=0x6c, .sp=0xbe, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbc60, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbc60, .value=0xdd, .type=IO_READ},
        {.addr=0xbc61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0333) {
    const struct CPU_State initial_cpu = {.pc=0x88c6, .a=0xc1, .x=0xd7, .y=0xb5, .sp=0x4e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x88c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x88c7, .a=0xb5, .x=0xd7, .y=0xb5, .sp=0x4e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x88c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x88c6, .value=0xdd, .type=IO_READ},
        {.addr=0x88c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0334) {
    const struct CPU_State initial_cpu = {.pc=0xfc07, .a=0x7d, .x=0x15, .y=0x59, .sp=0x02, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xfc07, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfc08, .a=0x59, .x=0x15, .y=0x59, .sp=0x02, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xfc07, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfc07, .value=0xdd, .type=IO_READ},
        {.addr=0xfc08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0335) {
    const struct CPU_State initial_cpu = {.pc=0x73cc, .a=0x01, .x=0x1e, .y=0xae, .sp=0x3f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x73cc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x73cd, .a=0xae, .x=0x1e, .y=0xae, .sp=0x3f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x73cc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x73cc, .value=0xdd, .type=IO_READ},
        {.addr=0x73cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0336) {
    const struct CPU_State initial_cpu = {.pc=0xb142, .a=0x2b, .x=0x43, .y=0x48, .sp=0xde, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb142, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb143, .a=0x48, .x=0x43, .y=0x48, .sp=0xde, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb142, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb142, .value=0xdd, .type=IO_READ},
        {.addr=0xb143, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0337) {
    const struct CPU_State initial_cpu = {.pc=0xf8b2, .a=0xbe, .x=0x07, .y=0x2d, .sp=0xf2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf8b2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf8b3, .a=0x2d, .x=0x07, .y=0x2d, .sp=0xf2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf8b2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf8b2, .value=0xdd, .type=IO_READ},
        {.addr=0xf8b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0338) {
    const struct CPU_State initial_cpu = {.pc=0x04cb, .a=0xfa, .x=0x66, .y=0x40, .sp=0x8f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x04cb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x04cc, .a=0x40, .x=0x66, .y=0x40, .sp=0x8f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x04cb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x04cb, .value=0xdd, .type=IO_READ},
        {.addr=0x04cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0339) {
    const struct CPU_State initial_cpu = {.pc=0xa99c, .a=0xc2, .x=0xbc, .y=0x85, .sp=0xbf, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa99c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa99d, .a=0x85, .x=0xbc, .y=0x85, .sp=0xbf, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa99c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa99c, .value=0xdd, .type=IO_READ},
        {.addr=0xa99d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_033A) {
    const struct CPU_State initial_cpu = {.pc=0x99ba, .a=0xb3, .x=0xdb, .y=0x6b, .sp=0xdb, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x99ba, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x99bb, .a=0x6b, .x=0xdb, .y=0x6b, .sp=0xdb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x99ba, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x99ba, .value=0xdd, .type=IO_READ},
        {.addr=0x99bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_033B) {
    const struct CPU_State initial_cpu = {.pc=0xd92d, .a=0x36, .x=0x7a, .y=0x6b, .sp=0xba, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd92d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd92e, .a=0x6b, .x=0x7a, .y=0x6b, .sp=0xba, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd92d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd92d, .value=0xdd, .type=IO_READ},
        {.addr=0xd92e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_033C) {
    const struct CPU_State initial_cpu = {.pc=0x2eab, .a=0x49, .x=0x8a, .y=0x31, .sp=0x13, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2eab, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2eac, .a=0x31, .x=0x8a, .y=0x31, .sp=0x13, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2eab, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2eab, .value=0xdd, .type=IO_READ},
        {.addr=0x2eac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9eb9, .a=0x8e, .x=0x31, .y=0xfb, .sp=0xa7, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9eba, .a=0xfb, .x=0x31, .y=0xfb, .sp=0xa7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9eb9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9eb9, .value=0xdd, .type=IO_READ},
        {.addr=0x9eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_033E) {
    const struct CPU_State initial_cpu = {.pc=0x8a42, .a=0x12, .x=0x8b, .y=0xce, .sp=0x5b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8a42, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8a43, .a=0xce, .x=0x8b, .y=0xce, .sp=0x5b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8a42, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8a42, .value=0xdd, .type=IO_READ},
        {.addr=0x8a43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_033F) {
    const struct CPU_State initial_cpu = {.pc=0xb795, .a=0x28, .x=0xfb, .y=0xe3, .sp=0x0c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb795, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb796, .a=0xe3, .x=0xfb, .y=0xe3, .sp=0x0c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb795, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb795, .value=0xdd, .type=IO_READ},
        {.addr=0xb796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0340) {
    const struct CPU_State initial_cpu = {.pc=0x649a, .a=0x62, .x=0x1b, .y=0x87, .sp=0xec, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x649a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x649b, .a=0x87, .x=0x1b, .y=0x87, .sp=0xec, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x649a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x649a, .value=0xdd, .type=IO_READ},
        {.addr=0x649b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0341) {
    const struct CPU_State initial_cpu = {.pc=0xdb61, .a=0x5e, .x=0x5d, .y=0x9b, .sp=0x6b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xdb61, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdb62, .a=0x9b, .x=0x5d, .y=0x9b, .sp=0x6b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdb61, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdb61, .value=0xdd, .type=IO_READ},
        {.addr=0xdb62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0342) {
    const struct CPU_State initial_cpu = {.pc=0x076e, .a=0x1a, .x=0xd0, .y=0xfe, .sp=0x94, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x076e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x076f, .a=0xfe, .x=0xd0, .y=0xfe, .sp=0x94, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x076e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x076e, .value=0xdd, .type=IO_READ},
        {.addr=0x076f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0343) {
    const struct CPU_State initial_cpu = {.pc=0xdda2, .a=0x4c, .x=0x60, .y=0x45, .sp=0x1e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xdda2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdda3, .a=0x45, .x=0x60, .y=0x45, .sp=0x1e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xdda2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdda2, .value=0xdd, .type=IO_READ},
        {.addr=0xdda3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0344) {
    const struct CPU_State initial_cpu = {.pc=0x2940, .a=0xaa, .x=0xc3, .y=0xd2, .sp=0x9c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2940, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2941, .a=0xd2, .x=0xc3, .y=0xd2, .sp=0x9c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2940, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2940, .value=0xdd, .type=IO_READ},
        {.addr=0x2941, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0345) {
    const struct CPU_State initial_cpu = {.pc=0x8267, .a=0xa6, .x=0x37, .y=0x92, .sp=0xaf, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8267, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8268, .a=0x92, .x=0x37, .y=0x92, .sp=0xaf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x8267, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8267, .value=0xdd, .type=IO_READ},
        {.addr=0x8268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0346) {
    const struct CPU_State initial_cpu = {.pc=0x3a04, .a=0xdb, .x=0x6d, .y=0x9e, .sp=0xe4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3a04, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3a05, .a=0x9e, .x=0x6d, .y=0x9e, .sp=0xe4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3a04, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3a04, .value=0xdd, .type=IO_READ},
        {.addr=0x3a05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0347) {
    const struct CPU_State initial_cpu = {.pc=0xdf1f, .a=0xef, .x=0x94, .y=0xd6, .sp=0x25, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdf20, .a=0xd6, .x=0x94, .y=0xd6, .sp=0x25, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdf1f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdf1f, .value=0xdd, .type=IO_READ},
        {.addr=0xdf20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0348) {
    const struct CPU_State initial_cpu = {.pc=0x9795, .a=0xbb, .x=0x66, .y=0xee, .sp=0xb4, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x9795, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9796, .a=0xee, .x=0x66, .y=0xee, .sp=0xb4, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9795, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9795, .value=0xdd, .type=IO_READ},
        {.addr=0x9796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0349) {
    const struct CPU_State initial_cpu = {.pc=0xf9a6, .a=0x67, .x=0xe0, .y=0xdc, .sp=0xd4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf9a6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf9a7, .a=0xdc, .x=0xe0, .y=0xdc, .sp=0xd4, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf9a6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf9a6, .value=0xdd, .type=IO_READ},
        {.addr=0xf9a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_034A) {
    const struct CPU_State initial_cpu = {.pc=0x7347, .a=0x37, .x=0x4d, .y=0xba, .sp=0x75, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7347, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7348, .a=0xba, .x=0x4d, .y=0xba, .sp=0x75, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7347, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7347, .value=0xdd, .type=IO_READ},
        {.addr=0x7348, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_034B) {
    const struct CPU_State initial_cpu = {.pc=0x23ba, .a=0xfc, .x=0x71, .y=0x44, .sp=0x3b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x23ba, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x23bb, .a=0x44, .x=0x71, .y=0x44, .sp=0x3b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x23ba, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x23ba, .value=0xdd, .type=IO_READ},
        {.addr=0x23bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_034C) {
    const struct CPU_State initial_cpu = {.pc=0x29aa, .a=0xe7, .x=0x13, .y=0xd7, .sp=0xa3, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x29aa, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x29ab, .a=0xd7, .x=0x13, .y=0xd7, .sp=0xa3, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x29aa, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x29aa, .value=0xdd, .type=IO_READ},
        {.addr=0x29ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_034D) {
    const struct CPU_State initial_cpu = {.pc=0x3f01, .a=0x2a, .x=0xba, .y=0xd7, .sp=0x95, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x3f01, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3f02, .a=0xd7, .x=0xba, .y=0xd7, .sp=0x95, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3f01, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3f01, .value=0xdd, .type=IO_READ},
        {.addr=0x3f02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_034E) {
    const struct CPU_State initial_cpu = {.pc=0x476b, .a=0x85, .x=0xb4, .y=0x90, .sp=0x4a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x476b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x476c, .a=0x90, .x=0xb4, .y=0x90, .sp=0x4a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x476b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x476b, .value=0xdd, .type=IO_READ},
        {.addr=0x476c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_034F) {
    const struct CPU_State initial_cpu = {.pc=0xb597, .a=0x77, .x=0xf2, .y=0x25, .sp=0x67, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb597, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb598, .a=0x25, .x=0xf2, .y=0x25, .sp=0x67, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb597, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb597, .value=0xdd, .type=IO_READ},
        {.addr=0xb598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0350) {
    const struct CPU_State initial_cpu = {.pc=0xcd1f, .a=0xef, .x=0x1e, .y=0x5f, .sp=0x37, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcd20, .a=0x5f, .x=0x1e, .y=0x5f, .sp=0x37, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcd1f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcd1f, .value=0xdd, .type=IO_READ},
        {.addr=0xcd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0351) {
    const struct CPU_State initial_cpu = {.pc=0x7abf, .a=0x5f, .x=0xe7, .y=0x77, .sp=0xbf, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7abf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7ac0, .a=0x77, .x=0xe7, .y=0x77, .sp=0xbf, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7abf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7abf, .value=0xdd, .type=IO_READ},
        {.addr=0x7ac0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0352) {
    const struct CPU_State initial_cpu = {.pc=0xf53a, .a=0x43, .x=0x06, .y=0x67, .sp=0xa5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf53a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf53b, .a=0x67, .x=0x06, .y=0x67, .sp=0xa5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf53a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf53a, .value=0xdd, .type=IO_READ},
        {.addr=0xf53b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0353) {
    const struct CPU_State initial_cpu = {.pc=0x6703, .a=0x49, .x=0xf6, .y=0x8e, .sp=0x49, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x6703, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6704, .a=0x8e, .x=0xf6, .y=0x8e, .sp=0x49, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6703, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6703, .value=0xdd, .type=IO_READ},
        {.addr=0x6704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0354) {
    const struct CPU_State initial_cpu = {.pc=0x5c07, .a=0x8a, .x=0xc9, .y=0x1d, .sp=0x04, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x5c07, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5c08, .a=0x1d, .x=0xc9, .y=0x1d, .sp=0x04, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5c07, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5c07, .value=0xdd, .type=IO_READ},
        {.addr=0x5c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0355) {
    const struct CPU_State initial_cpu = {.pc=0xf3a3, .a=0x49, .x=0x79, .y=0x89, .sp=0x86, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf3a4, .a=0x89, .x=0x79, .y=0x89, .sp=0x86, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf3a3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf3a3, .value=0xdd, .type=IO_READ},
        {.addr=0xf3a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0356) {
    const struct CPU_State initial_cpu = {.pc=0x4fde, .a=0x52, .x=0xf0, .y=0xc3, .sp=0x26, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4fde, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4fdf, .a=0xc3, .x=0xf0, .y=0xc3, .sp=0x26, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4fde, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4fde, .value=0xdd, .type=IO_READ},
        {.addr=0x4fdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0357) {
    const struct CPU_State initial_cpu = {.pc=0x1d32, .a=0x90, .x=0x61, .y=0x40, .sp=0xbd, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d32, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1d33, .a=0x40, .x=0x61, .y=0x40, .sp=0xbd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1d32, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1d32, .value=0xdd, .type=IO_READ},
        {.addr=0x1d33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0358) {
    const struct CPU_State initial_cpu = {.pc=0x86b3, .a=0xcf, .x=0x6f, .y=0x0f, .sp=0xa3, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x86b3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x86b4, .a=0x0f, .x=0x6f, .y=0x0f, .sp=0xa3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x86b3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x86b3, .value=0xdd, .type=IO_READ},
        {.addr=0x86b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0359) {
    const struct CPU_State initial_cpu = {.pc=0xd4e6, .a=0xdd, .x=0x87, .y=0x0a, .sp=0x4b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd4e7, .a=0x0a, .x=0x87, .y=0x0a, .sp=0x4b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd4e6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd4e6, .value=0xdd, .type=IO_READ},
        {.addr=0xd4e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_035A) {
    const struct CPU_State initial_cpu = {.pc=0x812f, .a=0xa0, .x=0xc5, .y=0x91, .sp=0x14, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x812f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8130, .a=0x91, .x=0xc5, .y=0x91, .sp=0x14, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x812f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x812f, .value=0xdd, .type=IO_READ},
        {.addr=0x8130, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0b53, .a=0xff, .x=0x62, .y=0x0b, .sp=0xfa, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0b53, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0b54, .a=0x0b, .x=0x62, .y=0x0b, .sp=0xfa, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0b53, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0b53, .value=0xdd, .type=IO_READ},
        {.addr=0x0b54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_035C) {
    const struct CPU_State initial_cpu = {.pc=0x683e, .a=0xa7, .x=0x8c, .y=0xaf, .sp=0x4d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x683e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x683f, .a=0xaf, .x=0x8c, .y=0xaf, .sp=0x4d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x683e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x683e, .value=0xdd, .type=IO_READ},
        {.addr=0x683f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_035D) {
    const struct CPU_State initial_cpu = {.pc=0x0856, .a=0x51, .x=0x18, .y=0x05, .sp=0x5f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0856, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0857, .a=0x05, .x=0x18, .y=0x05, .sp=0x5f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0856, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0856, .value=0xdd, .type=IO_READ},
        {.addr=0x0857, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_035E) {
    const struct CPU_State initial_cpu = {.pc=0x014d, .a=0x25, .x=0xc8, .y=0x9b, .sp=0xf8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x014e, .a=0x9b, .x=0xc8, .y=0x9b, .sp=0xf8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x014d, .value=0xdd, .type=IO_READ},
        {.addr=0x014e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_035F) {
    const struct CPU_State initial_cpu = {.pc=0x9d7a, .a=0xd3, .x=0x41, .y=0xa7, .sp=0x54, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x9d7a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9d7b, .a=0xa7, .x=0x41, .y=0xa7, .sp=0x54, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9d7a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9d7a, .value=0xdd, .type=IO_READ},
        {.addr=0x9d7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0360) {
    const struct CPU_State initial_cpu = {.pc=0xd61e, .a=0x41, .x=0x57, .y=0x62, .sp=0x35, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd61e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd61f, .a=0x62, .x=0x57, .y=0x62, .sp=0x35, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd61e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd61e, .value=0xdd, .type=IO_READ},
        {.addr=0xd61f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0361) {
    const struct CPU_State initial_cpu = {.pc=0xb0b8, .a=0xa6, .x=0x98, .y=0x03, .sp=0x4e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb0b9, .a=0x03, .x=0x98, .y=0x03, .sp=0x4e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb0b8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb0b8, .value=0xdd, .type=IO_READ},
        {.addr=0xb0b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0362) {
    const struct CPU_State initial_cpu = {.pc=0x3b4a, .a=0x37, .x=0x63, .y=0x4d, .sp=0xdf, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3b4a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3b4b, .a=0x4d, .x=0x63, .y=0x4d, .sp=0xdf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3b4a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3b4a, .value=0xdd, .type=IO_READ},
        {.addr=0x3b4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0363) {
    const struct CPU_State initial_cpu = {.pc=0xd7d6, .a=0xfc, .x=0xd6, .y=0xd2, .sp=0xd1, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd7d7, .a=0xd2, .x=0xd6, .y=0xd2, .sp=0xd1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd7d6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd7d6, .value=0xdd, .type=IO_READ},
        {.addr=0xd7d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0364) {
    const struct CPU_State initial_cpu = {.pc=0x3399, .a=0xc7, .x=0x30, .y=0x26, .sp=0x26, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3399, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x339a, .a=0x26, .x=0x30, .y=0x26, .sp=0x26, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3399, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3399, .value=0xdd, .type=IO_READ},
        {.addr=0x339a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0365) {
    const struct CPU_State initial_cpu = {.pc=0x3ec9, .a=0xf6, .x=0x5a, .y=0xeb, .sp=0x57, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3eca, .a=0xeb, .x=0x5a, .y=0xeb, .sp=0x57, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3ec9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3ec9, .value=0xdd, .type=IO_READ},
        {.addr=0x3eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0366) {
    const struct CPU_State initial_cpu = {.pc=0xd9ef, .a=0xc9, .x=0x66, .y=0x91, .sp=0x56, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ef, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd9f0, .a=0x91, .x=0x66, .y=0x91, .sp=0x56, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd9ef, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd9ef, .value=0xdd, .type=IO_READ},
        {.addr=0xd9f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0367) {
    const struct CPU_State initial_cpu = {.pc=0xb94f, .a=0x47, .x=0x62, .y=0x59, .sp=0x0a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xb94f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb950, .a=0x59, .x=0x62, .y=0x59, .sp=0x0a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb94f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb94f, .value=0xdd, .type=IO_READ},
        {.addr=0xb950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4d6b, .a=0x7e, .x=0x5b, .y=0x0e, .sp=0x02, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x4d6b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4d6c, .a=0x0e, .x=0x5b, .y=0x0e, .sp=0x02, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4d6b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4d6b, .value=0xdd, .type=IO_READ},
        {.addr=0x4d6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0369) {
    const struct CPU_State initial_cpu = {.pc=0x3281, .a=0xfe, .x=0x49, .y=0xd5, .sp=0xcd, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3281, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3282, .a=0xd5, .x=0x49, .y=0xd5, .sp=0xcd, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3281, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3281, .value=0xdd, .type=IO_READ},
        {.addr=0x3282, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_036A) {
    const struct CPU_State initial_cpu = {.pc=0xf572, .a=0xcb, .x=0x60, .y=0x8a, .sp=0x6f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf572, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf573, .a=0x8a, .x=0x60, .y=0x8a, .sp=0x6f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf572, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf572, .value=0xdd, .type=IO_READ},
        {.addr=0xf573, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7479, .a=0xc8, .x=0x8c, .y=0xa4, .sp=0xb1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7479, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x747a, .a=0xa4, .x=0x8c, .y=0xa4, .sp=0xb1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7479, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7479, .value=0xdd, .type=IO_READ},
        {.addr=0x747a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_036C) {
    const struct CPU_State initial_cpu = {.pc=0xf708, .a=0x9b, .x=0x19, .y=0xb8, .sp=0x4b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf708, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf709, .a=0xb8, .x=0x19, .y=0xb8, .sp=0x4b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf708, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf708, .value=0xdd, .type=IO_READ},
        {.addr=0xf709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_036D) {
    const struct CPU_State initial_cpu = {.pc=0xef05, .a=0x43, .x=0xdb, .y=0x51, .sp=0xf4, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xef05, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xef06, .a=0x51, .x=0xdb, .y=0x51, .sp=0xf4, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xef05, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xef05, .value=0xdd, .type=IO_READ},
        {.addr=0xef06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1201, .a=0xd2, .x=0xc5, .y=0xf9, .sp=0xd4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1201, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1202, .a=0xf9, .x=0xc5, .y=0xf9, .sp=0xd4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1201, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1201, .value=0xdd, .type=IO_READ},
        {.addr=0x1202, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_036F) {
    const struct CPU_State initial_cpu = {.pc=0x7145, .a=0xe4, .x=0x6b, .y=0xfb, .sp=0x3c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x7145, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7146, .a=0xfb, .x=0x6b, .y=0xfb, .sp=0x3c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7145, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7145, .value=0xdd, .type=IO_READ},
        {.addr=0x7146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0370) {
    const struct CPU_State initial_cpu = {.pc=0xccdb, .a=0x30, .x=0x7b, .y=0xc9, .sp=0x13, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xccdb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xccdc, .a=0xc9, .x=0x7b, .y=0xc9, .sp=0x13, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xccdb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xccdb, .value=0xdd, .type=IO_READ},
        {.addr=0xccdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0371) {
    const struct CPU_State initial_cpu = {.pc=0x5ebc, .a=0x2d, .x=0x0a, .y=0x1f, .sp=0x38, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5ebc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5ebd, .a=0x1f, .x=0x0a, .y=0x1f, .sp=0x38, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5ebc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5ebc, .value=0xdd, .type=IO_READ},
        {.addr=0x5ebd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0372) {
    const struct CPU_State initial_cpu = {.pc=0x37ad, .a=0x81, .x=0x95, .y=0xf9, .sp=0x10, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x37ad, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x37ae, .a=0xf9, .x=0x95, .y=0xf9, .sp=0x10, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x37ad, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x37ad, .value=0xdd, .type=IO_READ},
        {.addr=0x37ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0373) {
    const struct CPU_State initial_cpu = {.pc=0x99ad, .a=0x9e, .x=0xbe, .y=0x14, .sp=0xdd, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x99ad, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x99ae, .a=0x14, .x=0xbe, .y=0x14, .sp=0xdd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x99ad, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x99ad, .value=0xdd, .type=IO_READ},
        {.addr=0x99ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6234, .a=0x90, .x=0xd2, .y=0xc3, .sp=0x6e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6234, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6235, .a=0xc3, .x=0xd2, .y=0xc3, .sp=0x6e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6234, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6234, .value=0xdd, .type=IO_READ},
        {.addr=0x6235, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0375) {
    const struct CPU_State initial_cpu = {.pc=0x7b54, .a=0x82, .x=0xb2, .y=0x62, .sp=0xb1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b54, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7b55, .a=0x62, .x=0xb2, .y=0x62, .sp=0xb1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7b54, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7b54, .value=0xdd, .type=IO_READ},
        {.addr=0x7b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0376) {
    const struct CPU_State initial_cpu = {.pc=0x24b8, .a=0x62, .x=0xd6, .y=0x56, .sp=0x20, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x24b8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x24b9, .a=0x56, .x=0xd6, .y=0x56, .sp=0x20, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x24b8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x24b8, .value=0xdd, .type=IO_READ},
        {.addr=0x24b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0377) {
    const struct CPU_State initial_cpu = {.pc=0xb42d, .a=0x9c, .x=0x50, .y=0x9b, .sp=0x02, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb42d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb42e, .a=0x9b, .x=0x50, .y=0x9b, .sp=0x02, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb42d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb42d, .value=0xdd, .type=IO_READ},
        {.addr=0xb42e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0378) {
    const struct CPU_State initial_cpu = {.pc=0x667e, .a=0x4d, .x=0x30, .y=0xcb, .sp=0x87, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x667e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x667f, .a=0xcb, .x=0x30, .y=0xcb, .sp=0x87, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x667e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x667e, .value=0xdd, .type=IO_READ},
        {.addr=0x667f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0379) {
    const struct CPU_State initial_cpu = {.pc=0x6b10, .a=0x49, .x=0x33, .y=0x8a, .sp=0xd8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6b10, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6b11, .a=0x8a, .x=0x33, .y=0x8a, .sp=0xd8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6b10, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6b10, .value=0xdd, .type=IO_READ},
        {.addr=0x6b11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_037A) {
    const struct CPU_State initial_cpu = {.pc=0xa8ed, .a=0x38, .x=0xa0, .y=0x3d, .sp=0xa6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ed, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa8ee, .a=0x3d, .x=0xa0, .y=0x3d, .sp=0xa6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa8ed, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa8ed, .value=0xdd, .type=IO_READ},
        {.addr=0xa8ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_037B) {
    const struct CPU_State initial_cpu = {.pc=0x109e, .a=0x48, .x=0xd9, .y=0x73, .sp=0xd0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x109e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x109f, .a=0x73, .x=0xd9, .y=0x73, .sp=0xd0, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x109e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x109e, .value=0xdd, .type=IO_READ},
        {.addr=0x109f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_037C) {
    const struct CPU_State initial_cpu = {.pc=0xcd9a, .a=0x2a, .x=0x2d, .y=0x61, .sp=0x44, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xcd9a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcd9b, .a=0x61, .x=0x2d, .y=0x61, .sp=0x44, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xcd9a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcd9a, .value=0xdd, .type=IO_READ},
        {.addr=0xcd9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_037D) {
    const struct CPU_State initial_cpu = {.pc=0x8656, .a=0xf9, .x=0x65, .y=0x43, .sp=0xd3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x8656, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8657, .a=0x43, .x=0x65, .y=0x43, .sp=0xd3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8656, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8656, .value=0xdd, .type=IO_READ},
        {.addr=0x8657, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_037E) {
    const struct CPU_State initial_cpu = {.pc=0x3eb9, .a=0x0b, .x=0x07, .y=0x71, .sp=0x17, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3eba, .a=0x71, .x=0x07, .y=0x71, .sp=0x17, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3eb9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3eb9, .value=0xdd, .type=IO_READ},
        {.addr=0x3eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_037F) {
    const struct CPU_State initial_cpu = {.pc=0xa5c6, .a=0x69, .x=0xa5, .y=0x7b, .sp=0x2a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa5c7, .a=0x7b, .x=0xa5, .y=0x7b, .sp=0x2a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa5c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa5c6, .value=0xdd, .type=IO_READ},
        {.addr=0xa5c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0380) {
    const struct CPU_State initial_cpu = {.pc=0x7ae7, .a=0x60, .x=0x39, .y=0xf7, .sp=0xe6, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7ae8, .a=0xf7, .x=0x39, .y=0xf7, .sp=0xe6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7ae7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7ae7, .value=0xdd, .type=IO_READ},
        {.addr=0x7ae8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0381) {
    const struct CPU_State initial_cpu = {.pc=0x5f7c, .a=0xf1, .x=0x78, .y=0xe8, .sp=0x96, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5f7c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5f7d, .a=0xe8, .x=0x78, .y=0xe8, .sp=0x96, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5f7c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5f7c, .value=0xdd, .type=IO_READ},
        {.addr=0x5f7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0382) {
    const struct CPU_State initial_cpu = {.pc=0x9487, .a=0x07, .x=0xd9, .y=0x37, .sp=0x2e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9487, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9488, .a=0x37, .x=0xd9, .y=0x37, .sp=0x2e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9487, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9487, .value=0xdd, .type=IO_READ},
        {.addr=0x9488, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0383) {
    const struct CPU_State initial_cpu = {.pc=0xa576, .a=0xa5, .x=0x9c, .y=0x92, .sp=0xb8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa576, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa577, .a=0x92, .x=0x9c, .y=0x92, .sp=0xb8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa576, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa576, .value=0xdd, .type=IO_READ},
        {.addr=0xa577, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8f9d, .a=0x48, .x=0xc9, .y=0xd5, .sp=0x54, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8f9d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8f9e, .a=0xd5, .x=0xc9, .y=0xd5, .sp=0x54, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8f9d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8f9d, .value=0xdd, .type=IO_READ},
        {.addr=0x8f9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0385) {
    const struct CPU_State initial_cpu = {.pc=0x6d42, .a=0xaa, .x=0x3a, .y=0x2a, .sp=0xdf, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x6d42, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6d43, .a=0x2a, .x=0x3a, .y=0x2a, .sp=0xdf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6d42, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6d42, .value=0xdd, .type=IO_READ},
        {.addr=0x6d43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0386) {
    const struct CPU_State initial_cpu = {.pc=0x21c9, .a=0x76, .x=0x1d, .y=0xdf, .sp=0x94, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x21c9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x21ca, .a=0xdf, .x=0x1d, .y=0xdf, .sp=0x94, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x21c9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x21c9, .value=0xdd, .type=IO_READ},
        {.addr=0x21ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0387) {
    const struct CPU_State initial_cpu = {.pc=0x561a, .a=0xfe, .x=0xf4, .y=0x72, .sp=0xcd, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x561a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x561b, .a=0x72, .x=0xf4, .y=0x72, .sp=0xcd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x561a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x561a, .value=0xdd, .type=IO_READ},
        {.addr=0x561b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0388) {
    const struct CPU_State initial_cpu = {.pc=0xadb0, .a=0xdb, .x=0x38, .y=0xd9, .sp=0x7d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xadb0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xadb1, .a=0xd9, .x=0x38, .y=0xd9, .sp=0x7d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xadb0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xadb0, .value=0xdd, .type=IO_READ},
        {.addr=0xadb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0389) {
    const struct CPU_State initial_cpu = {.pc=0xae17, .a=0x33, .x=0x2e, .y=0x14, .sp=0x7e, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xae17, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xae18, .a=0x14, .x=0x2e, .y=0x14, .sp=0x7e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xae17, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xae17, .value=0xdd, .type=IO_READ},
        {.addr=0xae18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_038A) {
    const struct CPU_State initial_cpu = {.pc=0x75f4, .a=0xfb, .x=0x30, .y=0x7e, .sp=0xa7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x75f4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x75f5, .a=0x7e, .x=0x30, .y=0x7e, .sp=0xa7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x75f4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x75f4, .value=0xdd, .type=IO_READ},
        {.addr=0x75f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_038B) {
    const struct CPU_State initial_cpu = {.pc=0x12d6, .a=0x34, .x=0xdb, .y=0x87, .sp=0x53, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x12d6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x12d7, .a=0x87, .x=0xdb, .y=0x87, .sp=0x53, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x12d6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x12d6, .value=0xdd, .type=IO_READ},
        {.addr=0x12d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_038C) {
    const struct CPU_State initial_cpu = {.pc=0x271a, .a=0x70, .x=0x86, .y=0x22, .sp=0x32, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x271a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x271b, .a=0x22, .x=0x86, .y=0x22, .sp=0x32, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x271a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x271a, .value=0xdd, .type=IO_READ},
        {.addr=0x271b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2409, .a=0xe2, .x=0x01, .y=0x2f, .sp=0xd3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2409, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x240a, .a=0x2f, .x=0x01, .y=0x2f, .sp=0xd3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2409, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2409, .value=0xdd, .type=IO_READ},
        {.addr=0x240a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_038E) {
    const struct CPU_State initial_cpu = {.pc=0xfc69, .a=0xa2, .x=0xff, .y=0xe7, .sp=0x18, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xfc69, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfc6a, .a=0xe7, .x=0xff, .y=0xe7, .sp=0x18, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xfc69, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfc69, .value=0xdd, .type=IO_READ},
        {.addr=0xfc6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_038F) {
    const struct CPU_State initial_cpu = {.pc=0x0a62, .a=0xc4, .x=0xb8, .y=0xfd, .sp=0xa6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0a62, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0a63, .a=0xfd, .x=0xb8, .y=0xfd, .sp=0xa6, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0a62, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0a62, .value=0xdd, .type=IO_READ},
        {.addr=0x0a63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0390) {
    const struct CPU_State initial_cpu = {.pc=0x2722, .a=0xd1, .x=0x54, .y=0xb3, .sp=0xe2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2722, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2723, .a=0xb3, .x=0x54, .y=0xb3, .sp=0xe2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2722, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2722, .value=0xdd, .type=IO_READ},
        {.addr=0x2723, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0391) {
    const struct CPU_State initial_cpu = {.pc=0xa7a9, .a=0xed, .x=0x88, .y=0xbe, .sp=0x5a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xa7a9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa7aa, .a=0xbe, .x=0x88, .y=0xbe, .sp=0x5a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa7a9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa7a9, .value=0xdd, .type=IO_READ},
        {.addr=0xa7aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0392) {
    const struct CPU_State initial_cpu = {.pc=0x76eb, .a=0x14, .x=0x23, .y=0xe5, .sp=0x9a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x76eb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x76ec, .a=0xe5, .x=0x23, .y=0xe5, .sp=0x9a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x76eb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x76eb, .value=0xdd, .type=IO_READ},
        {.addr=0x76ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0393) {
    const struct CPU_State initial_cpu = {.pc=0x72d6, .a=0x92, .x=0x02, .y=0xb1, .sp=0x54, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x72d6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x72d7, .a=0xb1, .x=0x02, .y=0xb1, .sp=0x54, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x72d6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x72d6, .value=0xdd, .type=IO_READ},
        {.addr=0x72d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0394) {
    const struct CPU_State initial_cpu = {.pc=0x23fc, .a=0xde, .x=0x7a, .y=0x07, .sp=0xe1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x23fc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x23fd, .a=0x07, .x=0x7a, .y=0x07, .sp=0xe1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x23fc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x23fc, .value=0xdd, .type=IO_READ},
        {.addr=0x23fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0395) {
    const struct CPU_State initial_cpu = {.pc=0xa782, .a=0x80, .x=0x43, .y=0x60, .sp=0xae, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa782, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa783, .a=0x60, .x=0x43, .y=0x60, .sp=0xae, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa782, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa782, .value=0xdd, .type=IO_READ},
        {.addr=0xa783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0396) {
    const struct CPU_State initial_cpu = {.pc=0x0a91, .a=0x49, .x=0xd0, .y=0x1a, .sp=0xc4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0a91, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0a92, .a=0x1a, .x=0xd0, .y=0x1a, .sp=0xc4, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0a91, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0a91, .value=0xdd, .type=IO_READ},
        {.addr=0x0a92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0397) {
    const struct CPU_State initial_cpu = {.pc=0xa4bc, .a=0x1a, .x=0x48, .y=0xd0, .sp=0x40, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xa4bc, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa4bd, .a=0xd0, .x=0x48, .y=0xd0, .sp=0x40, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa4bc, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa4bc, .value=0xdd, .type=IO_READ},
        {.addr=0xa4bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0398) {
    const struct CPU_State initial_cpu = {.pc=0x61b6, .a=0x97, .x=0x3f, .y=0x80, .sp=0x02, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x61b6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x61b7, .a=0x80, .x=0x3f, .y=0x80, .sp=0x02, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x61b6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x61b6, .value=0xdd, .type=IO_READ},
        {.addr=0x61b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_0399) {
    const struct CPU_State initial_cpu = {.pc=0x8135, .a=0x7f, .x=0x93, .y=0x69, .sp=0xa4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8135, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8136, .a=0x69, .x=0x93, .y=0x69, .sp=0xa4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8135, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8135, .value=0xdd, .type=IO_READ},
        {.addr=0x8136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_039A) {
    const struct CPU_State initial_cpu = {.pc=0x8ba3, .a=0xe3, .x=0xc9, .y=0x39, .sp=0x76, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8ba4, .a=0x39, .x=0xc9, .y=0x39, .sp=0x76, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8ba3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8ba3, .value=0xdd, .type=IO_READ},
        {.addr=0x8ba4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_039B) {
    const struct CPU_State initial_cpu = {.pc=0xbe29, .a=0x43, .x=0x95, .y=0xea, .sp=0x6e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe29, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbe2a, .a=0xea, .x=0x95, .y=0xea, .sp=0x6e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xbe29, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbe29, .value=0xdd, .type=IO_READ},
        {.addr=0xbe2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_039C) {
    const struct CPU_State initial_cpu = {.pc=0x2554, .a=0x3a, .x=0xe0, .y=0x1a, .sp=0x38, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2554, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2555, .a=0x1a, .x=0xe0, .y=0x1a, .sp=0x38, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2554, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2554, .value=0xdd, .type=IO_READ},
        {.addr=0x2555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_039D) {
    const struct CPU_State initial_cpu = {.pc=0x9d67, .a=0x83, .x=0xa6, .y=0x03, .sp=0xc1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x9d67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9d68, .a=0x03, .x=0xa6, .y=0x03, .sp=0xc1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9d67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9d67, .value=0xdd, .type=IO_READ},
        {.addr=0x9d68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_039E) {
    const struct CPU_State initial_cpu = {.pc=0xda12, .a=0x7c, .x=0xb9, .y=0x64, .sp=0x7a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xda12, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xda13, .a=0x64, .x=0xb9, .y=0x64, .sp=0x7a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xda12, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xda12, .value=0xdd, .type=IO_READ},
        {.addr=0xda13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_039F) {
    const struct CPU_State initial_cpu = {.pc=0x77e5, .a=0xc0, .x=0x82, .y=0x63, .sp=0xdb, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x77e5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x77e6, .a=0x63, .x=0x82, .y=0x63, .sp=0xdb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x77e5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x77e5, .value=0xdd, .type=IO_READ},
        {.addr=0x77e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x9d2e, .a=0x79, .x=0xa1, .y=0xfd, .sp=0x18, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9d2f, .a=0xfd, .x=0xa1, .y=0xfd, .sp=0x18, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9d2e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9d2e, .value=0xdd, .type=IO_READ},
        {.addr=0x9d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x9a6e, .a=0xf7, .x=0x41, .y=0xd7, .sp=0x4b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9a6e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9a6f, .a=0xd7, .x=0x41, .y=0xd7, .sp=0x4b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9a6e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9a6e, .value=0xdd, .type=IO_READ},
        {.addr=0x9a6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x2e94, .a=0xb3, .x=0x20, .y=0x88, .sp=0x0f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2e94, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2e95, .a=0x88, .x=0x20, .y=0x88, .sp=0x0f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2e94, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2e94, .value=0xdd, .type=IO_READ},
        {.addr=0x2e95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xcf76, .a=0x74, .x=0xda, .y=0x87, .sp=0xc3, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xcf76, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcf77, .a=0x87, .x=0xda, .y=0x87, .sp=0xc3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcf76, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcf76, .value=0xdd, .type=IO_READ},
        {.addr=0xcf77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4c29, .a=0x01, .x=0x5f, .y=0x88, .sp=0x24, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4c29, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c2a, .a=0x88, .x=0x5f, .y=0x88, .sp=0x24, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4c29, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c29, .value=0xdd, .type=IO_READ},
        {.addr=0x4c2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xc3fe, .a=0x61, .x=0x9d, .y=0x2f, .sp=0xad, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc3fe, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc3ff, .a=0x2f, .x=0x9d, .y=0x2f, .sp=0xad, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc3fe, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc3fe, .value=0xdd, .type=IO_READ},
        {.addr=0xc3ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xfa4b, .a=0x58, .x=0xbe, .y=0x9c, .sp=0xf7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfa4c, .a=0x9c, .x=0xbe, .y=0x9c, .sp=0xf7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xfa4b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfa4b, .value=0xdd, .type=IO_READ},
        {.addr=0xfa4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xef88, .a=0x08, .x=0x18, .y=0x71, .sp=0x1e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xef88, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xef89, .a=0x71, .x=0x18, .y=0x71, .sp=0x1e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xef88, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xef88, .value=0xdd, .type=IO_READ},
        {.addr=0xef89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x35e0, .a=0x87, .x=0xd5, .y=0x17, .sp=0x1c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x35e0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35e1, .a=0x17, .x=0xd5, .y=0x17, .sp=0x1c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x35e0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35e0, .value=0xdd, .type=IO_READ},
        {.addr=0x35e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x2978, .a=0x29, .x=0xc1, .y=0xf2, .sp=0x6b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x2978, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2979, .a=0xf2, .x=0xc1, .y=0xf2, .sp=0x6b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2978, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2978, .value=0xdd, .type=IO_READ},
        {.addr=0x2979, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x3d8f, .a=0x5c, .x=0xcb, .y=0xd2, .sp=0x9a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3d90, .a=0xd2, .x=0xcb, .y=0xd2, .sp=0x9a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3d8f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3d8f, .value=0xdd, .type=IO_READ},
        {.addr=0x3d90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xc0d0, .a=0xe2, .x=0xb3, .y=0x18, .sp=0xf2, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc0d1, .a=0x18, .x=0xb3, .y=0x18, .sp=0xf2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc0d0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc0d0, .value=0xdd, .type=IO_READ},
        {.addr=0xc0d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xc319, .a=0xa6, .x=0x4c, .y=0x86, .sp=0x67, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc319, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc31a, .a=0x86, .x=0x4c, .y=0x86, .sp=0x67, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc319, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc319, .value=0xdd, .type=IO_READ},
        {.addr=0xc31a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x7318, .a=0xa8, .x=0xaa, .y=0x72, .sp=0x83, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7318, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7319, .a=0x72, .x=0xaa, .y=0x72, .sp=0x83, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7318, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7318, .value=0xdd, .type=IO_READ},
        {.addr=0x7319, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x5ca8, .a=0xb6, .x=0xd6, .y=0x21, .sp=0x9d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5ca9, .a=0x21, .x=0xd6, .y=0x21, .sp=0x9d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5ca8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5ca8, .value=0xdd, .type=IO_READ},
        {.addr=0x5ca9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x1cd8, .a=0x12, .x=0xde, .y=0x93, .sp=0x2f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1cd9, .a=0x93, .x=0xde, .y=0x93, .sp=0x2f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1cd8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1cd8, .value=0xdd, .type=IO_READ},
        {.addr=0x1cd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x4c6b, .a=0xff, .x=0x54, .y=0x6e, .sp=0x51, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4c6b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c6c, .a=0x6e, .x=0x54, .y=0x6e, .sp=0x51, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4c6b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c6b, .value=0xdd, .type=IO_READ},
        {.addr=0x4c6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x29be, .a=0xa1, .x=0x3f, .y=0x4d, .sp=0xf3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x29be, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x29bf, .a=0x4d, .x=0x3f, .y=0x4d, .sp=0xf3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x29be, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x29be, .value=0xdd, .type=IO_READ},
        {.addr=0x29bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x9a0c, .a=0x67, .x=0x32, .y=0xc2, .sp=0x2e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x9a0c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9a0d, .a=0xc2, .x=0x32, .y=0xc2, .sp=0x2e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9a0c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9a0c, .value=0xdd, .type=IO_READ},
        {.addr=0x9a0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x2791, .a=0x38, .x=0x31, .y=0x6d, .sp=0x69, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2791, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2792, .a=0x6d, .x=0x31, .y=0x6d, .sp=0x69, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2791, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2791, .value=0xdd, .type=IO_READ},
        {.addr=0x2792, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3c21, .a=0x4e, .x=0x0d, .y=0xa9, .sp=0x06, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3c21, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3c22, .a=0xa9, .x=0x0d, .y=0xa9, .sp=0x06, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3c21, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3c21, .value=0xdd, .type=IO_READ},
        {.addr=0x3c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x3f65, .a=0x81, .x=0x1c, .y=0x59, .sp=0xaf, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3f65, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3f66, .a=0x59, .x=0x1c, .y=0x59, .sp=0xaf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3f65, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3f65, .value=0xdd, .type=IO_READ},
        {.addr=0x3f66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x0dd7, .a=0x60, .x=0x27, .y=0xf4, .sp=0xfc, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0dd8, .a=0xf4, .x=0x27, .y=0xf4, .sp=0xfc, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0dd7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0dd7, .value=0xdd, .type=IO_READ},
        {.addr=0x0dd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x7074, .a=0xdb, .x=0xd9, .y=0xbc, .sp=0x26, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7074, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7075, .a=0xbc, .x=0xd9, .y=0xbc, .sp=0x26, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7074, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7074, .value=0xdd, .type=IO_READ},
        {.addr=0x7075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x4c9d, .a=0x9e, .x=0x7b, .y=0xe0, .sp=0xcb, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c9e, .a=0xe0, .x=0x7b, .y=0xe0, .sp=0xcb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4c9d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c9d, .value=0xdd, .type=IO_READ},
        {.addr=0x4c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x4ea0, .a=0xd0, .x=0xc2, .y=0xa1, .sp=0x7f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4ea1, .a=0xa1, .x=0xc2, .y=0xa1, .sp=0x7f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4ea0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4ea0, .value=0xdd, .type=IO_READ},
        {.addr=0x4ea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xf53f, .a=0xe4, .x=0xe5, .y=0xb6, .sp=0x63, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf53f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf540, .a=0xb6, .x=0xe5, .y=0xb6, .sp=0x63, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf53f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf53f, .value=0xdd, .type=IO_READ},
        {.addr=0xf540, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xf838, .a=0x4c, .x=0xdc, .y=0x31, .sp=0x2e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf838, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf839, .a=0x31, .x=0xdc, .y=0x31, .sp=0x2e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf838, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf838, .value=0xdd, .type=IO_READ},
        {.addr=0xf839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x31c5, .a=0x4d, .x=0x39, .y=0x2a, .sp=0xf0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x31c5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x31c6, .a=0x2a, .x=0x39, .y=0x2a, .sp=0xf0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x31c5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x31c5, .value=0xdd, .type=IO_READ},
        {.addr=0x31c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xb39e, .a=0x30, .x=0x74, .y=0x22, .sp=0x4b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb39e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb39f, .a=0x22, .x=0x74, .y=0x22, .sp=0x4b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb39e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb39e, .value=0xdd, .type=IO_READ},
        {.addr=0xb39f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x1de6, .a=0x64, .x=0xc0, .y=0x0c, .sp=0xb2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1de6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1de7, .a=0x0c, .x=0xc0, .y=0x0c, .sp=0xb2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1de6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1de6, .value=0xdd, .type=IO_READ},
        {.addr=0x1de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xf910, .a=0x6f, .x=0x93, .y=0x30, .sp=0xe6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf910, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf911, .a=0x30, .x=0x93, .y=0x30, .sp=0xe6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf910, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf910, .value=0xdd, .type=IO_READ},
        {.addr=0xf911, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x2047, .a=0xb4, .x=0x7b, .y=0x5b, .sp=0xde, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x2047, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2048, .a=0x5b, .x=0x7b, .y=0x5b, .sp=0xde, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2047, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2047, .value=0xdd, .type=IO_READ},
        {.addr=0x2048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x7362, .a=0xb3, .x=0x1c, .y=0xb7, .sp=0x32, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x7362, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7363, .a=0xb7, .x=0x1c, .y=0xb7, .sp=0x32, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7362, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7362, .value=0xdd, .type=IO_READ},
        {.addr=0x7363, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x08ee, .a=0xa1, .x=0xb5, .y=0xca, .sp=0x45, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x08ee, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x08ef, .a=0xca, .x=0xb5, .y=0xca, .sp=0x45, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x08ee, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x08ee, .value=0xdd, .type=IO_READ},
        {.addr=0x08ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x35ad, .a=0x41, .x=0xa3, .y=0x00, .sp=0xef, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x35ad, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35ae, .a=0x00, .x=0xa3, .y=0x00, .sp=0xef, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x35ad, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35ad, .value=0xdd, .type=IO_READ},
        {.addr=0x35ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xdbb1, .a=0x91, .x=0xa8, .y=0x47, .sp=0x85, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xdbb1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdbb2, .a=0x47, .x=0xa8, .y=0x47, .sp=0x85, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xdbb1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdbb1, .value=0xdd, .type=IO_READ},
        {.addr=0xdbb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x7b93, .a=0xcd, .x=0x3d, .y=0xb9, .sp=0x5a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7b93, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7b94, .a=0xb9, .x=0x3d, .y=0xb9, .sp=0x5a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x7b93, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7b93, .value=0xdd, .type=IO_READ},
        {.addr=0x7b94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x51ba, .a=0x22, .x=0x4d, .y=0xfb, .sp=0xce, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x51ba, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x51bb, .a=0xfb, .x=0x4d, .y=0xfb, .sp=0xce, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x51ba, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x51ba, .value=0xdd, .type=IO_READ},
        {.addr=0x51bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x5573, .a=0x41, .x=0x40, .y=0x4f, .sp=0x74, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x5573, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5574, .a=0x4f, .x=0x40, .y=0x4f, .sp=0x74, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5573, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5573, .value=0xdd, .type=IO_READ},
        {.addr=0x5574, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x08a6, .a=0x7e, .x=0x6b, .y=0xb4, .sp=0xc1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x08a6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x08a7, .a=0xb4, .x=0x6b, .y=0xb4, .sp=0xc1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x08a6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x08a6, .value=0xdd, .type=IO_READ},
        {.addr=0x08a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x31f8, .a=0x48, .x=0x4d, .y=0xe5, .sp=0x66, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x31f8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x31f9, .a=0xe5, .x=0x4d, .y=0xe5, .sp=0x66, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x31f8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x31f8, .value=0xdd, .type=IO_READ},
        {.addr=0x31f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x46d0, .a=0x52, .x=0xaa, .y=0x70, .sp=0x52, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x46d0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x46d1, .a=0x70, .x=0xaa, .y=0x70, .sp=0x52, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x46d0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x46d0, .value=0xdd, .type=IO_READ},
        {.addr=0x46d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x2a8d, .a=0xcd, .x=0xb1, .y=0xd1, .sp=0xc4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a8d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2a8e, .a=0xd1, .x=0xb1, .y=0xd1, .sp=0xc4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2a8d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2a8d, .value=0xdd, .type=IO_READ},
        {.addr=0x2a8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x8dd7, .a=0x4f, .x=0xbc, .y=0x48, .sp=0xf6, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8dd8, .a=0x48, .x=0xbc, .y=0x48, .sp=0xf6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8dd7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8dd7, .value=0xdd, .type=IO_READ},
        {.addr=0x8dd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x82e8, .a=0x19, .x=0x3a, .y=0x5e, .sp=0xdc, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x82e8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x82e9, .a=0x5e, .x=0x3a, .y=0x5e, .sp=0xdc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x82e8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x82e8, .value=0xdd, .type=IO_READ},
        {.addr=0x82e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xce67, .a=0xa5, .x=0x02, .y=0x9e, .sp=0x27, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xce67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xce68, .a=0x9e, .x=0x02, .y=0x9e, .sp=0x27, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xce67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xce67, .value=0xdd, .type=IO_READ},
        {.addr=0xce68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x9bb5, .a=0x71, .x=0xf9, .y=0x4c, .sp=0x7f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9bb6, .a=0x4c, .x=0xf9, .y=0x4c, .sp=0x7f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9bb5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9bb5, .value=0xdd, .type=IO_READ},
        {.addr=0x9bb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x35f1, .a=0x5b, .x=0x7f, .y=0x17, .sp=0xdb, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x35f1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x35f2, .a=0x17, .x=0x7f, .y=0x17, .sp=0xdb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x35f1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x35f1, .value=0xdd, .type=IO_READ},
        {.addr=0x35f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xcdd9, .a=0xca, .x=0xca, .y=0x97, .sp=0x80, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcdda, .a=0x97, .x=0xca, .y=0x97, .sp=0x80, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcdd9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcdd9, .value=0xdd, .type=IO_READ},
        {.addr=0xcdda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x9c79, .a=0xa0, .x=0xbc, .y=0x84, .sp=0x18, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9c79, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9c7a, .a=0x84, .x=0xbc, .y=0x84, .sp=0x18, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9c79, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9c79, .value=0xdd, .type=IO_READ},
        {.addr=0x9c7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x3139, .a=0x04, .x=0x90, .y=0xa0, .sp=0xbd, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3139, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x313a, .a=0xa0, .x=0x90, .y=0xa0, .sp=0xbd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3139, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3139, .value=0xdd, .type=IO_READ},
        {.addr=0x313a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x6eb6, .a=0x64, .x=0xed, .y=0x66, .sp=0x32, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6eb6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6eb7, .a=0x66, .x=0xed, .y=0x66, .sp=0x32, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6eb6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6eb6, .value=0xdd, .type=IO_READ},
        {.addr=0x6eb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xedd8, .a=0xb1, .x=0x12, .y=0xef, .sp=0x11, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xedd8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xedd9, .a=0xef, .x=0x12, .y=0xef, .sp=0x11, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xedd8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xedd8, .value=0xdd, .type=IO_READ},
        {.addr=0xedd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xea89, .a=0x54, .x=0xbe, .y=0xc9, .sp=0x44, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xea89, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea8a, .a=0xc9, .x=0xbe, .y=0xc9, .sp=0x44, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xea89, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea89, .value=0xdd, .type=IO_READ},
        {.addr=0xea8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x354e, .a=0x1f, .x=0x4f, .y=0xc4, .sp=0x03, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x354e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x354f, .a=0xc4, .x=0x4f, .y=0xc4, .sp=0x03, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x354e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x354e, .value=0xdd, .type=IO_READ},
        {.addr=0x354f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x64ca, .a=0x9e, .x=0xae, .y=0x82, .sp=0xdb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x64ca, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x64cb, .a=0x82, .x=0xae, .y=0x82, .sp=0xdb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x64ca, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x64ca, .value=0xdd, .type=IO_READ},
        {.addr=0x64cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x8c07, .a=0xf4, .x=0xde, .y=0xd7, .sp=0x38, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x8c07, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8c08, .a=0xd7, .x=0xde, .y=0xd7, .sp=0x38, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8c07, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8c07, .value=0xdd, .type=IO_READ},
        {.addr=0x8c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xf124, .a=0x9a, .x=0xaa, .y=0xc9, .sp=0x23, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf124, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf125, .a=0xc9, .x=0xaa, .y=0xc9, .sp=0x23, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf124, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf124, .value=0xdd, .type=IO_READ},
        {.addr=0xf125, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xc362, .a=0x0f, .x=0x72, .y=0xdb, .sp=0x69, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xc362, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc363, .a=0xdb, .x=0x72, .y=0xdb, .sp=0x69, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc362, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc362, .value=0xdd, .type=IO_READ},
        {.addr=0xc363, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xfa85, .a=0xe8, .x=0x62, .y=0x58, .sp=0x66, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xfa85, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfa86, .a=0x58, .x=0x62, .y=0x58, .sp=0x66, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfa85, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfa85, .value=0xdd, .type=IO_READ},
        {.addr=0xfa86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x885e, .a=0x38, .x=0xef, .y=0xf2, .sp=0xbb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x885e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x885f, .a=0xf2, .x=0xef, .y=0xf2, .sp=0xbb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x885e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x885e, .value=0xdd, .type=IO_READ},
        {.addr=0x885f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x6699, .a=0x9c, .x=0x65, .y=0x41, .sp=0xc5, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6699, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x669a, .a=0x41, .x=0x65, .y=0x41, .sp=0xc5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6699, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6699, .value=0xdd, .type=IO_READ},
        {.addr=0x669a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x5e1e, .a=0xd2, .x=0x2d, .y=0x54, .sp=0x8b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5e1f, .a=0x54, .x=0x2d, .y=0x54, .sp=0x8b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5e1e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5e1e, .value=0xdd, .type=IO_READ},
        {.addr=0x5e1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x8e54, .a=0xf5, .x=0x05, .y=0x6f, .sp=0x78, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8e54, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8e55, .a=0x6f, .x=0x05, .y=0x6f, .sp=0x78, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8e54, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8e54, .value=0xdd, .type=IO_READ},
        {.addr=0x8e55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xbf16, .a=0x16, .x=0xdb, .y=0xb2, .sp=0x9a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xbf16, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xbf17, .a=0xb2, .x=0xdb, .y=0xb2, .sp=0x9a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbf16, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xbf16, .value=0xdd, .type=IO_READ},
        {.addr=0xbf17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x64b3, .a=0xfa, .x=0x84, .y=0x5b, .sp=0xeb, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x64b3, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x64b4, .a=0x5b, .x=0x84, .y=0x5b, .sp=0xeb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x64b3, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x64b3, .value=0xdd, .type=IO_READ},
        {.addr=0x64b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x0664, .a=0xea, .x=0xfc, .y=0x75, .sp=0x23, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0664, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0665, .a=0x75, .x=0xfc, .y=0x75, .sp=0x23, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0664, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0664, .value=0xdd, .type=IO_READ},
        {.addr=0x0665, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xb03d, .a=0x09, .x=0xac, .y=0x2e, .sp=0xbb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb03d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb03e, .a=0x2e, .x=0xac, .y=0x2e, .sp=0xbb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb03d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb03d, .value=0xdd, .type=IO_READ},
        {.addr=0xb03e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x2ba0, .a=0x47, .x=0x78, .y=0x65, .sp=0x84, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba0, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2ba1, .a=0x65, .x=0x78, .y=0x65, .sp=0x84, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2ba0, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2ba0, .value=0xdd, .type=IO_READ},
        {.addr=0x2ba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xcf2d, .a=0x82, .x=0x9e, .y=0x25, .sp=0xa5, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xcf2d, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcf2e, .a=0x25, .x=0x9e, .y=0x25, .sp=0xa5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xcf2d, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcf2d, .value=0xdd, .type=IO_READ},
        {.addr=0xcf2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DD, _DD_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x10e4, .a=0x25, .x=0x88, .y=0x2e, .sp=0x5a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x10e4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x10e5, .a=0x2e, .x=0x88, .y=0x2e, .sp=0x5a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x10e4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x10e4, .value=0xdd, .type=IO_READ},
        {.addr=0x10e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DD 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
