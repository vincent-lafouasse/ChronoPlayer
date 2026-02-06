#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_7D, _7D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x71ff, .a=0xa4, .x=0x10, .y=0xf8, .sp=0xb4, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x71ff, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7200, .a=0x10, .x=0x10, .y=0xf8, .sp=0xb4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x71ff, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x71ff, .value=0x7d, .type=IO_READ},
        {.addr=0x7200, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0001) {
    const struct CPU_State initial_cpu = {.pc=0xd56d, .a=0x05, .x=0x20, .y=0xb5, .sp=0xb7, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xd56d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd56e, .a=0x20, .x=0x20, .y=0xb5, .sp=0xb7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd56d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd56d, .value=0x7d, .type=IO_READ},
        {.addr=0xd56e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0002) {
    const struct CPU_State initial_cpu = {.pc=0x189d, .a=0x19, .x=0x98, .y=0x58, .sp=0x61, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x189d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x189e, .a=0x98, .x=0x98, .y=0x58, .sp=0x61, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x189d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x189d, .value=0x7d, .type=IO_READ},
        {.addr=0x189e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x7269, .a=0xa2, .x=0x03, .y=0xff, .sp=0x9b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7269, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x726a, .a=0x03, .x=0x03, .y=0xff, .sp=0x9b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7269, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7269, .value=0x7d, .type=IO_READ},
        {.addr=0x726a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0004) {
    const struct CPU_State initial_cpu = {.pc=0xf538, .a=0x4c, .x=0xa8, .y=0x7f, .sp=0xf9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xf538, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf539, .a=0xa8, .x=0xa8, .y=0x7f, .sp=0xf9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf538, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf538, .value=0x7d, .type=IO_READ},
        {.addr=0xf539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0005) {
    const struct CPU_State initial_cpu = {.pc=0x2098, .a=0x4e, .x=0xf8, .y=0xd9, .sp=0x24, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2098, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2099, .a=0xf8, .x=0xf8, .y=0xd9, .sp=0x24, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2098, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2098, .value=0x7d, .type=IO_READ},
        {.addr=0x2099, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0006) {
    const struct CPU_State initial_cpu = {.pc=0x4043, .a=0x7c, .x=0x21, .y=0x0b, .sp=0x17, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4043, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4044, .a=0x21, .x=0x21, .y=0x0b, .sp=0x17, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4043, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4043, .value=0x7d, .type=IO_READ},
        {.addr=0x4044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x4846, .a=0xc3, .x=0xd8, .y=0xfe, .sp=0xc3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x4846, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4847, .a=0xd8, .x=0xd8, .y=0xfe, .sp=0xc3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4846, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4846, .value=0x7d, .type=IO_READ},
        {.addr=0x4847, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x0d52, .a=0xd0, .x=0x10, .y=0x4d, .sp=0x85, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0d52, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0d53, .a=0x10, .x=0x10, .y=0x4d, .sp=0x85, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0d52, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0d52, .value=0x7d, .type=IO_READ},
        {.addr=0x0d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xcf4b, .a=0x8d, .x=0x4e, .y=0xbd, .sp=0x7f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf4b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcf4c, .a=0x4e, .x=0x4e, .y=0xbd, .sp=0x7f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcf4b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcf4b, .value=0x7d, .type=IO_READ},
        {.addr=0xcf4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_000A) {
    const struct CPU_State initial_cpu = {.pc=0xb71a, .a=0x6f, .x=0x8f, .y=0x9d, .sp=0x83, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb71a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb71b, .a=0x8f, .x=0x8f, .y=0x9d, .sp=0x83, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb71a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb71a, .value=0x7d, .type=IO_READ},
        {.addr=0xb71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_000B) {
    const struct CPU_State initial_cpu = {.pc=0xb062, .a=0x50, .x=0xa5, .y=0x7b, .sp=0x2c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb062, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb063, .a=0xa5, .x=0xa5, .y=0x7b, .sp=0x2c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb062, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb062, .value=0x7d, .type=IO_READ},
        {.addr=0xb063, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x3b08, .a=0xee, .x=0x2e, .y=0xc1, .sp=0xea, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3b08, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3b09, .a=0x2e, .x=0x2e, .y=0xc1, .sp=0xea, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3b08, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3b08, .value=0x7d, .type=IO_READ},
        {.addr=0x3b09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_000D) {
    const struct CPU_State initial_cpu = {.pc=0xabd2, .a=0x61, .x=0x0a, .y=0xe3, .sp=0x36, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xabd2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xabd3, .a=0x0a, .x=0x0a, .y=0xe3, .sp=0x36, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xabd2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xabd2, .value=0x7d, .type=IO_READ},
        {.addr=0xabd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_000E) {
    const struct CPU_State initial_cpu = {.pc=0xaa86, .a=0x0d, .x=0x8d, .y=0x64, .sp=0x95, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xaa86, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xaa87, .a=0x8d, .x=0x8d, .y=0x64, .sp=0x95, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xaa86, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaa86, .value=0x7d, .type=IO_READ},
        {.addr=0xaa87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_000F) {
    const struct CPU_State initial_cpu = {.pc=0xf3ed, .a=0x6b, .x=0x23, .y=0xcf, .sp=0xe3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ed, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf3ee, .a=0x23, .x=0x23, .y=0xcf, .sp=0xe3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf3ed, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf3ed, .value=0x7d, .type=IO_READ},
        {.addr=0xf3ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x2146, .a=0x12, .x=0x7c, .y=0x68, .sp=0xfb, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2146, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2147, .a=0x7c, .x=0x7c, .y=0x68, .sp=0xfb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2146, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2146, .value=0x7d, .type=IO_READ},
        {.addr=0x2147, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0011) {
    const struct CPU_State initial_cpu = {.pc=0xe74c, .a=0xaf, .x=0x4a, .y=0x49, .sp=0x7e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe74c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe74d, .a=0x4a, .x=0x4a, .y=0x49, .sp=0x7e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe74c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe74c, .value=0x7d, .type=IO_READ},
        {.addr=0xe74d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x501f, .a=0xc8, .x=0x77, .y=0x66, .sp=0x05, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x501f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5020, .a=0x77, .x=0x77, .y=0x66, .sp=0x05, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x501f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x501f, .value=0x7d, .type=IO_READ},
        {.addr=0x5020, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x4cbe, .a=0xbd, .x=0x51, .y=0x13, .sp=0xc4, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4cbe, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4cbf, .a=0x51, .x=0x51, .y=0x13, .sp=0xc4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4cbe, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4cbe, .value=0x7d, .type=IO_READ},
        {.addr=0x4cbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0014) {
    const struct CPU_State initial_cpu = {.pc=0xa147, .a=0xac, .x=0x42, .y=0x7a, .sp=0x17, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xa147, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa148, .a=0x42, .x=0x42, .y=0x7a, .sp=0x17, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa147, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa147, .value=0x7d, .type=IO_READ},
        {.addr=0xa148, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0015) {
    const struct CPU_State initial_cpu = {.pc=0xd56d, .a=0x33, .x=0x95, .y=0xc5, .sp=0x30, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xd56d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd56e, .a=0x95, .x=0x95, .y=0xc5, .sp=0x30, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd56d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd56d, .value=0x7d, .type=IO_READ},
        {.addr=0xd56e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0016) {
    const struct CPU_State initial_cpu = {.pc=0xb7f7, .a=0x9f, .x=0x26, .y=0x4b, .sp=0x9d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb7f8, .a=0x26, .x=0x26, .y=0x4b, .sp=0x9d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb7f7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb7f7, .value=0x7d, .type=IO_READ},
        {.addr=0xb7f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0017) {
    const struct CPU_State initial_cpu = {.pc=0x548c, .a=0x89, .x=0xaf, .y=0xad, .sp=0xc5, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x548c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x548d, .a=0xaf, .x=0xaf, .y=0xad, .sp=0xc5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x548c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x548c, .value=0x7d, .type=IO_READ},
        {.addr=0x548d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0018) {
    const struct CPU_State initial_cpu = {.pc=0xee32, .a=0x34, .x=0xc8, .y=0x19, .sp=0xea, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xee32, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xee33, .a=0xc8, .x=0xc8, .y=0x19, .sp=0xea, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xee32, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xee32, .value=0x7d, .type=IO_READ},
        {.addr=0xee33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x25da, .a=0x5b, .x=0x83, .y=0xc4, .sp=0x27, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x25da, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x25db, .a=0x83, .x=0x83, .y=0xc4, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x25da, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x25da, .value=0x7d, .type=IO_READ},
        {.addr=0x25db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_001A) {
    const struct CPU_State initial_cpu = {.pc=0xe9cd, .a=0x38, .x=0xe4, .y=0x6c, .sp=0x03, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe9cd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe9ce, .a=0xe4, .x=0xe4, .y=0x6c, .sp=0x03, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe9cd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe9cd, .value=0x7d, .type=IO_READ},
        {.addr=0xe9ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x0853, .a=0x29, .x=0x44, .y=0x7d, .sp=0xe1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0853, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0854, .a=0x44, .x=0x44, .y=0x7d, .sp=0xe1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0853, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0853, .value=0x7d, .type=IO_READ},
        {.addr=0x0854, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_001C) {
    const struct CPU_State initial_cpu = {.pc=0x5195, .a=0xe6, .x=0xe8, .y=0x57, .sp=0x3a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5195, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5196, .a=0xe8, .x=0xe8, .y=0x57, .sp=0x3a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5195, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5195, .value=0x7d, .type=IO_READ},
        {.addr=0x5196, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_001D) {
    const struct CPU_State initial_cpu = {.pc=0x2691, .a=0xaa, .x=0x4a, .y=0xba, .sp=0xdd, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2691, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2692, .a=0x4a, .x=0x4a, .y=0xba, .sp=0xdd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2691, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2691, .value=0x7d, .type=IO_READ},
        {.addr=0x2692, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x6966, .a=0x88, .x=0xb3, .y=0xb9, .sp=0x2a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6966, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6967, .a=0xb3, .x=0xb3, .y=0xb9, .sp=0x2a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6966, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6966, .value=0x7d, .type=IO_READ},
        {.addr=0x6967, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_001F) {
    const struct CPU_State initial_cpu = {.pc=0xabc9, .a=0x23, .x=0x99, .y=0x08, .sp=0xcc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xabc9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xabca, .a=0x99, .x=0x99, .y=0x08, .sp=0xcc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xabc9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xabc9, .value=0x7d, .type=IO_READ},
        {.addr=0xabca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0020) {
    const struct CPU_State initial_cpu = {.pc=0xa7b1, .a=0x4c, .x=0x34, .y=0x5e, .sp=0x8c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa7b1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa7b2, .a=0x34, .x=0x34, .y=0x5e, .sp=0x8c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa7b1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa7b1, .value=0x7d, .type=IO_READ},
        {.addr=0xa7b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x751b, .a=0xb5, .x=0xb6, .y=0x9f, .sp=0x4d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x751b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x751c, .a=0xb6, .x=0xb6, .y=0x9f, .sp=0x4d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x751b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x751b, .value=0x7d, .type=IO_READ},
        {.addr=0x751c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0022) {
    const struct CPU_State initial_cpu = {.pc=0x523f, .a=0xe4, .x=0x9f, .y=0xc4, .sp=0x5f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x523f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5240, .a=0x9f, .x=0x9f, .y=0xc4, .sp=0x5f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x523f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x523f, .value=0x7d, .type=IO_READ},
        {.addr=0x5240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0023) {
    const struct CPU_State initial_cpu = {.pc=0x6b08, .a=0xa0, .x=0xee, .y=0xa6, .sp=0xeb, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6b08, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6b09, .a=0xee, .x=0xee, .y=0xa6, .sp=0xeb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6b08, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6b08, .value=0x7d, .type=IO_READ},
        {.addr=0x6b09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0024) {
    const struct CPU_State initial_cpu = {.pc=0x15c0, .a=0xad, .x=0xd5, .y=0xb8, .sp=0x57, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x15c0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x15c1, .a=0xd5, .x=0xd5, .y=0xb8, .sp=0x57, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x15c0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x15c0, .value=0x7d, .type=IO_READ},
        {.addr=0x15c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x3c07, .a=0xfd, .x=0x40, .y=0x78, .sp=0x00, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3c07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3c08, .a=0x40, .x=0x40, .y=0x78, .sp=0x00, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3c07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3c07, .value=0x7d, .type=IO_READ},
        {.addr=0x3c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0026) {
    const struct CPU_State initial_cpu = {.pc=0x8680, .a=0x2c, .x=0x38, .y=0x99, .sp=0xf7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8680, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8681, .a=0x38, .x=0x38, .y=0x99, .sp=0xf7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8680, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8680, .value=0x7d, .type=IO_READ},
        {.addr=0x8681, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x703d, .a=0x11, .x=0x50, .y=0xed, .sp=0x9e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x703d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x703e, .a=0x50, .x=0x50, .y=0xed, .sp=0x9e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x703d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x703d, .value=0x7d, .type=IO_READ},
        {.addr=0x703e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0028) {
    const struct CPU_State initial_cpu = {.pc=0x2cc5, .a=0x2a, .x=0xe2, .y=0xb8, .sp=0xbb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2cc6, .a=0xe2, .x=0xe2, .y=0xb8, .sp=0xbb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2cc5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2cc5, .value=0x7d, .type=IO_READ},
        {.addr=0x2cc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0029) {
    const struct CPU_State initial_cpu = {.pc=0x6d0c, .a=0xc1, .x=0x8c, .y=0x2d, .sp=0x40, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6d0c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6d0d, .a=0x8c, .x=0x8c, .y=0x2d, .sp=0x40, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6d0c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6d0c, .value=0x7d, .type=IO_READ},
        {.addr=0x6d0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_002A) {
    const struct CPU_State initial_cpu = {.pc=0xa9a8, .a=0x2f, .x=0xa4, .y=0xb4, .sp=0x80, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa9a9, .a=0xa4, .x=0xa4, .y=0xb4, .sp=0x80, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa9a8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa9a8, .value=0x7d, .type=IO_READ},
        {.addr=0xa9a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xf094, .a=0x40, .x=0x37, .y=0x9b, .sp=0xe5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xf094, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf095, .a=0x37, .x=0x37, .y=0x9b, .sp=0xe5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf094, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf094, .value=0x7d, .type=IO_READ},
        {.addr=0xf095, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_002C) {
    const struct CPU_State initial_cpu = {.pc=0xbee9, .a=0x77, .x=0xb8, .y=0x8e, .sp=0x0a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xbee9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbeea, .a=0xb8, .x=0xb8, .y=0x8e, .sp=0x0a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xbee9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbee9, .value=0x7d, .type=IO_READ},
        {.addr=0xbeea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_002D) {
    const struct CPU_State initial_cpu = {.pc=0x785f, .a=0xb8, .x=0x9f, .y=0x80, .sp=0x47, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x785f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7860, .a=0x9f, .x=0x9f, .y=0x80, .sp=0x47, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x785f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x785f, .value=0x7d, .type=IO_READ},
        {.addr=0x7860, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x447a, .a=0xbf, .x=0xd2, .y=0x2f, .sp=0xc5, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x447a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x447b, .a=0xd2, .x=0xd2, .y=0x2f, .sp=0xc5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x447a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x447a, .value=0x7d, .type=IO_READ},
        {.addr=0x447b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x08ff, .a=0xd0, .x=0xff, .y=0x0d, .sp=0x07, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x08ff, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0900, .a=0xff, .x=0xff, .y=0x0d, .sp=0x07, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x08ff, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x08ff, .value=0x7d, .type=IO_READ},
        {.addr=0x0900, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x84b7, .a=0x50, .x=0xd0, .y=0xe4, .sp=0x8e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x84b7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x84b8, .a=0xd0, .x=0xd0, .y=0xe4, .sp=0x8e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x84b7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x84b7, .value=0x7d, .type=IO_READ},
        {.addr=0x84b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x8bc1, .a=0xfe, .x=0x12, .y=0x86, .sp=0xe4, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8bc2, .a=0x12, .x=0x12, .y=0x86, .sp=0xe4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8bc1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8bc1, .value=0x7d, .type=IO_READ},
        {.addr=0x8bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0032) {
    const struct CPU_State initial_cpu = {.pc=0x670b, .a=0xa0, .x=0x28, .y=0xee, .sp=0xac, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x670b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x670c, .a=0x28, .x=0x28, .y=0xee, .sp=0xac, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x670b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x670b, .value=0x7d, .type=IO_READ},
        {.addr=0x670c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0033) {
    const struct CPU_State initial_cpu = {.pc=0xe6d2, .a=0xaa, .x=0x99, .y=0x81, .sp=0x91, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe6d3, .a=0x99, .x=0x99, .y=0x81, .sp=0x91, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe6d2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe6d2, .value=0x7d, .type=IO_READ},
        {.addr=0xe6d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0034) {
    const struct CPU_State initial_cpu = {.pc=0x9a3b, .a=0x79, .x=0x4d, .y=0xac, .sp=0xad, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x9a3b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9a3c, .a=0x4d, .x=0x4d, .y=0xac, .sp=0xad, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9a3b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9a3b, .value=0x7d, .type=IO_READ},
        {.addr=0x9a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0035) {
    const struct CPU_State initial_cpu = {.pc=0xebb9, .a=0x86, .x=0x6c, .y=0xa5, .sp=0xcd, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xebb9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xebba, .a=0x6c, .x=0x6c, .y=0xa5, .sp=0xcd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xebb9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xebb9, .value=0x7d, .type=IO_READ},
        {.addr=0xebba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0036) {
    const struct CPU_State initial_cpu = {.pc=0x2688, .a=0x61, .x=0xb8, .y=0x88, .sp=0x6b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2688, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2689, .a=0xb8, .x=0xb8, .y=0x88, .sp=0x6b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2688, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2688, .value=0x7d, .type=IO_READ},
        {.addr=0x2689, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0037) {
    const struct CPU_State initial_cpu = {.pc=0x1b4c, .a=0x0b, .x=0xfc, .y=0x13, .sp=0x50, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1b4c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1b4d, .a=0xfc, .x=0xfc, .y=0x13, .sp=0x50, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1b4c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1b4c, .value=0x7d, .type=IO_READ},
        {.addr=0x1b4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x1768, .a=0xbd, .x=0xce, .y=0xdb, .sp=0xc9, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1768, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1769, .a=0xce, .x=0xce, .y=0xdb, .sp=0xc9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1768, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1768, .value=0x7d, .type=IO_READ},
        {.addr=0x1769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x1316, .a=0x95, .x=0x32, .y=0xfe, .sp=0x55, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1316, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1317, .a=0x32, .x=0x32, .y=0xfe, .sp=0x55, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1316, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1316, .value=0x7d, .type=IO_READ},
        {.addr=0x1317, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_003A) {
    const struct CPU_State initial_cpu = {.pc=0xafac, .a=0x65, .x=0xf1, .y=0x5a, .sp=0xf2, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xafac, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xafad, .a=0xf1, .x=0xf1, .y=0x5a, .sp=0xf2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xafac, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xafac, .value=0x7d, .type=IO_READ},
        {.addr=0xafad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9b86, .a=0x6e, .x=0x63, .y=0xe9, .sp=0xcb, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9b86, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9b87, .a=0x63, .x=0x63, .y=0xe9, .sp=0xcb, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9b86, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9b86, .value=0x7d, .type=IO_READ},
        {.addr=0x9b87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x5742, .a=0x39, .x=0x87, .y=0x56, .sp=0xad, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x5742, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5743, .a=0x87, .x=0x87, .y=0x56, .sp=0xad, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5742, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5742, .value=0x7d, .type=IO_READ},
        {.addr=0x5743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x547a, .a=0xc0, .x=0x97, .y=0x04, .sp=0x06, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x547a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x547b, .a=0x97, .x=0x97, .y=0x04, .sp=0x06, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x547a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x547a, .value=0x7d, .type=IO_READ},
        {.addr=0x547b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x7f3a, .a=0xd8, .x=0xf0, .y=0xca, .sp=0x98, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x7f3a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7f3b, .a=0xf0, .x=0xf0, .y=0xca, .sp=0x98, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7f3a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7f3a, .value=0x7d, .type=IO_READ},
        {.addr=0x7f3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x15fa, .a=0xc1, .x=0xee, .y=0x26, .sp=0xc0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x15fa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x15fb, .a=0xee, .x=0xee, .y=0x26, .sp=0xc0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x15fa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x15fa, .value=0x7d, .type=IO_READ},
        {.addr=0x15fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0040) {
    const struct CPU_State initial_cpu = {.pc=0xe71b, .a=0x23, .x=0x6a, .y=0x3a, .sp=0x8e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe71b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe71c, .a=0x6a, .x=0x6a, .y=0x3a, .sp=0x8e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe71b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe71b, .value=0x7d, .type=IO_READ},
        {.addr=0xe71c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x9e52, .a=0x6e, .x=0x81, .y=0xd0, .sp=0x69, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9e52, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9e53, .a=0x81, .x=0x81, .y=0xd0, .sp=0x69, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9e52, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9e52, .value=0x7d, .type=IO_READ},
        {.addr=0x9e53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0042) {
    const struct CPU_State initial_cpu = {.pc=0x0bc4, .a=0x98, .x=0xaa, .y=0xa7, .sp=0xf5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0bc5, .a=0xaa, .x=0xaa, .y=0xa7, .sp=0xf5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0bc4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0bc4, .value=0x7d, .type=IO_READ},
        {.addr=0x0bc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0043) {
    const struct CPU_State initial_cpu = {.pc=0x7035, .a=0x9d, .x=0x13, .y=0x23, .sp=0x22, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x7035, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7036, .a=0x13, .x=0x13, .y=0x23, .sp=0x22, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7035, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7035, .value=0x7d, .type=IO_READ},
        {.addr=0x7036, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x3f37, .a=0x14, .x=0xda, .y=0x1a, .sp=0xe5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3f37, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3f38, .a=0xda, .x=0xda, .y=0x1a, .sp=0xe5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3f37, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3f37, .value=0x7d, .type=IO_READ},
        {.addr=0x3f38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0045) {
    const struct CPU_State initial_cpu = {.pc=0xdd8a, .a=0x84, .x=0xb3, .y=0x18, .sp=0x80, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xdd8a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdd8b, .a=0xb3, .x=0xb3, .y=0x18, .sp=0x80, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdd8a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdd8a, .value=0x7d, .type=IO_READ},
        {.addr=0xdd8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0046) {
    const struct CPU_State initial_cpu = {.pc=0xe959, .a=0x22, .x=0x7f, .y=0x56, .sp=0x6d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe959, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe95a, .a=0x7f, .x=0x7f, .y=0x56, .sp=0x6d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe959, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe959, .value=0x7d, .type=IO_READ},
        {.addr=0xe95a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0047) {
    const struct CPU_State initial_cpu = {.pc=0xde92, .a=0xe3, .x=0x1c, .y=0xd7, .sp=0x05, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xde92, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xde93, .a=0x1c, .x=0x1c, .y=0xd7, .sp=0x05, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xde92, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xde92, .value=0x7d, .type=IO_READ},
        {.addr=0xde93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x1062, .a=0xa3, .x=0xa3, .y=0x77, .sp=0x49, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1062, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1063, .a=0xa3, .x=0xa3, .y=0x77, .sp=0x49, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1062, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1062, .value=0x7d, .type=IO_READ},
        {.addr=0x1063, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0049) {
    const struct CPU_State initial_cpu = {.pc=0x8aa8, .a=0x0f, .x=0x84, .y=0xcc, .sp=0x68, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8aa9, .a=0x84, .x=0x84, .y=0xcc, .sp=0x68, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8aa8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8aa8, .value=0x7d, .type=IO_READ},
        {.addr=0x8aa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_004A) {
    const struct CPU_State initial_cpu = {.pc=0x8631, .a=0x66, .x=0xc1, .y=0x63, .sp=0xf5, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x8631, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8632, .a=0xc1, .x=0xc1, .y=0x63, .sp=0xf5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8631, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8631, .value=0x7d, .type=IO_READ},
        {.addr=0x8632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_004B) {
    const struct CPU_State initial_cpu = {.pc=0xfee7, .a=0x1f, .x=0x38, .y=0xcc, .sp=0x81, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xfee7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfee8, .a=0x38, .x=0x38, .y=0xcc, .sp=0x81, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xfee7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfee7, .value=0x7d, .type=IO_READ},
        {.addr=0xfee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x7434, .a=0x23, .x=0x35, .y=0xe7, .sp=0xc9, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7434, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7435, .a=0x35, .x=0x35, .y=0xe7, .sp=0xc9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7434, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7434, .value=0x7d, .type=IO_READ},
        {.addr=0x7435, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x96b4, .a=0xb9, .x=0xed, .y=0x83, .sp=0x50, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x96b4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x96b5, .a=0xed, .x=0xed, .y=0x83, .sp=0x50, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x96b4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x96b4, .value=0x7d, .type=IO_READ},
        {.addr=0x96b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x1f97, .a=0x61, .x=0x39, .y=0x70, .sp=0x56, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1f97, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1f98, .a=0x39, .x=0x39, .y=0x70, .sp=0x56, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1f97, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1f97, .value=0x7d, .type=IO_READ},
        {.addr=0x1f98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x2764, .a=0x15, .x=0x7f, .y=0xa6, .sp=0x13, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2764, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2765, .a=0x7f, .x=0x7f, .y=0xa6, .sp=0x13, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2764, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2764, .value=0x7d, .type=IO_READ},
        {.addr=0x2765, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0050) {
    const struct CPU_State initial_cpu = {.pc=0xd22d, .a=0x2d, .x=0x0a, .y=0x2d, .sp=0x38, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd22d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd22e, .a=0x0a, .x=0x0a, .y=0x2d, .sp=0x38, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd22d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd22d, .value=0x7d, .type=IO_READ},
        {.addr=0xd22e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x64ff, .a=0xbd, .x=0x4f, .y=0xfe, .sp=0x48, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x64ff, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6500, .a=0x4f, .x=0x4f, .y=0xfe, .sp=0x48, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x64ff, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x64ff, .value=0x7d, .type=IO_READ},
        {.addr=0x6500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0052) {
    const struct CPU_State initial_cpu = {.pc=0xbb9b, .a=0x60, .x=0xd4, .y=0x82, .sp=0x28, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbb9c, .a=0xd4, .x=0xd4, .y=0x82, .sp=0x28, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbb9b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbb9b, .value=0x7d, .type=IO_READ},
        {.addr=0xbb9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x4aeb, .a=0x4f, .x=0xbb, .y=0x3e, .sp=0x51, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4aeb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4aec, .a=0xbb, .x=0xbb, .y=0x3e, .sp=0x51, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4aeb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4aeb, .value=0x7d, .type=IO_READ},
        {.addr=0x4aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x9216, .a=0xb6, .x=0x19, .y=0x73, .sp=0x25, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9216, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9217, .a=0x19, .x=0x19, .y=0x73, .sp=0x25, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9216, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9216, .value=0x7d, .type=IO_READ},
        {.addr=0x9217, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0055) {
    const struct CPU_State initial_cpu = {.pc=0xe207, .a=0xb4, .x=0xfc, .y=0x4a, .sp=0xc3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe207, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe208, .a=0xfc, .x=0xfc, .y=0x4a, .sp=0xc3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe207, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe207, .value=0x7d, .type=IO_READ},
        {.addr=0xe208, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0056) {
    const struct CPU_State initial_cpu = {.pc=0xf13c, .a=0x97, .x=0x28, .y=0x5b, .sp=0xc3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf13c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf13d, .a=0x28, .x=0x28, .y=0x5b, .sp=0xc3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf13c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf13c, .value=0x7d, .type=IO_READ},
        {.addr=0xf13d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x420b, .a=0x5c, .x=0x56, .y=0x17, .sp=0x70, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x420b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x420c, .a=0x56, .x=0x56, .y=0x17, .sp=0x70, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x420b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x420b, .value=0x7d, .type=IO_READ},
        {.addr=0x420c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0058) {
    const struct CPU_State initial_cpu = {.pc=0xc821, .a=0x8f, .x=0x69, .y=0xbe, .sp=0x2d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc821, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc822, .a=0x69, .x=0x69, .y=0xbe, .sp=0x2d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc821, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc821, .value=0x7d, .type=IO_READ},
        {.addr=0xc822, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x99f7, .a=0xa8, .x=0xec, .y=0x6c, .sp=0xce, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x99f7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x99f8, .a=0xec, .x=0xec, .y=0x6c, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x99f7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x99f7, .value=0x7d, .type=IO_READ},
        {.addr=0x99f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_005A) {
    const struct CPU_State initial_cpu = {.pc=0x17d9, .a=0xd2, .x=0x99, .y=0x18, .sp=0xa1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x17d9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x17da, .a=0x99, .x=0x99, .y=0x18, .sp=0xa1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x17d9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x17d9, .value=0x7d, .type=IO_READ},
        {.addr=0x17da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_005B) {
    const struct CPU_State initial_cpu = {.pc=0x0978, .a=0x41, .x=0x32, .y=0xba, .sp=0xef, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0978, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0979, .a=0x32, .x=0x32, .y=0xba, .sp=0xef, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0978, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0978, .value=0x7d, .type=IO_READ},
        {.addr=0x0979, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_005C) {
    const struct CPU_State initial_cpu = {.pc=0xa0b3, .a=0x95, .x=0x1f, .y=0x1e, .sp=0x3f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa0b4, .a=0x1f, .x=0x1f, .y=0x1e, .sp=0x3f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa0b3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa0b3, .value=0x7d, .type=IO_READ},
        {.addr=0xa0b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x2aeb, .a=0x20, .x=0xe2, .y=0x7e, .sp=0xc2, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2aeb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2aec, .a=0xe2, .x=0xe2, .y=0x7e, .sp=0xc2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2aeb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2aeb, .value=0x7d, .type=IO_READ},
        {.addr=0x2aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x33c6, .a=0xd8, .x=0x7e, .y=0xcb, .sp=0xaa, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x33c6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x33c7, .a=0x7e, .x=0x7e, .y=0xcb, .sp=0xaa, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x33c6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x33c6, .value=0x7d, .type=IO_READ},
        {.addr=0x33c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_005F) {
    const struct CPU_State initial_cpu = {.pc=0xa198, .a=0x6e, .x=0x22, .y=0xcd, .sp=0xf1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa198, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa199, .a=0x22, .x=0x22, .y=0xcd, .sp=0xf1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa198, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa198, .value=0x7d, .type=IO_READ},
        {.addr=0xa199, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0060) {
    const struct CPU_State initial_cpu = {.pc=0xc451, .a=0xdf, .x=0x13, .y=0x95, .sp=0x52, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc451, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc452, .a=0x13, .x=0x13, .y=0x95, .sp=0x52, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc451, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc451, .value=0x7d, .type=IO_READ},
        {.addr=0xc452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x8767, .a=0x84, .x=0x1f, .y=0xdb, .sp=0xdf, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8767, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8768, .a=0x1f, .x=0x1f, .y=0xdb, .sp=0xdf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8767, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8767, .value=0x7d, .type=IO_READ},
        {.addr=0x8768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x4499, .a=0x37, .x=0xc0, .y=0x99, .sp=0x58, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4499, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x449a, .a=0xc0, .x=0xc0, .y=0x99, .sp=0x58, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4499, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4499, .value=0x7d, .type=IO_READ},
        {.addr=0x449a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0063) {
    const struct CPU_State initial_cpu = {.pc=0x1c12, .a=0x0c, .x=0xdf, .y=0x4a, .sp=0xd9, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1c12, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1c13, .a=0xdf, .x=0xdf, .y=0x4a, .sp=0xd9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1c12, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1c12, .value=0x7d, .type=IO_READ},
        {.addr=0x1c13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x91a5, .a=0x8f, .x=0x6e, .y=0x0d, .sp=0x38, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x91a5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x91a6, .a=0x6e, .x=0x6e, .y=0x0d, .sp=0x38, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x91a5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x91a5, .value=0x7d, .type=IO_READ},
        {.addr=0x91a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0065) {
    const struct CPU_State initial_cpu = {.pc=0xcaed, .a=0x8a, .x=0x66, .y=0x05, .sp=0xf6, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xcaed, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcaee, .a=0x66, .x=0x66, .y=0x05, .sp=0xf6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcaed, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcaed, .value=0x7d, .type=IO_READ},
        {.addr=0xcaee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x6ccc, .a=0x54, .x=0x3a, .y=0xa6, .sp=0x89, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6ccc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6ccd, .a=0x3a, .x=0x3a, .y=0xa6, .sp=0x89, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6ccc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6ccc, .value=0x7d, .type=IO_READ},
        {.addr=0x6ccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0067) {
    const struct CPU_State initial_cpu = {.pc=0xa3cb, .a=0x3e, .x=0xc3, .y=0xb1, .sp=0x15, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa3cb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa3cc, .a=0xc3, .x=0xc3, .y=0xb1, .sp=0x15, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa3cb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa3cb, .value=0x7d, .type=IO_READ},
        {.addr=0xa3cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0068) {
    const struct CPU_State initial_cpu = {.pc=0xe995, .a=0xe1, .x=0x7c, .y=0x5c, .sp=0x7e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe995, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe996, .a=0x7c, .x=0x7c, .y=0x5c, .sp=0x7e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe995, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe995, .value=0x7d, .type=IO_READ},
        {.addr=0xe996, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0069) {
    const struct CPU_State initial_cpu = {.pc=0x2c2a, .a=0x76, .x=0xc6, .y=0xfd, .sp=0x17, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2c2a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2c2b, .a=0xc6, .x=0xc6, .y=0xfd, .sp=0x17, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2c2a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2c2a, .value=0x7d, .type=IO_READ},
        {.addr=0x2c2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x6f4d, .a=0x12, .x=0xa8, .y=0x15, .sp=0x49, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6f4d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6f4e, .a=0xa8, .x=0xa8, .y=0x15, .sp=0x49, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6f4d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6f4d, .value=0x7d, .type=IO_READ},
        {.addr=0x6f4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_006B) {
    const struct CPU_State initial_cpu = {.pc=0x2156, .a=0xf6, .x=0x66, .y=0x59, .sp=0x8c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2156, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2157, .a=0x66, .x=0x66, .y=0x59, .sp=0x8c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2156, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2156, .value=0x7d, .type=IO_READ},
        {.addr=0x2157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x173d, .a=0x43, .x=0x7c, .y=0x21, .sp=0x79, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x173d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x173e, .a=0x7c, .x=0x7c, .y=0x21, .sp=0x79, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x173d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x173d, .value=0x7d, .type=IO_READ},
        {.addr=0x173e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x85fd, .a=0x25, .x=0x4b, .y=0x1b, .sp=0x77, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x85fd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x85fe, .a=0x4b, .x=0x4b, .y=0x1b, .sp=0x77, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x85fd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x85fd, .value=0x7d, .type=IO_READ},
        {.addr=0x85fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_006E) {
    const struct CPU_State initial_cpu = {.pc=0x16e7, .a=0x16, .x=0x08, .y=0xfe, .sp=0xff, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x16e7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x16e8, .a=0x08, .x=0x08, .y=0xfe, .sp=0xff, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x16e7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x16e7, .value=0x7d, .type=IO_READ},
        {.addr=0x16e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x5094, .a=0x04, .x=0x6a, .y=0x41, .sp=0xbf, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5094, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5095, .a=0x6a, .x=0x6a, .y=0x41, .sp=0xbf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5094, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5094, .value=0x7d, .type=IO_READ},
        {.addr=0x5095, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x9ae9, .a=0x3a, .x=0x84, .y=0x96, .sp=0xc8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9ae9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9aea, .a=0x84, .x=0x84, .y=0x96, .sp=0xc8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9ae9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9ae9, .value=0x7d, .type=IO_READ},
        {.addr=0x9aea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x1d9c, .a=0xf9, .x=0x90, .y=0x43, .sp=0xfc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1d9d, .a=0x90, .x=0x90, .y=0x43, .sp=0xfc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1d9c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1d9c, .value=0x7d, .type=IO_READ},
        {.addr=0x1d9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0072) {
    const struct CPU_State initial_cpu = {.pc=0x503d, .a=0xdf, .x=0x8c, .y=0x27, .sp=0x0f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x503d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x503e, .a=0x8c, .x=0x8c, .y=0x27, .sp=0x0f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x503d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x503d, .value=0x7d, .type=IO_READ},
        {.addr=0x503e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb4d7, .a=0x80, .x=0x4e, .y=0x6d, .sp=0xa2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb4d8, .a=0x4e, .x=0x4e, .y=0x6d, .sp=0xa2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb4d7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb4d7, .value=0x7d, .type=IO_READ},
        {.addr=0xb4d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0074) {
    const struct CPU_State initial_cpu = {.pc=0xb7ef, .a=0x67, .x=0x6e, .y=0xf5, .sp=0x6e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ef, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb7f0, .a=0x6e, .x=0x6e, .y=0xf5, .sp=0x6e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb7ef, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb7ef, .value=0x7d, .type=IO_READ},
        {.addr=0xb7f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xf176, .a=0xba, .x=0xd0, .y=0xbd, .sp=0x5c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xf176, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf177, .a=0xd0, .x=0xd0, .y=0xbd, .sp=0x5c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf176, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf176, .value=0x7d, .type=IO_READ},
        {.addr=0xf177, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0076) {
    const struct CPU_State initial_cpu = {.pc=0xe660, .a=0x82, .x=0x7d, .y=0x09, .sp=0xd0, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe660, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe661, .a=0x7d, .x=0x7d, .y=0x09, .sp=0xd0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe660, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe660, .value=0x7d, .type=IO_READ},
        {.addr=0xe661, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0077) {
    const struct CPU_State initial_cpu = {.pc=0xc4a8, .a=0x91, .x=0x37, .y=0x58, .sp=0x95, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc4a8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc4a9, .a=0x37, .x=0x37, .y=0x58, .sp=0x95, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc4a8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc4a8, .value=0x7d, .type=IO_READ},
        {.addr=0xc4a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0078) {
    const struct CPU_State initial_cpu = {.pc=0xd1a9, .a=0xd4, .x=0x2c, .y=0xdf, .sp=0xaa, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd1aa, .a=0x2c, .x=0x2c, .y=0xdf, .sp=0xaa, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd1a9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd1a9, .value=0x7d, .type=IO_READ},
        {.addr=0xd1aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf6bd, .a=0x13, .x=0xa7, .y=0x08, .sp=0x40, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf6bd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf6be, .a=0xa7, .x=0xa7, .y=0x08, .sp=0x40, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf6bd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf6bd, .value=0x7d, .type=IO_READ},
        {.addr=0xf6be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_007A) {
    const struct CPU_State initial_cpu = {.pc=0x1d41, .a=0xbc, .x=0xd2, .y=0x04, .sp=0xce, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1d41, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1d42, .a=0xd2, .x=0xd2, .y=0x04, .sp=0xce, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1d41, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1d41, .value=0x7d, .type=IO_READ},
        {.addr=0x1d42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_007B) {
    const struct CPU_State initial_cpu = {.pc=0x25a7, .a=0xc5, .x=0xda, .y=0x3e, .sp=0xea, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x25a7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x25a8, .a=0xda, .x=0xda, .y=0x3e, .sp=0xea, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x25a7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x25a7, .value=0x7d, .type=IO_READ},
        {.addr=0x25a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x9622, .a=0x8b, .x=0xbe, .y=0xe9, .sp=0xf9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x9622, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9623, .a=0xbe, .x=0xbe, .y=0xe9, .sp=0xf9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9622, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9622, .value=0x7d, .type=IO_READ},
        {.addr=0x9623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_007D) {
    const struct CPU_State initial_cpu = {.pc=0x2b1d, .a=0x7d, .x=0x47, .y=0xb4, .sp=0xc6, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x2b1d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2b1e, .a=0x47, .x=0x47, .y=0xb4, .sp=0xc6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2b1d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2b1d, .value=0x7d, .type=IO_READ},
        {.addr=0x2b1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x23f7, .a=0xf7, .x=0x08, .y=0x29, .sp=0xd9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x23f7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x23f8, .a=0x08, .x=0x08, .y=0x29, .sp=0xd9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x23f7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x23f7, .value=0x7d, .type=IO_READ},
        {.addr=0x23f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x9659, .a=0xb9, .x=0x56, .y=0x7d, .sp=0x28, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9659, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x965a, .a=0x56, .x=0x56, .y=0x7d, .sp=0x28, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9659, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9659, .value=0x7d, .type=IO_READ},
        {.addr=0x965a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x3097, .a=0x86, .x=0x7c, .y=0xbc, .sp=0x62, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3097, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3098, .a=0x7c, .x=0x7c, .y=0xbc, .sp=0x62, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3097, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3097, .value=0x7d, .type=IO_READ},
        {.addr=0x3098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x0554, .a=0x10, .x=0x29, .y=0x85, .sp=0x6c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0554, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0555, .a=0x29, .x=0x29, .y=0x85, .sp=0x6c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0554, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0554, .value=0x7d, .type=IO_READ},
        {.addr=0x0555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x387e, .a=0xd3, .x=0x70, .y=0x8b, .sp=0x8a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x387e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x387f, .a=0x70, .x=0x70, .y=0x8b, .sp=0x8a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x387e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x387e, .value=0x7d, .type=IO_READ},
        {.addr=0x387f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x0b10, .a=0x93, .x=0xa0, .y=0xbe, .sp=0xde, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0b10, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0b11, .a=0xa0, .x=0xa0, .y=0xbe, .sp=0xde, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0b10, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0b10, .value=0x7d, .type=IO_READ},
        {.addr=0x0b11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0084) {
    const struct CPU_State initial_cpu = {.pc=0xa2f5, .a=0x08, .x=0x1b, .y=0x42, .sp=0x5e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa2f6, .a=0x1b, .x=0x1b, .y=0x42, .sp=0x5e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa2f5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa2f5, .value=0x7d, .type=IO_READ},
        {.addr=0xa2f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x6763, .a=0xa6, .x=0xfc, .y=0x03, .sp=0xf2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x6763, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6764, .a=0xfc, .x=0xfc, .y=0x03, .sp=0xf2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6763, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6763, .value=0x7d, .type=IO_READ},
        {.addr=0x6764, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0086) {
    const struct CPU_State initial_cpu = {.pc=0xf90a, .a=0x81, .x=0x9e, .y=0x3c, .sp=0xbb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf90a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf90b, .a=0x9e, .x=0x9e, .y=0x3c, .sp=0xbb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf90a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf90a, .value=0x7d, .type=IO_READ},
        {.addr=0xf90b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0087) {
    const struct CPU_State initial_cpu = {.pc=0xb6d0, .a=0x5e, .x=0x4f, .y=0x6e, .sp=0x11, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb6d1, .a=0x4f, .x=0x4f, .y=0x6e, .sp=0x11, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb6d0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb6d0, .value=0x7d, .type=IO_READ},
        {.addr=0xb6d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0088) {
    const struct CPU_State initial_cpu = {.pc=0xcea1, .a=0x04, .x=0x26, .y=0x19, .sp=0x7c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xcea1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcea2, .a=0x26, .x=0x26, .y=0x19, .sp=0x7c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcea1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcea1, .value=0x7d, .type=IO_READ},
        {.addr=0xcea2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0089) {
    const struct CPU_State initial_cpu = {.pc=0x553e, .a=0x50, .x=0x90, .y=0xb9, .sp=0xe6, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x553e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x553f, .a=0x90, .x=0x90, .y=0xb9, .sp=0xe6, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x553e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x553e, .value=0x7d, .type=IO_READ},
        {.addr=0x553f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_008A) {
    const struct CPU_State initial_cpu = {.pc=0xa2ae, .a=0x69, .x=0x51, .y=0x96, .sp=0x29, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ae, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa2af, .a=0x51, .x=0x51, .y=0x96, .sp=0x29, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa2ae, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa2ae, .value=0x7d, .type=IO_READ},
        {.addr=0xa2af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xbe5f, .a=0x87, .x=0x13, .y=0xec, .sp=0x96, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xbe5f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbe60, .a=0x13, .x=0x13, .y=0xec, .sp=0x96, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xbe5f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbe5f, .value=0x7d, .type=IO_READ},
        {.addr=0xbe60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_008C) {
    const struct CPU_State initial_cpu = {.pc=0x6a48, .a=0x51, .x=0x7f, .y=0x20, .sp=0x8b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x6a48, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6a49, .a=0x7f, .x=0x7f, .y=0x20, .sp=0x8b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6a48, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6a48, .value=0x7d, .type=IO_READ},
        {.addr=0x6a49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_008D) {
    const struct CPU_State initial_cpu = {.pc=0xd773, .a=0x1f, .x=0xd6, .y=0x60, .sp=0x54, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd773, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd774, .a=0xd6, .x=0xd6, .y=0x60, .sp=0x54, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd773, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd773, .value=0x7d, .type=IO_READ},
        {.addr=0xd774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x6aba, .a=0x68, .x=0x4f, .y=0xf6, .sp=0x44, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6aba, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6abb, .a=0x4f, .x=0x4f, .y=0xf6, .sp=0x44, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6aba, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6aba, .value=0x7d, .type=IO_READ},
        {.addr=0x6abb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3612, .a=0xee, .x=0xe8, .y=0xb0, .sp=0x42, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3612, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3613, .a=0xe8, .x=0xe8, .y=0xb0, .sp=0x42, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3612, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3612, .value=0x7d, .type=IO_READ},
        {.addr=0x3613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x69fb, .a=0x61, .x=0xe8, .y=0xe3, .sp=0xa5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x69fb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x69fc, .a=0xe8, .x=0xe8, .y=0xe3, .sp=0xa5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x69fb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x69fb, .value=0x7d, .type=IO_READ},
        {.addr=0x69fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0091) {
    const struct CPU_State initial_cpu = {.pc=0x3104, .a=0x1c, .x=0xff, .y=0x37, .sp=0x54, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3104, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3105, .a=0xff, .x=0xff, .y=0x37, .sp=0x54, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3104, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3104, .value=0x7d, .type=IO_READ},
        {.addr=0x3105, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0092) {
    const struct CPU_State initial_cpu = {.pc=0x810a, .a=0x3a, .x=0xf1, .y=0x8e, .sp=0x5a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x810a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x810b, .a=0xf1, .x=0xf1, .y=0x8e, .sp=0x5a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x810a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x810a, .value=0x7d, .type=IO_READ},
        {.addr=0x810b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x5fa6, .a=0x85, .x=0x83, .y=0x8d, .sp=0x40, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5fa7, .a=0x83, .x=0x83, .y=0x8d, .sp=0x40, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5fa6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5fa6, .value=0x7d, .type=IO_READ},
        {.addr=0x5fa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0094) {
    const struct CPU_State initial_cpu = {.pc=0x10ad, .a=0xc7, .x=0x67, .y=0xec, .sp=0xae, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x10ad, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x10ae, .a=0x67, .x=0x67, .y=0xec, .sp=0xae, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x10ad, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x10ad, .value=0x7d, .type=IO_READ},
        {.addr=0x10ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0095) {
    const struct CPU_State initial_cpu = {.pc=0xf4c3, .a=0xf2, .x=0x92, .y=0xe7, .sp=0x33, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf4c4, .a=0x92, .x=0x92, .y=0xe7, .sp=0x33, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf4c3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf4c3, .value=0x7d, .type=IO_READ},
        {.addr=0xf4c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x6bc9, .a=0x3d, .x=0x47, .y=0x2f, .sp=0xed, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6bca, .a=0x47, .x=0x47, .y=0x2f, .sp=0xed, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6bc9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6bc9, .value=0x7d, .type=IO_READ},
        {.addr=0x6bca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0097) {
    const struct CPU_State initial_cpu = {.pc=0xd546, .a=0x58, .x=0x87, .y=0x36, .sp=0xc7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd546, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd547, .a=0x87, .x=0x87, .y=0x36, .sp=0xc7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd546, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd546, .value=0x7d, .type=IO_READ},
        {.addr=0xd547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0098) {
    const struct CPU_State initial_cpu = {.pc=0x03ce, .a=0x0d, .x=0xcb, .y=0x40, .sp=0x7b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x03ce, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x03cf, .a=0xcb, .x=0xcb, .y=0x40, .sp=0x7b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x03ce, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x03ce, .value=0x7d, .type=IO_READ},
        {.addr=0x03cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0099) {
    const struct CPU_State initial_cpu = {.pc=0xbc68, .a=0x7e, .x=0x65, .y=0x16, .sp=0x4e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xbc68, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbc69, .a=0x65, .x=0x65, .y=0x16, .sp=0x4e, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xbc68, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbc68, .value=0x7d, .type=IO_READ},
        {.addr=0xbc69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_009A) {
    const struct CPU_State initial_cpu = {.pc=0xcecc, .a=0x3e, .x=0x96, .y=0xaa, .sp=0x83, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xcecc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcecd, .a=0x96, .x=0x96, .y=0xaa, .sp=0x83, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcecc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcecc, .value=0x7d, .type=IO_READ},
        {.addr=0xcecd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_009B) {
    const struct CPU_State initial_cpu = {.pc=0x7689, .a=0xa5, .x=0xa3, .y=0x0a, .sp=0xdf, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7689, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x768a, .a=0xa3, .x=0xa3, .y=0x0a, .sp=0xdf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7689, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7689, .value=0x7d, .type=IO_READ},
        {.addr=0x768a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x6225, .a=0xbd, .x=0x66, .y=0xcf, .sp=0xea, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6225, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6226, .a=0x66, .x=0x66, .y=0xcf, .sp=0xea, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6225, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6225, .value=0x7d, .type=IO_READ},
        {.addr=0x6226, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_009D) {
    const struct CPU_State initial_cpu = {.pc=0xe187, .a=0x3c, .x=0x5e, .y=0xe8, .sp=0x51, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xe187, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe188, .a=0x5e, .x=0x5e, .y=0xe8, .sp=0x51, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe187, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe187, .value=0x7d, .type=IO_READ},
        {.addr=0xe188, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x4d50, .a=0x33, .x=0x03, .y=0xd7, .sp=0xd2, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4d50, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4d51, .a=0x03, .x=0x03, .y=0xd7, .sp=0xd2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4d50, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4d50, .value=0x7d, .type=IO_READ},
        {.addr=0x4d51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_009F) {
    const struct CPU_State initial_cpu = {.pc=0xfe18, .a=0x6c, .x=0x01, .y=0xf1, .sp=0xc8, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xfe18, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfe19, .a=0x01, .x=0x01, .y=0xf1, .sp=0xc8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfe18, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfe18, .value=0x7d, .type=IO_READ},
        {.addr=0xfe19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xebd0, .a=0x10, .x=0x9b, .y=0x0f, .sp=0x88, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xebd0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xebd1, .a=0x9b, .x=0x9b, .y=0x0f, .sp=0x88, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xebd0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xebd0, .value=0x7d, .type=IO_READ},
        {.addr=0xebd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xc852, .a=0x19, .x=0xdd, .y=0x77, .sp=0xbc, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc852, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc853, .a=0xdd, .x=0xdd, .y=0x77, .sp=0xbc, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc852, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc852, .value=0x7d, .type=IO_READ},
        {.addr=0xc853, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x9e3e, .a=0xcc, .x=0x75, .y=0x57, .sp=0x92, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e3e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9e3f, .a=0x75, .x=0x75, .y=0x57, .sp=0x92, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9e3e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9e3e, .value=0x7d, .type=IO_READ},
        {.addr=0x9e3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x1c34, .a=0xce, .x=0x8f, .y=0x04, .sp=0x38, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x1c34, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1c35, .a=0x8f, .x=0x8f, .y=0x04, .sp=0x38, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1c34, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1c34, .value=0x7d, .type=IO_READ},
        {.addr=0x1c35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x6f6c, .a=0x52, .x=0xc7, .y=0x98, .sp=0xf8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6f6c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6f6d, .a=0xc7, .x=0xc7, .y=0x98, .sp=0xf8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6f6c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6f6c, .value=0x7d, .type=IO_READ},
        {.addr=0x6f6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x1d3d, .a=0x63, .x=0xf6, .y=0x74, .sp=0xbf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1d3d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1d3e, .a=0xf6, .x=0xf6, .y=0x74, .sp=0xbf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1d3d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1d3d, .value=0x7d, .type=IO_READ},
        {.addr=0x1d3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xb532, .a=0x52, .x=0xbf, .y=0xd4, .sp=0x55, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb532, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb533, .a=0xbf, .x=0xbf, .y=0xd4, .sp=0x55, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb532, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb532, .value=0x7d, .type=IO_READ},
        {.addr=0xb533, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x4e7c, .a=0x2e, .x=0x16, .y=0x90, .sp=0x60, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4e7c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4e7d, .a=0x16, .x=0x16, .y=0x90, .sp=0x60, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4e7c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4e7c, .value=0x7d, .type=IO_READ},
        {.addr=0x4e7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xf569, .a=0x2d, .x=0xb1, .y=0x94, .sp=0x4d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf569, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf56a, .a=0xb1, .x=0xb1, .y=0x94, .sp=0x4d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf569, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf569, .value=0x7d, .type=IO_READ},
        {.addr=0xf56a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x2e2c, .a=0x06, .x=0xad, .y=0xa5, .sp=0x55, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x2e2c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e2d, .a=0xad, .x=0xad, .y=0xa5, .sp=0x55, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2e2c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e2c, .value=0x7d, .type=IO_READ},
        {.addr=0x2e2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x40d7, .a=0x3a, .x=0xce, .y=0x96, .sp=0x43, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x40d7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x40d8, .a=0xce, .x=0xce, .y=0x96, .sp=0x43, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x40d7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x40d7, .value=0x7d, .type=IO_READ},
        {.addr=0x40d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x0daf, .a=0x71, .x=0x5e, .y=0x3a, .sp=0xf5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0daf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0db0, .a=0x5e, .x=0x5e, .y=0x3a, .sp=0xf5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0daf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0daf, .value=0x7d, .type=IO_READ},
        {.addr=0x0db0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x3fe3, .a=0xaa, .x=0xcf, .y=0x96, .sp=0x93, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3fe4, .a=0xcf, .x=0xcf, .y=0x96, .sp=0x93, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3fe3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3fe3, .value=0x7d, .type=IO_READ},
        {.addr=0x3fe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x2b9e, .a=0xc7, .x=0xc0, .y=0x1c, .sp=0x0b, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2b9f, .a=0xc0, .x=0xc0, .y=0x1c, .sp=0x0b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2b9e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2b9e, .value=0x7d, .type=IO_READ},
        {.addr=0x2b9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x8e60, .a=0x6c, .x=0xd2, .y=0xaf, .sp=0xe8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8e60, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8e61, .a=0xd2, .x=0xd2, .y=0xaf, .sp=0xe8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8e60, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8e60, .value=0x7d, .type=IO_READ},
        {.addr=0x8e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x97d9, .a=0x11, .x=0xdf, .y=0x46, .sp=0x9e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x97d9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x97da, .a=0xdf, .x=0xdf, .y=0x46, .sp=0x9e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x97d9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x97d9, .value=0x7d, .type=IO_READ},
        {.addr=0x97da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xb92f, .a=0x68, .x=0x7b, .y=0xb8, .sp=0x12, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xb92f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb930, .a=0x7b, .x=0x7b, .y=0xb8, .sp=0x12, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb92f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb92f, .value=0x7d, .type=IO_READ},
        {.addr=0xb930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x7032, .a=0x2f, .x=0x81, .y=0xb1, .sp=0x00, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7032, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7033, .a=0x81, .x=0x81, .y=0xb1, .sp=0x00, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7032, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7032, .value=0x7d, .type=IO_READ},
        {.addr=0x7033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x5ee1, .a=0x39, .x=0xd8, .y=0x88, .sp=0xb3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5ee2, .a=0xd8, .x=0xd8, .y=0x88, .sp=0xb3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5ee1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5ee1, .value=0x7d, .type=IO_READ},
        {.addr=0x5ee2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7492, .a=0xd6, .x=0xd6, .y=0x9c, .sp=0x98, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7492, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7493, .a=0xd6, .x=0xd6, .y=0x9c, .sp=0x98, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7492, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7492, .value=0x7d, .type=IO_READ},
        {.addr=0x7493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x59a3, .a=0xc8, .x=0xe3, .y=0x79, .sp=0x63, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x59a3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x59a4, .a=0xe3, .x=0xe3, .y=0x79, .sp=0x63, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x59a3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x59a3, .value=0x7d, .type=IO_READ},
        {.addr=0x59a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xe527, .a=0xfd, .x=0x08, .y=0x30, .sp=0x4d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe527, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe528, .a=0x08, .x=0x08, .y=0x30, .sp=0x4d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe527, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe527, .value=0x7d, .type=IO_READ},
        {.addr=0xe528, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xdf6c, .a=0x3c, .x=0xb7, .y=0x0e, .sp=0x27, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf6d, .a=0xb7, .x=0xb7, .y=0x0e, .sp=0x27, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xdf6c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf6c, .value=0x7d, .type=IO_READ},
        {.addr=0xdf6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xa1b9, .a=0x13, .x=0xcf, .y=0xa5, .sp=0x8c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa1ba, .a=0xcf, .x=0xcf, .y=0xa5, .sp=0x8c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa1b9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa1b9, .value=0x7d, .type=IO_READ},
        {.addr=0xa1ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xe42d, .a=0xcf, .x=0x87, .y=0xfb, .sp=0xc2, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xe42d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe42e, .a=0x87, .x=0x87, .y=0xfb, .sp=0xc2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe42d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe42d, .value=0x7d, .type=IO_READ},
        {.addr=0xe42e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x25d3, .a=0xd5, .x=0xcf, .y=0xed, .sp=0x83, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x25d3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x25d4, .a=0xcf, .x=0xcf, .y=0xed, .sp=0x83, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x25d3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x25d3, .value=0x7d, .type=IO_READ},
        {.addr=0x25d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x9965, .a=0xb8, .x=0x4c, .y=0x23, .sp=0x26, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9965, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9966, .a=0x4c, .x=0x4c, .y=0x23, .sp=0x26, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9965, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9965, .value=0x7d, .type=IO_READ},
        {.addr=0x9966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xf6b8, .a=0xa2, .x=0xbd, .y=0x89, .sp=0xa0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf6b9, .a=0xbd, .x=0xbd, .y=0x89, .sp=0xa0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf6b8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf6b8, .value=0x7d, .type=IO_READ},
        {.addr=0xf6b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x07dd, .a=0x5d, .x=0xd7, .y=0x9d, .sp=0x2f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x07dd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x07de, .a=0xd7, .x=0xd7, .y=0x9d, .sp=0x2f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x07dd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x07dd, .value=0x7d, .type=IO_READ},
        {.addr=0x07de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xaf66, .a=0x82, .x=0x66, .y=0xed, .sp=0x0f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf66, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xaf67, .a=0x66, .x=0x66, .y=0xed, .sp=0x0f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xaf66, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaf66, .value=0x7d, .type=IO_READ},
        {.addr=0xaf67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x7236, .a=0x2a, .x=0x15, .y=0x18, .sp=0x27, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7236, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7237, .a=0x15, .x=0x15, .y=0x18, .sp=0x27, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7236, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7236, .value=0x7d, .type=IO_READ},
        {.addr=0x7237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x4f98, .a=0x2a, .x=0x2c, .y=0x08, .sp=0xab, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4f98, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4f99, .a=0x2c, .x=0x2c, .y=0x08, .sp=0xab, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4f98, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4f98, .value=0x7d, .type=IO_READ},
        {.addr=0x4f99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xd0c8, .a=0x5b, .x=0xac, .y=0xdf, .sp=0x83, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd0c8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd0c9, .a=0xac, .x=0xac, .y=0xdf, .sp=0x83, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd0c8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd0c8, .value=0x7d, .type=IO_READ},
        {.addr=0xd0c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x5b65, .a=0x5e, .x=0xf5, .y=0x37, .sp=0xfe, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5b65, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5b66, .a=0xf5, .x=0xf5, .y=0x37, .sp=0xfe, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5b65, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5b65, .value=0x7d, .type=IO_READ},
        {.addr=0x5b66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xa66d, .a=0x6d, .x=0x57, .y=0xa8, .sp=0x63, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa66d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa66e, .a=0x57, .x=0x57, .y=0xa8, .sp=0x63, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa66d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa66d, .value=0x7d, .type=IO_READ},
        {.addr=0xa66e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5a10, .a=0x8d, .x=0x98, .y=0x4b, .sp=0xdb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5a10, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5a11, .a=0x98, .x=0x98, .y=0x4b, .sp=0xdb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5a10, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5a10, .value=0x7d, .type=IO_READ},
        {.addr=0x5a11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x3b77, .a=0x4c, .x=0xb7, .y=0x06, .sp=0x1b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3b77, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3b78, .a=0xb7, .x=0xb7, .y=0x06, .sp=0x1b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3b77, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3b77, .value=0x7d, .type=IO_READ},
        {.addr=0x3b78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x9b21, .a=0x73, .x=0xd5, .y=0xde, .sp=0xb8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9b21, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9b22, .a=0xd5, .x=0xd5, .y=0xde, .sp=0xb8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9b21, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9b21, .value=0x7d, .type=IO_READ},
        {.addr=0x9b22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x566b, .a=0x01, .x=0x12, .y=0x18, .sp=0x61, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x566b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x566c, .a=0x12, .x=0x12, .y=0x18, .sp=0x61, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x566b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x566b, .value=0x7d, .type=IO_READ},
        {.addr=0x566c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x86ea, .a=0xd5, .x=0xfd, .y=0x89, .sp=0xd6, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x86ea, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x86eb, .a=0xfd, .x=0xfd, .y=0x89, .sp=0xd6, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x86ea, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x86ea, .value=0x7d, .type=IO_READ},
        {.addr=0x86eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x87f4, .a=0x06, .x=0x7f, .y=0xb0, .sp=0xa2, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x87f4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x87f5, .a=0x7f, .x=0x7f, .y=0xb0, .sp=0xa2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x87f4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x87f4, .value=0x7d, .type=IO_READ},
        {.addr=0x87f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xbf5f, .a=0x3b, .x=0x88, .y=0xdb, .sp=0x93, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xbf5f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbf60, .a=0x88, .x=0x88, .y=0xdb, .sp=0x93, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xbf5f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbf5f, .value=0x7d, .type=IO_READ},
        {.addr=0xbf60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x224b, .a=0x8d, .x=0x26, .y=0x3e, .sp=0x1f, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x224b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x224c, .a=0x26, .x=0x26, .y=0x3e, .sp=0x1f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x224b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x224b, .value=0x7d, .type=IO_READ},
        {.addr=0x224c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x5dcc, .a=0xfa, .x=0xcc, .y=0xf5, .sp=0xe2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5dcd, .a=0xcc, .x=0xcc, .y=0xf5, .sp=0xe2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x5dcc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5dcc, .value=0x7d, .type=IO_READ},
        {.addr=0x5dcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa4d6, .a=0xdb, .x=0x14, .y=0xd1, .sp=0xf5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa4d7, .a=0x14, .x=0x14, .y=0xd1, .sp=0xf5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa4d6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa4d6, .value=0x7d, .type=IO_READ},
        {.addr=0xa4d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xfe4d, .a=0xb4, .x=0x4e, .y=0xfb, .sp=0xbc, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xfe4d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfe4e, .a=0x4e, .x=0x4e, .y=0xfb, .sp=0xbc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xfe4d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfe4d, .value=0x7d, .type=IO_READ},
        {.addr=0xfe4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x3b34, .a=0x38, .x=0x1a, .y=0x65, .sp=0xd3, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3b34, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3b35, .a=0x1a, .x=0x1a, .y=0x65, .sp=0xd3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3b34, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3b34, .value=0x7d, .type=IO_READ},
        {.addr=0x3b35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xfc8e, .a=0x37, .x=0x4c, .y=0xc2, .sp=0xa1, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfc8f, .a=0x4c, .x=0x4c, .y=0xc2, .sp=0xa1, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xfc8e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfc8e, .value=0x7d, .type=IO_READ},
        {.addr=0xfc8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x4dc3, .a=0x58, .x=0xde, .y=0x9a, .sp=0xf2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4dc4, .a=0xde, .x=0xde, .y=0x9a, .sp=0xf2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4dc3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4dc3, .value=0x7d, .type=IO_READ},
        {.addr=0x4dc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x9523, .a=0x11, .x=0xa4, .y=0xe8, .sp=0x27, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x9523, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9524, .a=0xa4, .x=0xa4, .y=0xe8, .sp=0x27, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9523, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9523, .value=0x7d, .type=IO_READ},
        {.addr=0x9524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xb549, .a=0x50, .x=0x05, .y=0x03, .sp=0x3e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xb549, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb54a, .a=0x05, .x=0x05, .y=0x03, .sp=0x3e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb549, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb549, .value=0x7d, .type=IO_READ},
        {.addr=0xb54a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x95ca, .a=0x67, .x=0x02, .y=0x15, .sp=0x85, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x95ca, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x95cb, .a=0x02, .x=0x02, .y=0x15, .sp=0x85, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x95ca, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x95ca, .value=0x7d, .type=IO_READ},
        {.addr=0x95cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x6464, .a=0xca, .x=0x0e, .y=0x1f, .sp=0x6d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6464, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6465, .a=0x0e, .x=0x0e, .y=0x1f, .sp=0x6d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6464, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6464, .value=0x7d, .type=IO_READ},
        {.addr=0x6465, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x009c, .a=0xdc, .x=0x28, .y=0x1d, .sp=0xfe, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x009d, .a=0x28, .x=0x28, .y=0x1d, .sp=0xfe, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x009c, .value=0x7d, .type=IO_READ},
        {.addr=0x009d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6a63, .a=0xed, .x=0x90, .y=0x5d, .sp=0x00, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a63, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6a64, .a=0x90, .x=0x90, .y=0x5d, .sp=0x00, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6a63, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6a63, .value=0x7d, .type=IO_READ},
        {.addr=0x6a64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x2a48, .a=0x19, .x=0xf4, .y=0x12, .sp=0x7d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2a48, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2a49, .a=0xf4, .x=0xf4, .y=0x12, .sp=0x7d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2a48, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2a48, .value=0x7d, .type=IO_READ},
        {.addr=0x2a49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x510b, .a=0x16, .x=0x7f, .y=0xa5, .sp=0xda, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x510b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x510c, .a=0x7f, .x=0x7f, .y=0xa5, .sp=0xda, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x510b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x510b, .value=0x7d, .type=IO_READ},
        {.addr=0x510c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xc837, .a=0xea, .x=0x3f, .y=0x2d, .sp=0x4d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xc837, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc838, .a=0x3f, .x=0x3f, .y=0x2d, .sp=0x4d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc837, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc837, .value=0x7d, .type=IO_READ},
        {.addr=0xc838, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x961e, .a=0x62, .x=0x1b, .y=0x2d, .sp=0x33, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x961e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x961f, .a=0x1b, .x=0x1b, .y=0x2d, .sp=0x33, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x961e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x961e, .value=0x7d, .type=IO_READ},
        {.addr=0x961f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x7cd8, .a=0xc9, .x=0xea, .y=0xa8, .sp=0x07, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7cd9, .a=0xea, .x=0xea, .y=0xa8, .sp=0x07, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7cd8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7cd8, .value=0x7d, .type=IO_READ},
        {.addr=0x7cd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x2874, .a=0x0d, .x=0xe4, .y=0x37, .sp=0xa8, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2874, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2875, .a=0xe4, .x=0xe4, .y=0x37, .sp=0xa8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2874, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2874, .value=0x7d, .type=IO_READ},
        {.addr=0x2875, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xf71b, .a=0xe0, .x=0x1a, .y=0xd0, .sp=0x09, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xf71b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf71c, .a=0x1a, .x=0x1a, .y=0xd0, .sp=0x09, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf71b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf71b, .value=0x7d, .type=IO_READ},
        {.addr=0xf71c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x0121, .a=0xf7, .x=0xef, .y=0xd9, .sp=0xea, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0122, .a=0xef, .x=0xef, .y=0xd9, .sp=0xea, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0121, .value=0x7d, .type=IO_READ},
        {.addr=0x0122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb3a2, .a=0x97, .x=0x4e, .y=0xeb, .sp=0xc5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb3a3, .a=0x4e, .x=0x4e, .y=0xeb, .sp=0xc5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb3a2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb3a2, .value=0x7d, .type=IO_READ},
        {.addr=0xb3a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x43a4, .a=0xea, .x=0x56, .y=0x6b, .sp=0x4b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x43a4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x43a5, .a=0x56, .x=0x56, .y=0x6b, .sp=0x4b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x43a4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x43a4, .value=0x7d, .type=IO_READ},
        {.addr=0x43a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xb059, .a=0xf4, .x=0xa2, .y=0x95, .sp=0x70, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb059, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb05a, .a=0xa2, .x=0xa2, .y=0x95, .sp=0x70, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb059, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb059, .value=0x7d, .type=IO_READ},
        {.addr=0xb05a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xb599, .a=0x34, .x=0x74, .y=0x7e, .sp=0x61, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb599, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb59a, .a=0x74, .x=0x74, .y=0x7e, .sp=0x61, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb599, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb599, .value=0x7d, .type=IO_READ},
        {.addr=0xb59a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x72dd, .a=0x85, .x=0x36, .y=0x0f, .sp=0x17, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x72dd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x72de, .a=0x36, .x=0x36, .y=0x0f, .sp=0x17, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x72dd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x72dd, .value=0x7d, .type=IO_READ},
        {.addr=0x72de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x6540, .a=0x21, .x=0x73, .y=0x3a, .sp=0xd7, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x6540, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6541, .a=0x73, .x=0x73, .y=0x3a, .sp=0xd7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6540, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6540, .value=0x7d, .type=IO_READ},
        {.addr=0x6541, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x2166, .a=0x9b, .x=0xc3, .y=0x6f, .sp=0x42, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x2166, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2167, .a=0xc3, .x=0xc3, .y=0x6f, .sp=0x42, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2166, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2166, .value=0x7d, .type=IO_READ},
        {.addr=0x2167, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x22b8, .a=0x6a, .x=0xe6, .y=0x50, .sp=0x12, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x22b8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x22b9, .a=0xe6, .x=0xe6, .y=0x50, .sp=0x12, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x22b8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x22b8, .value=0x7d, .type=IO_READ},
        {.addr=0x22b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xffec, .a=0x3f, .x=0xfc, .y=0xc5, .sp=0x4f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xffec, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xffed, .a=0xfc, .x=0xfc, .y=0xc5, .sp=0x4f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xffec, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xffec, .value=0x7d, .type=IO_READ},
        {.addr=0xffed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x02af, .a=0xfd, .x=0x67, .y=0xfe, .sp=0xf9, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x02af, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x02b0, .a=0x67, .x=0x67, .y=0xfe, .sp=0xf9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x02af, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x02af, .value=0x7d, .type=IO_READ},
        {.addr=0x02b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xb0c0, .a=0x0a, .x=0x54, .y=0x3f, .sp=0xf8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb0c1, .a=0x54, .x=0x54, .y=0x3f, .sp=0xf8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb0c0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb0c0, .value=0x7d, .type=IO_READ},
        {.addr=0xb0c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x1cc3, .a=0xac, .x=0x1e, .y=0x3a, .sp=0xb1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1cc4, .a=0x1e, .x=0x1e, .y=0x3a, .sp=0xb1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1cc3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1cc3, .value=0x7d, .type=IO_READ},
        {.addr=0x1cc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x7ed7, .a=0x51, .x=0x78, .y=0x24, .sp=0x0f, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x7ed7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7ed8, .a=0x78, .x=0x78, .y=0x24, .sp=0x0f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x7ed7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7ed7, .value=0x7d, .type=IO_READ},
        {.addr=0x7ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xe894, .a=0xed, .x=0x41, .y=0x6f, .sp=0x4b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xe894, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe895, .a=0x41, .x=0x41, .y=0x6f, .sp=0x4b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe894, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe894, .value=0x7d, .type=IO_READ},
        {.addr=0xe895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x9415, .a=0xc6, .x=0xdb, .y=0xb8, .sp=0x97, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9415, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9416, .a=0xdb, .x=0xdb, .y=0xb8, .sp=0x97, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9415, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9415, .value=0x7d, .type=IO_READ},
        {.addr=0x9416, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x8516, .a=0xd8, .x=0xf7, .y=0xc8, .sp=0x34, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x8516, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8517, .a=0xf7, .x=0xf7, .y=0xc8, .sp=0x34, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8516, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8516, .value=0x7d, .type=IO_READ},
        {.addr=0x8517, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x5835, .a=0x07, .x=0x7b, .y=0x3f, .sp=0x72, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5835, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5836, .a=0x7b, .x=0x7b, .y=0x3f, .sp=0x72, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5835, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5835, .value=0x7d, .type=IO_READ},
        {.addr=0x5836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xb059, .a=0x50, .x=0x34, .y=0xaf, .sp=0x70, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb059, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb05a, .a=0x34, .x=0x34, .y=0xaf, .sp=0x70, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb059, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb059, .value=0x7d, .type=IO_READ},
        {.addr=0xb05a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x6fb9, .a=0xd0, .x=0x42, .y=0xef, .sp=0x3a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6fba, .a=0x42, .x=0x42, .y=0xef, .sp=0x3a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6fb9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6fb9, .value=0x7d, .type=IO_READ},
        {.addr=0x6fba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xd217, .a=0x42, .x=0x97, .y=0xc2, .sp=0x96, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xd217, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd218, .a=0x97, .x=0x97, .y=0xc2, .sp=0x96, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd217, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd217, .value=0x7d, .type=IO_READ},
        {.addr=0xd218, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xd2dc, .a=0x73, .x=0x61, .y=0xf5, .sp=0x6b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd2dc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd2dd, .a=0x61, .x=0x61, .y=0xf5, .sp=0x6b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd2dc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd2dc, .value=0x7d, .type=IO_READ},
        {.addr=0xd2dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x3f54, .a=0x77, .x=0xb7, .y=0x52, .sp=0x22, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x3f54, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3f55, .a=0xb7, .x=0xb7, .y=0x52, .sp=0x22, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3f54, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3f54, .value=0x7d, .type=IO_READ},
        {.addr=0x3f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x3195, .a=0xf5, .x=0x68, .y=0x00, .sp=0x52, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x3195, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3196, .a=0x68, .x=0x68, .y=0x00, .sp=0x52, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3195, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3195, .value=0x7d, .type=IO_READ},
        {.addr=0x3196, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x6d90, .a=0xd0, .x=0xb0, .y=0xcc, .sp=0x4b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x6d90, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6d91, .a=0xb0, .x=0xb0, .y=0xcc, .sp=0x4b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6d90, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6d90, .value=0x7d, .type=IO_READ},
        {.addr=0x6d91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x7bb9, .a=0x9a, .x=0x11, .y=0xb6, .sp=0x90, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7bba, .a=0x11, .x=0x11, .y=0xb6, .sp=0x90, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7bb9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7bb9, .value=0x7d, .type=IO_READ},
        {.addr=0x7bba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x3c38, .a=0x23, .x=0x11, .y=0xbe, .sp=0x5e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3c38, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3c39, .a=0x11, .x=0x11, .y=0xbe, .sp=0x5e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3c38, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3c38, .value=0x7d, .type=IO_READ},
        {.addr=0x3c39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xebf0, .a=0x9e, .x=0xdb, .y=0x09, .sp=0x38, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xebf0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xebf1, .a=0xdb, .x=0xdb, .y=0x09, .sp=0x38, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xebf0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xebf0, .value=0x7d, .type=IO_READ},
        {.addr=0xebf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xc846, .a=0xb9, .x=0x83, .y=0x6b, .sp=0x78, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xc846, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc847, .a=0x83, .x=0x83, .y=0x6b, .sp=0x78, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc846, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc846, .value=0x7d, .type=IO_READ},
        {.addr=0xc847, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xfe00, .a=0x23, .x=0x70, .y=0x74, .sp=0x3d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xfe00, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfe01, .a=0x70, .x=0x70, .y=0x74, .sp=0x3d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xfe00, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfe00, .value=0x7d, .type=IO_READ},
        {.addr=0xfe01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xe257, .a=0xd3, .x=0x4f, .y=0x3c, .sp=0xa4, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xe257, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe258, .a=0x4f, .x=0x4f, .y=0x3c, .sp=0xa4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe257, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe257, .value=0x7d, .type=IO_READ},
        {.addr=0xe258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x5343, .a=0x65, .x=0x6a, .y=0x97, .sp=0x1e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5343, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5344, .a=0x6a, .x=0x6a, .y=0x97, .sp=0x1e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5343, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5343, .value=0x7d, .type=IO_READ},
        {.addr=0x5344, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xb509, .a=0xfd, .x=0xc7, .y=0xe8, .sp=0xaa, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xb509, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb50a, .a=0xc7, .x=0xc7, .y=0xe8, .sp=0xaa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xb509, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb509, .value=0x7d, .type=IO_READ},
        {.addr=0xb50a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x22a7, .a=0xf7, .x=0xf5, .y=0x69, .sp=0x59, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x22a7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x22a8, .a=0xf5, .x=0xf5, .y=0x69, .sp=0x59, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x22a7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x22a7, .value=0x7d, .type=IO_READ},
        {.addr=0x22a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0100) {
    const struct CPU_State initial_cpu = {.pc=0xbac1, .a=0x22, .x=0x0c, .y=0x6e, .sp=0x48, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xbac1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbac2, .a=0x0c, .x=0x0c, .y=0x6e, .sp=0x48, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xbac1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbac1, .value=0x7d, .type=IO_READ},
        {.addr=0xbac2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0101) {
    const struct CPU_State initial_cpu = {.pc=0x8538, .a=0xb6, .x=0xf7, .y=0x48, .sp=0xd9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x8538, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8539, .a=0xf7, .x=0xf7, .y=0x48, .sp=0xd9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8538, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8538, .value=0x7d, .type=IO_READ},
        {.addr=0x8539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0102) {
    const struct CPU_State initial_cpu = {.pc=0xef1c, .a=0xfc, .x=0x42, .y=0xb4, .sp=0x3b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xef1c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xef1d, .a=0x42, .x=0x42, .y=0xb4, .sp=0x3b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xef1c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xef1c, .value=0x7d, .type=IO_READ},
        {.addr=0xef1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0103) {
    const struct CPU_State initial_cpu = {.pc=0xf423, .a=0xc4, .x=0x61, .y=0x5d, .sp=0x79, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xf423, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf424, .a=0x61, .x=0x61, .y=0x5d, .sp=0x79, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf423, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf423, .value=0x7d, .type=IO_READ},
        {.addr=0xf424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0104) {
    const struct CPU_State initial_cpu = {.pc=0xde21, .a=0x8d, .x=0xdc, .y=0x82, .sp=0xe9, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xde21, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xde22, .a=0xdc, .x=0xdc, .y=0x82, .sp=0xe9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xde21, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xde21, .value=0x7d, .type=IO_READ},
        {.addr=0xde22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x92af, .a=0x0a, .x=0x42, .y=0xd1, .sp=0x62, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x92af, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x92b0, .a=0x42, .x=0x42, .y=0xd1, .sp=0x62, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x92af, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x92af, .value=0x7d, .type=IO_READ},
        {.addr=0x92b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0106) {
    const struct CPU_State initial_cpu = {.pc=0xa246, .a=0x74, .x=0x11, .y=0x4d, .sp=0xcb, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa246, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa247, .a=0x11, .x=0x11, .y=0x4d, .sp=0xcb, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa246, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa246, .value=0x7d, .type=IO_READ},
        {.addr=0xa247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x16f1, .a=0x07, .x=0x87, .y=0x7b, .sp=0x5b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x16f1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x16f2, .a=0x87, .x=0x87, .y=0x7b, .sp=0x5b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x16f1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x16f1, .value=0x7d, .type=IO_READ},
        {.addr=0x16f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0108) {
    const struct CPU_State initial_cpu = {.pc=0x31d3, .a=0xe1, .x=0x85, .y=0xee, .sp=0x57, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x31d3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x31d4, .a=0x85, .x=0x85, .y=0xee, .sp=0x57, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x31d3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x31d3, .value=0x7d, .type=IO_READ},
        {.addr=0x31d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0109) {
    const struct CPU_State initial_cpu = {.pc=0xe745, .a=0x06, .x=0xef, .y=0x97, .sp=0x6d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe745, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe746, .a=0xef, .x=0xef, .y=0x97, .sp=0x6d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe745, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe745, .value=0x7d, .type=IO_READ},
        {.addr=0xe746, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_010A) {
    const struct CPU_State initial_cpu = {.pc=0x4036, .a=0xc2, .x=0x5b, .y=0x9c, .sp=0x81, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x4036, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4037, .a=0x5b, .x=0x5b, .y=0x9c, .sp=0x81, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4036, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4036, .value=0x7d, .type=IO_READ},
        {.addr=0x4037, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_010B) {
    const struct CPU_State initial_cpu = {.pc=0xaa6e, .a=0x7f, .x=0x03, .y=0x71, .sp=0x57, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xaa6e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xaa6f, .a=0x03, .x=0x03, .y=0x71, .sp=0x57, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xaa6e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaa6e, .value=0x7d, .type=IO_READ},
        {.addr=0xaa6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x30e0, .a=0x0c, .x=0x36, .y=0xdc, .sp=0x21, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x30e0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x30e1, .a=0x36, .x=0x36, .y=0xdc, .sp=0x21, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x30e0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x30e0, .value=0x7d, .type=IO_READ},
        {.addr=0x30e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_010D) {
    const struct CPU_State initial_cpu = {.pc=0xf706, .a=0xe8, .x=0x09, .y=0x66, .sp=0x33, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf706, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf707, .a=0x09, .x=0x09, .y=0x66, .sp=0x33, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xf706, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf706, .value=0x7d, .type=IO_READ},
        {.addr=0xf707, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_010E) {
    const struct CPU_State initial_cpu = {.pc=0xd8d9, .a=0x08, .x=0xe2, .y=0xf9, .sp=0x3b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd8d9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd8da, .a=0xe2, .x=0xe2, .y=0xf9, .sp=0x3b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xd8d9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd8d9, .value=0x7d, .type=IO_READ},
        {.addr=0xd8da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x6eb9, .a=0x1c, .x=0xf7, .y=0x49, .sp=0x9f, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6eb9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6eba, .a=0xf7, .x=0xf7, .y=0x49, .sp=0x9f, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6eb9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6eb9, .value=0x7d, .type=IO_READ},
        {.addr=0x6eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x293b, .a=0x6e, .x=0xb1, .y=0x7a, .sp=0x77, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x293b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x293c, .a=0xb1, .x=0xb1, .y=0x7a, .sp=0x77, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x293b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x293b, .value=0x7d, .type=IO_READ},
        {.addr=0x293c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x79db, .a=0x98, .x=0xc9, .y=0x1a, .sp=0x62, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x79db, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x79dc, .a=0xc9, .x=0xc9, .y=0x1a, .sp=0x62, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x79db, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x79db, .value=0x7d, .type=IO_READ},
        {.addr=0x79dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x46a9, .a=0x7f, .x=0xef, .y=0x74, .sp=0xcf, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x46a9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x46aa, .a=0xef, .x=0xef, .y=0x74, .sp=0xcf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x46a9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x46a9, .value=0x7d, .type=IO_READ},
        {.addr=0x46aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0113) {
    const struct CPU_State initial_cpu = {.pc=0xdf76, .a=0x00, .x=0x28, .y=0x8c, .sp=0xc1, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xdf76, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf77, .a=0x28, .x=0x28, .y=0x8c, .sp=0xc1, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xdf76, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf76, .value=0x7d, .type=IO_READ},
        {.addr=0xdf77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0114) {
    const struct CPU_State initial_cpu = {.pc=0xbb1a, .a=0x80, .x=0x3d, .y=0xc5, .sp=0xde, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbb1b, .a=0x3d, .x=0x3d, .y=0xc5, .sp=0xde, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbb1a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbb1a, .value=0x7d, .type=IO_READ},
        {.addr=0xbb1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0115) {
    const struct CPU_State initial_cpu = {.pc=0x46fa, .a=0x56, .x=0x33, .y=0x27, .sp=0x13, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x46fa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x46fb, .a=0x33, .x=0x33, .y=0x27, .sp=0x13, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x46fa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x46fa, .value=0x7d, .type=IO_READ},
        {.addr=0x46fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x0b0c, .a=0xa3, .x=0x3b, .y=0x7f, .sp=0x73, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0b0c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0b0d, .a=0x3b, .x=0x3b, .y=0x7f, .sp=0x73, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0b0c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0b0c, .value=0x7d, .type=IO_READ},
        {.addr=0x0b0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0117) {
    const struct CPU_State initial_cpu = {.pc=0x3503, .a=0x23, .x=0x68, .y=0x16, .sp=0xeb, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3503, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3504, .a=0x68, .x=0x68, .y=0x16, .sp=0xeb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3503, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3503, .value=0x7d, .type=IO_READ},
        {.addr=0x3504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0118) {
    const struct CPU_State initial_cpu = {.pc=0x706d, .a=0x32, .x=0xfc, .y=0x8f, .sp=0x5f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x706d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x706e, .a=0xfc, .x=0xfc, .y=0x8f, .sp=0x5f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x706d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x706d, .value=0x7d, .type=IO_READ},
        {.addr=0x706e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x7771, .a=0x74, .x=0x57, .y=0x91, .sp=0xbb, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7771, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7772, .a=0x57, .x=0x57, .y=0x91, .sp=0xbb, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7771, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7771, .value=0x7d, .type=IO_READ},
        {.addr=0x7772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x3502, .a=0xae, .x=0xfc, .y=0xd3, .sp=0xb2, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3502, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3503, .a=0xfc, .x=0xfc, .y=0xd3, .sp=0xb2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3502, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3502, .value=0x7d, .type=IO_READ},
        {.addr=0x3503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_011B) {
    const struct CPU_State initial_cpu = {.pc=0xd4c4, .a=0xd6, .x=0x5c, .y=0x0c, .sp=0x7d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd4c5, .a=0x5c, .x=0x5c, .y=0x0c, .sp=0x7d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd4c4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd4c4, .value=0x7d, .type=IO_READ},
        {.addr=0xd4c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x7195, .a=0xc4, .x=0xaf, .y=0x77, .sp=0x05, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7195, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7196, .a=0xaf, .x=0xaf, .y=0x77, .sp=0x05, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7195, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7195, .value=0x7d, .type=IO_READ},
        {.addr=0x7196, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_011D) {
    const struct CPU_State initial_cpu = {.pc=0xfbc2, .a=0xdf, .x=0xb4, .y=0x8c, .sp=0xc3, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xfbc2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfbc3, .a=0xb4, .x=0xb4, .y=0x8c, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xfbc2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfbc2, .value=0x7d, .type=IO_READ},
        {.addr=0xfbc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_011E) {
    const struct CPU_State initial_cpu = {.pc=0xba60, .a=0x6c, .x=0xad, .y=0x3b, .sp=0xfc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xba60, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xba61, .a=0xad, .x=0xad, .y=0x3b, .sp=0xfc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xba60, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xba60, .value=0x7d, .type=IO_READ},
        {.addr=0xba61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_011F) {
    const struct CPU_State initial_cpu = {.pc=0xf168, .a=0xd9, .x=0x3e, .y=0x2d, .sp=0x8a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf168, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf169, .a=0x3e, .x=0x3e, .y=0x2d, .sp=0x8a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf168, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf168, .value=0x7d, .type=IO_READ},
        {.addr=0xf169, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0120) {
    const struct CPU_State initial_cpu = {.pc=0x9dbf, .a=0x7e, .x=0xd9, .y=0xa6, .sp=0x9e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x9dbf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9dc0, .a=0xd9, .x=0xd9, .y=0xa6, .sp=0x9e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9dbf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9dbf, .value=0x7d, .type=IO_READ},
        {.addr=0x9dc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6f7a, .a=0x2b, .x=0x40, .y=0xd6, .sp=0x58, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f7a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6f7b, .a=0x40, .x=0x40, .y=0xd6, .sp=0x58, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6f7a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6f7a, .value=0x7d, .type=IO_READ},
        {.addr=0x6f7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x2d7f, .a=0xef, .x=0x09, .y=0xe3, .sp=0x22, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2d7f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2d80, .a=0x09, .x=0x09, .y=0xe3, .sp=0x22, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2d7f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2d7f, .value=0x7d, .type=IO_READ},
        {.addr=0x2d80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0123) {
    const struct CPU_State initial_cpu = {.pc=0xc5ee, .a=0x10, .x=0x38, .y=0x68, .sp=0x5a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc5ee, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc5ef, .a=0x38, .x=0x38, .y=0x68, .sp=0x5a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc5ee, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc5ee, .value=0x7d, .type=IO_READ},
        {.addr=0xc5ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0124) {
    const struct CPU_State initial_cpu = {.pc=0xe844, .a=0x12, .x=0xda, .y=0x10, .sp=0x60, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xe844, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe845, .a=0xda, .x=0xda, .y=0x10, .sp=0x60, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe844, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe844, .value=0x7d, .type=IO_READ},
        {.addr=0xe845, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0125) {
    const struct CPU_State initial_cpu = {.pc=0x44dc, .a=0xa4, .x=0xbe, .y=0x7e, .sp=0x28, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x44dc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x44dd, .a=0xbe, .x=0xbe, .y=0x7e, .sp=0x28, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x44dc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x44dc, .value=0x7d, .type=IO_READ},
        {.addr=0x44dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x5d0e, .a=0xb0, .x=0x50, .y=0x97, .sp=0x04, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5d0f, .a=0x50, .x=0x50, .y=0x97, .sp=0x04, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5d0e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5d0e, .value=0x7d, .type=IO_READ},
        {.addr=0x5d0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0127) {
    const struct CPU_State initial_cpu = {.pc=0xffe9, .a=0xeb, .x=0xea, .y=0xe4, .sp=0x39, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xffe9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xffea, .a=0xea, .x=0xea, .y=0xe4, .sp=0x39, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xffe9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xffe9, .value=0x7d, .type=IO_READ},
        {.addr=0xffea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0128) {
    const struct CPU_State initial_cpu = {.pc=0xfc31, .a=0x32, .x=0xd5, .y=0xe7, .sp=0xf9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xfc31, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfc32, .a=0xd5, .x=0xd5, .y=0xe7, .sp=0xf9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfc31, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfc31, .value=0x7d, .type=IO_READ},
        {.addr=0xfc32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0129) {
    const struct CPU_State initial_cpu = {.pc=0x0e47, .a=0x29, .x=0xab, .y=0x50, .sp=0x94, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0e47, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0e48, .a=0xab, .x=0xab, .y=0x50, .sp=0x94, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0e47, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0e47, .value=0x7d, .type=IO_READ},
        {.addr=0x0e48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_012A) {
    const struct CPU_State initial_cpu = {.pc=0xeab0, .a=0xbc, .x=0xc3, .y=0x2a, .sp=0x7c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xeab0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeab1, .a=0xc3, .x=0xc3, .y=0x2a, .sp=0x7c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xeab0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeab0, .value=0x7d, .type=IO_READ},
        {.addr=0xeab1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_012B) {
    const struct CPU_State initial_cpu = {.pc=0x17c7, .a=0xaf, .x=0x5a, .y=0xd3, .sp=0x35, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x17c7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x17c8, .a=0x5a, .x=0x5a, .y=0xd3, .sp=0x35, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x17c7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x17c7, .value=0x7d, .type=IO_READ},
        {.addr=0x17c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_012C) {
    const struct CPU_State initial_cpu = {.pc=0x510d, .a=0x1a, .x=0xb7, .y=0x66, .sp=0xde, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x510d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x510e, .a=0xb7, .x=0xb7, .y=0x66, .sp=0xde, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x510d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x510d, .value=0x7d, .type=IO_READ},
        {.addr=0x510e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_012D) {
    const struct CPU_State initial_cpu = {.pc=0x386a, .a=0xf1, .x=0xbd, .y=0x5b, .sp=0x7f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x386a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x386b, .a=0xbd, .x=0xbd, .y=0x5b, .sp=0x7f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x386a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x386a, .value=0x7d, .type=IO_READ},
        {.addr=0x386b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_012E) {
    const struct CPU_State initial_cpu = {.pc=0xcbc3, .a=0x0e, .x=0xc8, .y=0x4a, .sp=0x47, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xcbc3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcbc4, .a=0xc8, .x=0xc8, .y=0x4a, .sp=0x47, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xcbc3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcbc3, .value=0x7d, .type=IO_READ},
        {.addr=0xcbc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_012F) {
    const struct CPU_State initial_cpu = {.pc=0x0de1, .a=0x45, .x=0xba, .y=0x21, .sp=0x57, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0de1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0de2, .a=0xba, .x=0xba, .y=0x21, .sp=0x57, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0de1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0de1, .value=0x7d, .type=IO_READ},
        {.addr=0x0de2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x005b, .a=0x72, .x=0xa5, .y=0x75, .sp=0x76, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x005c, .a=0xa5, .x=0xa5, .y=0x75, .sp=0x76, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x005b, .value=0x7d, .type=IO_READ},
        {.addr=0x005c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0131) {
    const struct CPU_State initial_cpu = {.pc=0xd291, .a=0x89, .x=0x28, .y=0x69, .sp=0xe7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd291, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd292, .a=0x28, .x=0x28, .y=0x69, .sp=0xe7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd291, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd291, .value=0x7d, .type=IO_READ},
        {.addr=0xd292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0132) {
    const struct CPU_State initial_cpu = {.pc=0xea2a, .a=0xc9, .x=0xb8, .y=0xa8, .sp=0x3d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xea2a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xea2b, .a=0xb8, .x=0xb8, .y=0xa8, .sp=0x3d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xea2a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xea2a, .value=0x7d, .type=IO_READ},
        {.addr=0xea2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0133) {
    const struct CPU_State initial_cpu = {.pc=0xf54d, .a=0xb2, .x=0x7d, .y=0xc9, .sp=0x62, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf54d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf54e, .a=0x7d, .x=0x7d, .y=0xc9, .sp=0x62, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf54d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf54d, .value=0x7d, .type=IO_READ},
        {.addr=0xf54e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0134) {
    const struct CPU_State initial_cpu = {.pc=0x49d4, .a=0x33, .x=0x80, .y=0xeb, .sp=0x1a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x49d4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x49d5, .a=0x80, .x=0x80, .y=0xeb, .sp=0x1a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x49d4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x49d4, .value=0x7d, .type=IO_READ},
        {.addr=0x49d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0135) {
    const struct CPU_State initial_cpu = {.pc=0x4df2, .a=0x32, .x=0x8d, .y=0x96, .sp=0x11, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4df2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4df3, .a=0x8d, .x=0x8d, .y=0x96, .sp=0x11, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4df2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4df2, .value=0x7d, .type=IO_READ},
        {.addr=0x4df3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xacc8, .a=0x8a, .x=0xe9, .y=0xad, .sp=0x8e, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xacc8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xacc9, .a=0xe9, .x=0xe9, .y=0xad, .sp=0x8e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xacc8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xacc8, .value=0x7d, .type=IO_READ},
        {.addr=0xacc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0137) {
    const struct CPU_State initial_cpu = {.pc=0xe3d2, .a=0xbe, .x=0xc5, .y=0x6b, .sp=0x18, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe3d2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe3d3, .a=0xc5, .x=0xc5, .y=0x6b, .sp=0x18, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe3d2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe3d2, .value=0x7d, .type=IO_READ},
        {.addr=0xe3d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0138) {
    const struct CPU_State initial_cpu = {.pc=0x6e6d, .a=0x1e, .x=0x7e, .y=0x9f, .sp=0xcd, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x6e6d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6e6e, .a=0x7e, .x=0x7e, .y=0x9f, .sp=0xcd, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6e6d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6e6d, .value=0x7d, .type=IO_READ},
        {.addr=0x6e6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x8d3a, .a=0xd7, .x=0x0f, .y=0x81, .sp=0xfe, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8d3b, .a=0x0f, .x=0x0f, .y=0x81, .sp=0xfe, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8d3a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8d3a, .value=0x7d, .type=IO_READ},
        {.addr=0x8d3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_013A) {
    const struct CPU_State initial_cpu = {.pc=0xd387, .a=0x9c, .x=0x77, .y=0xa8, .sp=0xf6, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xd387, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd388, .a=0x77, .x=0x77, .y=0xa8, .sp=0xf6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd387, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd387, .value=0x7d, .type=IO_READ},
        {.addr=0xd388, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_013B) {
    const struct CPU_State initial_cpu = {.pc=0x3ab4, .a=0xe0, .x=0xd2, .y=0x2a, .sp=0x7b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3ab5, .a=0xd2, .x=0xd2, .y=0x2a, .sp=0x7b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3ab4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3ab4, .value=0x7d, .type=IO_READ},
        {.addr=0x3ab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x5ac3, .a=0xd4, .x=0x86, .y=0x88, .sp=0x5f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x5ac3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5ac4, .a=0x86, .x=0x86, .y=0x88, .sp=0x5f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5ac3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5ac3, .value=0x7d, .type=IO_READ},
        {.addr=0x5ac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_013D) {
    const struct CPU_State initial_cpu = {.pc=0x15d8, .a=0xb5, .x=0xaf, .y=0xd2, .sp=0x9c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x15d8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x15d9, .a=0xaf, .x=0xaf, .y=0xd2, .sp=0x9c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x15d8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x15d8, .value=0x7d, .type=IO_READ},
        {.addr=0x15d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc043, .a=0xa9, .x=0x0d, .y=0xf2, .sp=0x93, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc043, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc044, .a=0x0d, .x=0x0d, .y=0xf2, .sp=0x93, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc043, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc043, .value=0x7d, .type=IO_READ},
        {.addr=0xc044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x8b26, .a=0xfb, .x=0xc2, .y=0x54, .sp=0xf6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8b26, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8b27, .a=0xc2, .x=0xc2, .y=0x54, .sp=0xf6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8b26, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8b26, .value=0x7d, .type=IO_READ},
        {.addr=0x8b27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x8f3c, .a=0xcd, .x=0xed, .y=0xe4, .sp=0x56, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8f3c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8f3d, .a=0xed, .x=0xed, .y=0xe4, .sp=0x56, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8f3c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8f3c, .value=0x7d, .type=IO_READ},
        {.addr=0x8f3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0141) {
    const struct CPU_State initial_cpu = {.pc=0xf152, .a=0x7e, .x=0x33, .y=0x76, .sp=0x3c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf152, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf153, .a=0x33, .x=0x33, .y=0x76, .sp=0x3c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf152, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf152, .value=0x7d, .type=IO_READ},
        {.addr=0xf153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0142) {
    const struct CPU_State initial_cpu = {.pc=0x9359, .a=0x3c, .x=0x31, .y=0x21, .sp=0xbf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9359, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x935a, .a=0x31, .x=0x31, .y=0x21, .sp=0xbf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9359, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9359, .value=0x7d, .type=IO_READ},
        {.addr=0x935a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf3e6, .a=0x81, .x=0xb3, .y=0xf3, .sp=0x8e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf3e7, .a=0xb3, .x=0xb3, .y=0xf3, .sp=0x8e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf3e6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf3e6, .value=0x7d, .type=IO_READ},
        {.addr=0xf3e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0144) {
    const struct CPU_State initial_cpu = {.pc=0xc3bb, .a=0xdb, .x=0xc9, .y=0x3f, .sp=0x9d, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc3bb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc3bc, .a=0xc9, .x=0xc9, .y=0x3f, .sp=0x9d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc3bb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc3bb, .value=0x7d, .type=IO_READ},
        {.addr=0xc3bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x22ce, .a=0x4f, .x=0x99, .y=0x2f, .sp=0xce, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x22ce, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x22cf, .a=0x99, .x=0x99, .y=0x2f, .sp=0xce, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x22ce, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x22ce, .value=0x7d, .type=IO_READ},
        {.addr=0x22cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0146) {
    const struct CPU_State initial_cpu = {.pc=0xba5f, .a=0xa3, .x=0x41, .y=0xde, .sp=0x30, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xba5f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xba60, .a=0x41, .x=0x41, .y=0xde, .sp=0x30, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xba5f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xba5f, .value=0x7d, .type=IO_READ},
        {.addr=0xba60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0147) {
    const struct CPU_State initial_cpu = {.pc=0xebff, .a=0x4c, .x=0xa7, .y=0xa5, .sp=0xc4, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xebff, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xec00, .a=0xa7, .x=0xa7, .y=0xa5, .sp=0xc4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xebff, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xebff, .value=0x7d, .type=IO_READ},
        {.addr=0xec00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x503d, .a=0x8d, .x=0x7b, .y=0x4d, .sp=0x68, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x503d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x503e, .a=0x7b, .x=0x7b, .y=0x4d, .sp=0x68, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x503d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x503d, .value=0x7d, .type=IO_READ},
        {.addr=0x503e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x3de0, .a=0x78, .x=0x2d, .y=0x56, .sp=0xce, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3de0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3de1, .a=0x2d, .x=0x2d, .y=0x56, .sp=0xce, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3de0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3de0, .value=0x7d, .type=IO_READ},
        {.addr=0x3de1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x0f0f, .a=0x5b, .x=0x4e, .y=0x1c, .sp=0xcb, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0f10, .a=0x4e, .x=0x4e, .y=0x1c, .sp=0xcb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0f0f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0f0f, .value=0x7d, .type=IO_READ},
        {.addr=0x0f10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xd369, .a=0x77, .x=0x9f, .y=0x52, .sp=0x42, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd369, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd36a, .a=0x9f, .x=0x9f, .y=0x52, .sp=0x42, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd369, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd369, .value=0x7d, .type=IO_READ},
        {.addr=0xd36a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_014C) {
    const struct CPU_State initial_cpu = {.pc=0xab8e, .a=0x48, .x=0x83, .y=0x77, .sp=0x13, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xab8e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xab8f, .a=0x83, .x=0x83, .y=0x77, .sp=0x13, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xab8e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xab8e, .value=0x7d, .type=IO_READ},
        {.addr=0xab8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_014D) {
    const struct CPU_State initial_cpu = {.pc=0x3520, .a=0xb2, .x=0xb3, .y=0x4c, .sp=0x22, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3520, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3521, .a=0xb3, .x=0xb3, .y=0x4c, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3520, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3520, .value=0x7d, .type=IO_READ},
        {.addr=0x3521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_014E) {
    const struct CPU_State initial_cpu = {.pc=0x812f, .a=0x54, .x=0xf2, .y=0x32, .sp=0xd3, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x812f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8130, .a=0xf2, .x=0xf2, .y=0x32, .sp=0xd3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x812f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x812f, .value=0x7d, .type=IO_READ},
        {.addr=0x8130, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x2abd, .a=0x4a, .x=0x06, .y=0x0a, .sp=0x12, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2abd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2abe, .a=0x06, .x=0x06, .y=0x0a, .sp=0x12, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2abd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2abd, .value=0x7d, .type=IO_READ},
        {.addr=0x2abe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x610c, .a=0x40, .x=0x0e, .y=0xf3, .sp=0xe4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x610c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x610d, .a=0x0e, .x=0x0e, .y=0xf3, .sp=0xe4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x610c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x610c, .value=0x7d, .type=IO_READ},
        {.addr=0x610d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0151) {
    const struct CPU_State initial_cpu = {.pc=0x7de4, .a=0xf9, .x=0x26, .y=0x1b, .sp=0x37, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x7de4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7de5, .a=0x26, .x=0x26, .y=0x1b, .sp=0x37, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7de4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7de4, .value=0x7d, .type=IO_READ},
        {.addr=0x7de5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0152) {
    const struct CPU_State initial_cpu = {.pc=0x84c8, .a=0xd4, .x=0xa5, .y=0xe2, .sp=0x75, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x84c8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x84c9, .a=0xa5, .x=0xa5, .y=0xe2, .sp=0x75, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x84c8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x84c8, .value=0x7d, .type=IO_READ},
        {.addr=0x84c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0153) {
    const struct CPU_State initial_cpu = {.pc=0x9b82, .a=0x2f, .x=0x39, .y=0x66, .sp=0x92, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9b82, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9b83, .a=0x39, .x=0x39, .y=0x66, .sp=0x92, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9b82, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9b82, .value=0x7d, .type=IO_READ},
        {.addr=0x9b83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0154) {
    const struct CPU_State initial_cpu = {.pc=0xeeda, .a=0x2d, .x=0x5c, .y=0xdf, .sp=0xa1, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xeeda, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeedb, .a=0x5c, .x=0x5c, .y=0xdf, .sp=0xa1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xeeda, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeeda, .value=0x7d, .type=IO_READ},
        {.addr=0xeedb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0155) {
    const struct CPU_State initial_cpu = {.pc=0xfd2f, .a=0x53, .x=0x6e, .y=0x24, .sp=0x16, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfd2f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfd30, .a=0x6e, .x=0x6e, .y=0x24, .sp=0x16, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xfd2f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfd2f, .value=0x7d, .type=IO_READ},
        {.addr=0xfd30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0156) {
    const struct CPU_State initial_cpu = {.pc=0xb262, .a=0xf3, .x=0x19, .y=0xd8, .sp=0x08, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb262, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb263, .a=0x19, .x=0x19, .y=0xd8, .sp=0x08, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb262, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb262, .value=0x7d, .type=IO_READ},
        {.addr=0xb263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0157) {
    const struct CPU_State initial_cpu = {.pc=0xdc16, .a=0x5b, .x=0xff, .y=0xaa, .sp=0x38, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xdc16, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdc17, .a=0xff, .x=0xff, .y=0xaa, .sp=0x38, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xdc16, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdc16, .value=0x7d, .type=IO_READ},
        {.addr=0xdc17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0158) {
    const struct CPU_State initial_cpu = {.pc=0x15d8, .a=0x6b, .x=0x51, .y=0xfc, .sp=0x56, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x15d8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x15d9, .a=0x51, .x=0x51, .y=0xfc, .sp=0x56, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x15d8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x15d8, .value=0x7d, .type=IO_READ},
        {.addr=0x15d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x2b18, .a=0x21, .x=0x15, .y=0xaa, .sp=0xcb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2b18, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2b19, .a=0x15, .x=0x15, .y=0xaa, .sp=0xcb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2b18, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2b18, .value=0x7d, .type=IO_READ},
        {.addr=0x2b19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x955c, .a=0x2a, .x=0x75, .y=0x2b, .sp=0x77, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x955c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x955d, .a=0x75, .x=0x75, .y=0x2b, .sp=0x77, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x955c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x955c, .value=0x7d, .type=IO_READ},
        {.addr=0x955d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_015B) {
    const struct CPU_State initial_cpu = {.pc=0x032d, .a=0xc0, .x=0x66, .y=0x9f, .sp=0xcc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x032d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x032e, .a=0x66, .x=0x66, .y=0x9f, .sp=0xcc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x032d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x032d, .value=0x7d, .type=IO_READ},
        {.addr=0x032e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x866f, .a=0xdd, .x=0xfb, .y=0x90, .sp=0x2c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x866f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8670, .a=0xfb, .x=0xfb, .y=0x90, .sp=0x2c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x866f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x866f, .value=0x7d, .type=IO_READ},
        {.addr=0x8670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_015D) {
    const struct CPU_State initial_cpu = {.pc=0x6abc, .a=0x68, .x=0x01, .y=0x4a, .sp=0x2b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6abc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6abd, .a=0x01, .x=0x01, .y=0x4a, .sp=0x2b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6abc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6abc, .value=0x7d, .type=IO_READ},
        {.addr=0x6abd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa69c, .a=0x29, .x=0x58, .y=0x4e, .sp=0xf3, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa69c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa69d, .a=0x58, .x=0x58, .y=0x4e, .sp=0xf3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa69c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa69c, .value=0x7d, .type=IO_READ},
        {.addr=0xa69d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_015F) {
    const struct CPU_State initial_cpu = {.pc=0xd2d0, .a=0xe6, .x=0xf4, .y=0xe2, .sp=0x77, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd2d1, .a=0xf4, .x=0xf4, .y=0xe2, .sp=0x77, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd2d0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd2d0, .value=0x7d, .type=IO_READ},
        {.addr=0xd2d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0160) {
    const struct CPU_State initial_cpu = {.pc=0xa71d, .a=0x4b, .x=0x11, .y=0x6b, .sp=0x99, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa71d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa71e, .a=0x11, .x=0x11, .y=0x6b, .sp=0x99, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa71d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa71d, .value=0x7d, .type=IO_READ},
        {.addr=0xa71e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0161) {
    const struct CPU_State initial_cpu = {.pc=0x58d5, .a=0x51, .x=0xee, .y=0x8d, .sp=0x61, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x58d5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x58d6, .a=0xee, .x=0xee, .y=0x8d, .sp=0x61, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x58d5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x58d5, .value=0x7d, .type=IO_READ},
        {.addr=0x58d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x75be, .a=0xde, .x=0x5a, .y=0xd7, .sp=0x6f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x75be, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x75bf, .a=0x5a, .x=0x5a, .y=0xd7, .sp=0x6f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x75be, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x75be, .value=0x7d, .type=IO_READ},
        {.addr=0x75bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0163) {
    const struct CPU_State initial_cpu = {.pc=0x9b15, .a=0x18, .x=0x00, .y=0x79, .sp=0xbe, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9b15, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9b16, .a=0x00, .x=0x00, .y=0x79, .sp=0xbe, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x9b15, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9b15, .value=0x7d, .type=IO_READ},
        {.addr=0x9b16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0164) {
    const struct CPU_State initial_cpu = {.pc=0x1623, .a=0x45, .x=0x6a, .y=0xf0, .sp=0xbd, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1623, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1624, .a=0x6a, .x=0x6a, .y=0xf0, .sp=0xbd, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1623, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1623, .value=0x7d, .type=IO_READ},
        {.addr=0x1624, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x2fd4, .a=0xbd, .x=0x50, .y=0x02, .sp=0xa9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2fd4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2fd5, .a=0x50, .x=0x50, .y=0x02, .sp=0xa9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2fd4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2fd4, .value=0x7d, .type=IO_READ},
        {.addr=0x2fd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x05a6, .a=0xa5, .x=0x1b, .y=0x57, .sp=0xdc, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x05a6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x05a7, .a=0x1b, .x=0x1b, .y=0x57, .sp=0xdc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x05a6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x05a6, .value=0x7d, .type=IO_READ},
        {.addr=0x05a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0167) {
    const struct CPU_State initial_cpu = {.pc=0xacb6, .a=0xec, .x=0x22, .y=0x59, .sp=0xa3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xacb6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xacb7, .a=0x22, .x=0x22, .y=0x59, .sp=0xa3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xacb6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xacb6, .value=0x7d, .type=IO_READ},
        {.addr=0xacb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0168) {
    const struct CPU_State initial_cpu = {.pc=0x6ca7, .a=0x8a, .x=0x4b, .y=0x43, .sp=0xa5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6ca8, .a=0x4b, .x=0x4b, .y=0x43, .sp=0xa5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6ca7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6ca7, .value=0x7d, .type=IO_READ},
        {.addr=0x6ca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0169) {
    const struct CPU_State initial_cpu = {.pc=0x756b, .a=0x31, .x=0x7e, .y=0x7a, .sp=0xba, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x756b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x756c, .a=0x7e, .x=0x7e, .y=0x7a, .sp=0xba, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x756b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x756b, .value=0x7d, .type=IO_READ},
        {.addr=0x756c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x1480, .a=0x12, .x=0x37, .y=0xa0, .sp=0xf5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1480, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1481, .a=0x37, .x=0x37, .y=0xa0, .sp=0xf5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1480, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1480, .value=0x7d, .type=IO_READ},
        {.addr=0x1481, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_016B) {
    const struct CPU_State initial_cpu = {.pc=0xdb7f, .a=0xc2, .x=0x23, .y=0x5d, .sp=0x91, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xdb7f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdb80, .a=0x23, .x=0x23, .y=0x5d, .sp=0x91, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdb7f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdb7f, .value=0x7d, .type=IO_READ},
        {.addr=0xdb80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x633a, .a=0x18, .x=0xa3, .y=0xb0, .sp=0x4b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x633a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x633b, .a=0xa3, .x=0xa3, .y=0xb0, .sp=0x4b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x633a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x633a, .value=0x7d, .type=IO_READ},
        {.addr=0x633b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_016D) {
    const struct CPU_State initial_cpu = {.pc=0xc5b0, .a=0xd0, .x=0x8b, .y=0xf3, .sp=0xfa, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc5b1, .a=0x8b, .x=0x8b, .y=0xf3, .sp=0xfa, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc5b0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc5b0, .value=0x7d, .type=IO_READ},
        {.addr=0xc5b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x100b, .a=0xc1, .x=0xe5, .y=0x13, .sp=0xa4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x100b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x100c, .a=0xe5, .x=0xe5, .y=0x13, .sp=0xa4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x100b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x100b, .value=0x7d, .type=IO_READ},
        {.addr=0x100c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa597, .a=0x1c, .x=0xf9, .y=0xda, .sp=0x15, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xa597, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa598, .a=0xf9, .x=0xf9, .y=0xda, .sp=0x15, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa597, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa597, .value=0x7d, .type=IO_READ},
        {.addr=0xa598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7c3b, .a=0x3c, .x=0x52, .y=0x51, .sp=0xf9, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7c3c, .a=0x52, .x=0x52, .y=0x51, .sp=0xf9, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x7c3b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7c3b, .value=0x7d, .type=IO_READ},
        {.addr=0x7c3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0171) {
    const struct CPU_State initial_cpu = {.pc=0xbdf9, .a=0xe9, .x=0xa5, .y=0xf7, .sp=0xf9, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbdfa, .a=0xa5, .x=0xa5, .y=0xf7, .sp=0xf9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbdf9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbdf9, .value=0x7d, .type=IO_READ},
        {.addr=0xbdfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0172) {
    const struct CPU_State initial_cpu = {.pc=0x38a9, .a=0xc2, .x=0x8b, .y=0x0f, .sp=0x05, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x38a9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x38aa, .a=0x8b, .x=0x8b, .y=0x0f, .sp=0x05, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x38a9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x38a9, .value=0x7d, .type=IO_READ},
        {.addr=0x38aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0173) {
    const struct CPU_State initial_cpu = {.pc=0xd3d9, .a=0x2c, .x=0xf0, .y=0x35, .sp=0x65, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd3da, .a=0xf0, .x=0xf0, .y=0x35, .sp=0x65, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd3d9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd3d9, .value=0x7d, .type=IO_READ},
        {.addr=0xd3da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0174) {
    const struct CPU_State initial_cpu = {.pc=0x4cdd, .a=0x18, .x=0x93, .y=0x4e, .sp=0x52, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4cdd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4cde, .a=0x93, .x=0x93, .y=0x4e, .sp=0x52, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4cdd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4cdd, .value=0x7d, .type=IO_READ},
        {.addr=0x4cde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0175) {
    const struct CPU_State initial_cpu = {.pc=0x9613, .a=0x7a, .x=0x8a, .y=0x1f, .sp=0x05, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9613, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9614, .a=0x8a, .x=0x8a, .y=0x1f, .sp=0x05, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9613, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9613, .value=0x7d, .type=IO_READ},
        {.addr=0x9614, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x6d68, .a=0x69, .x=0x02, .y=0xf5, .sp=0x6e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6d68, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6d69, .a=0x02, .x=0x02, .y=0xf5, .sp=0x6e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6d68, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6d68, .value=0x7d, .type=IO_READ},
        {.addr=0x6d69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xa91a, .a=0x46, .x=0x5a, .y=0xc0, .sp=0x9a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa91a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa91b, .a=0x5a, .x=0x5a, .y=0xc0, .sp=0x9a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa91a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa91a, .value=0x7d, .type=IO_READ},
        {.addr=0xa91b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0178) {
    const struct CPU_State initial_cpu = {.pc=0x7d4a, .a=0xcf, .x=0x06, .y=0x0d, .sp=0x3a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7d4a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7d4b, .a=0x06, .x=0x06, .y=0x0d, .sp=0x3a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7d4a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7d4a, .value=0x7d, .type=IO_READ},
        {.addr=0x7d4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x4a8c, .a=0x59, .x=0xab, .y=0xcb, .sp=0xd8, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4a8c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4a8d, .a=0xab, .x=0xab, .y=0xcb, .sp=0xd8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4a8c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4a8c, .value=0x7d, .type=IO_READ},
        {.addr=0x4a8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x46ab, .a=0xcb, .x=0x99, .y=0x1a, .sp=0xad, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x46ab, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x46ac, .a=0x99, .x=0x99, .y=0x1a, .sp=0xad, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x46ab, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x46ab, .value=0x7d, .type=IO_READ},
        {.addr=0x46ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_017B) {
    const struct CPU_State initial_cpu = {.pc=0xcfcc, .a=0xf9, .x=0x78, .y=0xc7, .sp=0xe4, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xcfcc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcfcd, .a=0x78, .x=0x78, .y=0xc7, .sp=0xe4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcfcc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcfcc, .value=0x7d, .type=IO_READ},
        {.addr=0xcfcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_017C) {
    const struct CPU_State initial_cpu = {.pc=0xc782, .a=0x2c, .x=0x8c, .y=0xb9, .sp=0xb6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc782, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc783, .a=0x8c, .x=0x8c, .y=0xb9, .sp=0xb6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc782, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc782, .value=0x7d, .type=IO_READ},
        {.addr=0xc783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x4242, .a=0xc2, .x=0xca, .y=0x77, .sp=0x9d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4242, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4243, .a=0xca, .x=0xca, .y=0x77, .sp=0x9d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4242, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4242, .value=0x7d, .type=IO_READ},
        {.addr=0x4243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_017E) {
    const struct CPU_State initial_cpu = {.pc=0xfa6e, .a=0x6c, .x=0x5e, .y=0xb5, .sp=0xd7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfa6e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfa6f, .a=0x5e, .x=0x5e, .y=0xb5, .sp=0xd7, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfa6e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfa6e, .value=0x7d, .type=IO_READ},
        {.addr=0xfa6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x704d, .a=0x24, .x=0xc6, .y=0x98, .sp=0x1e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x704d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x704e, .a=0xc6, .x=0xc6, .y=0x98, .sp=0x1e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x704d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x704d, .value=0x7d, .type=IO_READ},
        {.addr=0x704e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0180) {
    const struct CPU_State initial_cpu = {.pc=0x681b, .a=0x9a, .x=0x4b, .y=0x17, .sp=0xac, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x681b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x681c, .a=0x4b, .x=0x4b, .y=0x17, .sp=0xac, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x681b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x681b, .value=0x7d, .type=IO_READ},
        {.addr=0x681c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x6589, .a=0x8c, .x=0x47, .y=0x61, .sp=0xd7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6589, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x658a, .a=0x47, .x=0x47, .y=0x61, .sp=0xd7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6589, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6589, .value=0x7d, .type=IO_READ},
        {.addr=0x658a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x8a7d, .a=0x0f, .x=0xb4, .y=0x98, .sp=0xe7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8a7e, .a=0xb4, .x=0xb4, .y=0x98, .sp=0xe7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8a7d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8a7d, .value=0x7d, .type=IO_READ},
        {.addr=0x8a7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0183) {
    const struct CPU_State initial_cpu = {.pc=0x4c31, .a=0xa2, .x=0x70, .y=0xc5, .sp=0xad, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x4c31, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4c32, .a=0x70, .x=0x70, .y=0xc5, .sp=0xad, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4c31, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4c31, .value=0x7d, .type=IO_READ},
        {.addr=0x4c32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc787, .a=0x4d, .x=0xe2, .y=0xaf, .sp=0x50, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc787, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc788, .a=0xe2, .x=0xe2, .y=0xaf, .sp=0x50, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc787, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc787, .value=0x7d, .type=IO_READ},
        {.addr=0xc788, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x3aa6, .a=0xca, .x=0x0f, .y=0x68, .sp=0x73, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3aa7, .a=0x0f, .x=0x0f, .y=0x68, .sp=0x73, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3aa6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3aa6, .value=0x7d, .type=IO_READ},
        {.addr=0x3aa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0186) {
    const struct CPU_State initial_cpu = {.pc=0x122a, .a=0x0b, .x=0x3e, .y=0x30, .sp=0xe1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x122a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x122b, .a=0x3e, .x=0x3e, .y=0x30, .sp=0xe1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x122a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x122a, .value=0x7d, .type=IO_READ},
        {.addr=0x122b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0187) {
    const struct CPU_State initial_cpu = {.pc=0xe247, .a=0xca, .x=0xcf, .y=0xbb, .sp=0x5c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe247, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe248, .a=0xcf, .x=0xcf, .y=0xbb, .sp=0x5c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe247, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe247, .value=0x7d, .type=IO_READ},
        {.addr=0xe248, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x127d, .a=0x29, .x=0xf6, .y=0x65, .sp=0x80, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x127d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x127e, .a=0xf6, .x=0xf6, .y=0x65, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x127d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x127d, .value=0x7d, .type=IO_READ},
        {.addr=0x127e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x4825, .a=0xcb, .x=0x40, .y=0xa6, .sp=0x5e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4825, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4826, .a=0x40, .x=0x40, .y=0xa6, .sp=0x5e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4825, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4825, .value=0x7d, .type=IO_READ},
        {.addr=0x4826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_018A) {
    const struct CPU_State initial_cpu = {.pc=0xf0a2, .a=0xc2, .x=0x46, .y=0x58, .sp=0x4f, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf0a3, .a=0x46, .x=0x46, .y=0x58, .sp=0x4f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf0a2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf0a2, .value=0x7d, .type=IO_READ},
        {.addr=0xf0a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_018B) {
    const struct CPU_State initial_cpu = {.pc=0xa578, .a=0xd3, .x=0x16, .y=0x38, .sp=0x7b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa578, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa579, .a=0x16, .x=0x16, .y=0x38, .sp=0x7b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa578, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa578, .value=0x7d, .type=IO_READ},
        {.addr=0xa579, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_018C) {
    const struct CPU_State initial_cpu = {.pc=0xb4ab, .a=0xa7, .x=0xc9, .y=0x31, .sp=0x19, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ab, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb4ac, .a=0xc9, .x=0xc9, .y=0x31, .sp=0x19, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb4ab, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb4ab, .value=0x7d, .type=IO_READ},
        {.addr=0xb4ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x3465, .a=0xc2, .x=0x0e, .y=0x40, .sp=0x45, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3465, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3466, .a=0x0e, .x=0x0e, .y=0x40, .sp=0x45, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3465, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3465, .value=0x7d, .type=IO_READ},
        {.addr=0x3466, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_018E) {
    const struct CPU_State initial_cpu = {.pc=0x5381, .a=0x1b, .x=0x69, .y=0x28, .sp=0xee, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5381, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5382, .a=0x69, .x=0x69, .y=0x28, .sp=0xee, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5381, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5381, .value=0x7d, .type=IO_READ},
        {.addr=0x5382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_018F) {
    const struct CPU_State initial_cpu = {.pc=0xe82e, .a=0x50, .x=0x98, .y=0x62, .sp=0x10, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe82e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe82f, .a=0x98, .x=0x98, .y=0x62, .sp=0x10, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe82e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe82e, .value=0x7d, .type=IO_READ},
        {.addr=0xe82f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xbc7e, .a=0x76, .x=0xc5, .y=0x3b, .sp=0x26, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xbc7e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbc7f, .a=0xc5, .x=0xc5, .y=0x3b, .sp=0x26, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbc7e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbc7e, .value=0x7d, .type=IO_READ},
        {.addr=0xbc7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0191) {
    const struct CPU_State initial_cpu = {.pc=0xd89f, .a=0xf4, .x=0x06, .y=0xe7, .sp=0x27, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd89f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd8a0, .a=0x06, .x=0x06, .y=0xe7, .sp=0x27, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd89f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd89f, .value=0x7d, .type=IO_READ},
        {.addr=0xd8a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x898e, .a=0xad, .x=0x31, .y=0x06, .sp=0x2d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x898e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x898f, .a=0x31, .x=0x31, .y=0x06, .sp=0x2d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x898e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x898e, .value=0x7d, .type=IO_READ},
        {.addr=0x898f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0193) {
    const struct CPU_State initial_cpu = {.pc=0xc299, .a=0x00, .x=0xa4, .y=0xa1, .sp=0x22, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc299, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc29a, .a=0xa4, .x=0xa4, .y=0xa1, .sp=0x22, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc299, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc299, .value=0x7d, .type=IO_READ},
        {.addr=0xc29a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0194) {
    const struct CPU_State initial_cpu = {.pc=0xde07, .a=0x9a, .x=0x1e, .y=0xf7, .sp=0x05, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xde07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xde08, .a=0x1e, .x=0x1e, .y=0xf7, .sp=0x05, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xde07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xde07, .value=0x7d, .type=IO_READ},
        {.addr=0xde08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0195) {
    const struct CPU_State initial_cpu = {.pc=0xc7e6, .a=0x04, .x=0x02, .y=0x74, .sp=0x7f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc7e7, .a=0x02, .x=0x02, .y=0x74, .sp=0x7f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc7e6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc7e6, .value=0x7d, .type=IO_READ},
        {.addr=0xc7e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x19ce, .a=0xdd, .x=0x72, .y=0x93, .sp=0x25, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x19ce, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x19cf, .a=0x72, .x=0x72, .y=0x93, .sp=0x25, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x19ce, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x19ce, .value=0x7d, .type=IO_READ},
        {.addr=0x19cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x17bf, .a=0xd0, .x=0xd6, .y=0xac, .sp=0x0e, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x17bf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x17c0, .a=0xd6, .x=0xd6, .y=0xac, .sp=0x0e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x17bf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x17bf, .value=0x7d, .type=IO_READ},
        {.addr=0x17c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x5c21, .a=0xd3, .x=0xb2, .y=0xee, .sp=0x54, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x5c21, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5c22, .a=0xb2, .x=0xb2, .y=0xee, .sp=0x54, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5c21, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5c21, .value=0x7d, .type=IO_READ},
        {.addr=0x5c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7b6f, .a=0x8b, .x=0x9b, .y=0x5f, .sp=0x7a, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7b70, .a=0x9b, .x=0x9b, .y=0x5f, .sp=0x7a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7b6f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7b6f, .value=0x7d, .type=IO_READ},
        {.addr=0x7b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa064, .a=0xc1, .x=0x48, .y=0x78, .sp=0xd0, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa064, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa065, .a=0x48, .x=0x48, .y=0x78, .sp=0xd0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa064, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa064, .value=0x7d, .type=IO_READ},
        {.addr=0xa065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_019B) {
    const struct CPU_State initial_cpu = {.pc=0xf55d, .a=0x1b, .x=0x24, .y=0xda, .sp=0x1f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf55d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf55e, .a=0x24, .x=0x24, .y=0xda, .sp=0x1f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf55d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf55d, .value=0x7d, .type=IO_READ},
        {.addr=0xf55e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x9bfd, .a=0x85, .x=0x34, .y=0x5d, .sp=0xef, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9bfd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9bfe, .a=0x34, .x=0x34, .y=0x5d, .sp=0xef, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9bfd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9bfd, .value=0x7d, .type=IO_READ},
        {.addr=0x9bfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x6e9f, .a=0xf5, .x=0x1e, .y=0x0b, .sp=0x41, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e9f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6ea0, .a=0x1e, .x=0x1e, .y=0x0b, .sp=0x41, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6e9f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6e9f, .value=0x7d, .type=IO_READ},
        {.addr=0x6ea0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_019E) {
    const struct CPU_State initial_cpu = {.pc=0x87bb, .a=0x41, .x=0xaf, .y=0x18, .sp=0xcd, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x87bb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x87bc, .a=0xaf, .x=0xaf, .y=0x18, .sp=0xcd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x87bb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x87bb, .value=0x7d, .type=IO_READ},
        {.addr=0x87bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_019F) {
    const struct CPU_State initial_cpu = {.pc=0x1f90, .a=0x9d, .x=0x78, .y=0x80, .sp=0xaf, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x1f90, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1f91, .a=0x78, .x=0x78, .y=0x80, .sp=0xaf, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1f90, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1f90, .value=0x7d, .type=IO_READ},
        {.addr=0x1f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x8bb2, .a=0x81, .x=0xee, .y=0xb5, .sp=0xad, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8bb2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8bb3, .a=0xee, .x=0xee, .y=0xb5, .sp=0xad, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8bb2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8bb2, .value=0x7d, .type=IO_READ},
        {.addr=0x8bb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xdc7f, .a=0x52, .x=0xb3, .y=0x52, .sp=0x16, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdc7f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdc80, .a=0xb3, .x=0xb3, .y=0x52, .sp=0x16, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdc7f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdc7f, .value=0x7d, .type=IO_READ},
        {.addr=0xdc80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xa054, .a=0x9e, .x=0x02, .y=0x36, .sp=0x5d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa054, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa055, .a=0x02, .x=0x02, .y=0x36, .sp=0x5d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa054, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa054, .value=0x7d, .type=IO_READ},
        {.addr=0xa055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xf3cd, .a=0xd1, .x=0x07, .y=0xec, .sp=0x1f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xf3cd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf3ce, .a=0x07, .x=0x07, .y=0xec, .sp=0x1f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf3cd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf3cd, .value=0x7d, .type=IO_READ},
        {.addr=0xf3ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x48d2, .a=0x76, .x=0x61, .y=0xd2, .sp=0x1e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x48d2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x48d3, .a=0x61, .x=0x61, .y=0xd2, .sp=0x1e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x48d2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x48d2, .value=0x7d, .type=IO_READ},
        {.addr=0x48d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x2c9d, .a=0x72, .x=0x86, .y=0xbd, .sp=0x4e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2c9e, .a=0x86, .x=0x86, .y=0xbd, .sp=0x4e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2c9d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2c9d, .value=0x7d, .type=IO_READ},
        {.addr=0x2c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xb2a5, .a=0x1c, .x=0xee, .y=0xed, .sp=0xb3, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb2a6, .a=0xee, .x=0xee, .y=0xed, .sp=0xb3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb2a5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb2a5, .value=0x7d, .type=IO_READ},
        {.addr=0xb2a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xa771, .a=0xb4, .x=0xd1, .y=0x36, .sp=0x07, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa771, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa772, .a=0xd1, .x=0xd1, .y=0x36, .sp=0x07, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa771, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa771, .value=0x7d, .type=IO_READ},
        {.addr=0xa772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x3303, .a=0xb4, .x=0xaa, .y=0x84, .sp=0x35, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3303, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3304, .a=0xaa, .x=0xaa, .y=0x84, .sp=0x35, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3303, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3303, .value=0x7d, .type=IO_READ},
        {.addr=0x3304, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0x97, .x=0xf7, .y=0xec, .sp=0x26, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0747, .a=0xf7, .x=0xf7, .y=0xec, .sp=0x26, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x7d, .type=IO_READ},
        {.addr=0x0747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xd9f8, .a=0xce, .x=0x01, .y=0x3c, .sp=0xa7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd9f9, .a=0x01, .x=0x01, .y=0x3c, .sp=0xa7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd9f8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd9f8, .value=0x7d, .type=IO_READ},
        {.addr=0xd9f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x14cf, .a=0xb4, .x=0xc4, .y=0x5c, .sp=0x5a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x14cf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x14d0, .a=0xc4, .x=0xc4, .y=0x5c, .sp=0x5a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x14cf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x14cf, .value=0x7d, .type=IO_READ},
        {.addr=0x14d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x66fb, .a=0x80, .x=0xac, .y=0x55, .sp=0x6a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x66fb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x66fc, .a=0xac, .x=0xac, .y=0x55, .sp=0x6a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x66fb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x66fb, .value=0x7d, .type=IO_READ},
        {.addr=0x66fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xb7cd, .a=0x59, .x=0xee, .y=0x20, .sp=0xa6, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xb7cd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb7ce, .a=0xee, .x=0xee, .y=0x20, .sp=0xa6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb7cd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb7cd, .value=0x7d, .type=IO_READ},
        {.addr=0xb7ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xb530, .a=0xfe, .x=0x55, .y=0x95, .sp=0xd0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb530, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb531, .a=0x55, .x=0x55, .y=0x95, .sp=0xd0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb530, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb530, .value=0x7d, .type=IO_READ},
        {.addr=0xb531, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x9c6b, .a=0x03, .x=0x3d, .y=0xfa, .sp=0x28, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9c6b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9c6c, .a=0x3d, .x=0x3d, .y=0xfa, .sp=0x28, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9c6b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9c6b, .value=0x7d, .type=IO_READ},
        {.addr=0x9c6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x7f05, .a=0xc4, .x=0x1b, .y=0xa5, .sp=0x56, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7f05, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7f06, .a=0x1b, .x=0x1b, .y=0xa5, .sp=0x56, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7f05, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7f05, .value=0x7d, .type=IO_READ},
        {.addr=0x7f06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xfc8f, .a=0xe7, .x=0xf9, .y=0xb9, .sp=0x3f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfc90, .a=0xf9, .x=0xf9, .y=0xb9, .sp=0x3f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfc8f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfc8f, .value=0x7d, .type=IO_READ},
        {.addr=0xfc90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x9364, .a=0x1c, .x=0xcc, .y=0x1a, .sp=0x1a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9364, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9365, .a=0xcc, .x=0xcc, .y=0x1a, .sp=0x1a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9364, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9364, .value=0x7d, .type=IO_READ},
        {.addr=0x9365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xacd1, .a=0x0d, .x=0x52, .y=0x37, .sp=0xe4, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xacd1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xacd2, .a=0x52, .x=0x52, .y=0x37, .sp=0xe4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xacd1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xacd1, .value=0x7d, .type=IO_READ},
        {.addr=0xacd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x0622, .a=0x6d, .x=0xa0, .y=0x2c, .sp=0x83, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0622, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0623, .a=0xa0, .x=0xa0, .y=0x2c, .sp=0x83, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0622, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0622, .value=0x7d, .type=IO_READ},
        {.addr=0x0623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xa1ca, .a=0xc7, .x=0x90, .y=0x75, .sp=0x11, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa1ca, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa1cb, .a=0x90, .x=0x90, .y=0x75, .sp=0x11, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa1ca, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa1ca, .value=0x7d, .type=IO_READ},
        {.addr=0xa1cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x93f6, .a=0xb6, .x=0x35, .y=0x37, .sp=0x37, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x93f6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x93f7, .a=0x35, .x=0x35, .y=0x37, .sp=0x37, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x93f6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x93f6, .value=0x7d, .type=IO_READ},
        {.addr=0x93f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x1cf7, .a=0x3b, .x=0x4b, .y=0x8f, .sp=0xae, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1cf7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1cf8, .a=0x4b, .x=0x4b, .y=0x8f, .sp=0xae, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1cf7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1cf7, .value=0x7d, .type=IO_READ},
        {.addr=0x1cf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x5d2c, .a=0x8d, .x=0xe5, .y=0xf9, .sp=0x91, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5d2d, .a=0xe5, .x=0xe5, .y=0xf9, .sp=0x91, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5d2c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5d2c, .value=0x7d, .type=IO_READ},
        {.addr=0x5d2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x8a52, .a=0x3d, .x=0xcb, .y=0x17, .sp=0xef, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8a52, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8a53, .a=0xcb, .x=0xcb, .y=0x17, .sp=0xef, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8a52, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8a52, .value=0x7d, .type=IO_READ},
        {.addr=0x8a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x9cf9, .a=0x0e, .x=0x62, .y=0x12, .sp=0x77, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9cfa, .a=0x62, .x=0x62, .y=0x12, .sp=0x77, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9cf9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9cf9, .value=0x7d, .type=IO_READ},
        {.addr=0x9cfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xcadb, .a=0xf6, .x=0x09, .y=0x02, .sp=0x96, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xcadb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcadc, .a=0x09, .x=0x09, .y=0x02, .sp=0x96, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcadb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcadb, .value=0x7d, .type=IO_READ},
        {.addr=0xcadc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xe26e, .a=0xa1, .x=0x65, .y=0xec, .sp=0x43, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe26e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe26f, .a=0x65, .x=0x65, .y=0xec, .sp=0x43, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe26e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe26e, .value=0x7d, .type=IO_READ},
        {.addr=0xe26f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x4a22, .a=0x72, .x=0x62, .y=0x14, .sp=0x94, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4a22, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4a23, .a=0x62, .x=0x62, .y=0x14, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4a22, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4a22, .value=0x7d, .type=IO_READ},
        {.addr=0x4a23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x9fa2, .a=0x4c, .x=0x8b, .y=0xed, .sp=0xb0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9fa3, .a=0x8b, .x=0x8b, .y=0xed, .sp=0xb0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9fa2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa2, .value=0x7d, .type=IO_READ},
        {.addr=0x9fa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xb070, .a=0xd8, .x=0x1d, .y=0x6b, .sp=0x5f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb070, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb071, .a=0x1d, .x=0x1d, .y=0x6b, .sp=0x5f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb070, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb070, .value=0x7d, .type=IO_READ},
        {.addr=0xb071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x6515, .a=0x07, .x=0x8b, .y=0x6d, .sp=0xe8, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6515, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6516, .a=0x8b, .x=0x8b, .y=0x6d, .sp=0xe8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6515, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6515, .value=0x7d, .type=IO_READ},
        {.addr=0x6516, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xda2d, .a=0x00, .x=0x5c, .y=0xdd, .sp=0x22, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xda2d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xda2e, .a=0x5c, .x=0x5c, .y=0xdd, .sp=0x22, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xda2d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xda2d, .value=0x7d, .type=IO_READ},
        {.addr=0xda2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xb0b8, .a=0xe1, .x=0x0f, .y=0x16, .sp=0x1b, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb0b9, .a=0x0f, .x=0x0f, .y=0x16, .sp=0x1b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb0b8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb0b8, .value=0x7d, .type=IO_READ},
        {.addr=0xb0b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xd394, .a=0x2f, .x=0x3c, .y=0x4b, .sp=0x97, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd394, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd395, .a=0x3c, .x=0x3c, .y=0x4b, .sp=0x97, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd394, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd394, .value=0x7d, .type=IO_READ},
        {.addr=0xd395, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x8f52, .a=0xe0, .x=0xe9, .y=0x05, .sp=0x52, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8f52, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8f53, .a=0xe9, .x=0xe9, .y=0x05, .sp=0x52, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8f52, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8f52, .value=0x7d, .type=IO_READ},
        {.addr=0x8f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x6b51, .a=0x12, .x=0xc9, .y=0x77, .sp=0x9d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x6b51, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6b52, .a=0xc9, .x=0xc9, .y=0x77, .sp=0x9d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6b51, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6b51, .value=0x7d, .type=IO_READ},
        {.addr=0x6b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xf0a0, .a=0x0b, .x=0x80, .y=0xdb, .sp=0xac, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf0a1, .a=0x80, .x=0x80, .y=0xdb, .sp=0xac, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf0a0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf0a0, .value=0x7d, .type=IO_READ},
        {.addr=0xf0a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x9fc4, .a=0xb0, .x=0xed, .y=0x4e, .sp=0xfc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x9fc4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9fc5, .a=0xed, .x=0xed, .y=0x4e, .sp=0xfc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9fc4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9fc4, .value=0x7d, .type=IO_READ},
        {.addr=0x9fc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x5512, .a=0xb0, .x=0xa2, .y=0xa4, .sp=0x8f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x5512, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5513, .a=0xa2, .x=0xa2, .y=0xa4, .sp=0x8f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5512, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5512, .value=0x7d, .type=IO_READ},
        {.addr=0x5513, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x0371, .a=0x07, .x=0x8e, .y=0x3c, .sp=0x7d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0371, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0372, .a=0x8e, .x=0x8e, .y=0x3c, .sp=0x7d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0371, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0371, .value=0x7d, .type=IO_READ},
        {.addr=0x0372, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x69c6, .a=0x3c, .x=0xcc, .y=0x84, .sp=0xc3, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x69c6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x69c7, .a=0xcc, .x=0xcc, .y=0x84, .sp=0xc3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x69c6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x69c6, .value=0x7d, .type=IO_READ},
        {.addr=0x69c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x03ec, .a=0x5c, .x=0x39, .y=0x6e, .sp=0x6a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x03ec, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x03ed, .a=0x39, .x=0x39, .y=0x6e, .sp=0x6a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x03ec, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x03ec, .value=0x7d, .type=IO_READ},
        {.addr=0x03ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x450d, .a=0x89, .x=0x7a, .y=0x76, .sp=0x98, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x450d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x450e, .a=0x7a, .x=0x7a, .y=0x76, .sp=0x98, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x450d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x450d, .value=0x7d, .type=IO_READ},
        {.addr=0x450e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x9ebb, .a=0xfc, .x=0x51, .y=0xbe, .sp=0xaf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9ebb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9ebc, .a=0x51, .x=0x51, .y=0xbe, .sp=0xaf, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9ebb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9ebb, .value=0x7d, .type=IO_READ},
        {.addr=0x9ebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x9b06, .a=0xc2, .x=0xdd, .y=0x61, .sp=0x6a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9b06, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9b07, .a=0xdd, .x=0xdd, .y=0x61, .sp=0x6a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9b06, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9b06, .value=0x7d, .type=IO_READ},
        {.addr=0x9b07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x23bb, .a=0x18, .x=0x15, .y=0xcc, .sp=0x6b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x23bb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x23bc, .a=0x15, .x=0x15, .y=0xcc, .sp=0x6b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x23bb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x23bb, .value=0x7d, .type=IO_READ},
        {.addr=0x23bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x9480, .a=0x75, .x=0x9b, .y=0x64, .sp=0x6f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x9480, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9481, .a=0x9b, .x=0x9b, .y=0x64, .sp=0x6f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9480, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9480, .value=0x7d, .type=IO_READ},
        {.addr=0x9481, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xc59a, .a=0x51, .x=0x6a, .y=0x22, .sp=0x8c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc59a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc59b, .a=0x6a, .x=0x6a, .y=0x22, .sp=0x8c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc59a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc59a, .value=0x7d, .type=IO_READ},
        {.addr=0xc59b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x01db, .a=0xf0, .x=0xb6, .y=0xf9, .sp=0x48, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x01dc, .a=0xb6, .x=0xb6, .y=0xf9, .sp=0x48, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x01db, .value=0x7d, .type=IO_READ},
        {.addr=0x01dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xb41f, .a=0xda, .x=0x7b, .y=0x2d, .sp=0x45, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb41f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb420, .a=0x7b, .x=0x7b, .y=0x2d, .sp=0x45, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb41f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb41f, .value=0x7d, .type=IO_READ},
        {.addr=0xb420, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x699e, .a=0x6d, .x=0x81, .y=0xe0, .sp=0xa0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x699e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x699f, .a=0x81, .x=0x81, .y=0xe0, .sp=0xa0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x699e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x699e, .value=0x7d, .type=IO_READ},
        {.addr=0x699f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x207e, .a=0xe4, .x=0xf8, .y=0xc6, .sp=0x28, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x207e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x207f, .a=0xf8, .x=0xf8, .y=0xc6, .sp=0x28, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x207e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x207e, .value=0x7d, .type=IO_READ},
        {.addr=0x207f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x1931, .a=0x70, .x=0x8e, .y=0x6b, .sp=0x53, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x1931, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1932, .a=0x8e, .x=0x8e, .y=0x6b, .sp=0x53, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1931, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1931, .value=0x7d, .type=IO_READ},
        {.addr=0x1932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x879e, .a=0x4c, .x=0x68, .y=0x40, .sp=0xe2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x879e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x879f, .a=0x68, .x=0x68, .y=0x40, .sp=0xe2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x879e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x879e, .value=0x7d, .type=IO_READ},
        {.addr=0x879f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xde7c, .a=0x8d, .x=0x1f, .y=0xae, .sp=0x5c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xde7c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xde7d, .a=0x1f, .x=0x1f, .y=0xae, .sp=0x5c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xde7c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xde7c, .value=0x7d, .type=IO_READ},
        {.addr=0xde7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xad0e, .a=0x67, .x=0x44, .y=0x5e, .sp=0x29, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xad0e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xad0f, .a=0x44, .x=0x44, .y=0x5e, .sp=0x29, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xad0e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xad0e, .value=0x7d, .type=IO_READ},
        {.addr=0xad0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xeb3b, .a=0x64, .x=0x56, .y=0xe6, .sp=0x61, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeb3c, .a=0x56, .x=0x56, .y=0xe6, .sp=0x61, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xeb3b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeb3b, .value=0x7d, .type=IO_READ},
        {.addr=0xeb3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xf24e, .a=0x36, .x=0xad, .y=0xf3, .sp=0x22, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf24e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf24f, .a=0xad, .x=0xad, .y=0xf3, .sp=0x22, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf24e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf24e, .value=0x7d, .type=IO_READ},
        {.addr=0xf24f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x142c, .a=0x6c, .x=0x82, .y=0xed, .sp=0x5f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x142c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x142d, .a=0x82, .x=0x82, .y=0xed, .sp=0x5f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x142c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x142c, .value=0x7d, .type=IO_READ},
        {.addr=0x142d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x904b, .a=0x26, .x=0xc0, .y=0x8e, .sp=0xd7, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x904b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x904c, .a=0xc0, .x=0xc0, .y=0x8e, .sp=0xd7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x904b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x904b, .value=0x7d, .type=IO_READ},
        {.addr=0x904c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x5267, .a=0xda, .x=0x07, .y=0xf3, .sp=0xa5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5267, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5268, .a=0x07, .x=0x07, .y=0xf3, .sp=0xa5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5267, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5267, .value=0x7d, .type=IO_READ},
        {.addr=0x5268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xe48b, .a=0x5a, .x=0xd4, .y=0x85, .sp=0xb1, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe48b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe48c, .a=0xd4, .x=0xd4, .y=0x85, .sp=0xb1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe48b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe48b, .value=0x7d, .type=IO_READ},
        {.addr=0xe48c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xaffe, .a=0xd7, .x=0xf8, .y=0x10, .sp=0x23, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xaffe, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xafff, .a=0xf8, .x=0xf8, .y=0x10, .sp=0x23, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xaffe, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaffe, .value=0x7d, .type=IO_READ},
        {.addr=0xafff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x4823, .a=0xc1, .x=0x29, .y=0x78, .sp=0x3d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4823, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4824, .a=0x29, .x=0x29, .y=0x78, .sp=0x3d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x4823, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4823, .value=0x7d, .type=IO_READ},
        {.addr=0x4824, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xe0ba, .a=0xcf, .x=0xe5, .y=0x8c, .sp=0x90, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ba, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe0bb, .a=0xe5, .x=0xe5, .y=0x8c, .sp=0x90, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe0ba, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe0ba, .value=0x7d, .type=IO_READ},
        {.addr=0xe0bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xe516, .a=0x84, .x=0x2d, .y=0xf8, .sp=0xa1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe516, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe517, .a=0x2d, .x=0x2d, .y=0xf8, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe516, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe516, .value=0x7d, .type=IO_READ},
        {.addr=0xe517, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x098c, .a=0x50, .x=0x76, .y=0xfb, .sp=0x8d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x098c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x098d, .a=0x76, .x=0x76, .y=0xfb, .sp=0x8d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x098c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x098c, .value=0x7d, .type=IO_READ},
        {.addr=0x098d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xf022, .a=0xf3, .x=0xc0, .y=0x98, .sp=0x71, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf022, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf023, .a=0xc0, .x=0xc0, .y=0x98, .sp=0x71, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf022, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf022, .value=0x7d, .type=IO_READ},
        {.addr=0xf023, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x9492, .a=0xe8, .x=0x28, .y=0x8c, .sp=0x67, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x9492, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9493, .a=0x28, .x=0x28, .y=0x8c, .sp=0x67, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9492, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9492, .value=0x7d, .type=IO_READ},
        {.addr=0x9493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x2e07, .a=0x50, .x=0xad, .y=0x5b, .sp=0xb0, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2e07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e08, .a=0xad, .x=0xad, .y=0x5b, .sp=0xb0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2e07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e07, .value=0x7d, .type=IO_READ},
        {.addr=0x2e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x31d0, .a=0xc5, .x=0x38, .y=0x90, .sp=0x41, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x31d0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x31d1, .a=0x38, .x=0x38, .y=0x90, .sp=0x41, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x31d0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x31d0, .value=0x7d, .type=IO_READ},
        {.addr=0x31d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x5d4f, .a=0x56, .x=0xf9, .y=0xa9, .sp=0xb2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5d4f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5d50, .a=0xf9, .x=0xf9, .y=0xa9, .sp=0xb2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5d4f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5d4f, .value=0x7d, .type=IO_READ},
        {.addr=0x5d50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x9e3b, .a=0x7b, .x=0x41, .y=0x28, .sp=0xf6, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e3b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9e3c, .a=0x41, .x=0x41, .y=0x28, .sp=0xf6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9e3b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9e3b, .value=0x7d, .type=IO_READ},
        {.addr=0x9e3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x6c0a, .a=0x2f, .x=0x20, .y=0x2a, .sp=0xef, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6c0a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6c0b, .a=0x20, .x=0x20, .y=0x2a, .sp=0xef, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6c0a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6c0a, .value=0x7d, .type=IO_READ},
        {.addr=0x6c0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xd1ef, .a=0x95, .x=0xf6, .y=0x45, .sp=0x25, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ef, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd1f0, .a=0xf6, .x=0xf6, .y=0x45, .sp=0x25, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd1ef, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd1ef, .value=0x7d, .type=IO_READ},
        {.addr=0xd1f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x4355, .a=0x1a, .x=0x12, .y=0x35, .sp=0xd0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4355, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4356, .a=0x12, .x=0x12, .y=0x35, .sp=0xd0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4355, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4355, .value=0x7d, .type=IO_READ},
        {.addr=0x4356, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x954b, .a=0x28, .x=0xae, .y=0x11, .sp=0x5c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x954b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x954c, .a=0xae, .x=0xae, .y=0x11, .sp=0x5c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x954b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x954b, .value=0x7d, .type=IO_READ},
        {.addr=0x954c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x2800, .a=0x2f, .x=0xf9, .y=0x42, .sp=0x7b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2800, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2801, .a=0xf9, .x=0xf9, .y=0x42, .sp=0x7b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2800, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2800, .value=0x7d, .type=IO_READ},
        {.addr=0x2801, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x393f, .a=0xc9, .x=0x5c, .y=0x4e, .sp=0x0f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x393f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3940, .a=0x5c, .x=0x5c, .y=0x4e, .sp=0x0f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x393f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x393f, .value=0x7d, .type=IO_READ},
        {.addr=0x3940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x941d, .a=0x90, .x=0xc5, .y=0x16, .sp=0xf0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x941d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x941e, .a=0xc5, .x=0xc5, .y=0x16, .sp=0xf0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x941d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x941d, .value=0x7d, .type=IO_READ},
        {.addr=0x941e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x0241, .a=0x45, .x=0x1c, .y=0x02, .sp=0xbe, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0241, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0242, .a=0x1c, .x=0x1c, .y=0x02, .sp=0xbe, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0241, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0241, .value=0x7d, .type=IO_READ},
        {.addr=0x0242, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x9547, .a=0x3a, .x=0xb4, .y=0x40, .sp=0x99, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9547, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9548, .a=0xb4, .x=0xb4, .y=0x40, .sp=0x99, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9547, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9547, .value=0x7d, .type=IO_READ},
        {.addr=0x9548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x9722, .a=0x6f, .x=0xe6, .y=0x7b, .sp=0x65, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9722, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9723, .a=0xe6, .x=0xe6, .y=0x7b, .sp=0x65, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9722, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9722, .value=0x7d, .type=IO_READ},
        {.addr=0x9723, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x8c07, .a=0x30, .x=0xbe, .y=0xd4, .sp=0x5b, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8c07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8c08, .a=0xbe, .x=0xbe, .y=0xd4, .sp=0x5b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8c07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8c07, .value=0x7d, .type=IO_READ},
        {.addr=0x8c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x56c7, .a=0x56, .x=0x47, .y=0x77, .sp=0xac, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x56c7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x56c8, .a=0x47, .x=0x47, .y=0x77, .sp=0xac, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x56c7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x56c7, .value=0x7d, .type=IO_READ},
        {.addr=0x56c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x2399, .a=0x05, .x=0xed, .y=0x84, .sp=0x20, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2399, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x239a, .a=0xed, .x=0xed, .y=0x84, .sp=0x20, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2399, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2399, .value=0x7d, .type=IO_READ},
        {.addr=0x239a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x079a, .a=0x8d, .x=0xb1, .y=0x29, .sp=0x3c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x079a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x079b, .a=0xb1, .x=0xb1, .y=0x29, .sp=0x3c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x079a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x079a, .value=0x7d, .type=IO_READ},
        {.addr=0x079b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6d7b, .a=0xb8, .x=0x52, .y=0x00, .sp=0xa9, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6d7b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6d7c, .a=0x52, .x=0x52, .y=0x00, .sp=0xa9, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6d7b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6d7b, .value=0x7d, .type=IO_READ},
        {.addr=0x6d7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x106b, .a=0x22, .x=0x67, .y=0x91, .sp=0xb5, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x106b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x106c, .a=0x67, .x=0x67, .y=0x91, .sp=0xb5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x106b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x106b, .value=0x7d, .type=IO_READ},
        {.addr=0x106c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xc0a8, .a=0x6e, .x=0x6f, .y=0x39, .sp=0xe7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xc0a8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc0a9, .a=0x6f, .x=0x6f, .y=0x39, .sp=0xe7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc0a8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc0a8, .value=0x7d, .type=IO_READ},
        {.addr=0xc0a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xe195, .a=0xd4, .x=0x7f, .y=0xbc, .sp=0x22, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xe195, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe196, .a=0x7f, .x=0x7f, .y=0xbc, .sp=0x22, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe195, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe195, .value=0x7d, .type=IO_READ},
        {.addr=0xe196, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x264a, .a=0xdb, .x=0x72, .y=0xb6, .sp=0xd7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x264a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x264b, .a=0x72, .x=0x72, .y=0xb6, .sp=0xd7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x264a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x264a, .value=0x7d, .type=IO_READ},
        {.addr=0x264b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x09e5, .a=0xe5, .x=0xc4, .y=0xbf, .sp=0x3a, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x09e5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x09e6, .a=0xc4, .x=0xc4, .y=0xbf, .sp=0x3a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x09e5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x09e5, .value=0x7d, .type=IO_READ},
        {.addr=0x09e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xab6f, .a=0x8c, .x=0x4e, .y=0xe1, .sp=0xd7, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xab6f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xab70, .a=0x4e, .x=0x4e, .y=0xe1, .sp=0xd7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xab6f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xab6f, .value=0x7d, .type=IO_READ},
        {.addr=0xab70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x68a9, .a=0x81, .x=0x5d, .y=0x7d, .sp=0x96, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x68a9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x68aa, .a=0x5d, .x=0x5d, .y=0x7d, .sp=0x96, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x68a9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x68a9, .value=0x7d, .type=IO_READ},
        {.addr=0x68aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0201) {
    const struct CPU_State initial_cpu = {.pc=0x1898, .a=0x49, .x=0x59, .y=0xe3, .sp=0x2a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1898, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1899, .a=0x59, .x=0x59, .y=0xe3, .sp=0x2a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1898, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1898, .value=0x7d, .type=IO_READ},
        {.addr=0x1899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0202) {
    const struct CPU_State initial_cpu = {.pc=0xd89a, .a=0x00, .x=0xe0, .y=0x9e, .sp=0x67, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd89a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd89b, .a=0xe0, .x=0xe0, .y=0x9e, .sp=0x67, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd89a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd89a, .value=0x7d, .type=IO_READ},
        {.addr=0xd89b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0203) {
    const struct CPU_State initial_cpu = {.pc=0xabd6, .a=0x91, .x=0x91, .y=0xb8, .sp=0x61, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xabd6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xabd7, .a=0x91, .x=0x91, .y=0xb8, .sp=0x61, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xabd6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xabd6, .value=0x7d, .type=IO_READ},
        {.addr=0xabd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x9937, .a=0xf7, .x=0x96, .y=0x77, .sp=0x6c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9937, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9938, .a=0x96, .x=0x96, .y=0x77, .sp=0x6c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9937, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9937, .value=0x7d, .type=IO_READ},
        {.addr=0x9938, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0205) {
    const struct CPU_State initial_cpu = {.pc=0x0799, .a=0x2f, .x=0xb8, .y=0xba, .sp=0xd3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0799, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x079a, .a=0xb8, .x=0xb8, .y=0xba, .sp=0xd3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0799, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0799, .value=0x7d, .type=IO_READ},
        {.addr=0x079a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0206) {
    const struct CPU_State initial_cpu = {.pc=0xb30b, .a=0xb0, .x=0xad, .y=0x6e, .sp=0x41, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb30b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb30c, .a=0xad, .x=0xad, .y=0x6e, .sp=0x41, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb30b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb30b, .value=0x7d, .type=IO_READ},
        {.addr=0xb30c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x65d9, .a=0x2e, .x=0x83, .y=0x8b, .sp=0x6c, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x65d9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x65da, .a=0x83, .x=0x83, .y=0x8b, .sp=0x6c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x65d9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x65d9, .value=0x7d, .type=IO_READ},
        {.addr=0x65da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0208) {
    const struct CPU_State initial_cpu = {.pc=0xd750, .a=0x82, .x=0xc7, .y=0x2f, .sp=0x5a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xd750, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd751, .a=0xc7, .x=0xc7, .y=0x2f, .sp=0x5a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd750, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd750, .value=0x7d, .type=IO_READ},
        {.addr=0xd751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0209) {
    const struct CPU_State initial_cpu = {.pc=0x792c, .a=0xe9, .x=0x45, .y=0x62, .sp=0x8d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x792c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x792d, .a=0x45, .x=0x45, .y=0x62, .sp=0x8d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x792c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x792c, .value=0x7d, .type=IO_READ},
        {.addr=0x792d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_020A) {
    const struct CPU_State initial_cpu = {.pc=0x93d5, .a=0x48, .x=0x23, .y=0xa7, .sp=0x80, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x93d5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x93d6, .a=0x23, .x=0x23, .y=0xa7, .sp=0x80, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x93d5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x93d5, .value=0x7d, .type=IO_READ},
        {.addr=0x93d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_020B) {
    const struct CPU_State initial_cpu = {.pc=0xb464, .a=0x58, .x=0x92, .y=0x64, .sp=0x8c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb464, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb465, .a=0x92, .x=0x92, .y=0x64, .sp=0x8c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb464, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb464, .value=0x7d, .type=IO_READ},
        {.addr=0xb465, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_020C) {
    const struct CPU_State initial_cpu = {.pc=0xfb33, .a=0x87, .x=0x6a, .y=0xca, .sp=0x03, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfb33, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfb34, .a=0x6a, .x=0x6a, .y=0xca, .sp=0x03, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfb33, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfb33, .value=0x7d, .type=IO_READ},
        {.addr=0xfb34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_020D) {
    const struct CPU_State initial_cpu = {.pc=0xfb4d, .a=0xf1, .x=0xb5, .y=0xd7, .sp=0xb2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfb4d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfb4e, .a=0xb5, .x=0xb5, .y=0xd7, .sp=0xb2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xfb4d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfb4d, .value=0x7d, .type=IO_READ},
        {.addr=0xfb4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x1325, .a=0x59, .x=0x11, .y=0xe2, .sp=0x51, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x1325, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1326, .a=0x11, .x=0x11, .y=0xe2, .sp=0x51, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1325, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1325, .value=0x7d, .type=IO_READ},
        {.addr=0x1326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x2e5e, .a=0x82, .x=0x36, .y=0x8b, .sp=0xa4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2e5e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e5f, .a=0x36, .x=0x36, .y=0x8b, .sp=0xa4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2e5e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e5e, .value=0x7d, .type=IO_READ},
        {.addr=0x2e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0210) {
    const struct CPU_State initial_cpu = {.pc=0x46e2, .a=0x6e, .x=0xc8, .y=0xe0, .sp=0xfa, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x46e2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x46e3, .a=0xc8, .x=0xc8, .y=0xe0, .sp=0xfa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x46e2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x46e2, .value=0x7d, .type=IO_READ},
        {.addr=0x46e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0211) {
    const struct CPU_State initial_cpu = {.pc=0xa14c, .a=0xc1, .x=0xf8, .y=0x02, .sp=0x02, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xa14c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa14d, .a=0xf8, .x=0xf8, .y=0x02, .sp=0x02, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa14c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa14c, .value=0x7d, .type=IO_READ},
        {.addr=0xa14d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf9e3, .a=0x77, .x=0x76, .y=0x15, .sp=0x1f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf9e4, .a=0x76, .x=0x76, .y=0x15, .sp=0x1f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf9e3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf9e3, .value=0x7d, .type=IO_READ},
        {.addr=0xf9e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0213) {
    const struct CPU_State initial_cpu = {.pc=0xbb5f, .a=0x25, .x=0x1c, .y=0x88, .sp=0x41, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xbb5f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbb60, .a=0x1c, .x=0x1c, .y=0x88, .sp=0x41, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xbb5f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbb5f, .value=0x7d, .type=IO_READ},
        {.addr=0xbb60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0214) {
    const struct CPU_State initial_cpu = {.pc=0xfec3, .a=0xff, .x=0x91, .y=0x5a, .sp=0x14, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfec3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfec4, .a=0x91, .x=0x91, .y=0x5a, .sp=0x14, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfec3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfec3, .value=0x7d, .type=IO_READ},
        {.addr=0xfec4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x0049, .a=0xc8, .x=0x85, .y=0x5f, .sp=0x5a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x004a, .a=0x85, .x=0x85, .y=0x5f, .sp=0x5a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0049, .value=0x7d, .type=IO_READ},
        {.addr=0x004a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x34a8, .a=0xa9, .x=0x65, .y=0xd1, .sp=0x2d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x34a8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x34a9, .a=0x65, .x=0x65, .y=0xd1, .sp=0x2d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x34a8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x34a8, .value=0x7d, .type=IO_READ},
        {.addr=0x34a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0217) {
    const struct CPU_State initial_cpu = {.pc=0xa519, .a=0x16, .x=0x1a, .y=0x70, .sp=0x45, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xa519, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa51a, .a=0x1a, .x=0x1a, .y=0x70, .sp=0x45, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa519, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa519, .value=0x7d, .type=IO_READ},
        {.addr=0xa51a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0218) {
    const struct CPU_State initial_cpu = {.pc=0x3eb8, .a=0x92, .x=0x95, .y=0x72, .sp=0x23, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3eb9, .a=0x95, .x=0x95, .y=0x72, .sp=0x23, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3eb8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3eb8, .value=0x7d, .type=IO_READ},
        {.addr=0x3eb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x8509, .a=0x43, .x=0x97, .y=0x4b, .sp=0x99, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8509, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x850a, .a=0x97, .x=0x97, .y=0x4b, .sp=0x99, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8509, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8509, .value=0x7d, .type=IO_READ},
        {.addr=0x850a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_021A) {
    const struct CPU_State initial_cpu = {.pc=0xd7fa, .a=0xff, .x=0x22, .y=0x8c, .sp=0x2c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd7fa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd7fb, .a=0x22, .x=0x22, .y=0x8c, .sp=0x2c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd7fa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd7fa, .value=0x7d, .type=IO_READ},
        {.addr=0xd7fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_021B) {
    const struct CPU_State initial_cpu = {.pc=0x4d9c, .a=0x94, .x=0x7e, .y=0x4d, .sp=0x6d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4d9c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4d9d, .a=0x7e, .x=0x7e, .y=0x4d, .sp=0x6d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4d9c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4d9c, .value=0x7d, .type=IO_READ},
        {.addr=0x4d9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_021C) {
    const struct CPU_State initial_cpu = {.pc=0x5d9e, .a=0x20, .x=0xfa, .y=0x04, .sp=0x1d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5d9e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5d9f, .a=0xfa, .x=0xfa, .y=0x04, .sp=0x1d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5d9e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5d9e, .value=0x7d, .type=IO_READ},
        {.addr=0x5d9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_021D) {
    const struct CPU_State initial_cpu = {.pc=0x60f6, .a=0x2d, .x=0xfb, .y=0x70, .sp=0x29, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x60f6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x60f7, .a=0xfb, .x=0xfb, .y=0x70, .sp=0x29, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x60f6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x60f6, .value=0x7d, .type=IO_READ},
        {.addr=0x60f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_021E) {
    const struct CPU_State initial_cpu = {.pc=0xcce6, .a=0x1a, .x=0x43, .y=0x1d, .sp=0x03, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xcce6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcce7, .a=0x43, .x=0x43, .y=0x1d, .sp=0x03, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xcce6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcce6, .value=0x7d, .type=IO_READ},
        {.addr=0xcce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x972c, .a=0x03, .x=0x8e, .y=0x3d, .sp=0xde, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x972c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x972d, .a=0x8e, .x=0x8e, .y=0x3d, .sp=0xde, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x972c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x972c, .value=0x7d, .type=IO_READ},
        {.addr=0x972d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0220) {
    const struct CPU_State initial_cpu = {.pc=0x0c17, .a=0x71, .x=0xb1, .y=0x0a, .sp=0xc1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0c17, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0c18, .a=0xb1, .x=0xb1, .y=0x0a, .sp=0xc1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0c17, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0c17, .value=0x7d, .type=IO_READ},
        {.addr=0x0c18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0221) {
    const struct CPU_State initial_cpu = {.pc=0x52a2, .a=0x8b, .x=0x99, .y=0x0d, .sp=0x15, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x52a2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x52a3, .a=0x99, .x=0x99, .y=0x0d, .sp=0x15, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x52a2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x52a2, .value=0x7d, .type=IO_READ},
        {.addr=0x52a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0222) {
    const struct CPU_State initial_cpu = {.pc=0xfdb5, .a=0xe7, .x=0x55, .y=0x19, .sp=0x9c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfdb6, .a=0x55, .x=0x55, .y=0x19, .sp=0x9c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xfdb5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfdb5, .value=0x7d, .type=IO_READ},
        {.addr=0xfdb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0223) {
    const struct CPU_State initial_cpu = {.pc=0xdb9d, .a=0x36, .x=0xb5, .y=0xad, .sp=0xbc, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xdb9d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdb9e, .a=0xb5, .x=0xb5, .y=0xad, .sp=0xbc, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdb9d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdb9d, .value=0x7d, .type=IO_READ},
        {.addr=0xdb9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0224) {
    const struct CPU_State initial_cpu = {.pc=0x11e8, .a=0xca, .x=0x65, .y=0x83, .sp=0x61, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x11e8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x11e9, .a=0x65, .x=0x65, .y=0x83, .sp=0x61, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x11e8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x11e8, .value=0x7d, .type=IO_READ},
        {.addr=0x11e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0225) {
    const struct CPU_State initial_cpu = {.pc=0xeb74, .a=0x32, .x=0x4d, .y=0x7b, .sp=0x54, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xeb74, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeb75, .a=0x4d, .x=0x4d, .y=0x7b, .sp=0x54, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xeb74, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeb74, .value=0x7d, .type=IO_READ},
        {.addr=0xeb75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0226) {
    const struct CPU_State initial_cpu = {.pc=0x8d00, .a=0xd3, .x=0x93, .y=0x3a, .sp=0xd0, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8d00, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8d01, .a=0x93, .x=0x93, .y=0x3a, .sp=0xd0, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8d00, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8d00, .value=0x7d, .type=IO_READ},
        {.addr=0x8d01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0227) {
    const struct CPU_State initial_cpu = {.pc=0xa913, .a=0xcd, .x=0x18, .y=0x0c, .sp=0x4e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa913, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa914, .a=0x18, .x=0x18, .y=0x0c, .sp=0x4e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa913, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa913, .value=0x7d, .type=IO_READ},
        {.addr=0xa914, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0228) {
    const struct CPU_State initial_cpu = {.pc=0xb540, .a=0xca, .x=0x25, .y=0x0c, .sp=0x3b, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb540, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb541, .a=0x25, .x=0x25, .y=0x0c, .sp=0x3b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb540, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb540, .value=0x7d, .type=IO_READ},
        {.addr=0xb541, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x3084, .a=0x57, .x=0x56, .y=0xf2, .sp=0xe3, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3084, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3085, .a=0x56, .x=0x56, .y=0xf2, .sp=0xe3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3084, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3084, .value=0x7d, .type=IO_READ},
        {.addr=0x3085, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x9b3e, .a=0xb4, .x=0x63, .y=0x16, .sp=0xf7, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9b3e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9b3f, .a=0x63, .x=0x63, .y=0x16, .sp=0xf7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9b3e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9b3e, .value=0x7d, .type=IO_READ},
        {.addr=0x9b3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x3df6, .a=0xd6, .x=0xb4, .y=0xe0, .sp=0x4b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3df6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3df7, .a=0xb4, .x=0xb4, .y=0xe0, .sp=0x4b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3df6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3df6, .value=0x7d, .type=IO_READ},
        {.addr=0x3df7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_022C) {
    const struct CPU_State initial_cpu = {.pc=0xcdf9, .a=0xd1, .x=0xe7, .y=0xd4, .sp=0x1e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcdfa, .a=0xe7, .x=0xe7, .y=0xd4, .sp=0x1e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcdf9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcdf9, .value=0x7d, .type=IO_READ},
        {.addr=0xcdfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x6632, .a=0xad, .x=0x65, .y=0x05, .sp=0x54, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6632, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6633, .a=0x65, .x=0x65, .y=0x05, .sp=0x54, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6632, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6632, .value=0x7d, .type=IO_READ},
        {.addr=0x6633, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x0405, .a=0x5b, .x=0x05, .y=0xd3, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0405, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0406, .a=0x05, .x=0x05, .y=0xd3, .sp=0x8a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0405, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0405, .value=0x7d, .type=IO_READ},
        {.addr=0x0406, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x4bd6, .a=0x13, .x=0xa9, .y=0xae, .sp=0x51, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4bd7, .a=0xa9, .x=0xa9, .y=0xae, .sp=0x51, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4bd6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4bd6, .value=0x7d, .type=IO_READ},
        {.addr=0x4bd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1cd3, .a=0x9f, .x=0xe1, .y=0x83, .sp=0x24, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1cd4, .a=0xe1, .x=0xe1, .y=0x83, .sp=0x24, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1cd3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1cd3, .value=0x7d, .type=IO_READ},
        {.addr=0x1cd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0231) {
    const struct CPU_State initial_cpu = {.pc=0xc8a3, .a=0x93, .x=0xd0, .y=0x82, .sp=0xee, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc8a4, .a=0xd0, .x=0xd0, .y=0x82, .sp=0xee, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc8a3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc8a3, .value=0x7d, .type=IO_READ},
        {.addr=0xc8a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0232) {
    const struct CPU_State initial_cpu = {.pc=0x8fd8, .a=0xf6, .x=0x9d, .y=0x01, .sp=0x39, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8fd8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8fd9, .a=0x9d, .x=0x9d, .y=0x01, .sp=0x39, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8fd8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8fd8, .value=0x7d, .type=IO_READ},
        {.addr=0x8fd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0233) {
    const struct CPU_State initial_cpu = {.pc=0x3d04, .a=0x4b, .x=0x7c, .y=0x89, .sp=0xcd, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3d04, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3d05, .a=0x7c, .x=0x7c, .y=0x89, .sp=0xcd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3d04, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3d04, .value=0x7d, .type=IO_READ},
        {.addr=0x3d05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x9152, .a=0xdf, .x=0xd0, .y=0x2a, .sp=0x90, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9152, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9153, .a=0xd0, .x=0xd0, .y=0x2a, .sp=0x90, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9152, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9152, .value=0x7d, .type=IO_READ},
        {.addr=0x9153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0235) {
    const struct CPU_State initial_cpu = {.pc=0xac2e, .a=0xfa, .x=0x44, .y=0x3b, .sp=0xf0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xac2e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xac2f, .a=0x44, .x=0x44, .y=0x3b, .sp=0xf0, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xac2e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xac2e, .value=0x7d, .type=IO_READ},
        {.addr=0xac2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x511e, .a=0xa0, .x=0xeb, .y=0xb6, .sp=0xaa, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x511e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x511f, .a=0xeb, .x=0xeb, .y=0xb6, .sp=0xaa, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x511e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x511e, .value=0x7d, .type=IO_READ},
        {.addr=0x511f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0237) {
    const struct CPU_State initial_cpu = {.pc=0x41e1, .a=0xc1, .x=0x8e, .y=0xb9, .sp=0xcb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x41e1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x41e2, .a=0x8e, .x=0x8e, .y=0xb9, .sp=0xcb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x41e1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x41e1, .value=0x7d, .type=IO_READ},
        {.addr=0x41e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x16e3, .a=0x70, .x=0xad, .y=0xb2, .sp=0xd2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x16e3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x16e4, .a=0xad, .x=0xad, .y=0xb2, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x16e3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x16e3, .value=0x7d, .type=IO_READ},
        {.addr=0x16e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0239) {
    const struct CPU_State initial_cpu = {.pc=0x62d5, .a=0x3a, .x=0x54, .y=0x77, .sp=0x8f, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x62d5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x62d6, .a=0x54, .x=0x54, .y=0x77, .sp=0x8f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x62d5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x62d5, .value=0x7d, .type=IO_READ},
        {.addr=0x62d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_023A) {
    const struct CPU_State initial_cpu = {.pc=0xf02f, .a=0xa2, .x=0xe3, .y=0xb5, .sp=0x90, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf02f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf030, .a=0xe3, .x=0xe3, .y=0xb5, .sp=0x90, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf02f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf02f, .value=0x7d, .type=IO_READ},
        {.addr=0xf030, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_023B) {
    const struct CPU_State initial_cpu = {.pc=0xc2b4, .a=0x89, .x=0xa5, .y=0x16, .sp=0x51, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xc2b4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc2b5, .a=0xa5, .x=0xa5, .y=0x16, .sp=0x51, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc2b4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc2b4, .value=0x7d, .type=IO_READ},
        {.addr=0xc2b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_023C) {
    const struct CPU_State initial_cpu = {.pc=0x8503, .a=0x92, .x=0xac, .y=0x66, .sp=0xbb, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x8503, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8504, .a=0xac, .x=0xac, .y=0x66, .sp=0xbb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8503, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8503, .value=0x7d, .type=IO_READ},
        {.addr=0x8504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_023D) {
    const struct CPU_State initial_cpu = {.pc=0xff13, .a=0x1f, .x=0xd0, .y=0x32, .sp=0x0e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xff13, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xff14, .a=0xd0, .x=0xd0, .y=0x32, .sp=0x0e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xff13, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xff13, .value=0x7d, .type=IO_READ},
        {.addr=0xff14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_023E) {
    const struct CPU_State initial_cpu = {.pc=0x536d, .a=0xae, .x=0x81, .y=0x55, .sp=0x57, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x536d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x536e, .a=0x81, .x=0x81, .y=0x55, .sp=0x57, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x536d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x536d, .value=0x7d, .type=IO_READ},
        {.addr=0x536e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_023F) {
    const struct CPU_State initial_cpu = {.pc=0xa0e6, .a=0xc1, .x=0xaa, .y=0x68, .sp=0x51, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa0e7, .a=0xaa, .x=0xaa, .y=0x68, .sp=0x51, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa0e6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa0e6, .value=0x7d, .type=IO_READ},
        {.addr=0xa0e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0240) {
    const struct CPU_State initial_cpu = {.pc=0x479e, .a=0x99, .x=0xac, .y=0xbc, .sp=0xc5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x479e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x479f, .a=0xac, .x=0xac, .y=0xbc, .sp=0xc5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x479e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x479e, .value=0x7d, .type=IO_READ},
        {.addr=0x479f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0241) {
    const struct CPU_State initial_cpu = {.pc=0xe8ca, .a=0x8e, .x=0xe0, .y=0x07, .sp=0x06, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ca, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe8cb, .a=0xe0, .x=0xe0, .y=0x07, .sp=0x06, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe8ca, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe8ca, .value=0x7d, .type=IO_READ},
        {.addr=0xe8cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x92ba, .a=0x1a, .x=0x9d, .y=0x28, .sp=0x61, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x92ba, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x92bb, .a=0x9d, .x=0x9d, .y=0x28, .sp=0x61, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x92ba, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x92ba, .value=0x7d, .type=IO_READ},
        {.addr=0x92bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0243) {
    const struct CPU_State initial_cpu = {.pc=0xedb2, .a=0x9d, .x=0xd9, .y=0x90, .sp=0xa4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xedb2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xedb3, .a=0xd9, .x=0xd9, .y=0x90, .sp=0xa4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xedb2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xedb2, .value=0x7d, .type=IO_READ},
        {.addr=0xedb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9c3f, .a=0xa6, .x=0xfb, .y=0x37, .sp=0xda, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9c3f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9c40, .a=0xfb, .x=0xfb, .y=0x37, .sp=0xda, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9c3f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9c3f, .value=0x7d, .type=IO_READ},
        {.addr=0x9c40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x81d3, .a=0xa6, .x=0x4d, .y=0x11, .sp=0xd7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x81d3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x81d4, .a=0x4d, .x=0x4d, .y=0x11, .sp=0xd7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x81d3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x81d3, .value=0x7d, .type=IO_READ},
        {.addr=0x81d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x9a23, .a=0x3a, .x=0x30, .y=0x03, .sp=0xda, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9a23, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9a24, .a=0x30, .x=0x30, .y=0x03, .sp=0xda, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9a23, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9a23, .value=0x7d, .type=IO_READ},
        {.addr=0x9a24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0247) {
    const struct CPU_State initial_cpu = {.pc=0xc695, .a=0xc4, .x=0x33, .y=0x61, .sp=0xa8, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc695, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc696, .a=0x33, .x=0x33, .y=0x61, .sp=0xa8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc695, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc695, .value=0x7d, .type=IO_READ},
        {.addr=0xc696, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0248) {
    const struct CPU_State initial_cpu = {.pc=0x0aa0, .a=0xbb, .x=0xa6, .y=0x76, .sp=0xcb, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0aa1, .a=0xa6, .x=0xa6, .y=0x76, .sp=0xcb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0aa0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0aa0, .value=0x7d, .type=IO_READ},
        {.addr=0x0aa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0249) {
    const struct CPU_State initial_cpu = {.pc=0x7dd5, .a=0x9f, .x=0x98, .y=0x41, .sp=0xc4, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7dd6, .a=0x98, .x=0x98, .y=0x41, .sp=0xc4, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7dd5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7dd5, .value=0x7d, .type=IO_READ},
        {.addr=0x7dd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_024A) {
    const struct CPU_State initial_cpu = {.pc=0x8d38, .a=0x9e, .x=0xaa, .y=0xc5, .sp=0x69, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8d38, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8d39, .a=0xaa, .x=0xaa, .y=0xc5, .sp=0x69, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8d38, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8d38, .value=0x7d, .type=IO_READ},
        {.addr=0x8d39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_024B) {
    const struct CPU_State initial_cpu = {.pc=0x756d, .a=0x83, .x=0x04, .y=0x4e, .sp=0x1a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x756d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x756e, .a=0x04, .x=0x04, .y=0x4e, .sp=0x1a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x756d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x756d, .value=0x7d, .type=IO_READ},
        {.addr=0x756e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_024C) {
    const struct CPU_State initial_cpu = {.pc=0x6150, .a=0x23, .x=0x52, .y=0x16, .sp=0xd7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6150, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6151, .a=0x52, .x=0x52, .y=0x16, .sp=0xd7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6150, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6150, .value=0x7d, .type=IO_READ},
        {.addr=0x6151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x640e, .a=0xf2, .x=0xda, .y=0x5e, .sp=0x6b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x640e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x640f, .a=0xda, .x=0xda, .y=0x5e, .sp=0x6b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x640e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x640e, .value=0x7d, .type=IO_READ},
        {.addr=0x640f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_024E) {
    const struct CPU_State initial_cpu = {.pc=0xd31e, .a=0x29, .x=0x71, .y=0x99, .sp=0xdb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xd31e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd31f, .a=0x71, .x=0x71, .y=0x99, .sp=0xdb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd31e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd31e, .value=0x7d, .type=IO_READ},
        {.addr=0xd31f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_024F) {
    const struct CPU_State initial_cpu = {.pc=0xdf9a, .a=0xfa, .x=0x92, .y=0x79, .sp=0xb1, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf9a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf9b, .a=0x92, .x=0x92, .y=0x79, .sp=0xb1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xdf9a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf9a, .value=0x7d, .type=IO_READ},
        {.addr=0xdf9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xd22b, .a=0x0a, .x=0xe4, .y=0x9b, .sp=0x3a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xd22b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd22c, .a=0xe4, .x=0xe4, .y=0x9b, .sp=0x3a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd22b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd22b, .value=0x7d, .type=IO_READ},
        {.addr=0xd22c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x6e75, .a=0xdc, .x=0x25, .y=0xe6, .sp=0x43, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x6e75, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6e76, .a=0x25, .x=0x25, .y=0xe6, .sp=0x43, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6e75, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6e75, .value=0x7d, .type=IO_READ},
        {.addr=0x6e76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x7d0f, .a=0x42, .x=0xee, .y=0xac, .sp=0xa2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7d10, .a=0xee, .x=0xee, .y=0xac, .sp=0xa2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7d0f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7d0f, .value=0x7d, .type=IO_READ},
        {.addr=0x7d10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0253) {
    const struct CPU_State initial_cpu = {.pc=0x20b0, .a=0x55, .x=0xdb, .y=0x8f, .sp=0xe6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x20b0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x20b1, .a=0xdb, .x=0xdb, .y=0x8f, .sp=0xe6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x20b0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x20b0, .value=0x7d, .type=IO_READ},
        {.addr=0x20b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0254) {
    const struct CPU_State initial_cpu = {.pc=0xfd99, .a=0x15, .x=0xe0, .y=0x90, .sp=0xf7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xfd99, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfd9a, .a=0xe0, .x=0xe0, .y=0x90, .sp=0xf7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfd99, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfd99, .value=0x7d, .type=IO_READ},
        {.addr=0xfd9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0255) {
    const struct CPU_State initial_cpu = {.pc=0x7e8b, .a=0xc1, .x=0x21, .y=0xa4, .sp=0x06, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x7e8b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7e8c, .a=0x21, .x=0x21, .y=0xa4, .sp=0x06, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x7e8b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7e8b, .value=0x7d, .type=IO_READ},
        {.addr=0x7e8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xe7c4, .a=0xac, .x=0xf2, .y=0x6a, .sp=0x9c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe7c4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe7c5, .a=0xf2, .x=0xf2, .y=0x6a, .sp=0x9c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe7c4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe7c4, .value=0x7d, .type=IO_READ},
        {.addr=0xe7c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x487b, .a=0x59, .x=0x75, .y=0xee, .sp=0x60, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x487b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x487c, .a=0x75, .x=0x75, .y=0xee, .sp=0x60, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x487b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x487b, .value=0x7d, .type=IO_READ},
        {.addr=0x487c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x0fb4, .a=0x18, .x=0xbf, .y=0x6a, .sp=0x08, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0fb4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0fb5, .a=0xbf, .x=0xbf, .y=0x6a, .sp=0x08, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0fb4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0fb4, .value=0x7d, .type=IO_READ},
        {.addr=0x0fb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0259) {
    const struct CPU_State initial_cpu = {.pc=0x8697, .a=0xf9, .x=0x0e, .y=0x1c, .sp=0x5f, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8697, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8698, .a=0x0e, .x=0x0e, .y=0x1c, .sp=0x5f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8697, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8697, .value=0x7d, .type=IO_READ},
        {.addr=0x8698, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xedae, .a=0x3d, .x=0x74, .y=0xba, .sp=0x51, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xedae, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xedaf, .a=0x74, .x=0x74, .y=0xba, .sp=0x51, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xedae, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xedae, .value=0x7d, .type=IO_READ},
        {.addr=0xedaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_025B) {
    const struct CPU_State initial_cpu = {.pc=0x4e48, .a=0xa5, .x=0xa0, .y=0xa9, .sp=0xea, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x4e48, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4e49, .a=0xa0, .x=0xa0, .y=0xa9, .sp=0xea, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4e48, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4e48, .value=0x7d, .type=IO_READ},
        {.addr=0x4e49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7e30, .a=0xbb, .x=0xc6, .y=0xe4, .sp=0x8f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7e30, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7e31, .a=0xc6, .x=0xc6, .y=0xe4, .sp=0x8f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7e30, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7e30, .value=0x7d, .type=IO_READ},
        {.addr=0x7e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_025D) {
    const struct CPU_State initial_cpu = {.pc=0xe0e4, .a=0x0b, .x=0x47, .y=0x39, .sp=0x1f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe0e4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe0e5, .a=0x47, .x=0x47, .y=0x39, .sp=0x1f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe0e4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe0e4, .value=0x7d, .type=IO_READ},
        {.addr=0xe0e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x4c02, .a=0x72, .x=0xb6, .y=0x0d, .sp=0x32, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4c02, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4c03, .a=0xb6, .x=0xb6, .y=0x0d, .sp=0x32, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4c02, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4c02, .value=0x7d, .type=IO_READ},
        {.addr=0x4c03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x67a9, .a=0xfa, .x=0xdd, .y=0xa0, .sp=0xe1, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x67a9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x67aa, .a=0xdd, .x=0xdd, .y=0xa0, .sp=0xe1, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x67a9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x67a9, .value=0x7d, .type=IO_READ},
        {.addr=0x67aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0260) {
    const struct CPU_State initial_cpu = {.pc=0x1882, .a=0xbc, .x=0x45, .y=0x58, .sp=0x02, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1882, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1883, .a=0x45, .x=0x45, .y=0x58, .sp=0x02, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x1882, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1882, .value=0x7d, .type=IO_READ},
        {.addr=0x1883, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0261) {
    const struct CPU_State initial_cpu = {.pc=0x0bd5, .a=0xee, .x=0xbb, .y=0xd5, .sp=0x7c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0bd6, .a=0xbb, .x=0xbb, .y=0xd5, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0bd5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0bd5, .value=0x7d, .type=IO_READ},
        {.addr=0x0bd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0262) {
    const struct CPU_State initial_cpu = {.pc=0x36ab, .a=0xd2, .x=0x5a, .y=0x00, .sp=0x47, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x36ab, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x36ac, .a=0x5a, .x=0x5a, .y=0x00, .sp=0x47, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x36ab, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x36ab, .value=0x7d, .type=IO_READ},
        {.addr=0x36ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x4960, .a=0xe9, .x=0x23, .y=0xc5, .sp=0xed, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4960, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4961, .a=0x23, .x=0x23, .y=0xc5, .sp=0xed, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4960, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4960, .value=0x7d, .type=IO_READ},
        {.addr=0x4961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x3313, .a=0x87, .x=0x89, .y=0x13, .sp=0xd0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3313, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3314, .a=0x89, .x=0x89, .y=0x13, .sp=0xd0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3313, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3313, .value=0x7d, .type=IO_READ},
        {.addr=0x3314, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0265) {
    const struct CPU_State initial_cpu = {.pc=0xe696, .a=0x25, .x=0x4b, .y=0xbc, .sp=0x38, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe696, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe697, .a=0x4b, .x=0x4b, .y=0xbc, .sp=0x38, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe696, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe696, .value=0x7d, .type=IO_READ},
        {.addr=0xe697, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0266) {
    const struct CPU_State initial_cpu = {.pc=0x2c4e, .a=0xeb, .x=0xcc, .y=0x65, .sp=0x5c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2c4e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2c4f, .a=0xcc, .x=0xcc, .y=0x65, .sp=0x5c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2c4e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2c4e, .value=0x7d, .type=IO_READ},
        {.addr=0x2c4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0267) {
    const struct CPU_State initial_cpu = {.pc=0xf4a6, .a=0xc1, .x=0x9f, .y=0x25, .sp=0x60, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf4a7, .a=0x9f, .x=0x9f, .y=0x25, .sp=0x60, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf4a6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf4a6, .value=0x7d, .type=IO_READ},
        {.addr=0xf4a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0268) {
    const struct CPU_State initial_cpu = {.pc=0xb0a7, .a=0x9b, .x=0xc0, .y=0x8a, .sp=0x7b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb0a8, .a=0xc0, .x=0xc0, .y=0x8a, .sp=0x7b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb0a7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb0a7, .value=0x7d, .type=IO_READ},
        {.addr=0xb0a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0269) {
    const struct CPU_State initial_cpu = {.pc=0xcb4c, .a=0xf1, .x=0x6b, .y=0x5b, .sp=0x93, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcb4d, .a=0x6b, .x=0x6b, .y=0x5b, .sp=0x93, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xcb4c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcb4c, .value=0x7d, .type=IO_READ},
        {.addr=0xcb4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_026A) {
    const struct CPU_State initial_cpu = {.pc=0x1db8, .a=0xc8, .x=0xb7, .y=0x2e, .sp=0x6f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1db8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1db9, .a=0xb7, .x=0xb7, .y=0x2e, .sp=0x6f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1db8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1db8, .value=0x7d, .type=IO_READ},
        {.addr=0x1db9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_026B) {
    const struct CPU_State initial_cpu = {.pc=0x2732, .a=0x3f, .x=0x38, .y=0x01, .sp=0xaa, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2732, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2733, .a=0x38, .x=0x38, .y=0x01, .sp=0xaa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2732, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2732, .value=0x7d, .type=IO_READ},
        {.addr=0x2733, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_026C) {
    const struct CPU_State initial_cpu = {.pc=0xfeaf, .a=0x01, .x=0x65, .y=0x2c, .sp=0x98, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xfeaf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfeb0, .a=0x65, .x=0x65, .y=0x2c, .sp=0x98, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfeaf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfeaf, .value=0x7d, .type=IO_READ},
        {.addr=0xfeb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x02a4, .a=0x48, .x=0x9d, .y=0xc5, .sp=0x85, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x02a4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x02a5, .a=0x9d, .x=0x9d, .y=0xc5, .sp=0x85, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x02a4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x02a4, .value=0x7d, .type=IO_READ},
        {.addr=0x02a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x7e1b, .a=0x9f, .x=0x66, .y=0x2c, .sp=0xde, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7e1b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7e1c, .a=0x66, .x=0x66, .y=0x2c, .sp=0xde, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x7e1b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7e1b, .value=0x7d, .type=IO_READ},
        {.addr=0x7e1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_026F) {
    const struct CPU_State initial_cpu = {.pc=0x330a, .a=0x14, .x=0x2c, .y=0xbe, .sp=0x12, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x330a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x330b, .a=0x2c, .x=0x2c, .y=0xbe, .sp=0x12, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x330a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x330a, .value=0x7d, .type=IO_READ},
        {.addr=0x330b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x57a8, .a=0xd6, .x=0x73, .y=0xaf, .sp=0xbe, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x57a8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x57a9, .a=0x73, .x=0x73, .y=0xaf, .sp=0xbe, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x57a8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x57a8, .value=0x7d, .type=IO_READ},
        {.addr=0x57a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0271) {
    const struct CPU_State initial_cpu = {.pc=0xe418, .a=0x92, .x=0x58, .y=0x55, .sp=0x23, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe418, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe419, .a=0x58, .x=0x58, .y=0x55, .sp=0x23, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe418, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe418, .value=0x7d, .type=IO_READ},
        {.addr=0xe419, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0272) {
    const struct CPU_State initial_cpu = {.pc=0x5ead, .a=0x1b, .x=0x6d, .y=0x17, .sp=0xff, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x5ead, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5eae, .a=0x6d, .x=0x6d, .y=0x17, .sp=0xff, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5ead, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5ead, .value=0x7d, .type=IO_READ},
        {.addr=0x5eae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x51b9, .a=0x3a, .x=0xc5, .y=0xe9, .sp=0x11, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x51b9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x51ba, .a=0xc5, .x=0xc5, .y=0xe9, .sp=0x11, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x51b9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x51b9, .value=0x7d, .type=IO_READ},
        {.addr=0x51ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0274) {
    const struct CPU_State initial_cpu = {.pc=0x054a, .a=0xfc, .x=0x4b, .y=0xda, .sp=0x95, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x054a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x054b, .a=0x4b, .x=0x4b, .y=0xda, .sp=0x95, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x054a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x054a, .value=0x7d, .type=IO_READ},
        {.addr=0x054b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x22d8, .a=0x7a, .x=0x6b, .y=0xbe, .sp=0x80, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x22d8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x22d9, .a=0x6b, .x=0x6b, .y=0xbe, .sp=0x80, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x22d8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x22d8, .value=0x7d, .type=IO_READ},
        {.addr=0x22d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0276) {
    const struct CPU_State initial_cpu = {.pc=0xd92a, .a=0xbc, .x=0x61, .y=0xb8, .sp=0x11, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd92a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd92b, .a=0x61, .x=0x61, .y=0xb8, .sp=0x11, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd92a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd92a, .value=0x7d, .type=IO_READ},
        {.addr=0xd92b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x0c01, .a=0x63, .x=0x11, .y=0xa7, .sp=0x7f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0c01, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0c02, .a=0x11, .x=0x11, .y=0xa7, .sp=0x7f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0c01, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0c01, .value=0x7d, .type=IO_READ},
        {.addr=0x0c02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0278) {
    const struct CPU_State initial_cpu = {.pc=0xde85, .a=0x5c, .x=0x6c, .y=0x81, .sp=0x5d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xde85, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xde86, .a=0x6c, .x=0x6c, .y=0x81, .sp=0x5d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xde85, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xde85, .value=0x7d, .type=IO_READ},
        {.addr=0xde86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0279) {
    const struct CPU_State initial_cpu = {.pc=0x79de, .a=0xeb, .x=0x7d, .y=0x46, .sp=0xed, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x79de, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x79df, .a=0x7d, .x=0x7d, .y=0x46, .sp=0xed, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x79de, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x79de, .value=0x7d, .type=IO_READ},
        {.addr=0x79df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x4cc9, .a=0x1a, .x=0x3e, .y=0x0b, .sp=0x77, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4cca, .a=0x3e, .x=0x3e, .y=0x0b, .sp=0x77, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4cc9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4cc9, .value=0x7d, .type=IO_READ},
        {.addr=0x4cca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_027B) {
    const struct CPU_State initial_cpu = {.pc=0xf672, .a=0xd0, .x=0xfb, .y=0xfd, .sp=0xad, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf672, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf673, .a=0xfb, .x=0xfb, .y=0xfd, .sp=0xad, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf672, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf672, .value=0x7d, .type=IO_READ},
        {.addr=0xf673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_027C) {
    const struct CPU_State initial_cpu = {.pc=0xd036, .a=0x1b, .x=0x56, .y=0x13, .sp=0x0f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xd036, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd037, .a=0x56, .x=0x56, .y=0x13, .sp=0x0f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd036, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd036, .value=0x7d, .type=IO_READ},
        {.addr=0xd037, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x5106, .a=0xe9, .x=0x79, .y=0x79, .sp=0x83, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5106, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5107, .a=0x79, .x=0x79, .y=0x79, .sp=0x83, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5106, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5106, .value=0x7d, .type=IO_READ},
        {.addr=0x5107, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x7ff1, .a=0x91, .x=0x24, .y=0x56, .sp=0x3f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7ff2, .a=0x24, .x=0x24, .y=0x56, .sp=0x3f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7ff1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7ff1, .value=0x7d, .type=IO_READ},
        {.addr=0x7ff2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_027F) {
    const struct CPU_State initial_cpu = {.pc=0xbadb, .a=0xeb, .x=0xe2, .y=0xad, .sp=0x82, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbadb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbadc, .a=0xe2, .x=0xe2, .y=0xad, .sp=0x82, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xbadb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbadb, .value=0x7d, .type=IO_READ},
        {.addr=0xbadc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0280) {
    const struct CPU_State initial_cpu = {.pc=0x8778, .a=0xc8, .x=0xf8, .y=0xa8, .sp=0xac, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x8778, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8779, .a=0xf8, .x=0xf8, .y=0xa8, .sp=0xac, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8778, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8778, .value=0x7d, .type=IO_READ},
        {.addr=0x8779, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x13e8, .a=0xca, .x=0x16, .y=0x74, .sp=0x41, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x13e8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x13e9, .a=0x16, .x=0x16, .y=0x74, .sp=0x41, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x13e8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x13e8, .value=0x7d, .type=IO_READ},
        {.addr=0x13e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x6537, .a=0xa3, .x=0x1f, .y=0x63, .sp=0xe3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6537, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6538, .a=0x1f, .x=0x1f, .y=0x63, .sp=0xe3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x6537, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6537, .value=0x7d, .type=IO_READ},
        {.addr=0x6538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa8f5, .a=0x91, .x=0xcb, .y=0x40, .sp=0x41, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa8f6, .a=0xcb, .x=0xcb, .y=0x40, .sp=0x41, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xa8f5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa8f5, .value=0x7d, .type=IO_READ},
        {.addr=0xa8f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0284) {
    const struct CPU_State initial_cpu = {.pc=0xd866, .a=0x4b, .x=0x51, .y=0xcc, .sp=0x84, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd866, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd867, .a=0x51, .x=0x51, .y=0xcc, .sp=0x84, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd866, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd866, .value=0x7d, .type=IO_READ},
        {.addr=0xd867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0285) {
    const struct CPU_State initial_cpu = {.pc=0xceaa, .a=0x5e, .x=0xca, .y=0xb0, .sp=0x44, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xceaa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xceab, .a=0xca, .x=0xca, .y=0xb0, .sp=0x44, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xceaa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xceaa, .value=0x7d, .type=IO_READ},
        {.addr=0xceab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0286) {
    const struct CPU_State initial_cpu = {.pc=0x7786, .a=0xbd, .x=0xe7, .y=0x57, .sp=0x01, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7786, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7787, .a=0xe7, .x=0xe7, .y=0x57, .sp=0x01, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7786, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7786, .value=0x7d, .type=IO_READ},
        {.addr=0x7787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x9c15, .a=0xaf, .x=0x8e, .y=0xbf, .sp=0x39, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9c15, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9c16, .a=0x8e, .x=0x8e, .y=0xbf, .sp=0x39, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9c15, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9c15, .value=0x7d, .type=IO_READ},
        {.addr=0x9c16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xe075, .a=0x75, .x=0xc5, .y=0xa9, .sp=0x3c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe075, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe076, .a=0xc5, .x=0xc5, .y=0xa9, .sp=0x3c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe075, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe075, .value=0x7d, .type=IO_READ},
        {.addr=0xe076, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0289) {
    const struct CPU_State initial_cpu = {.pc=0x5cb4, .a=0x0d, .x=0x29, .y=0x3d, .sp=0xab, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5cb5, .a=0x29, .x=0x29, .y=0x3d, .sp=0xab, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5cb4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5cb4, .value=0x7d, .type=IO_READ},
        {.addr=0x5cb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_028A) {
    const struct CPU_State initial_cpu = {.pc=0xaf95, .a=0x3a, .x=0x6f, .y=0xcf, .sp=0x9b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf95, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xaf96, .a=0x6f, .x=0x6f, .y=0xcf, .sp=0x9b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xaf95, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaf95, .value=0x7d, .type=IO_READ},
        {.addr=0xaf96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_028B) {
    const struct CPU_State initial_cpu = {.pc=0xeb98, .a=0x61, .x=0xf4, .y=0x42, .sp=0xbc, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xeb98, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeb99, .a=0xf4, .x=0xf4, .y=0x42, .sp=0xbc, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xeb98, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeb98, .value=0x7d, .type=IO_READ},
        {.addr=0xeb99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_028C) {
    const struct CPU_State initial_cpu = {.pc=0xe040, .a=0x89, .x=0x35, .y=0xb7, .sp=0x03, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xe040, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe041, .a=0x35, .x=0x35, .y=0xb7, .sp=0x03, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe040, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe040, .value=0x7d, .type=IO_READ},
        {.addr=0xe041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_028D) {
    const struct CPU_State initial_cpu = {.pc=0x8b3f, .a=0x91, .x=0xbf, .y=0xb9, .sp=0x44, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x8b3f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8b40, .a=0xbf, .x=0xbf, .y=0xb9, .sp=0x44, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8b3f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8b3f, .value=0x7d, .type=IO_READ},
        {.addr=0x8b40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_028E) {
    const struct CPU_State initial_cpu = {.pc=0x8a19, .a=0x06, .x=0x54, .y=0xef, .sp=0x0d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8a19, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8a1a, .a=0x54, .x=0x54, .y=0xef, .sp=0x0d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x8a19, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8a19, .value=0x7d, .type=IO_READ},
        {.addr=0x8a1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4f07, .a=0x64, .x=0x56, .y=0xa1, .sp=0x5d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4f07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4f08, .a=0x56, .x=0x56, .y=0xa1, .sp=0x5d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4f07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4f07, .value=0x7d, .type=IO_READ},
        {.addr=0x4f08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0290) {
    const struct CPU_State initial_cpu = {.pc=0xb037, .a=0x6a, .x=0x35, .y=0x7c, .sp=0x27, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb037, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb038, .a=0x35, .x=0x35, .y=0x7c, .sp=0x27, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb037, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb037, .value=0x7d, .type=IO_READ},
        {.addr=0xb038, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0291) {
    const struct CPU_State initial_cpu = {.pc=0xc1c6, .a=0xea, .x=0x5f, .y=0x94, .sp=0xcf, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc1c7, .a=0x5f, .x=0x5f, .y=0x94, .sp=0xcf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc1c6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc1c6, .value=0x7d, .type=IO_READ},
        {.addr=0xc1c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x2801, .a=0x35, .x=0xc8, .y=0x6e, .sp=0xc9, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x2801, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2802, .a=0xc8, .x=0xc8, .y=0x6e, .sp=0xc9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2801, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2801, .value=0x7d, .type=IO_READ},
        {.addr=0x2802, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0293) {
    const struct CPU_State initial_cpu = {.pc=0x0809, .a=0xbb, .x=0xf0, .y=0xb2, .sp=0xf8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0809, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x080a, .a=0xf0, .x=0xf0, .y=0xb2, .sp=0xf8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0809, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0809, .value=0x7d, .type=IO_READ},
        {.addr=0x080a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0294) {
    const struct CPU_State initial_cpu = {.pc=0xebe1, .a=0x44, .x=0x08, .y=0xe9, .sp=0x92, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xebe1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xebe2, .a=0x08, .x=0x08, .y=0xe9, .sp=0x92, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xebe1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xebe1, .value=0x7d, .type=IO_READ},
        {.addr=0xebe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0295) {
    const struct CPU_State initial_cpu = {.pc=0xb17e, .a=0x0c, .x=0xfa, .y=0x8b, .sp=0x96, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb17e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb17f, .a=0xfa, .x=0xfa, .y=0x8b, .sp=0x96, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb17e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb17e, .value=0x7d, .type=IO_READ},
        {.addr=0xb17f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0296) {
    const struct CPU_State initial_cpu = {.pc=0xc121, .a=0x5c, .x=0x68, .y=0x41, .sp=0x01, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc121, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc122, .a=0x68, .x=0x68, .y=0x41, .sp=0x01, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc121, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc121, .value=0x7d, .type=IO_READ},
        {.addr=0xc122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0297) {
    const struct CPU_State initial_cpu = {.pc=0xddf4, .a=0x2e, .x=0xd6, .y=0x69, .sp=0x75, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xddf4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xddf5, .a=0xd6, .x=0xd6, .y=0x69, .sp=0x75, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xddf4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xddf4, .value=0x7d, .type=IO_READ},
        {.addr=0xddf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x4d67, .a=0xa1, .x=0xdb, .y=0x47, .sp=0x57, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x4d67, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4d68, .a=0xdb, .x=0xdb, .y=0x47, .sp=0x57, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4d67, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4d67, .value=0x7d, .type=IO_READ},
        {.addr=0x4d68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x91ff, .a=0x13, .x=0xcb, .y=0x26, .sp=0x16, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x91ff, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9200, .a=0xcb, .x=0xcb, .y=0x26, .sp=0x16, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x91ff, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x91ff, .value=0x7d, .type=IO_READ},
        {.addr=0x9200, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_029A) {
    const struct CPU_State initial_cpu = {.pc=0xa6d8, .a=0x60, .x=0xd3, .y=0x29, .sp=0xe2, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xa6d8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa6d9, .a=0xd3, .x=0xd3, .y=0x29, .sp=0xe2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa6d8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa6d8, .value=0x7d, .type=IO_READ},
        {.addr=0xa6d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x37d4, .a=0x1c, .x=0xfb, .y=0x7a, .sp=0xc1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x37d4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x37d5, .a=0xfb, .x=0xfb, .y=0x7a, .sp=0xc1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x37d4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x37d4, .value=0x7d, .type=IO_READ},
        {.addr=0x37d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc9f4, .a=0xa6, .x=0x9b, .y=0x54, .sp=0xba, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc9f5, .a=0x9b, .x=0x9b, .y=0x54, .sp=0xba, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc9f4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc9f4, .value=0x7d, .type=IO_READ},
        {.addr=0xc9f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_029D) {
    const struct CPU_State initial_cpu = {.pc=0xd6a1, .a=0x90, .x=0x95, .y=0xde, .sp=0x23, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd6a1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd6a2, .a=0x95, .x=0x95, .y=0xde, .sp=0x23, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd6a1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd6a1, .value=0x7d, .type=IO_READ},
        {.addr=0xd6a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_029E) {
    const struct CPU_State initial_cpu = {.pc=0xb6ed, .a=0x7d, .x=0xb5, .y=0xfc, .sp=0x2f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ed, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb6ee, .a=0xb5, .x=0xb5, .y=0xfc, .sp=0x2f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb6ed, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb6ed, .value=0x7d, .type=IO_READ},
        {.addr=0xb6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x11da, .a=0xce, .x=0xe7, .y=0x7b, .sp=0xc0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x11da, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x11db, .a=0xe7, .x=0xe7, .y=0x7b, .sp=0xc0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x11da, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x11da, .value=0x7d, .type=IO_READ},
        {.addr=0x11db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x0dfb, .a=0x2d, .x=0xfa, .y=0xa0, .sp=0x4a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0dfc, .a=0xfa, .x=0xfa, .y=0xa0, .sp=0x4a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0dfb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0dfb, .value=0x7d, .type=IO_READ},
        {.addr=0x0dfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x4e07, .a=0x39, .x=0xf6, .y=0xdd, .sp=0xa8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4e07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4e08, .a=0xf6, .x=0xf6, .y=0xdd, .sp=0xa8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4e07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4e07, .value=0x7d, .type=IO_READ},
        {.addr=0x4e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x998a, .a=0x38, .x=0x3f, .y=0x0c, .sp=0xe3, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x998a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x998b, .a=0x3f, .x=0x3f, .y=0x0c, .sp=0xe3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x998a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x998a, .value=0x7d, .type=IO_READ},
        {.addr=0x998b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x65e4, .a=0x40, .x=0x65, .y=0x68, .sp=0xc1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x65e4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x65e5, .a=0x65, .x=0x65, .y=0x68, .sp=0xc1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x65e4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x65e4, .value=0x7d, .type=IO_READ},
        {.addr=0x65e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc583, .a=0x96, .x=0x22, .y=0x74, .sp=0x70, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xc583, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc584, .a=0x22, .x=0x22, .y=0x74, .sp=0x70, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc583, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc583, .value=0x7d, .type=IO_READ},
        {.addr=0xc584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x2eb9, .a=0xb5, .x=0x02, .y=0xd3, .sp=0x4c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x2eb9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2eba, .a=0x02, .x=0x02, .y=0xd3, .sp=0x4c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2eb9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2eb9, .value=0x7d, .type=IO_READ},
        {.addr=0x2eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x8ce5, .a=0xa1, .x=0xf7, .y=0x44, .sp=0x36, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8ce6, .a=0xf7, .x=0xf7, .y=0x44, .sp=0x36, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8ce5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce5, .value=0x7d, .type=IO_READ},
        {.addr=0x8ce6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x108d, .a=0xa7, .x=0x98, .y=0x90, .sp=0x22, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x108d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x108e, .a=0x98, .x=0x98, .y=0x90, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x108d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x108d, .value=0x7d, .type=IO_READ},
        {.addr=0x108e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x8ee0, .a=0xf0, .x=0x67, .y=0xa6, .sp=0x15, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8ee0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8ee1, .a=0x67, .x=0x67, .y=0xa6, .sp=0x15, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8ee0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8ee0, .value=0x7d, .type=IO_READ},
        {.addr=0x8ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x9eaf, .a=0xa0, .x=0xe2, .y=0x6b, .sp=0xc6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9eaf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9eb0, .a=0xe2, .x=0xe2, .y=0x6b, .sp=0xc6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9eaf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9eaf, .value=0x7d, .type=IO_READ},
        {.addr=0x9eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x3f71, .a=0xe4, .x=0x06, .y=0xe5, .sp=0xda, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3f71, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3f72, .a=0x06, .x=0x06, .y=0xe5, .sp=0xda, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3f71, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3f71, .value=0x7d, .type=IO_READ},
        {.addr=0x3f72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x49ec, .a=0xde, .x=0x2e, .y=0xe3, .sp=0x08, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x49ec, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x49ed, .a=0x2e, .x=0x2e, .y=0xe3, .sp=0x08, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x49ec, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x49ec, .value=0x7d, .type=IO_READ},
        {.addr=0x49ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x29f0, .a=0xca, .x=0x1e, .y=0xda, .sp=0x7e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x29f0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x29f1, .a=0x1e, .x=0x1e, .y=0xda, .sp=0x7e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x29f0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x29f0, .value=0x7d, .type=IO_READ},
        {.addr=0x29f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xada0, .a=0xbe, .x=0x30, .y=0x29, .sp=0x56, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xada0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xada1, .a=0x30, .x=0x30, .y=0x29, .sp=0x56, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xada0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xada0, .value=0x7d, .type=IO_READ},
        {.addr=0xada1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x579a, .a=0x31, .x=0x36, .y=0xcf, .sp=0x3a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x579a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x579b, .a=0x36, .x=0x36, .y=0xcf, .sp=0x3a, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x579a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x579a, .value=0x7d, .type=IO_READ},
        {.addr=0x579b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x2412, .a=0xca, .x=0xde, .y=0xd4, .sp=0x23, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2412, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2413, .a=0xde, .x=0xde, .y=0xd4, .sp=0x23, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2412, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2412, .value=0x7d, .type=IO_READ},
        {.addr=0x2413, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x9950, .a=0xd1, .x=0x1d, .y=0x70, .sp=0xb8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9950, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9951, .a=0x1d, .x=0x1d, .y=0x70, .sp=0xb8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9950, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9950, .value=0x7d, .type=IO_READ},
        {.addr=0x9951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x8e07, .a=0xc6, .x=0x72, .y=0xf8, .sp=0x49, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8e07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8e08, .a=0x72, .x=0x72, .y=0xf8, .sp=0x49, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8e07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8e07, .value=0x7d, .type=IO_READ},
        {.addr=0x8e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xa3d3, .a=0x6c, .x=0x19, .y=0x52, .sp=0x67, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa3d4, .a=0x19, .x=0x19, .y=0x52, .sp=0x67, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xa3d3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa3d3, .value=0x7d, .type=IO_READ},
        {.addr=0xa3d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xbdef, .a=0x47, .x=0xca, .y=0x5e, .sp=0xff, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xbdef, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbdf0, .a=0xca, .x=0xca, .y=0x5e, .sp=0xff, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbdef, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbdef, .value=0x7d, .type=IO_READ},
        {.addr=0xbdf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xe79c, .a=0x45, .x=0xf1, .y=0xe0, .sp=0x76, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe79c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe79d, .a=0xf1, .x=0xf1, .y=0xe0, .sp=0x76, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe79c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe79c, .value=0x7d, .type=IO_READ},
        {.addr=0xe79d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x666d, .a=0x08, .x=0x1c, .y=0xcf, .sp=0x4f, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x666d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x666e, .a=0x1c, .x=0x1c, .y=0xcf, .sp=0x4f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x666d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x666d, .value=0x7d, .type=IO_READ},
        {.addr=0x666e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x0df9, .a=0x5a, .x=0xe2, .y=0x5a, .sp=0xce, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0df9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0dfa, .a=0xe2, .x=0xe2, .y=0x5a, .sp=0xce, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0df9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0df9, .value=0x7d, .type=IO_READ},
        {.addr=0x0dfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xd7b0, .a=0x5d, .x=0x43, .y=0xdf, .sp=0x55, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd7b1, .a=0x43, .x=0x43, .y=0xdf, .sp=0x55, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd7b0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd7b0, .value=0x7d, .type=IO_READ},
        {.addr=0xd7b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xcd43, .a=0x7d, .x=0xc7, .y=0x09, .sp=0xd5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xcd43, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcd44, .a=0xc7, .x=0xc7, .y=0x09, .sp=0xd5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xcd43, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcd43, .value=0x7d, .type=IO_READ},
        {.addr=0xcd44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xfea6, .a=0x2f, .x=0xdc, .y=0x94, .sp=0x86, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xfea6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfea7, .a=0xdc, .x=0xdc, .y=0x94, .sp=0x86, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xfea6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfea6, .value=0x7d, .type=IO_READ},
        {.addr=0xfea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xd535, .a=0x09, .x=0xe2, .y=0x57, .sp=0x1a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd535, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd536, .a=0xe2, .x=0xe2, .y=0x57, .sp=0x1a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd535, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd535, .value=0x7d, .type=IO_READ},
        {.addr=0xd536, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xcc66, .a=0x66, .x=0xd4, .y=0xff, .sp=0x3e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xcc66, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcc67, .a=0xd4, .x=0xd4, .y=0xff, .sp=0x3e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xcc66, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcc66, .value=0x7d, .type=IO_READ},
        {.addr=0xcc67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xc8d6, .a=0xee, .x=0x5b, .y=0xe7, .sp=0xa4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc8d7, .a=0x5b, .x=0x5b, .y=0xe7, .sp=0xa4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc8d6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc8d6, .value=0x7d, .type=IO_READ},
        {.addr=0xc8d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xcac2, .a=0x84, .x=0x80, .y=0x68, .sp=0xc7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xcac2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcac3, .a=0x80, .x=0x80, .y=0x68, .sp=0xc7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xcac2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcac2, .value=0x7d, .type=IO_READ},
        {.addr=0xcac3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x7404, .a=0x48, .x=0xef, .y=0x3d, .sp=0x17, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7404, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7405, .a=0xef, .x=0xef, .y=0x3d, .sp=0x17, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7404, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7404, .value=0x7d, .type=IO_READ},
        {.addr=0x7405, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x135e, .a=0x73, .x=0x49, .y=0x6b, .sp=0x60, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x135e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x135f, .a=0x49, .x=0x49, .y=0x6b, .sp=0x60, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x135e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x135e, .value=0x7d, .type=IO_READ},
        {.addr=0x135f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xd2e4, .a=0x6e, .x=0xd2, .y=0x35, .sp=0x57, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xd2e4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd2e5, .a=0xd2, .x=0xd2, .y=0x35, .sp=0x57, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd2e4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd2e4, .value=0x7d, .type=IO_READ},
        {.addr=0xd2e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x0be6, .a=0x26, .x=0x15, .y=0xdd, .sp=0x62, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0be6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0be7, .a=0x15, .x=0x15, .y=0xdd, .sp=0x62, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0be6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0be6, .value=0x7d, .type=IO_READ},
        {.addr=0x0be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x03e0, .a=0x88, .x=0xbc, .y=0x77, .sp=0x3d, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x03e0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x03e1, .a=0xbc, .x=0xbc, .y=0x77, .sp=0x3d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x03e0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x03e0, .value=0x7d, .type=IO_READ},
        {.addr=0x03e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x3047, .a=0x9b, .x=0xef, .y=0x0c, .sp=0x60, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3047, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3048, .a=0xef, .x=0xef, .y=0x0c, .sp=0x60, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3047, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3047, .value=0x7d, .type=IO_READ},
        {.addr=0x3048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x2a56, .a=0xa8, .x=0xca, .y=0x47, .sp=0xbb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x2a56, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2a57, .a=0xca, .x=0xca, .y=0x47, .sp=0xbb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2a56, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2a56, .value=0x7d, .type=IO_READ},
        {.addr=0x2a57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2271, .a=0x61, .x=0x29, .y=0x12, .sp=0x92, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2271, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2272, .a=0x29, .x=0x29, .y=0x12, .sp=0x92, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2271, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2271, .value=0x7d, .type=IO_READ},
        {.addr=0x2272, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x9fa9, .a=0x17, .x=0x7b, .y=0xaa, .sp=0x60, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9faa, .a=0x7b, .x=0x7b, .y=0xaa, .sp=0x60, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9fa9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa9, .value=0x7d, .type=IO_READ},
        {.addr=0x9faa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9008, .a=0x1a, .x=0xcd, .y=0xb6, .sp=0x28, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9008, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9009, .a=0xcd, .x=0xcd, .y=0xb6, .sp=0x28, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9008, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9008, .value=0x7d, .type=IO_READ},
        {.addr=0x9009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x1511, .a=0xff, .x=0x8c, .y=0x62, .sp=0xfe, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x1511, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1512, .a=0x8c, .x=0x8c, .y=0x62, .sp=0xfe, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1511, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1511, .value=0x7d, .type=IO_READ},
        {.addr=0x1512, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x7665, .a=0x57, .x=0x3e, .y=0xcd, .sp=0x51, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7665, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7666, .a=0x3e, .x=0x3e, .y=0xcd, .sp=0x51, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7665, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7665, .value=0x7d, .type=IO_READ},
        {.addr=0x7666, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x04e3, .a=0xb1, .x=0x3a, .y=0x3d, .sp=0xe7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x04e3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x04e4, .a=0x3a, .x=0x3a, .y=0x3d, .sp=0xe7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x04e3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x04e3, .value=0x7d, .type=IO_READ},
        {.addr=0x04e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x27e8, .a=0x1e, .x=0xc8, .y=0xd9, .sp=0x5e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x27e8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x27e9, .a=0xc8, .x=0xc8, .y=0xd9, .sp=0x5e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x27e8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x27e8, .value=0x7d, .type=IO_READ},
        {.addr=0x27e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x1466, .a=0x6d, .x=0xfa, .y=0xa6, .sp=0x5e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x1466, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1467, .a=0xfa, .x=0xfa, .y=0xa6, .sp=0x5e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1466, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1466, .value=0x7d, .type=IO_READ},
        {.addr=0x1467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xe26b, .a=0xf9, .x=0x2f, .y=0x44, .sp=0x1f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe26b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe26c, .a=0x2f, .x=0x2f, .y=0x44, .sp=0x1f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe26b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe26b, .value=0x7d, .type=IO_READ},
        {.addr=0xe26c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xba9a, .a=0xa0, .x=0x70, .y=0xec, .sp=0x5e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xba9a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xba9b, .a=0x70, .x=0x70, .y=0xec, .sp=0x5e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xba9a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xba9a, .value=0x7d, .type=IO_READ},
        {.addr=0xba9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x97c0, .a=0xb3, .x=0x9b, .y=0x30, .sp=0x75, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x97c0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0x9b, .x=0x9b, .y=0x30, .sp=0x75, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x97c0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x97c0, .value=0x7d, .type=IO_READ},
        {.addr=0x97c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe93d, .a=0x2b, .x=0x4d, .y=0xf1, .sp=0x46, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe93d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe93e, .a=0x4d, .x=0x4d, .y=0xf1, .sp=0x46, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe93d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe93d, .value=0x7d, .type=IO_READ},
        {.addr=0xe93e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x6f49, .a=0xe3, .x=0xfb, .y=0xa4, .sp=0x4a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6f49, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6f4a, .a=0xfb, .x=0xfb, .y=0xa4, .sp=0x4a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6f49, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6f49, .value=0x7d, .type=IO_READ},
        {.addr=0x6f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x2ea3, .a=0xc6, .x=0x3b, .y=0x14, .sp=0x20, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2ea4, .a=0x3b, .x=0x3b, .y=0x14, .sp=0x20, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2ea3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2ea3, .value=0x7d, .type=IO_READ},
        {.addr=0x2ea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xff59, .a=0x97, .x=0xe9, .y=0x87, .sp=0x8d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xff59, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xff5a, .a=0xe9, .x=0xe9, .y=0x87, .sp=0x8d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xff59, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xff59, .value=0x7d, .type=IO_READ},
        {.addr=0xff5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x22e3, .a=0x96, .x=0x08, .y=0x6d, .sp=0xca, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x22e3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x22e4, .a=0x08, .x=0x08, .y=0x6d, .sp=0xca, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x22e3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x22e3, .value=0x7d, .type=IO_READ},
        {.addr=0x22e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x563a, .a=0x10, .x=0x4d, .y=0x14, .sp=0xa9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x563a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x563b, .a=0x4d, .x=0x4d, .y=0x14, .sp=0xa9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x563a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x563a, .value=0x7d, .type=IO_READ},
        {.addr=0x563b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x9558, .a=0x40, .x=0x87, .y=0xde, .sp=0xb9, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x9558, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9559, .a=0x87, .x=0x87, .y=0xde, .sp=0xb9, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9558, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9558, .value=0x7d, .type=IO_READ},
        {.addr=0x9559, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xfbeb, .a=0xf1, .x=0x5e, .y=0x20, .sp=0x59, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xfbeb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfbec, .a=0x5e, .x=0x5e, .y=0x20, .sp=0x59, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfbeb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfbeb, .value=0x7d, .type=IO_READ},
        {.addr=0xfbec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xdf40, .a=0x3e, .x=0x38, .y=0x36, .sp=0x62, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xdf40, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf41, .a=0x38, .x=0x38, .y=0x36, .sp=0x62, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xdf40, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf40, .value=0x7d, .type=IO_READ},
        {.addr=0xdf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xae8a, .a=0xe4, .x=0xfc, .y=0x7a, .sp=0xda, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xae8a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xae8b, .a=0xfc, .x=0xfc, .y=0x7a, .sp=0xda, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xae8a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xae8a, .value=0x7d, .type=IO_READ},
        {.addr=0xae8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xc773, .a=0x95, .x=0x8a, .y=0x73, .sp=0x9f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc773, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc774, .a=0x8a, .x=0x8a, .y=0x73, .sp=0x9f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc773, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc773, .value=0x7d, .type=IO_READ},
        {.addr=0xc774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6f75, .a=0x60, .x=0x9c, .y=0xbe, .sp=0xd2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f75, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6f76, .a=0x9c, .x=0x9c, .y=0xbe, .sp=0xd2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6f75, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6f75, .value=0x7d, .type=IO_READ},
        {.addr=0x6f76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x99cb, .a=0x83, .x=0x38, .y=0x9c, .sp=0xe9, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x99cb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x99cc, .a=0x38, .x=0x38, .y=0x9c, .sp=0xe9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x99cb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x99cb, .value=0x7d, .type=IO_READ},
        {.addr=0x99cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x7e54, .a=0xd6, .x=0x80, .y=0x3c, .sp=0x4c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7e54, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7e55, .a=0x80, .x=0x80, .y=0x3c, .sp=0x4c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7e54, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7e54, .value=0x7d, .type=IO_READ},
        {.addr=0x7e55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x6299, .a=0x03, .x=0xaf, .y=0x68, .sp=0xdb, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x6299, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x629a, .a=0xaf, .x=0xaf, .y=0x68, .sp=0xdb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6299, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6299, .value=0x7d, .type=IO_READ},
        {.addr=0x629a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5cc2, .a=0x62, .x=0x04, .y=0x57, .sp=0x33, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5cc3, .a=0x04, .x=0x04, .y=0x57, .sp=0x33, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5cc2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5cc2, .value=0x7d, .type=IO_READ},
        {.addr=0x5cc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x1577, .a=0xd1, .x=0xd6, .y=0xb1, .sp=0x1a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1577, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1578, .a=0xd6, .x=0xd6, .y=0xb1, .sp=0x1a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1577, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1577, .value=0x7d, .type=IO_READ},
        {.addr=0x1578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x8d89, .a=0x2c, .x=0xe6, .y=0x7d, .sp=0x98, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8d89, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8d8a, .a=0xe6, .x=0xe6, .y=0x7d, .sp=0x98, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8d89, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8d89, .value=0x7d, .type=IO_READ},
        {.addr=0x8d8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x3af1, .a=0xdc, .x=0x8b, .y=0xc1, .sp=0x3d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3af1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3af2, .a=0x8b, .x=0x8b, .y=0xc1, .sp=0x3d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3af1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3af1, .value=0x7d, .type=IO_READ},
        {.addr=0x3af2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xd2a2, .a=0xa9, .x=0xfe, .y=0xed, .sp=0x93, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd2a3, .a=0xfe, .x=0xfe, .y=0xed, .sp=0x93, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd2a2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd2a2, .value=0x7d, .type=IO_READ},
        {.addr=0xd2a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2a41, .a=0xfa, .x=0xa0, .y=0xb5, .sp=0x13, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x2a41, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2a42, .a=0xa0, .x=0xa0, .y=0xb5, .sp=0x13, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2a41, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2a41, .value=0x7d, .type=IO_READ},
        {.addr=0x2a42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x88a9, .a=0xf3, .x=0xf1, .y=0x32, .sp=0x10, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x88a9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x88aa, .a=0xf1, .x=0xf1, .y=0x32, .sp=0x10, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x88a9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x88a9, .value=0x7d, .type=IO_READ},
        {.addr=0x88aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x616a, .a=0x23, .x=0x2c, .y=0x7c, .sp=0x2b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x616a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x616b, .a=0x2c, .x=0x2c, .y=0x7c, .sp=0x2b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x616a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x616a, .value=0x7d, .type=IO_READ},
        {.addr=0x616b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xb1a1, .a=0xf0, .x=0x38, .y=0xb4, .sp=0xeb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb1a1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb1a2, .a=0x38, .x=0x38, .y=0xb4, .sp=0xeb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb1a1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb1a1, .value=0x7d, .type=IO_READ},
        {.addr=0xb1a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xb60c, .a=0x2a, .x=0x03, .y=0x86, .sp=0x28, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb60c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb60d, .a=0x03, .x=0x03, .y=0x86, .sp=0x28, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb60c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb60c, .value=0x7d, .type=IO_READ},
        {.addr=0xb60d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xdf26, .a=0x22, .x=0x7a, .y=0x97, .sp=0x9c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdf26, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf27, .a=0x7a, .x=0x7a, .y=0x97, .sp=0x9c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdf26, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf26, .value=0x7d, .type=IO_READ},
        {.addr=0xdf27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x66e3, .a=0x2c, .x=0xa0, .y=0x63, .sp=0xd0, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x66e3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x66e4, .a=0xa0, .x=0xa0, .y=0x63, .sp=0xd0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x66e3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x66e3, .value=0x7d, .type=IO_READ},
        {.addr=0x66e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x547f, .a=0x4a, .x=0x4d, .y=0x54, .sp=0xdd, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x547f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5480, .a=0x4d, .x=0x4d, .y=0x54, .sp=0xdd, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x547f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x547f, .value=0x7d, .type=IO_READ},
        {.addr=0x5480, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x37ad, .a=0x40, .x=0xac, .y=0x60, .sp=0xd0, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x37ad, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x37ae, .a=0xac, .x=0xac, .y=0x60, .sp=0xd0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x37ad, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x37ad, .value=0x7d, .type=IO_READ},
        {.addr=0x37ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x44a0, .a=0x65, .x=0x1c, .y=0x45, .sp=0x4a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x44a0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x44a1, .a=0x1c, .x=0x1c, .y=0x45, .sp=0x4a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x44a0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x44a0, .value=0x7d, .type=IO_READ},
        {.addr=0x44a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xcfa0, .a=0x17, .x=0xcc, .y=0x85, .sp=0xd0, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcfa1, .a=0xcc, .x=0xcc, .y=0x85, .sp=0xd0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcfa0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcfa0, .value=0x7d, .type=IO_READ},
        {.addr=0xcfa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x4694, .a=0x56, .x=0x72, .y=0x60, .sp=0x65, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4694, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4695, .a=0x72, .x=0x72, .y=0x60, .sp=0x65, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4694, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4694, .value=0x7d, .type=IO_READ},
        {.addr=0x4695, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x3ac0, .a=0xbd, .x=0x7e, .y=0x9a, .sp=0x24, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x3ac0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3ac1, .a=0x7e, .x=0x7e, .y=0x9a, .sp=0x24, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3ac0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3ac0, .value=0x7d, .type=IO_READ},
        {.addr=0x3ac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xfceb, .a=0x1f, .x=0xa9, .y=0x8a, .sp=0xbd, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xfceb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfcec, .a=0xa9, .x=0xa9, .y=0x8a, .sp=0xbd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfceb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfceb, .value=0x7d, .type=IO_READ},
        {.addr=0xfcec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x2da7, .a=0xaf, .x=0x77, .y=0xe9, .sp=0xd6, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2da7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2da8, .a=0x77, .x=0x77, .y=0xe9, .sp=0xd6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2da7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2da7, .value=0x7d, .type=IO_READ},
        {.addr=0x2da8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x7ca1, .a=0xca, .x=0x13, .y=0xe4, .sp=0x35, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7ca2, .a=0x13, .x=0x13, .y=0xe4, .sp=0x35, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7ca1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7ca1, .value=0x7d, .type=IO_READ},
        {.addr=0x7ca2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xa483, .a=0x57, .x=0x8d, .y=0xc8, .sp=0x57, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa483, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa484, .a=0x8d, .x=0x8d, .y=0xc8, .sp=0x57, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa483, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa483, .value=0x7d, .type=IO_READ},
        {.addr=0xa484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x8c0e, .a=0x6f, .x=0x09, .y=0x1d, .sp=0xcb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x8c0e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8c0f, .a=0x09, .x=0x09, .y=0x1d, .sp=0xcb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8c0e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8c0e, .value=0x7d, .type=IO_READ},
        {.addr=0x8c0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xa614, .a=0xd0, .x=0xb0, .y=0x67, .sp=0x45, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xa614, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa615, .a=0xb0, .x=0xb0, .y=0x67, .sp=0x45, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa614, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa614, .value=0x7d, .type=IO_READ},
        {.addr=0xa615, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x4e39, .a=0x4f, .x=0x37, .y=0xa9, .sp=0x66, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4e39, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4e3a, .a=0x37, .x=0x37, .y=0xa9, .sp=0x66, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4e39, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4e39, .value=0x7d, .type=IO_READ},
        {.addr=0x4e3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x9c93, .a=0x06, .x=0x3d, .y=0xcc, .sp=0x10, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9c93, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9c94, .a=0x3d, .x=0x3d, .y=0xcc, .sp=0x10, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9c93, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9c93, .value=0x7d, .type=IO_READ},
        {.addr=0x9c94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xc621, .a=0xd5, .x=0x66, .y=0x9b, .sp=0xf3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc621, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc622, .a=0x66, .x=0x66, .y=0x9b, .sp=0xf3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc621, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc621, .value=0x7d, .type=IO_READ},
        {.addr=0xc622, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x4a71, .a=0x8f, .x=0x8d, .y=0xe7, .sp=0xb0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a71, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4a72, .a=0x8d, .x=0x8d, .y=0xe7, .sp=0xb0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4a71, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4a71, .value=0x7d, .type=IO_READ},
        {.addr=0x4a72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x433a, .a=0x3b, .x=0x6f, .y=0x96, .sp=0x20, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x433a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x433b, .a=0x6f, .x=0x6f, .y=0x96, .sp=0x20, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x433a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x433a, .value=0x7d, .type=IO_READ},
        {.addr=0x433b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x47c0, .a=0x75, .x=0x83, .y=0x8f, .sp=0xf7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x47c0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x47c1, .a=0x83, .x=0x83, .y=0x8f, .sp=0xf7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x47c0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x47c0, .value=0x7d, .type=IO_READ},
        {.addr=0x47c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe7bc, .a=0x8a, .x=0xec, .y=0xed, .sp=0xa3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe7bc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe7bd, .a=0xec, .x=0xec, .y=0xed, .sp=0xa3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe7bc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe7bc, .value=0x7d, .type=IO_READ},
        {.addr=0xe7bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x0b85, .a=0x1c, .x=0xf3, .y=0xb8, .sp=0xf1, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0b85, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0b86, .a=0xf3, .x=0xf3, .y=0xb8, .sp=0xf1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0b85, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0b85, .value=0x7d, .type=IO_READ},
        {.addr=0x0b86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xce34, .a=0x78, .x=0xe2, .y=0xd5, .sp=0x5b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xce34, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xce35, .a=0xe2, .x=0xe2, .y=0xd5, .sp=0x5b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xce34, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xce34, .value=0x7d, .type=IO_READ},
        {.addr=0xce35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0300) {
    const struct CPU_State initial_cpu = {.pc=0x1e56, .a=0x23, .x=0x7b, .y=0xd1, .sp=0x4c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1e56, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1e57, .a=0x7b, .x=0x7b, .y=0xd1, .sp=0x4c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1e56, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1e56, .value=0x7d, .type=IO_READ},
        {.addr=0x1e57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x3087, .a=0xac, .x=0xb8, .y=0x02, .sp=0xab, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3087, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3088, .a=0xb8, .x=0xb8, .y=0x02, .sp=0xab, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x3087, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3087, .value=0x7d, .type=IO_READ},
        {.addr=0x3088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x3db6, .a=0x23, .x=0xd1, .y=0x1b, .sp=0x4d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x3db6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3db7, .a=0xd1, .x=0xd1, .y=0x1b, .sp=0x4d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3db6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3db6, .value=0x7d, .type=IO_READ},
        {.addr=0x3db7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x796c, .a=0x4b, .x=0x39, .y=0x0b, .sp=0x4e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x796c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x796d, .a=0x39, .x=0x39, .y=0x0b, .sp=0x4e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x796c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x796c, .value=0x7d, .type=IO_READ},
        {.addr=0x796d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0304) {
    const struct CPU_State initial_cpu = {.pc=0xf030, .a=0xbd, .x=0x0c, .y=0x2a, .sp=0xb2, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf030, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf031, .a=0x0c, .x=0x0c, .y=0x2a, .sp=0xb2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf030, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf030, .value=0x7d, .type=IO_READ},
        {.addr=0xf031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x77b5, .a=0x63, .x=0x0c, .y=0x12, .sp=0x83, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x77b5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x77b6, .a=0x0c, .x=0x0c, .y=0x12, .sp=0x83, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x77b5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x77b5, .value=0x7d, .type=IO_READ},
        {.addr=0x77b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0306) {
    const struct CPU_State initial_cpu = {.pc=0x7004, .a=0xf4, .x=0x0f, .y=0xf9, .sp=0x46, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x7004, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7005, .a=0x0f, .x=0x0f, .y=0xf9, .sp=0x46, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7004, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7004, .value=0x7d, .type=IO_READ},
        {.addr=0x7005, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0307) {
    const struct CPU_State initial_cpu = {.pc=0x8546, .a=0x38, .x=0xf8, .y=0x41, .sp=0xaa, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8546, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8547, .a=0xf8, .x=0xf8, .y=0x41, .sp=0xaa, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8546, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8546, .value=0x7d, .type=IO_READ},
        {.addr=0x8547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0308) {
    const struct CPU_State initial_cpu = {.pc=0xbbd8, .a=0x25, .x=0x5d, .y=0x46, .sp=0x69, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbbd8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbbd9, .a=0x5d, .x=0x5d, .y=0x46, .sp=0x69, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbbd8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbbd8, .value=0x7d, .type=IO_READ},
        {.addr=0xbbd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0309) {
    const struct CPU_State initial_cpu = {.pc=0xeb43, .a=0x26, .x=0xe8, .y=0x32, .sp=0xbd, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xeb43, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeb44, .a=0xe8, .x=0xe8, .y=0x32, .sp=0xbd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xeb43, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeb43, .value=0x7d, .type=IO_READ},
        {.addr=0xeb44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xcb20, .a=0x7d, .x=0x76, .y=0xb6, .sp=0xa1, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcb20, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcb21, .a=0x76, .x=0x76, .y=0xb6, .sp=0xa1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xcb20, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcb20, .value=0x7d, .type=IO_READ},
        {.addr=0xcb21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_030B) {
    const struct CPU_State initial_cpu = {.pc=0xcad4, .a=0xaf, .x=0x4d, .y=0xea, .sp=0x67, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xcad4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcad5, .a=0x4d, .x=0x4d, .y=0xea, .sp=0x67, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xcad4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcad4, .value=0x7d, .type=IO_READ},
        {.addr=0xcad5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x4311, .a=0x58, .x=0x7e, .y=0xc8, .sp=0x1d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4311, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4312, .a=0x7e, .x=0x7e, .y=0xc8, .sp=0x1d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4311, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4311, .value=0x7d, .type=IO_READ},
        {.addr=0x4312, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x1bb9, .a=0x3c, .x=0x37, .y=0xfa, .sp=0xa3, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x1bb9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1bba, .a=0x37, .x=0x37, .y=0xfa, .sp=0xa3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1bb9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1bb9, .value=0x7d, .type=IO_READ},
        {.addr=0x1bba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_030E) {
    const struct CPU_State initial_cpu = {.pc=0xdec3, .a=0xd1, .x=0x8a, .y=0xa7, .sp=0xac, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xdec3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdec4, .a=0x8a, .x=0x8a, .y=0xa7, .sp=0xac, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xdec3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdec3, .value=0x7d, .type=IO_READ},
        {.addr=0xdec4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_030F) {
    const struct CPU_State initial_cpu = {.pc=0xc7b9, .a=0x35, .x=0x62, .y=0x9a, .sp=0xee, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc7ba, .a=0x62, .x=0x62, .y=0x9a, .sp=0xee, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc7b9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc7b9, .value=0x7d, .type=IO_READ},
        {.addr=0xc7ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x331c, .a=0x1b, .x=0xf3, .y=0xd5, .sp=0xce, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x331c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x331d, .a=0xf3, .x=0xf3, .y=0xd5, .sp=0xce, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x331c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x331c, .value=0x7d, .type=IO_READ},
        {.addr=0x331d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0311) {
    const struct CPU_State initial_cpu = {.pc=0x4205, .a=0x69, .x=0x70, .y=0x87, .sp=0x05, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4205, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4206, .a=0x70, .x=0x70, .y=0x87, .sp=0x05, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4205, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4205, .value=0x7d, .type=IO_READ},
        {.addr=0x4206, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0312) {
    const struct CPU_State initial_cpu = {.pc=0xe7fb, .a=0x7f, .x=0x02, .y=0x6f, .sp=0x5a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7fb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe7fc, .a=0x02, .x=0x02, .y=0x6f, .sp=0x5a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe7fb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe7fb, .value=0x7d, .type=IO_READ},
        {.addr=0xe7fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0313) {
    const struct CPU_State initial_cpu = {.pc=0xeaac, .a=0x7b, .x=0xf0, .y=0x84, .sp=0x44, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xeaac, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeaad, .a=0xf0, .x=0xf0, .y=0x84, .sp=0x44, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xeaac, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeaac, .value=0x7d, .type=IO_READ},
        {.addr=0xeaad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0314) {
    const struct CPU_State initial_cpu = {.pc=0xeee1, .a=0x12, .x=0x21, .y=0xb9, .sp=0x37, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xeee1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeee2, .a=0x21, .x=0x21, .y=0xb9, .sp=0x37, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xeee1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeee1, .value=0x7d, .type=IO_READ},
        {.addr=0xeee2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x85ef, .a=0x20, .x=0x58, .y=0xf8, .sp=0x3b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x85ef, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x85f0, .a=0x58, .x=0x58, .y=0xf8, .sp=0x3b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x85ef, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x85ef, .value=0x7d, .type=IO_READ},
        {.addr=0x85f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0316) {
    const struct CPU_State initial_cpu = {.pc=0x831a, .a=0x30, .x=0x7a, .y=0x7e, .sp=0x95, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x831a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x831b, .a=0x7a, .x=0x7a, .y=0x7e, .sp=0x95, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x831a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x831a, .value=0x7d, .type=IO_READ},
        {.addr=0x831b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x7622, .a=0xf6, .x=0x0c, .y=0xb3, .sp=0x3b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7622, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7623, .a=0x0c, .x=0x0c, .y=0xb3, .sp=0x3b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7622, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7622, .value=0x7d, .type=IO_READ},
        {.addr=0x7623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0318) {
    const struct CPU_State initial_cpu = {.pc=0x8dc7, .a=0xe6, .x=0x81, .y=0x64, .sp=0xfe, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8dc7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8dc8, .a=0x81, .x=0x81, .y=0x64, .sp=0xfe, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8dc7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8dc7, .value=0x7d, .type=IO_READ},
        {.addr=0x8dc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0319) {
    const struct CPU_State initial_cpu = {.pc=0xfede, .a=0x88, .x=0xd3, .y=0x4c, .sp=0xe5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfede, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfedf, .a=0xd3, .x=0xd3, .y=0x4c, .sp=0xe5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfede, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfede, .value=0x7d, .type=IO_READ},
        {.addr=0xfedf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x0be0, .a=0x0d, .x=0xd7, .y=0xa6, .sp=0xbb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0be0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0be1, .a=0xd7, .x=0xd7, .y=0xa6, .sp=0xbb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0be0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0be0, .value=0x7d, .type=IO_READ},
        {.addr=0x0be1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_031B) {
    const struct CPU_State initial_cpu = {.pc=0xfe2a, .a=0x48, .x=0x1f, .y=0x71, .sp=0xd2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xfe2a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfe2b, .a=0x1f, .x=0x1f, .y=0x71, .sp=0xd2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfe2a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfe2a, .value=0x7d, .type=IO_READ},
        {.addr=0xfe2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x592f, .a=0xd5, .x=0x85, .y=0x7f, .sp=0xeb, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x592f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5930, .a=0x85, .x=0x85, .y=0x7f, .sp=0xeb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x592f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x592f, .value=0x7d, .type=IO_READ},
        {.addr=0x5930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_031D) {
    const struct CPU_State initial_cpu = {.pc=0xc3ba, .a=0x1d, .x=0x91, .y=0xab, .sp=0x40, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xc3ba, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc3bb, .a=0x91, .x=0x91, .y=0xab, .sp=0x40, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc3ba, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc3ba, .value=0x7d, .type=IO_READ},
        {.addr=0xc3bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_031E) {
    const struct CPU_State initial_cpu = {.pc=0x98af, .a=0xc4, .x=0x1b, .y=0x7d, .sp=0x3b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x98af, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x98b0, .a=0x1b, .x=0x1b, .y=0x7d, .sp=0x3b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x98af, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x98af, .value=0x7d, .type=IO_READ},
        {.addr=0x98b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x4213, .a=0xb5, .x=0xe3, .y=0xe3, .sp=0x56, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4213, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4214, .a=0xe3, .x=0xe3, .y=0xe3, .sp=0x56, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4213, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4213, .value=0x7d, .type=IO_READ},
        {.addr=0x4214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x766f, .a=0x2b, .x=0x32, .y=0x70, .sp=0x0c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x766f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7670, .a=0x32, .x=0x32, .y=0x70, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x766f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x766f, .value=0x7d, .type=IO_READ},
        {.addr=0x7670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x515e, .a=0x77, .x=0xc2, .y=0x3c, .sp=0x34, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x515e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x515f, .a=0xc2, .x=0xc2, .y=0x3c, .sp=0x34, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x515e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x515e, .value=0x7d, .type=IO_READ},
        {.addr=0x515f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x2c4a, .a=0x07, .x=0xcc, .y=0xba, .sp=0xbc, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c4a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2c4b, .a=0xcc, .x=0xcc, .y=0xba, .sp=0xbc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2c4a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2c4a, .value=0x7d, .type=IO_READ},
        {.addr=0x2c4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0323) {
    const struct CPU_State initial_cpu = {.pc=0x6e6c, .a=0x93, .x=0xb7, .y=0xc3, .sp=0xd4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x6e6c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6e6d, .a=0xb7, .x=0xb7, .y=0xc3, .sp=0xd4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6e6c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6e6c, .value=0x7d, .type=IO_READ},
        {.addr=0x6e6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0324) {
    const struct CPU_State initial_cpu = {.pc=0x0813, .a=0xfc, .x=0x36, .y=0xd0, .sp=0x9e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0813, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0814, .a=0x36, .x=0x36, .y=0xd0, .sp=0x9e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0813, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0813, .value=0x7d, .type=IO_READ},
        {.addr=0x0814, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x3897, .a=0x8f, .x=0xf3, .y=0xf6, .sp=0xa9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3897, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3898, .a=0xf3, .x=0xf3, .y=0xf6, .sp=0xa9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3897, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3897, .value=0x7d, .type=IO_READ},
        {.addr=0x3898, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x63d8, .a=0x9b, .x=0xc7, .y=0x60, .sp=0x9d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x63d8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x63d9, .a=0xc7, .x=0xc7, .y=0x60, .sp=0x9d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x63d8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x63d8, .value=0x7d, .type=IO_READ},
        {.addr=0x63d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x93f6, .a=0x66, .x=0xad, .y=0x7f, .sp=0x7b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x93f6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x93f7, .a=0xad, .x=0xad, .y=0x7f, .sp=0x7b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x93f6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x93f6, .value=0x7d, .type=IO_READ},
        {.addr=0x93f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0328) {
    const struct CPU_State initial_cpu = {.pc=0x4670, .a=0xe0, .x=0x04, .y=0x40, .sp=0x71, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4670, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4671, .a=0x04, .x=0x04, .y=0x40, .sp=0x71, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4670, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4670, .value=0x7d, .type=IO_READ},
        {.addr=0x4671, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x41bc, .a=0x31, .x=0x2b, .y=0xaa, .sp=0x69, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x41bc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x41bd, .a=0x2b, .x=0x2b, .y=0xaa, .sp=0x69, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x41bc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x41bc, .value=0x7d, .type=IO_READ},
        {.addr=0x41bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x698b, .a=0x6e, .x=0x1e, .y=0xca, .sp=0xfa, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x698b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x698c, .a=0x1e, .x=0x1e, .y=0xca, .sp=0xfa, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x698b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x698b, .value=0x7d, .type=IO_READ},
        {.addr=0x698c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_032B) {
    const struct CPU_State initial_cpu = {.pc=0x2fc3, .a=0x2e, .x=0x82, .y=0xe6, .sp=0x70, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2fc4, .a=0x82, .x=0x82, .y=0xe6, .sp=0x70, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2fc3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2fc3, .value=0x7d, .type=IO_READ},
        {.addr=0x2fc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_032C) {
    const struct CPU_State initial_cpu = {.pc=0xbb9e, .a=0x15, .x=0x94, .y=0x50, .sp=0x83, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbb9f, .a=0x94, .x=0x94, .y=0x50, .sp=0x83, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xbb9e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbb9e, .value=0x7d, .type=IO_READ},
        {.addr=0xbb9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x3a6a, .a=0x4a, .x=0x1f, .y=0x79, .sp=0x62, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3a6a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3a6b, .a=0x1f, .x=0x1f, .y=0x79, .sp=0x62, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3a6a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3a6a, .value=0x7d, .type=IO_READ},
        {.addr=0x3a6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_032E) {
    const struct CPU_State initial_cpu = {.pc=0x9413, .a=0xc8, .x=0xc1, .y=0xf6, .sp=0xe4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x9413, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9414, .a=0xc1, .x=0xc1, .y=0xf6, .sp=0xe4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9413, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9413, .value=0x7d, .type=IO_READ},
        {.addr=0x9414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_032F) {
    const struct CPU_State initial_cpu = {.pc=0xfc76, .a=0xb3, .x=0xa8, .y=0x37, .sp=0x7b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xfc76, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfc77, .a=0xa8, .x=0xa8, .y=0x37, .sp=0x7b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xfc76, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfc76, .value=0x7d, .type=IO_READ},
        {.addr=0xfc77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x1df8, .a=0x2f, .x=0x4b, .y=0x5c, .sp=0x3e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1df8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1df9, .a=0x4b, .x=0x4b, .y=0x5c, .sp=0x3e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1df8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1df8, .value=0x7d, .type=IO_READ},
        {.addr=0x1df9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0331) {
    const struct CPU_State initial_cpu = {.pc=0xaf83, .a=0x94, .x=0xb7, .y=0xd6, .sp=0xec, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xaf83, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xaf84, .a=0xb7, .x=0xb7, .y=0xd6, .sp=0xec, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xaf83, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaf83, .value=0x7d, .type=IO_READ},
        {.addr=0xaf84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0332) {
    const struct CPU_State initial_cpu = {.pc=0xdf2a, .a=0x85, .x=0xb9, .y=0xe9, .sp=0x98, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xdf2a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf2b, .a=0xb9, .x=0xb9, .y=0xe9, .sp=0x98, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdf2a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf2a, .value=0x7d, .type=IO_READ},
        {.addr=0xdf2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0333) {
    const struct CPU_State initial_cpu = {.pc=0x08aa, .a=0xcd, .x=0xf0, .y=0xff, .sp=0xdd, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x08aa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x08ab, .a=0xf0, .x=0xf0, .y=0xff, .sp=0xdd, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x08aa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x08aa, .value=0x7d, .type=IO_READ},
        {.addr=0x08ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0334) {
    const struct CPU_State initial_cpu = {.pc=0xddf3, .a=0x2a, .x=0x69, .y=0x41, .sp=0x71, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xddf3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xddf4, .a=0x69, .x=0x69, .y=0x41, .sp=0x71, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xddf3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xddf3, .value=0x7d, .type=IO_READ},
        {.addr=0xddf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x0833, .a=0x7d, .x=0x24, .y=0x87, .sp=0x27, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0833, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0834, .a=0x24, .x=0x24, .y=0x87, .sp=0x27, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0833, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0833, .value=0x7d, .type=IO_READ},
        {.addr=0x0834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x8a29, .a=0x0b, .x=0xd0, .y=0x1e, .sp=0x26, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8a29, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8a2a, .a=0xd0, .x=0xd0, .y=0x1e, .sp=0x26, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x8a29, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8a29, .value=0x7d, .type=IO_READ},
        {.addr=0x8a2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0337) {
    const struct CPU_State initial_cpu = {.pc=0xbc90, .a=0x48, .x=0xa6, .y=0x82, .sp=0x42, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xbc90, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbc91, .a=0xa6, .x=0xa6, .y=0x82, .sp=0x42, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xbc90, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbc90, .value=0x7d, .type=IO_READ},
        {.addr=0xbc91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x850a, .a=0xed, .x=0x15, .y=0x64, .sp=0x41, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x850a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x850b, .a=0x15, .x=0x15, .y=0x64, .sp=0x41, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x850a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x850a, .value=0x7d, .type=IO_READ},
        {.addr=0x850b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0339) {
    const struct CPU_State initial_cpu = {.pc=0x1d07, .a=0x08, .x=0x52, .y=0x13, .sp=0xeb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1d08, .a=0x52, .x=0x52, .y=0x13, .sp=0xeb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1d07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1d07, .value=0x7d, .type=IO_READ},
        {.addr=0x1d08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x5beb, .a=0xc9, .x=0xa9, .y=0x27, .sp=0x52, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5beb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5bec, .a=0xa9, .x=0xa9, .y=0x27, .sp=0x52, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5beb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5beb, .value=0x7d, .type=IO_READ},
        {.addr=0x5bec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x261b, .a=0xbf, .x=0x42, .y=0xda, .sp=0x87, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x261b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x261c, .a=0x42, .x=0x42, .y=0xda, .sp=0x87, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x261b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x261b, .value=0x7d, .type=IO_READ},
        {.addr=0x261c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x2043, .a=0x1c, .x=0x3b, .y=0xc2, .sp=0x1b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2043, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2044, .a=0x3b, .x=0x3b, .y=0xc2, .sp=0x1b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x2043, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2043, .value=0x7d, .type=IO_READ},
        {.addr=0x2044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_033D) {
    const struct CPU_State initial_cpu = {.pc=0xcf30, .a=0x6a, .x=0x95, .y=0x74, .sp=0x2d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcf30, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcf31, .a=0x95, .x=0x95, .y=0x74, .sp=0x2d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xcf30, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcf30, .value=0x7d, .type=IO_READ},
        {.addr=0xcf31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x0222, .a=0xe0, .x=0x34, .y=0x59, .sp=0x88, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0222, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0223, .a=0x34, .x=0x34, .y=0x59, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0222, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0222, .value=0x7d, .type=IO_READ},
        {.addr=0x0223, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_033F) {
    const struct CPU_State initial_cpu = {.pc=0x344e, .a=0x13, .x=0x91, .y=0xc5, .sp=0xd7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x344e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x344f, .a=0x91, .x=0x91, .y=0xc5, .sp=0xd7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x344e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x344e, .value=0x7d, .type=IO_READ},
        {.addr=0x344f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0340) {
    const struct CPU_State initial_cpu = {.pc=0xa1b0, .a=0x2a, .x=0x9e, .y=0x40, .sp=0xbf, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa1b1, .a=0x9e, .x=0x9e, .y=0x40, .sp=0xbf, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa1b0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa1b0, .value=0x7d, .type=IO_READ},
        {.addr=0xa1b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0341) {
    const struct CPU_State initial_cpu = {.pc=0xeb7e, .a=0xde, .x=0x3e, .y=0xb9, .sp=0xe9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xeb7e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeb7f, .a=0x3e, .x=0x3e, .y=0xb9, .sp=0xe9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xeb7e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeb7e, .value=0x7d, .type=IO_READ},
        {.addr=0xeb7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0342) {
    const struct CPU_State initial_cpu = {.pc=0x1b51, .a=0xf9, .x=0x37, .y=0xde, .sp=0x90, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1b51, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1b52, .a=0x37, .x=0x37, .y=0xde, .sp=0x90, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1b51, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1b51, .value=0x7d, .type=IO_READ},
        {.addr=0x1b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0343) {
    const struct CPU_State initial_cpu = {.pc=0x15db, .a=0x57, .x=0x0d, .y=0x97, .sp=0xb4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x15db, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x15dc, .a=0x0d, .x=0x0d, .y=0x97, .sp=0xb4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x15db, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x15db, .value=0x7d, .type=IO_READ},
        {.addr=0x15dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9873, .a=0xbf, .x=0x51, .y=0xdd, .sp=0x7d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9873, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9874, .a=0x51, .x=0x51, .y=0xdd, .sp=0x7d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9873, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9873, .value=0x7d, .type=IO_READ},
        {.addr=0x9874, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0345) {
    const struct CPU_State initial_cpu = {.pc=0xbe45, .a=0x15, .x=0xea, .y=0x30, .sp=0x24, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe45, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbe46, .a=0xea, .x=0xea, .y=0x30, .sp=0x24, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbe45, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbe45, .value=0x7d, .type=IO_READ},
        {.addr=0xbe46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0346) {
    const struct CPU_State initial_cpu = {.pc=0xe301, .a=0x48, .x=0x8a, .y=0xb1, .sp=0xe2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe301, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe302, .a=0x8a, .x=0x8a, .y=0xb1, .sp=0xe2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe301, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe301, .value=0x7d, .type=IO_READ},
        {.addr=0xe302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0347) {
    const struct CPU_State initial_cpu = {.pc=0xeced, .a=0x50, .x=0x50, .y=0xf6, .sp=0x47, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xeced, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xecee, .a=0x50, .x=0x50, .y=0xf6, .sp=0x47, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xeced, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeced, .value=0x7d, .type=IO_READ},
        {.addr=0xecee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0348) {
    const struct CPU_State initial_cpu = {.pc=0x39a7, .a=0x3a, .x=0x68, .y=0xf6, .sp=0x11, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x39a7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x39a8, .a=0x68, .x=0x68, .y=0xf6, .sp=0x11, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x39a7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x39a7, .value=0x7d, .type=IO_READ},
        {.addr=0x39a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x5c50, .a=0xa5, .x=0x6c, .y=0xcd, .sp=0xf8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5c50, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5c51, .a=0x6c, .x=0x6c, .y=0xcd, .sp=0xf8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5c50, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5c50, .value=0x7d, .type=IO_READ},
        {.addr=0x5c51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_034A) {
    const struct CPU_State initial_cpu = {.pc=0xe24c, .a=0x9b, .x=0x94, .y=0x0e, .sp=0xe3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe24c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe24d, .a=0x94, .x=0x94, .y=0x0e, .sp=0xe3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe24c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe24c, .value=0x7d, .type=IO_READ},
        {.addr=0xe24d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_034B) {
    const struct CPU_State initial_cpu = {.pc=0xe24f, .a=0x02, .x=0xaa, .y=0x28, .sp=0x53, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe24f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe250, .a=0xaa, .x=0xaa, .y=0x28, .sp=0x53, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe24f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe24f, .value=0x7d, .type=IO_READ},
        {.addr=0xe250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x5ba0, .a=0x14, .x=0x48, .y=0x6c, .sp=0x60, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5ba1, .a=0x48, .x=0x48, .y=0x6c, .sp=0x60, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5ba0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5ba0, .value=0x7d, .type=IO_READ},
        {.addr=0x5ba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x45f1, .a=0x21, .x=0x96, .y=0xb8, .sp=0x83, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x45f1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x45f2, .a=0x96, .x=0x96, .y=0xb8, .sp=0x83, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x45f1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x45f1, .value=0x7d, .type=IO_READ},
        {.addr=0x45f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_034E) {
    const struct CPU_State initial_cpu = {.pc=0xb91a, .a=0x7e, .x=0x1d, .y=0xb1, .sp=0x70, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb91a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb91b, .a=0x1d, .x=0x1d, .y=0xb1, .sp=0x70, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb91a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb91a, .value=0x7d, .type=IO_READ},
        {.addr=0xb91b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x103d, .a=0x06, .x=0xa6, .y=0x65, .sp=0x75, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x103d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x103e, .a=0xa6, .x=0xa6, .y=0x65, .sp=0x75, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x103d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x103d, .value=0x7d, .type=IO_READ},
        {.addr=0x103e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0350) {
    const struct CPU_State initial_cpu = {.pc=0x2bec, .a=0x59, .x=0xfe, .y=0x6a, .sp=0xbe, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2bec, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2bed, .a=0xfe, .x=0xfe, .y=0x6a, .sp=0xbe, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2bec, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2bec, .value=0x7d, .type=IO_READ},
        {.addr=0x2bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0351) {
    const struct CPU_State initial_cpu = {.pc=0xc799, .a=0xed, .x=0x70, .y=0xb4, .sp=0xd3, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc799, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc79a, .a=0x70, .x=0x70, .y=0xb4, .sp=0xd3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc799, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc799, .value=0x7d, .type=IO_READ},
        {.addr=0xc79a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0352) {
    const struct CPU_State initial_cpu = {.pc=0xdb07, .a=0x56, .x=0x8e, .y=0x9d, .sp=0xc4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xdb07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdb08, .a=0x8e, .x=0x8e, .y=0x9d, .sp=0xc4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdb07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdb07, .value=0x7d, .type=IO_READ},
        {.addr=0xdb08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x9854, .a=0x5c, .x=0xf9, .y=0xb7, .sp=0x54, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x9854, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9855, .a=0xf9, .x=0xf9, .y=0xb7, .sp=0x54, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9854, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9854, .value=0x7d, .type=IO_READ},
        {.addr=0x9855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0354) {
    const struct CPU_State initial_cpu = {.pc=0xefd9, .a=0xa5, .x=0xf2, .y=0x35, .sp=0x51, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xefd9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xefda, .a=0xf2, .x=0xf2, .y=0x35, .sp=0x51, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xefd9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xefd9, .value=0x7d, .type=IO_READ},
        {.addr=0xefda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x00ad, .a=0x33, .x=0x48, .y=0x54, .sp=0xf3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x00ae, .a=0x48, .x=0x48, .y=0x54, .sp=0xf3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x00ad, .value=0x7d, .type=IO_READ},
        {.addr=0x00ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0356) {
    const struct CPU_State initial_cpu = {.pc=0x399a, .a=0x7b, .x=0x0b, .y=0x35, .sp=0x85, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x399a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x399b, .a=0x0b, .x=0x0b, .y=0x35, .sp=0x85, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x399a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x399a, .value=0x7d, .type=IO_READ},
        {.addr=0x399b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x1f63, .a=0x2f, .x=0x85, .y=0xd3, .sp=0xe9, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1f63, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1f64, .a=0x85, .x=0x85, .y=0xd3, .sp=0xe9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1f63, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1f63, .value=0x7d, .type=IO_READ},
        {.addr=0x1f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0358) {
    const struct CPU_State initial_cpu = {.pc=0xe7cc, .a=0xf4, .x=0xbc, .y=0x2c, .sp=0x36, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe7cc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe7cd, .a=0xbc, .x=0xbc, .y=0x2c, .sp=0x36, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe7cc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe7cc, .value=0x7d, .type=IO_READ},
        {.addr=0xe7cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0359) {
    const struct CPU_State initial_cpu = {.pc=0x09df, .a=0xb9, .x=0x88, .y=0x42, .sp=0x42, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x09df, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x09e0, .a=0x88, .x=0x88, .y=0x42, .sp=0x42, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x09df, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x09df, .value=0x7d, .type=IO_READ},
        {.addr=0x09e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_035A) {
    const struct CPU_State initial_cpu = {.pc=0xfe77, .a=0xc6, .x=0x36, .y=0x7f, .sp=0x92, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfe77, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfe78, .a=0x36, .x=0x36, .y=0x7f, .sp=0x92, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfe77, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfe77, .value=0x7d, .type=IO_READ},
        {.addr=0xfe78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0fe9, .a=0xcf, .x=0xca, .y=0x58, .sp=0x2a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0fea, .a=0xca, .x=0xca, .y=0x58, .sp=0x2a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0fe9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0fe9, .value=0x7d, .type=IO_READ},
        {.addr=0x0fea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x2003, .a=0x2d, .x=0xce, .y=0x73, .sp=0x45, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2003, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2004, .a=0xce, .x=0xce, .y=0x73, .sp=0x45, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x2003, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2003, .value=0x7d, .type=IO_READ},
        {.addr=0x2004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x08aa, .a=0xdf, .x=0x5a, .y=0xa6, .sp=0x46, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x08aa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x08ab, .a=0x5a, .x=0x5a, .y=0xa6, .sp=0x46, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x08aa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x08aa, .value=0x7d, .type=IO_READ},
        {.addr=0x08ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_035E) {
    const struct CPU_State initial_cpu = {.pc=0x7244, .a=0x55, .x=0x2d, .y=0x29, .sp=0x15, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x7244, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7245, .a=0x2d, .x=0x2d, .y=0x29, .sp=0x15, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7244, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7244, .value=0x7d, .type=IO_READ},
        {.addr=0x7245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_035F) {
    const struct CPU_State initial_cpu = {.pc=0x4a1c, .a=0xad, .x=0xec, .y=0xb7, .sp=0xf2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4a1c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4a1d, .a=0xec, .x=0xec, .y=0xb7, .sp=0xf2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4a1c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4a1c, .value=0x7d, .type=IO_READ},
        {.addr=0x4a1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0360) {
    const struct CPU_State initial_cpu = {.pc=0xbdff, .a=0x13, .x=0x6a, .y=0x84, .sp=0x6a, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xbdff, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbe00, .a=0x6a, .x=0x6a, .y=0x84, .sp=0x6a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbdff, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbdff, .value=0x7d, .type=IO_READ},
        {.addr=0xbe00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0361) {
    const struct CPU_State initial_cpu = {.pc=0x245b, .a=0x16, .x=0xd0, .y=0x3a, .sp=0xd3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x245b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x245c, .a=0xd0, .x=0xd0, .y=0x3a, .sp=0xd3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x245b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x245b, .value=0x7d, .type=IO_READ},
        {.addr=0x245c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0362) {
    const struct CPU_State initial_cpu = {.pc=0xcab4, .a=0xdb, .x=0xee, .y=0xe8, .sp=0x5b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xcab4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcab5, .a=0xee, .x=0xee, .y=0xe8, .sp=0x5b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xcab4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcab4, .value=0x7d, .type=IO_READ},
        {.addr=0xcab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x5600, .a=0xcb, .x=0x68, .y=0xe0, .sp=0x78, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5600, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5601, .a=0x68, .x=0x68, .y=0xe0, .sp=0x78, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5600, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5600, .value=0x7d, .type=IO_READ},
        {.addr=0x5601, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0364) {
    const struct CPU_State initial_cpu = {.pc=0xb2fb, .a=0x3d, .x=0xf0, .y=0x00, .sp=0x8a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xb2fb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb2fc, .a=0xf0, .x=0xf0, .y=0x00, .sp=0x8a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb2fb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb2fb, .value=0x7d, .type=IO_READ},
        {.addr=0xb2fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x296a, .a=0x0e, .x=0xd6, .y=0xf3, .sp=0xa8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x296a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x296b, .a=0xd6, .x=0xd6, .y=0xf3, .sp=0xa8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x296a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x296a, .value=0x7d, .type=IO_READ},
        {.addr=0x296b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0366) {
    const struct CPU_State initial_cpu = {.pc=0xe161, .a=0x0d, .x=0xf5, .y=0x46, .sp=0x1e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe161, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe162, .a=0xf5, .x=0xf5, .y=0x46, .sp=0x1e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe161, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe161, .value=0x7d, .type=IO_READ},
        {.addr=0xe162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0367) {
    const struct CPU_State initial_cpu = {.pc=0x4f32, .a=0xa1, .x=0xd1, .y=0x30, .sp=0x16, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4f32, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4f33, .a=0xd1, .x=0xd1, .y=0x30, .sp=0x16, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4f32, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4f32, .value=0x7d, .type=IO_READ},
        {.addr=0x4f33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8228, .a=0x99, .x=0x61, .y=0xc2, .sp=0xdb, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x8228, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8229, .a=0x61, .x=0x61, .y=0xc2, .sp=0xdb, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8228, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8228, .value=0x7d, .type=IO_READ},
        {.addr=0x8229, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x43de, .a=0x3e, .x=0x5d, .y=0x5b, .sp=0xc6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x43de, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x43df, .a=0x5d, .x=0x5d, .y=0x5b, .sp=0xc6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x43de, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x43de, .value=0x7d, .type=IO_READ},
        {.addr=0x43df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_036A) {
    const struct CPU_State initial_cpu = {.pc=0xb292, .a=0x20, .x=0x28, .y=0x9c, .sp=0xdf, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb292, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb293, .a=0x28, .x=0x28, .y=0x9c, .sp=0xdf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb292, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb292, .value=0x7d, .type=IO_READ},
        {.addr=0xb293, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_036B) {
    const struct CPU_State initial_cpu = {.pc=0xce7f, .a=0x0c, .x=0x22, .y=0xd3, .sp=0x94, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xce7f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xce80, .a=0x22, .x=0x22, .y=0xd3, .sp=0x94, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xce7f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xce7f, .value=0x7d, .type=IO_READ},
        {.addr=0xce80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x6f48, .a=0x19, .x=0x51, .y=0xec, .sp=0x20, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6f48, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6f49, .a=0x51, .x=0x51, .y=0xec, .sp=0x20, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6f48, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6f48, .value=0x7d, .type=IO_READ},
        {.addr=0x6f49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x25c5, .a=0x62, .x=0x66, .y=0x1d, .sp=0xfa, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x25c5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x25c6, .a=0x66, .x=0x66, .y=0x1d, .sp=0xfa, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x25c5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x25c5, .value=0x7d, .type=IO_READ},
        {.addr=0x25c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_036E) {
    const struct CPU_State initial_cpu = {.pc=0x8dca, .a=0x99, .x=0x4e, .y=0x86, .sp=0xc5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8dca, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8dcb, .a=0x4e, .x=0x4e, .y=0x86, .sp=0xc5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8dca, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8dca, .value=0x7d, .type=IO_READ},
        {.addr=0x8dcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_036F) {
    const struct CPU_State initial_cpu = {.pc=0xf23e, .a=0x46, .x=0x15, .y=0x8b, .sp=0xcb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf23e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf23f, .a=0x15, .x=0x15, .y=0x8b, .sp=0xcb, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf23e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf23e, .value=0x7d, .type=IO_READ},
        {.addr=0xf23f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x9835, .a=0xc3, .x=0x81, .y=0x38, .sp=0x35, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x9835, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9836, .a=0x81, .x=0x81, .y=0x38, .sp=0x35, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9835, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9835, .value=0x7d, .type=IO_READ},
        {.addr=0x9836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0371) {
    const struct CPU_State initial_cpu = {.pc=0x246f, .a=0xb2, .x=0x0a, .y=0xab, .sp=0xbc, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x246f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2470, .a=0x0a, .x=0x0a, .y=0xab, .sp=0xbc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x246f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x246f, .value=0x7d, .type=IO_READ},
        {.addr=0x2470, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0372) {
    const struct CPU_State initial_cpu = {.pc=0x953e, .a=0xdd, .x=0x2a, .y=0x0f, .sp=0xaf, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x953e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x953f, .a=0x2a, .x=0x2a, .y=0x0f, .sp=0xaf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x953e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x953e, .value=0x7d, .type=IO_READ},
        {.addr=0x953f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0373) {
    const struct CPU_State initial_cpu = {.pc=0x4070, .a=0x01, .x=0x72, .y=0x52, .sp=0x4f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x4070, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4071, .a=0x72, .x=0x72, .y=0x52, .sp=0x4f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4070, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4070, .value=0x7d, .type=IO_READ},
        {.addr=0x4071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0374) {
    const struct CPU_State initial_cpu = {.pc=0xb14c, .a=0x61, .x=0x34, .y=0xe3, .sp=0x32, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb14c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb14d, .a=0x34, .x=0x34, .y=0xe3, .sp=0x32, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb14c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb14c, .value=0x7d, .type=IO_READ},
        {.addr=0xb14d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0375) {
    const struct CPU_State initial_cpu = {.pc=0x982a, .a=0x16, .x=0x33, .y=0xe2, .sp=0x34, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x982a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x982b, .a=0x33, .x=0x33, .y=0xe2, .sp=0x34, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x982a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x982a, .value=0x7d, .type=IO_READ},
        {.addr=0x982b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0376) {
    const struct CPU_State initial_cpu = {.pc=0x14f2, .a=0xfe, .x=0x86, .y=0xaa, .sp=0x1d, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x14f2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x14f3, .a=0x86, .x=0x86, .y=0xaa, .sp=0x1d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x14f2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x14f2, .value=0x7d, .type=IO_READ},
        {.addr=0x14f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0377) {
    const struct CPU_State initial_cpu = {.pc=0xe0be, .a=0xc6, .x=0x07, .y=0xe9, .sp=0xb8, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe0be, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe0bf, .a=0x07, .x=0x07, .y=0xe9, .sp=0xb8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe0be, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe0be, .value=0x7d, .type=IO_READ},
        {.addr=0xe0bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0378) {
    const struct CPU_State initial_cpu = {.pc=0xd89a, .a=0x4a, .x=0x4c, .y=0xdf, .sp=0xbf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd89a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd89b, .a=0x4c, .x=0x4c, .y=0xdf, .sp=0xbf, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd89a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd89a, .value=0x7d, .type=IO_READ},
        {.addr=0xd89b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0379) {
    const struct CPU_State initial_cpu = {.pc=0xcc83, .a=0x76, .x=0xbb, .y=0xb5, .sp=0x79, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xcc83, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcc84, .a=0xbb, .x=0xbb, .y=0xb5, .sp=0x79, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcc83, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcc83, .value=0x7d, .type=IO_READ},
        {.addr=0xcc84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_037A) {
    const struct CPU_State initial_cpu = {.pc=0xb369, .a=0x46, .x=0x4e, .y=0x8e, .sp=0x22, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb369, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb36a, .a=0x4e, .x=0x4e, .y=0x8e, .sp=0x22, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb369, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb369, .value=0x7d, .type=IO_READ},
        {.addr=0xb36a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5d2b, .a=0x64, .x=0xd9, .y=0x7b, .sp=0x1c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5d2c, .a=0xd9, .x=0xd9, .y=0x7b, .sp=0x1c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5d2b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5d2b, .value=0x7d, .type=IO_READ},
        {.addr=0x5d2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x125b, .a=0x5c, .x=0xff, .y=0x02, .sp=0x9d, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x125b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x125c, .a=0xff, .x=0xff, .y=0x02, .sp=0x9d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x125b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x125b, .value=0x7d, .type=IO_READ},
        {.addr=0x125c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_037D) {
    const struct CPU_State initial_cpu = {.pc=0x6a2a, .a=0x17, .x=0xb0, .y=0xc9, .sp=0x9b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6a2b, .a=0xb0, .x=0xb0, .y=0xc9, .sp=0x9b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6a2a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6a2a, .value=0x7d, .type=IO_READ},
        {.addr=0x6a2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_037E) {
    const struct CPU_State initial_cpu = {.pc=0xbe38, .a=0x3a, .x=0x03, .y=0x44, .sp=0x12, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xbe38, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbe39, .a=0x03, .x=0x03, .y=0x44, .sp=0x12, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbe38, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbe38, .value=0x7d, .type=IO_READ},
        {.addr=0xbe39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_037F) {
    const struct CPU_State initial_cpu = {.pc=0xf61e, .a=0xc4, .x=0x1b, .y=0xdf, .sp=0x64, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf61e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf61f, .a=0x1b, .x=0x1b, .y=0xdf, .sp=0x64, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf61e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf61e, .value=0x7d, .type=IO_READ},
        {.addr=0xf61f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x927b, .a=0x31, .x=0xb3, .y=0xfd, .sp=0x0c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x927b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x927c, .a=0xb3, .x=0xb3, .y=0xfd, .sp=0x0c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x927b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x927b, .value=0x7d, .type=IO_READ},
        {.addr=0x927c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0381) {
    const struct CPU_State initial_cpu = {.pc=0xcb35, .a=0x8c, .x=0x0d, .y=0x78, .sp=0xcc, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xcb35, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcb36, .a=0x0d, .x=0x0d, .y=0x78, .sp=0xcc, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xcb35, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcb35, .value=0x7d, .type=IO_READ},
        {.addr=0xcb36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0382) {
    const struct CPU_State initial_cpu = {.pc=0x541b, .a=0xd8, .x=0xc4, .y=0xdb, .sp=0x78, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x541b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x541c, .a=0xc4, .x=0xc4, .y=0xdb, .sp=0x78, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x541b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x541b, .value=0x7d, .type=IO_READ},
        {.addr=0x541c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0383) {
    const struct CPU_State initial_cpu = {.pc=0x028d, .a=0xfd, .x=0x6e, .y=0x90, .sp=0x6f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x028d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x028e, .a=0x6e, .x=0x6e, .y=0x90, .sp=0x6f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x028d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x028d, .value=0x7d, .type=IO_READ},
        {.addr=0x028e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0384) {
    const struct CPU_State initial_cpu = {.pc=0x71b6, .a=0xcf, .x=0x01, .y=0x98, .sp=0x81, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x71b6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x71b7, .a=0x01, .x=0x01, .y=0x98, .sp=0x81, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x71b6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x71b6, .value=0x7d, .type=IO_READ},
        {.addr=0x71b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0385) {
    const struct CPU_State initial_cpu = {.pc=0x16f9, .a=0xdb, .x=0x50, .y=0x79, .sp=0x80, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x16f9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x16fa, .a=0x50, .x=0x50, .y=0x79, .sp=0x80, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x16f9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x16f9, .value=0x7d, .type=IO_READ},
        {.addr=0x16fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0386) {
    const struct CPU_State initial_cpu = {.pc=0xdff7, .a=0xb1, .x=0xcb, .y=0x0f, .sp=0xeb, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xdff7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdff8, .a=0xcb, .x=0xcb, .y=0x0f, .sp=0xeb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xdff7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdff7, .value=0x7d, .type=IO_READ},
        {.addr=0xdff8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0387) {
    const struct CPU_State initial_cpu = {.pc=0xfe34, .a=0x92, .x=0x53, .y=0x02, .sp=0x05, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe34, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfe35, .a=0x53, .x=0x53, .y=0x02, .sp=0x05, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xfe34, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfe34, .value=0x7d, .type=IO_READ},
        {.addr=0xfe35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0388) {
    const struct CPU_State initial_cpu = {.pc=0xca4f, .a=0x40, .x=0x9d, .y=0xba, .sp=0xf7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xca4f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xca50, .a=0x9d, .x=0x9d, .y=0xba, .sp=0xf7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xca4f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xca4f, .value=0x7d, .type=IO_READ},
        {.addr=0xca50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0389) {
    const struct CPU_State initial_cpu = {.pc=0xcc21, .a=0x6f, .x=0xc3, .y=0x62, .sp=0xc3, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xcc21, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcc22, .a=0xc3, .x=0xc3, .y=0x62, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcc21, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcc21, .value=0x7d, .type=IO_READ},
        {.addr=0xcc22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6699, .a=0xb4, .x=0x61, .y=0x83, .sp=0x4a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6699, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x669a, .a=0x61, .x=0x61, .y=0x83, .sp=0x4a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6699, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6699, .value=0x7d, .type=IO_READ},
        {.addr=0x669a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x64e1, .a=0x13, .x=0xa9, .y=0x9f, .sp=0x50, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x64e1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x64e2, .a=0xa9, .x=0xa9, .y=0x9f, .sp=0x50, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x64e1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x64e1, .value=0x7d, .type=IO_READ},
        {.addr=0x64e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x8c55, .a=0xe6, .x=0x4d, .y=0x6b, .sp=0x39, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8c55, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8c56, .a=0x4d, .x=0x4d, .y=0x6b, .sp=0x39, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8c55, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8c55, .value=0x7d, .type=IO_READ},
        {.addr=0x8c56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_038D) {
    const struct CPU_State initial_cpu = {.pc=0x3b5c, .a=0x9f, .x=0x7b, .y=0x9c, .sp=0x74, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x3b5c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3b5d, .a=0x7b, .x=0x7b, .y=0x9c, .sp=0x74, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3b5c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3b5c, .value=0x7d, .type=IO_READ},
        {.addr=0x3b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_038E) {
    const struct CPU_State initial_cpu = {.pc=0x160d, .a=0x62, .x=0xf6, .y=0x9f, .sp=0xe6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x160d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x160e, .a=0xf6, .x=0xf6, .y=0x9f, .sp=0xe6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x160d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x160d, .value=0x7d, .type=IO_READ},
        {.addr=0x160e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_038F) {
    const struct CPU_State initial_cpu = {.pc=0x01fb, .a=0x5f, .x=0x1f, .y=0x5e, .sp=0x75, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x01fc, .a=0x1f, .x=0x1f, .y=0x5e, .sp=0x75, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x01fb, .value=0x7d, .type=IO_READ},
        {.addr=0x01fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0390) {
    const struct CPU_State initial_cpu = {.pc=0x426a, .a=0xaa, .x=0x3b, .y=0x49, .sp=0xce, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x426a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x426b, .a=0x3b, .x=0x3b, .y=0x49, .sp=0xce, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x426a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x426a, .value=0x7d, .type=IO_READ},
        {.addr=0x426b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x1ed9, .a=0x2a, .x=0xd9, .y=0xbf, .sp=0x79, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ed9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1eda, .a=0xd9, .x=0xd9, .y=0xbf, .sp=0x79, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1ed9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1ed9, .value=0x7d, .type=IO_READ},
        {.addr=0x1eda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0392) {
    const struct CPU_State initial_cpu = {.pc=0xb36c, .a=0x18, .x=0xca, .y=0x18, .sp=0xf8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb36c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb36d, .a=0xca, .x=0xca, .y=0x18, .sp=0xf8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb36c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb36c, .value=0x7d, .type=IO_READ},
        {.addr=0xb36d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0393) {
    const struct CPU_State initial_cpu = {.pc=0x16a1, .a=0x91, .x=0xa1, .y=0x27, .sp=0x96, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x16a1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x16a2, .a=0xa1, .x=0xa1, .y=0x27, .sp=0x96, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x16a1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x16a1, .value=0x7d, .type=IO_READ},
        {.addr=0x16a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0394) {
    const struct CPU_State initial_cpu = {.pc=0x90ac, .a=0x08, .x=0xe2, .y=0xd7, .sp=0x42, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x90ac, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x90ad, .a=0xe2, .x=0xe2, .y=0xd7, .sp=0x42, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x90ac, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x90ac, .value=0x7d, .type=IO_READ},
        {.addr=0x90ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6787, .a=0xcc, .x=0xba, .y=0x3c, .sp=0xfe, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6787, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6788, .a=0xba, .x=0xba, .y=0x3c, .sp=0xfe, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6787, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6787, .value=0x7d, .type=IO_READ},
        {.addr=0x6788, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x5663, .a=0x22, .x=0x97, .y=0x37, .sp=0x2f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5663, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5664, .a=0x97, .x=0x97, .y=0x37, .sp=0x2f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5663, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5663, .value=0x7d, .type=IO_READ},
        {.addr=0x5664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x590b, .a=0xdb, .x=0xf8, .y=0x38, .sp=0x65, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x590b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x590c, .a=0xf8, .x=0xf8, .y=0x38, .sp=0x65, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x590b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x590b, .value=0x7d, .type=IO_READ},
        {.addr=0x590c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x0f44, .a=0xb1, .x=0x0c, .y=0x8d, .sp=0xa1, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0f44, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0f45, .a=0x0c, .x=0x0c, .y=0x8d, .sp=0xa1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0f44, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0f44, .value=0x7d, .type=IO_READ},
        {.addr=0x0f45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x3547, .a=0xb1, .x=0x9e, .y=0xf2, .sp=0x1a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3547, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3548, .a=0x9e, .x=0x9e, .y=0xf2, .sp=0x1a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3547, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3547, .value=0x7d, .type=IO_READ},
        {.addr=0x3548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x9122, .a=0x4b, .x=0x52, .y=0x47, .sp=0xe7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9122, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9123, .a=0x52, .x=0x52, .y=0x47, .sp=0xe7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9122, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9122, .value=0x7d, .type=IO_READ},
        {.addr=0x9123, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x2fcc, .a=0x43, .x=0x65, .y=0x9b, .sp=0x65, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2fcc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2fcd, .a=0x65, .x=0x65, .y=0x9b, .sp=0x65, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2fcc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2fcc, .value=0x7d, .type=IO_READ},
        {.addr=0x2fcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_039C) {
    const struct CPU_State initial_cpu = {.pc=0x31e5, .a=0x7b, .x=0xe6, .y=0x35, .sp=0xb4, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x31e5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x31e6, .a=0xe6, .x=0xe6, .y=0x35, .sp=0xb4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x31e5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x31e5, .value=0x7d, .type=IO_READ},
        {.addr=0x31e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_039D) {
    const struct CPU_State initial_cpu = {.pc=0xebe5, .a=0x5c, .x=0x71, .y=0x2e, .sp=0xca, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xebe5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xebe6, .a=0x71, .x=0x71, .y=0x2e, .sp=0xca, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xebe5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xebe5, .value=0x7d, .type=IO_READ},
        {.addr=0xebe6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_039E) {
    const struct CPU_State initial_cpu = {.pc=0x440b, .a=0x60, .x=0x32, .y=0x79, .sp=0xe8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x440b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x440c, .a=0x32, .x=0x32, .y=0x79, .sp=0xe8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x440b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x440b, .value=0x7d, .type=IO_READ},
        {.addr=0x440c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x99e5, .a=0x77, .x=0xf1, .y=0x3d, .sp=0x83, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x99e5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x99e6, .a=0xf1, .x=0xf1, .y=0x3d, .sp=0x83, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x99e5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x99e5, .value=0x7d, .type=IO_READ},
        {.addr=0x99e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xa219, .a=0xae, .x=0xc8, .y=0xda, .sp=0x27, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xa219, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa21a, .a=0xc8, .x=0xc8, .y=0xda, .sp=0x27, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa219, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa219, .value=0x7d, .type=IO_READ},
        {.addr=0xa21a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x1612, .a=0xa8, .x=0xdf, .y=0x24, .sp=0xd4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1612, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1613, .a=0xdf, .x=0xdf, .y=0x24, .sp=0xd4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1612, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1612, .value=0x7d, .type=IO_READ},
        {.addr=0x1613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x2e07, .a=0x1b, .x=0x1d, .y=0x62, .sp=0x87, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x2e07, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e08, .a=0x1d, .x=0x1d, .y=0x62, .sp=0x87, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2e07, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e07, .value=0x7d, .type=IO_READ},
        {.addr=0x2e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xd1f3, .a=0x3d, .x=0x2d, .y=0x1a, .sp=0xa4, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd1f4, .a=0x2d, .x=0x2d, .y=0x1a, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd1f3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd1f3, .value=0x7d, .type=IO_READ},
        {.addr=0xd1f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x5c96, .a=0x06, .x=0x78, .y=0x2c, .sp=0xf8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5c96, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5c97, .a=0x78, .x=0x78, .y=0x2c, .sp=0xf8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5c96, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5c96, .value=0x7d, .type=IO_READ},
        {.addr=0x5c97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x70df, .a=0x6f, .x=0x4e, .y=0x08, .sp=0x66, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x70df, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x70e0, .a=0x4e, .x=0x4e, .y=0x08, .sp=0x66, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x70df, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x70df, .value=0x7d, .type=IO_READ},
        {.addr=0x70e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x6468, .a=0x35, .x=0xca, .y=0x33, .sp=0xbf, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6468, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6469, .a=0xca, .x=0xca, .y=0x33, .sp=0xbf, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6468, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6468, .value=0x7d, .type=IO_READ},
        {.addr=0x6469, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x5073, .a=0x47, .x=0xe2, .y=0xa6, .sp=0x0f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5073, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5074, .a=0xe2, .x=0xe2, .y=0xa6, .sp=0x0f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5073, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5073, .value=0x7d, .type=IO_READ},
        {.addr=0x5074, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x023c, .a=0x68, .x=0xa8, .y=0x4c, .sp=0xae, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x023c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x023d, .a=0xa8, .x=0xa8, .y=0x4c, .sp=0xae, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x023c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x023c, .value=0x7d, .type=IO_READ},
        {.addr=0x023d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xc0d3, .a=0x66, .x=0xd4, .y=0xab, .sp=0x20, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc0d4, .a=0xd4, .x=0xd4, .y=0xab, .sp=0x20, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc0d3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc0d3, .value=0x7d, .type=IO_READ},
        {.addr=0xc0d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x2e38, .a=0x19, .x=0xac, .y=0xd9, .sp=0x3a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2e38, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e39, .a=0xac, .x=0xac, .y=0xd9, .sp=0x3a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2e38, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e38, .value=0x7d, .type=IO_READ},
        {.addr=0x2e39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x7074, .a=0xde, .x=0x3d, .y=0x38, .sp=0xe5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7074, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7075, .a=0x3d, .x=0x3d, .y=0x38, .sp=0xe5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7074, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7074, .value=0x7d, .type=IO_READ},
        {.addr=0x7075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x37ac, .a=0x64, .x=0xfa, .y=0xff, .sp=0xb9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x37ac, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x37ad, .a=0xfa, .x=0xfa, .y=0xff, .sp=0xb9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x37ac, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x37ac, .value=0x7d, .type=IO_READ},
        {.addr=0x37ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xc800, .a=0xce, .x=0x0b, .y=0xed, .sp=0xad, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xc800, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc801, .a=0x0b, .x=0x0b, .y=0xed, .sp=0xad, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc800, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc800, .value=0x7d, .type=IO_READ},
        {.addr=0xc801, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x83de, .a=0xb5, .x=0x66, .y=0xba, .sp=0xe9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x83de, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x83df, .a=0x66, .x=0x66, .y=0xba, .sp=0xe9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x83de, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x83de, .value=0x7d, .type=IO_READ},
        {.addr=0x83df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xf3bc, .a=0x24, .x=0xb8, .y=0x47, .sp=0x3b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf3bc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf3bd, .a=0xb8, .x=0xb8, .y=0x47, .sp=0x3b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf3bc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf3bc, .value=0x7d, .type=IO_READ},
        {.addr=0xf3bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x7b54, .a=0xd2, .x=0x77, .y=0x2f, .sp=0xa3, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7b54, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7b55, .a=0x77, .x=0x77, .y=0x2f, .sp=0xa3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7b54, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7b54, .value=0x7d, .type=IO_READ},
        {.addr=0x7b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x3915, .a=0x4b, .x=0x82, .y=0xa9, .sp=0x1f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3915, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3916, .a=0x82, .x=0x82, .y=0xa9, .sp=0x1f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3915, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3915, .value=0x7d, .type=IO_READ},
        {.addr=0x3916, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xee0c, .a=0x41, .x=0x98, .y=0x9c, .sp=0x23, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xee0c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xee0d, .a=0x98, .x=0x98, .y=0x9c, .sp=0x23, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xee0c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xee0c, .value=0x7d, .type=IO_READ},
        {.addr=0xee0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x2bca, .a=0xeb, .x=0x17, .y=0xd4, .sp=0x4d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2bca, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2bcb, .a=0x17, .x=0x17, .y=0xd4, .sp=0x4d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2bca, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2bca, .value=0x7d, .type=IO_READ},
        {.addr=0x2bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xa211, .a=0x5d, .x=0x2c, .y=0x2b, .sp=0x8d, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa211, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa212, .a=0x2c, .x=0x2c, .y=0x2b, .sp=0x8d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa211, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa211, .value=0x7d, .type=IO_READ},
        {.addr=0xa212, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x5531, .a=0xc5, .x=0xe0, .y=0xf8, .sp=0x98, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5531, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5532, .a=0xe0, .x=0xe0, .y=0xf8, .sp=0x98, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5531, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5531, .value=0x7d, .type=IO_READ},
        {.addr=0x5532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xd871, .a=0x9a, .x=0xbb, .y=0xd9, .sp=0x04, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd871, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd872, .a=0xbb, .x=0xbb, .y=0xd9, .sp=0x04, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd871, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd871, .value=0x7d, .type=IO_READ},
        {.addr=0xd872, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xc2bd, .a=0xdd, .x=0x3d, .y=0x16, .sp=0xef, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc2bd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc2be, .a=0x3d, .x=0x3d, .y=0x16, .sp=0xef, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc2bd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc2bd, .value=0x7d, .type=IO_READ},
        {.addr=0xc2be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xcfb0, .a=0x75, .x=0x05, .y=0xdc, .sp=0xae, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcfb1, .a=0x05, .x=0x05, .y=0xdc, .sp=0xae, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xcfb0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcfb0, .value=0x7d, .type=IO_READ},
        {.addr=0xcfb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x0527, .a=0xda, .x=0xf0, .y=0x04, .sp=0x77, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0527, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0528, .a=0xf0, .x=0xf0, .y=0x04, .sp=0x77, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0527, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0527, .value=0x7d, .type=IO_READ},
        {.addr=0x0528, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xd4b9, .a=0x06, .x=0x7b, .y=0xb6, .sp=0xa6, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd4ba, .a=0x7b, .x=0x7b, .y=0xb6, .sp=0xa6, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd4b9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd4b9, .value=0x7d, .type=IO_READ},
        {.addr=0xd4ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xdf13, .a=0xab, .x=0x78, .y=0xc9, .sp=0x1e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xdf13, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf14, .a=0x78, .x=0x78, .y=0xc9, .sp=0x1e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xdf13, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf13, .value=0x7d, .type=IO_READ},
        {.addr=0xdf14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xd2f2, .a=0xc9, .x=0xf8, .y=0xf5, .sp=0x9e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xd2f2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd2f3, .a=0xf8, .x=0xf8, .y=0xf5, .sp=0x9e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd2f2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd2f2, .value=0x7d, .type=IO_READ},
        {.addr=0xd2f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x3a3b, .a=0x0a, .x=0x0b, .y=0xd4, .sp=0x24, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3a3b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3a3c, .a=0x0b, .x=0x0b, .y=0xd4, .sp=0x24, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3a3b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3a3b, .value=0x7d, .type=IO_READ},
        {.addr=0x3a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x2c33, .a=0xb6, .x=0xdc, .y=0x8d, .sp=0xd5, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2c33, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2c34, .a=0xdc, .x=0xdc, .y=0x8d, .sp=0xd5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2c33, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2c33, .value=0x7d, .type=IO_READ},
        {.addr=0x2c34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x8a06, .a=0x3d, .x=0xf5, .y=0xc6, .sp=0x73, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a06, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8a07, .a=0xf5, .x=0xf5, .y=0xc6, .sp=0x73, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8a06, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8a06, .value=0x7d, .type=IO_READ},
        {.addr=0x8a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xa2e4, .a=0x1e, .x=0xf5, .y=0x8d, .sp=0xfc, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa2e5, .a=0xf5, .x=0xf5, .y=0x8d, .sp=0xfc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa2e4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa2e4, .value=0x7d, .type=IO_READ},
        {.addr=0xa2e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x0cdd, .a=0xb1, .x=0xe7, .y=0xfe, .sp=0xad, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0cdd, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0cde, .a=0xe7, .x=0xe7, .y=0xfe, .sp=0xad, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0cdd, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0cdd, .value=0x7d, .type=IO_READ},
        {.addr=0x0cde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xcb60, .a=0xc5, .x=0xbe, .y=0x80, .sp=0x71, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xcb60, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcb61, .a=0xbe, .x=0xbe, .y=0x80, .sp=0x71, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcb60, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcb60, .value=0x7d, .type=IO_READ},
        {.addr=0xcb61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xe6b0, .a=0x1a, .x=0x1d, .y=0x8a, .sp=0x37, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe6b0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe6b1, .a=0x1d, .x=0x1d, .y=0x8a, .sp=0x37, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe6b0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe6b0, .value=0x7d, .type=IO_READ},
        {.addr=0xe6b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x2e83, .a=0xc4, .x=0x6f, .y=0xcc, .sp=0xcd, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2e83, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e84, .a=0x6f, .x=0x6f, .y=0xcc, .sp=0xcd, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2e83, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e83, .value=0x7d, .type=IO_READ},
        {.addr=0x2e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4a84, .a=0x1a, .x=0x5f, .y=0xf2, .sp=0xd8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4a84, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4a85, .a=0x5f, .x=0x5f, .y=0xf2, .sp=0xd8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4a84, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4a84, .value=0x7d, .type=IO_READ},
        {.addr=0x4a85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x37e5, .a=0x4c, .x=0x8c, .y=0xca, .sp=0x62, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x37e5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x37e6, .a=0x8c, .x=0x8c, .y=0xca, .sp=0x62, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x37e5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x37e5, .value=0x7d, .type=IO_READ},
        {.addr=0x37e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x8ea5, .a=0xa9, .x=0xc8, .y=0x9f, .sp=0x5a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x8ea5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8ea6, .a=0xc8, .x=0xc8, .y=0x9f, .sp=0x5a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8ea5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8ea5, .value=0x7d, .type=IO_READ},
        {.addr=0x8ea6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xb169, .a=0xd8, .x=0x28, .y=0x2c, .sp=0xb7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb169, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb16a, .a=0x28, .x=0x28, .y=0x2c, .sp=0xb7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb169, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb169, .value=0x7d, .type=IO_READ},
        {.addr=0xb16a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x955b, .a=0xac, .x=0xb1, .y=0xc1, .sp=0x74, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x955b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x955c, .a=0xb1, .x=0xb1, .y=0xc1, .sp=0x74, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x955b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x955b, .value=0x7d, .type=IO_READ},
        {.addr=0x955c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x67fe, .a=0x1c, .x=0x29, .y=0x3f, .sp=0x7e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x67fe, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x67ff, .a=0x29, .x=0x29, .y=0x3f, .sp=0x7e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x67fe, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x67fe, .value=0x7d, .type=IO_READ},
        {.addr=0x67ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xea85, .a=0xb0, .x=0x2e, .y=0x5b, .sp=0x2c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xea85, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xea86, .a=0x2e, .x=0x2e, .y=0x5b, .sp=0x2c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xea85, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xea85, .value=0x7d, .type=IO_READ},
        {.addr=0xea86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x72e9, .a=0xdb, .x=0x6f, .y=0x7e, .sp=0x36, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x72e9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x72ea, .a=0x6f, .x=0x6f, .y=0x7e, .sp=0x36, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x72e9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x72e9, .value=0x7d, .type=IO_READ},
        {.addr=0x72ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x901d, .a=0x88, .x=0x31, .y=0xd3, .sp=0x98, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x901d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x901e, .a=0x31, .x=0x31, .y=0xd3, .sp=0x98, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x901d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x901d, .value=0x7d, .type=IO_READ},
        {.addr=0x901e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x98f4, .a=0x55, .x=0x56, .y=0x6d, .sp=0x8d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x98f4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x98f5, .a=0x56, .x=0x56, .y=0x6d, .sp=0x8d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x98f4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x98f4, .value=0x7d, .type=IO_READ},
        {.addr=0x98f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x5fa0, .a=0x5f, .x=0xdc, .y=0xaa, .sp=0xef, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5fa1, .a=0xdc, .x=0xdc, .y=0xaa, .sp=0xef, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5fa0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5fa0, .value=0x7d, .type=IO_READ},
        {.addr=0x5fa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x8df0, .a=0x89, .x=0x11, .y=0x12, .sp=0x98, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x8df0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8df1, .a=0x11, .x=0x11, .y=0x12, .sp=0x98, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8df0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8df0, .value=0x7d, .type=IO_READ},
        {.addr=0x8df1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x7119, .a=0xaa, .x=0x2b, .y=0xa6, .sp=0x6d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7119, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x711a, .a=0x2b, .x=0x2b, .y=0xa6, .sp=0x6d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7119, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7119, .value=0x7d, .type=IO_READ},
        {.addr=0x711a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xea21, .a=0x61, .x=0x42, .y=0xed, .sp=0x79, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xea21, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xea22, .a=0x42, .x=0x42, .y=0xed, .sp=0x79, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xea21, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xea21, .value=0x7d, .type=IO_READ},
        {.addr=0xea22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x5b77, .a=0x52, .x=0xef, .y=0x28, .sp=0xb3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5b77, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5b78, .a=0xef, .x=0xef, .y=0x28, .sp=0xb3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5b77, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5b77, .value=0x7d, .type=IO_READ},
        {.addr=0x5b78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xbf88, .a=0xee, .x=0x6e, .y=0xa9, .sp=0x7e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xbf88, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbf89, .a=0x6e, .x=0x6e, .y=0xa9, .sp=0x7e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbf88, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbf88, .value=0x7d, .type=IO_READ},
        {.addr=0xbf89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xcd38, .a=0x3f, .x=0x2e, .y=0x9f, .sp=0x0a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xcd38, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcd39, .a=0x2e, .x=0x2e, .y=0x9f, .sp=0x0a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xcd38, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcd38, .value=0x7d, .type=IO_READ},
        {.addr=0xcd39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6faf, .a=0x3e, .x=0xfb, .y=0x00, .sp=0x11, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6faf, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6fb0, .a=0xfb, .x=0xfb, .y=0x00, .sp=0x11, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6faf, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6faf, .value=0x7d, .type=IO_READ},
        {.addr=0x6fb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xd950, .a=0x72, .x=0xcc, .y=0x9d, .sp=0x08, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd950, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd951, .a=0xcc, .x=0xcc, .y=0x9d, .sp=0x08, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd950, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd950, .value=0x7d, .type=IO_READ},
        {.addr=0xd951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x0dfc, .a=0x23, .x=0x62, .y=0x02, .sp=0x62, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0dfd, .a=0x62, .x=0x62, .y=0x02, .sp=0x62, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0dfc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0dfc, .value=0x7d, .type=IO_READ},
        {.addr=0x0dfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x7cb7, .a=0xb8, .x=0x18, .y=0xfd, .sp=0x50, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x7cb7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7cb8, .a=0x18, .x=0x18, .y=0xfd, .sp=0x50, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7cb7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7cb7, .value=0x7d, .type=IO_READ},
        {.addr=0x7cb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xa123, .a=0x17, .x=0x3e, .y=0x59, .sp=0x24, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa123, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa124, .a=0x3e, .x=0x3e, .y=0x59, .sp=0x24, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa123, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa123, .value=0x7d, .type=IO_READ},
        {.addr=0xa124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xd537, .a=0xe4, .x=0x33, .y=0xd5, .sp=0x49, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd537, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd538, .a=0x33, .x=0x33, .y=0xd5, .sp=0x49, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd537, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd537, .value=0x7d, .type=IO_READ},
        {.addr=0xd538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xd153, .a=0xc1, .x=0xa3, .y=0x70, .sp=0xf3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd153, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd154, .a=0xa3, .x=0xa3, .y=0x70, .sp=0xf3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd153, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd153, .value=0x7d, .type=IO_READ},
        {.addr=0xd154, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xdcfb, .a=0x3d, .x=0xa0, .y=0x4f, .sp=0x81, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xdcfb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdcfc, .a=0xa0, .x=0xa0, .y=0x4f, .sp=0x81, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdcfb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdcfb, .value=0x7d, .type=IO_READ},
        {.addr=0xdcfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x5cb4, .a=0xba, .x=0x1f, .y=0xf5, .sp=0xa8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5cb5, .a=0x1f, .x=0x1f, .y=0xf5, .sp=0xa8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5cb4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5cb4, .value=0x7d, .type=IO_READ},
        {.addr=0x5cb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x77a1, .a=0x74, .x=0x25, .y=0xda, .sp=0x4b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x77a1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x77a2, .a=0x25, .x=0x25, .y=0xda, .sp=0x4b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x77a1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x77a1, .value=0x7d, .type=IO_READ},
        {.addr=0x77a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x6630, .a=0xb8, .x=0xda, .y=0x22, .sp=0x67, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6630, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6631, .a=0xda, .x=0xda, .y=0x22, .sp=0x67, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6630, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6630, .value=0x7d, .type=IO_READ},
        {.addr=0x6631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xeaa5, .a=0xed, .x=0x57, .y=0xb7, .sp=0x80, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeaa6, .a=0x57, .x=0x57, .y=0xb7, .sp=0x80, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xeaa5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeaa5, .value=0x7d, .type=IO_READ},
        {.addr=0xeaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xd872, .a=0x7c, .x=0x95, .y=0xd7, .sp=0xa2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd872, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd873, .a=0x95, .x=0x95, .y=0xd7, .sp=0xa2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd872, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd872, .value=0x7d, .type=IO_READ},
        {.addr=0xd873, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xb5c2, .a=0x67, .x=0x17, .y=0x95, .sp=0x4c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c2, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xb5c3, .a=0x17, .x=0x17, .y=0x95, .sp=0x4c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb5c2, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xb5c2, .value=0x7d, .type=IO_READ},
        {.addr=0xb5c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x7f9c, .a=0xe4, .x=0xf5, .y=0xe3, .sp=0x14, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7f9c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7f9d, .a=0xf5, .x=0xf5, .y=0xe3, .sp=0x14, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7f9c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7f9c, .value=0x7d, .type=IO_READ},
        {.addr=0x7f9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x068d, .a=0x76, .x=0x6b, .y=0x51, .sp=0x4d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x068d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x068e, .a=0x6b, .x=0x6b, .y=0x51, .sp=0x4d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x068d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x068d, .value=0x7d, .type=IO_READ},
        {.addr=0x068e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xeb04, .a=0x0c, .x=0xef, .y=0xae, .sp=0x13, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xeb04, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeb05, .a=0xef, .x=0xef, .y=0xae, .sp=0x13, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xeb04, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xeb04, .value=0x7d, .type=IO_READ},
        {.addr=0xeb05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7D, _7D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x4d65, .a=0xb3, .x=0x9d, .y=0xa2, .sp=0x96, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4d65, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4d66, .a=0x9d, .x=0x9d, .y=0xa2, .sp=0x96, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4d65, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4d65, .value=0x7d, .type=IO_READ},
        {.addr=0x4d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
