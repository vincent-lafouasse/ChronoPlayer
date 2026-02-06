#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_BC, _BC_0000) {
    const struct CPU_State initial_cpu = {.pc=0xc477, .a=0x24, .x=0xa2, .y=0xb2, .sp=0x33, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc477, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc478, .a=0x25, .x=0xa2, .y=0xb2, .sp=0x33, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc477, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc477, .value=0xbc, .type=IO_READ},
        {.addr=0xc478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0001) {
    const struct CPU_State initial_cpu = {.pc=0x927c, .a=0x43, .x=0x25, .y=0xc6, .sp=0x46, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x927c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x927d, .a=0x44, .x=0x25, .y=0xc6, .sp=0x46, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x927c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x927c, .value=0xbc, .type=IO_READ},
        {.addr=0x927d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0002) {
    const struct CPU_State initial_cpu = {.pc=0x673a, .a=0x56, .x=0x15, .y=0x13, .sp=0x77, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x673a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x673b, .a=0x57, .x=0x15, .y=0x13, .sp=0x77, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x673a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x673a, .value=0xbc, .type=IO_READ},
        {.addr=0x673b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0003) {
    const struct CPU_State initial_cpu = {.pc=0x80ed, .a=0x55, .x=0x69, .y=0x30, .sp=0x4a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x80ed, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x80ee, .a=0x56, .x=0x69, .y=0x30, .sp=0x4a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x80ed, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x80ed, .value=0xbc, .type=IO_READ},
        {.addr=0x80ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0004) {
    const struct CPU_State initial_cpu = {.pc=0xea7d, .a=0xcb, .x=0x4e, .y=0x73, .sp=0x0b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xea7d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xea7e, .a=0xcc, .x=0x4e, .y=0x73, .sp=0x0b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xea7d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xea7d, .value=0xbc, .type=IO_READ},
        {.addr=0xea7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0005) {
    const struct CPU_State initial_cpu = {.pc=0x5afc, .a=0x30, .x=0xca, .y=0x19, .sp=0x81, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x5afc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5afd, .a=0x31, .x=0xca, .y=0x19, .sp=0x81, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5afc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5afc, .value=0xbc, .type=IO_READ},
        {.addr=0x5afd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0006) {
    const struct CPU_State initial_cpu = {.pc=0xc75a, .a=0xc0, .x=0x9f, .y=0x6b, .sp=0xed, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xc75a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc75b, .a=0xc1, .x=0x9f, .y=0x6b, .sp=0xed, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc75a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc75a, .value=0xbc, .type=IO_READ},
        {.addr=0xc75b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0007) {
    const struct CPU_State initial_cpu = {.pc=0x1896, .a=0xb9, .x=0xd8, .y=0x6a, .sp=0x7f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x1896, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1897, .a=0xba, .x=0xd8, .y=0x6a, .sp=0x7f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1896, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1896, .value=0xbc, .type=IO_READ},
        {.addr=0x1897, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0008) {
    const struct CPU_State initial_cpu = {.pc=0x4d1b, .a=0x96, .x=0xe7, .y=0x8e, .sp=0x09, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4d1b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4d1c, .a=0x97, .x=0xe7, .y=0x8e, .sp=0x09, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4d1b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4d1b, .value=0xbc, .type=IO_READ},
        {.addr=0x4d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0009) {
    const struct CPU_State initial_cpu = {.pc=0x7d4c, .a=0x46, .x=0x6b, .y=0x3c, .sp=0x8c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7d4c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7d4d, .a=0x47, .x=0x6b, .y=0x3c, .sp=0x8c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7d4c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7d4c, .value=0xbc, .type=IO_READ},
        {.addr=0x7d4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_000A) {
    const struct CPU_State initial_cpu = {.pc=0x882f, .a=0xd2, .x=0xfd, .y=0x02, .sp=0xd4, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x882f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8830, .a=0xd3, .x=0xfd, .y=0x02, .sp=0xd4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x882f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x882f, .value=0xbc, .type=IO_READ},
        {.addr=0x8830, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_000B) {
    const struct CPU_State initial_cpu = {.pc=0xb907, .a=0x1c, .x=0xd5, .y=0x7a, .sp=0x73, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb907, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb908, .a=0x1d, .x=0xd5, .y=0x7a, .sp=0x73, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb907, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb907, .value=0xbc, .type=IO_READ},
        {.addr=0xb908, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_000C) {
    const struct CPU_State initial_cpu = {.pc=0x6704, .a=0x01, .x=0xcc, .y=0x2d, .sp=0xb1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6704, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6705, .a=0x02, .x=0xcc, .y=0x2d, .sp=0xb1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6704, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6704, .value=0xbc, .type=IO_READ},
        {.addr=0x6705, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_000D) {
    const struct CPU_State initial_cpu = {.pc=0xe047, .a=0x93, .x=0x63, .y=0xcc, .sp=0xa1, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe047, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe048, .a=0x94, .x=0x63, .y=0xcc, .sp=0xa1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe047, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe047, .value=0xbc, .type=IO_READ},
        {.addr=0xe048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_000E) {
    const struct CPU_State initial_cpu = {.pc=0x1822, .a=0x56, .x=0x93, .y=0x9c, .sp=0x04, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1822, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1823, .a=0x57, .x=0x93, .y=0x9c, .sp=0x04, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1822, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1822, .value=0xbc, .type=IO_READ},
        {.addr=0x1823, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_000F) {
    const struct CPU_State initial_cpu = {.pc=0x2d1b, .a=0x53, .x=0x58, .y=0xaf, .sp=0x75, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2d1b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2d1c, .a=0x54, .x=0x58, .y=0xaf, .sp=0x75, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2d1b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2d1b, .value=0xbc, .type=IO_READ},
        {.addr=0x2d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0010) {
    const struct CPU_State initial_cpu = {.pc=0x9e82, .a=0xc9, .x=0x48, .y=0x72, .sp=0xde, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9e82, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9e83, .a=0xca, .x=0x48, .y=0x72, .sp=0xde, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9e82, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9e82, .value=0xbc, .type=IO_READ},
        {.addr=0x9e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0011) {
    const struct CPU_State initial_cpu = {.pc=0xbf93, .a=0xa1, .x=0x47, .y=0xfe, .sp=0x79, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xbf93, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbf94, .a=0xa2, .x=0x47, .y=0xfe, .sp=0x79, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbf93, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbf93, .value=0xbc, .type=IO_READ},
        {.addr=0xbf94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0012) {
    const struct CPU_State initial_cpu = {.pc=0x709d, .a=0x39, .x=0xa1, .y=0x61, .sp=0x1c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x709d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x709e, .a=0x3a, .x=0xa1, .y=0x61, .sp=0x1c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x709d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x709d, .value=0xbc, .type=IO_READ},
        {.addr=0x709e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0013) {
    const struct CPU_State initial_cpu = {.pc=0xce68, .a=0x8f, .x=0x9c, .y=0xea, .sp=0x91, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xce68, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xce69, .a=0x90, .x=0x9c, .y=0xea, .sp=0x91, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xce68, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xce68, .value=0xbc, .type=IO_READ},
        {.addr=0xce69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0014) {
    const struct CPU_State initial_cpu = {.pc=0xd2c1, .a=0x5e, .x=0xc7, .y=0xcf, .sp=0x9f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd2c2, .a=0x5f, .x=0xc7, .y=0xcf, .sp=0x9f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd2c1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd2c1, .value=0xbc, .type=IO_READ},
        {.addr=0xd2c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0015) {
    const struct CPU_State initial_cpu = {.pc=0x815d, .a=0x14, .x=0x98, .y=0x50, .sp=0x01, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x815d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x815e, .a=0x15, .x=0x98, .y=0x50, .sp=0x01, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x815d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x815d, .value=0xbc, .type=IO_READ},
        {.addr=0x815e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0016) {
    const struct CPU_State initial_cpu = {.pc=0xe1d7, .a=0xb4, .x=0xac, .y=0x95, .sp=0x5f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe1d8, .a=0xb5, .x=0xac, .y=0x95, .sp=0x5f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe1d7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe1d7, .value=0xbc, .type=IO_READ},
        {.addr=0xe1d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0017) {
    const struct CPU_State initial_cpu = {.pc=0x9c39, .a=0xb5, .x=0x3c, .y=0xc3, .sp=0xf1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x9c39, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9c3a, .a=0xb6, .x=0x3c, .y=0xc3, .sp=0xf1, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9c39, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9c39, .value=0xbc, .type=IO_READ},
        {.addr=0x9c3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0018) {
    const struct CPU_State initial_cpu = {.pc=0x301c, .a=0x3e, .x=0x6f, .y=0x5b, .sp=0xec, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x301c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x301d, .a=0x3f, .x=0x6f, .y=0x5b, .sp=0xec, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x301c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x301c, .value=0xbc, .type=IO_READ},
        {.addr=0x301d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0019) {
    const struct CPU_State initial_cpu = {.pc=0xa84a, .a=0xfc, .x=0xa6, .y=0xed, .sp=0xab, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa84a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa84b, .a=0xfd, .x=0xa6, .y=0xed, .sp=0xab, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa84a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa84a, .value=0xbc, .type=IO_READ},
        {.addr=0xa84b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_001A) {
    const struct CPU_State initial_cpu = {.pc=0xe0f6, .a=0xcf, .x=0x5a, .y=0xa9, .sp=0xe6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe0f7, .a=0xd0, .x=0x5a, .y=0xa9, .sp=0xe6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe0f6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe0f6, .value=0xbc, .type=IO_READ},
        {.addr=0xe0f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_001B) {
    const struct CPU_State initial_cpu = {.pc=0xf43d, .a=0xdb, .x=0xcd, .y=0xce, .sp=0x72, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf43d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf43e, .a=0xdc, .x=0xcd, .y=0xce, .sp=0x72, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf43d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf43d, .value=0xbc, .type=IO_READ},
        {.addr=0xf43e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_001C) {
    const struct CPU_State initial_cpu = {.pc=0x5924, .a=0xff, .x=0x85, .y=0x5d, .sp=0x4a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5924, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5925, .a=0x00, .x=0x85, .y=0x5d, .sp=0x4a, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x5924, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5924, .value=0xbc, .type=IO_READ},
        {.addr=0x5925, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_001D) {
    const struct CPU_State initial_cpu = {.pc=0x7ded, .a=0xd6, .x=0xd2, .y=0x16, .sp=0xe9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x7ded, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7dee, .a=0xd7, .x=0xd2, .y=0x16, .sp=0xe9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7ded, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7ded, .value=0xbc, .type=IO_READ},
        {.addr=0x7dee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_001E) {
    const struct CPU_State initial_cpu = {.pc=0xe2bc, .a=0x2b, .x=0xb9, .y=0x55, .sp=0xf4, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe2bc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe2bd, .a=0x2c, .x=0xb9, .y=0x55, .sp=0xf4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe2bc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe2bc, .value=0xbc, .type=IO_READ},
        {.addr=0xe2bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_001F) {
    const struct CPU_State initial_cpu = {.pc=0x4bfb, .a=0xf3, .x=0x54, .y=0x77, .sp=0xf5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4bfc, .a=0xf4, .x=0x54, .y=0x77, .sp=0xf5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4bfb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4bfb, .value=0xbc, .type=IO_READ},
        {.addr=0x4bfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0020) {
    const struct CPU_State initial_cpu = {.pc=0x41b1, .a=0xd3, .x=0x06, .y=0x3b, .sp=0x47, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x41b1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x41b2, .a=0xd4, .x=0x06, .y=0x3b, .sp=0x47, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x41b1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x41b1, .value=0xbc, .type=IO_READ},
        {.addr=0x41b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0021) {
    const struct CPU_State initial_cpu = {.pc=0x6de2, .a=0xb0, .x=0xa6, .y=0x37, .sp=0xcc, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6de2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6de3, .a=0xb1, .x=0xa6, .y=0x37, .sp=0xcc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6de2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6de2, .value=0xbc, .type=IO_READ},
        {.addr=0x6de3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0022) {
    const struct CPU_State initial_cpu = {.pc=0xb96c, .a=0x2e, .x=0x34, .y=0x3e, .sp=0x37, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb96c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb96d, .a=0x2f, .x=0x34, .y=0x3e, .sp=0x37, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb96c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb96c, .value=0xbc, .type=IO_READ},
        {.addr=0xb96d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0023) {
    const struct CPU_State initial_cpu = {.pc=0xf6f2, .a=0x6a, .x=0x19, .y=0x8c, .sp=0xae, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf6f3, .a=0x6b, .x=0x19, .y=0x8c, .sp=0xae, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf6f2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf6f2, .value=0xbc, .type=IO_READ},
        {.addr=0xf6f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0024) {
    const struct CPU_State initial_cpu = {.pc=0x8027, .a=0x78, .x=0x10, .y=0x0a, .sp=0xf6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x8027, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8028, .a=0x79, .x=0x10, .y=0x0a, .sp=0xf6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8027, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8027, .value=0xbc, .type=IO_READ},
        {.addr=0x8028, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0025) {
    const struct CPU_State initial_cpu = {.pc=0x73e4, .a=0x17, .x=0x9e, .y=0x70, .sp=0x28, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x73e4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x73e5, .a=0x18, .x=0x9e, .y=0x70, .sp=0x28, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x73e4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x73e4, .value=0xbc, .type=IO_READ},
        {.addr=0x73e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0026) {
    const struct CPU_State initial_cpu = {.pc=0x516a, .a=0xb3, .x=0x6c, .y=0x09, .sp=0xf9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x516a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x516b, .a=0xb4, .x=0x6c, .y=0x09, .sp=0xf9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x516a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x516a, .value=0xbc, .type=IO_READ},
        {.addr=0x516b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0027) {
    const struct CPU_State initial_cpu = {.pc=0x102a, .a=0x19, .x=0xbe, .y=0x61, .sp=0x9a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x102a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x102b, .a=0x1a, .x=0xbe, .y=0x61, .sp=0x9a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x102a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x102a, .value=0xbc, .type=IO_READ},
        {.addr=0x102b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0028) {
    const struct CPU_State initial_cpu = {.pc=0xe4d7, .a=0xbc, .x=0xdb, .y=0xd0, .sp=0x64, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe4d7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe4d8, .a=0xbd, .x=0xdb, .y=0xd0, .sp=0x64, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe4d7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe4d7, .value=0xbc, .type=IO_READ},
        {.addr=0xe4d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0029) {
    const struct CPU_State initial_cpu = {.pc=0xc7ed, .a=0x01, .x=0x8f, .y=0x33, .sp=0xd9, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ed, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc7ee, .a=0x02, .x=0x8f, .y=0x33, .sp=0xd9, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xc7ed, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc7ed, .value=0xbc, .type=IO_READ},
        {.addr=0xc7ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_002A) {
    const struct CPU_State initial_cpu = {.pc=0xf5bd, .a=0x93, .x=0x95, .y=0xec, .sp=0x06, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf5bd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf5be, .a=0x94, .x=0x95, .y=0xec, .sp=0x06, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf5bd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf5bd, .value=0xbc, .type=IO_READ},
        {.addr=0xf5be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_002B) {
    const struct CPU_State initial_cpu = {.pc=0x5e5a, .a=0x83, .x=0x3b, .y=0xc6, .sp=0xbd, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x5e5a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5e5b, .a=0x84, .x=0x3b, .y=0xc6, .sp=0xbd, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5e5a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5e5a, .value=0xbc, .type=IO_READ},
        {.addr=0x5e5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_002C) {
    const struct CPU_State initial_cpu = {.pc=0x6c31, .a=0x6e, .x=0xcb, .y=0x1e, .sp=0x76, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6c31, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6c32, .a=0x6f, .x=0xcb, .y=0x1e, .sp=0x76, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6c31, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6c31, .value=0xbc, .type=IO_READ},
        {.addr=0x6c32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_002D) {
    const struct CPU_State initial_cpu = {.pc=0xdbd1, .a=0x99, .x=0xe2, .y=0x39, .sp=0xb6, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdbd2, .a=0x9a, .x=0xe2, .y=0x39, .sp=0xb6, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xdbd1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdbd1, .value=0xbc, .type=IO_READ},
        {.addr=0xdbd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_002E) {
    const struct CPU_State initial_cpu = {.pc=0x7d50, .a=0xc3, .x=0x47, .y=0x9d, .sp=0xa0, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7d50, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7d51, .a=0xc4, .x=0x47, .y=0x9d, .sp=0xa0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7d50, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7d50, .value=0xbc, .type=IO_READ},
        {.addr=0x7d51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8ca6, .a=0xd8, .x=0x8a, .y=0x4a, .sp=0x19, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8ca7, .a=0xd9, .x=0x8a, .y=0x4a, .sp=0x19, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8ca6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8ca6, .value=0xbc, .type=IO_READ},
        {.addr=0x8ca7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8024, .a=0x1f, .x=0x38, .y=0xb7, .sp=0xe3, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8024, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8025, .a=0x20, .x=0x38, .y=0xb7, .sp=0xe3, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8024, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8024, .value=0xbc, .type=IO_READ},
        {.addr=0x8025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0031) {
    const struct CPU_State initial_cpu = {.pc=0x63eb, .a=0x2a, .x=0xf6, .y=0x3c, .sp=0xd4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x63eb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x63ec, .a=0x2b, .x=0xf6, .y=0x3c, .sp=0xd4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x63eb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x63eb, .value=0xbc, .type=IO_READ},
        {.addr=0x63ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0032) {
    const struct CPU_State initial_cpu = {.pc=0xf8cd, .a=0x35, .x=0x85, .y=0x15, .sp=0xf9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf8ce, .a=0x36, .x=0x85, .y=0x15, .sp=0xf9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf8cd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf8cd, .value=0xbc, .type=IO_READ},
        {.addr=0xf8ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0033) {
    const struct CPU_State initial_cpu = {.pc=0x8b85, .a=0xda, .x=0xf7, .y=0x74, .sp=0x87, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8b85, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8b86, .a=0xdb, .x=0xf7, .y=0x74, .sp=0x87, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8b85, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8b85, .value=0xbc, .type=IO_READ},
        {.addr=0x8b86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0034) {
    const struct CPU_State initial_cpu = {.pc=0x87ae, .a=0xed, .x=0xef, .y=0x2e, .sp=0xfa, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x87ae, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x87af, .a=0xee, .x=0xef, .y=0x2e, .sp=0xfa, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x87ae, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x87ae, .value=0xbc, .type=IO_READ},
        {.addr=0x87af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0035) {
    const struct CPU_State initial_cpu = {.pc=0x89ff, .a=0xab, .x=0x1b, .y=0xd8, .sp=0x4a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x89ff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8a00, .a=0xac, .x=0x1b, .y=0xd8, .sp=0x4a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x89ff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x89ff, .value=0xbc, .type=IO_READ},
        {.addr=0x8a00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0036) {
    const struct CPU_State initial_cpu = {.pc=0xc642, .a=0x96, .x=0x1e, .y=0x37, .sp=0x79, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc642, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc643, .a=0x97, .x=0x1e, .y=0x37, .sp=0x79, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc642, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc642, .value=0xbc, .type=IO_READ},
        {.addr=0xc643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0037) {
    const struct CPU_State initial_cpu = {.pc=0xcee8, .a=0x96, .x=0xba, .y=0xd4, .sp=0x31, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xcee8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcee9, .a=0x97, .x=0xba, .y=0xd4, .sp=0x31, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xcee8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcee8, .value=0xbc, .type=IO_READ},
        {.addr=0xcee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0038) {
    const struct CPU_State initial_cpu = {.pc=0x7448, .a=0x03, .x=0x90, .y=0xcd, .sp=0xa5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7448, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7449, .a=0x04, .x=0x90, .y=0xcd, .sp=0xa5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7448, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7448, .value=0xbc, .type=IO_READ},
        {.addr=0x7449, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0039) {
    const struct CPU_State initial_cpu = {.pc=0x2c05, .a=0x1a, .x=0xfe, .y=0x9b, .sp=0x90, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2c05, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2c06, .a=0x1b, .x=0xfe, .y=0x9b, .sp=0x90, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2c05, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2c05, .value=0xbc, .type=IO_READ},
        {.addr=0x2c06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_003A) {
    const struct CPU_State initial_cpu = {.pc=0xa987, .a=0xa5, .x=0xfb, .y=0x78, .sp=0x2f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa987, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa988, .a=0xa6, .x=0xfb, .y=0x78, .sp=0x2f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa987, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa987, .value=0xbc, .type=IO_READ},
        {.addr=0xa988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_003B) {
    const struct CPU_State initial_cpu = {.pc=0x91f6, .a=0x56, .x=0x11, .y=0x7a, .sp=0xd8, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x91f6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x91f7, .a=0x57, .x=0x11, .y=0x7a, .sp=0xd8, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x91f6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x91f6, .value=0xbc, .type=IO_READ},
        {.addr=0x91f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_003C) {
    const struct CPU_State initial_cpu = {.pc=0x63e3, .a=0xf8, .x=0xde, .y=0xd5, .sp=0x10, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x63e3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x63e4, .a=0xf9, .x=0xde, .y=0xd5, .sp=0x10, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x63e3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x63e3, .value=0xbc, .type=IO_READ},
        {.addr=0x63e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_003D) {
    const struct CPU_State initial_cpu = {.pc=0x182f, .a=0x8f, .x=0x74, .y=0x0e, .sp=0x0f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x182f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1830, .a=0x90, .x=0x74, .y=0x0e, .sp=0x0f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x182f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x182f, .value=0xbc, .type=IO_READ},
        {.addr=0x1830, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_003E) {
    const struct CPU_State initial_cpu = {.pc=0xe39b, .a=0xfb, .x=0x33, .y=0x8a, .sp=0x9e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe39b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe39c, .a=0xfc, .x=0x33, .y=0x8a, .sp=0x9e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe39b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe39b, .value=0xbc, .type=IO_READ},
        {.addr=0xe39c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_003F) {
    const struct CPU_State initial_cpu = {.pc=0xabd5, .a=0x8f, .x=0xd0, .y=0xde, .sp=0x76, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xabd5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xabd6, .a=0x90, .x=0xd0, .y=0xde, .sp=0x76, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xabd5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xabd5, .value=0xbc, .type=IO_READ},
        {.addr=0xabd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0040) {
    const struct CPU_State initial_cpu = {.pc=0x18c4, .a=0x41, .x=0x45, .y=0xcc, .sp=0x47, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x18c4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x18c5, .a=0x42, .x=0x45, .y=0xcc, .sp=0x47, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x18c4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x18c4, .value=0xbc, .type=IO_READ},
        {.addr=0x18c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0041) {
    const struct CPU_State initial_cpu = {.pc=0x2b8e, .a=0xc9, .x=0xce, .y=0xbc, .sp=0x9f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2b8e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2b8f, .a=0xca, .x=0xce, .y=0xbc, .sp=0x9f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2b8e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2b8e, .value=0xbc, .type=IO_READ},
        {.addr=0x2b8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0042) {
    const struct CPU_State initial_cpu = {.pc=0x91f8, .a=0x0e, .x=0xfd, .y=0x29, .sp=0x8c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x91f8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x91f9, .a=0x0f, .x=0xfd, .y=0x29, .sp=0x8c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x91f8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x91f8, .value=0xbc, .type=IO_READ},
        {.addr=0x91f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0043) {
    const struct CPU_State initial_cpu = {.pc=0x1482, .a=0x25, .x=0x3c, .y=0x01, .sp=0x26, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1482, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1483, .a=0x26, .x=0x3c, .y=0x01, .sp=0x26, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1482, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1482, .value=0xbc, .type=IO_READ},
        {.addr=0x1483, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0979, .a=0xe4, .x=0x96, .y=0x2f, .sp=0x3b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0979, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x097a, .a=0xe5, .x=0x96, .y=0x2f, .sp=0x3b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0979, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0979, .value=0xbc, .type=IO_READ},
        {.addr=0x097a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0045) {
    const struct CPU_State initial_cpu = {.pc=0xba08, .a=0x05, .x=0x49, .y=0xc9, .sp=0x3c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xba08, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xba09, .a=0x06, .x=0x49, .y=0xc9, .sp=0x3c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xba08, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xba08, .value=0xbc, .type=IO_READ},
        {.addr=0xba09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0046) {
    const struct CPU_State initial_cpu = {.pc=0x7e17, .a=0xa2, .x=0x2a, .y=0x47, .sp=0x18, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x7e17, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7e18, .a=0xa3, .x=0x2a, .y=0x47, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x7e17, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7e17, .value=0xbc, .type=IO_READ},
        {.addr=0x7e18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0047) {
    const struct CPU_State initial_cpu = {.pc=0xf331, .a=0x7d, .x=0x15, .y=0x34, .sp=0x3e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf331, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf332, .a=0x7e, .x=0x15, .y=0x34, .sp=0x3e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf331, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf331, .value=0xbc, .type=IO_READ},
        {.addr=0xf332, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0048) {
    const struct CPU_State initial_cpu = {.pc=0x15df, .a=0x39, .x=0x42, .y=0x35, .sp=0x00, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x15df, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x15e0, .a=0x3a, .x=0x42, .y=0x35, .sp=0x00, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x15df, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x15df, .value=0xbc, .type=IO_READ},
        {.addr=0x15e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0049) {
    const struct CPU_State initial_cpu = {.pc=0xe6b9, .a=0x2f, .x=0x5c, .y=0x95, .sp=0xa8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xe6b9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe6ba, .a=0x30, .x=0x5c, .y=0x95, .sp=0xa8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe6b9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe6b9, .value=0xbc, .type=IO_READ},
        {.addr=0xe6ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_004A) {
    const struct CPU_State initial_cpu = {.pc=0x6391, .a=0xb6, .x=0x10, .y=0xb1, .sp=0x96, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x6391, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6392, .a=0xb7, .x=0x10, .y=0xb1, .sp=0x96, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6391, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6391, .value=0xbc, .type=IO_READ},
        {.addr=0x6392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_004B) {
    const struct CPU_State initial_cpu = {.pc=0x2e23, .a=0x13, .x=0x5b, .y=0xfc, .sp=0xfb, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x2e23, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2e24, .a=0x14, .x=0x5b, .y=0xfc, .sp=0xfb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2e23, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2e23, .value=0xbc, .type=IO_READ},
        {.addr=0x2e24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_004C) {
    const struct CPU_State initial_cpu = {.pc=0x89a9, .a=0x4b, .x=0x9f, .y=0x0e, .sp=0x2e, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x89a9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x89aa, .a=0x4c, .x=0x9f, .y=0x0e, .sp=0x2e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x89a9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x89a9, .value=0xbc, .type=IO_READ},
        {.addr=0x89aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_004D) {
    const struct CPU_State initial_cpu = {.pc=0xa62a, .a=0x65, .x=0x2f, .y=0xf7, .sp=0xab, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xa62a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa62b, .a=0x66, .x=0x2f, .y=0xf7, .sp=0xab, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa62a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa62a, .value=0xbc, .type=IO_READ},
        {.addr=0xa62b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_004E) {
    const struct CPU_State initial_cpu = {.pc=0xb691, .a=0xca, .x=0x9b, .y=0xea, .sp=0xdf, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xb691, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb692, .a=0xcb, .x=0x9b, .y=0xea, .sp=0xdf, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb691, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb691, .value=0xbc, .type=IO_READ},
        {.addr=0xb692, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_004F) {
    const struct CPU_State initial_cpu = {.pc=0x2a38, .a=0x92, .x=0x2c, .y=0x29, .sp=0xb6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x2a38, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2a39, .a=0x93, .x=0x2c, .y=0x29, .sp=0xb6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2a38, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2a38, .value=0xbc, .type=IO_READ},
        {.addr=0x2a39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0050) {
    const struct CPU_State initial_cpu = {.pc=0x8a60, .a=0x6b, .x=0x46, .y=0xbb, .sp=0x5c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a60, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8a61, .a=0x6c, .x=0x46, .y=0xbb, .sp=0x5c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8a60, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8a60, .value=0xbc, .type=IO_READ},
        {.addr=0x8a61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0051) {
    const struct CPU_State initial_cpu = {.pc=0x41e5, .a=0xb4, .x=0xf1, .y=0xc8, .sp=0xc9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x41e5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x41e6, .a=0xb5, .x=0xf1, .y=0xc8, .sp=0xc9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x41e5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x41e5, .value=0xbc, .type=IO_READ},
        {.addr=0x41e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0052) {
    const struct CPU_State initial_cpu = {.pc=0x80e0, .a=0x9d, .x=0x39, .y=0xd7, .sp=0x3f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x80e0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x80e1, .a=0x9e, .x=0x39, .y=0xd7, .sp=0x3f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x80e0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x80e0, .value=0xbc, .type=IO_READ},
        {.addr=0x80e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0053) {
    const struct CPU_State initial_cpu = {.pc=0x502c, .a=0x98, .x=0x51, .y=0x04, .sp=0x59, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x502c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x502d, .a=0x99, .x=0x51, .y=0x04, .sp=0x59, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x502c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x502c, .value=0xbc, .type=IO_READ},
        {.addr=0x502d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0054) {
    const struct CPU_State initial_cpu = {.pc=0xce95, .a=0xc7, .x=0xf1, .y=0xb8, .sp=0x2b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xce95, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xce96, .a=0xc8, .x=0xf1, .y=0xb8, .sp=0x2b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xce95, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xce95, .value=0xbc, .type=IO_READ},
        {.addr=0xce96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0055) {
    const struct CPU_State initial_cpu = {.pc=0x785c, .a=0x27, .x=0x1c, .y=0x5f, .sp=0x2a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x785c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x785d, .a=0x28, .x=0x1c, .y=0x5f, .sp=0x2a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x785c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x785c, .value=0xbc, .type=IO_READ},
        {.addr=0x785d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0056) {
    const struct CPU_State initial_cpu = {.pc=0xd7a1, .a=0x43, .x=0xd4, .y=0x97, .sp=0x70, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xd7a1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd7a2, .a=0x44, .x=0xd4, .y=0x97, .sp=0x70, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd7a1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd7a1, .value=0xbc, .type=IO_READ},
        {.addr=0xd7a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8914, .a=0x5a, .x=0x96, .y=0x87, .sp=0x50, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8914, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8915, .a=0x5b, .x=0x96, .y=0x87, .sp=0x50, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8914, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8914, .value=0xbc, .type=IO_READ},
        {.addr=0x8915, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0058) {
    const struct CPU_State initial_cpu = {.pc=0x1c2a, .a=0xe0, .x=0xf7, .y=0x09, .sp=0x97, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1c2b, .a=0xe1, .x=0xf7, .y=0x09, .sp=0x97, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1c2a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1c2a, .value=0xbc, .type=IO_READ},
        {.addr=0x1c2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0059) {
    const struct CPU_State initial_cpu = {.pc=0x6d90, .a=0xaf, .x=0x0e, .y=0x44, .sp=0x5d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x6d90, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6d91, .a=0xb0, .x=0x0e, .y=0x44, .sp=0x5d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6d90, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6d90, .value=0xbc, .type=IO_READ},
        {.addr=0x6d91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_005A) {
    const struct CPU_State initial_cpu = {.pc=0x06b8, .a=0xaf, .x=0xec, .y=0x7c, .sp=0x20, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x06b8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x06b9, .a=0xb0, .x=0xec, .y=0x7c, .sp=0x20, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x06b8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x06b8, .value=0xbc, .type=IO_READ},
        {.addr=0x06b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_005B) {
    const struct CPU_State initial_cpu = {.pc=0xfd4f, .a=0x6f, .x=0x2e, .y=0x6b, .sp=0xb7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfd4f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfd50, .a=0x70, .x=0x2e, .y=0x6b, .sp=0xb7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfd4f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfd4f, .value=0xbc, .type=IO_READ},
        {.addr=0xfd50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_005C) {
    const struct CPU_State initial_cpu = {.pc=0xd07a, .a=0x7f, .x=0xab, .y=0x84, .sp=0xb3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd07a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd07b, .a=0x80, .x=0xab, .y=0x84, .sp=0xb3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd07a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd07a, .value=0xbc, .type=IO_READ},
        {.addr=0xd07b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_005D) {
    const struct CPU_State initial_cpu = {.pc=0xf89d, .a=0x6b, .x=0xf5, .y=0xff, .sp=0x5d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf89d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf89e, .a=0x6c, .x=0xf5, .y=0xff, .sp=0x5d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf89d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf89d, .value=0xbc, .type=IO_READ},
        {.addr=0xf89e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb2e9, .a=0xf4, .x=0x6e, .y=0x40, .sp=0xe6, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb2ea, .a=0xf5, .x=0x6e, .y=0x40, .sp=0xe6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb2e9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb2e9, .value=0xbc, .type=IO_READ},
        {.addr=0xb2ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_005F) {
    const struct CPU_State initial_cpu = {.pc=0xd90e, .a=0x11, .x=0x5e, .y=0x08, .sp=0x1b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xd90e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd90f, .a=0x12, .x=0x5e, .y=0x08, .sp=0x1b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd90e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd90e, .value=0xbc, .type=IO_READ},
        {.addr=0xd90f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0060) {
    const struct CPU_State initial_cpu = {.pc=0x70a4, .a=0xa4, .x=0x20, .y=0x28, .sp=0x8c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x70a4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x70a5, .a=0xa5, .x=0x20, .y=0x28, .sp=0x8c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x70a4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x70a4, .value=0xbc, .type=IO_READ},
        {.addr=0x70a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0061) {
    const struct CPU_State initial_cpu = {.pc=0x920a, .a=0xee, .x=0x33, .y=0xf2, .sp=0xa9, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x920a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x920b, .a=0xef, .x=0x33, .y=0xf2, .sp=0xa9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x920a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x920a, .value=0xbc, .type=IO_READ},
        {.addr=0x920b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0062) {
    const struct CPU_State initial_cpu = {.pc=0xc6c6, .a=0x6f, .x=0xae, .y=0x60, .sp=0x2a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xc6c6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc6c7, .a=0x70, .x=0xae, .y=0x60, .sp=0x2a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc6c6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc6c6, .value=0xbc, .type=IO_READ},
        {.addr=0xc6c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0063) {
    const struct CPU_State initial_cpu = {.pc=0x128f, .a=0x0c, .x=0x84, .y=0xd7, .sp=0x2f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x128f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1290, .a=0x0d, .x=0x84, .y=0xd7, .sp=0x2f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x128f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x128f, .value=0xbc, .type=IO_READ},
        {.addr=0x1290, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0064) {
    const struct CPU_State initial_cpu = {.pc=0x3afa, .a=0xc5, .x=0x23, .y=0x6a, .sp=0x34, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3afa, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3afb, .a=0xc6, .x=0x23, .y=0x6a, .sp=0x34, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3afa, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3afa, .value=0xbc, .type=IO_READ},
        {.addr=0x3afb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0065) {
    const struct CPU_State initial_cpu = {.pc=0x91cb, .a=0xf2, .x=0xb2, .y=0xd0, .sp=0x26, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x91cb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x91cc, .a=0xf3, .x=0xb2, .y=0xd0, .sp=0x26, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x91cb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x91cb, .value=0xbc, .type=IO_READ},
        {.addr=0x91cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0066) {
    const struct CPU_State initial_cpu = {.pc=0x3fb3, .a=0x5b, .x=0x99, .y=0x0a, .sp=0xee, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x3fb3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3fb4, .a=0x5c, .x=0x99, .y=0x0a, .sp=0xee, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3fb3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3fb3, .value=0xbc, .type=IO_READ},
        {.addr=0x3fb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0067) {
    const struct CPU_State initial_cpu = {.pc=0x32be, .a=0xd5, .x=0x63, .y=0xdb, .sp=0xe0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x32be, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x32bf, .a=0xd6, .x=0x63, .y=0xdb, .sp=0xe0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x32be, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x32be, .value=0xbc, .type=IO_READ},
        {.addr=0x32bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0068) {
    const struct CPU_State initial_cpu = {.pc=0x6950, .a=0x8f, .x=0x7e, .y=0xed, .sp=0xa8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6950, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6951, .a=0x90, .x=0x7e, .y=0xed, .sp=0xa8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6950, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6950, .value=0xbc, .type=IO_READ},
        {.addr=0x6951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0069) {
    const struct CPU_State initial_cpu = {.pc=0xe62a, .a=0x4c, .x=0x44, .y=0xaf, .sp=0xc2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe62a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe62b, .a=0x4d, .x=0x44, .y=0xaf, .sp=0xc2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe62a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe62a, .value=0xbc, .type=IO_READ},
        {.addr=0xe62b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_006A) {
    const struct CPU_State initial_cpu = {.pc=0x8333, .a=0x2f, .x=0xf6, .y=0x54, .sp=0x2a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8333, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8334, .a=0x30, .x=0xf6, .y=0x54, .sp=0x2a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8333, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8333, .value=0xbc, .type=IO_READ},
        {.addr=0x8334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_006B) {
    const struct CPU_State initial_cpu = {.pc=0xa92f, .a=0x7b, .x=0x73, .y=0x55, .sp=0xcc, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa92f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa930, .a=0x7c, .x=0x73, .y=0x55, .sp=0xcc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa92f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa92f, .value=0xbc, .type=IO_READ},
        {.addr=0xa930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_006C) {
    const struct CPU_State initial_cpu = {.pc=0xdc50, .a=0x1f, .x=0xd0, .y=0x53, .sp=0xcf, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xdc50, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdc51, .a=0x20, .x=0xd0, .y=0x53, .sp=0xcf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xdc50, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdc50, .value=0xbc, .type=IO_READ},
        {.addr=0xdc51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_006D) {
    const struct CPU_State initial_cpu = {.pc=0xa8e1, .a=0xb9, .x=0x82, .y=0x79, .sp=0xb8, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa8e1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa8e2, .a=0xba, .x=0x82, .y=0x79, .sp=0xb8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa8e1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa8e1, .value=0xbc, .type=IO_READ},
        {.addr=0xa8e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_006E) {
    const struct CPU_State initial_cpu = {.pc=0xf420, .a=0x10, .x=0xdc, .y=0x1b, .sp=0x2a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf420, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf421, .a=0x11, .x=0xdc, .y=0x1b, .sp=0x2a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf420, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf420, .value=0xbc, .type=IO_READ},
        {.addr=0xf421, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_006F) {
    const struct CPU_State initial_cpu = {.pc=0x58e7, .a=0x5a, .x=0x31, .y=0x51, .sp=0x2c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x58e7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x58e8, .a=0x5b, .x=0x31, .y=0x51, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x58e7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x58e7, .value=0xbc, .type=IO_READ},
        {.addr=0x58e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0070) {
    const struct CPU_State initial_cpu = {.pc=0xeb57, .a=0x2e, .x=0x3f, .y=0x63, .sp=0x05, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xeb57, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeb58, .a=0x2f, .x=0x3f, .y=0x63, .sp=0x05, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xeb57, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeb57, .value=0xbc, .type=IO_READ},
        {.addr=0xeb58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0071) {
    const struct CPU_State initial_cpu = {.pc=0xfa9c, .a=0x4d, .x=0x3b, .y=0x30, .sp=0x1e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xfa9c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfa9d, .a=0x4e, .x=0x3b, .y=0x30, .sp=0x1e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xfa9c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfa9c, .value=0xbc, .type=IO_READ},
        {.addr=0xfa9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0072) {
    const struct CPU_State initial_cpu = {.pc=0xb31c, .a=0xd2, .x=0x16, .y=0x4e, .sp=0x89, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb31c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb31d, .a=0xd3, .x=0x16, .y=0x4e, .sp=0x89, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb31c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb31c, .value=0xbc, .type=IO_READ},
        {.addr=0xb31d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0073) {
    const struct CPU_State initial_cpu = {.pc=0xe871, .a=0x84, .x=0xc6, .y=0x89, .sp=0x4d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe871, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe872, .a=0x85, .x=0xc6, .y=0x89, .sp=0x4d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe871, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe871, .value=0xbc, .type=IO_READ},
        {.addr=0xe872, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0074) {
    const struct CPU_State initial_cpu = {.pc=0xa203, .a=0x79, .x=0x89, .y=0x9b, .sp=0xd9, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa203, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa204, .a=0x7a, .x=0x89, .y=0x9b, .sp=0xd9, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa203, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa203, .value=0xbc, .type=IO_READ},
        {.addr=0xa204, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0075) {
    const struct CPU_State initial_cpu = {.pc=0x14d7, .a=0xd3, .x=0xc5, .y=0xc2, .sp=0xc8, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x14d7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x14d8, .a=0xd4, .x=0xc5, .y=0xc2, .sp=0xc8, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x14d7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x14d7, .value=0xbc, .type=IO_READ},
        {.addr=0x14d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0076) {
    const struct CPU_State initial_cpu = {.pc=0x7a53, .a=0x41, .x=0xd9, .y=0x0c, .sp=0xdc, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7a53, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7a54, .a=0x42, .x=0xd9, .y=0x0c, .sp=0xdc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7a53, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7a53, .value=0xbc, .type=IO_READ},
        {.addr=0x7a54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0077) {
    const struct CPU_State initial_cpu = {.pc=0xf22e, .a=0x0f, .x=0xac, .y=0x18, .sp=0xe2, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xf22e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf22f, .a=0x10, .x=0xac, .y=0x18, .sp=0xe2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xf22e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf22e, .value=0xbc, .type=IO_READ},
        {.addr=0xf22f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0078) {
    const struct CPU_State initial_cpu = {.pc=0x339e, .a=0x6c, .x=0x96, .y=0x54, .sp=0x61, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x339e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x339f, .a=0x6d, .x=0x96, .y=0x54, .sp=0x61, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x339e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x339e, .value=0xbc, .type=IO_READ},
        {.addr=0x339f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0079) {
    const struct CPU_State initial_cpu = {.pc=0xda22, .a=0xd6, .x=0x09, .y=0x58, .sp=0x3a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xda22, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xda23, .a=0xd7, .x=0x09, .y=0x58, .sp=0x3a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xda22, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xda22, .value=0xbc, .type=IO_READ},
        {.addr=0xda23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_007A) {
    const struct CPU_State initial_cpu = {.pc=0x0252, .a=0xf2, .x=0xbe, .y=0xa6, .sp=0xbb, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0252, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0253, .a=0xf3, .x=0xbe, .y=0xa6, .sp=0xbb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0252, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0252, .value=0xbc, .type=IO_READ},
        {.addr=0x0253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_007B) {
    const struct CPU_State initial_cpu = {.pc=0x5e1d, .a=0x06, .x=0xa6, .y=0x18, .sp=0x85, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5e1e, .a=0x07, .x=0xa6, .y=0x18, .sp=0x85, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x5e1d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5e1d, .value=0xbc, .type=IO_READ},
        {.addr=0x5e1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_007C) {
    const struct CPU_State initial_cpu = {.pc=0xa0e4, .a=0x64, .x=0x53, .y=0xf1, .sp=0x17, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa0e5, .a=0x65, .x=0x53, .y=0xf1, .sp=0x17, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa0e4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa0e4, .value=0xbc, .type=IO_READ},
        {.addr=0xa0e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_007D) {
    const struct CPU_State initial_cpu = {.pc=0x4cb3, .a=0xf7, .x=0x55, .y=0x73, .sp=0x26, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x4cb3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4cb4, .a=0xf8, .x=0x55, .y=0x73, .sp=0x26, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4cb3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4cb3, .value=0xbc, .type=IO_READ},
        {.addr=0x4cb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_007E) {
    const struct CPU_State initial_cpu = {.pc=0x8389, .a=0xcb, .x=0x99, .y=0x7b, .sp=0xc1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8389, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x838a, .a=0xcc, .x=0x99, .y=0x7b, .sp=0xc1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8389, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8389, .value=0xbc, .type=IO_READ},
        {.addr=0x838a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_007F) {
    const struct CPU_State initial_cpu = {.pc=0xbf5f, .a=0xee, .x=0xdb, .y=0x89, .sp=0x6f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbf5f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbf60, .a=0xef, .x=0xdb, .y=0x89, .sp=0x6f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbf5f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbf5f, .value=0xbc, .type=IO_READ},
        {.addr=0xbf60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0080) {
    const struct CPU_State initial_cpu = {.pc=0xbd4c, .a=0x68, .x=0x6b, .y=0xcf, .sp=0x6c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbd4c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbd4d, .a=0x69, .x=0x6b, .y=0xcf, .sp=0x6c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbd4c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbd4c, .value=0xbc, .type=IO_READ},
        {.addr=0xbd4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0081) {
    const struct CPU_State initial_cpu = {.pc=0xac0a, .a=0x25, .x=0x6e, .y=0x06, .sp=0x0a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xac0a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xac0b, .a=0x26, .x=0x6e, .y=0x06, .sp=0x0a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xac0a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xac0a, .value=0xbc, .type=IO_READ},
        {.addr=0xac0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0082) {
    const struct CPU_State initial_cpu = {.pc=0xb725, .a=0xca, .x=0xc2, .y=0x7c, .sp=0x0a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb725, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb726, .a=0xcb, .x=0xc2, .y=0x7c, .sp=0x0a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb725, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb725, .value=0xbc, .type=IO_READ},
        {.addr=0xb726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0083) {
    const struct CPU_State initial_cpu = {.pc=0xa03d, .a=0xd7, .x=0x72, .y=0xaf, .sp=0x7b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa03d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa03e, .a=0xd8, .x=0x72, .y=0xaf, .sp=0x7b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa03d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa03d, .value=0xbc, .type=IO_READ},
        {.addr=0xa03e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0084) {
    const struct CPU_State initial_cpu = {.pc=0x81b4, .a=0x86, .x=0x1d, .y=0x3d, .sp=0x23, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x81b4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x81b5, .a=0x87, .x=0x1d, .y=0x3d, .sp=0x23, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x81b4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x81b4, .value=0xbc, .type=IO_READ},
        {.addr=0x81b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0085) {
    const struct CPU_State initial_cpu = {.pc=0x1583, .a=0x71, .x=0x61, .y=0x96, .sp=0xf7, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x1583, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1584, .a=0x72, .x=0x61, .y=0x96, .sp=0xf7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1583, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1583, .value=0xbc, .type=IO_READ},
        {.addr=0x1584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0086) {
    const struct CPU_State initial_cpu = {.pc=0x6977, .a=0x8b, .x=0x37, .y=0x54, .sp=0x2b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6977, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6978, .a=0x8c, .x=0x37, .y=0x54, .sp=0x2b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6977, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6977, .value=0xbc, .type=IO_READ},
        {.addr=0x6978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0087) {
    const struct CPU_State initial_cpu = {.pc=0x745f, .a=0x9a, .x=0x81, .y=0xe9, .sp=0x0c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x745f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7460, .a=0x9b, .x=0x81, .y=0xe9, .sp=0x0c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x745f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x745f, .value=0xbc, .type=IO_READ},
        {.addr=0x7460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0088) {
    const struct CPU_State initial_cpu = {.pc=0xf100, .a=0xe1, .x=0x73, .y=0x16, .sp=0xc4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xf100, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf101, .a=0xe2, .x=0x73, .y=0x16, .sp=0xc4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf100, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf100, .value=0xbc, .type=IO_READ},
        {.addr=0xf101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0089) {
    const struct CPU_State initial_cpu = {.pc=0xf723, .a=0x3d, .x=0x8d, .y=0xed, .sp=0x0e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf723, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf724, .a=0x3e, .x=0x8d, .y=0xed, .sp=0x0e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf723, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf723, .value=0xbc, .type=IO_READ},
        {.addr=0xf724, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_008A) {
    const struct CPU_State initial_cpu = {.pc=0x024a, .a=0x10, .x=0x14, .y=0x88, .sp=0xc7, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x024a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x024b, .a=0x11, .x=0x14, .y=0x88, .sp=0xc7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x024a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x024a, .value=0xbc, .type=IO_READ},
        {.addr=0x024b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_008B) {
    const struct CPU_State initial_cpu = {.pc=0x3298, .a=0x05, .x=0x30, .y=0x76, .sp=0x64, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3298, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3299, .a=0x06, .x=0x30, .y=0x76, .sp=0x64, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3298, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3298, .value=0xbc, .type=IO_READ},
        {.addr=0x3299, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_008C) {
    const struct CPU_State initial_cpu = {.pc=0xcd97, .a=0x64, .x=0xd7, .y=0x3a, .sp=0xb5, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xcd97, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcd98, .a=0x65, .x=0xd7, .y=0x3a, .sp=0xb5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xcd97, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcd97, .value=0xbc, .type=IO_READ},
        {.addr=0xcd98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3684, .a=0x4e, .x=0xbc, .y=0x42, .sp=0xe9, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3684, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3685, .a=0x4f, .x=0xbc, .y=0x42, .sp=0xe9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3684, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3684, .value=0xbc, .type=IO_READ},
        {.addr=0x3685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_008E) {
    const struct CPU_State initial_cpu = {.pc=0x3ead, .a=0xb5, .x=0x7d, .y=0x6c, .sp=0xbc, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3ead, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3eae, .a=0xb6, .x=0x7d, .y=0x6c, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3ead, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3ead, .value=0xbc, .type=IO_READ},
        {.addr=0x3eae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3212, .a=0xa5, .x=0xeb, .y=0x10, .sp=0x4a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x3212, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3213, .a=0xa6, .x=0xeb, .y=0x10, .sp=0x4a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3212, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3212, .value=0xbc, .type=IO_READ},
        {.addr=0x3213, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0090) {
    const struct CPU_State initial_cpu = {.pc=0x0f92, .a=0x1f, .x=0x2b, .y=0x95, .sp=0xd2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f92, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0f93, .a=0x20, .x=0x2b, .y=0x95, .sp=0xd2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0f92, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0f92, .value=0xbc, .type=IO_READ},
        {.addr=0x0f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0091) {
    const struct CPU_State initial_cpu = {.pc=0x0f05, .a=0x15, .x=0xc4, .y=0x90, .sp=0x7d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0f05, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0f06, .a=0x16, .x=0xc4, .y=0x90, .sp=0x7d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0f05, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0f05, .value=0xbc, .type=IO_READ},
        {.addr=0x0f06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0092) {
    const struct CPU_State initial_cpu = {.pc=0x8e0f, .a=0x8a, .x=0xac, .y=0xc2, .sp=0xbd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8e0f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8e10, .a=0x8b, .x=0xac, .y=0xc2, .sp=0xbd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8e0f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8e0f, .value=0xbc, .type=IO_READ},
        {.addr=0x8e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7076, .a=0x05, .x=0x2b, .y=0xf7, .sp=0x57, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7076, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7077, .a=0x06, .x=0x2b, .y=0xf7, .sp=0x57, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7076, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7076, .value=0xbc, .type=IO_READ},
        {.addr=0x7077, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0094) {
    const struct CPU_State initial_cpu = {.pc=0x2de1, .a=0xb9, .x=0xf3, .y=0xb2, .sp=0x30, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x2de1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2de2, .a=0xba, .x=0xf3, .y=0xb2, .sp=0x30, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2de1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2de1, .value=0xbc, .type=IO_READ},
        {.addr=0x2de2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0095) {
    const struct CPU_State initial_cpu = {.pc=0xff1a, .a=0xe1, .x=0x7c, .y=0x3a, .sp=0xc5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xff1a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xff1b, .a=0xe2, .x=0x7c, .y=0x3a, .sp=0xc5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xff1a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xff1a, .value=0xbc, .type=IO_READ},
        {.addr=0xff1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0096) {
    const struct CPU_State initial_cpu = {.pc=0x2a80, .a=0xd2, .x=0x6f, .y=0x55, .sp=0xb4, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x2a80, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2a81, .a=0xd3, .x=0x6f, .y=0x55, .sp=0xb4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2a80, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2a80, .value=0xbc, .type=IO_READ},
        {.addr=0x2a81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0097) {
    const struct CPU_State initial_cpu = {.pc=0xd7b8, .a=0xff, .x=0xfc, .y=0x8a, .sp=0x1d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd7b9, .a=0x00, .x=0xfc, .y=0x8a, .sp=0x1d, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xd7b8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd7b8, .value=0xbc, .type=IO_READ},
        {.addr=0xd7b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0098) {
    const struct CPU_State initial_cpu = {.pc=0x0275, .a=0xdd, .x=0x70, .y=0x7f, .sp=0x05, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0275, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0276, .a=0xde, .x=0x70, .y=0x7f, .sp=0x05, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0275, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0275, .value=0xbc, .type=IO_READ},
        {.addr=0x0276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0099) {
    const struct CPU_State initial_cpu = {.pc=0xee5f, .a=0x72, .x=0xff, .y=0xa8, .sp=0xd1, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xee5f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xee60, .a=0x73, .x=0xff, .y=0xa8, .sp=0xd1, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xee5f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xee5f, .value=0xbc, .type=IO_READ},
        {.addr=0xee60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_009A) {
    const struct CPU_State initial_cpu = {.pc=0x86d8, .a=0xb4, .x=0x59, .y=0x47, .sp=0x16, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x86d8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x86d9, .a=0xb5, .x=0x59, .y=0x47, .sp=0x16, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x86d8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x86d8, .value=0xbc, .type=IO_READ},
        {.addr=0x86d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_009B) {
    const struct CPU_State initial_cpu = {.pc=0xb4e4, .a=0xc7, .x=0xa4, .y=0x73, .sp=0x71, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb4e4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb4e5, .a=0xc8, .x=0xa4, .y=0x73, .sp=0x71, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb4e4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb4e4, .value=0xbc, .type=IO_READ},
        {.addr=0xb4e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_009C) {
    const struct CPU_State initial_cpu = {.pc=0xcb69, .a=0x5e, .x=0xc4, .y=0xa2, .sp=0x65, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcb69, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcb6a, .a=0x5f, .x=0xc4, .y=0xa2, .sp=0x65, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcb69, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcb69, .value=0xbc, .type=IO_READ},
        {.addr=0xcb6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_009D) {
    const struct CPU_State initial_cpu = {.pc=0x409a, .a=0x3e, .x=0xe2, .y=0x8d, .sp=0x38, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x409a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x409b, .a=0x3f, .x=0xe2, .y=0x8d, .sp=0x38, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x409a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x409a, .value=0xbc, .type=IO_READ},
        {.addr=0x409b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_009E) {
    const struct CPU_State initial_cpu = {.pc=0x62f6, .a=0xe5, .x=0x0a, .y=0xe6, .sp=0x44, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x62f6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x62f7, .a=0xe6, .x=0x0a, .y=0xe6, .sp=0x44, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x62f6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x62f6, .value=0xbc, .type=IO_READ},
        {.addr=0x62f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_009F) {
    const struct CPU_State initial_cpu = {.pc=0x64cb, .a=0xa0, .x=0xba, .y=0x76, .sp=0xd2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x64cb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x64cc, .a=0xa1, .x=0xba, .y=0x76, .sp=0xd2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x64cb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x64cb, .value=0xbc, .type=IO_READ},
        {.addr=0x64cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xdfc0, .a=0xb5, .x=0x71, .y=0xef, .sp=0xe3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xdfc0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdfc1, .a=0xb6, .x=0x71, .y=0xef, .sp=0xe3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xdfc0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdfc0, .value=0xbc, .type=IO_READ},
        {.addr=0xdfc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xed4b, .a=0xb7, .x=0x30, .y=0xfa, .sp=0x90, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xed4b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xed4c, .a=0xb8, .x=0x30, .y=0xfa, .sp=0x90, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xed4b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xed4b, .value=0xbc, .type=IO_READ},
        {.addr=0xed4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x4f76, .a=0x2d, .x=0x8d, .y=0x5b, .sp=0xcc, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4f76, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4f77, .a=0x2e, .x=0x8d, .y=0x5b, .sp=0xcc, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4f76, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4f76, .value=0xbc, .type=IO_READ},
        {.addr=0x4f77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xe2d1, .a=0x96, .x=0xa8, .y=0xfb, .sp=0x07, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe2d2, .a=0x97, .x=0xa8, .y=0xfb, .sp=0x07, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe2d1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe2d1, .value=0xbc, .type=IO_READ},
        {.addr=0xe2d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xf57f, .a=0x18, .x=0xad, .y=0xc8, .sp=0x7b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xf57f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf580, .a=0x19, .x=0xad, .y=0xc8, .sp=0x7b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf57f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf57f, .value=0xbc, .type=IO_READ},
        {.addr=0xf580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xe985, .a=0x0b, .x=0x92, .y=0x95, .sp=0x97, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe985, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe986, .a=0x0c, .x=0x92, .y=0x95, .sp=0x97, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe985, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe985, .value=0xbc, .type=IO_READ},
        {.addr=0xe986, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x45ad, .a=0x78, .x=0xf1, .y=0x69, .sp=0xf0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x45ad, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x45ae, .a=0x79, .x=0xf1, .y=0x69, .sp=0xf0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x45ad, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x45ad, .value=0xbc, .type=IO_READ},
        {.addr=0x45ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x75cf, .a=0x89, .x=0xea, .y=0xe9, .sp=0x2e, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x75cf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x75d0, .a=0x8a, .x=0xea, .y=0xe9, .sp=0x2e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x75cf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x75cf, .value=0xbc, .type=IO_READ},
        {.addr=0x75d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xa1dc, .a=0xf2, .x=0x56, .y=0x4b, .sp=0x2c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa1dc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa1dd, .a=0xf3, .x=0x56, .y=0x4b, .sp=0x2c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa1dc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa1dc, .value=0xbc, .type=IO_READ},
        {.addr=0xa1dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x629f, .a=0xbb, .x=0x22, .y=0xe9, .sp=0x8d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x629f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x62a0, .a=0xbc, .x=0x22, .y=0xe9, .sp=0x8d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x629f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x629f, .value=0xbc, .type=IO_READ},
        {.addr=0x62a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xdf52, .a=0x5e, .x=0x18, .y=0x78, .sp=0xfb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xdf52, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdf53, .a=0x5f, .x=0x18, .y=0x78, .sp=0xfb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xdf52, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdf52, .value=0xbc, .type=IO_READ},
        {.addr=0xdf53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xc17a, .a=0xf7, .x=0x8b, .y=0x5b, .sp=0x1a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc17a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc17b, .a=0xf8, .x=0x8b, .y=0x5b, .sp=0x1a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc17a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc17a, .value=0xbc, .type=IO_READ},
        {.addr=0xc17b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x9571, .a=0x65, .x=0xca, .y=0xb6, .sp=0x65, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9571, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9572, .a=0x66, .x=0xca, .y=0xb6, .sp=0x65, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9571, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9571, .value=0xbc, .type=IO_READ},
        {.addr=0x9572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xbc57, .a=0x16, .x=0xe4, .y=0x86, .sp=0xd4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xbc57, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbc58, .a=0x17, .x=0xe4, .y=0x86, .sp=0xd4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbc57, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbc57, .value=0xbc, .type=IO_READ},
        {.addr=0xbc58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x828a, .a=0x3d, .x=0x9b, .y=0x5e, .sp=0x65, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x828a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x828b, .a=0x3e, .x=0x9b, .y=0x5e, .sp=0x65, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x828a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x828a, .value=0xbc, .type=IO_READ},
        {.addr=0x828b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x5976, .a=0xac, .x=0x7b, .y=0x80, .sp=0xc5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x5976, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5977, .a=0xad, .x=0x7b, .y=0x80, .sp=0xc5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5976, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5976, .value=0xbc, .type=IO_READ},
        {.addr=0x5977, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x67f2, .a=0xb0, .x=0x2c, .y=0x94, .sp=0x16, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x67f2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x67f3, .a=0xb1, .x=0x2c, .y=0x94, .sp=0x16, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x67f2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x67f2, .value=0xbc, .type=IO_READ},
        {.addr=0x67f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x7933, .a=0x46, .x=0x14, .y=0x07, .sp=0x98, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x7933, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7934, .a=0x47, .x=0x14, .y=0x07, .sp=0x98, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7933, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7933, .value=0xbc, .type=IO_READ},
        {.addr=0x7934, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x5bd9, .a=0xa0, .x=0x0f, .y=0x98, .sp=0x96, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5bda, .a=0xa1, .x=0x0f, .y=0x98, .sp=0x96, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5bd9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5bd9, .value=0xbc, .type=IO_READ},
        {.addr=0x5bda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xea56, .a=0x34, .x=0x6b, .y=0xc6, .sp=0xbf, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xea56, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xea57, .a=0x35, .x=0x6b, .y=0xc6, .sp=0xbf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xea56, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xea56, .value=0xbc, .type=IO_READ},
        {.addr=0xea57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x1c8b, .a=0x4d, .x=0x92, .y=0xde, .sp=0x5a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1c8b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1c8c, .a=0x4e, .x=0x92, .y=0xde, .sp=0x5a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1c8b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1c8b, .value=0xbc, .type=IO_READ},
        {.addr=0x1c8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x6042, .a=0xeb, .x=0x5c, .y=0x9e, .sp=0xcc, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x6042, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6043, .a=0xec, .x=0x5c, .y=0x9e, .sp=0xcc, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6042, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6042, .value=0xbc, .type=IO_READ},
        {.addr=0x6043, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x3523, .a=0xe5, .x=0x65, .y=0xf6, .sp=0xb4, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x3523, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3524, .a=0xe6, .x=0x65, .y=0xf6, .sp=0xb4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3523, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3523, .value=0xbc, .type=IO_READ},
        {.addr=0x3524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xec71, .a=0xcb, .x=0x63, .y=0x5c, .sp=0x39, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xec71, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xec72, .a=0xcc, .x=0x63, .y=0x5c, .sp=0x39, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xec71, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xec71, .value=0xbc, .type=IO_READ},
        {.addr=0xec72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x8df3, .a=0x8e, .x=0x14, .y=0x1b, .sp=0xf2, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8df3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8df4, .a=0x8f, .x=0x14, .y=0x1b, .sp=0xf2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8df3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8df3, .value=0xbc, .type=IO_READ},
        {.addr=0x8df4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xae0f, .a=0xa2, .x=0xf2, .y=0x01, .sp=0x4e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xae0f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xae10, .a=0xa3, .x=0xf2, .y=0x01, .sp=0x4e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xae0f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xae0f, .value=0xbc, .type=IO_READ},
        {.addr=0xae10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x2786, .a=0x4e, .x=0x0b, .y=0x7f, .sp=0xea, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2786, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2787, .a=0x4f, .x=0x0b, .y=0x7f, .sp=0xea, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2786, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2786, .value=0xbc, .type=IO_READ},
        {.addr=0x2787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb9a4, .a=0x1c, .x=0xfd, .y=0xfe, .sp=0x37, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb9a5, .a=0x1d, .x=0xfd, .y=0xfe, .sp=0x37, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb9a4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb9a4, .value=0xbc, .type=IO_READ},
        {.addr=0xb9a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xab20, .a=0x63, .x=0xc0, .y=0x19, .sp=0xc3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xab20, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xab21, .a=0x64, .x=0xc0, .y=0x19, .sp=0xc3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xab20, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xab20, .value=0xbc, .type=IO_READ},
        {.addr=0xab21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xb99b, .a=0x33, .x=0x8f, .y=0x48, .sp=0x74, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xb99b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb99c, .a=0x34, .x=0x8f, .y=0x48, .sp=0x74, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb99b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb99b, .value=0xbc, .type=IO_READ},
        {.addr=0xb99c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xc7b8, .a=0x26, .x=0x64, .y=0xc1, .sp=0x36, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc7b9, .a=0x27, .x=0x64, .y=0xc1, .sp=0x36, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc7b8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc7b8, .value=0xbc, .type=IO_READ},
        {.addr=0xc7b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xb113, .a=0xd2, .x=0xd3, .y=0xd8, .sp=0x40, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xb113, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb114, .a=0xd3, .x=0xd3, .y=0xd8, .sp=0x40, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb113, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb113, .value=0xbc, .type=IO_READ},
        {.addr=0xb114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xa9d4, .a=0x20, .x=0x8d, .y=0x2d, .sp=0x67, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa9d4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa9d5, .a=0x21, .x=0x8d, .y=0x2d, .sp=0x67, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa9d4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa9d4, .value=0xbc, .type=IO_READ},
        {.addr=0xa9d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xf5d7, .a=0xf8, .x=0x31, .y=0x76, .sp=0xc1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf5d7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf5d8, .a=0xf9, .x=0x31, .y=0x76, .sp=0xc1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf5d7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf5d7, .value=0xbc, .type=IO_READ},
        {.addr=0xf5d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x34de, .a=0xda, .x=0x42, .y=0x23, .sp=0xfd, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x34de, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x34df, .a=0xdb, .x=0x42, .y=0x23, .sp=0xfd, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x34de, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x34de, .value=0xbc, .type=IO_READ},
        {.addr=0x34df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xb9f4, .a=0x76, .x=0x11, .y=0xa0, .sp=0x4e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb9f5, .a=0x77, .x=0x11, .y=0xa0, .sp=0x4e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb9f4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb9f4, .value=0xbc, .type=IO_READ},
        {.addr=0xb9f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x7173, .a=0x33, .x=0x2d, .y=0x03, .sp=0x07, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7173, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7174, .a=0x34, .x=0x2d, .y=0x03, .sp=0x07, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7173, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7173, .value=0xbc, .type=IO_READ},
        {.addr=0x7174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x6652, .a=0x8a, .x=0xec, .y=0xc7, .sp=0xba, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6652, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6653, .a=0x8b, .x=0xec, .y=0xc7, .sp=0xba, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6652, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6652, .value=0xbc, .type=IO_READ},
        {.addr=0x6653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x041d, .a=0x4d, .x=0x94, .y=0x03, .sp=0xcc, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x041d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x041e, .a=0x4e, .x=0x94, .y=0x03, .sp=0xcc, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x041d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x041d, .value=0xbc, .type=IO_READ},
        {.addr=0x041e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x8f7e, .a=0x77, .x=0xf2, .y=0x6d, .sp=0x05, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8f7f, .a=0x78, .x=0xf2, .y=0x6d, .sp=0x05, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8f7e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8f7e, .value=0xbc, .type=IO_READ},
        {.addr=0x8f7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x1cc0, .a=0xf6, .x=0x00, .y=0x5c, .sp=0xa6, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1cc1, .a=0xf7, .x=0x00, .y=0x5c, .sp=0xa6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1cc0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1cc0, .value=0xbc, .type=IO_READ},
        {.addr=0x1cc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1adc, .a=0x3f, .x=0xdf, .y=0x65, .sp=0x25, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x1adc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1add, .a=0x40, .x=0xdf, .y=0x65, .sp=0x25, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1adc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1adc, .value=0xbc, .type=IO_READ},
        {.addr=0x1add, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xc37c, .a=0x89, .x=0xa8, .y=0xec, .sp=0xc0, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc37c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc37d, .a=0x8a, .x=0xa8, .y=0xec, .sp=0xc0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc37c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc37c, .value=0xbc, .type=IO_READ},
        {.addr=0xc37d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xc684, .a=0x96, .x=0xd3, .y=0xc0, .sp=0x72, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xc684, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc685, .a=0x97, .x=0xd3, .y=0xc0, .sp=0x72, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc684, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc684, .value=0xbc, .type=IO_READ},
        {.addr=0xc685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x4ae2, .a=0x6d, .x=0xb2, .y=0x34, .sp=0x44, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4ae2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4ae3, .a=0x6e, .x=0xb2, .y=0x34, .sp=0x44, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4ae2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4ae2, .value=0xbc, .type=IO_READ},
        {.addr=0x4ae3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x301a, .a=0xad, .x=0xe0, .y=0xcd, .sp=0x66, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x301a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x301b, .a=0xae, .x=0xe0, .y=0xcd, .sp=0x66, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x301a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x301a, .value=0xbc, .type=IO_READ},
        {.addr=0x301b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x1166, .a=0xe3, .x=0x35, .y=0xd8, .sp=0x23, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1166, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1167, .a=0xe4, .x=0x35, .y=0xd8, .sp=0x23, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1166, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1166, .value=0xbc, .type=IO_READ},
        {.addr=0x1167, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x3363, .a=0x69, .x=0x8d, .y=0x30, .sp=0x11, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3363, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3364, .a=0x6a, .x=0x8d, .y=0x30, .sp=0x11, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3363, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3363, .value=0xbc, .type=IO_READ},
        {.addr=0x3364, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x84ce, .a=0xb0, .x=0x95, .y=0x33, .sp=0x6c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x84ce, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x84cf, .a=0xb1, .x=0x95, .y=0x33, .sp=0x6c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x84ce, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x84ce, .value=0xbc, .type=IO_READ},
        {.addr=0x84cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x20d9, .a=0x99, .x=0xd7, .y=0xc3, .sp=0x02, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x20d9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x20da, .a=0x9a, .x=0xd7, .y=0xc3, .sp=0x02, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x20d9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x20d9, .value=0xbc, .type=IO_READ},
        {.addr=0x20da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x58cc, .a=0x48, .x=0xfa, .y=0x93, .sp=0x36, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x58cc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x58cd, .a=0x49, .x=0xfa, .y=0x93, .sp=0x36, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x58cc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x58cc, .value=0xbc, .type=IO_READ},
        {.addr=0x58cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x03bc, .a=0x1f, .x=0xca, .y=0x82, .sp=0x97, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x03bc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x03bd, .a=0x20, .x=0xca, .y=0x82, .sp=0x97, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x03bc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x03bc, .value=0xbc, .type=IO_READ},
        {.addr=0x03bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x8d09, .a=0x94, .x=0x94, .y=0xa7, .sp=0x65, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8d09, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8d0a, .a=0x95, .x=0x94, .y=0xa7, .sp=0x65, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8d09, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8d09, .value=0xbc, .type=IO_READ},
        {.addr=0x8d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x628d, .a=0xdc, .x=0x98, .y=0x20, .sp=0xc3, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x628d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x628e, .a=0xdd, .x=0x98, .y=0x20, .sp=0xc3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x628d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x628d, .value=0xbc, .type=IO_READ},
        {.addr=0x628e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xeca2, .a=0x8a, .x=0x76, .y=0x0b, .sp=0xe0, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xeca2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeca3, .a=0x8b, .x=0x76, .y=0x0b, .sp=0xe0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xeca2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeca2, .value=0xbc, .type=IO_READ},
        {.addr=0xeca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x3a48, .a=0x58, .x=0xc8, .y=0x30, .sp=0xb4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a48, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3a49, .a=0x59, .x=0xc8, .y=0x30, .sp=0xb4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3a48, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3a48, .value=0xbc, .type=IO_READ},
        {.addr=0x3a49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x2057, .a=0xfc, .x=0xba, .y=0x11, .sp=0x1d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2057, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2058, .a=0xfd, .x=0xba, .y=0x11, .sp=0x1d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2057, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2057, .value=0xbc, .type=IO_READ},
        {.addr=0x2058, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x08de, .a=0x7b, .x=0xc8, .y=0xa5, .sp=0xc7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x08de, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x08df, .a=0x7c, .x=0xc8, .y=0xa5, .sp=0xc7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x08de, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x08de, .value=0xbc, .type=IO_READ},
        {.addr=0x08df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x4518, .a=0x0d, .x=0x6b, .y=0xc5, .sp=0xeb, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4518, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4519, .a=0x0e, .x=0x6b, .y=0xc5, .sp=0xeb, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4518, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4518, .value=0xbc, .type=IO_READ},
        {.addr=0x4519, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x406d, .a=0x63, .x=0xbe, .y=0xa5, .sp=0x02, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x406d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x406e, .a=0x64, .x=0xbe, .y=0xa5, .sp=0x02, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x406d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x406d, .value=0xbc, .type=IO_READ},
        {.addr=0x406e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xd2e7, .a=0xc2, .x=0x4f, .y=0xf4, .sp=0x5c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd2e7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd2e8, .a=0xc3, .x=0x4f, .y=0xf4, .sp=0x5c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd2e7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd2e7, .value=0xbc, .type=IO_READ},
        {.addr=0xd2e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x6b30, .a=0x0d, .x=0x35, .y=0x33, .sp=0xd0, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x6b30, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6b31, .a=0x0e, .x=0x35, .y=0x33, .sp=0xd0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6b30, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6b30, .value=0xbc, .type=IO_READ},
        {.addr=0x6b31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xa707, .a=0x72, .x=0x7b, .y=0x71, .sp=0xc6, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa707, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa708, .a=0x73, .x=0x7b, .y=0x71, .sp=0xc6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa707, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa707, .value=0xbc, .type=IO_READ},
        {.addr=0xa708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x5768, .a=0x30, .x=0x4b, .y=0x13, .sp=0x9f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5768, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5769, .a=0x31, .x=0x4b, .y=0x13, .sp=0x9f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5768, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5768, .value=0xbc, .type=IO_READ},
        {.addr=0x5769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x44b3, .a=0x5c, .x=0xcf, .y=0x52, .sp=0x76, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x44b3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x44b4, .a=0x5d, .x=0xcf, .y=0x52, .sp=0x76, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x44b3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x44b3, .value=0xbc, .type=IO_READ},
        {.addr=0x44b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x41aa, .a=0xf6, .x=0x35, .y=0xce, .sp=0xbf, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x41aa, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x41ab, .a=0xf7, .x=0x35, .y=0xce, .sp=0xbf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x41aa, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x41aa, .value=0xbc, .type=IO_READ},
        {.addr=0x41ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xa6f1, .a=0x6c, .x=0xd1, .y=0xa2, .sp=0x33, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa6f2, .a=0x6d, .x=0xd1, .y=0xa2, .sp=0x33, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa6f1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa6f1, .value=0xbc, .type=IO_READ},
        {.addr=0xa6f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x6b9f, .a=0xb0, .x=0x29, .y=0xe0, .sp=0x36, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6ba0, .a=0xb1, .x=0x29, .y=0xe0, .sp=0x36, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6b9f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6b9f, .value=0xbc, .type=IO_READ},
        {.addr=0x6ba0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xd6b1, .a=0x65, .x=0x57, .y=0x1b, .sp=0xc1, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd6b2, .a=0x66, .x=0x57, .y=0x1b, .sp=0xc1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd6b1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd6b1, .value=0xbc, .type=IO_READ},
        {.addr=0xd6b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xa0a1, .a=0x6e, .x=0xfd, .y=0x36, .sp=0x95, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa0a1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa0a2, .a=0x6f, .x=0xfd, .y=0x36, .sp=0x95, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa0a1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa0a1, .value=0xbc, .type=IO_READ},
        {.addr=0xa0a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x71aa, .a=0x79, .x=0x43, .y=0xb3, .sp=0x4b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x71aa, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x71ab, .a=0x7a, .x=0x43, .y=0xb3, .sp=0x4b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x71aa, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x71aa, .value=0xbc, .type=IO_READ},
        {.addr=0x71ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xf224, .a=0x18, .x=0x8d, .y=0x43, .sp=0x2d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf224, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf225, .a=0x19, .x=0x8d, .y=0x43, .sp=0x2d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf224, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf224, .value=0xbc, .type=IO_READ},
        {.addr=0xf225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x5f86, .a=0x5f, .x=0xad, .y=0x2a, .sp=0x80, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5f86, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5f87, .a=0x60, .x=0xad, .y=0x2a, .sp=0x80, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5f86, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5f86, .value=0xbc, .type=IO_READ},
        {.addr=0x5f87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xe796, .a=0xa7, .x=0x99, .y=0x87, .sp=0x4a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe796, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe797, .a=0xa8, .x=0x99, .y=0x87, .sp=0x4a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe796, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe796, .value=0xbc, .type=IO_READ},
        {.addr=0xe797, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf568, .a=0xa6, .x=0xc7, .y=0x60, .sp=0x3e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf568, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf569, .a=0xa7, .x=0xc7, .y=0x60, .sp=0x3e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf568, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf568, .value=0xbc, .type=IO_READ},
        {.addr=0xf569, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x885c, .a=0x56, .x=0xad, .y=0x4a, .sp=0x49, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x885c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x885d, .a=0x57, .x=0xad, .y=0x4a, .sp=0x49, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x885c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x885c, .value=0xbc, .type=IO_READ},
        {.addr=0x885d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x5e45, .a=0x4a, .x=0xd1, .y=0xe6, .sp=0xa4, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5e45, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5e46, .a=0x4b, .x=0xd1, .y=0xe6, .sp=0xa4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5e45, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5e45, .value=0xbc, .type=IO_READ},
        {.addr=0x5e46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xc91e, .a=0x62, .x=0xf2, .y=0xac, .sp=0xe2, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc91e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc91f, .a=0x63, .x=0xf2, .y=0xac, .sp=0xe2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc91e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc91e, .value=0xbc, .type=IO_READ},
        {.addr=0xc91f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x794e, .a=0xb6, .x=0xfb, .y=0x8d, .sp=0x8d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x794e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x794f, .a=0xb7, .x=0xfb, .y=0x8d, .sp=0x8d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x794e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x794e, .value=0xbc, .type=IO_READ},
        {.addr=0x794f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x73ec, .a=0x52, .x=0x5b, .y=0xf3, .sp=0xab, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x73ec, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x73ed, .a=0x53, .x=0x5b, .y=0xf3, .sp=0xab, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x73ec, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x73ec, .value=0xbc, .type=IO_READ},
        {.addr=0x73ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xf6ee, .a=0x91, .x=0x45, .y=0x53, .sp=0x76, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ee, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf6ef, .a=0x92, .x=0x45, .y=0x53, .sp=0x76, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xf6ee, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf6ee, .value=0xbc, .type=IO_READ},
        {.addr=0xf6ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x9333, .a=0xb1, .x=0x91, .y=0x7f, .sp=0xa1, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9333, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9334, .a=0xb2, .x=0x91, .y=0x7f, .sp=0xa1, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9333, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9333, .value=0xbc, .type=IO_READ},
        {.addr=0x9334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xf09f, .a=0x3f, .x=0x09, .y=0x53, .sp=0x0c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf09f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf0a0, .a=0x40, .x=0x09, .y=0x53, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf09f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf09f, .value=0xbc, .type=IO_READ},
        {.addr=0xf0a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x4989, .a=0x92, .x=0x37, .y=0x9d, .sp=0x54, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4989, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x498a, .a=0x93, .x=0x37, .y=0x9d, .sp=0x54, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4989, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4989, .value=0xbc, .type=IO_READ},
        {.addr=0x498a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x8ad7, .a=0x1a, .x=0x02, .y=0x4e, .sp=0x7e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8ad8, .a=0x1b, .x=0x02, .y=0x4e, .sp=0x7e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8ad7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8ad7, .value=0xbc, .type=IO_READ},
        {.addr=0x8ad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x38bf, .a=0xd4, .x=0x33, .y=0xde, .sp=0x6a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x38bf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x38c0, .a=0xd5, .x=0x33, .y=0xde, .sp=0x6a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x38bf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x38bf, .value=0xbc, .type=IO_READ},
        {.addr=0x38c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xb165, .a=0x74, .x=0x20, .y=0xeb, .sp=0x0b, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb165, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb166, .a=0x75, .x=0x20, .y=0xeb, .sp=0x0b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb165, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb165, .value=0xbc, .type=IO_READ},
        {.addr=0xb166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x9bc6, .a=0xc2, .x=0xb5, .y=0xce, .sp=0xa8, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9bc7, .a=0xc3, .x=0xb5, .y=0xce, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9bc6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9bc6, .value=0xbc, .type=IO_READ},
        {.addr=0x9bc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xc8bb, .a=0xf5, .x=0x3a, .y=0xe3, .sp=0x00, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xc8bb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc8bc, .a=0xf6, .x=0x3a, .y=0xe3, .sp=0x00, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc8bb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc8bb, .value=0xbc, .type=IO_READ},
        {.addr=0xc8bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x8403, .a=0x1d, .x=0x51, .y=0x81, .sp=0x71, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8403, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8404, .a=0x1e, .x=0x51, .y=0x81, .sp=0x71, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8403, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8403, .value=0xbc, .type=IO_READ},
        {.addr=0x8404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x657a, .a=0xd5, .x=0xc7, .y=0x55, .sp=0x45, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x657a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x657b, .a=0xd6, .x=0xc7, .y=0x55, .sp=0x45, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x657a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x657a, .value=0xbc, .type=IO_READ},
        {.addr=0x657b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x852a, .a=0x7d, .x=0x2f, .y=0x78, .sp=0x82, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x852a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x852b, .a=0x7e, .x=0x2f, .y=0x78, .sp=0x82, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x852a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x852a, .value=0xbc, .type=IO_READ},
        {.addr=0x852b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x9add, .a=0xb9, .x=0xe6, .y=0xbf, .sp=0xfa, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9add, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9ade, .a=0xba, .x=0xe6, .y=0xbf, .sp=0xfa, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9add, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9add, .value=0xbc, .type=IO_READ},
        {.addr=0x9ade, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x25d6, .a=0xe0, .x=0x82, .y=0x64, .sp=0xad, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x25d6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x25d7, .a=0xe1, .x=0x82, .y=0x64, .sp=0xad, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x25d6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x25d6, .value=0xbc, .type=IO_READ},
        {.addr=0x25d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x1da7, .a=0x15, .x=0x14, .y=0xcd, .sp=0x88, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1da7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1da8, .a=0x16, .x=0x14, .y=0xcd, .sp=0x88, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1da7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1da7, .value=0xbc, .type=IO_READ},
        {.addr=0x1da8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc045, .a=0x0e, .x=0xa9, .y=0xac, .sp=0xdb, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc045, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc046, .a=0x0f, .x=0xa9, .y=0xac, .sp=0xdb, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc045, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc045, .value=0xbc, .type=IO_READ},
        {.addr=0xc046, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0101) {
    const struct CPU_State initial_cpu = {.pc=0x1445, .a=0xcb, .x=0x45, .y=0xd1, .sp=0x07, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1445, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1446, .a=0xcc, .x=0x45, .y=0xd1, .sp=0x07, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1445, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1445, .value=0xbc, .type=IO_READ},
        {.addr=0x1446, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0102) {
    const struct CPU_State initial_cpu = {.pc=0xb0af, .a=0xec, .x=0xd9, .y=0xb0, .sp=0x04, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb0af, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb0b0, .a=0xed, .x=0xd9, .y=0xb0, .sp=0x04, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb0af, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb0af, .value=0xbc, .type=IO_READ},
        {.addr=0xb0b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0103) {
    const struct CPU_State initial_cpu = {.pc=0x810f, .a=0x73, .x=0x18, .y=0x7d, .sp=0xbd, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x810f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8110, .a=0x74, .x=0x18, .y=0x7d, .sp=0xbd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x810f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x810f, .value=0xbc, .type=IO_READ},
        {.addr=0x8110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0104) {
    const struct CPU_State initial_cpu = {.pc=0x8e25, .a=0x13, .x=0xc6, .y=0xed, .sp=0x3d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8e25, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8e26, .a=0x14, .x=0xc6, .y=0xed, .sp=0x3d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x8e25, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8e25, .value=0xbc, .type=IO_READ},
        {.addr=0x8e26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0105) {
    const struct CPU_State initial_cpu = {.pc=0x92bc, .a=0xd1, .x=0x1c, .y=0x56, .sp=0x67, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x92bc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x92bd, .a=0xd2, .x=0x1c, .y=0x56, .sp=0x67, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x92bc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x92bc, .value=0xbc, .type=IO_READ},
        {.addr=0x92bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0106) {
    const struct CPU_State initial_cpu = {.pc=0x807f, .a=0x5e, .x=0xb7, .y=0x11, .sp=0x1f, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x807f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8080, .a=0x5f, .x=0xb7, .y=0x11, .sp=0x1f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x807f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x807f, .value=0xbc, .type=IO_READ},
        {.addr=0x8080, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0107) {
    const struct CPU_State initial_cpu = {.pc=0x2dc3, .a=0xbb, .x=0x4f, .y=0x94, .sp=0x2e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2dc4, .a=0xbc, .x=0x4f, .y=0x94, .sp=0x2e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2dc3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2dc3, .value=0xbc, .type=IO_READ},
        {.addr=0x2dc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0108) {
    const struct CPU_State initial_cpu = {.pc=0x7878, .a=0x6e, .x=0x83, .y=0xe5, .sp=0x53, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7878, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7879, .a=0x6f, .x=0x83, .y=0xe5, .sp=0x53, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7878, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7878, .value=0xbc, .type=IO_READ},
        {.addr=0x7879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0109) {
    const struct CPU_State initial_cpu = {.pc=0xfc8f, .a=0x55, .x=0x51, .y=0xd8, .sp=0x52, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfc90, .a=0x56, .x=0x51, .y=0xd8, .sp=0x52, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xfc8f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfc8f, .value=0xbc, .type=IO_READ},
        {.addr=0xfc90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_010A) {
    const struct CPU_State initial_cpu = {.pc=0x047b, .a=0x74, .x=0xf7, .y=0x46, .sp=0xef, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x047b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x047c, .a=0x75, .x=0xf7, .y=0x46, .sp=0xef, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x047b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x047b, .value=0xbc, .type=IO_READ},
        {.addr=0x047c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_010B) {
    const struct CPU_State initial_cpu = {.pc=0x994f, .a=0x52, .x=0x86, .y=0xba, .sp=0x48, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x994f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9950, .a=0x53, .x=0x86, .y=0xba, .sp=0x48, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x994f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x994f, .value=0xbc, .type=IO_READ},
        {.addr=0x9950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_010C) {
    const struct CPU_State initial_cpu = {.pc=0x53df, .a=0x74, .x=0x83, .y=0xe5, .sp=0x2e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x53df, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x53e0, .a=0x75, .x=0x83, .y=0xe5, .sp=0x2e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x53df, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x53df, .value=0xbc, .type=IO_READ},
        {.addr=0x53e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_010D) {
    const struct CPU_State initial_cpu = {.pc=0x752d, .a=0x30, .x=0x16, .y=0xb9, .sp=0x5c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x752d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x752e, .a=0x31, .x=0x16, .y=0xb9, .sp=0x5c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x752d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x752d, .value=0xbc, .type=IO_READ},
        {.addr=0x752e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf293, .a=0xa6, .x=0xf9, .y=0xa0, .sp=0x2c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf293, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf294, .a=0xa7, .x=0xf9, .y=0xa0, .sp=0x2c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf293, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf293, .value=0xbc, .type=IO_READ},
        {.addr=0xf294, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_010F) {
    const struct CPU_State initial_cpu = {.pc=0x79cc, .a=0xeb, .x=0x70, .y=0xa3, .sp=0x91, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x79cc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x79cd, .a=0xec, .x=0x70, .y=0xa3, .sp=0x91, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x79cc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x79cc, .value=0xbc, .type=IO_READ},
        {.addr=0x79cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0110) {
    const struct CPU_State initial_cpu = {.pc=0x348d, .a=0x28, .x=0x75, .y=0xfc, .sp=0x24, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x348d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x348e, .a=0x29, .x=0x75, .y=0xfc, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x348d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x348d, .value=0xbc, .type=IO_READ},
        {.addr=0x348e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0111) {
    const struct CPU_State initial_cpu = {.pc=0xdf93, .a=0x94, .x=0xa9, .y=0xb4, .sp=0xdb, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xdf93, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdf94, .a=0x95, .x=0xa9, .y=0xb4, .sp=0xdb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xdf93, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdf93, .value=0xbc, .type=IO_READ},
        {.addr=0xdf94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0112) {
    const struct CPU_State initial_cpu = {.pc=0x215a, .a=0xd6, .x=0xfb, .y=0x61, .sp=0x56, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x215a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x215b, .a=0xd7, .x=0xfb, .y=0x61, .sp=0x56, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x215a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x215a, .value=0xbc, .type=IO_READ},
        {.addr=0x215b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0113) {
    const struct CPU_State initial_cpu = {.pc=0x724c, .a=0x76, .x=0x68, .y=0x52, .sp=0x28, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x724c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x724d, .a=0x77, .x=0x68, .y=0x52, .sp=0x28, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x724c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x724c, .value=0xbc, .type=IO_READ},
        {.addr=0x724d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0114) {
    const struct CPU_State initial_cpu = {.pc=0x7efc, .a=0x78, .x=0xa2, .y=0xf1, .sp=0x95, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7efc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7efd, .a=0x79, .x=0xa2, .y=0xf1, .sp=0x95, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7efc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7efc, .value=0xbc, .type=IO_READ},
        {.addr=0x7efd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0115) {
    const struct CPU_State initial_cpu = {.pc=0xcffa, .a=0x74, .x=0x7e, .y=0xf5, .sp=0xfb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xcffa, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcffb, .a=0x75, .x=0x7e, .y=0xf5, .sp=0xfb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xcffa, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcffa, .value=0xbc, .type=IO_READ},
        {.addr=0xcffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0116) {
    const struct CPU_State initial_cpu = {.pc=0xa41a, .a=0xa7, .x=0x49, .y=0x35, .sp=0xf4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xa41a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa41b, .a=0xa8, .x=0x49, .y=0x35, .sp=0xf4, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa41a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa41a, .value=0xbc, .type=IO_READ},
        {.addr=0xa41b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0117) {
    const struct CPU_State initial_cpu = {.pc=0x06e9, .a=0x49, .x=0xa1, .y=0xd5, .sp=0x78, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x06e9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x06ea, .a=0x4a, .x=0xa1, .y=0xd5, .sp=0x78, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x06e9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x06e9, .value=0xbc, .type=IO_READ},
        {.addr=0x06ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0118) {
    const struct CPU_State initial_cpu = {.pc=0x4bd3, .a=0x48, .x=0x1d, .y=0xe4, .sp=0x98, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4bd4, .a=0x49, .x=0x1d, .y=0xe4, .sp=0x98, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4bd3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4bd3, .value=0xbc, .type=IO_READ},
        {.addr=0x4bd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0119) {
    const struct CPU_State initial_cpu = {.pc=0x183f, .a=0xa9, .x=0x35, .y=0x2c, .sp=0x4c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x183f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1840, .a=0xaa, .x=0x35, .y=0x2c, .sp=0x4c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x183f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x183f, .value=0xbc, .type=IO_READ},
        {.addr=0x1840, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_011A) {
    const struct CPU_State initial_cpu = {.pc=0xed90, .a=0x82, .x=0xd7, .y=0x85, .sp=0x8f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xed90, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xed91, .a=0x83, .x=0xd7, .y=0x85, .sp=0x8f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xed90, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xed90, .value=0xbc, .type=IO_READ},
        {.addr=0xed91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_011B) {
    const struct CPU_State initial_cpu = {.pc=0x304f, .a=0x7e, .x=0xfd, .y=0x74, .sp=0x64, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x304f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3050, .a=0x7f, .x=0xfd, .y=0x74, .sp=0x64, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x304f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x304f, .value=0xbc, .type=IO_READ},
        {.addr=0x3050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_011C) {
    const struct CPU_State initial_cpu = {.pc=0xc6bf, .a=0xc1, .x=0x6f, .y=0x5b, .sp=0x22, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc6bf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc6c0, .a=0xc2, .x=0x6f, .y=0x5b, .sp=0x22, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc6bf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc6bf, .value=0xbc, .type=IO_READ},
        {.addr=0xc6c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_011D) {
    const struct CPU_State initial_cpu = {.pc=0x082a, .a=0x80, .x=0x68, .y=0xf5, .sp=0x27, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x082a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x082b, .a=0x81, .x=0x68, .y=0xf5, .sp=0x27, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x082a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x082a, .value=0xbc, .type=IO_READ},
        {.addr=0x082b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_011E) {
    const struct CPU_State initial_cpu = {.pc=0x7346, .a=0xa9, .x=0xeb, .y=0x53, .sp=0x37, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7346, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7347, .a=0xaa, .x=0xeb, .y=0x53, .sp=0x37, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7346, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7346, .value=0xbc, .type=IO_READ},
        {.addr=0x7347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_011F) {
    const struct CPU_State initial_cpu = {.pc=0xb748, .a=0x00, .x=0xba, .y=0xf1, .sp=0x37, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb748, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb749, .a=0x01, .x=0xba, .y=0xf1, .sp=0x37, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb748, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb748, .value=0xbc, .type=IO_READ},
        {.addr=0xb749, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0120) {
    const struct CPU_State initial_cpu = {.pc=0x372f, .a=0x7e, .x=0x30, .y=0xee, .sp=0x7e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x372f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3730, .a=0x7f, .x=0x30, .y=0xee, .sp=0x7e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x372f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x372f, .value=0xbc, .type=IO_READ},
        {.addr=0x3730, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0121) {
    const struct CPU_State initial_cpu = {.pc=0x9e63, .a=0x9a, .x=0xf0, .y=0x83, .sp=0x8b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e63, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9e64, .a=0x9b, .x=0xf0, .y=0x83, .sp=0x8b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9e63, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9e63, .value=0xbc, .type=IO_READ},
        {.addr=0x9e64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0122) {
    const struct CPU_State initial_cpu = {.pc=0x8d16, .a=0x51, .x=0x35, .y=0xb5, .sp=0x61, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8d16, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8d17, .a=0x52, .x=0x35, .y=0xb5, .sp=0x61, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8d16, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8d16, .value=0xbc, .type=IO_READ},
        {.addr=0x8d17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0123) {
    const struct CPU_State initial_cpu = {.pc=0x8841, .a=0x56, .x=0xf6, .y=0x76, .sp=0xd2, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8841, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8842, .a=0x57, .x=0xf6, .y=0x76, .sp=0xd2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8841, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8841, .value=0xbc, .type=IO_READ},
        {.addr=0x8842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0124) {
    const struct CPU_State initial_cpu = {.pc=0x099f, .a=0x5d, .x=0x18, .y=0x89, .sp=0x52, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x099f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x09a0, .a=0x5e, .x=0x18, .y=0x89, .sp=0x52, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x099f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x099f, .value=0xbc, .type=IO_READ},
        {.addr=0x09a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0125) {
    const struct CPU_State initial_cpu = {.pc=0xafe2, .a=0x9e, .x=0x39, .y=0x9b, .sp=0x59, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xafe2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xafe3, .a=0x9f, .x=0x39, .y=0x9b, .sp=0x59, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xafe2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xafe2, .value=0xbc, .type=IO_READ},
        {.addr=0xafe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0126) {
    const struct CPU_State initial_cpu = {.pc=0xb52e, .a=0x92, .x=0x2e, .y=0xa8, .sp=0x50, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb52e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb52f, .a=0x93, .x=0x2e, .y=0xa8, .sp=0x50, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb52e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb52e, .value=0xbc, .type=IO_READ},
        {.addr=0xb52f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0127) {
    const struct CPU_State initial_cpu = {.pc=0xf2b2, .a=0x25, .x=0x12, .y=0x25, .sp=0x15, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf2b3, .a=0x26, .x=0x12, .y=0x25, .sp=0x15, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf2b2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf2b2, .value=0xbc, .type=IO_READ},
        {.addr=0xf2b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3486, .a=0x07, .x=0x46, .y=0x7f, .sp=0xcd, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3486, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3487, .a=0x08, .x=0x46, .y=0x7f, .sp=0xcd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3486, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3486, .value=0xbc, .type=IO_READ},
        {.addr=0x3487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0129) {
    const struct CPU_State initial_cpu = {.pc=0x97ff, .a=0x16, .x=0xe8, .y=0x89, .sp=0xd9, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x97ff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9800, .a=0x17, .x=0xe8, .y=0x89, .sp=0xd9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x97ff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x97ff, .value=0xbc, .type=IO_READ},
        {.addr=0x9800, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_012A) {
    const struct CPU_State initial_cpu = {.pc=0xb6c8, .a=0x22, .x=0x03, .y=0x3a, .sp=0x04, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb6c9, .a=0x23, .x=0x03, .y=0x3a, .sp=0x04, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb6c8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb6c8, .value=0xbc, .type=IO_READ},
        {.addr=0xb6c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_012B) {
    const struct CPU_State initial_cpu = {.pc=0xc165, .a=0x05, .x=0x8c, .y=0x3e, .sp=0xe6, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc165, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc166, .a=0x06, .x=0x8c, .y=0x3e, .sp=0xe6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc165, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc165, .value=0xbc, .type=IO_READ},
        {.addr=0xc166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_012C) {
    const struct CPU_State initial_cpu = {.pc=0x7a04, .a=0x0f, .x=0xd8, .y=0xf0, .sp=0x39, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x7a04, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7a05, .a=0x10, .x=0xd8, .y=0xf0, .sp=0x39, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7a04, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7a04, .value=0xbc, .type=IO_READ},
        {.addr=0x7a05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_012D) {
    const struct CPU_State initial_cpu = {.pc=0x3b26, .a=0x0b, .x=0xcb, .y=0xc6, .sp=0x8f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3b26, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3b27, .a=0x0c, .x=0xcb, .y=0xc6, .sp=0x8f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3b26, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3b26, .value=0xbc, .type=IO_READ},
        {.addr=0x3b27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_012E) {
    const struct CPU_State initial_cpu = {.pc=0x20af, .a=0xf2, .x=0xf9, .y=0x32, .sp=0xdc, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x20af, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x20b0, .a=0xf3, .x=0xf9, .y=0x32, .sp=0xdc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x20af, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x20af, .value=0xbc, .type=IO_READ},
        {.addr=0x20b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_012F) {
    const struct CPU_State initial_cpu = {.pc=0xb48e, .a=0xbf, .x=0x9b, .y=0x39, .sp=0x02, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb48e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb48f, .a=0xc0, .x=0x9b, .y=0x39, .sp=0x02, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb48e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb48e, .value=0xbc, .type=IO_READ},
        {.addr=0xb48f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0130) {
    const struct CPU_State initial_cpu = {.pc=0x04cf, .a=0x25, .x=0x2a, .y=0x25, .sp=0x11, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x04cf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x04d0, .a=0x26, .x=0x2a, .y=0x25, .sp=0x11, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x04cf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x04cf, .value=0xbc, .type=IO_READ},
        {.addr=0x04d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0131) {
    const struct CPU_State initial_cpu = {.pc=0xb336, .a=0x33, .x=0x8c, .y=0x80, .sp=0x9a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb336, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb337, .a=0x34, .x=0x8c, .y=0x80, .sp=0x9a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb336, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb336, .value=0xbc, .type=IO_READ},
        {.addr=0xb337, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0132) {
    const struct CPU_State initial_cpu = {.pc=0xf149, .a=0x58, .x=0xda, .y=0xc9, .sp=0xac, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xf149, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf14a, .a=0x59, .x=0xda, .y=0xc9, .sp=0xac, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xf149, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf149, .value=0xbc, .type=IO_READ},
        {.addr=0xf14a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0133) {
    const struct CPU_State initial_cpu = {.pc=0x1a5a, .a=0xb3, .x=0x1b, .y=0x12, .sp=0x73, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1a5a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1a5b, .a=0xb4, .x=0x1b, .y=0x12, .sp=0x73, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1a5a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1a5a, .value=0xbc, .type=IO_READ},
        {.addr=0x1a5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0134) {
    const struct CPU_State initial_cpu = {.pc=0x549c, .a=0xea, .x=0x5d, .y=0x71, .sp=0x08, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x549c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x549d, .a=0xeb, .x=0x5d, .y=0x71, .sp=0x08, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x549c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x549c, .value=0xbc, .type=IO_READ},
        {.addr=0x549d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0135) {
    const struct CPU_State initial_cpu = {.pc=0xb703, .a=0xa6, .x=0x24, .y=0x84, .sp=0xe8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb703, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb704, .a=0xa7, .x=0x24, .y=0x84, .sp=0xe8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb703, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb703, .value=0xbc, .type=IO_READ},
        {.addr=0xb704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0136) {
    const struct CPU_State initial_cpu = {.pc=0xd0da, .a=0x66, .x=0x67, .y=0x7e, .sp=0x47, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd0da, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd0db, .a=0x67, .x=0x67, .y=0x7e, .sp=0x47, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd0da, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd0da, .value=0xbc, .type=IO_READ},
        {.addr=0xd0db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0137) {
    const struct CPU_State initial_cpu = {.pc=0x95cb, .a=0x91, .x=0x3d, .y=0x2e, .sp=0x6d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x95cb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x95cc, .a=0x92, .x=0x3d, .y=0x2e, .sp=0x6d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x95cb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x95cb, .value=0xbc, .type=IO_READ},
        {.addr=0x95cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0138) {
    const struct CPU_State initial_cpu = {.pc=0xee0e, .a=0x1f, .x=0xc7, .y=0x86, .sp=0x83, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xee0e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xee0f, .a=0x20, .x=0xc7, .y=0x86, .sp=0x83, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xee0e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xee0e, .value=0xbc, .type=IO_READ},
        {.addr=0xee0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0139) {
    const struct CPU_State initial_cpu = {.pc=0xb465, .a=0x79, .x=0xc0, .y=0xc6, .sp=0x60, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xb465, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb466, .a=0x7a, .x=0xc0, .y=0xc6, .sp=0x60, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb465, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb465, .value=0xbc, .type=IO_READ},
        {.addr=0xb466, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_013A) {
    const struct CPU_State initial_cpu = {.pc=0x77b9, .a=0x53, .x=0x95, .y=0xac, .sp=0x64, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x77b9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x77ba, .a=0x54, .x=0x95, .y=0xac, .sp=0x64, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x77b9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x77b9, .value=0xbc, .type=IO_READ},
        {.addr=0x77ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_013B) {
    const struct CPU_State initial_cpu = {.pc=0x5996, .a=0xf6, .x=0x89, .y=0x00, .sp=0x18, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5996, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5997, .a=0xf7, .x=0x89, .y=0x00, .sp=0x18, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5996, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5996, .value=0xbc, .type=IO_READ},
        {.addr=0x5997, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_013C) {
    const struct CPU_State initial_cpu = {.pc=0x6321, .a=0x67, .x=0xdd, .y=0x00, .sp=0xec, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6321, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6322, .a=0x68, .x=0xdd, .y=0x00, .sp=0xec, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6321, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6321, .value=0xbc, .type=IO_READ},
        {.addr=0x6322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_013D) {
    const struct CPU_State initial_cpu = {.pc=0xe498, .a=0xba, .x=0xbd, .y=0x57, .sp=0x8d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe498, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe499, .a=0xbb, .x=0xbd, .y=0x57, .sp=0x8d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe498, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe498, .value=0xbc, .type=IO_READ},
        {.addr=0xe499, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_013E) {
    const struct CPU_State initial_cpu = {.pc=0xfbba, .a=0xa3, .x=0xd5, .y=0x59, .sp=0x7f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xfbba, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfbbb, .a=0xa4, .x=0xd5, .y=0x59, .sp=0x7f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xfbba, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfbba, .value=0xbc, .type=IO_READ},
        {.addr=0xfbbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_013F) {
    const struct CPU_State initial_cpu = {.pc=0xb070, .a=0x08, .x=0x5c, .y=0x43, .sp=0x73, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb070, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb071, .a=0x09, .x=0x5c, .y=0x43, .sp=0x73, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb070, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb070, .value=0xbc, .type=IO_READ},
        {.addr=0xb071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0140) {
    const struct CPU_State initial_cpu = {.pc=0x3363, .a=0xc4, .x=0x68, .y=0xee, .sp=0x5f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3363, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3364, .a=0xc5, .x=0x68, .y=0xee, .sp=0x5f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x3363, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3363, .value=0xbc, .type=IO_READ},
        {.addr=0x3364, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0141) {
    const struct CPU_State initial_cpu = {.pc=0x47dc, .a=0x3e, .x=0x56, .y=0xb7, .sp=0xfd, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x47dc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x47dd, .a=0x3f, .x=0x56, .y=0xb7, .sp=0xfd, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x47dc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x47dc, .value=0xbc, .type=IO_READ},
        {.addr=0x47dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0142) {
    const struct CPU_State initial_cpu = {.pc=0x7288, .a=0xb8, .x=0x4b, .y=0xf7, .sp=0x17, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7288, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7289, .a=0xb9, .x=0x4b, .y=0xf7, .sp=0x17, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7288, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7288, .value=0xbc, .type=IO_READ},
        {.addr=0x7289, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0143) {
    const struct CPU_State initial_cpu = {.pc=0x602b, .a=0xcf, .x=0x70, .y=0x6c, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x602b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x602c, .a=0xd0, .x=0x70, .y=0x6c, .sp=0x62, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x602b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x602b, .value=0xbc, .type=IO_READ},
        {.addr=0x602c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0144) {
    const struct CPU_State initial_cpu = {.pc=0x0c79, .a=0xd1, .x=0x86, .y=0x75, .sp=0x59, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0c79, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0c7a, .a=0xd2, .x=0x86, .y=0x75, .sp=0x59, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0c79, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0c79, .value=0xbc, .type=IO_READ},
        {.addr=0x0c7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0145) {
    const struct CPU_State initial_cpu = {.pc=0x354f, .a=0x43, .x=0xb9, .y=0x01, .sp=0xb1, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x354f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3550, .a=0x44, .x=0xb9, .y=0x01, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x354f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x354f, .value=0xbc, .type=IO_READ},
        {.addr=0x3550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0146) {
    const struct CPU_State initial_cpu = {.pc=0x262a, .a=0x34, .x=0x98, .y=0xee, .sp=0x5d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x262a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x262b, .a=0x35, .x=0x98, .y=0xee, .sp=0x5d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x262a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x262a, .value=0xbc, .type=IO_READ},
        {.addr=0x262b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0147) {
    const struct CPU_State initial_cpu = {.pc=0x14a5, .a=0x1f, .x=0xb0, .y=0x3a, .sp=0x9c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x14a5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x14a6, .a=0x20, .x=0xb0, .y=0x3a, .sp=0x9c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x14a5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x14a5, .value=0xbc, .type=IO_READ},
        {.addr=0x14a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0148) {
    const struct CPU_State initial_cpu = {.pc=0x949d, .a=0xeb, .x=0xed, .y=0x9b, .sp=0x98, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x949d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x949e, .a=0xec, .x=0xed, .y=0x9b, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x949d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x949d, .value=0xbc, .type=IO_READ},
        {.addr=0x949e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0149) {
    const struct CPU_State initial_cpu = {.pc=0x6d3b, .a=0x28, .x=0xcf, .y=0xa2, .sp=0xf0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6d3b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6d3c, .a=0x29, .x=0xcf, .y=0xa2, .sp=0xf0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6d3b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6d3b, .value=0xbc, .type=IO_READ},
        {.addr=0x6d3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_014A) {
    const struct CPU_State initial_cpu = {.pc=0x0eda, .a=0xf4, .x=0x81, .y=0xb2, .sp=0x8d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0eda, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0edb, .a=0xf5, .x=0x81, .y=0xb2, .sp=0x8d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0eda, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0eda, .value=0xbc, .type=IO_READ},
        {.addr=0x0edb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_014B) {
    const struct CPU_State initial_cpu = {.pc=0x4350, .a=0x30, .x=0xf8, .y=0x06, .sp=0xe7, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4350, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4351, .a=0x31, .x=0xf8, .y=0x06, .sp=0xe7, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4350, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4350, .value=0xbc, .type=IO_READ},
        {.addr=0x4351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_014C) {
    const struct CPU_State initial_cpu = {.pc=0x3963, .a=0x80, .x=0xe5, .y=0xc2, .sp=0x91, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3963, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3964, .a=0x81, .x=0xe5, .y=0xc2, .sp=0x91, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3963, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3963, .value=0xbc, .type=IO_READ},
        {.addr=0x3964, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_014D) {
    const struct CPU_State initial_cpu = {.pc=0xecf9, .a=0xc0, .x=0x08, .y=0x54, .sp=0xf0, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xecf9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xecfa, .a=0xc1, .x=0x08, .y=0x54, .sp=0xf0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xecf9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xecf9, .value=0xbc, .type=IO_READ},
        {.addr=0xecfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_014E) {
    const struct CPU_State initial_cpu = {.pc=0x32ab, .a=0x0d, .x=0x17, .y=0xac, .sp=0xa0, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x32ab, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x32ac, .a=0x0e, .x=0x17, .y=0xac, .sp=0xa0, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x32ab, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x32ab, .value=0xbc, .type=IO_READ},
        {.addr=0x32ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_014F) {
    const struct CPU_State initial_cpu = {.pc=0xc7ff, .a=0x40, .x=0xc4, .y=0xb0, .sp=0x70, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc800, .a=0x41, .x=0xc4, .y=0xb0, .sp=0x70, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc7ff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc7ff, .value=0xbc, .type=IO_READ},
        {.addr=0xc800, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0150) {
    const struct CPU_State initial_cpu = {.pc=0xa1dd, .a=0x38, .x=0x3a, .y=0xf8, .sp=0x9d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa1dd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa1de, .a=0x39, .x=0x3a, .y=0xf8, .sp=0x9d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa1dd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa1dd, .value=0xbc, .type=IO_READ},
        {.addr=0xa1de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0151) {
    const struct CPU_State initial_cpu = {.pc=0x90a7, .a=0xac, .x=0x7f, .y=0x52, .sp=0xa1, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x90a7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x90a8, .a=0xad, .x=0x7f, .y=0x52, .sp=0xa1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x90a7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x90a7, .value=0xbc, .type=IO_READ},
        {.addr=0x90a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0152) {
    const struct CPU_State initial_cpu = {.pc=0x7462, .a=0xf4, .x=0x93, .y=0x5c, .sp=0x1b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7462, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7463, .a=0xf5, .x=0x93, .y=0x5c, .sp=0x1b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7462, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7462, .value=0xbc, .type=IO_READ},
        {.addr=0x7463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0153) {
    const struct CPU_State initial_cpu = {.pc=0x955a, .a=0xfd, .x=0x7f, .y=0xfb, .sp=0x65, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x955a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x955b, .a=0xfe, .x=0x7f, .y=0xfb, .sp=0x65, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x955a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x955a, .value=0xbc, .type=IO_READ},
        {.addr=0x955b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0154) {
    const struct CPU_State initial_cpu = {.pc=0x3bc2, .a=0x31, .x=0x6d, .y=0xc7, .sp=0x37, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3bc3, .a=0x32, .x=0x6d, .y=0xc7, .sp=0x37, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3bc2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3bc2, .value=0xbc, .type=IO_READ},
        {.addr=0x3bc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0155) {
    const struct CPU_State initial_cpu = {.pc=0x5a15, .a=0xec, .x=0x99, .y=0xd7, .sp=0x85, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5a15, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5a16, .a=0xed, .x=0x99, .y=0xd7, .sp=0x85, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5a15, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5a15, .value=0xbc, .type=IO_READ},
        {.addr=0x5a16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0156) {
    const struct CPU_State initial_cpu = {.pc=0x42e1, .a=0x78, .x=0x1b, .y=0x5f, .sp=0x03, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x42e1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x42e2, .a=0x79, .x=0x1b, .y=0x5f, .sp=0x03, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x42e1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x42e1, .value=0xbc, .type=IO_READ},
        {.addr=0x42e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0157) {
    const struct CPU_State initial_cpu = {.pc=0x458d, .a=0x47, .x=0x55, .y=0x5a, .sp=0x67, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x458d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x458e, .a=0x48, .x=0x55, .y=0x5a, .sp=0x67, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x458d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x458d, .value=0xbc, .type=IO_READ},
        {.addr=0x458e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0158) {
    const struct CPU_State initial_cpu = {.pc=0x467a, .a=0x65, .x=0x1f, .y=0x0f, .sp=0xde, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x467a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x467b, .a=0x66, .x=0x1f, .y=0x0f, .sp=0xde, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x467a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x467a, .value=0xbc, .type=IO_READ},
        {.addr=0x467b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0159) {
    const struct CPU_State initial_cpu = {.pc=0x7c8a, .a=0x9d, .x=0x1c, .y=0xf3, .sp=0xf4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x7c8a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7c8b, .a=0x9e, .x=0x1c, .y=0xf3, .sp=0xf4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7c8a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7c8a, .value=0xbc, .type=IO_READ},
        {.addr=0x7c8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_015A) {
    const struct CPU_State initial_cpu = {.pc=0x9b94, .a=0x07, .x=0xf9, .y=0x8d, .sp=0xe8, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x9b94, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9b95, .a=0x08, .x=0xf9, .y=0x8d, .sp=0xe8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9b94, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9b94, .value=0xbc, .type=IO_READ},
        {.addr=0x9b95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_015B) {
    const struct CPU_State initial_cpu = {.pc=0xaec1, .a=0x35, .x=0x3b, .y=0x8a, .sp=0xe7, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xaec1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xaec2, .a=0x36, .x=0x3b, .y=0x8a, .sp=0xe7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xaec1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xaec1, .value=0xbc, .type=IO_READ},
        {.addr=0xaec2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_015C) {
    const struct CPU_State initial_cpu = {.pc=0xd86d, .a=0x75, .x=0xa6, .y=0x79, .sp=0x9f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd86d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd86e, .a=0x76, .x=0xa6, .y=0x79, .sp=0x9f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd86d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd86d, .value=0xbc, .type=IO_READ},
        {.addr=0xd86e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_015D) {
    const struct CPU_State initial_cpu = {.pc=0xf00a, .a=0x54, .x=0x15, .y=0x9f, .sp=0x89, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xf00a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf00b, .a=0x55, .x=0x15, .y=0x9f, .sp=0x89, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf00a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf00a, .value=0xbc, .type=IO_READ},
        {.addr=0xf00b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_015E) {
    const struct CPU_State initial_cpu = {.pc=0x9dfc, .a=0xfb, .x=0x5a, .y=0x5d, .sp=0xdc, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9dfc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9dfd, .a=0xfc, .x=0x5a, .y=0x5d, .sp=0xdc, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9dfc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9dfc, .value=0xbc, .type=IO_READ},
        {.addr=0x9dfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_015F) {
    const struct CPU_State initial_cpu = {.pc=0xc851, .a=0xab, .x=0xae, .y=0xcd, .sp=0xc2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc851, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc852, .a=0xac, .x=0xae, .y=0xcd, .sp=0xc2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc851, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc851, .value=0xbc, .type=IO_READ},
        {.addr=0xc852, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0160) {
    const struct CPU_State initial_cpu = {.pc=0xa7e5, .a=0x98, .x=0x39, .y=0x4a, .sp=0xab, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa7e6, .a=0x99, .x=0x39, .y=0x4a, .sp=0xab, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa7e5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa7e5, .value=0xbc, .type=IO_READ},
        {.addr=0xa7e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0161) {
    const struct CPU_State initial_cpu = {.pc=0x2b62, .a=0x01, .x=0x70, .y=0xe8, .sp=0xcd, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2b62, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2b63, .a=0x02, .x=0x70, .y=0xe8, .sp=0xcd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2b62, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2b62, .value=0xbc, .type=IO_READ},
        {.addr=0x2b63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0162) {
    const struct CPU_State initial_cpu = {.pc=0x8dff, .a=0x5c, .x=0xc2, .y=0x34, .sp=0xe5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8dff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8e00, .a=0x5d, .x=0xc2, .y=0x34, .sp=0xe5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8dff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8dff, .value=0xbc, .type=IO_READ},
        {.addr=0x8e00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0163) {
    const struct CPU_State initial_cpu = {.pc=0x4d05, .a=0xa4, .x=0xf2, .y=0x45, .sp=0x57, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4d05, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4d06, .a=0xa5, .x=0xf2, .y=0x45, .sp=0x57, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4d05, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4d05, .value=0xbc, .type=IO_READ},
        {.addr=0x4d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0164) {
    const struct CPU_State initial_cpu = {.pc=0xdb66, .a=0x40, .x=0x83, .y=0x0d, .sp=0x12, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb66, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdb67, .a=0x41, .x=0x83, .y=0x0d, .sp=0x12, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xdb66, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdb66, .value=0xbc, .type=IO_READ},
        {.addr=0xdb67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0165) {
    const struct CPU_State initial_cpu = {.pc=0x760e, .a=0x0d, .x=0xab, .y=0x9a, .sp=0x97, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x760e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x760f, .a=0x0e, .x=0xab, .y=0x9a, .sp=0x97, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x760e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x760e, .value=0xbc, .type=IO_READ},
        {.addr=0x760f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0166) {
    const struct CPU_State initial_cpu = {.pc=0x3987, .a=0x0d, .x=0x11, .y=0x23, .sp=0xb6, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3987, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3988, .a=0x0e, .x=0x11, .y=0x23, .sp=0xb6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3987, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3987, .value=0xbc, .type=IO_READ},
        {.addr=0x3988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0167) {
    const struct CPU_State initial_cpu = {.pc=0x4af6, .a=0x3f, .x=0x9b, .y=0x89, .sp=0x12, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4af6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4af7, .a=0x40, .x=0x9b, .y=0x89, .sp=0x12, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4af6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4af6, .value=0xbc, .type=IO_READ},
        {.addr=0x4af7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0168) {
    const struct CPU_State initial_cpu = {.pc=0xee62, .a=0xfa, .x=0x09, .y=0xb9, .sp=0x71, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xee62, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xee63, .a=0xfb, .x=0x09, .y=0xb9, .sp=0x71, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xee62, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xee62, .value=0xbc, .type=IO_READ},
        {.addr=0xee63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0169) {
    const struct CPU_State initial_cpu = {.pc=0xba7c, .a=0x7c, .x=0xdf, .y=0x60, .sp=0x05, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xba7c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xba7d, .a=0x7d, .x=0xdf, .y=0x60, .sp=0x05, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xba7c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xba7c, .value=0xbc, .type=IO_READ},
        {.addr=0xba7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_016A) {
    const struct CPU_State initial_cpu = {.pc=0x6fab, .a=0x0c, .x=0x46, .y=0x63, .sp=0xf0, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6fab, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6fac, .a=0x0d, .x=0x46, .y=0x63, .sp=0xf0, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6fab, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6fab, .value=0xbc, .type=IO_READ},
        {.addr=0x6fac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_016B) {
    const struct CPU_State initial_cpu = {.pc=0xfc47, .a=0x6a, .x=0x52, .y=0x83, .sp=0xe1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfc47, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfc48, .a=0x6b, .x=0x52, .y=0x83, .sp=0xe1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfc47, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfc47, .value=0xbc, .type=IO_READ},
        {.addr=0xfc48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_016C) {
    const struct CPU_State initial_cpu = {.pc=0xb385, .a=0x2d, .x=0x12, .y=0x9b, .sp=0x8c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb385, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb386, .a=0x2e, .x=0x12, .y=0x9b, .sp=0x8c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb385, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb385, .value=0xbc, .type=IO_READ},
        {.addr=0xb386, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_016D) {
    const struct CPU_State initial_cpu = {.pc=0xf338, .a=0x83, .x=0xda, .y=0x2b, .sp=0x05, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xf338, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf339, .a=0x84, .x=0xda, .y=0x2b, .sp=0x05, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf338, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf338, .value=0xbc, .type=IO_READ},
        {.addr=0xf339, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_016E) {
    const struct CPU_State initial_cpu = {.pc=0x6301, .a=0x56, .x=0x85, .y=0x07, .sp=0xc6, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6301, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6302, .a=0x57, .x=0x85, .y=0x07, .sp=0xc6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6301, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6301, .value=0xbc, .type=IO_READ},
        {.addr=0x6302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_016F) {
    const struct CPU_State initial_cpu = {.pc=0x1bb9, .a=0x12, .x=0x3c, .y=0x5c, .sp=0x19, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1bb9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1bba, .a=0x13, .x=0x3c, .y=0x5c, .sp=0x19, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1bb9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1bb9, .value=0xbc, .type=IO_READ},
        {.addr=0x1bba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0170) {
    const struct CPU_State initial_cpu = {.pc=0x309e, .a=0x6b, .x=0xfc, .y=0x0c, .sp=0xa5, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x309e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x309f, .a=0x6c, .x=0xfc, .y=0x0c, .sp=0xa5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x309e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x309e, .value=0xbc, .type=IO_READ},
        {.addr=0x309f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0171) {
    const struct CPU_State initial_cpu = {.pc=0x3f45, .a=0x9c, .x=0xb0, .y=0xb9, .sp=0xe2, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3f45, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3f46, .a=0x9d, .x=0xb0, .y=0xb9, .sp=0xe2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3f45, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3f45, .value=0xbc, .type=IO_READ},
        {.addr=0x3f46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0172) {
    const struct CPU_State initial_cpu = {.pc=0xb42e, .a=0x48, .x=0x38, .y=0x31, .sp=0xb2, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xb42e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb42f, .a=0x49, .x=0x38, .y=0x31, .sp=0xb2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb42e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb42e, .value=0xbc, .type=IO_READ},
        {.addr=0xb42f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0173) {
    const struct CPU_State initial_cpu = {.pc=0xe308, .a=0xa6, .x=0xe2, .y=0x57, .sp=0x74, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe308, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe309, .a=0xa7, .x=0xe2, .y=0x57, .sp=0x74, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe308, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe308, .value=0xbc, .type=IO_READ},
        {.addr=0xe309, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0174) {
    const struct CPU_State initial_cpu = {.pc=0x4a88, .a=0xf2, .x=0x2f, .y=0x52, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x4a88, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4a89, .a=0xf3, .x=0x2f, .y=0x52, .sp=0xf8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4a88, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4a88, .value=0xbc, .type=IO_READ},
        {.addr=0x4a89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0175) {
    const struct CPU_State initial_cpu = {.pc=0xd4f5, .a=0xed, .x=0x4e, .y=0xbf, .sp=0x38, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd4f5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd4f6, .a=0xee, .x=0x4e, .y=0xbf, .sp=0x38, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd4f5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd4f5, .value=0xbc, .type=IO_READ},
        {.addr=0xd4f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0176) {
    const struct CPU_State initial_cpu = {.pc=0x0e0b, .a=0x5b, .x=0x82, .y=0x83, .sp=0xd6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0e0c, .a=0x5c, .x=0x82, .y=0x83, .sp=0xd6, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0e0b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0e0b, .value=0xbc, .type=IO_READ},
        {.addr=0x0e0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0177) {
    const struct CPU_State initial_cpu = {.pc=0xe51f, .a=0x8d, .x=0x4e, .y=0x95, .sp=0xb4, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xe51f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe520, .a=0x8e, .x=0x4e, .y=0x95, .sp=0xb4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe51f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe51f, .value=0xbc, .type=IO_READ},
        {.addr=0xe520, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0178) {
    const struct CPU_State initial_cpu = {.pc=0xe20d, .a=0x59, .x=0x14, .y=0xfb, .sp=0xf7, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe20d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe20e, .a=0x5a, .x=0x14, .y=0xfb, .sp=0xf7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe20d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe20d, .value=0xbc, .type=IO_READ},
        {.addr=0xe20e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0179) {
    const struct CPU_State initial_cpu = {.pc=0x45f9, .a=0xa6, .x=0xf1, .y=0xd5, .sp=0x12, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x45f9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x45fa, .a=0xa7, .x=0xf1, .y=0xd5, .sp=0x12, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x45f9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x45f9, .value=0xbc, .type=IO_READ},
        {.addr=0x45fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_017A) {
    const struct CPU_State initial_cpu = {.pc=0x10ff, .a=0x74, .x=0xb2, .y=0xea, .sp=0x90, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x10ff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1100, .a=0x75, .x=0xb2, .y=0xea, .sp=0x90, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x10ff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x10ff, .value=0xbc, .type=IO_READ},
        {.addr=0x1100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_017B) {
    const struct CPU_State initial_cpu = {.pc=0xd87c, .a=0xd8, .x=0x29, .y=0xaa, .sp=0xa7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xd87c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd87d, .a=0xd9, .x=0x29, .y=0xaa, .sp=0xa7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd87c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd87c, .value=0xbc, .type=IO_READ},
        {.addr=0xd87d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_017C) {
    const struct CPU_State initial_cpu = {.pc=0x0045, .a=0xe0, .x=0x77, .y=0x13, .sp=0x1b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0046, .a=0xe1, .x=0x77, .y=0x13, .sp=0x1b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0045, .value=0xbc, .type=IO_READ},
        {.addr=0x0046, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_017D) {
    const struct CPU_State initial_cpu = {.pc=0x5ebf, .a=0xb3, .x=0x6a, .y=0x79, .sp=0xf3, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5ebf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5ec0, .a=0xb4, .x=0x6a, .y=0x79, .sp=0xf3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5ebf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5ebf, .value=0xbc, .type=IO_READ},
        {.addr=0x5ec0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_017E) {
    const struct CPU_State initial_cpu = {.pc=0xddb9, .a=0xb0, .x=0x25, .y=0x22, .sp=0x5f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xddb9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xddba, .a=0xb1, .x=0x25, .y=0x22, .sp=0x5f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xddb9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xddb9, .value=0xbc, .type=IO_READ},
        {.addr=0xddba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_017F) {
    const struct CPU_State initial_cpu = {.pc=0xd0ff, .a=0xee, .x=0xf1, .y=0x61, .sp=0xda, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd100, .a=0xef, .x=0xf1, .y=0x61, .sp=0xda, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd0ff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd0ff, .value=0xbc, .type=IO_READ},
        {.addr=0xd100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0180) {
    const struct CPU_State initial_cpu = {.pc=0xd74e, .a=0xc9, .x=0xf1, .y=0x72, .sp=0x3a, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd74e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd74f, .a=0xca, .x=0xf1, .y=0x72, .sp=0x3a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd74e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd74e, .value=0xbc, .type=IO_READ},
        {.addr=0xd74f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0181) {
    const struct CPU_State initial_cpu = {.pc=0xbc7d, .a=0x56, .x=0x8e, .y=0x48, .sp=0x7c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xbc7d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbc7e, .a=0x57, .x=0x8e, .y=0x48, .sp=0x7c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbc7d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbc7d, .value=0xbc, .type=IO_READ},
        {.addr=0xbc7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0182) {
    const struct CPU_State initial_cpu = {.pc=0xf381, .a=0x22, .x=0xd7, .y=0x4d, .sp=0xf8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf381, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf382, .a=0x23, .x=0xd7, .y=0x4d, .sp=0xf8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf381, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf381, .value=0xbc, .type=IO_READ},
        {.addr=0xf382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0183) {
    const struct CPU_State initial_cpu = {.pc=0x6e48, .a=0xf6, .x=0xa4, .y=0x22, .sp=0xc1, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x6e48, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6e49, .a=0xf7, .x=0xa4, .y=0x22, .sp=0xc1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6e48, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6e48, .value=0xbc, .type=IO_READ},
        {.addr=0x6e49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0184) {
    const struct CPU_State initial_cpu = {.pc=0x159f, .a=0xeb, .x=0xbe, .y=0x2b, .sp=0x03, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x159f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x15a0, .a=0xec, .x=0xbe, .y=0x2b, .sp=0x03, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x159f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x159f, .value=0xbc, .type=IO_READ},
        {.addr=0x15a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0185) {
    const struct CPU_State initial_cpu = {.pc=0xa8da, .a=0xc8, .x=0x98, .y=0x39, .sp=0xac, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa8da, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa8db, .a=0xc9, .x=0x98, .y=0x39, .sp=0xac, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa8da, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa8da, .value=0xbc, .type=IO_READ},
        {.addr=0xa8db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0186) {
    const struct CPU_State initial_cpu = {.pc=0xee3f, .a=0xdd, .x=0xac, .y=0x35, .sp=0x90, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xee3f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xee40, .a=0xde, .x=0xac, .y=0x35, .sp=0x90, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xee3f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xee3f, .value=0xbc, .type=IO_READ},
        {.addr=0xee40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0187) {
    const struct CPU_State initial_cpu = {.pc=0xe96a, .a=0x41, .x=0xd9, .y=0xa9, .sp=0x9c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe96a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe96b, .a=0x42, .x=0xd9, .y=0xa9, .sp=0x9c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe96a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe96a, .value=0xbc, .type=IO_READ},
        {.addr=0xe96b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0188) {
    const struct CPU_State initial_cpu = {.pc=0x248e, .a=0x64, .x=0xf3, .y=0x71, .sp=0x51, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x248e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x248f, .a=0x65, .x=0xf3, .y=0x71, .sp=0x51, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x248e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x248e, .value=0xbc, .type=IO_READ},
        {.addr=0x248f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0189) {
    const struct CPU_State initial_cpu = {.pc=0x7971, .a=0x70, .x=0xe2, .y=0xc0, .sp=0x43, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x7971, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7972, .a=0x71, .x=0xe2, .y=0xc0, .sp=0x43, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7971, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7971, .value=0xbc, .type=IO_READ},
        {.addr=0x7972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_018A) {
    const struct CPU_State initial_cpu = {.pc=0x7a6d, .a=0xa0, .x=0x8d, .y=0x29, .sp=0x1a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x7a6d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7a6e, .a=0xa1, .x=0x8d, .y=0x29, .sp=0x1a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7a6d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7a6d, .value=0xbc, .type=IO_READ},
        {.addr=0x7a6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_018B) {
    const struct CPU_State initial_cpu = {.pc=0xbed0, .a=0x87, .x=0x9b, .y=0x70, .sp=0xc1, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xbed0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbed1, .a=0x88, .x=0x9b, .y=0x70, .sp=0xc1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xbed0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbed0, .value=0xbc, .type=IO_READ},
        {.addr=0xbed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_018C) {
    const struct CPU_State initial_cpu = {.pc=0x3d2c, .a=0xaf, .x=0x2d, .y=0xf7, .sp=0xff, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x3d2c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3d2d, .a=0xb0, .x=0x2d, .y=0xf7, .sp=0xff, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3d2c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3d2c, .value=0xbc, .type=IO_READ},
        {.addr=0x3d2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_018D) {
    const struct CPU_State initial_cpu = {.pc=0x5955, .a=0x13, .x=0x6b, .y=0x22, .sp=0x24, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5955, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5956, .a=0x14, .x=0x6b, .y=0x22, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5955, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5955, .value=0xbc, .type=IO_READ},
        {.addr=0x5956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_018E) {
    const struct CPU_State initial_cpu = {.pc=0xd78f, .a=0x2d, .x=0xf3, .y=0xf3, .sp=0xd1, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xd78f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd790, .a=0x2e, .x=0xf3, .y=0xf3, .sp=0xd1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd78f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd78f, .value=0xbc, .type=IO_READ},
        {.addr=0xd790, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_018F) {
    const struct CPU_State initial_cpu = {.pc=0xe0c7, .a=0xcc, .x=0x43, .y=0x2d, .sp=0x9c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe0c8, .a=0xcd, .x=0x43, .y=0x2d, .sp=0x9c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe0c7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe0c7, .value=0xbc, .type=IO_READ},
        {.addr=0xe0c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0190) {
    const struct CPU_State initial_cpu = {.pc=0x4868, .a=0x11, .x=0x96, .y=0x6c, .sp=0x21, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x4868, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4869, .a=0x12, .x=0x96, .y=0x6c, .sp=0x21, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4868, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4868, .value=0xbc, .type=IO_READ},
        {.addr=0x4869, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0191) {
    const struct CPU_State initial_cpu = {.pc=0x1d6c, .a=0x3e, .x=0x04, .y=0xcd, .sp=0xb6, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1d6c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1d6d, .a=0x3f, .x=0x04, .y=0xcd, .sp=0xb6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1d6c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1d6c, .value=0xbc, .type=IO_READ},
        {.addr=0x1d6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0192) {
    const struct CPU_State initial_cpu = {.pc=0x1fd8, .a=0xb8, .x=0xc2, .y=0xb1, .sp=0x7a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x1fd8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1fd9, .a=0xb9, .x=0xc2, .y=0xb1, .sp=0x7a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x1fd8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1fd8, .value=0xbc, .type=IO_READ},
        {.addr=0x1fd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0193) {
    const struct CPU_State initial_cpu = {.pc=0xbc48, .a=0xc7, .x=0x59, .y=0xba, .sp=0xd1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbc48, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbc49, .a=0xc8, .x=0x59, .y=0xba, .sp=0xd1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbc48, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbc48, .value=0xbc, .type=IO_READ},
        {.addr=0xbc49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0194) {
    const struct CPU_State initial_cpu = {.pc=0x32e1, .a=0x5d, .x=0x1e, .y=0x3b, .sp=0x5f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x32e1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x32e2, .a=0x5e, .x=0x1e, .y=0x3b, .sp=0x5f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x32e1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x32e1, .value=0xbc, .type=IO_READ},
        {.addr=0x32e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0195) {
    const struct CPU_State initial_cpu = {.pc=0x6036, .a=0x18, .x=0x39, .y=0x6c, .sp=0x5d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6036, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6037, .a=0x19, .x=0x39, .y=0x6c, .sp=0x5d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6036, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6036, .value=0xbc, .type=IO_READ},
        {.addr=0x6037, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0196) {
    const struct CPU_State initial_cpu = {.pc=0xb6ef, .a=0x9e, .x=0x42, .y=0xe8, .sp=0xa9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ef, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb6f0, .a=0x9f, .x=0x42, .y=0xe8, .sp=0xa9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb6ef, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb6ef, .value=0xbc, .type=IO_READ},
        {.addr=0xb6f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0197) {
    const struct CPU_State initial_cpu = {.pc=0x8403, .a=0xae, .x=0xe1, .y=0xb8, .sp=0xfb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8403, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8404, .a=0xaf, .x=0xe1, .y=0xb8, .sp=0xfb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8403, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8403, .value=0xbc, .type=IO_READ},
        {.addr=0x8404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0198) {
    const struct CPU_State initial_cpu = {.pc=0xce7b, .a=0x6c, .x=0x5b, .y=0xcb, .sp=0x74, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xce7b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xce7c, .a=0x6d, .x=0x5b, .y=0xcb, .sp=0x74, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xce7b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xce7b, .value=0xbc, .type=IO_READ},
        {.addr=0xce7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0199) {
    const struct CPU_State initial_cpu = {.pc=0xbfbf, .a=0xd8, .x=0x87, .y=0xc2, .sp=0xe2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbfc0, .a=0xd9, .x=0x87, .y=0xc2, .sp=0xe2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xbfbf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbfbf, .value=0xbc, .type=IO_READ},
        {.addr=0xbfc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_019A) {
    const struct CPU_State initial_cpu = {.pc=0x9cdb, .a=0xbe, .x=0xbd, .y=0xa3, .sp=0x56, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9cdb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9cdc, .a=0xbf, .x=0xbd, .y=0xa3, .sp=0x56, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9cdb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9cdb, .value=0xbc, .type=IO_READ},
        {.addr=0x9cdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_019B) {
    const struct CPU_State initial_cpu = {.pc=0x254d, .a=0x66, .x=0x3e, .y=0x90, .sp=0x5c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x254d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x254e, .a=0x67, .x=0x3e, .y=0x90, .sp=0x5c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x254d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x254d, .value=0xbc, .type=IO_READ},
        {.addr=0x254e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_019C) {
    const struct CPU_State initial_cpu = {.pc=0xeff8, .a=0xa6, .x=0xb4, .y=0xc9, .sp=0x61, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xeff8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeff9, .a=0xa7, .x=0xb4, .y=0xc9, .sp=0x61, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xeff8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeff8, .value=0xbc, .type=IO_READ},
        {.addr=0xeff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_019D) {
    const struct CPU_State initial_cpu = {.pc=0x914c, .a=0xab, .x=0xb7, .y=0x68, .sp=0x2a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x914c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x914d, .a=0xac, .x=0xb7, .y=0x68, .sp=0x2a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x914c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x914c, .value=0xbc, .type=IO_READ},
        {.addr=0x914d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_019E) {
    const struct CPU_State initial_cpu = {.pc=0xfd08, .a=0xf9, .x=0x50, .y=0xd8, .sp=0xeb, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xfd08, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfd09, .a=0xfa, .x=0x50, .y=0xd8, .sp=0xeb, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xfd08, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfd08, .value=0xbc, .type=IO_READ},
        {.addr=0xfd09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_019F) {
    const struct CPU_State initial_cpu = {.pc=0x5dd1, .a=0xd3, .x=0xab, .y=0x3e, .sp=0x3f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5dd2, .a=0xd4, .x=0xab, .y=0x3e, .sp=0x3f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5dd1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5dd1, .value=0xbc, .type=IO_READ},
        {.addr=0x5dd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x0861, .a=0xd8, .x=0x9a, .y=0x12, .sp=0xe3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0861, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0862, .a=0xd9, .x=0x9a, .y=0x12, .sp=0xe3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0861, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0861, .value=0xbc, .type=IO_READ},
        {.addr=0x0862, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xde1a, .a=0xb2, .x=0x99, .y=0x82, .sp=0x86, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xde1a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xde1b, .a=0xb3, .x=0x99, .y=0x82, .sp=0x86, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xde1a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xde1a, .value=0xbc, .type=IO_READ},
        {.addr=0xde1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xfa01, .a=0xc8, .x=0xf9, .y=0xe3, .sp=0x52, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xfa01, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfa02, .a=0xc9, .x=0xf9, .y=0xe3, .sp=0x52, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xfa01, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfa01, .value=0xbc, .type=IO_READ},
        {.addr=0xfa02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xa0fb, .a=0x03, .x=0xa0, .y=0xb4, .sp=0x9c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa0fc, .a=0x04, .x=0xa0, .y=0xb4, .sp=0x9c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa0fb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa0fb, .value=0xbc, .type=IO_READ},
        {.addr=0xa0fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xe1d3, .a=0xe6, .x=0x79, .y=0x3c, .sp=0xc5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe1d4, .a=0xe7, .x=0x79, .y=0x3c, .sp=0xc5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe1d3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe1d3, .value=0xbc, .type=IO_READ},
        {.addr=0xe1d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x4035, .a=0xd4, .x=0x6f, .y=0x24, .sp=0x62, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4035, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4036, .a=0xd5, .x=0x6f, .y=0x24, .sp=0x62, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4035, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4035, .value=0xbc, .type=IO_READ},
        {.addr=0x4036, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x16bb, .a=0x20, .x=0x59, .y=0x03, .sp=0xcd, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x16bb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x16bc, .a=0x21, .x=0x59, .y=0x03, .sp=0xcd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x16bb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x16bb, .value=0xbc, .type=IO_READ},
        {.addr=0x16bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xa299, .a=0x45, .x=0xdd, .y=0xaf, .sp=0x8b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa299, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa29a, .a=0x46, .x=0xdd, .y=0xaf, .sp=0x8b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa299, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa299, .value=0xbc, .type=IO_READ},
        {.addr=0xa29a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xf0e9, .a=0x76, .x=0x75, .y=0x4b, .sp=0xf3, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf0ea, .a=0x77, .x=0x75, .y=0x4b, .sp=0xf3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf0e9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf0e9, .value=0xbc, .type=IO_READ},
        {.addr=0xf0ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xf866, .a=0xd4, .x=0xca, .y=0x73, .sp=0x92, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf866, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf867, .a=0xd5, .x=0xca, .y=0x73, .sp=0x92, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf866, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf866, .value=0xbc, .type=IO_READ},
        {.addr=0xf867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x3ab6, .a=0x45, .x=0x21, .y=0x17, .sp=0x69, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3ab7, .a=0x46, .x=0x21, .y=0x17, .sp=0x69, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3ab6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3ab6, .value=0xbc, .type=IO_READ},
        {.addr=0x3ab7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xff2e, .a=0x8b, .x=0xd1, .y=0x2d, .sp=0xce, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xff2e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xff2f, .a=0x8c, .x=0xd1, .y=0x2d, .sp=0xce, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xff2e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xff2e, .value=0xbc, .type=IO_READ},
        {.addr=0xff2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xeeb7, .a=0x39, .x=0x47, .y=0xdf, .sp=0x6b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeeb8, .a=0x3a, .x=0x47, .y=0xdf, .sp=0x6b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xeeb7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeeb7, .value=0xbc, .type=IO_READ},
        {.addr=0xeeb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xd00f, .a=0xba, .x=0xc3, .y=0x74, .sp=0x75, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd00f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd010, .a=0xbb, .x=0xc3, .y=0x74, .sp=0x75, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd00f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd00f, .value=0xbc, .type=IO_READ},
        {.addr=0xd010, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x2b98, .a=0xc8, .x=0x9c, .y=0x65, .sp=0xde, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x2b98, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2b99, .a=0xc9, .x=0x9c, .y=0x65, .sp=0xde, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2b98, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2b98, .value=0xbc, .type=IO_READ},
        {.addr=0x2b99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x4864, .a=0x40, .x=0x9b, .y=0x99, .sp=0x43, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4864, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4865, .a=0x41, .x=0x9b, .y=0x99, .sp=0x43, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4864, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4864, .value=0xbc, .type=IO_READ},
        {.addr=0x4865, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xba1a, .a=0x1a, .x=0x0c, .y=0x51, .sp=0xad, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xba1a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xba1b, .a=0x1b, .x=0x0c, .y=0x51, .sp=0xad, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xba1a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xba1a, .value=0xbc, .type=IO_READ},
        {.addr=0xba1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc0e8, .a=0xad, .x=0xc1, .y=0x89, .sp=0x58, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc0e8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc0e9, .a=0xae, .x=0xc1, .y=0x89, .sp=0x58, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc0e8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc0e8, .value=0xbc, .type=IO_READ},
        {.addr=0xc0e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x7a35, .a=0xc6, .x=0x7d, .y=0xce, .sp=0x62, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7a35, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7a36, .a=0xc7, .x=0x7d, .y=0xce, .sp=0x62, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7a35, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7a35, .value=0xbc, .type=IO_READ},
        {.addr=0x7a36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x39bd, .a=0xa6, .x=0xdd, .y=0xe3, .sp=0x46, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x39bd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x39be, .a=0xa7, .x=0xdd, .y=0xe3, .sp=0x46, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x39bd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x39bd, .value=0xbc, .type=IO_READ},
        {.addr=0x39be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xbe68, .a=0x17, .x=0xfe, .y=0xd9, .sp=0xb3, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xbe68, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbe69, .a=0x18, .x=0xfe, .y=0xd9, .sp=0xb3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xbe68, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbe68, .value=0xbc, .type=IO_READ},
        {.addr=0xbe69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xc92b, .a=0xc1, .x=0x9e, .y=0xdf, .sp=0x39, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc92b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc92c, .a=0xc2, .x=0x9e, .y=0xdf, .sp=0x39, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc92b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc92b, .value=0xbc, .type=IO_READ},
        {.addr=0xc92c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4c2d, .a=0x9d, .x=0xf7, .y=0x1d, .sp=0x76, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4c2e, .a=0x9e, .x=0xf7, .y=0x1d, .sp=0x76, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4c2d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4c2d, .value=0xbc, .type=IO_READ},
        {.addr=0x4c2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xd820, .a=0x65, .x=0x7f, .y=0x2e, .sp=0x10, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd820, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd821, .a=0x66, .x=0x7f, .y=0x2e, .sp=0x10, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd820, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd820, .value=0xbc, .type=IO_READ},
        {.addr=0xd821, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x2a7c, .a=0x13, .x=0x33, .y=0x7c, .sp=0xb5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2a7d, .a=0x14, .x=0x33, .y=0x7c, .sp=0xb5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2a7c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2a7c, .value=0xbc, .type=IO_READ},
        {.addr=0x2a7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x21c3, .a=0x3c, .x=0xc9, .y=0x97, .sp=0xf4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x21c3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x21c4, .a=0x3d, .x=0xc9, .y=0x97, .sp=0xf4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x21c3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x21c3, .value=0xbc, .type=IO_READ},
        {.addr=0x21c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xc408, .a=0x00, .x=0xc7, .y=0x48, .sp=0xd4, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xc408, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc409, .a=0x01, .x=0xc7, .y=0x48, .sp=0xd4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc408, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc408, .value=0xbc, .type=IO_READ},
        {.addr=0xc409, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xae52, .a=0xe0, .x=0xa1, .y=0xfa, .sp=0x45, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xae52, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xae53, .a=0xe1, .x=0xa1, .y=0xfa, .sp=0x45, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xae52, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xae52, .value=0xbc, .type=IO_READ},
        {.addr=0xae53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x59ea, .a=0xd8, .x=0x0f, .y=0xd7, .sp=0x4c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x59ea, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x59eb, .a=0xd9, .x=0x0f, .y=0xd7, .sp=0x4c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x59ea, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x59ea, .value=0xbc, .type=IO_READ},
        {.addr=0x59eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xdfea, .a=0xf2, .x=0x00, .y=0xf4, .sp=0x62, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xdfea, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdfeb, .a=0xf3, .x=0x00, .y=0xf4, .sp=0x62, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdfea, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdfea, .value=0xbc, .type=IO_READ},
        {.addr=0xdfeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x9bd6, .a=0xfb, .x=0x2d, .y=0x8a, .sp=0xd3, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9bd7, .a=0xfc, .x=0x2d, .y=0x8a, .sp=0xd3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9bd6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9bd6, .value=0xbc, .type=IO_READ},
        {.addr=0x9bd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x55bc, .a=0x40, .x=0x4f, .y=0x89, .sp=0x8a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x55bc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x55bd, .a=0x41, .x=0x4f, .y=0x89, .sp=0x8a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x55bc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x55bc, .value=0xbc, .type=IO_READ},
        {.addr=0x55bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xe15b, .a=0x1c, .x=0x9a, .y=0xd1, .sp=0xf0, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe15b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe15c, .a=0x1d, .x=0x9a, .y=0xd1, .sp=0xf0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe15b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe15b, .value=0xbc, .type=IO_READ},
        {.addr=0xe15c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xf5e5, .a=0x8e, .x=0xf3, .y=0x5e, .sp=0xf6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf5e5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf5e6, .a=0x8f, .x=0xf3, .y=0x5e, .sp=0xf6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf5e5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf5e5, .value=0xbc, .type=IO_READ},
        {.addr=0xf5e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xe972, .a=0x63, .x=0xb6, .y=0x9d, .sp=0x1a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe972, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe973, .a=0x64, .x=0xb6, .y=0x9d, .sp=0x1a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe972, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe972, .value=0xbc, .type=IO_READ},
        {.addr=0xe973, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x2df4, .a=0x57, .x=0xab, .y=0x2c, .sp=0x78, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2df4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2df5, .a=0x58, .x=0xab, .y=0x2c, .sp=0x78, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2df4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2df4, .value=0xbc, .type=IO_READ},
        {.addr=0x2df5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x8b1f, .a=0xc6, .x=0x46, .y=0xa7, .sp=0xfe, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8b1f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8b20, .a=0xc7, .x=0x46, .y=0xa7, .sp=0xfe, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8b1f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8b1f, .value=0xbc, .type=IO_READ},
        {.addr=0x8b20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x6e39, .a=0x1d, .x=0xeb, .y=0x9d, .sp=0x4a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x6e39, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6e3a, .a=0x1e, .x=0xeb, .y=0x9d, .sp=0x4a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6e39, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6e39, .value=0xbc, .type=IO_READ},
        {.addr=0x6e3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xf55d, .a=0x71, .x=0x61, .y=0xc4, .sp=0x59, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf55d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf55e, .a=0x72, .x=0x61, .y=0xc4, .sp=0x59, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xf55d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf55d, .value=0xbc, .type=IO_READ},
        {.addr=0xf55e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x6634, .a=0xb7, .x=0x17, .y=0x39, .sp=0x4b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x6634, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6635, .a=0xb8, .x=0x17, .y=0x39, .sp=0x4b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6634, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6634, .value=0xbc, .type=IO_READ},
        {.addr=0x6635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xd854, .a=0x80, .x=0xad, .y=0xe2, .sp=0x7f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd854, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd855, .a=0x81, .x=0xad, .y=0xe2, .sp=0x7f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd854, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd854, .value=0xbc, .type=IO_READ},
        {.addr=0xd855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x66b9, .a=0x06, .x=0x69, .y=0xf5, .sp=0x8e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x66b9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x66ba, .a=0x07, .x=0x69, .y=0xf5, .sp=0x8e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x66b9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x66b9, .value=0xbc, .type=IO_READ},
        {.addr=0x66ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x1289, .a=0x3f, .x=0x26, .y=0xd5, .sp=0xf2, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x1289, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x128a, .a=0x40, .x=0x26, .y=0xd5, .sp=0xf2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1289, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1289, .value=0xbc, .type=IO_READ},
        {.addr=0x128a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x260e, .a=0xf8, .x=0xbb, .y=0x99, .sp=0x00, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x260e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x260f, .a=0xf9, .x=0xbb, .y=0x99, .sp=0x00, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x260e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x260e, .value=0xbc, .type=IO_READ},
        {.addr=0x260f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x2d35, .a=0x9d, .x=0xb7, .y=0x37, .sp=0xcf, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x2d35, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2d36, .a=0x9e, .x=0xb7, .y=0x37, .sp=0xcf, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2d35, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2d35, .value=0xbc, .type=IO_READ},
        {.addr=0x2d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xf971, .a=0x38, .x=0x3e, .y=0x0b, .sp=0xa1, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf971, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf972, .a=0x39, .x=0x3e, .y=0x0b, .sp=0xa1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf971, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf971, .value=0xbc, .type=IO_READ},
        {.addr=0xf972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x2760, .a=0xc8, .x=0x00, .y=0xca, .sp=0x24, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2760, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2761, .a=0xc9, .x=0x00, .y=0xca, .sp=0x24, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2760, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2760, .value=0xbc, .type=IO_READ},
        {.addr=0x2761, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x7b33, .a=0x04, .x=0xb5, .y=0x5a, .sp=0x1f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x7b33, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7b34, .a=0x05, .x=0xb5, .y=0x5a, .sp=0x1f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7b33, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7b33, .value=0xbc, .type=IO_READ},
        {.addr=0x7b34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc3a3, .a=0x7b, .x=0x94, .y=0xc2, .sp=0xfa, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc3a3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc3a4, .a=0x7c, .x=0x94, .y=0xc2, .sp=0xfa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc3a3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc3a3, .value=0xbc, .type=IO_READ},
        {.addr=0xc3a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xfbe2, .a=0x4c, .x=0x15, .y=0xa6, .sp=0x67, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfbe3, .a=0x4d, .x=0x15, .y=0xa6, .sp=0x67, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xfbe2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfbe2, .value=0xbc, .type=IO_READ},
        {.addr=0xfbe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xbc7e, .a=0x8b, .x=0xdd, .y=0x44, .sp=0xf1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbc7e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbc7f, .a=0x8c, .x=0xdd, .y=0x44, .sp=0xf1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbc7e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbc7e, .value=0xbc, .type=IO_READ},
        {.addr=0xbc7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x1652, .a=0x4e, .x=0x99, .y=0x32, .sp=0xa0, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1652, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1653, .a=0x4f, .x=0x99, .y=0x32, .sp=0xa0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1652, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1652, .value=0xbc, .type=IO_READ},
        {.addr=0x1653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x3216, .a=0x4e, .x=0x14, .y=0xc8, .sp=0xaa, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3216, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3217, .a=0x4f, .x=0x14, .y=0xc8, .sp=0xaa, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3216, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3216, .value=0xbc, .type=IO_READ},
        {.addr=0x3217, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x51e8, .a=0x4c, .x=0x4d, .y=0x32, .sp=0x3d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x51e8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x51e9, .a=0x4d, .x=0x4d, .y=0x32, .sp=0x3d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x51e8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x51e8, .value=0xbc, .type=IO_READ},
        {.addr=0x51e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x5ec3, .a=0xd8, .x=0xeb, .y=0x04, .sp=0xbc, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5ec4, .a=0xd9, .x=0xeb, .y=0x04, .sp=0xbc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5ec3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5ec3, .value=0xbc, .type=IO_READ},
        {.addr=0x5ec4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x86ba, .a=0x61, .x=0xc4, .y=0x6d, .sp=0x22, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x86ba, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x86bb, .a=0x62, .x=0xc4, .y=0x6d, .sp=0x22, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x86ba, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x86ba, .value=0xbc, .type=IO_READ},
        {.addr=0x86bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xa909, .a=0x88, .x=0x55, .y=0xf7, .sp=0xbd, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa909, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa90a, .a=0x89, .x=0x55, .y=0xf7, .sp=0xbd, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa909, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa909, .value=0xbc, .type=IO_READ},
        {.addr=0xa90a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x0e79, .a=0x92, .x=0xa1, .y=0x1c, .sp=0xac, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0e79, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0e7a, .a=0x93, .x=0xa1, .y=0x1c, .sp=0xac, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0e79, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0e79, .value=0xbc, .type=IO_READ},
        {.addr=0x0e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x9fb5, .a=0x0e, .x=0xca, .y=0x19, .sp=0x9e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9fb6, .a=0x0f, .x=0xca, .y=0x19, .sp=0x9e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9fb5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9fb5, .value=0xbc, .type=IO_READ},
        {.addr=0x9fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x21bf, .a=0xcb, .x=0xc0, .y=0x4a, .sp=0xf1, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x21bf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x21c0, .a=0xcc, .x=0xc0, .y=0x4a, .sp=0xf1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x21bf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x21bf, .value=0xbc, .type=IO_READ},
        {.addr=0x21c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xd3eb, .a=0xbb, .x=0xc9, .y=0x82, .sp=0xfd, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd3eb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd3ec, .a=0xbc, .x=0xc9, .y=0x82, .sp=0xfd, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd3eb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd3eb, .value=0xbc, .type=IO_READ},
        {.addr=0xd3ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xd1a1, .a=0x3e, .x=0x19, .y=0x4a, .sp=0x73, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd1a2, .a=0x3f, .x=0x19, .y=0x4a, .sp=0x73, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd1a1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd1a1, .value=0xbc, .type=IO_READ},
        {.addr=0xd1a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xf259, .a=0x30, .x=0xed, .y=0xe4, .sp=0x72, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf259, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf25a, .a=0x31, .x=0xed, .y=0xe4, .sp=0x72, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf259, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf259, .value=0xbc, .type=IO_READ},
        {.addr=0xf25a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xbfb7, .a=0xbc, .x=0xc4, .y=0x89, .sp=0xeb, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbfb8, .a=0xbd, .x=0xc4, .y=0x89, .sp=0xeb, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbfb7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbfb7, .value=0xbc, .type=IO_READ},
        {.addr=0xbfb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x8fb3, .a=0x22, .x=0xba, .y=0x97, .sp=0x40, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8fb4, .a=0x23, .x=0xba, .y=0x97, .sp=0x40, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8fb3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8fb3, .value=0xbc, .type=IO_READ},
        {.addr=0x8fb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xf024, .a=0xb7, .x=0x44, .y=0x96, .sp=0x0a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf024, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf025, .a=0xb8, .x=0x44, .y=0x96, .sp=0x0a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf024, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf024, .value=0xbc, .type=IO_READ},
        {.addr=0xf025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xb504, .a=0x29, .x=0x00, .y=0x2a, .sp=0xaa, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb504, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb505, .a=0x2a, .x=0x00, .y=0x2a, .sp=0xaa, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb504, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb504, .value=0xbc, .type=IO_READ},
        {.addr=0xb505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x4b27, .a=0xca, .x=0x46, .y=0xf0, .sp=0xbf, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x4b27, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4b28, .a=0xcb, .x=0x46, .y=0xf0, .sp=0xbf, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4b27, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4b27, .value=0xbc, .type=IO_READ},
        {.addr=0x4b28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x86b5, .a=0xe5, .x=0x13, .y=0x32, .sp=0x3b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x86b5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x86b6, .a=0xe6, .x=0x13, .y=0x32, .sp=0x3b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x86b5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x86b5, .value=0xbc, .type=IO_READ},
        {.addr=0x86b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xdd92, .a=0xbf, .x=0x6a, .y=0x98, .sp=0x4d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xdd92, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdd93, .a=0xc0, .x=0x6a, .y=0x98, .sp=0x4d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdd92, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdd92, .value=0xbc, .type=IO_READ},
        {.addr=0xdd93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x418f, .a=0x41, .x=0x47, .y=0x9b, .sp=0xa6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x418f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4190, .a=0x42, .x=0x47, .y=0x9b, .sp=0xa6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x418f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x418f, .value=0xbc, .type=IO_READ},
        {.addr=0x4190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9ace, .a=0x92, .x=0xd5, .y=0x67, .sp=0xcb, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9ace, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9acf, .a=0x93, .x=0xd5, .y=0x67, .sp=0xcb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9ace, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9ace, .value=0xbc, .type=IO_READ},
        {.addr=0x9acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x88a0, .a=0x9a, .x=0x7d, .y=0xe4, .sp=0x40, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x88a0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x88a1, .a=0x9b, .x=0x7d, .y=0xe4, .sp=0x40, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x88a0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x88a0, .value=0xbc, .type=IO_READ},
        {.addr=0x88a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc23a, .a=0x10, .x=0x46, .y=0xd0, .sp=0xab, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xc23a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc23b, .a=0x11, .x=0x46, .y=0xd0, .sp=0xab, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc23a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc23a, .value=0xbc, .type=IO_READ},
        {.addr=0xc23b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xd229, .a=0x21, .x=0x19, .y=0xdc, .sp=0x66, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd229, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd22a, .a=0x22, .x=0x19, .y=0xdc, .sp=0x66, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd229, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd229, .value=0xbc, .type=IO_READ},
        {.addr=0xd22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xe75f, .a=0xcf, .x=0xfd, .y=0xbb, .sp=0x2f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe75f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe760, .a=0xd0, .x=0xfd, .y=0xbb, .sp=0x2f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe75f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe75f, .value=0xbc, .type=IO_READ},
        {.addr=0xe760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xeced, .a=0x8a, .x=0x94, .y=0x05, .sp=0xbe, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xeced, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xecee, .a=0x8b, .x=0x94, .y=0x05, .sp=0xbe, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xeced, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeced, .value=0xbc, .type=IO_READ},
        {.addr=0xecee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa94b, .a=0xf5, .x=0xe4, .y=0x97, .sp=0xb2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa94b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa94c, .a=0xf6, .x=0xe4, .y=0x97, .sp=0xb2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa94b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa94b, .value=0xbc, .type=IO_READ},
        {.addr=0xa94c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x39d5, .a=0xc4, .x=0x4c, .y=0x28, .sp=0xa8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x39d5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x39d6, .a=0xc5, .x=0x4c, .y=0x28, .sp=0xa8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x39d5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x39d5, .value=0xbc, .type=IO_READ},
        {.addr=0x39d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xc2a0, .a=0xaf, .x=0x5f, .y=0xd2, .sp=0x34, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc2a1, .a=0xb0, .x=0x5f, .y=0xd2, .sp=0x34, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc2a0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc2a0, .value=0xbc, .type=IO_READ},
        {.addr=0xc2a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x9365, .a=0xea, .x=0xa1, .y=0x87, .sp=0xea, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9365, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9366, .a=0xeb, .x=0xa1, .y=0x87, .sp=0xea, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9365, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9365, .value=0xbc, .type=IO_READ},
        {.addr=0x9366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xc5f3, .a=0x79, .x=0x8c, .y=0x60, .sp=0x48, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc5f4, .a=0x7a, .x=0x8c, .y=0x60, .sp=0x48, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc5f3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc5f3, .value=0xbc, .type=IO_READ},
        {.addr=0xc5f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x04f0, .a=0xeb, .x=0x1d, .y=0xdb, .sp=0xbb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x04f0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x04f1, .a=0xec, .x=0x1d, .y=0xdb, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x04f0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x04f0, .value=0xbc, .type=IO_READ},
        {.addr=0x04f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xdc0a, .a=0x39, .x=0x48, .y=0x04, .sp=0x0f, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdc0b, .a=0x3a, .x=0x48, .y=0x04, .sp=0x0f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xdc0a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdc0a, .value=0xbc, .type=IO_READ},
        {.addr=0xdc0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x8503, .a=0x8b, .x=0x3b, .y=0x4a, .sp=0x14, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8503, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8504, .a=0x8c, .x=0x3b, .y=0x4a, .sp=0x14, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8503, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8503, .value=0xbc, .type=IO_READ},
        {.addr=0x8504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xf939, .a=0x14, .x=0x8e, .y=0x75, .sp=0x2a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf939, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf93a, .a=0x15, .x=0x8e, .y=0x75, .sp=0x2a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf939, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf939, .value=0xbc, .type=IO_READ},
        {.addr=0xf93a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x4f98, .a=0x78, .x=0xeb, .y=0x28, .sp=0xdc, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4f98, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4f99, .a=0x79, .x=0xeb, .y=0x28, .sp=0xdc, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4f98, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4f98, .value=0xbc, .type=IO_READ},
        {.addr=0x4f99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xf572, .a=0xdc, .x=0xd2, .y=0x4b, .sp=0xfa, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xf572, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf573, .a=0xdd, .x=0xd2, .y=0x4b, .sp=0xfa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf572, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf572, .value=0xbc, .type=IO_READ},
        {.addr=0xf573, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x2389, .a=0x8d, .x=0x1e, .y=0xb3, .sp=0x69, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2389, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x238a, .a=0x8e, .x=0x1e, .y=0xb3, .sp=0x69, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2389, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2389, .value=0xbc, .type=IO_READ},
        {.addr=0x238a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xdbc9, .a=0x8e, .x=0x86, .y=0x25, .sp=0xa8, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdbca, .a=0x8f, .x=0x86, .y=0x25, .sp=0xa8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdbc9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdbc9, .value=0xbc, .type=IO_READ},
        {.addr=0xdbca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x92b5, .a=0x40, .x=0xfa, .y=0x2a, .sp=0x6d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x92b5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x92b6, .a=0x41, .x=0xfa, .y=0x2a, .sp=0x6d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x92b5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x92b5, .value=0xbc, .type=IO_READ},
        {.addr=0x92b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x4d1b, .a=0x7a, .x=0x5e, .y=0xd3, .sp=0x97, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4d1b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4d1c, .a=0x7b, .x=0x5e, .y=0xd3, .sp=0x97, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4d1b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4d1b, .value=0xbc, .type=IO_READ},
        {.addr=0x4d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x05f2, .a=0xe9, .x=0xc5, .y=0xe4, .sp=0x5e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x05f2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x05f3, .a=0xea, .x=0xc5, .y=0xe4, .sp=0x5e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x05f2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x05f2, .value=0xbc, .type=IO_READ},
        {.addr=0x05f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x955d, .a=0x99, .x=0xc9, .y=0x58, .sp=0xd8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x955d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x955e, .a=0x9a, .x=0xc9, .y=0x58, .sp=0xd8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x955d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x955d, .value=0xbc, .type=IO_READ},
        {.addr=0x955e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xf4aa, .a=0xbb, .x=0x63, .y=0x20, .sp=0x0d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf4aa, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf4ab, .a=0xbc, .x=0x63, .y=0x20, .sp=0x0d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf4aa, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf4aa, .value=0xbc, .type=IO_READ},
        {.addr=0xf4ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x1705, .a=0x72, .x=0xce, .y=0x6b, .sp=0x69, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1705, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1706, .a=0x73, .x=0xce, .y=0x6b, .sp=0x69, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1705, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1705, .value=0xbc, .type=IO_READ},
        {.addr=0x1706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0200) {
    const struct CPU_State initial_cpu = {.pc=0xc47a, .a=0x77, .x=0x36, .y=0x28, .sp=0x85, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc47a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc47b, .a=0x78, .x=0x36, .y=0x28, .sp=0x85, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc47a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc47a, .value=0xbc, .type=IO_READ},
        {.addr=0xc47b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0201) {
    const struct CPU_State initial_cpu = {.pc=0xdfb8, .a=0x46, .x=0x83, .y=0xbb, .sp=0x65, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdfb9, .a=0x47, .x=0x83, .y=0xbb, .sp=0x65, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdfb8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdfb8, .value=0xbc, .type=IO_READ},
        {.addr=0xdfb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0202) {
    const struct CPU_State initial_cpu = {.pc=0xc840, .a=0x6c, .x=0x6f, .y=0xc5, .sp=0x77, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xc840, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc841, .a=0x6d, .x=0x6f, .y=0xc5, .sp=0x77, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc840, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc840, .value=0xbc, .type=IO_READ},
        {.addr=0xc841, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0203) {
    const struct CPU_State initial_cpu = {.pc=0x672e, .a=0x3e, .x=0x19, .y=0x5e, .sp=0x40, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x672e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x672f, .a=0x3f, .x=0x19, .y=0x5e, .sp=0x40, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x672e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x672e, .value=0xbc, .type=IO_READ},
        {.addr=0x672f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0204) {
    const struct CPU_State initial_cpu = {.pc=0x07c9, .a=0x51, .x=0x3a, .y=0xac, .sp=0xcc, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x07c9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x07ca, .a=0x52, .x=0x3a, .y=0xac, .sp=0xcc, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x07c9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x07c9, .value=0xbc, .type=IO_READ},
        {.addr=0x07ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0205) {
    const struct CPU_State initial_cpu = {.pc=0xad60, .a=0x9c, .x=0x7e, .y=0x33, .sp=0xc8, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xad60, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xad61, .a=0x9d, .x=0x7e, .y=0x33, .sp=0xc8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xad60, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xad60, .value=0xbc, .type=IO_READ},
        {.addr=0xad61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0206) {
    const struct CPU_State initial_cpu = {.pc=0x33ef, .a=0xcd, .x=0x61, .y=0xb3, .sp=0x14, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x33ef, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x33f0, .a=0xce, .x=0x61, .y=0xb3, .sp=0x14, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x33ef, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x33ef, .value=0xbc, .type=IO_READ},
        {.addr=0x33f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0207) {
    const struct CPU_State initial_cpu = {.pc=0xa82d, .a=0x66, .x=0x35, .y=0xd1, .sp=0xe3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa82d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa82e, .a=0x67, .x=0x35, .y=0xd1, .sp=0xe3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa82d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa82d, .value=0xbc, .type=IO_READ},
        {.addr=0xa82e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0208) {
    const struct CPU_State initial_cpu = {.pc=0xd3d6, .a=0xd6, .x=0xd6, .y=0xca, .sp=0x9e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd3d7, .a=0xd7, .x=0xd6, .y=0xca, .sp=0x9e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd3d6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd3d6, .value=0xbc, .type=IO_READ},
        {.addr=0xd3d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0209) {
    const struct CPU_State initial_cpu = {.pc=0x2026, .a=0x9c, .x=0x91, .y=0x09, .sp=0x90, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2026, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2027, .a=0x9d, .x=0x91, .y=0x09, .sp=0x90, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2026, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2026, .value=0xbc, .type=IO_READ},
        {.addr=0x2027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_020A) {
    const struct CPU_State initial_cpu = {.pc=0xc8bd, .a=0xc9, .x=0x73, .y=0x4d, .sp=0x42, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc8bd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc8be, .a=0xca, .x=0x73, .y=0x4d, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc8bd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc8bd, .value=0xbc, .type=IO_READ},
        {.addr=0xc8be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_020B) {
    const struct CPU_State initial_cpu = {.pc=0x1668, .a=0x6f, .x=0xc7, .y=0xb5, .sp=0x5f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1668, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1669, .a=0x70, .x=0xc7, .y=0xb5, .sp=0x5f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1668, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1668, .value=0xbc, .type=IO_READ},
        {.addr=0x1669, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_020C) {
    const struct CPU_State initial_cpu = {.pc=0x6505, .a=0x3d, .x=0x1a, .y=0xe5, .sp=0x13, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6505, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6506, .a=0x3e, .x=0x1a, .y=0xe5, .sp=0x13, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6505, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6505, .value=0xbc, .type=IO_READ},
        {.addr=0x6506, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_020D) {
    const struct CPU_State initial_cpu = {.pc=0x60f8, .a=0xa5, .x=0x5d, .y=0x5b, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x60f8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x60f9, .a=0xa6, .x=0x5d, .y=0x5b, .sp=0x9e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x60f8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x60f8, .value=0xbc, .type=IO_READ},
        {.addr=0x60f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_020E) {
    const struct CPU_State initial_cpu = {.pc=0xaf54, .a=0xf5, .x=0x4e, .y=0xf1, .sp=0xd7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xaf54, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xaf55, .a=0xf6, .x=0x4e, .y=0xf1, .sp=0xd7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xaf54, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xaf54, .value=0xbc, .type=IO_READ},
        {.addr=0xaf55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_020F) {
    const struct CPU_State initial_cpu = {.pc=0xbf83, .a=0xa2, .x=0xc7, .y=0x65, .sp=0xc2, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xbf83, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbf84, .a=0xa3, .x=0xc7, .y=0x65, .sp=0xc2, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xbf83, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbf83, .value=0xbc, .type=IO_READ},
        {.addr=0xbf84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0210) {
    const struct CPU_State initial_cpu = {.pc=0xd27a, .a=0x45, .x=0x29, .y=0x7e, .sp=0xf6, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd27a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd27b, .a=0x46, .x=0x29, .y=0x7e, .sp=0xf6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd27a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd27a, .value=0xbc, .type=IO_READ},
        {.addr=0xd27b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0211) {
    const struct CPU_State initial_cpu = {.pc=0xf00d, .a=0xe3, .x=0x8f, .y=0xc7, .sp=0xc8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf00d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf00e, .a=0xe4, .x=0x8f, .y=0xc7, .sp=0xc8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf00d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf00d, .value=0xbc, .type=IO_READ},
        {.addr=0xf00e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0212) {
    const struct CPU_State initial_cpu = {.pc=0x56c3, .a=0xb0, .x=0xa3, .y=0x16, .sp=0xba, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x56c3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x56c4, .a=0xb1, .x=0xa3, .y=0x16, .sp=0xba, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x56c3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x56c3, .value=0xbc, .type=IO_READ},
        {.addr=0x56c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0213) {
    const struct CPU_State initial_cpu = {.pc=0x963c, .a=0x4e, .x=0x19, .y=0xac, .sp=0xfc, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x963c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x963d, .a=0x4f, .x=0x19, .y=0xac, .sp=0xfc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x963c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x963c, .value=0xbc, .type=IO_READ},
        {.addr=0x963d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0214) {
    const struct CPU_State initial_cpu = {.pc=0x0b5f, .a=0xdd, .x=0x59, .y=0x66, .sp=0x28, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0b5f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0b60, .a=0xde, .x=0x59, .y=0x66, .sp=0x28, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0b5f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0b5f, .value=0xbc, .type=IO_READ},
        {.addr=0x0b60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0215) {
    const struct CPU_State initial_cpu = {.pc=0x6fbf, .a=0x2e, .x=0x7f, .y=0xb5, .sp=0xe3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6fc0, .a=0x2f, .x=0x7f, .y=0xb5, .sp=0xe3, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6fbf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6fbf, .value=0xbc, .type=IO_READ},
        {.addr=0x6fc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0216) {
    const struct CPU_State initial_cpu = {.pc=0x124a, .a=0x16, .x=0x76, .y=0xdb, .sp=0xc2, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x124a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x124b, .a=0x17, .x=0x76, .y=0xdb, .sp=0xc2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x124a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x124a, .value=0xbc, .type=IO_READ},
        {.addr=0x124b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0217) {
    const struct CPU_State initial_cpu = {.pc=0x9a17, .a=0x88, .x=0xd9, .y=0x90, .sp=0x8f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9a17, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9a18, .a=0x89, .x=0xd9, .y=0x90, .sp=0x8f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9a17, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9a17, .value=0xbc, .type=IO_READ},
        {.addr=0x9a18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0218) {
    const struct CPU_State initial_cpu = {.pc=0x48c8, .a=0xfc, .x=0xda, .y=0x01, .sp=0xcc, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x48c8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x48c9, .a=0xfd, .x=0xda, .y=0x01, .sp=0xcc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x48c8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x48c8, .value=0xbc, .type=IO_READ},
        {.addr=0x48c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0219) {
    const struct CPU_State initial_cpu = {.pc=0x55e5, .a=0x46, .x=0xf1, .y=0xaa, .sp=0x51, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x55e5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x55e6, .a=0x47, .x=0xf1, .y=0xaa, .sp=0x51, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x55e5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x55e5, .value=0xbc, .type=IO_READ},
        {.addr=0x55e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_021A) {
    const struct CPU_State initial_cpu = {.pc=0x5873, .a=0xdc, .x=0x88, .y=0xbb, .sp=0x79, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5873, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5874, .a=0xdd, .x=0x88, .y=0xbb, .sp=0x79, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5873, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5873, .value=0xbc, .type=IO_READ},
        {.addr=0x5874, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_021B) {
    const struct CPU_State initial_cpu = {.pc=0x439e, .a=0x04, .x=0xca, .y=0x17, .sp=0xf8, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x439e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x439f, .a=0x05, .x=0xca, .y=0x17, .sp=0xf8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x439e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x439e, .value=0xbc, .type=IO_READ},
        {.addr=0x439f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_021C) {
    const struct CPU_State initial_cpu = {.pc=0x67c8, .a=0x5a, .x=0x0e, .y=0x2f, .sp=0xeb, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x67c8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x67c9, .a=0x5b, .x=0x0e, .y=0x2f, .sp=0xeb, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x67c8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x67c8, .value=0xbc, .type=IO_READ},
        {.addr=0x67c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_021D) {
    const struct CPU_State initial_cpu = {.pc=0x29c1, .a=0x3a, .x=0x12, .y=0xf7, .sp=0xb6, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x29c1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x29c2, .a=0x3b, .x=0x12, .y=0xf7, .sp=0xb6, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x29c1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x29c1, .value=0xbc, .type=IO_READ},
        {.addr=0x29c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_021E) {
    const struct CPU_State initial_cpu = {.pc=0xfa12, .a=0xbf, .x=0x35, .y=0xf7, .sp=0x06, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xfa12, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfa13, .a=0xc0, .x=0x35, .y=0xf7, .sp=0x06, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xfa12, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfa12, .value=0xbc, .type=IO_READ},
        {.addr=0xfa13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_021F) {
    const struct CPU_State initial_cpu = {.pc=0xf4bb, .a=0x55, .x=0x80, .y=0x5e, .sp=0xd4, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf4bb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf4bc, .a=0x56, .x=0x80, .y=0x5e, .sp=0xd4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf4bb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf4bb, .value=0xbc, .type=IO_READ},
        {.addr=0xf4bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0220) {
    const struct CPU_State initial_cpu = {.pc=0x966b, .a=0x13, .x=0x1d, .y=0xe1, .sp=0xe6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x966b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x966c, .a=0x14, .x=0x1d, .y=0xe1, .sp=0xe6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x966b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x966b, .value=0xbc, .type=IO_READ},
        {.addr=0x966c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0221) {
    const struct CPU_State initial_cpu = {.pc=0x410c, .a=0x9e, .x=0xfe, .y=0x03, .sp=0x13, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x410c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x410d, .a=0x9f, .x=0xfe, .y=0x03, .sp=0x13, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x410c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x410c, .value=0xbc, .type=IO_READ},
        {.addr=0x410d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0222) {
    const struct CPU_State initial_cpu = {.pc=0x6ad8, .a=0xf6, .x=0x24, .y=0x97, .sp=0xbb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6ad9, .a=0xf7, .x=0x24, .y=0x97, .sp=0xbb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6ad8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6ad8, .value=0xbc, .type=IO_READ},
        {.addr=0x6ad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0223) {
    const struct CPU_State initial_cpu = {.pc=0x2476, .a=0xdb, .x=0x2d, .y=0x15, .sp=0x1b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2476, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2477, .a=0xdc, .x=0x2d, .y=0x15, .sp=0x1b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2476, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2476, .value=0xbc, .type=IO_READ},
        {.addr=0x2477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0224) {
    const struct CPU_State initial_cpu = {.pc=0xf114, .a=0x80, .x=0x84, .y=0xa5, .sp=0xdf, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf114, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf115, .a=0x81, .x=0x84, .y=0xa5, .sp=0xdf, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf114, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf114, .value=0xbc, .type=IO_READ},
        {.addr=0xf115, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0225) {
    const struct CPU_State initial_cpu = {.pc=0x407f, .a=0x71, .x=0xb0, .y=0x9c, .sp=0xa6, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x407f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4080, .a=0x72, .x=0xb0, .y=0x9c, .sp=0xa6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x407f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x407f, .value=0xbc, .type=IO_READ},
        {.addr=0x4080, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0226) {
    const struct CPU_State initial_cpu = {.pc=0x2cc4, .a=0xe3, .x=0x3c, .y=0x13, .sp=0x6a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2cc5, .a=0xe4, .x=0x3c, .y=0x13, .sp=0x6a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2cc4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2cc4, .value=0xbc, .type=IO_READ},
        {.addr=0x2cc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0227) {
    const struct CPU_State initial_cpu = {.pc=0x7232, .a=0x51, .x=0x6f, .y=0x70, .sp=0xa1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7232, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7233, .a=0x52, .x=0x6f, .y=0x70, .sp=0xa1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7232, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7232, .value=0xbc, .type=IO_READ},
        {.addr=0x7233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0228) {
    const struct CPU_State initial_cpu = {.pc=0x4ca8, .a=0x8d, .x=0xe3, .y=0x9e, .sp=0xa4, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4ca9, .a=0x8e, .x=0xe3, .y=0x9e, .sp=0xa4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4ca8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4ca8, .value=0xbc, .type=IO_READ},
        {.addr=0x4ca9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0229) {
    const struct CPU_State initial_cpu = {.pc=0xa2f2, .a=0xc9, .x=0xf0, .y=0xac, .sp=0xfe, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa2f3, .a=0xca, .x=0xf0, .y=0xac, .sp=0xfe, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa2f2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa2f2, .value=0xbc, .type=IO_READ},
        {.addr=0xa2f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_022A) {
    const struct CPU_State initial_cpu = {.pc=0x2622, .a=0x87, .x=0xe8, .y=0xda, .sp=0xb0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2622, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2623, .a=0x88, .x=0xe8, .y=0xda, .sp=0xb0, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2622, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2622, .value=0xbc, .type=IO_READ},
        {.addr=0x2623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_022B) {
    const struct CPU_State initial_cpu = {.pc=0xc351, .a=0x8f, .x=0x5d, .y=0x91, .sp=0x85, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc351, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc352, .a=0x90, .x=0x5d, .y=0x91, .sp=0x85, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc351, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc351, .value=0xbc, .type=IO_READ},
        {.addr=0xc352, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_022C) {
    const struct CPU_State initial_cpu = {.pc=0x1a3f, .a=0xb3, .x=0x4e, .y=0x65, .sp=0x1c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1a3f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1a40, .a=0xb4, .x=0x4e, .y=0x65, .sp=0x1c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1a3f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1a3f, .value=0xbc, .type=IO_READ},
        {.addr=0x1a40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_022D) {
    const struct CPU_State initial_cpu = {.pc=0xdb82, .a=0x32, .x=0x62, .y=0xa8, .sp=0xe4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xdb82, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdb83, .a=0x33, .x=0x62, .y=0xa8, .sp=0xe4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xdb82, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdb82, .value=0xbc, .type=IO_READ},
        {.addr=0xdb83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_022E) {
    const struct CPU_State initial_cpu = {.pc=0xf89b, .a=0x60, .x=0x5f, .y=0x0e, .sp=0xf5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf89b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf89c, .a=0x61, .x=0x5f, .y=0x0e, .sp=0xf5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf89b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf89b, .value=0xbc, .type=IO_READ},
        {.addr=0xf89c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_022F) {
    const struct CPU_State initial_cpu = {.pc=0x268f, .a=0x44, .x=0xea, .y=0x10, .sp=0x15, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x268f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2690, .a=0x45, .x=0xea, .y=0x10, .sp=0x15, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x268f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x268f, .value=0xbc, .type=IO_READ},
        {.addr=0x2690, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0230) {
    const struct CPU_State initial_cpu = {.pc=0x46dd, .a=0x58, .x=0x70, .y=0x21, .sp=0x5e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x46dd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x46de, .a=0x59, .x=0x70, .y=0x21, .sp=0x5e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x46dd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x46dd, .value=0xbc, .type=IO_READ},
        {.addr=0x46de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0231) {
    const struct CPU_State initial_cpu = {.pc=0xf44c, .a=0xf5, .x=0x54, .y=0x37, .sp=0xe2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf44c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf44d, .a=0xf6, .x=0x54, .y=0x37, .sp=0xe2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf44c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf44c, .value=0xbc, .type=IO_READ},
        {.addr=0xf44d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0232) {
    const struct CPU_State initial_cpu = {.pc=0x2143, .a=0x9b, .x=0xbe, .y=0x07, .sp=0xe8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2143, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2144, .a=0x9c, .x=0xbe, .y=0x07, .sp=0xe8, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2143, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2143, .value=0xbc, .type=IO_READ},
        {.addr=0x2144, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0233) {
    const struct CPU_State initial_cpu = {.pc=0x75a0, .a=0xdd, .x=0xa0, .y=0x76, .sp=0x7a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x75a0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x75a1, .a=0xde, .x=0xa0, .y=0x76, .sp=0x7a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x75a0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x75a0, .value=0xbc, .type=IO_READ},
        {.addr=0x75a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0234) {
    const struct CPU_State initial_cpu = {.pc=0xa1e0, .a=0x1a, .x=0x16, .y=0x47, .sp=0x44, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa1e1, .a=0x1b, .x=0x16, .y=0x47, .sp=0x44, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa1e0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa1e0, .value=0xbc, .type=IO_READ},
        {.addr=0xa1e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2ba3, .a=0x7f, .x=0x51, .y=0xf3, .sp=0x2c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2ba4, .a=0x80, .x=0x51, .y=0xf3, .sp=0x2c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2ba3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2ba3, .value=0xbc, .type=IO_READ},
        {.addr=0x2ba4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0236) {
    const struct CPU_State initial_cpu = {.pc=0x1ecf, .a=0x02, .x=0x1b, .y=0x20, .sp=0x5b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x1ecf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1ed0, .a=0x03, .x=0x1b, .y=0x20, .sp=0x5b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1ecf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1ecf, .value=0xbc, .type=IO_READ},
        {.addr=0x1ed0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0237) {
    const struct CPU_State initial_cpu = {.pc=0x6779, .a=0x99, .x=0x50, .y=0xba, .sp=0xab, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6779, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x677a, .a=0x9a, .x=0x50, .y=0xba, .sp=0xab, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6779, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6779, .value=0xbc, .type=IO_READ},
        {.addr=0x677a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0238) {
    const struct CPU_State initial_cpu = {.pc=0xdec9, .a=0x3f, .x=0xd9, .y=0xc8, .sp=0x7e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdec9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdeca, .a=0x40, .x=0xd9, .y=0xc8, .sp=0x7e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdec9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdec9, .value=0xbc, .type=IO_READ},
        {.addr=0xdeca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0239) {
    const struct CPU_State initial_cpu = {.pc=0x09f4, .a=0xab, .x=0xe1, .y=0xf8, .sp=0x15, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x09f4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x09f5, .a=0xac, .x=0xe1, .y=0xf8, .sp=0x15, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x09f4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x09f4, .value=0xbc, .type=IO_READ},
        {.addr=0x09f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_023A) {
    const struct CPU_State initial_cpu = {.pc=0xaab6, .a=0x06, .x=0x68, .y=0x53, .sp=0xc4, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xaab6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xaab7, .a=0x07, .x=0x68, .y=0x53, .sp=0xc4, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xaab6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xaab6, .value=0xbc, .type=IO_READ},
        {.addr=0xaab7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_023B) {
    const struct CPU_State initial_cpu = {.pc=0xae3c, .a=0x51, .x=0x03, .y=0xe2, .sp=0x40, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xae3c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xae3d, .a=0x52, .x=0x03, .y=0xe2, .sp=0x40, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xae3c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xae3c, .value=0xbc, .type=IO_READ},
        {.addr=0xae3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_023C) {
    const struct CPU_State initial_cpu = {.pc=0x2531, .a=0x8a, .x=0x3c, .y=0x2d, .sp=0x64, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2531, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2532, .a=0x8b, .x=0x3c, .y=0x2d, .sp=0x64, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2531, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2531, .value=0xbc, .type=IO_READ},
        {.addr=0x2532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_023D) {
    const struct CPU_State initial_cpu = {.pc=0x78c6, .a=0x19, .x=0x40, .y=0xb5, .sp=0x16, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x78c6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x78c7, .a=0x1a, .x=0x40, .y=0xb5, .sp=0x16, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x78c6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x78c6, .value=0xbc, .type=IO_READ},
        {.addr=0x78c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_023E) {
    const struct CPU_State initial_cpu = {.pc=0x38a3, .a=0x53, .x=0xe5, .y=0xc3, .sp=0x79, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x38a3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x38a4, .a=0x54, .x=0xe5, .y=0xc3, .sp=0x79, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x38a3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x38a3, .value=0xbc, .type=IO_READ},
        {.addr=0x38a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_023F) {
    const struct CPU_State initial_cpu = {.pc=0x28af, .a=0xd8, .x=0xce, .y=0xe2, .sp=0x8e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x28af, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x28b0, .a=0xd9, .x=0xce, .y=0xe2, .sp=0x8e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x28af, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x28af, .value=0xbc, .type=IO_READ},
        {.addr=0x28b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0240) {
    const struct CPU_State initial_cpu = {.pc=0x21f2, .a=0x27, .x=0x99, .y=0x1d, .sp=0xa5, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x21f2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x21f3, .a=0x28, .x=0x99, .y=0x1d, .sp=0xa5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x21f2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x21f2, .value=0xbc, .type=IO_READ},
        {.addr=0x21f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0241) {
    const struct CPU_State initial_cpu = {.pc=0x966f, .a=0x22, .x=0x27, .y=0x33, .sp=0x40, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x966f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9670, .a=0x23, .x=0x27, .y=0x33, .sp=0x40, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x966f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x966f, .value=0xbc, .type=IO_READ},
        {.addr=0x9670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0242) {
    const struct CPU_State initial_cpu = {.pc=0xd7c1, .a=0x26, .x=0x18, .y=0xbf, .sp=0xca, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd7c2, .a=0x27, .x=0x18, .y=0xbf, .sp=0xca, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd7c1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd7c1, .value=0xbc, .type=IO_READ},
        {.addr=0xd7c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0243) {
    const struct CPU_State initial_cpu = {.pc=0xda24, .a=0xfb, .x=0x9a, .y=0xa0, .sp=0xed, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xda24, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xda25, .a=0xfc, .x=0x9a, .y=0xa0, .sp=0xed, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xda24, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xda24, .value=0xbc, .type=IO_READ},
        {.addr=0xda25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0244) {
    const struct CPU_State initial_cpu = {.pc=0xbaac, .a=0x26, .x=0x6a, .y=0x62, .sp=0x89, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xbaac, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbaad, .a=0x27, .x=0x6a, .y=0x62, .sp=0x89, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xbaac, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbaac, .value=0xbc, .type=IO_READ},
        {.addr=0xbaad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0245) {
    const struct CPU_State initial_cpu = {.pc=0xc604, .a=0x13, .x=0x13, .y=0xd1, .sp=0xbd, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc604, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc605, .a=0x14, .x=0x13, .y=0xd1, .sp=0xbd, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc604, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc604, .value=0xbc, .type=IO_READ},
        {.addr=0xc605, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0246) {
    const struct CPU_State initial_cpu = {.pc=0xfda1, .a=0xf5, .x=0x17, .y=0x5c, .sp=0x24, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xfda1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfda2, .a=0xf6, .x=0x17, .y=0x5c, .sp=0x24, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xfda1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfda1, .value=0xbc, .type=IO_READ},
        {.addr=0xfda2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6ea1, .a=0xd1, .x=0xea, .y=0x1b, .sp=0xa7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6ea2, .a=0xd2, .x=0xea, .y=0x1b, .sp=0xa7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6ea1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6ea1, .value=0xbc, .type=IO_READ},
        {.addr=0x6ea2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0248) {
    const struct CPU_State initial_cpu = {.pc=0x5970, .a=0x42, .x=0x1c, .y=0x17, .sp=0xc5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5970, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5971, .a=0x43, .x=0x1c, .y=0x17, .sp=0xc5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5970, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5970, .value=0xbc, .type=IO_READ},
        {.addr=0x5971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0249) {
    const struct CPU_State initial_cpu = {.pc=0x7915, .a=0x19, .x=0x8b, .y=0xdc, .sp=0xf0, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x7915, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7916, .a=0x1a, .x=0x8b, .y=0xdc, .sp=0xf0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7915, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7915, .value=0xbc, .type=IO_READ},
        {.addr=0x7916, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_024A) {
    const struct CPU_State initial_cpu = {.pc=0x3663, .a=0x72, .x=0xa6, .y=0xa5, .sp=0x8e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x3663, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3664, .a=0x73, .x=0xa6, .y=0xa5, .sp=0x8e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x3663, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3663, .value=0xbc, .type=IO_READ},
        {.addr=0x3664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_024B) {
    const struct CPU_State initial_cpu = {.pc=0xd906, .a=0xd6, .x=0x80, .y=0x47, .sp=0x31, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd906, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd907, .a=0xd7, .x=0x80, .y=0x47, .sp=0x31, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd906, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd906, .value=0xbc, .type=IO_READ},
        {.addr=0xd907, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_024C) {
    const struct CPU_State initial_cpu = {.pc=0xa081, .a=0x1d, .x=0xb1, .y=0xdc, .sp=0x45, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa081, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa082, .a=0x1e, .x=0xb1, .y=0xdc, .sp=0x45, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa081, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa081, .value=0xbc, .type=IO_READ},
        {.addr=0xa082, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_024D) {
    const struct CPU_State initial_cpu = {.pc=0xc11c, .a=0x7d, .x=0x9b, .y=0x1e, .sp=0x30, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc11c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc11d, .a=0x7e, .x=0x9b, .y=0x1e, .sp=0x30, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc11c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc11c, .value=0xbc, .type=IO_READ},
        {.addr=0xc11d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_024E) {
    const struct CPU_State initial_cpu = {.pc=0xa4bb, .a=0x7c, .x=0x44, .y=0x77, .sp=0x94, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa4bb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa4bc, .a=0x7d, .x=0x44, .y=0x77, .sp=0x94, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa4bb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa4bb, .value=0xbc, .type=IO_READ},
        {.addr=0xa4bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_024F) {
    const struct CPU_State initial_cpu = {.pc=0x3543, .a=0xc8, .x=0xc9, .y=0xad, .sp=0x03, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3543, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3544, .a=0xc9, .x=0xc9, .y=0xad, .sp=0x03, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3543, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3543, .value=0xbc, .type=IO_READ},
        {.addr=0x3544, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0250) {
    const struct CPU_State initial_cpu = {.pc=0x04ce, .a=0x61, .x=0x40, .y=0x35, .sp=0x3f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x04ce, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x04cf, .a=0x62, .x=0x40, .y=0x35, .sp=0x3f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x04ce, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x04ce, .value=0xbc, .type=IO_READ},
        {.addr=0x04cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0251) {
    const struct CPU_State initial_cpu = {.pc=0x442b, .a=0xf6, .x=0x2e, .y=0x79, .sp=0xf2, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x442b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x442c, .a=0xf7, .x=0x2e, .y=0x79, .sp=0xf2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x442b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x442b, .value=0xbc, .type=IO_READ},
        {.addr=0x442c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0252) {
    const struct CPU_State initial_cpu = {.pc=0x6a33, .a=0x6b, .x=0xf7, .y=0x85, .sp=0x2c, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6a33, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6a34, .a=0x6c, .x=0xf7, .y=0x85, .sp=0x2c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6a33, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6a33, .value=0xbc, .type=IO_READ},
        {.addr=0x6a34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0253) {
    const struct CPU_State initial_cpu = {.pc=0xf7d2, .a=0x04, .x=0x6d, .y=0x1d, .sp=0xc1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xf7d2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf7d3, .a=0x05, .x=0x6d, .y=0x1d, .sp=0xc1, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf7d2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf7d2, .value=0xbc, .type=IO_READ},
        {.addr=0xf7d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0254) {
    const struct CPU_State initial_cpu = {.pc=0x10a9, .a=0x6c, .x=0xef, .y=0xcc, .sp=0xeb, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x10a9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x10aa, .a=0x6d, .x=0xef, .y=0xcc, .sp=0xeb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x10a9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x10a9, .value=0xbc, .type=IO_READ},
        {.addr=0x10aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0255) {
    const struct CPU_State initial_cpu = {.pc=0xfab9, .a=0xb5, .x=0x02, .y=0x5d, .sp=0x1b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xfab9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfaba, .a=0xb6, .x=0x02, .y=0x5d, .sp=0x1b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xfab9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfab9, .value=0xbc, .type=IO_READ},
        {.addr=0xfaba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0256) {
    const struct CPU_State initial_cpu = {.pc=0xd9e3, .a=0xf1, .x=0x62, .y=0xd5, .sp=0xc3, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd9e4, .a=0xf2, .x=0x62, .y=0xd5, .sp=0xc3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd9e3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd9e3, .value=0xbc, .type=IO_READ},
        {.addr=0xd9e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0257) {
    const struct CPU_State initial_cpu = {.pc=0xc0f2, .a=0x1c, .x=0x3d, .y=0x62, .sp=0x00, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc0f3, .a=0x1d, .x=0x3d, .y=0x62, .sp=0x00, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc0f2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc0f2, .value=0xbc, .type=IO_READ},
        {.addr=0xc0f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0258) {
    const struct CPU_State initial_cpu = {.pc=0x3959, .a=0xce, .x=0xdd, .y=0x1d, .sp=0xf2, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3959, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x395a, .a=0xcf, .x=0xdd, .y=0x1d, .sp=0xf2, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3959, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3959, .value=0xbc, .type=IO_READ},
        {.addr=0x395a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0259) {
    const struct CPU_State initial_cpu = {.pc=0x3dcf, .a=0x7c, .x=0xcb, .y=0xa1, .sp=0x65, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3dcf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3dd0, .a=0x7d, .x=0xcb, .y=0xa1, .sp=0x65, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3dcf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3dcf, .value=0xbc, .type=IO_READ},
        {.addr=0x3dd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3462, .a=0x97, .x=0x03, .y=0x0c, .sp=0x2b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x3462, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3463, .a=0x98, .x=0x03, .y=0x0c, .sp=0x2b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3462, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3462, .value=0xbc, .type=IO_READ},
        {.addr=0x3463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_025B) {
    const struct CPU_State initial_cpu = {.pc=0x4688, .a=0x95, .x=0x58, .y=0x4f, .sp=0x45, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4688, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4689, .a=0x96, .x=0x58, .y=0x4f, .sp=0x45, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4688, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4688, .value=0xbc, .type=IO_READ},
        {.addr=0x4689, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_025C) {
    const struct CPU_State initial_cpu = {.pc=0x5b0d, .a=0x6e, .x=0x6b, .y=0x19, .sp=0x4d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5b0d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5b0e, .a=0x6f, .x=0x6b, .y=0x19, .sp=0x4d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5b0d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5b0d, .value=0xbc, .type=IO_READ},
        {.addr=0x5b0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_025D) {
    const struct CPU_State initial_cpu = {.pc=0x4fed, .a=0xf5, .x=0xbe, .y=0xb0, .sp=0x41, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4fed, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4fee, .a=0xf6, .x=0xbe, .y=0xb0, .sp=0x41, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4fed, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4fed, .value=0xbc, .type=IO_READ},
        {.addr=0x4fee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_025E) {
    const struct CPU_State initial_cpu = {.pc=0x442a, .a=0x6f, .x=0xae, .y=0xae, .sp=0xc6, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x442a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x442b, .a=0x70, .x=0xae, .y=0xae, .sp=0xc6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x442a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x442a, .value=0xbc, .type=IO_READ},
        {.addr=0x442b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_025F) {
    const struct CPU_State initial_cpu = {.pc=0x3842, .a=0xf6, .x=0x32, .y=0xbf, .sp=0x12, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x3842, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3843, .a=0xf7, .x=0x32, .y=0xbf, .sp=0x12, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x3842, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3842, .value=0xbc, .type=IO_READ},
        {.addr=0x3843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0260) {
    const struct CPU_State initial_cpu = {.pc=0x46d6, .a=0x9c, .x=0xe9, .y=0x59, .sp=0x5c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x46d6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x46d7, .a=0x9d, .x=0xe9, .y=0x59, .sp=0x5c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x46d6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x46d6, .value=0xbc, .type=IO_READ},
        {.addr=0x46d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0261) {
    const struct CPU_State initial_cpu = {.pc=0xdc93, .a=0xba, .x=0x6b, .y=0x03, .sp=0xcb, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdc93, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdc94, .a=0xbb, .x=0x6b, .y=0x03, .sp=0xcb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdc93, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdc93, .value=0xbc, .type=IO_READ},
        {.addr=0xdc94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0262) {
    const struct CPU_State initial_cpu = {.pc=0x6541, .a=0xeb, .x=0xe4, .y=0x82, .sp=0x80, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x6541, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6542, .a=0xec, .x=0xe4, .y=0x82, .sp=0x80, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6541, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6541, .value=0xbc, .type=IO_READ},
        {.addr=0x6542, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0263) {
    const struct CPU_State initial_cpu = {.pc=0x3f73, .a=0x3a, .x=0x4b, .y=0xa6, .sp=0xb4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3f73, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3f74, .a=0x3b, .x=0x4b, .y=0xa6, .sp=0xb4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3f73, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3f73, .value=0xbc, .type=IO_READ},
        {.addr=0x3f74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0264) {
    const struct CPU_State initial_cpu = {.pc=0x9988, .a=0xb1, .x=0x4d, .y=0x3d, .sp=0x0a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9988, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9989, .a=0xb2, .x=0x4d, .y=0x3d, .sp=0x0a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9988, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9988, .value=0xbc, .type=IO_READ},
        {.addr=0x9989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0265) {
    const struct CPU_State initial_cpu = {.pc=0x8093, .a=0x84, .x=0x40, .y=0x66, .sp=0x9a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x8093, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8094, .a=0x85, .x=0x40, .y=0x66, .sp=0x9a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8093, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8093, .value=0xbc, .type=IO_READ},
        {.addr=0x8094, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0266) {
    const struct CPU_State initial_cpu = {.pc=0x73b3, .a=0xdc, .x=0xe8, .y=0x86, .sp=0x23, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x73b3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x73b4, .a=0xdd, .x=0xe8, .y=0x86, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x73b3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x73b3, .value=0xbc, .type=IO_READ},
        {.addr=0x73b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0267) {
    const struct CPU_State initial_cpu = {.pc=0x4867, .a=0x9b, .x=0xd0, .y=0x95, .sp=0x50, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4867, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4868, .a=0x9c, .x=0xd0, .y=0x95, .sp=0x50, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4867, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4867, .value=0xbc, .type=IO_READ},
        {.addr=0x4868, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0268) {
    const struct CPU_State initial_cpu = {.pc=0x224e, .a=0x2c, .x=0x23, .y=0x6c, .sp=0x87, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x224e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x224f, .a=0x2d, .x=0x23, .y=0x6c, .sp=0x87, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x224e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x224e, .value=0xbc, .type=IO_READ},
        {.addr=0x224f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0269) {
    const struct CPU_State initial_cpu = {.pc=0xdfc8, .a=0x57, .x=0x4b, .y=0x33, .sp=0x70, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xdfc8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdfc9, .a=0x58, .x=0x4b, .y=0x33, .sp=0x70, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xdfc8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdfc8, .value=0xbc, .type=IO_READ},
        {.addr=0xdfc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_026A) {
    const struct CPU_State initial_cpu = {.pc=0x4bf4, .a=0x09, .x=0xec, .y=0x83, .sp=0x7d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4bf4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4bf5, .a=0x0a, .x=0xec, .y=0x83, .sp=0x7d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4bf4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4bf4, .value=0xbc, .type=IO_READ},
        {.addr=0x4bf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_026B) {
    const struct CPU_State initial_cpu = {.pc=0x9057, .a=0xbb, .x=0x0b, .y=0xf0, .sp=0x46, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x9057, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9058, .a=0xbc, .x=0x0b, .y=0xf0, .sp=0x46, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9057, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9057, .value=0xbc, .type=IO_READ},
        {.addr=0x9058, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_026C) {
    const struct CPU_State initial_cpu = {.pc=0x113c, .a=0x11, .x=0x08, .y=0x73, .sp=0xf3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x113c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x113d, .a=0x12, .x=0x08, .y=0x73, .sp=0xf3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x113c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x113c, .value=0xbc, .type=IO_READ},
        {.addr=0x113d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_026D) {
    const struct CPU_State initial_cpu = {.pc=0x6ab1, .a=0x14, .x=0xcd, .y=0x79, .sp=0x42, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6ab1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6ab2, .a=0x15, .x=0xcd, .y=0x79, .sp=0x42, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6ab1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6ab1, .value=0xbc, .type=IO_READ},
        {.addr=0x6ab2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_026E) {
    const struct CPU_State initial_cpu = {.pc=0xffb5, .a=0x68, .x=0x27, .y=0xae, .sp=0x3d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xffb5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xffb6, .a=0x69, .x=0x27, .y=0xae, .sp=0x3d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xffb5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xffb5, .value=0xbc, .type=IO_READ},
        {.addr=0xffb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_026F) {
    const struct CPU_State initial_cpu = {.pc=0x22ab, .a=0xe5, .x=0xe4, .y=0x6f, .sp=0xf9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x22ab, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x22ac, .a=0xe6, .x=0xe4, .y=0x6f, .sp=0xf9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x22ab, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x22ab, .value=0xbc, .type=IO_READ},
        {.addr=0x22ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0270) {
    const struct CPU_State initial_cpu = {.pc=0xca40, .a=0x2d, .x=0x73, .y=0x4a, .sp=0x70, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xca40, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xca41, .a=0x2e, .x=0x73, .y=0x4a, .sp=0x70, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xca40, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xca40, .value=0xbc, .type=IO_READ},
        {.addr=0xca41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0271) {
    const struct CPU_State initial_cpu = {.pc=0xe78c, .a=0xdc, .x=0xed, .y=0xac, .sp=0x17, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe78c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe78d, .a=0xdd, .x=0xed, .y=0xac, .sp=0x17, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe78c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe78c, .value=0xbc, .type=IO_READ},
        {.addr=0xe78d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0272) {
    const struct CPU_State initial_cpu = {.pc=0x26be, .a=0x8f, .x=0x16, .y=0x93, .sp=0xdb, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x26be, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x26bf, .a=0x90, .x=0x16, .y=0x93, .sp=0xdb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x26be, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x26be, .value=0xbc, .type=IO_READ},
        {.addr=0x26bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0273) {
    const struct CPU_State initial_cpu = {.pc=0xc56b, .a=0xf4, .x=0x43, .y=0xc2, .sp=0x54, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc56b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc56c, .a=0xf5, .x=0x43, .y=0xc2, .sp=0x54, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc56b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc56b, .value=0xbc, .type=IO_READ},
        {.addr=0xc56c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0274) {
    const struct CPU_State initial_cpu = {.pc=0xa8ec, .a=0x33, .x=0xc1, .y=0xa6, .sp=0x15, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ec, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa8ed, .a=0x34, .x=0xc1, .y=0xa6, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa8ec, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa8ec, .value=0xbc, .type=IO_READ},
        {.addr=0xa8ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0275) {
    const struct CPU_State initial_cpu = {.pc=0x22d6, .a=0xec, .x=0x2f, .y=0x76, .sp=0x11, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x22d6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x22d7, .a=0xed, .x=0x2f, .y=0x76, .sp=0x11, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x22d6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x22d6, .value=0xbc, .type=IO_READ},
        {.addr=0x22d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0276) {
    const struct CPU_State initial_cpu = {.pc=0x497e, .a=0x69, .x=0x45, .y=0x22, .sp=0xae, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x497e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x497f, .a=0x6a, .x=0x45, .y=0x22, .sp=0xae, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x497e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x497e, .value=0xbc, .type=IO_READ},
        {.addr=0x497f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0277) {
    const struct CPU_State initial_cpu = {.pc=0x3640, .a=0xd1, .x=0x42, .y=0xd6, .sp=0x9e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x3640, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3641, .a=0xd2, .x=0x42, .y=0xd6, .sp=0x9e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3640, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3640, .value=0xbc, .type=IO_READ},
        {.addr=0x3641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0278) {
    const struct CPU_State initial_cpu = {.pc=0xa271, .a=0xd4, .x=0x91, .y=0x57, .sp=0xc9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa271, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa272, .a=0xd5, .x=0x91, .y=0x57, .sp=0xc9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa271, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa271, .value=0xbc, .type=IO_READ},
        {.addr=0xa272, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0279) {
    const struct CPU_State initial_cpu = {.pc=0x62c8, .a=0xb2, .x=0x61, .y=0x1e, .sp=0x3d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x62c8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x62c9, .a=0xb3, .x=0x61, .y=0x1e, .sp=0x3d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x62c8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x62c8, .value=0xbc, .type=IO_READ},
        {.addr=0x62c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_027A) {
    const struct CPU_State initial_cpu = {.pc=0x3335, .a=0xe9, .x=0xcf, .y=0xdc, .sp=0x64, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3335, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3336, .a=0xea, .x=0xcf, .y=0xdc, .sp=0x64, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3335, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3335, .value=0xbc, .type=IO_READ},
        {.addr=0x3336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_027B) {
    const struct CPU_State initial_cpu = {.pc=0x3a1a, .a=0x88, .x=0xf7, .y=0x5c, .sp=0x01, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3a1a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3a1b, .a=0x89, .x=0xf7, .y=0x5c, .sp=0x01, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3a1a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3a1a, .value=0xbc, .type=IO_READ},
        {.addr=0x3a1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_027C) {
    const struct CPU_State initial_cpu = {.pc=0x71e6, .a=0xa1, .x=0xf1, .y=0x1c, .sp=0x04, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x71e6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x71e7, .a=0xa2, .x=0xf1, .y=0x1c, .sp=0x04, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x71e6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x71e6, .value=0xbc, .type=IO_READ},
        {.addr=0x71e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_027D) {
    const struct CPU_State initial_cpu = {.pc=0x60be, .a=0x97, .x=0x57, .y=0xac, .sp=0xab, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x60be, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x60bf, .a=0x98, .x=0x57, .y=0xac, .sp=0xab, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x60be, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x60be, .value=0xbc, .type=IO_READ},
        {.addr=0x60bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_027E) {
    const struct CPU_State initial_cpu = {.pc=0xeac6, .a=0x4c, .x=0xcb, .y=0x92, .sp=0x23, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xeac6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeac7, .a=0x4d, .x=0xcb, .y=0x92, .sp=0x23, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xeac6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeac6, .value=0xbc, .type=IO_READ},
        {.addr=0xeac7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_027F) {
    const struct CPU_State initial_cpu = {.pc=0x6bc8, .a=0x4a, .x=0x2b, .y=0xfe, .sp=0xd7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6bc9, .a=0x4b, .x=0x2b, .y=0xfe, .sp=0xd7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6bc8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6bc8, .value=0xbc, .type=IO_READ},
        {.addr=0x6bc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0280) {
    const struct CPU_State initial_cpu = {.pc=0xbd39, .a=0xc2, .x=0x73, .y=0x85, .sp=0x5f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xbd39, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbd3a, .a=0xc3, .x=0x73, .y=0x85, .sp=0x5f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbd39, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbd39, .value=0xbc, .type=IO_READ},
        {.addr=0xbd3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0281) {
    const struct CPU_State initial_cpu = {.pc=0x4cc1, .a=0x9b, .x=0xc8, .y=0xce, .sp=0xf5, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4cc2, .a=0x9c, .x=0xc8, .y=0xce, .sp=0xf5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4cc1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4cc1, .value=0xbc, .type=IO_READ},
        {.addr=0x4cc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0282) {
    const struct CPU_State initial_cpu = {.pc=0x9642, .a=0x68, .x=0xc8, .y=0x78, .sp=0xc0, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x9642, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9643, .a=0x69, .x=0xc8, .y=0x78, .sp=0xc0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9642, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9642, .value=0xbc, .type=IO_READ},
        {.addr=0x9643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0283) {
    const struct CPU_State initial_cpu = {.pc=0xf4a7, .a=0x4a, .x=0x65, .y=0xfc, .sp=0xd4, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf4a8, .a=0x4b, .x=0x65, .y=0xfc, .sp=0xd4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf4a7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf4a7, .value=0xbc, .type=IO_READ},
        {.addr=0xf4a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0284) {
    const struct CPU_State initial_cpu = {.pc=0xde2c, .a=0x89, .x=0x89, .y=0xea, .sp=0x4f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xde2c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xde2d, .a=0x8a, .x=0x89, .y=0xea, .sp=0x4f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xde2c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xde2c, .value=0xbc, .type=IO_READ},
        {.addr=0xde2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb27e, .a=0xba, .x=0x41, .y=0xd6, .sp=0xc0, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb27e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb27f, .a=0xbb, .x=0x41, .y=0xd6, .sp=0xc0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb27e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb27e, .value=0xbc, .type=IO_READ},
        {.addr=0xb27f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0286) {
    const struct CPU_State initial_cpu = {.pc=0x940d, .a=0xbb, .x=0xc8, .y=0xec, .sp=0x66, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x940d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x940e, .a=0xbc, .x=0xc8, .y=0xec, .sp=0x66, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x940d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x940d, .value=0xbc, .type=IO_READ},
        {.addr=0x940e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0287) {
    const struct CPU_State initial_cpu = {.pc=0x5d00, .a=0x42, .x=0x8e, .y=0xff, .sp=0xec, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5d00, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5d01, .a=0x43, .x=0x8e, .y=0xff, .sp=0xec, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5d00, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5d00, .value=0xbc, .type=IO_READ},
        {.addr=0x5d01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0288) {
    const struct CPU_State initial_cpu = {.pc=0x668b, .a=0x22, .x=0x6f, .y=0xab, .sp=0xba, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x668b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x668c, .a=0x23, .x=0x6f, .y=0xab, .sp=0xba, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x668b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x668b, .value=0xbc, .type=IO_READ},
        {.addr=0x668c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0289) {
    const struct CPU_State initial_cpu = {.pc=0xf3f4, .a=0x81, .x=0x2e, .y=0xca, .sp=0x2b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf3f4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf3f5, .a=0x82, .x=0x2e, .y=0xca, .sp=0x2b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf3f4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf3f4, .value=0xbc, .type=IO_READ},
        {.addr=0xf3f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_028A) {
    const struct CPU_State initial_cpu = {.pc=0x1053, .a=0xe0, .x=0xc4, .y=0x85, .sp=0x03, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x1053, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1054, .a=0xe1, .x=0xc4, .y=0x85, .sp=0x03, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1053, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1053, .value=0xbc, .type=IO_READ},
        {.addr=0x1054, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_028B) {
    const struct CPU_State initial_cpu = {.pc=0x14ac, .a=0x97, .x=0x26, .y=0x32, .sp=0x99, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x14ac, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x14ad, .a=0x98, .x=0x26, .y=0x32, .sp=0x99, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x14ac, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x14ac, .value=0xbc, .type=IO_READ},
        {.addr=0x14ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_028C) {
    const struct CPU_State initial_cpu = {.pc=0x4cb6, .a=0x00, .x=0xa8, .y=0x57, .sp=0x80, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4cb6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4cb7, .a=0x01, .x=0xa8, .y=0x57, .sp=0x80, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4cb6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4cb6, .value=0xbc, .type=IO_READ},
        {.addr=0x4cb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_028D) {
    const struct CPU_State initial_cpu = {.pc=0x4280, .a=0xd3, .x=0x54, .y=0xed, .sp=0x62, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4280, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4281, .a=0xd4, .x=0x54, .y=0xed, .sp=0x62, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4280, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4280, .value=0xbc, .type=IO_READ},
        {.addr=0x4281, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_028E) {
    const struct CPU_State initial_cpu = {.pc=0x965b, .a=0xe3, .x=0x69, .y=0x4a, .sp=0x8a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x965b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x965c, .a=0xe4, .x=0x69, .y=0x4a, .sp=0x8a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x965b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x965b, .value=0xbc, .type=IO_READ},
        {.addr=0x965c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_028F) {
    const struct CPU_State initial_cpu = {.pc=0x60a2, .a=0x89, .x=0x83, .y=0x06, .sp=0xee, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x60a2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x60a3, .a=0x8a, .x=0x83, .y=0x06, .sp=0xee, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x60a2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x60a2, .value=0xbc, .type=IO_READ},
        {.addr=0x60a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0290) {
    const struct CPU_State initial_cpu = {.pc=0xa5df, .a=0x8a, .x=0x87, .y=0xba, .sp=0x3f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xa5df, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa5e0, .a=0x8b, .x=0x87, .y=0xba, .sp=0x3f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa5df, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa5df, .value=0xbc, .type=IO_READ},
        {.addr=0xa5e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0291) {
    const struct CPU_State initial_cpu = {.pc=0xa0b0, .a=0xb2, .x=0xce, .y=0x35, .sp=0xa5, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa0b1, .a=0xb3, .x=0xce, .y=0x35, .sp=0xa5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa0b0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa0b0, .value=0xbc, .type=IO_READ},
        {.addr=0xa0b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0292) {
    const struct CPU_State initial_cpu = {.pc=0xca76, .a=0xa5, .x=0x7b, .y=0x19, .sp=0xa5, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xca76, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xca77, .a=0xa6, .x=0x7b, .y=0x19, .sp=0xa5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xca76, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xca76, .value=0xbc, .type=IO_READ},
        {.addr=0xca77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0293) {
    const struct CPU_State initial_cpu = {.pc=0xc81c, .a=0xfa, .x=0x91, .y=0xfb, .sp=0x7e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc81c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc81d, .a=0xfb, .x=0x91, .y=0xfb, .sp=0x7e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc81c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc81c, .value=0xbc, .type=IO_READ},
        {.addr=0xc81d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0294) {
    const struct CPU_State initial_cpu = {.pc=0x6808, .a=0xe1, .x=0x96, .y=0x1b, .sp=0xa8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6808, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6809, .a=0xe2, .x=0x96, .y=0x1b, .sp=0xa8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6808, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6808, .value=0xbc, .type=IO_READ},
        {.addr=0x6809, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0295) {
    const struct CPU_State initial_cpu = {.pc=0x806d, .a=0xce, .x=0xdd, .y=0x25, .sp=0x07, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x806d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x806e, .a=0xcf, .x=0xdd, .y=0x25, .sp=0x07, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x806d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x806d, .value=0xbc, .type=IO_READ},
        {.addr=0x806e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0296) {
    const struct CPU_State initial_cpu = {.pc=0x14ad, .a=0x3b, .x=0xc1, .y=0x90, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x14ad, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x14ae, .a=0x3c, .x=0xc1, .y=0x90, .sp=0xce, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x14ad, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x14ad, .value=0xbc, .type=IO_READ},
        {.addr=0x14ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0297) {
    const struct CPU_State initial_cpu = {.pc=0x0bac, .a=0x95, .x=0x08, .y=0x47, .sp=0xac, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0bac, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0bad, .a=0x96, .x=0x08, .y=0x47, .sp=0xac, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0bac, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0bac, .value=0xbc, .type=IO_READ},
        {.addr=0x0bad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0298) {
    const struct CPU_State initial_cpu = {.pc=0x6e3a, .a=0x5f, .x=0xc1, .y=0x69, .sp=0xef, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x6e3a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6e3b, .a=0x60, .x=0xc1, .y=0x69, .sp=0xef, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6e3a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6e3a, .value=0xbc, .type=IO_READ},
        {.addr=0x6e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0299) {
    const struct CPU_State initial_cpu = {.pc=0x2c56, .a=0xf1, .x=0x26, .y=0x04, .sp=0x8b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c56, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2c57, .a=0xf2, .x=0x26, .y=0x04, .sp=0x8b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2c56, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2c56, .value=0xbc, .type=IO_READ},
        {.addr=0x2c57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_029A) {
    const struct CPU_State initial_cpu = {.pc=0x59b2, .a=0x88, .x=0xf2, .y=0x68, .sp=0x0e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x59b2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x59b3, .a=0x89, .x=0xf2, .y=0x68, .sp=0x0e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x59b2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x59b2, .value=0xbc, .type=IO_READ},
        {.addr=0x59b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_029B) {
    const struct CPU_State initial_cpu = {.pc=0x420c, .a=0x02, .x=0xd5, .y=0xba, .sp=0xce, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x420c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x420d, .a=0x03, .x=0xd5, .y=0xba, .sp=0xce, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x420c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x420c, .value=0xbc, .type=IO_READ},
        {.addr=0x420d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_029C) {
    const struct CPU_State initial_cpu = {.pc=0x0eeb, .a=0x57, .x=0x29, .y=0x1e, .sp=0xe9, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0eeb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0eec, .a=0x58, .x=0x29, .y=0x1e, .sp=0xe9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0eeb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0eeb, .value=0xbc, .type=IO_READ},
        {.addr=0x0eec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_029D) {
    const struct CPU_State initial_cpu = {.pc=0x14c3, .a=0xe8, .x=0xc6, .y=0x31, .sp=0x4f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x14c3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x14c4, .a=0xe9, .x=0xc6, .y=0x31, .sp=0x4f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x14c3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x14c3, .value=0xbc, .type=IO_READ},
        {.addr=0x14c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_029E) {
    const struct CPU_State initial_cpu = {.pc=0xf90a, .a=0xd0, .x=0x62, .y=0xf3, .sp=0xa6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf90a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf90b, .a=0xd1, .x=0x62, .y=0xf3, .sp=0xa6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf90a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf90a, .value=0xbc, .type=IO_READ},
        {.addr=0xf90b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_029F) {
    const struct CPU_State initial_cpu = {.pc=0xd597, .a=0x1a, .x=0xdc, .y=0xb2, .sp=0xd1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd597, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd598, .a=0x1b, .x=0xdc, .y=0xb2, .sp=0xd1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd597, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd597, .value=0xbc, .type=IO_READ},
        {.addr=0xd598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x68f0, .a=0x13, .x=0xf1, .y=0x05, .sp=0xfa, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x68f0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x68f1, .a=0x14, .x=0xf1, .y=0x05, .sp=0xfa, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x68f0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x68f0, .value=0xbc, .type=IO_READ},
        {.addr=0x68f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x6a15, .a=0x73, .x=0x1f, .y=0x19, .sp=0xa7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6a15, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6a16, .a=0x74, .x=0x1f, .y=0x19, .sp=0xa7, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6a15, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6a15, .value=0xbc, .type=IO_READ},
        {.addr=0x6a16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x0db8, .a=0x19, .x=0x13, .y=0x3e, .sp=0xf9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0db8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0db9, .a=0x1a, .x=0x13, .y=0x3e, .sp=0xf9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0db8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0db8, .value=0xbc, .type=IO_READ},
        {.addr=0x0db9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x96b6, .a=0x0b, .x=0x35, .y=0x4b, .sp=0x2e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x96b6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x96b7, .a=0x0c, .x=0x35, .y=0x4b, .sp=0x2e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x96b6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x96b6, .value=0xbc, .type=IO_READ},
        {.addr=0x96b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x77fc, .a=0x94, .x=0x29, .y=0x07, .sp=0xa5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x77fc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x77fd, .a=0x95, .x=0x29, .y=0x07, .sp=0xa5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x77fc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x77fc, .value=0xbc, .type=IO_READ},
        {.addr=0x77fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x4ec9, .a=0xea, .x=0x24, .y=0x35, .sp=0xe0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4eca, .a=0xeb, .x=0x24, .y=0x35, .sp=0xe0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4ec9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4ec9, .value=0xbc, .type=IO_READ},
        {.addr=0x4eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd2dd, .a=0xdd, .x=0x14, .y=0x5a, .sp=0x52, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd2dd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd2de, .a=0xde, .x=0x14, .y=0x5a, .sp=0x52, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd2dd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd2dd, .value=0xbc, .type=IO_READ},
        {.addr=0xd2de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x6493, .a=0xa3, .x=0xc0, .y=0x4e, .sp=0xfe, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x6493, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6494, .a=0xa4, .x=0xc0, .y=0x4e, .sp=0xfe, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6493, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6493, .value=0xbc, .type=IO_READ},
        {.addr=0x6494, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x4d79, .a=0xeb, .x=0xd7, .y=0xeb, .sp=0x15, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4d79, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4d7a, .a=0xec, .x=0xd7, .y=0xeb, .sp=0x15, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4d79, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4d79, .value=0xbc, .type=IO_READ},
        {.addr=0x4d7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x6751, .a=0x54, .x=0x63, .y=0x47, .sp=0xf4, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6751, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6752, .a=0x55, .x=0x63, .y=0x47, .sp=0xf4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6751, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6751, .value=0xbc, .type=IO_READ},
        {.addr=0x6752, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x8631, .a=0x01, .x=0x5b, .y=0x97, .sp=0x7d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8631, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8632, .a=0x02, .x=0x5b, .y=0x97, .sp=0x7d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8631, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8631, .value=0xbc, .type=IO_READ},
        {.addr=0x8632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x5195, .a=0x1d, .x=0x60, .y=0xb1, .sp=0xe4, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x5195, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5196, .a=0x1e, .x=0x60, .y=0xb1, .sp=0xe4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5195, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5195, .value=0xbc, .type=IO_READ},
        {.addr=0x5196, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xd3d8, .a=0xce, .x=0x4b, .y=0x90, .sp=0x52, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd3d9, .a=0xcf, .x=0x4b, .y=0x90, .sp=0x52, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd3d8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd3d8, .value=0xbc, .type=IO_READ},
        {.addr=0xd3d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xdf08, .a=0x2f, .x=0x6c, .y=0xfa, .sp=0xe5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdf08, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdf09, .a=0x30, .x=0x6c, .y=0xfa, .sp=0xe5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdf08, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdf08, .value=0xbc, .type=IO_READ},
        {.addr=0xdf09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xc7b9, .a=0x4f, .x=0x65, .y=0x65, .sp=0xc8, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc7ba, .a=0x50, .x=0x65, .y=0x65, .sp=0xc8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc7b9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc7b9, .value=0xbc, .type=IO_READ},
        {.addr=0xc7ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xbbe1, .a=0x8f, .x=0x7d, .y=0x81, .sp=0x44, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xbbe1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbbe2, .a=0x90, .x=0x7d, .y=0x81, .sp=0x44, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xbbe1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbbe1, .value=0xbc, .type=IO_READ},
        {.addr=0xbbe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x8ce6, .a=0x85, .x=0xcc, .y=0xa4, .sp=0xc8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8ce7, .a=0x86, .x=0xcc, .y=0xa4, .sp=0xc8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8ce6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8ce6, .value=0xbc, .type=IO_READ},
        {.addr=0x8ce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x7c52, .a=0x35, .x=0x3c, .y=0x17, .sp=0x92, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c52, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7c53, .a=0x36, .x=0x3c, .y=0x17, .sp=0x92, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7c52, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7c52, .value=0xbc, .type=IO_READ},
        {.addr=0x7c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x695a, .a=0xee, .x=0xf8, .y=0xa4, .sp=0xa2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x695a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x695b, .a=0xef, .x=0xf8, .y=0xa4, .sp=0xa2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x695a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x695a, .value=0xbc, .type=IO_READ},
        {.addr=0x695b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x6da1, .a=0x05, .x=0x0e, .y=0x9f, .sp=0x2d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6da1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6da2, .a=0x06, .x=0x0e, .y=0x9f, .sp=0x2d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6da1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6da1, .value=0xbc, .type=IO_READ},
        {.addr=0x6da2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdc73, .a=0xd9, .x=0xaa, .y=0xbb, .sp=0x9d, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xdc73, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdc74, .a=0xda, .x=0xaa, .y=0xbb, .sp=0x9d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xdc73, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdc73, .value=0xbc, .type=IO_READ},
        {.addr=0xdc74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x1f17, .a=0xe5, .x=0xcf, .y=0x44, .sp=0x96, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1f17, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1f18, .a=0xe6, .x=0xcf, .y=0x44, .sp=0x96, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1f17, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1f17, .value=0xbc, .type=IO_READ},
        {.addr=0x1f18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x6bc0, .a=0x74, .x=0xc9, .y=0x2c, .sp=0xc6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6bc1, .a=0x75, .x=0xc9, .y=0x2c, .sp=0xc6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6bc0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6bc0, .value=0xbc, .type=IO_READ},
        {.addr=0x6bc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x15ab, .a=0xad, .x=0x61, .y=0x1f, .sp=0x48, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x15ab, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x15ac, .a=0xae, .x=0x61, .y=0x1f, .sp=0x48, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x15ab, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x15ab, .value=0xbc, .type=IO_READ},
        {.addr=0x15ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x58a0, .a=0x3f, .x=0xd7, .y=0xf4, .sp=0x5e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x58a0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x58a1, .a=0x40, .x=0xd7, .y=0xf4, .sp=0x5e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x58a0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x58a0, .value=0xbc, .type=IO_READ},
        {.addr=0x58a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xa1dc, .a=0x89, .x=0xf6, .y=0xa1, .sp=0xfc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xa1dc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa1dd, .a=0x8a, .x=0xf6, .y=0xa1, .sp=0xfc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa1dc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa1dc, .value=0xbc, .type=IO_READ},
        {.addr=0xa1dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xbb88, .a=0x44, .x=0x89, .y=0x59, .sp=0xb5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xbb88, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbb89, .a=0x45, .x=0x89, .y=0x59, .sp=0xb5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xbb88, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbb88, .value=0xbc, .type=IO_READ},
        {.addr=0xbb89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x0c6c, .a=0x39, .x=0x76, .y=0x7c, .sp=0x1b, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0c6c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0c6d, .a=0x3a, .x=0x76, .y=0x7c, .sp=0x1b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0c6c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0c6c, .value=0xbc, .type=IO_READ},
        {.addr=0x0c6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xc2bf, .a=0xe0, .x=0x23, .y=0xe2, .sp=0xcc, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc2bf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc2c0, .a=0xe1, .x=0x23, .y=0xe2, .sp=0xcc, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc2bf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc2bf, .value=0xbc, .type=IO_READ},
        {.addr=0xc2c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xdcc9, .a=0xfd, .x=0xf3, .y=0x4e, .sp=0x1b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdcca, .a=0xfe, .x=0xf3, .y=0x4e, .sp=0x1b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xdcc9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdcc9, .value=0xbc, .type=IO_READ},
        {.addr=0xdcca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xae3a, .a=0xc7, .x=0x83, .y=0xa8, .sp=0xf7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xae3a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xae3b, .a=0xc8, .x=0x83, .y=0xa8, .sp=0xf7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xae3a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xae3a, .value=0xbc, .type=IO_READ},
        {.addr=0xae3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xbd57, .a=0x00, .x=0xc0, .y=0xc4, .sp=0x01, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xbd57, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbd58, .a=0x01, .x=0xc0, .y=0xc4, .sp=0x01, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbd57, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbd57, .value=0xbc, .type=IO_READ},
        {.addr=0xbd58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x465c, .a=0x06, .x=0x57, .y=0x15, .sp=0xea, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x465c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x465d, .a=0x07, .x=0x57, .y=0x15, .sp=0xea, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x465c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x465c, .value=0xbc, .type=IO_READ},
        {.addr=0x465d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x41db, .a=0x0f, .x=0x07, .y=0x47, .sp=0x15, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x41db, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x41dc, .a=0x10, .x=0x07, .y=0x47, .sp=0x15, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x41db, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x41db, .value=0xbc, .type=IO_READ},
        {.addr=0x41dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xcc6b, .a=0x88, .x=0x5f, .y=0x84, .sp=0x21, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcc6c, .a=0x89, .x=0x5f, .y=0x84, .sp=0x21, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xcc6b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcc6b, .value=0xbc, .type=IO_READ},
        {.addr=0xcc6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xfdc1, .a=0x0c, .x=0x70, .y=0x61, .sp=0xf6, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xfdc1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfdc2, .a=0x0d, .x=0x70, .y=0x61, .sp=0xf6, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfdc1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfdc1, .value=0xbc, .type=IO_READ},
        {.addr=0xfdc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x2ca1, .a=0x22, .x=0x7c, .y=0x31, .sp=0x94, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2ca2, .a=0x23, .x=0x7c, .y=0x31, .sp=0x94, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2ca1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2ca1, .value=0xbc, .type=IO_READ},
        {.addr=0x2ca2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x92af, .a=0x13, .x=0x27, .y=0x74, .sp=0xc4, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x92af, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x92b0, .a=0x14, .x=0x27, .y=0x74, .sp=0xc4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x92af, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x92af, .value=0xbc, .type=IO_READ},
        {.addr=0x92b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xfb67, .a=0x85, .x=0x2f, .y=0xdc, .sp=0x96, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xfb67, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfb68, .a=0x86, .x=0x2f, .y=0xdc, .sp=0x96, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfb67, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfb67, .value=0xbc, .type=IO_READ},
        {.addr=0xfb68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x73a8, .a=0x9b, .x=0x8d, .y=0xb8, .sp=0xf9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x73a8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x73a9, .a=0x9c, .x=0x8d, .y=0xb8, .sp=0xf9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x73a8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x73a8, .value=0xbc, .type=IO_READ},
        {.addr=0x73a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xa6b8, .a=0x32, .x=0x8f, .y=0xb5, .sp=0x91, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa6b9, .a=0x33, .x=0x8f, .y=0xb5, .sp=0x91, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa6b8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa6b8, .value=0xbc, .type=IO_READ},
        {.addr=0xa6b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x6854, .a=0x37, .x=0xc5, .y=0xb5, .sp=0x8b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6854, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6855, .a=0x38, .x=0xc5, .y=0xb5, .sp=0x8b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6854, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6854, .value=0xbc, .type=IO_READ},
        {.addr=0x6855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x021d, .a=0x8d, .x=0xa8, .y=0x47, .sp=0x85, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x021d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x021e, .a=0x8e, .x=0xa8, .y=0x47, .sp=0x85, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x021d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x021d, .value=0xbc, .type=IO_READ},
        {.addr=0x021e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x1c01, .a=0x4d, .x=0xd9, .y=0xa0, .sp=0xf0, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1c01, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1c02, .a=0x4e, .x=0xd9, .y=0xa0, .sp=0xf0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1c01, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1c01, .value=0xbc, .type=IO_READ},
        {.addr=0x1c02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x8171, .a=0xb2, .x=0xa2, .y=0x04, .sp=0x7c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8171, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8172, .a=0xb3, .x=0xa2, .y=0x04, .sp=0x7c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8171, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8171, .value=0xbc, .type=IO_READ},
        {.addr=0x8172, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x8f1b, .a=0x64, .x=0xd2, .y=0xd7, .sp=0x76, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8f1b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8f1c, .a=0x65, .x=0xd2, .y=0xd7, .sp=0x76, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8f1b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8f1b, .value=0xbc, .type=IO_READ},
        {.addr=0x8f1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x3d8a, .a=0xc5, .x=0xa0, .y=0x87, .sp=0xb8, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3d8b, .a=0xc6, .x=0xa0, .y=0x87, .sp=0xb8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3d8a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3d8a, .value=0xbc, .type=IO_READ},
        {.addr=0x3d8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x32d0, .a=0xa1, .x=0x27, .y=0x05, .sp=0xec, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x32d0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x32d1, .a=0xa2, .x=0x27, .y=0x05, .sp=0xec, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x32d0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x32d0, .value=0xbc, .type=IO_READ},
        {.addr=0x32d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x65c4, .a=0x80, .x=0xde, .y=0x25, .sp=0x7c, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x65c4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x65c5, .a=0x81, .x=0xde, .y=0x25, .sp=0x7c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x65c4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x65c4, .value=0xbc, .type=IO_READ},
        {.addr=0x65c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xc9a6, .a=0xa0, .x=0x05, .y=0xaf, .sp=0x5b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc9a6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc9a7, .a=0xa1, .x=0x05, .y=0xaf, .sp=0x5b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc9a6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc9a6, .value=0xbc, .type=IO_READ},
        {.addr=0xc9a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x884a, .a=0x70, .x=0x32, .y=0x4d, .sp=0xbb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x884a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x884b, .a=0x71, .x=0x32, .y=0x4d, .sp=0xbb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x884a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x884a, .value=0xbc, .type=IO_READ},
        {.addr=0x884b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xbb3c, .a=0xf8, .x=0xd1, .y=0xf3, .sp=0xbc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xbb3c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbb3d, .a=0xf9, .x=0xd1, .y=0xf3, .sp=0xbc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xbb3c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbb3c, .value=0xbc, .type=IO_READ},
        {.addr=0xbb3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x24c9, .a=0xe7, .x=0xb0, .y=0x17, .sp=0x04, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x24c9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x24ca, .a=0xe8, .x=0xb0, .y=0x17, .sp=0x04, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x24c9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x24c9, .value=0xbc, .type=IO_READ},
        {.addr=0x24ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x90fb, .a=0xb3, .x=0x45, .y=0xee, .sp=0x69, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x90fb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x90fc, .a=0xb4, .x=0x45, .y=0xee, .sp=0x69, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x90fb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x90fb, .value=0xbc, .type=IO_READ},
        {.addr=0x90fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x225e, .a=0xf3, .x=0xdc, .y=0x23, .sp=0x9e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x225e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x225f, .a=0xf4, .x=0xdc, .y=0x23, .sp=0x9e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x225e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x225e, .value=0xbc, .type=IO_READ},
        {.addr=0x225f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x297f, .a=0x0b, .x=0xac, .y=0x0d, .sp=0x44, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x297f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2980, .a=0x0c, .x=0xac, .y=0x0d, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x297f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x297f, .value=0xbc, .type=IO_READ},
        {.addr=0x2980, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xcdeb, .a=0xc7, .x=0xd9, .y=0xa0, .sp=0xd7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xcdeb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcdec, .a=0xc8, .x=0xd9, .y=0xa0, .sp=0xd7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xcdeb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcdeb, .value=0xbc, .type=IO_READ},
        {.addr=0xcdec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x595b, .a=0x64, .x=0xaa, .y=0x35, .sp=0x57, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x595b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x595c, .a=0x65, .x=0xaa, .y=0x35, .sp=0x57, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x595b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x595b, .value=0xbc, .type=IO_READ},
        {.addr=0x595c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xcdc7, .a=0xf2, .x=0x9a, .y=0x99, .sp=0xc5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xcdc7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcdc8, .a=0xf3, .x=0x9a, .y=0x99, .sp=0xc5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcdc7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcdc7, .value=0xbc, .type=IO_READ},
        {.addr=0xcdc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xf125, .a=0xc6, .x=0x2b, .y=0x4e, .sp=0x18, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xf125, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf126, .a=0xc7, .x=0x2b, .y=0x4e, .sp=0x18, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xf125, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf125, .value=0xbc, .type=IO_READ},
        {.addr=0xf126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x86f9, .a=0x0e, .x=0xf6, .y=0x31, .sp=0xd2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x86f9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x86fa, .a=0x0f, .x=0xf6, .y=0x31, .sp=0xd2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x86f9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x86f9, .value=0xbc, .type=IO_READ},
        {.addr=0x86fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x3715, .a=0x33, .x=0x57, .y=0x56, .sp=0xfa, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3715, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3716, .a=0x34, .x=0x57, .y=0x56, .sp=0xfa, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3715, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3715, .value=0xbc, .type=IO_READ},
        {.addr=0x3716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xb652, .a=0x85, .x=0xbf, .y=0x19, .sp=0x09, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb652, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb653, .a=0x86, .x=0xbf, .y=0x19, .sp=0x09, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb652, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb652, .value=0xbc, .type=IO_READ},
        {.addr=0xb653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x7391, .a=0xcc, .x=0xba, .y=0x28, .sp=0xbf, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7391, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7392, .a=0xcd, .x=0xba, .y=0x28, .sp=0xbf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7391, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7391, .value=0xbc, .type=IO_READ},
        {.addr=0x7392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x2430, .a=0xd9, .x=0x41, .y=0xf1, .sp=0xe0, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2430, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2431, .a=0xda, .x=0x41, .y=0xf1, .sp=0xe0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2430, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2430, .value=0xbc, .type=IO_READ},
        {.addr=0x2431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x2a80, .a=0xb6, .x=0x1b, .y=0xee, .sp=0x09, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2a80, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2a81, .a=0xb7, .x=0x1b, .y=0xee, .sp=0x09, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2a80, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2a80, .value=0xbc, .type=IO_READ},
        {.addr=0x2a81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x6352, .a=0x21, .x=0x08, .y=0x57, .sp=0xf5, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x6352, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6353, .a=0x22, .x=0x08, .y=0x57, .sp=0xf5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6352, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6352, .value=0xbc, .type=IO_READ},
        {.addr=0x6353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x7f5f, .a=0x91, .x=0x46, .y=0xd5, .sp=0xe2, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7f60, .a=0x92, .x=0x46, .y=0xd5, .sp=0xe2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7f5f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7f5f, .value=0xbc, .type=IO_READ},
        {.addr=0x7f60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x8cf8, .a=0x88, .x=0x2b, .y=0x7b, .sp=0x28, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8cf8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8cf9, .a=0x89, .x=0x2b, .y=0x7b, .sp=0x28, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8cf8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8cf8, .value=0xbc, .type=IO_READ},
        {.addr=0x8cf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xa665, .a=0x42, .x=0xa6, .y=0xb6, .sp=0xc2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa665, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa666, .a=0x43, .x=0xa6, .y=0xb6, .sp=0xc2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa665, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa665, .value=0xbc, .type=IO_READ},
        {.addr=0xa666, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x3a59, .a=0x2b, .x=0xdd, .y=0x23, .sp=0x2c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3a59, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3a5a, .a=0x2c, .x=0xdd, .y=0x23, .sp=0x2c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3a59, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3a59, .value=0xbc, .type=IO_READ},
        {.addr=0x3a5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x400d, .a=0x18, .x=0x0c, .y=0x65, .sp=0x8e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x400d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x400e, .a=0x19, .x=0x0c, .y=0x65, .sp=0x8e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x400d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x400d, .value=0xbc, .type=IO_READ},
        {.addr=0x400e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x007c, .a=0xfe, .x=0x31, .y=0xb3, .sp=0xcd, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x007d, .a=0xff, .x=0x31, .y=0xb3, .sp=0xcd, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x007c, .value=0xbc, .type=IO_READ},
        {.addr=0x007d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x9699, .a=0xb7, .x=0xb9, .y=0xf6, .sp=0xf8, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9699, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x969a, .a=0xb8, .x=0xb9, .y=0xf6, .sp=0xf8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9699, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9699, .value=0xbc, .type=IO_READ},
        {.addr=0x969a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x816e, .a=0x05, .x=0x3d, .y=0xdf, .sp=0xcf, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x816e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x816f, .a=0x06, .x=0x3d, .y=0xdf, .sp=0xcf, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x816e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x816e, .value=0xbc, .type=IO_READ},
        {.addr=0x816f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x1ba8, .a=0x05, .x=0xdb, .y=0x16, .sp=0x23, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1ba8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1ba9, .a=0x06, .x=0xdb, .y=0x16, .sp=0x23, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1ba8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1ba8, .value=0xbc, .type=IO_READ},
        {.addr=0x1ba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x1547, .a=0x5f, .x=0x7c, .y=0x02, .sp=0x91, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1547, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1548, .a=0x60, .x=0x7c, .y=0x02, .sp=0x91, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x1547, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1547, .value=0xbc, .type=IO_READ},
        {.addr=0x1548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xe0ef, .a=0xd6, .x=0x69, .y=0x37, .sp=0xf5, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ef, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe0f0, .a=0xd7, .x=0x69, .y=0x37, .sp=0xf5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe0ef, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe0ef, .value=0xbc, .type=IO_READ},
        {.addr=0xe0f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x4dea, .a=0x30, .x=0x2f, .y=0xb1, .sp=0x6b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4dea, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4deb, .a=0x31, .x=0x2f, .y=0xb1, .sp=0x6b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4dea, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4dea, .value=0xbc, .type=IO_READ},
        {.addr=0x4deb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xc3cf, .a=0x7c, .x=0xed, .y=0x53, .sp=0x8c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc3cf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc3d0, .a=0x7d, .x=0xed, .y=0x53, .sp=0x8c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc3cf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc3cf, .value=0xbc, .type=IO_READ},
        {.addr=0xc3d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xeb10, .a=0x63, .x=0x96, .y=0x79, .sp=0x93, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xeb10, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeb11, .a=0x64, .x=0x96, .y=0x79, .sp=0x93, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xeb10, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeb10, .value=0xbc, .type=IO_READ},
        {.addr=0xeb11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x3a55, .a=0x33, .x=0xbb, .y=0x54, .sp=0xc4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3a55, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3a56, .a=0x34, .x=0xbb, .y=0x54, .sp=0xc4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3a55, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3a55, .value=0xbc, .type=IO_READ},
        {.addr=0x3a56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xb1df, .a=0x31, .x=0xa9, .y=0x0e, .sp=0x93, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xb1df, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb1e0, .a=0x32, .x=0xa9, .y=0x0e, .sp=0x93, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb1df, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb1df, .value=0xbc, .type=IO_READ},
        {.addr=0xb1e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x13e9, .a=0xa4, .x=0x66, .y=0x4f, .sp=0xdf, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x13e9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x13ea, .a=0xa5, .x=0x66, .y=0x4f, .sp=0xdf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x13e9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x13e9, .value=0xbc, .type=IO_READ},
        {.addr=0x13ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x1d01, .a=0x89, .x=0x3b, .y=0x76, .sp=0xae, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1d01, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1d02, .a=0x8a, .x=0x3b, .y=0x76, .sp=0xae, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x1d01, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1d01, .value=0xbc, .type=IO_READ},
        {.addr=0x1d02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x100b, .a=0x04, .x=0xa0, .y=0x8e, .sp=0x7a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x100b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x100c, .a=0x05, .x=0xa0, .y=0x8e, .sp=0x7a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x100b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x100b, .value=0xbc, .type=IO_READ},
        {.addr=0x100c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xd71c, .a=0x05, .x=0x74, .y=0xc1, .sp=0xd4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xd71c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd71d, .a=0x06, .x=0x74, .y=0xc1, .sp=0xd4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd71c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd71c, .value=0xbc, .type=IO_READ},
        {.addr=0xd71d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xf436, .a=0xc8, .x=0xcb, .y=0x01, .sp=0x0b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf436, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf437, .a=0xc9, .x=0xcb, .y=0x01, .sp=0x0b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf436, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf436, .value=0xbc, .type=IO_READ},
        {.addr=0xf437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x9635, .a=0x76, .x=0xd8, .y=0xcb, .sp=0x6a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x9635, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9636, .a=0x77, .x=0xd8, .y=0xcb, .sp=0x6a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9635, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9635, .value=0xbc, .type=IO_READ},
        {.addr=0x9636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xcde2, .a=0x06, .x=0x53, .y=0xcf, .sp=0xdd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xcde2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcde3, .a=0x07, .x=0x53, .y=0xcf, .sp=0xdd, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xcde2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcde2, .value=0xbc, .type=IO_READ},
        {.addr=0xcde3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x9629, .a=0xe0, .x=0x91, .y=0x54, .sp=0xc3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x9629, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x962a, .a=0xe1, .x=0x91, .y=0x54, .sp=0xc3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x9629, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9629, .value=0xbc, .type=IO_READ},
        {.addr=0x962a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0xb4, .x=0x6e, .y=0x69, .sp=0xb3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7a67, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7a68, .a=0xb5, .x=0x6e, .y=0x69, .sp=0xb3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7a67, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0xbc, .type=IO_READ},
        {.addr=0x7a68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x70b6, .a=0xf5, .x=0x94, .y=0x7b, .sp=0xdb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x70b6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x70b7, .a=0xf6, .x=0x94, .y=0x7b, .sp=0xdb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x70b6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x70b6, .value=0xbc, .type=IO_READ},
        {.addr=0x70b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xd076, .a=0x08, .x=0xaf, .y=0x11, .sp=0xd6, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd076, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd077, .a=0x09, .x=0xaf, .y=0x11, .sp=0xd6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd076, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd076, .value=0xbc, .type=IO_READ},
        {.addr=0xd077, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x9ede, .a=0x1a, .x=0xd1, .y=0x1a, .sp=0x3f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9ede, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9edf, .a=0x1b, .x=0xd1, .y=0x1a, .sp=0x3f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9ede, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9ede, .value=0xbc, .type=IO_READ},
        {.addr=0x9edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xdefc, .a=0xa6, .x=0xeb, .y=0x46, .sp=0x87, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xdefc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdefd, .a=0xa7, .x=0xeb, .y=0x46, .sp=0x87, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdefc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdefc, .value=0xbc, .type=IO_READ},
        {.addr=0xdefd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0300) {
    const struct CPU_State initial_cpu = {.pc=0x6984, .a=0xca, .x=0xcb, .y=0xdc, .sp=0x19, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x6984, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6985, .a=0xcb, .x=0xcb, .y=0xdc, .sp=0x19, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6984, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6984, .value=0xbc, .type=IO_READ},
        {.addr=0x6985, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0301) {
    const struct CPU_State initial_cpu = {.pc=0xfede, .a=0xa7, .x=0x1f, .y=0x0f, .sp=0xef, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xfede, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfedf, .a=0xa8, .x=0x1f, .y=0x0f, .sp=0xef, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xfede, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfede, .value=0xbc, .type=IO_READ},
        {.addr=0xfedf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0302) {
    const struct CPU_State initial_cpu = {.pc=0x9e79, .a=0x4e, .x=0x41, .y=0xac, .sp=0xa0, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e79, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9e7a, .a=0x4f, .x=0x41, .y=0xac, .sp=0xa0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9e79, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9e79, .value=0xbc, .type=IO_READ},
        {.addr=0x9e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0303) {
    const struct CPU_State initial_cpu = {.pc=0x51d7, .a=0xc2, .x=0xd3, .y=0x61, .sp=0x5b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x51d7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x51d8, .a=0xc3, .x=0xd3, .y=0x61, .sp=0x5b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x51d7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x51d7, .value=0xbc, .type=IO_READ},
        {.addr=0x51d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0304) {
    const struct CPU_State initial_cpu = {.pc=0xbfbc, .a=0xfa, .x=0xc1, .y=0x41, .sp=0x97, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbfbd, .a=0xfb, .x=0xc1, .y=0x41, .sp=0x97, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xbfbc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbfbc, .value=0xbc, .type=IO_READ},
        {.addr=0xbfbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0305) {
    const struct CPU_State initial_cpu = {.pc=0x1ef4, .a=0xa1, .x=0x84, .y=0x16, .sp=0xd9, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1ef5, .a=0xa2, .x=0x84, .y=0x16, .sp=0xd9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1ef4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1ef4, .value=0xbc, .type=IO_READ},
        {.addr=0x1ef5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdb41, .a=0x27, .x=0x0d, .y=0xc4, .sp=0x64, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb41, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdb42, .a=0x28, .x=0x0d, .y=0xc4, .sp=0x64, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdb41, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdb41, .value=0xbc, .type=IO_READ},
        {.addr=0xdb42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0307) {
    const struct CPU_State initial_cpu = {.pc=0xd2ab, .a=0x91, .x=0xae, .y=0xf7, .sp=0x6b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ab, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd2ac, .a=0x92, .x=0xae, .y=0xf7, .sp=0x6b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd2ab, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd2ab, .value=0xbc, .type=IO_READ},
        {.addr=0xd2ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0308) {
    const struct CPU_State initial_cpu = {.pc=0x5099, .a=0x08, .x=0x01, .y=0xc6, .sp=0x0d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5099, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x509a, .a=0x09, .x=0x01, .y=0xc6, .sp=0x0d, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5099, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5099, .value=0xbc, .type=IO_READ},
        {.addr=0x509a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0309) {
    const struct CPU_State initial_cpu = {.pc=0x023c, .a=0xb8, .x=0x96, .y=0x7e, .sp=0x64, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x023c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x023d, .a=0xb9, .x=0x96, .y=0x7e, .sp=0x64, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x023c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x023c, .value=0xbc, .type=IO_READ},
        {.addr=0x023d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_030A) {
    const struct CPU_State initial_cpu = {.pc=0x3410, .a=0xe6, .x=0xda, .y=0xf7, .sp=0x3e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3410, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3411, .a=0xe7, .x=0xda, .y=0xf7, .sp=0x3e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3410, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3410, .value=0xbc, .type=IO_READ},
        {.addr=0x3411, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_030B) {
    const struct CPU_State initial_cpu = {.pc=0x1fb6, .a=0x24, .x=0xd4, .y=0xa2, .sp=0x62, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1fb6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1fb7, .a=0x25, .x=0xd4, .y=0xa2, .sp=0x62, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1fb6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1fb6, .value=0xbc, .type=IO_READ},
        {.addr=0x1fb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd9c5, .a=0x55, .x=0xda, .y=0x50, .sp=0xa0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd9c6, .a=0x56, .x=0xda, .y=0x50, .sp=0xa0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd9c5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd9c5, .value=0xbc, .type=IO_READ},
        {.addr=0xd9c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_030D) {
    const struct CPU_State initial_cpu = {.pc=0xfd74, .a=0xd1, .x=0x72, .y=0x5f, .sp=0x7a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xfd74, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfd75, .a=0xd2, .x=0x72, .y=0x5f, .sp=0x7a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfd74, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfd74, .value=0xbc, .type=IO_READ},
        {.addr=0xfd75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_030E) {
    const struct CPU_State initial_cpu = {.pc=0x91a6, .a=0xc3, .x=0x02, .y=0x38, .sp=0xb4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x91a6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x91a7, .a=0xc4, .x=0x02, .y=0x38, .sp=0xb4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x91a6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x91a6, .value=0xbc, .type=IO_READ},
        {.addr=0x91a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_030F) {
    const struct CPU_State initial_cpu = {.pc=0x6948, .a=0x03, .x=0xd2, .y=0x48, .sp=0xca, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x6948, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6949, .a=0x04, .x=0xd2, .y=0x48, .sp=0xca, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6948, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6948, .value=0xbc, .type=IO_READ},
        {.addr=0x6949, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0310) {
    const struct CPU_State initial_cpu = {.pc=0xffdd, .a=0x89, .x=0x3a, .y=0xb6, .sp=0x2b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xffdd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xffde, .a=0x8a, .x=0x3a, .y=0xb6, .sp=0x2b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xffdd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xffdd, .value=0xbc, .type=IO_READ},
        {.addr=0xffde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0311) {
    const struct CPU_State initial_cpu = {.pc=0x9dad, .a=0x68, .x=0xea, .y=0xc5, .sp=0x3b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x9dad, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9dae, .a=0x69, .x=0xea, .y=0xc5, .sp=0x3b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9dad, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9dad, .value=0xbc, .type=IO_READ},
        {.addr=0x9dae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0312) {
    const struct CPU_State initial_cpu = {.pc=0x156b, .a=0x3b, .x=0x52, .y=0x40, .sp=0x5a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x156b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x156c, .a=0x3c, .x=0x52, .y=0x40, .sp=0x5a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x156b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x156b, .value=0xbc, .type=IO_READ},
        {.addr=0x156c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0313) {
    const struct CPU_State initial_cpu = {.pc=0x60b6, .a=0xeb, .x=0x5c, .y=0xb9, .sp=0x0b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x60b6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x60b7, .a=0xec, .x=0x5c, .y=0xb9, .sp=0x0b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x60b6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x60b6, .value=0xbc, .type=IO_READ},
        {.addr=0x60b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0314) {
    const struct CPU_State initial_cpu = {.pc=0xf0bd, .a=0xc0, .x=0xd9, .y=0xd0, .sp=0x3b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xf0bd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf0be, .a=0xc1, .x=0xd9, .y=0xd0, .sp=0x3b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf0bd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf0bd, .value=0xbc, .type=IO_READ},
        {.addr=0xf0be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0315) {
    const struct CPU_State initial_cpu = {.pc=0xe403, .a=0x87, .x=0xb8, .y=0x5c, .sp=0x6e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe403, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe404, .a=0x88, .x=0xb8, .y=0x5c, .sp=0x6e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe403, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe403, .value=0xbc, .type=IO_READ},
        {.addr=0xe404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0316) {
    const struct CPU_State initial_cpu = {.pc=0x04f3, .a=0xf8, .x=0x23, .y=0x9c, .sp=0x8f, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x04f3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x04f4, .a=0xf9, .x=0x23, .y=0x9c, .sp=0x8f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x04f3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x04f3, .value=0xbc, .type=IO_READ},
        {.addr=0x04f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0317) {
    const struct CPU_State initial_cpu = {.pc=0x8699, .a=0xab, .x=0x9e, .y=0x08, .sp=0xc1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x8699, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x869a, .a=0xac, .x=0x9e, .y=0x08, .sp=0xc1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8699, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8699, .value=0xbc, .type=IO_READ},
        {.addr=0x869a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0318) {
    const struct CPU_State initial_cpu = {.pc=0x4c20, .a=0xa3, .x=0x1a, .y=0x4e, .sp=0xbc, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x4c20, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4c21, .a=0xa4, .x=0x1a, .y=0x4e, .sp=0xbc, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4c20, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4c20, .value=0xbc, .type=IO_READ},
        {.addr=0x4c21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0319) {
    const struct CPU_State initial_cpu = {.pc=0xe38b, .a=0x29, .x=0xf4, .y=0xad, .sp=0x50, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe38b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe38c, .a=0x2a, .x=0xf4, .y=0xad, .sp=0x50, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe38b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe38b, .value=0xbc, .type=IO_READ},
        {.addr=0xe38c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_031A) {
    const struct CPU_State initial_cpu = {.pc=0x23bb, .a=0x7c, .x=0x8d, .y=0xba, .sp=0x15, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x23bb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x23bc, .a=0x7d, .x=0x8d, .y=0xba, .sp=0x15, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x23bb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x23bb, .value=0xbc, .type=IO_READ},
        {.addr=0x23bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_031B) {
    const struct CPU_State initial_cpu = {.pc=0x09f7, .a=0x87, .x=0xa3, .y=0xe0, .sp=0x52, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x09f7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x09f8, .a=0x88, .x=0xa3, .y=0xe0, .sp=0x52, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x09f7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x09f7, .value=0xbc, .type=IO_READ},
        {.addr=0x09f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_031C) {
    const struct CPU_State initial_cpu = {.pc=0x231e, .a=0xc2, .x=0x12, .y=0x2c, .sp=0x99, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x231e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x231f, .a=0xc3, .x=0x12, .y=0x2c, .sp=0x99, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x231e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x231e, .value=0xbc, .type=IO_READ},
        {.addr=0x231f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_031D) {
    const struct CPU_State initial_cpu = {.pc=0x7a46, .a=0x74, .x=0xf9, .y=0x9d, .sp=0x64, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7a46, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7a47, .a=0x75, .x=0xf9, .y=0x9d, .sp=0x64, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7a46, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7a46, .value=0xbc, .type=IO_READ},
        {.addr=0x7a47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_031E) {
    const struct CPU_State initial_cpu = {.pc=0x3d3c, .a=0x08, .x=0xfa, .y=0xc3, .sp=0xbb, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x3d3c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3d3d, .a=0x09, .x=0xfa, .y=0xc3, .sp=0xbb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3d3c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3d3c, .value=0xbc, .type=IO_READ},
        {.addr=0x3d3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_031F) {
    const struct CPU_State initial_cpu = {.pc=0x5282, .a=0x09, .x=0x6e, .y=0x66, .sp=0x79, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5282, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5283, .a=0x0a, .x=0x6e, .y=0x66, .sp=0x79, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5282, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5282, .value=0xbc, .type=IO_READ},
        {.addr=0x5283, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0320) {
    const struct CPU_State initial_cpu = {.pc=0x0ccc, .a=0xa5, .x=0x61, .y=0x4d, .sp=0x1a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0ccc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0ccd, .a=0xa6, .x=0x61, .y=0x4d, .sp=0x1a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0ccc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0ccc, .value=0xbc, .type=IO_READ},
        {.addr=0x0ccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0321) {
    const struct CPU_State initial_cpu = {.pc=0x60b0, .a=0x50, .x=0x5f, .y=0x6c, .sp=0x4e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x60b0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x60b1, .a=0x51, .x=0x5f, .y=0x6c, .sp=0x4e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x60b0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x60b0, .value=0xbc, .type=IO_READ},
        {.addr=0x60b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0322) {
    const struct CPU_State initial_cpu = {.pc=0xd2a1, .a=0xfa, .x=0xc4, .y=0x64, .sp=0xd9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd2a2, .a=0xfb, .x=0xc4, .y=0x64, .sp=0xd9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd2a1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd2a1, .value=0xbc, .type=IO_READ},
        {.addr=0xd2a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0323) {
    const struct CPU_State initial_cpu = {.pc=0x99eb, .a=0x25, .x=0x93, .y=0x63, .sp=0x32, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x99eb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x99ec, .a=0x26, .x=0x93, .y=0x63, .sp=0x32, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x99eb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x99eb, .value=0xbc, .type=IO_READ},
        {.addr=0x99ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0324) {
    const struct CPU_State initial_cpu = {.pc=0xba11, .a=0x5d, .x=0x42, .y=0x9f, .sp=0x1e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xba11, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xba12, .a=0x5e, .x=0x42, .y=0x9f, .sp=0x1e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xba11, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xba11, .value=0xbc, .type=IO_READ},
        {.addr=0xba12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0325) {
    const struct CPU_State initial_cpu = {.pc=0x783d, .a=0xf5, .x=0x13, .y=0x46, .sp=0x17, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x783d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x783e, .a=0xf6, .x=0x13, .y=0x46, .sp=0x17, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x783d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x783d, .value=0xbc, .type=IO_READ},
        {.addr=0x783e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0326) {
    const struct CPU_State initial_cpu = {.pc=0x425f, .a=0xb0, .x=0xa6, .y=0x38, .sp=0x9b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x425f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4260, .a=0xb1, .x=0xa6, .y=0x38, .sp=0x9b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x425f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x425f, .value=0xbc, .type=IO_READ},
        {.addr=0x4260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0327) {
    const struct CPU_State initial_cpu = {.pc=0x0ed8, .a=0x1a, .x=0xb5, .y=0x70, .sp=0x40, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0ed9, .a=0x1b, .x=0xb5, .y=0x70, .sp=0x40, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0ed8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0ed8, .value=0xbc, .type=IO_READ},
        {.addr=0x0ed9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0328) {
    const struct CPU_State initial_cpu = {.pc=0x3581, .a=0xab, .x=0xfd, .y=0x88, .sp=0x32, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x3581, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3582, .a=0xac, .x=0xfd, .y=0x88, .sp=0x32, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3581, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3581, .value=0xbc, .type=IO_READ},
        {.addr=0x3582, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0329) {
    const struct CPU_State initial_cpu = {.pc=0xe115, .a=0x3b, .x=0x05, .y=0x31, .sp=0x63, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe115, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe116, .a=0x3c, .x=0x05, .y=0x31, .sp=0x63, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe115, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe115, .value=0xbc, .type=IO_READ},
        {.addr=0xe116, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_032A) {
    const struct CPU_State initial_cpu = {.pc=0xbade, .a=0x25, .x=0xf5, .y=0xb5, .sp=0x76, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xbade, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbadf, .a=0x26, .x=0xf5, .y=0xb5, .sp=0x76, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbade, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbade, .value=0xbc, .type=IO_READ},
        {.addr=0xbadf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_032B) {
    const struct CPU_State initial_cpu = {.pc=0x3832, .a=0x6a, .x=0x6a, .y=0xf5, .sp=0x80, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3832, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3833, .a=0x6b, .x=0x6a, .y=0xf5, .sp=0x80, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3832, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3832, .value=0xbc, .type=IO_READ},
        {.addr=0x3833, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_032C) {
    const struct CPU_State initial_cpu = {.pc=0x9986, .a=0xea, .x=0xbd, .y=0x92, .sp=0xa1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9986, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9987, .a=0xeb, .x=0xbd, .y=0x92, .sp=0xa1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9986, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9986, .value=0xbc, .type=IO_READ},
        {.addr=0x9987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_032D) {
    const struct CPU_State initial_cpu = {.pc=0xe38e, .a=0xc5, .x=0x30, .y=0x4a, .sp=0x84, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe38e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe38f, .a=0xc6, .x=0x30, .y=0x4a, .sp=0x84, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe38e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe38e, .value=0xbc, .type=IO_READ},
        {.addr=0xe38f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_032E) {
    const struct CPU_State initial_cpu = {.pc=0x689e, .a=0xb3, .x=0x11, .y=0xf8, .sp=0x6d, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x689e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x689f, .a=0xb4, .x=0x11, .y=0xf8, .sp=0x6d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x689e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x689e, .value=0xbc, .type=IO_READ},
        {.addr=0x689f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_032F) {
    const struct CPU_State initial_cpu = {.pc=0x9260, .a=0x37, .x=0xe3, .y=0x2c, .sp=0x1c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x9260, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9261, .a=0x38, .x=0xe3, .y=0x2c, .sp=0x1c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9260, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9260, .value=0xbc, .type=IO_READ},
        {.addr=0x9261, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0330) {
    const struct CPU_State initial_cpu = {.pc=0x7b05, .a=0xf6, .x=0xb3, .y=0x78, .sp=0xbf, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7b05, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7b06, .a=0xf7, .x=0xb3, .y=0x78, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7b05, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7b05, .value=0xbc, .type=IO_READ},
        {.addr=0x7b06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0331) {
    const struct CPU_State initial_cpu = {.pc=0x37d6, .a=0xff, .x=0xe4, .y=0x27, .sp=0x04, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x37d6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x37d7, .a=0x00, .x=0xe4, .y=0x27, .sp=0x04, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x37d6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x37d6, .value=0xbc, .type=IO_READ},
        {.addr=0x37d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0332) {
    const struct CPU_State initial_cpu = {.pc=0xe50a, .a=0xa7, .x=0x6b, .y=0xf0, .sp=0x0b, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xe50a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe50b, .a=0xa8, .x=0x6b, .y=0xf0, .sp=0x0b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe50a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe50a, .value=0xbc, .type=IO_READ},
        {.addr=0xe50b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0333) {
    const struct CPU_State initial_cpu = {.pc=0xf7b4, .a=0xc2, .x=0x3e, .y=0xfd, .sp=0x0e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xf7b4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf7b5, .a=0xc3, .x=0x3e, .y=0xfd, .sp=0x0e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf7b4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf7b4, .value=0xbc, .type=IO_READ},
        {.addr=0xf7b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0334) {
    const struct CPU_State initial_cpu = {.pc=0xb890, .a=0xd4, .x=0x48, .y=0xd4, .sp=0x38, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb890, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb891, .a=0xd5, .x=0x48, .y=0xd4, .sp=0x38, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb890, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb890, .value=0xbc, .type=IO_READ},
        {.addr=0xb891, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0335) {
    const struct CPU_State initial_cpu = {.pc=0xcb26, .a=0x0f, .x=0x79, .y=0x58, .sp=0x0e, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xcb26, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcb27, .a=0x10, .x=0x79, .y=0x58, .sp=0x0e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xcb26, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcb26, .value=0xbc, .type=IO_READ},
        {.addr=0xcb27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0336) {
    const struct CPU_State initial_cpu = {.pc=0xf44a, .a=0xee, .x=0x88, .y=0x7a, .sp=0xd6, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xf44a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf44b, .a=0xef, .x=0x88, .y=0x7a, .sp=0xd6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf44a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf44a, .value=0xbc, .type=IO_READ},
        {.addr=0xf44b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0337) {
    const struct CPU_State initial_cpu = {.pc=0x6f5d, .a=0xe4, .x=0x7c, .y=0x59, .sp=0x64, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6f5d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6f5e, .a=0xe5, .x=0x7c, .y=0x59, .sp=0x64, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6f5d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6f5d, .value=0xbc, .type=IO_READ},
        {.addr=0x6f5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4d24, .a=0x72, .x=0x40, .y=0xa1, .sp=0x54, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d24, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4d25, .a=0x73, .x=0x40, .y=0xa1, .sp=0x54, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4d24, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4d24, .value=0xbc, .type=IO_READ},
        {.addr=0x4d25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0339) {
    const struct CPU_State initial_cpu = {.pc=0x9e03, .a=0x22, .x=0x2a, .y=0x2f, .sp=0xc9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x9e03, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9e04, .a=0x23, .x=0x2a, .y=0x2f, .sp=0xc9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9e03, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9e03, .value=0xbc, .type=IO_READ},
        {.addr=0x9e04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_033A) {
    const struct CPU_State initial_cpu = {.pc=0xab9c, .a=0x8a, .x=0x10, .y=0x01, .sp=0x97, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xab9c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xab9d, .a=0x8b, .x=0x10, .y=0x01, .sp=0x97, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xab9c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xab9c, .value=0xbc, .type=IO_READ},
        {.addr=0xab9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_033B) {
    const struct CPU_State initial_cpu = {.pc=0x98dd, .a=0x84, .x=0x75, .y=0xdb, .sp=0xc8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x98dd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x98de, .a=0x85, .x=0x75, .y=0xdb, .sp=0xc8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x98dd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x98dd, .value=0xbc, .type=IO_READ},
        {.addr=0x98de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_033C) {
    const struct CPU_State initial_cpu = {.pc=0x4b0e, .a=0x08, .x=0x60, .y=0x32, .sp=0x72, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4b0f, .a=0x09, .x=0x60, .y=0x32, .sp=0x72, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4b0e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4b0e, .value=0xbc, .type=IO_READ},
        {.addr=0x4b0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_033D) {
    const struct CPU_State initial_cpu = {.pc=0x0491, .a=0x0f, .x=0xd5, .y=0x94, .sp=0x2d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0491, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0492, .a=0x10, .x=0xd5, .y=0x94, .sp=0x2d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0491, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0491, .value=0xbc, .type=IO_READ},
        {.addr=0x0492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_033E) {
    const struct CPU_State initial_cpu = {.pc=0xabf5, .a=0xf2, .x=0x31, .y=0x47, .sp=0x88, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xabf5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xabf6, .a=0xf3, .x=0x31, .y=0x47, .sp=0x88, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xabf5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xabf5, .value=0xbc, .type=IO_READ},
        {.addr=0xabf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_033F) {
    const struct CPU_State initial_cpu = {.pc=0x4ca2, .a=0xf9, .x=0xa2, .y=0xf2, .sp=0xd0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4ca3, .a=0xfa, .x=0xa2, .y=0xf2, .sp=0xd0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4ca2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4ca2, .value=0xbc, .type=IO_READ},
        {.addr=0x4ca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0340) {
    const struct CPU_State initial_cpu = {.pc=0x352c, .a=0xd1, .x=0x88, .y=0x36, .sp=0x41, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x352c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x352d, .a=0xd2, .x=0x88, .y=0x36, .sp=0x41, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x352c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x352c, .value=0xbc, .type=IO_READ},
        {.addr=0x352d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0341) {
    const struct CPU_State initial_cpu = {.pc=0x7021, .a=0x0b, .x=0x2f, .y=0x40, .sp=0xe9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x7021, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7022, .a=0x0c, .x=0x2f, .y=0x40, .sp=0xe9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7021, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7021, .value=0xbc, .type=IO_READ},
        {.addr=0x7022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0342) {
    const struct CPU_State initial_cpu = {.pc=0x46dd, .a=0xe8, .x=0xd6, .y=0xf6, .sp=0x40, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x46dd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x46de, .a=0xe9, .x=0xd6, .y=0xf6, .sp=0x40, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x46dd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x46dd, .value=0xbc, .type=IO_READ},
        {.addr=0x46de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0343) {
    const struct CPU_State initial_cpu = {.pc=0xf4d9, .a=0x35, .x=0xa0, .y=0xa4, .sp=0x01, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf4da, .a=0x36, .x=0xa0, .y=0xa4, .sp=0x01, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf4d9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf4d9, .value=0xbc, .type=IO_READ},
        {.addr=0xf4da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0344) {
    const struct CPU_State initial_cpu = {.pc=0x8c9e, .a=0x8f, .x=0x3b, .y=0xe2, .sp=0x0f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8c9f, .a=0x90, .x=0x3b, .y=0xe2, .sp=0x0f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8c9e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8c9e, .value=0xbc, .type=IO_READ},
        {.addr=0x8c9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0345) {
    const struct CPU_State initial_cpu = {.pc=0xdbcc, .a=0x5e, .x=0x7a, .y=0xbe, .sp=0x20, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdbcc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdbcd, .a=0x5f, .x=0x7a, .y=0xbe, .sp=0x20, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xdbcc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdbcc, .value=0xbc, .type=IO_READ},
        {.addr=0xdbcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0346) {
    const struct CPU_State initial_cpu = {.pc=0x43a1, .a=0x14, .x=0xe9, .y=0xb4, .sp=0x8f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x43a1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x43a2, .a=0x15, .x=0xe9, .y=0xb4, .sp=0x8f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x43a1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x43a1, .value=0xbc, .type=IO_READ},
        {.addr=0x43a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0347) {
    const struct CPU_State initial_cpu = {.pc=0x375c, .a=0x3b, .x=0xa8, .y=0xef, .sp=0x44, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x375c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x375d, .a=0x3c, .x=0xa8, .y=0xef, .sp=0x44, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x375c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x375c, .value=0xbc, .type=IO_READ},
        {.addr=0x375d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0348) {
    const struct CPU_State initial_cpu = {.pc=0xd6d4, .a=0xaa, .x=0x8e, .y=0x86, .sp=0x0b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd6d5, .a=0xab, .x=0x8e, .y=0x86, .sp=0x0b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd6d4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd6d4, .value=0xbc, .type=IO_READ},
        {.addr=0xd6d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0349) {
    const struct CPU_State initial_cpu = {.pc=0xbd48, .a=0xf7, .x=0xd0, .y=0xfd, .sp=0xc5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xbd48, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbd49, .a=0xf8, .x=0xd0, .y=0xfd, .sp=0xc5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xbd48, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbd48, .value=0xbc, .type=IO_READ},
        {.addr=0xbd49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_034A) {
    const struct CPU_State initial_cpu = {.pc=0x48bf, .a=0xbf, .x=0x08, .y=0x16, .sp=0xdf, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x48bf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x48c0, .a=0xc0, .x=0x08, .y=0x16, .sp=0xdf, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x48bf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x48bf, .value=0xbc, .type=IO_READ},
        {.addr=0x48c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8f90, .a=0x8f, .x=0x97, .y=0x18, .sp=0x29, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8f90, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8f91, .a=0x90, .x=0x97, .y=0x18, .sp=0x29, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8f90, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8f90, .value=0xbc, .type=IO_READ},
        {.addr=0x8f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_034C) {
    const struct CPU_State initial_cpu = {.pc=0x1341, .a=0x3e, .x=0xd1, .y=0xda, .sp=0x3b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1341, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1342, .a=0x3f, .x=0xd1, .y=0xda, .sp=0x3b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1341, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1341, .value=0xbc, .type=IO_READ},
        {.addr=0x1342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_034D) {
    const struct CPU_State initial_cpu = {.pc=0x845f, .a=0x4e, .x=0x2f, .y=0x8d, .sp=0xf0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x845f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8460, .a=0x4f, .x=0x2f, .y=0x8d, .sp=0xf0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x845f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x845f, .value=0xbc, .type=IO_READ},
        {.addr=0x8460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_034E) {
    const struct CPU_State initial_cpu = {.pc=0xe38e, .a=0xdd, .x=0x8c, .y=0x80, .sp=0x9b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xe38e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe38f, .a=0xde, .x=0x8c, .y=0x80, .sp=0x9b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe38e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe38e, .value=0xbc, .type=IO_READ},
        {.addr=0xe38f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_034F) {
    const struct CPU_State initial_cpu = {.pc=0xeb42, .a=0x8c, .x=0x03, .y=0x8d, .sp=0xdd, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xeb42, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeb43, .a=0x8d, .x=0x03, .y=0x8d, .sp=0xdd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xeb42, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeb42, .value=0xbc, .type=IO_READ},
        {.addr=0xeb43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0350) {
    const struct CPU_State initial_cpu = {.pc=0x76ae, .a=0x83, .x=0x73, .y=0x2d, .sp=0x99, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x76ae, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x76af, .a=0x84, .x=0x73, .y=0x2d, .sp=0x99, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x76ae, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x76ae, .value=0xbc, .type=IO_READ},
        {.addr=0x76af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5c31, .a=0xd5, .x=0x26, .y=0xdc, .sp=0x4c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5c31, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5c32, .a=0xd6, .x=0x26, .y=0xdc, .sp=0x4c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5c31, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5c31, .value=0xbc, .type=IO_READ},
        {.addr=0x5c32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0352) {
    const struct CPU_State initial_cpu = {.pc=0x1667, .a=0xb3, .x=0xe0, .y=0x91, .sp=0x0b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1667, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1668, .a=0xb4, .x=0xe0, .y=0x91, .sp=0x0b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1667, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1667, .value=0xbc, .type=IO_READ},
        {.addr=0x1668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0353) {
    const struct CPU_State initial_cpu = {.pc=0x3317, .a=0xca, .x=0x1d, .y=0x84, .sp=0xb7, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3317, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3318, .a=0xcb, .x=0x1d, .y=0x84, .sp=0xb7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3317, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3317, .value=0xbc, .type=IO_READ},
        {.addr=0x3318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0355) {
    const struct CPU_State initial_cpu = {.pc=0x7e96, .a=0xcd, .x=0x65, .y=0xb3, .sp=0x29, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x7e96, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7e97, .a=0xce, .x=0x65, .y=0xb3, .sp=0x29, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7e96, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7e96, .value=0xbc, .type=IO_READ},
        {.addr=0x7e97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0356) {
    const struct CPU_State initial_cpu = {.pc=0xac42, .a=0x3d, .x=0x39, .y=0xf9, .sp=0x6d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xac42, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xac43, .a=0x3e, .x=0x39, .y=0xf9, .sp=0x6d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xac42, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xac42, .value=0xbc, .type=IO_READ},
        {.addr=0xac43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0357) {
    const struct CPU_State initial_cpu = {.pc=0x2b91, .a=0xe2, .x=0x8c, .y=0x52, .sp=0x26, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2b91, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2b92, .a=0xe3, .x=0x8c, .y=0x52, .sp=0x26, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2b91, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2b91, .value=0xbc, .type=IO_READ},
        {.addr=0x2b92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0358) {
    const struct CPU_State initial_cpu = {.pc=0x5f68, .a=0xbd, .x=0xec, .y=0x18, .sp=0xd2, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5f68, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5f69, .a=0xbe, .x=0xec, .y=0x18, .sp=0xd2, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5f68, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5f68, .value=0xbc, .type=IO_READ},
        {.addr=0x5f69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0359) {
    const struct CPU_State initial_cpu = {.pc=0x170a, .a=0x94, .x=0xc8, .y=0x4e, .sp=0x24, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x170a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x170b, .a=0x95, .x=0xc8, .y=0x4e, .sp=0x24, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x170a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x170a, .value=0xbc, .type=IO_READ},
        {.addr=0x170b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_035A) {
    const struct CPU_State initial_cpu = {.pc=0x2b38, .a=0x3e, .x=0x2d, .y=0x09, .sp=0x21, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2b38, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2b39, .a=0x3f, .x=0x2d, .y=0x09, .sp=0x21, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2b38, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2b38, .value=0xbc, .type=IO_READ},
        {.addr=0x2b39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_035B) {
    const struct CPU_State initial_cpu = {.pc=0x4dba, .a=0xf1, .x=0xb6, .y=0xbf, .sp=0x77, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4dba, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4dbb, .a=0xf2, .x=0xb6, .y=0xbf, .sp=0x77, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4dba, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4dba, .value=0xbc, .type=IO_READ},
        {.addr=0x4dbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_035C) {
    const struct CPU_State initial_cpu = {.pc=0x32cf, .a=0x93, .x=0xd3, .y=0xbb, .sp=0x49, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x32cf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x32d0, .a=0x94, .x=0xd3, .y=0xbb, .sp=0x49, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x32cf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x32cf, .value=0xbc, .type=IO_READ},
        {.addr=0x32d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_035D) {
    const struct CPU_State initial_cpu = {.pc=0xa478, .a=0xfb, .x=0xe6, .y=0x5e, .sp=0x0e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa478, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa479, .a=0xfc, .x=0xe6, .y=0x5e, .sp=0x0e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa478, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa478, .value=0xbc, .type=IO_READ},
        {.addr=0xa479, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_035E) {
    const struct CPU_State initial_cpu = {.pc=0x7eb9, .a=0xf0, .x=0x0f, .y=0x0f, .sp=0xc3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7eba, .a=0xf1, .x=0x0f, .y=0x0f, .sp=0xc3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7eb9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7eb9, .value=0xbc, .type=IO_READ},
        {.addr=0x7eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_035F) {
    const struct CPU_State initial_cpu = {.pc=0x0387, .a=0xab, .x=0x43, .y=0x9c, .sp=0xb7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0387, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0388, .a=0xac, .x=0x43, .y=0x9c, .sp=0xb7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0387, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0387, .value=0xbc, .type=IO_READ},
        {.addr=0x0388, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0360) {
    const struct CPU_State initial_cpu = {.pc=0x154f, .a=0x8a, .x=0xd9, .y=0xc7, .sp=0x0d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x154f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1550, .a=0x8b, .x=0xd9, .y=0xc7, .sp=0x0d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x154f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x154f, .value=0xbc, .type=IO_READ},
        {.addr=0x1550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0361) {
    const struct CPU_State initial_cpu = {.pc=0x38f0, .a=0x47, .x=0x74, .y=0xda, .sp=0xe8, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x38f0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x38f1, .a=0x48, .x=0x74, .y=0xda, .sp=0xe8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x38f0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x38f0, .value=0xbc, .type=IO_READ},
        {.addr=0x38f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0362) {
    const struct CPU_State initial_cpu = {.pc=0xac32, .a=0x56, .x=0x50, .y=0x46, .sp=0x04, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xac32, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xac33, .a=0x57, .x=0x50, .y=0x46, .sp=0x04, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xac32, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xac32, .value=0xbc, .type=IO_READ},
        {.addr=0xac33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0363) {
    const struct CPU_State initial_cpu = {.pc=0x1dcd, .a=0x10, .x=0x64, .y=0xf2, .sp=0x4f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1dcd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1dce, .a=0x11, .x=0x64, .y=0xf2, .sp=0x4f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1dcd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1dcd, .value=0xbc, .type=IO_READ},
        {.addr=0x1dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf13a, .a=0xa3, .x=0xf3, .y=0xa9, .sp=0x30, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf13a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf13b, .a=0xa4, .x=0xf3, .y=0xa9, .sp=0x30, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf13a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf13a, .value=0xbc, .type=IO_READ},
        {.addr=0xf13b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0365) {
    const struct CPU_State initial_cpu = {.pc=0x4fff, .a=0x07, .x=0x06, .y=0x00, .sp=0x92, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4fff, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5000, .a=0x08, .x=0x06, .y=0x00, .sp=0x92, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4fff, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4fff, .value=0xbc, .type=IO_READ},
        {.addr=0x5000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0366) {
    const struct CPU_State initial_cpu = {.pc=0x9abb, .a=0x88, .x=0xe1, .y=0x9f, .sp=0x79, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x9abb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9abc, .a=0x89, .x=0xe1, .y=0x9f, .sp=0x79, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9abb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9abb, .value=0xbc, .type=IO_READ},
        {.addr=0x9abc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0367) {
    const struct CPU_State initial_cpu = {.pc=0xaf2e, .a=0xfb, .x=0x49, .y=0x99, .sp=0x94, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xaf2e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xaf2f, .a=0xfc, .x=0x49, .y=0x99, .sp=0x94, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xaf2e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xaf2e, .value=0xbc, .type=IO_READ},
        {.addr=0xaf2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0368) {
    const struct CPU_State initial_cpu = {.pc=0xd1dd, .a=0xa2, .x=0x64, .y=0xd7, .sp=0x2b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd1dd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd1de, .a=0xa3, .x=0x64, .y=0xd7, .sp=0x2b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd1dd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd1dd, .value=0xbc, .type=IO_READ},
        {.addr=0xd1de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0369) {
    const struct CPU_State initial_cpu = {.pc=0x8cd7, .a=0x83, .x=0x30, .y=0x52, .sp=0xcd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8cd8, .a=0x84, .x=0x30, .y=0x52, .sp=0xcd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8cd7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8cd7, .value=0xbc, .type=IO_READ},
        {.addr=0x8cd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_036A) {
    const struct CPU_State initial_cpu = {.pc=0xab3f, .a=0xe8, .x=0x16, .y=0x18, .sp=0xb1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xab3f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xab40, .a=0xe9, .x=0x16, .y=0x18, .sp=0xb1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xab3f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xab3f, .value=0xbc, .type=IO_READ},
        {.addr=0xab40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_036B) {
    const struct CPU_State initial_cpu = {.pc=0x400d, .a=0x6a, .x=0xea, .y=0x57, .sp=0xaa, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x400d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x400e, .a=0x6b, .x=0xea, .y=0x57, .sp=0xaa, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x400d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x400d, .value=0xbc, .type=IO_READ},
        {.addr=0x400e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_036C) {
    const struct CPU_State initial_cpu = {.pc=0xfeaf, .a=0x66, .x=0x0c, .y=0x9f, .sp=0x27, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xfeaf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfeb0, .a=0x67, .x=0x0c, .y=0x9f, .sp=0x27, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfeaf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfeaf, .value=0xbc, .type=IO_READ},
        {.addr=0xfeb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_036D) {
    const struct CPU_State initial_cpu = {.pc=0xd5d6, .a=0xcb, .x=0xca, .y=0xfa, .sp=0x4e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd5d7, .a=0xcc, .x=0xca, .y=0xfa, .sp=0x4e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd5d6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd5d6, .value=0xbc, .type=IO_READ},
        {.addr=0xd5d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_036E) {
    const struct CPU_State initial_cpu = {.pc=0xfa81, .a=0xee, .x=0xa7, .y=0x59, .sp=0xda, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xfa81, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfa82, .a=0xef, .x=0xa7, .y=0x59, .sp=0xda, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xfa81, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfa81, .value=0xbc, .type=IO_READ},
        {.addr=0xfa82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_036F) {
    const struct CPU_State initial_cpu = {.pc=0xa30e, .a=0x3b, .x=0xf1, .y=0x48, .sp=0xb3, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xa30e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa30f, .a=0x3c, .x=0xf1, .y=0x48, .sp=0xb3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa30e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa30e, .value=0xbc, .type=IO_READ},
        {.addr=0xa30f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0370) {
    const struct CPU_State initial_cpu = {.pc=0x36ef, .a=0x56, .x=0xb3, .y=0x28, .sp=0x92, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x36ef, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x36f0, .a=0x57, .x=0xb3, .y=0x28, .sp=0x92, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x36ef, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x36ef, .value=0xbc, .type=IO_READ},
        {.addr=0x36f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0371) {
    const struct CPU_State initial_cpu = {.pc=0x33ad, .a=0x49, .x=0x02, .y=0xbc, .sp=0x74, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x33ad, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x33ae, .a=0x4a, .x=0x02, .y=0xbc, .sp=0x74, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x33ad, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x33ad, .value=0xbc, .type=IO_READ},
        {.addr=0x33ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0372) {
    const struct CPU_State initial_cpu = {.pc=0x321b, .a=0xae, .x=0x0f, .y=0x83, .sp=0x17, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x321b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x321c, .a=0xaf, .x=0x0f, .y=0x83, .sp=0x17, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x321b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x321b, .value=0xbc, .type=IO_READ},
        {.addr=0x321c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0373) {
    const struct CPU_State initial_cpu = {.pc=0xecdf, .a=0x33, .x=0xbb, .y=0x0f, .sp=0xbb, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xecdf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xece0, .a=0x34, .x=0xbb, .y=0x0f, .sp=0xbb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xecdf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xecdf, .value=0xbc, .type=IO_READ},
        {.addr=0xece0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0374) {
    const struct CPU_State initial_cpu = {.pc=0x05f9, .a=0xb0, .x=0x3b, .y=0x9f, .sp=0xb3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x05f9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x05fa, .a=0xb1, .x=0x3b, .y=0x9f, .sp=0xb3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x05f9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x05f9, .value=0xbc, .type=IO_READ},
        {.addr=0x05fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0375) {
    const struct CPU_State initial_cpu = {.pc=0xc0b2, .a=0x29, .x=0x58, .y=0xf6, .sp=0x36, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xc0b2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc0b3, .a=0x2a, .x=0x58, .y=0xf6, .sp=0x36, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc0b2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc0b2, .value=0xbc, .type=IO_READ},
        {.addr=0xc0b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0376) {
    const struct CPU_State initial_cpu = {.pc=0x41e8, .a=0xfa, .x=0x13, .y=0x17, .sp=0x31, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x41e8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x41e9, .a=0xfb, .x=0x13, .y=0x17, .sp=0x31, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x41e8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x41e8, .value=0xbc, .type=IO_READ},
        {.addr=0x41e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0377) {
    const struct CPU_State initial_cpu = {.pc=0x7c6d, .a=0x47, .x=0xf9, .y=0x7c, .sp=0x1e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7c6e, .a=0x48, .x=0xf9, .y=0x7c, .sp=0x1e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7c6d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7c6d, .value=0xbc, .type=IO_READ},
        {.addr=0x7c6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7111, .a=0x98, .x=0x31, .y=0x7a, .sp=0x13, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x7111, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7112, .a=0x99, .x=0x31, .y=0x7a, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7111, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7111, .value=0xbc, .type=IO_READ},
        {.addr=0x7112, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0379) {
    const struct CPU_State initial_cpu = {.pc=0x1fc7, .a=0x69, .x=0x5f, .y=0x19, .sp=0x16, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1fc8, .a=0x6a, .x=0x5f, .y=0x19, .sp=0x16, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1fc7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1fc7, .value=0xbc, .type=IO_READ},
        {.addr=0x1fc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_037A) {
    const struct CPU_State initial_cpu = {.pc=0x78f3, .a=0xb1, .x=0xf3, .y=0x20, .sp=0xfa, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x78f3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x78f4, .a=0xb2, .x=0xf3, .y=0x20, .sp=0xfa, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x78f3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x78f3, .value=0xbc, .type=IO_READ},
        {.addr=0x78f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_037B) {
    const struct CPU_State initial_cpu = {.pc=0xdb56, .a=0xdb, .x=0xdc, .y=0xa7, .sp=0x6d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xdb56, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xdb57, .a=0xdc, .x=0xdc, .y=0xa7, .sp=0x6d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xdb56, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xdb56, .value=0xbc, .type=IO_READ},
        {.addr=0xdb57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_037C) {
    const struct CPU_State initial_cpu = {.pc=0xcba1, .a=0x39, .x=0xcf, .y=0x30, .sp=0x70, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xcba1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcba2, .a=0x3a, .x=0xcf, .y=0x30, .sp=0x70, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xcba1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcba1, .value=0xbc, .type=IO_READ},
        {.addr=0xcba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_037D) {
    const struct CPU_State initial_cpu = {.pc=0xd986, .a=0xca, .x=0x82, .y=0x49, .sp=0xf0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd986, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd987, .a=0xcb, .x=0x82, .y=0x49, .sp=0xf0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd986, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd986, .value=0xbc, .type=IO_READ},
        {.addr=0xd987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_037E) {
    const struct CPU_State initial_cpu = {.pc=0xb193, .a=0x75, .x=0xec, .y=0x3b, .sp=0x88, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xb193, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb194, .a=0x76, .x=0xec, .y=0x3b, .sp=0x88, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb193, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb193, .value=0xbc, .type=IO_READ},
        {.addr=0xb194, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_037F) {
    const struct CPU_State initial_cpu = {.pc=0x30da, .a=0xfa, .x=0xe4, .y=0x3b, .sp=0x6b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x30da, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x30db, .a=0xfb, .x=0xe4, .y=0x3b, .sp=0x6b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x30da, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x30da, .value=0xbc, .type=IO_READ},
        {.addr=0x30db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0380) {
    const struct CPU_State initial_cpu = {.pc=0xd318, .a=0x29, .x=0x1b, .y=0x5d, .sp=0xd5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd318, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd319, .a=0x2a, .x=0x1b, .y=0x5d, .sp=0xd5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd318, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd318, .value=0xbc, .type=IO_READ},
        {.addr=0xd319, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0381) {
    const struct CPU_State initial_cpu = {.pc=0x9d1d, .a=0xf5, .x=0x59, .y=0x90, .sp=0x48, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x9d1d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9d1e, .a=0xf6, .x=0x59, .y=0x90, .sp=0x48, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9d1d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9d1d, .value=0xbc, .type=IO_READ},
        {.addr=0x9d1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0382) {
    const struct CPU_State initial_cpu = {.pc=0x015e, .a=0x32, .x=0x0f, .y=0xdb, .sp=0x40, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x015f, .a=0x33, .x=0x0f, .y=0xdb, .sp=0x40, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x015e, .value=0xbc, .type=IO_READ},
        {.addr=0x015f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0383) {
    const struct CPU_State initial_cpu = {.pc=0x271c, .a=0xc6, .x=0x44, .y=0x4d, .sp=0x0d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x271c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x271d, .a=0xc7, .x=0x44, .y=0x4d, .sp=0x0d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x271c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x271c, .value=0xbc, .type=IO_READ},
        {.addr=0x271d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb365, .a=0xf4, .x=0xc1, .y=0x3a, .sp=0x0f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xb365, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb366, .a=0xf5, .x=0xc1, .y=0x3a, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb365, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb365, .value=0xbc, .type=IO_READ},
        {.addr=0xb366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0385) {
    const struct CPU_State initial_cpu = {.pc=0x813f, .a=0x0f, .x=0x75, .y=0x42, .sp=0xbb, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x813f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8140, .a=0x10, .x=0x75, .y=0x42, .sp=0xbb, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x813f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x813f, .value=0xbc, .type=IO_READ},
        {.addr=0x8140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0386) {
    const struct CPU_State initial_cpu = {.pc=0x59c8, .a=0x87, .x=0x9e, .y=0x9d, .sp=0xfd, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x59c8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x59c9, .a=0x88, .x=0x9e, .y=0x9d, .sp=0xfd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x59c8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x59c8, .value=0xbc, .type=IO_READ},
        {.addr=0x59c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0387) {
    const struct CPU_State initial_cpu = {.pc=0x0a00, .a=0x27, .x=0x9b, .y=0xdb, .sp=0x09, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a00, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0a01, .a=0x28, .x=0x9b, .y=0xdb, .sp=0x09, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0a00, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0a00, .value=0xbc, .type=IO_READ},
        {.addr=0x0a01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0388) {
    const struct CPU_State initial_cpu = {.pc=0xbb56, .a=0xf5, .x=0x80, .y=0x14, .sp=0x6e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xbb56, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbb57, .a=0xf6, .x=0x80, .y=0x14, .sp=0x6e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xbb56, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbb56, .value=0xbc, .type=IO_READ},
        {.addr=0xbb57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8431, .a=0xbb, .x=0x06, .y=0x4e, .sp=0xdc, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8431, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8432, .a=0xbc, .x=0x06, .y=0x4e, .sp=0xdc, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8431, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8431, .value=0xbc, .type=IO_READ},
        {.addr=0x8432, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_038A) {
    const struct CPU_State initial_cpu = {.pc=0x7c73, .a=0xe8, .x=0xc9, .y=0xeb, .sp=0x8b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7c73, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7c74, .a=0xe9, .x=0xc9, .y=0xeb, .sp=0x8b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7c73, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7c73, .value=0xbc, .type=IO_READ},
        {.addr=0x7c74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_038B) {
    const struct CPU_State initial_cpu = {.pc=0x529c, .a=0x4e, .x=0xc1, .y=0x50, .sp=0x4a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x529c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x529d, .a=0x4f, .x=0xc1, .y=0x50, .sp=0x4a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x529c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x529c, .value=0xbc, .type=IO_READ},
        {.addr=0x529d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_038C) {
    const struct CPU_State initial_cpu = {.pc=0x8678, .a=0xd9, .x=0xde, .y=0x19, .sp=0x0a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8678, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8679, .a=0xda, .x=0xde, .y=0x19, .sp=0x0a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8678, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8678, .value=0xbc, .type=IO_READ},
        {.addr=0x8679, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_038D) {
    const struct CPU_State initial_cpu = {.pc=0x47ea, .a=0x34, .x=0x7c, .y=0x7c, .sp=0x04, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x47ea, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x47eb, .a=0x35, .x=0x7c, .y=0x7c, .sp=0x04, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x47ea, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x47ea, .value=0xbc, .type=IO_READ},
        {.addr=0x47eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_038E) {
    const struct CPU_State initial_cpu = {.pc=0x5e8a, .a=0x82, .x=0x92, .y=0xf4, .sp=0x62, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5e8a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5e8b, .a=0x83, .x=0x92, .y=0xf4, .sp=0x62, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5e8a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5e8a, .value=0xbc, .type=IO_READ},
        {.addr=0x5e8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_038F) {
    const struct CPU_State initial_cpu = {.pc=0x75a4, .a=0x56, .x=0x21, .y=0xd6, .sp=0x41, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x75a4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x75a5, .a=0x57, .x=0x21, .y=0xd6, .sp=0x41, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x75a4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x75a4, .value=0xbc, .type=IO_READ},
        {.addr=0x75a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0390) {
    const struct CPU_State initial_cpu = {.pc=0xa19e, .a=0x26, .x=0x43, .y=0x5f, .sp=0x9c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xa19e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa19f, .a=0x27, .x=0x43, .y=0x5f, .sp=0x9c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa19e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa19e, .value=0xbc, .type=IO_READ},
        {.addr=0xa19f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0391) {
    const struct CPU_State initial_cpu = {.pc=0xe74d, .a=0xf4, .x=0x1e, .y=0xcf, .sp=0x45, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xe74d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe74e, .a=0xf5, .x=0x1e, .y=0xcf, .sp=0x45, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe74d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe74d, .value=0xbc, .type=IO_READ},
        {.addr=0xe74e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0392) {
    const struct CPU_State initial_cpu = {.pc=0x8357, .a=0xd7, .x=0xc4, .y=0x38, .sp=0xb0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8357, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8358, .a=0xd8, .x=0xc4, .y=0x38, .sp=0xb0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8357, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8357, .value=0xbc, .type=IO_READ},
        {.addr=0x8358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0393) {
    const struct CPU_State initial_cpu = {.pc=0x9adf, .a=0x18, .x=0x9f, .y=0xab, .sp=0x7f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x9adf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9ae0, .a=0x19, .x=0x9f, .y=0xab, .sp=0x7f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9adf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9adf, .value=0xbc, .type=IO_READ},
        {.addr=0x9ae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0394) {
    const struct CPU_State initial_cpu = {.pc=0xf925, .a=0x01, .x=0x77, .y=0x01, .sp=0xb7, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf925, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf926, .a=0x02, .x=0x77, .y=0x01, .sp=0xb7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf925, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf925, .value=0xbc, .type=IO_READ},
        {.addr=0xf926, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0395) {
    const struct CPU_State initial_cpu = {.pc=0xd27b, .a=0x5c, .x=0x1d, .y=0xf1, .sp=0xf2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd27b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd27c, .a=0x5d, .x=0x1d, .y=0xf1, .sp=0xf2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd27b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd27b, .value=0xbc, .type=IO_READ},
        {.addr=0xd27c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0396) {
    const struct CPU_State initial_cpu = {.pc=0xb00d, .a=0x4d, .x=0x8b, .y=0xc0, .sp=0x40, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb00d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb00e, .a=0x4e, .x=0x8b, .y=0xc0, .sp=0x40, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb00d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb00d, .value=0xbc, .type=IO_READ},
        {.addr=0xb00e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0397) {
    const struct CPU_State initial_cpu = {.pc=0x28fe, .a=0x69, .x=0xe6, .y=0x21, .sp=0x19, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x28fe, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x28ff, .a=0x6a, .x=0xe6, .y=0x21, .sp=0x19, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x28fe, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x28fe, .value=0xbc, .type=IO_READ},
        {.addr=0x28ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8232, .a=0xae, .x=0xba, .y=0xfe, .sp=0x90, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x8232, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8233, .a=0xaf, .x=0xba, .y=0xfe, .sp=0x90, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8232, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8232, .value=0xbc, .type=IO_READ},
        {.addr=0x8233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_0399) {
    const struct CPU_State initial_cpu = {.pc=0xe6bb, .a=0xaa, .x=0xa5, .y=0x99, .sp=0x26, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe6bb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe6bc, .a=0xab, .x=0xa5, .y=0x99, .sp=0x26, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe6bb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe6bb, .value=0xbc, .type=IO_READ},
        {.addr=0xe6bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_039A) {
    const struct CPU_State initial_cpu = {.pc=0x1367, .a=0x57, .x=0x22, .y=0x25, .sp=0x39, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x1367, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1368, .a=0x58, .x=0x22, .y=0x25, .sp=0x39, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1367, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1367, .value=0xbc, .type=IO_READ},
        {.addr=0x1368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_039B) {
    const struct CPU_State initial_cpu = {.pc=0xde85, .a=0x4f, .x=0x7c, .y=0x30, .sp=0x5b, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xde85, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xde86, .a=0x50, .x=0x7c, .y=0x30, .sp=0x5b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xde85, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xde85, .value=0xbc, .type=IO_READ},
        {.addr=0xde86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_039C) {
    const struct CPU_State initial_cpu = {.pc=0x6852, .a=0x32, .x=0x19, .y=0x3b, .sp=0x42, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6852, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6853, .a=0x33, .x=0x19, .y=0x3b, .sp=0x42, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6852, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6852, .value=0xbc, .type=IO_READ},
        {.addr=0x6853, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_039D) {
    const struct CPU_State initial_cpu = {.pc=0x6c68, .a=0x7a, .x=0x2a, .y=0xea, .sp=0x05, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6c68, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6c69, .a=0x7b, .x=0x2a, .y=0xea, .sp=0x05, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6c68, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6c68, .value=0xbc, .type=IO_READ},
        {.addr=0x6c69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_039E) {
    const struct CPU_State initial_cpu = {.pc=0x8516, .a=0xf3, .x=0x13, .y=0xce, .sp=0x91, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8516, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8517, .a=0xf4, .x=0x13, .y=0xce, .sp=0x91, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8516, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8516, .value=0xbc, .type=IO_READ},
        {.addr=0x8517, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_039F) {
    const struct CPU_State initial_cpu = {.pc=0xefdb, .a=0x04, .x=0x15, .y=0x16, .sp=0x8b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xefdb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xefdc, .a=0x05, .x=0x15, .y=0x16, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xefdb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xefdb, .value=0xbc, .type=IO_READ},
        {.addr=0xefdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x4993, .a=0x28, .x=0x87, .y=0x68, .sp=0xa4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4993, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4994, .a=0x29, .x=0x87, .y=0x68, .sp=0xa4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4993, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4993, .value=0xbc, .type=IO_READ},
        {.addr=0x4994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x1a32, .a=0xbb, .x=0x8e, .y=0xcd, .sp=0x29, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x1a32, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1a33, .a=0xbc, .x=0x8e, .y=0xcd, .sp=0x29, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1a32, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1a32, .value=0xbc, .type=IO_READ},
        {.addr=0x1a33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xfc37, .a=0x53, .x=0x27, .y=0x26, .sp=0x47, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xfc37, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfc38, .a=0x54, .x=0x27, .y=0x26, .sp=0x47, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfc37, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfc37, .value=0xbc, .type=IO_READ},
        {.addr=0xfc38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xe4b8, .a=0x16, .x=0xa3, .y=0xc1, .sp=0x48, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe4b8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe4b9, .a=0x17, .x=0xa3, .y=0xc1, .sp=0x48, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe4b8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe4b8, .value=0xbc, .type=IO_READ},
        {.addr=0xe4b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xaeaf, .a=0xc9, .x=0x71, .y=0x95, .sp=0xc8, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xaeaf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xaeb0, .a=0xca, .x=0x71, .y=0x95, .sp=0xc8, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xaeaf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xaeaf, .value=0xbc, .type=IO_READ},
        {.addr=0xaeb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x44ad, .a=0xfe, .x=0xb2, .y=0xeb, .sp=0xb1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x44ad, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x44ae, .a=0xff, .x=0xb2, .y=0xeb, .sp=0xb1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x44ad, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x44ad, .value=0xbc, .type=IO_READ},
        {.addr=0x44ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xd2bf, .a=0x09, .x=0x59, .y=0xbd, .sp=0x48, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd2bf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd2c0, .a=0x0a, .x=0x59, .y=0xbd, .sp=0x48, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd2bf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd2bf, .value=0xbc, .type=IO_READ},
        {.addr=0xd2c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x9adf, .a=0x71, .x=0x5b, .y=0xb9, .sp=0x76, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x9adf, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9ae0, .a=0x72, .x=0x5b, .y=0xb9, .sp=0x76, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9adf, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9adf, .value=0xbc, .type=IO_READ},
        {.addr=0x9ae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x120b, .a=0xe2, .x=0xda, .y=0xe6, .sp=0xc5, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x120b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x120c, .a=0xe3, .x=0xda, .y=0xe6, .sp=0xc5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x120b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x120b, .value=0xbc, .type=IO_READ},
        {.addr=0x120c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8379, .a=0xad, .x=0x58, .y=0x00, .sp=0x5e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8379, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x837a, .a=0xae, .x=0x58, .y=0x00, .sp=0x5e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8379, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8379, .value=0xbc, .type=IO_READ},
        {.addr=0x837a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x4cf1, .a=0x85, .x=0x4b, .y=0x1e, .sp=0xbc, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4cf2, .a=0x86, .x=0x4b, .y=0x1e, .sp=0xbc, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4cf1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4cf1, .value=0xbc, .type=IO_READ},
        {.addr=0x4cf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x74bc, .a=0xc2, .x=0xe7, .y=0xd3, .sp=0xf9, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x74bc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x74bd, .a=0xc3, .x=0xe7, .y=0xd3, .sp=0xf9, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x74bc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x74bc, .value=0xbc, .type=IO_READ},
        {.addr=0x74bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7015, .a=0x50, .x=0xe1, .y=0xa9, .sp=0x9e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7015, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7016, .a=0x51, .x=0xe1, .y=0xa9, .sp=0x9e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7015, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7015, .value=0xbc, .type=IO_READ},
        {.addr=0x7016, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x33e4, .a=0x79, .x=0x4b, .y=0xcb, .sp=0x60, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x33e4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x33e5, .a=0x7a, .x=0x4b, .y=0xcb, .sp=0x60, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x33e4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x33e4, .value=0xbc, .type=IO_READ},
        {.addr=0x33e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x22e2, .a=0x47, .x=0x69, .y=0xf5, .sp=0xa6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x22e2, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x22e3, .a=0x48, .x=0x69, .y=0xf5, .sp=0xa6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x22e2, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x22e2, .value=0xbc, .type=IO_READ},
        {.addr=0x22e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xabe7, .a=0xd5, .x=0xc8, .y=0x4c, .sp=0x5a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xabe7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xabe8, .a=0xd6, .x=0xc8, .y=0x4c, .sp=0x5a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xabe7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xabe7, .value=0xbc, .type=IO_READ},
        {.addr=0xabe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xc8dc, .a=0x7f, .x=0x95, .y=0x6d, .sp=0x88, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc8dc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc8dd, .a=0x80, .x=0x95, .y=0x6d, .sp=0x88, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc8dc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc8dc, .value=0xbc, .type=IO_READ},
        {.addr=0xc8dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x1bdd, .a=0x06, .x=0x78, .y=0x59, .sp=0xf0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1bdd, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1bde, .a=0x07, .x=0x78, .y=0x59, .sp=0xf0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1bdd, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1bdd, .value=0xbc, .type=IO_READ},
        {.addr=0x1bde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x7607, .a=0x67, .x=0x0a, .y=0x57, .sp=0x5b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x7607, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7608, .a=0x68, .x=0x0a, .y=0x57, .sp=0x5b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7607, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7607, .value=0xbc, .type=IO_READ},
        {.addr=0x7608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x4e02, .a=0x5b, .x=0x63, .y=0x35, .sp=0x64, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4e02, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4e03, .a=0x5c, .x=0x63, .y=0x35, .sp=0x64, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4e02, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4e02, .value=0xbc, .type=IO_READ},
        {.addr=0x4e03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x5dd5, .a=0xf8, .x=0xb0, .y=0xbf, .sp=0x0a, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5dd6, .a=0xf9, .x=0xb0, .y=0xbf, .sp=0x0a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5dd5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5dd5, .value=0xbc, .type=IO_READ},
        {.addr=0x5dd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x0e69, .a=0x4b, .x=0x00, .y=0x29, .sp=0xc9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0e69, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0e6a, .a=0x4c, .x=0x00, .y=0x29, .sp=0xc9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0e69, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0e69, .value=0xbc, .type=IO_READ},
        {.addr=0x0e6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x874c, .a=0xf5, .x=0x5a, .y=0x9d, .sp=0x9d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x874c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x874d, .a=0xf6, .x=0x5a, .y=0x9d, .sp=0x9d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x874c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x874c, .value=0xbc, .type=IO_READ},
        {.addr=0x874d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x2958, .a=0x4d, .x=0x70, .y=0x04, .sp=0xeb, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2958, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2959, .a=0x4e, .x=0x70, .y=0x04, .sp=0xeb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2958, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2958, .value=0xbc, .type=IO_READ},
        {.addr=0x2959, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x0463, .a=0x32, .x=0xfa, .y=0x7f, .sp=0xf2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0463, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0464, .a=0x33, .x=0xfa, .y=0x7f, .sp=0xf2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0463, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0463, .value=0xbc, .type=IO_READ},
        {.addr=0x0464, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x0d73, .a=0x27, .x=0x8e, .y=0x6f, .sp=0x74, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0d73, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0d74, .a=0x28, .x=0x8e, .y=0x6f, .sp=0x74, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0d73, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0d73, .value=0xbc, .type=IO_READ},
        {.addr=0x0d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x6cef, .a=0x65, .x=0x5f, .y=0x86, .sp=0x4b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x6cef, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6cf0, .a=0x66, .x=0x5f, .y=0x86, .sp=0x4b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6cef, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6cef, .value=0xbc, .type=IO_READ},
        {.addr=0x6cf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x56c7, .a=0x2a, .x=0xac, .y=0x9e, .sp=0xbd, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x56c7, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x56c8, .a=0x2b, .x=0xac, .y=0x9e, .sp=0xbd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x56c7, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x56c7, .value=0xbc, .type=IO_READ},
        {.addr=0x56c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x2d9d, .a=0xa8, .x=0x2a, .y=0x57, .sp=0x04, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2d9e, .a=0xa9, .x=0x2a, .y=0x57, .sp=0x04, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2d9d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2d9d, .value=0xbc, .type=IO_READ},
        {.addr=0x2d9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xd72c, .a=0x49, .x=0x6a, .y=0x5b, .sp=0xd3, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xd72c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd72d, .a=0x4a, .x=0x6a, .y=0x5b, .sp=0xd3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd72c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd72c, .value=0xbc, .type=IO_READ},
        {.addr=0xd72d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x6725, .a=0x14, .x=0x16, .y=0xde, .sp=0x94, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6725, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6726, .a=0x15, .x=0x16, .y=0xde, .sp=0x94, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6725, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6725, .value=0xbc, .type=IO_READ},
        {.addr=0x6726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xee8a, .a=0xc0, .x=0x21, .y=0xe9, .sp=0x8b, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xee8a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xee8b, .a=0xc1, .x=0x21, .y=0xe9, .sp=0x8b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xee8a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xee8a, .value=0xbc, .type=IO_READ},
        {.addr=0xee8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xe327, .a=0x33, .x=0x1e, .y=0xc7, .sp=0xa6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xe327, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe328, .a=0x34, .x=0x1e, .y=0xc7, .sp=0xa6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe327, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe327, .value=0xbc, .type=IO_READ},
        {.addr=0xe328, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x94dc, .a=0x4c, .x=0x8e, .y=0x3f, .sp=0x83, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x94dc, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x94dd, .a=0x4d, .x=0x8e, .y=0x3f, .sp=0x83, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x94dc, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x94dc, .value=0xbc, .type=IO_READ},
        {.addr=0x94dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xc593, .a=0x53, .x=0x92, .y=0x4a, .sp=0x76, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xc593, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc594, .a=0x54, .x=0x92, .y=0x4a, .sp=0x76, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xc593, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc593, .value=0xbc, .type=IO_READ},
        {.addr=0xc594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xc125, .a=0x39, .x=0x95, .y=0x29, .sp=0x1b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc125, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc126, .a=0x3a, .x=0x95, .y=0x29, .sp=0x1b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc125, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc125, .value=0xbc, .type=IO_READ},
        {.addr=0xc126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x14ce, .a=0xe0, .x=0x3c, .y=0xcb, .sp=0xf8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x14ce, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x14cf, .a=0xe1, .x=0x3c, .y=0xcb, .sp=0xf8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x14ce, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x14ce, .value=0xbc, .type=IO_READ},
        {.addr=0x14cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x298d, .a=0x81, .x=0x2f, .y=0x50, .sp=0x85, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x298d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x298e, .a=0x82, .x=0x2f, .y=0x50, .sp=0x85, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x298d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x298d, .value=0xbc, .type=IO_READ},
        {.addr=0x298e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x2f1c, .a=0xa0, .x=0x67, .y=0xc6, .sp=0x60, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x2f1c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2f1d, .a=0xa1, .x=0x67, .y=0xc6, .sp=0x60, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2f1c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2f1c, .value=0xbc, .type=IO_READ},
        {.addr=0x2f1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x4a7b, .a=0xa8, .x=0xdf, .y=0xa3, .sp=0xa2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4a7c, .a=0xa9, .x=0xdf, .y=0xa3, .sp=0xa2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4a7b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4a7b, .value=0xbc, .type=IO_READ},
        {.addr=0x4a7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x5dc8, .a=0x3d, .x=0x2c, .y=0xbe, .sp=0xf6, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5dc9, .a=0x3e, .x=0x2c, .y=0xbe, .sp=0xf6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5dc8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5dc8, .value=0xbc, .type=IO_READ},
        {.addr=0x5dc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x8413, .a=0x06, .x=0x42, .y=0x2a, .sp=0xaf, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8413, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8414, .a=0x07, .x=0x42, .y=0x2a, .sp=0xaf, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8413, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8413, .value=0xbc, .type=IO_READ},
        {.addr=0x8414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x847e, .a=0xcd, .x=0x95, .y=0x70, .sp=0xdb, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x847e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x847f, .a=0xce, .x=0x95, .y=0x70, .sp=0xdb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x847e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x847e, .value=0xbc, .type=IO_READ},
        {.addr=0x847f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xe720, .a=0xbb, .x=0x1e, .y=0x3e, .sp=0x87, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe720, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe721, .a=0xbc, .x=0x1e, .y=0x3e, .sp=0x87, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe720, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe720, .value=0xbc, .type=IO_READ},
        {.addr=0xe721, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xa47d, .a=0x08, .x=0xc4, .y=0xac, .sp=0xfa, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa47d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa47e, .a=0x09, .x=0xc4, .y=0xac, .sp=0xfa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa47d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa47d, .value=0xbc, .type=IO_READ},
        {.addr=0xa47e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xd771, .a=0xa4, .x=0x27, .y=0x59, .sp=0xa0, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xd771, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd772, .a=0xa5, .x=0x27, .y=0x59, .sp=0xa0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xd771, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd771, .value=0xbc, .type=IO_READ},
        {.addr=0xd772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x3474, .a=0xfa, .x=0x5b, .y=0x64, .sp=0x82, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3474, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3475, .a=0xfb, .x=0x5b, .y=0x64, .sp=0x82, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3474, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3474, .value=0xbc, .type=IO_READ},
        {.addr=0x3475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x871a, .a=0x6b, .x=0xc8, .y=0xea, .sp=0xe2, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x871a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x871b, .a=0x6c, .x=0xc8, .y=0xea, .sp=0xe2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x871a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x871a, .value=0xbc, .type=IO_READ},
        {.addr=0x871b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xbe0d, .a=0x6e, .x=0x5c, .y=0x84, .sp=0xf5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xbe0d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbe0e, .a=0x6f, .x=0x5c, .y=0x84, .sp=0xf5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbe0d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbe0d, .value=0xbc, .type=IO_READ},
        {.addr=0xbe0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x7c92, .a=0x28, .x=0xd6, .y=0x64, .sp=0x55, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7c92, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7c93, .a=0x29, .x=0xd6, .y=0x64, .sp=0x55, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7c92, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7c92, .value=0xbc, .type=IO_READ},
        {.addr=0x7c93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x8bec, .a=0x07, .x=0x77, .y=0x9e, .sp=0x4b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x8bec, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8bed, .a=0x08, .x=0x77, .y=0x9e, .sp=0x4b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8bec, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8bec, .value=0xbc, .type=IO_READ},
        {.addr=0x8bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x7896, .a=0xd0, .x=0x00, .y=0xb0, .sp=0xe4, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7896, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7897, .a=0xd1, .x=0x00, .y=0xb0, .sp=0xe4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7896, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x7896, .value=0xbc, .type=IO_READ},
        {.addr=0x7897, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x766f, .a=0x82, .x=0xfd, .y=0x08, .sp=0x91, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x766f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x7670, .a=0x83, .x=0xfd, .y=0x08, .sp=0x91, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x766f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x766f, .value=0xbc, .type=IO_READ},
        {.addr=0x7670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x3372, .a=0xc3, .x=0x23, .y=0x06, .sp=0x0d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x3372, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3373, .a=0xc4, .x=0x23, .y=0x06, .sp=0x0d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3372, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3372, .value=0xbc, .type=IO_READ},
        {.addr=0x3373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xcc32, .a=0x03, .x=0xd5, .y=0x03, .sp=0x54, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xcc32, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcc33, .a=0x04, .x=0xd5, .y=0x03, .sp=0x54, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcc32, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcc32, .value=0xbc, .type=IO_READ},
        {.addr=0xcc33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xe9fa, .a=0x62, .x=0xa4, .y=0xcb, .sp=0x07, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe9fa, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe9fb, .a=0x63, .x=0xa4, .y=0xcb, .sp=0x07, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe9fa, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe9fa, .value=0xbc, .type=IO_READ},
        {.addr=0xe9fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x610f, .a=0x70, .x=0x26, .y=0xd0, .sp=0x9e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x610f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6110, .a=0x71, .x=0x26, .y=0xd0, .sp=0x9e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x610f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x610f, .value=0xbc, .type=IO_READ},
        {.addr=0x6110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x4212, .a=0xf9, .x=0x84, .y=0x96, .sp=0x68, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4212, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4213, .a=0xfa, .x=0x84, .y=0x96, .sp=0x68, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4212, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4212, .value=0xbc, .type=IO_READ},
        {.addr=0x4213, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xc802, .a=0x92, .x=0x3e, .y=0x5f, .sp=0xa3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc802, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc803, .a=0x93, .x=0x3e, .y=0x5f, .sp=0xa3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc802, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc802, .value=0xbc, .type=IO_READ},
        {.addr=0xc803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3e3e, .a=0x58, .x=0x2d, .y=0x21, .sp=0x55, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3e3f, .a=0x59, .x=0x2d, .y=0x21, .sp=0x55, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3e3e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3e3e, .value=0xbc, .type=IO_READ},
        {.addr=0x3e3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xc3e8, .a=0xa3, .x=0xd6, .y=0x91, .sp=0x7d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc3e9, .a=0xa4, .x=0xd6, .y=0x91, .sp=0x7d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc3e8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc3e8, .value=0xbc, .type=IO_READ},
        {.addr=0xc3e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x66d5, .a=0x9d, .x=0xda, .y=0x5b, .sp=0xd2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x66d5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x66d6, .a=0x9e, .x=0xda, .y=0x5b, .sp=0xd2, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x66d5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x66d5, .value=0xbc, .type=IO_READ},
        {.addr=0x66d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x28a8, .a=0x10, .x=0xe9, .y=0x57, .sp=0x0d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x28a8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x28a9, .a=0x11, .x=0xe9, .y=0x57, .sp=0x0d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x28a8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x28a8, .value=0xbc, .type=IO_READ},
        {.addr=0x28a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xa06c, .a=0xe0, .x=0x94, .y=0xdc, .sp=0x4a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa06c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa06d, .a=0xe1, .x=0x94, .y=0xdc, .sp=0x4a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa06c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa06c, .value=0xbc, .type=IO_READ},
        {.addr=0xa06d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x02b3, .a=0x84, .x=0x43, .y=0x93, .sp=0xdf, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x02b3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x02b4, .a=0x85, .x=0x43, .y=0x93, .sp=0xdf, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x02b3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x02b3, .value=0xbc, .type=IO_READ},
        {.addr=0x02b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x5dd9, .a=0x6e, .x=0xa6, .y=0xb2, .sp=0xdb, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5dda, .a=0x6f, .x=0xa6, .y=0xb2, .sp=0xdb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5dd9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5dd9, .value=0xbc, .type=IO_READ},
        {.addr=0x5dda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x6752, .a=0x9e, .x=0x3d, .y=0xc3, .sp=0xd1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6752, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6753, .a=0x9f, .x=0x3d, .y=0xc3, .sp=0xd1, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6752, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6752, .value=0xbc, .type=IO_READ},
        {.addr=0x6753, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xfa0f, .a=0x00, .x=0xb5, .y=0x11, .sp=0x45, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xfa0f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfa10, .a=0x01, .x=0xb5, .y=0x11, .sp=0x45, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfa0f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfa0f, .value=0xbc, .type=IO_READ},
        {.addr=0xfa10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x6cc1, .a=0x20, .x=0x3f, .y=0x22, .sp=0x65, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6cc1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6cc2, .a=0x21, .x=0x3f, .y=0x22, .sp=0x65, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6cc1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6cc1, .value=0xbc, .type=IO_READ},
        {.addr=0x6cc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x71f1, .a=0xfd, .x=0x53, .y=0x72, .sp=0x70, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x71f1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x71f2, .a=0xfe, .x=0x53, .y=0x72, .sp=0x70, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x71f1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x71f1, .value=0xbc, .type=IO_READ},
        {.addr=0x71f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xa233, .a=0x7a, .x=0xe6, .y=0x03, .sp=0xc7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa233, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa234, .a=0x7b, .x=0xe6, .y=0x03, .sp=0xc7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa233, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa233, .value=0xbc, .type=IO_READ},
        {.addr=0xa234, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BC, _BC_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x05d3, .a=0xcd, .x=0x76, .y=0x03, .sp=0x5b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x05d3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x05d4, .a=0xce, .x=0x76, .y=0x03, .sp=0x5b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x05d3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x05d3, .value=0xbc, .type=IO_READ},
        {.addr=0x05d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BC 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
